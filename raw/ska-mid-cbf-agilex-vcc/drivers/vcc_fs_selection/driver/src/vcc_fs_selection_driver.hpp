#ifndef VCC_FS_SELECTION_H
#define VCC_FS_SELECTION_H

#include <vector>
#include <string>

#include <algorithm>
#include <stdexcept>

#include "vcc_fs_selection_regset.hpp"
#include "fpga_driver_base.hpp"

namespace fpga_driver {
    struct vcc_fs_selection_param_t {
    };

    struct vcc_fs_selection_config_t
    {
        uint32_t band_select = 1;                 // band range [1..5]
        uint32_t band_start_channel[2] = {0, 0};  // 2x channeliser band 4/5 start start channel offset range [0..2]
    };

    struct vcc_fs_selection_status_t
    {
        uint32_t band_select_status = 0;
        uint32_t band_start_channel_status[2] = {0, 0};
    };

    class Vcc_Fs_Selection_Driver : public fpga_driver::Base<vcc_fs_selection_config_t, vcc_fs_selection_status_t>
    {
        public:
        Vcc_Fs_Selection_Driver (vcc_fs_selection_param_t &params, RegisterSetInfos &regset, Logger &logger)
        : Base<vcc_fs_selection_config_t,vcc_fs_selection_status_t>(regset, logger), params_(params)
        {
            log->info("Constructing...");
            RegisterMap<vcc_fs_selection_regset::vcc_fs_selection_reg_t> *reg_map = new RegisterMap<vcc_fs_selection_regset::vcc_fs_selection_reg_t>(get_regset_info("csr", vcc_fs_selection_regset::version));
            csr = reg_map->regs();
        };

        ~Vcc_Fs_Selection_Driver ()
        {
            log->info("Destructor...");
            csr.reset();
        };

        void setIdentity(const std::string &name, const std::string &address)
        {
            this->name = name;
            this->address = address;
        };

        virtual void get_default_config (vcc_fs_selection_config_t &c)
        {
            c.band_select = 1;
            c.band_start_channel[0] = 0;
            c.band_start_channel[1] = 0;
        };

    private:
        RegisterMap<vcc_fs_selection_regset::vcc_fs_selection_reg_t> *reg_map;
        std::shared_ptr<vcc_fs_selection_regset::vcc_fs_selection_reg_t> csr = nullptr;
        vcc_fs_selection_param_t params_;

        std::string name;
        std::string address;

        virtual void configure_(const vcc_fs_selection_config_t &c)
        {
            uint32_t band_45_1_mask = 1 << 0;
            uint32_t band_123_mask =  1 << 8;
            uint32_t band_45_2_mask = 1 << 13;
            uint32_t tmp = csr->fs_1_26_select;

            log->info("Configuring...");

            // Check that selected band is in valid range
            if ((c.band_select == 0 ) || (c.band_select > 5 ))
                throw std::out_of_range("Band select value is out of range [1 to 5]. band_select = "+std::to_string(c.band_select));
            // B123
            else if ((c.band_select == 1) || (c.band_select == 2) || (c.band_select == 3))
            {
                for(unsigned i = 0; i <= 9; i++)
                    tmp = tmp | (band_123_mask <<= i);    // select B123 FS #1 thru B123 FS #10
                csr->fs_1_26_select = tmp;
            }
            else if ((c.band_select == 4) || (c.band_select == 5))
            {
            // B45.1
                if (c.band_start_channel[0] > 2)
                    throw std::out_of_range("B45.1 start channel value out of range[0 to 2]. Band start channel = "+std::to_string(c.band_start_channel[0]));
                for(unsigned i = 0; i <= 12; i++)
                    tmp = tmp & ~(band_45_1_mask <<= i);  // select B45.1 FS #1 thru B45.1 FS #13
                if (c.band_start_channel[0] == 1)
                    tmp = tmp | (band_45_1_mask <<= 0);   // select B45.1 FS #14
                if (c.band_start_channel[0] == 2)
                {
                    tmp = tmp | (band_45_1_mask <<= 0);   // select B45.1 FS #14
                    tmp = tmp | (band_45_1_mask <<= 1);   // select B45.1 FS #15
                }
            // B45.2
                if (c.band_start_channel[1] > 2)
                    throw std::out_of_range("B45.2 start channel value out of range[0 to 2]. Band start channel = "+std::to_string(c.band_start_channel[1]));
                for(unsigned i = 0; i <= 12; i++)
                    tmp = tmp & ~(band_45_2_mask <<= i);  // select B45.2 FS #1 thru B45.1 FS #13
                if (c.band_start_channel[0] == 1)
                    tmp = tmp | (band_45_2_mask <<= 11);  // select B45.2 FS #14
                if (c.band_start_channel[0] == 2)
                {
                    tmp = tmp | (band_45_2_mask <<= 11);  // select B45.2 FS #14
                    tmp = tmp | (band_45_2_mask <<= 12);  // select B45.2 FS #15
                }

                csr->fs_1_26_select = tmp;
            }
        };

