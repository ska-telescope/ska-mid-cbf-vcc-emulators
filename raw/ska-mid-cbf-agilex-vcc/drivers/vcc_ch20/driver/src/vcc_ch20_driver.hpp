#ifndef VCC_CH20_API_H
#define VCC_CH20_API_H

#include <cstdint>
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

#include "fpga_driver_base.hpp"
#include "register_map.hpp"
#include "vcc_ch20_regset.hpp"
#include "channeliser_gains.hpp"

namespace fpga_driver {

    struct vcc_ch20_param_t {
        uint16_t channels_out = 10;
        uint16_t input_frame_size = 18;
        uint8_t polarisations = 2;
    };

    struct vcc_ch20_config_t {
        uint32_t sample_rate;             // 0 = no-config
        uint8_t pol;                      // valid 0 = 'X', 1 = 'Y'
        uint16_t channel;                 // valid 0 to num_channels-1
        float gain;
    };

    struct vcc_ch20_status_t {
        uint32_t sample_rate;
        int num_channels;
        int num_polarisations;
        std::vector<std::vector<float>> gains;       // Array of gains with size num_channels*num_polarisations

        // Default constructor
        vcc_ch20_status_t() : gains(10, std::vector<float>(2)) {}

        // Constructor to initialize the number of channels and polarisations actually set in the parameters
        vcc_ch20_status_t(uint16_t channels, uint8_t polarisations)
            : num_channels(channels), num_polarisations(polarisations), gains(channels, std::vector<float>(polarisations)) {}
    };

    class VCC_CH20_Driver : public fpga_driver::Base<vcc_ch20_config_t, vcc_ch20_status_t>
    {
        public:
            VCC_CH20_Driver(vcc_ch20_param_t &params, RegisterSetInfos &regset, Logger &logger)
            : fpga_driver::Base<vcc_ch20_config_t,vcc_ch20_status_t>(regset, logger), params_(params) {
                reg_map_ = new RegisterMap<vcc_ch20_regset::vcc_ch20_reg_t, vcc_ch20_regset::vcc_ch20_mem_t>(get_regset_info("csr", vcc_ch20_regset::version));
                csr_ = reg_map_->regs();
            };  

            ~VCC_CH20_Driver() {
                // Free the memory that was created in the constructor.
                csr_.reset();
            };

            virtual void get_default_config(vcc_ch20_config_t &config) {
                config.sample_rate = 0;
                config.pol = 0;
                config.channel = 0;
                config.gain = 0.25f;
            };

    private:
        RegisterMap<vcc_ch20_regset::vcc_ch20_reg_t, vcc_ch20_regset::vcc_ch20_mem_t> *reg_map_;
        std::shared_ptr<vcc_ch20_regset::vcc_ch20_reg_t> csr_ = nullptr;
        vcc_ch20_param_t params_;

        virtual void recover_() {
            log->info("Recovering VCC_CH20...");

            // Create a default vcc_ch20_config_t instance:
            vcc_ch20_config_t config;
            get_default_config(config);

            // Set all gains to default (1.0):
            for (uint8_t pol = 0; pol < 2; pol++) {
                for (uint16_t channel = 0; channel < 10; channel++) {
                    config.channel = channel;
                    config.pol = pol;
                    configure_(config);
                }
            }
        };

        virtual void configure_(const vcc_ch20_config_t &config) {
            log->info("Configuring VCC_CH20...");
            if (config.sample_rate == 0) {
                log->info("Sample rate is set to 0, the 'no-config' setting. VCC_CH20 sample rate will not be configured.");
            } else {
                // Set expected sample rate by writing to frame_count register:
                log->info("In configure: setting sample rate as: " + std::to_string(config.sample_rate));
                uint32_t frame_count = config.sample_rate / params_.input_frame_size;
                csr_->frame_count = frame_count;
            }

            log->info("In configure: setting gain as: " + std::to_string(config.gain) + 
                " for channel: " + std::to_string(config.channel) + ", pol: " + std::to_string(config.pol));

            // Calculate the (pol, channel) index:
            uint32_t index = config.channel + config.pol * params_.channels_out;

            // Set gain for one (pol, channel):
            uint16_t shift = gain_to_shift(config.gain, params_.channels_out); 
            uint16_t scale = gain_to_scale(config.gain, params_.channels_out);

            if (shift > 0xF) {
                throw std::runtime_error("In configure: Shift value ( " + std::to_string(shift) +
                    ") out of range (0 to 15) for gain value " + std::to_string(config.gain) +
                    ", coarse channel " + std::to_string(config.channel) +
                    ", polarisation " + std::to_string(config.pol) + ".");
            }
            if (scale > 0xFFFF) {
                throw std::runtime_error("In configure: Scale value ( " + std::to_string(scale) +
                    ") out of range (0 to 65535) for gain value " + std::to_string(config.gain) +
                    ", coarse channel " + std::to_string(config.channel) +
                    ", polarisation " + std::to_string(config.pol) + ".");
            }

            // Write shift, scale values to frequency slice config register:
            csr_->config_fs_sft_scl[index].fs_sft = shift;
            csr_->config_fs_sft_scl[index].fs_scl = scale;

            log->info("In configure: frame_count:  " + std::to_string(csr_->frame_count));
            log->info("In configure: config_fs_sft_scl[" + std::to_string(index) + "].fld.fs_sft:   " + std::to_string(csr_->config_fs_sft_scl[index].fs_sft));
            log->info("In configure: config_fs_sft_scl[" + std::to_string(index) + "].fld.fs_scl:   " + std::to_string(csr_->config_fs_sft_scl[index].fs_scl));
        };

        virtual void deconfigure_(vcc_ch20_config_t config) {
            // Set gain to default (1.0) for one (pol, channel):
            get_default_config(config);
            config.gain = 1.0f;
            configure(config);
        };

        virtual void status_(vcc_ch20_status_t &status, bool clear) {
            log->info("Getting status of VCC_CH20...");

            uint16_t shift;
            uint16_t scale;

            // Loop through register fields
            for (uint8_t pol = 0; pol < params_.polarisations; pol++) {
                for (uint16_t channel = 0; channel < params_.channels_out; channel++) {
                    shift = csr_->config_fs_sft_scl[channel + pol * params_.channels_out].fs_sft;
                    scale = csr_->config_fs_sft_scl[channel + pol * params_.channels_out].fs_scl;
                    float gain = shift_scale_to_gain(shift, scale);
                    status.gains[channel][pol] = gain;

                    log->info("In status: gain is calculated as: " + std::to_string(gain) +
                        " for channel: " + std::to_string(channel) + ", pol: " + std::to_string(pol));
                }
            }

            uint32_t frame_count = csr_->frame_count;
            status.sample_rate = frame_count * params_.input_frame_size;
            
            log->info("In status: frame_count is calculated as:  " + std::to_string(frame_count));
            log->info("In status: sample_rate is calculated as:  " + std::to_string(status.sample_rate));
        };

        virtual void start_() {
            log->info("Starting VCC_CH20...");
        };

        virtual void stop_(bool force = false) {
            log->info("Stopping VCC_CH20...");
        };

    };

}

#endif // VCC_CH20_DRIVER_H