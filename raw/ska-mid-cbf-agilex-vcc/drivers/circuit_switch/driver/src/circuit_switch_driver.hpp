#ifndef CIRCUIT_SWITCH_H
#define CIRCUIT_SWITCH_H

#include <vector>
#include <string>

#include <algorithm>
#include <stdexcept>

#include "circuit_switch_regset.hpp"
#include "fpga_driver_base.hpp"

namespace fpga_driver {
    struct circuit_switch_param_t {
    };

    struct circuit_switch_config_t {
        uint8_t output = 255;
        uint8_t input = 255;
    };

    struct circuit_switch_status_t {
        uint8_t num_inputs = 255;
        uint8_t num_outputs = 255;
        std::vector<circuit_switch_config_t> connected;
    };

    class CircuitSwitch : public fpga_driver::Base<circuit_switch_config_t, circuit_switch_status_t>
    {
        public:
            CircuitSwitch (circuit_switch_param_t &params, RegisterSetInfos &regset, Logger &logger) 
            : Base<circuit_switch_config_t,circuit_switch_status_t>(regset, logger), params_(params) {
                log->info("Constructing...");
                RegisterMap<circuit_switch_regset::circuit_switch_reg_t> *reg_map = new RegisterMap<circuit_switch_regset::circuit_switch_reg_t>(get_regset_info("csr", circuit_switch_regset::version));
                csr = reg_map->regs();
            };

            ~CircuitSwitch () {
                log->info("Destructor...");
                csr.reset();
            };

            void setIdentity(const std::string &name, const std::string &address) {
                this->name = name;
                this->address = address;
            };

            virtual void get_default_config (circuit_switch_config_t &c) {
                c.output = csr->number_of_inputs; // num_inputs means disconnected
                c.input = csr->number_of_inputs;
            };

        private:
            RegisterMap<circuit_switch_regset::circuit_switch_reg_t> *reg_map;
            std::shared_ptr<circuit_switch_regset::circuit_switch_reg_t> csr = nullptr;
            circuit_switch_param_t params_;

            std::string name;
            std::string address;

            virtual void configure_(const circuit_switch_config_t &c) {
                log->info("Configuring...");

                // Check if port you are trying to connect to exists
                if (c.input < 0  || c.input >= csr->number_of_inputs ||
                    c.output < 0 || c.output >= csr->number_of_outputs) {
                    throw std::out_of_range("Input or Output value out of range. Input:"+std::to_string(c.input)+ ", Output: "+std::to_string(c.input)+". Max input value: "+
                    std::to_string(csr->number_of_inputs)+", Max output value: "+std::to_string(csr->number_of_outputs));
                }

                // Ensure input is not already connected
                if(csr->input_select[c.output] == 255 || csr->input_select[c.output] == csr->number_of_inputs) {
                    csr->input_select[c.output] = c.input;
                } else {
                    throw std::invalid_argument("Failed to connect Input '"+std::to_string(c.input)+"' to Output '"\
                    +std::to_string(c.output)+"', already connected to Input '"+std::to_string(csr->input_select[c.output])+"'");
                }                
            };

            virtual void status_(circuit_switch_status_t &s, bool clear = false) {
                log->info("Fetching Status..."); 

                s.num_inputs = csr->number_of_inputs;
                s.num_outputs = csr->number_of_outputs;
                s.connected = std::vector<circuit_switch_config_t>(s.num_outputs,circuit_switch_config_t{255,255});

                for(int i = 0; i < s.num_outputs; i++) {
                    s.connected[i].input = csr->input_select[i];
                    s.connected[i].output = static_cast<uint8_t>(i);
                }
            };

            virtual void recover_() {
                log->info("Recovering circuit_switch...");
                for(unsigned i = 0; i < csr->number_of_outputs; i++) {
                    csr->input_select[i] = csr->number_of_inputs;
                }
            };
            
            virtual void deconfigure_(const circuit_switch_config_t &c) {
                log->info("Deconfiguring...");
                if (c.output < 0 || c.output >= csr->number_of_outputs) {
                    throw std::invalid_argument("Invalid output index");
                }
                csr->input_select[c.output] = csr->number_of_inputs;
            };

            virtual void start_() {log->info("Starting circuit_switch...");};
            virtual void stop_(bool force = false) {log->info("Stopping circuit_switch...");};
    };
};
#endif // CIRCUIT_SWITCH_H