        virtual void status_(vcc_fs_selection_status_t &s, bool clear = false)
        {
            uint32_t band_45_1_mask = 1 << 0;
            uint32_t band_123_mask =  1 << 8;
            uint32_t band_45_2_mask = 1 << 13;
            uint32_t fs_1_26_select_reg = csr->fs_1_26_select;
            uint32_t band_select;
            uint32_t band_start_channel[2] = {0, 0};

            log->info("Fetching Status...");

            // Determine the status based on the applied register configuration...

            // check if B123 FS #1 thru B123 FS #10 selected
            band_select = 1;
            for(unsigned i = 0; i <= 9; i++)
                if ((fs_1_26_select_reg & (band_123_mask <<= i)) != 0)
                    ;
                else
                    band_select = 0;

            if (band_select == 0)
            {
                band_select = 4;
                // check B45.1
                for(unsigned i = 0; i <= 1; i++)  // check B45.1 FS #1 and FS #2 selection
                    if ((fs_1_26_select_reg & (band_45_1_mask <<= i)) == 0)
                        ;
                    else
                        band_start_channel[0] = i+1;
                for(unsigned i = 2; i <= 12; i++)  // check B45.1 FS #3 thru FS #13 selection
                    if ((fs_1_26_select_reg & (band_45_1_mask <<= i)) == 0)
                        ;
                    else
                        band_select = 0;
                // check B45.2
                for(unsigned i = 0; i <= 10; i++)  // check B45.2 FS #14 thru FS #24 selection
                    if ((fs_1_26_select_reg & (band_45_2_mask <<= i)) == 0)
                        ;
                    else
                        band_select = 0;
                for(unsigned i = 11; i <= 12; i++)  // check B45.2 FS #25 and FS #26 selection
                    if ((fs_1_26_select_reg & (band_45_2_mask <<= i)) == 0)
                        ;
                    else
                        band_start_channel[1] = i+1;
            }

            s.band_select_status = band_select;
            s.band_start_channel_status[0] = band_start_channel[0];
            s.band_start_channel_status[1] = band_start_channel[1];
        };

        virtual void recover_()
        {
            uint32_t band_123_mask =  1 << 8;
            uint32_t tmp = 0;

            log->info("Recovering vcc_fs_selection to B123 configuration.");

            for(unsigned i = 0; i <= 9; i++)
                tmp = tmp | (band_123_mask <<= i);    // select B123 FS #1 thru B123 FS #10)
            csr->fs_1_26_select = tmp;
        };

        virtual void deconfigure_(const vcc_fs_selection_config_t &c)
        {
            log->info("Deconfiguring- recover vcc_fs_selection to B123 configuration.");

            recover_();
        };

        virtual void start_()
        {
            log->info("Starting vcc_fs_selection.");
        };

        virtual void stop_(bool force = false)
        {
            log->info("Stopping vcc_fs_selection.");
        };
    };
};
#endif // VCC_FS_SELECTION_H