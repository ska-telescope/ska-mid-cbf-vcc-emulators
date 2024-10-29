#ifndef FW_API_BASE_H_
#define FW_API_BASE_H_

#include <stdexcept>
#include <map>
#include "register_map.hpp"
#include <sstream>

#ifdef STANDALONE
#define FPGA_DRIVER_PYBIND_MODULE_DECLARATION(block_name, module_name) \
PYBIND11_MODULE(block_name, module_name)
#else
#define FPGA_DRIVER_PYBIND_MODULE_DECLARATION(block_name, module_name) \
void init_##block_name##_submodule(py::module &module_name)
#endif

namespace fpga_driver {

template<typename TCONF, typename TSTAT> class Base : public std::exception
{
    private:

        RegisterSetInfos regsets_;
        
        virtual void recover_() {};
        virtual void configure_(const TCONF &c) = 0;
        virtual void status_(TSTAT &s, bool clear = false) = 0;
        virtual void deconfigure_(const TCONF &c) {};
        virtual void start_() {};
        virtual void stop_(bool force = false) {};

    public:

        Base (RegisterSetInfo regset, Logger &logger) : log(&logger) {
            regsets_["default"] = regset;
        }; // Constructor for devices with single register set (for convenience, or whatever. )

        Base (RegisterSetInfos regsets, Logger &logger) : regsets_(regsets), log(&logger) {      
        }; // Constructor for devices with multiple register sets.

        ~Base () {};

        void recover () {
            //// Any generic pre-flight checks before we try to recover.
            //for (uint32_t set = 0; set < num_sets_; set++) {
            //    if (not regsets_[set]->is_open()) {
            //        throw runtime_error("Memory map is not open.");
            //    }
            //}
    
            recover_();
        };

        void configure (const TCONF &cfg) {
            //// Any generic pre-flight checks before we try to configure.
            //for (uint32_t set = 0; set < num_sets_; set++) {
            //    if (not regsets_[set]->is_open()) {
            //        throw runtime_error("Memory map is not open.");
            //    }
            //}
    
            configure_(cfg);  
        };

        void deconfigure (const TCONF &cfg) {
           // // Any generic pre-flight checks before we try to deconfigure.
           // if (not is_open()) {
           //     throw runtime_error("Memory map is not open.");
           // }
    
            deconfigure_(cfg);  
        };

        void status (TSTAT &status, bool clear = false) {
           // // Any generic pre-flight checks before we try to get status.
           // if (not is_open()) {
           //     throw runtime_error("Memory map is not open.");
           // }
    
            status_(status, clear);
        };

        void start() {
            start_();
        }

        void stop(bool force = false) {
            stop_(force);
        }

        virtual void get_default_config (TCONF &cfg) = 0;
        Logger *log;

        RegisterSetInfo& get_regset_info(std::string name, std::string version) {
            RegisterSetInfo &info = regsets_[name];
            if (info.version != version) {
                std::ostringstream err;
                err << "RegisterDef version missmatch for: '" << name << "'. Exact version match required. Expected version (from C++ header file): '" << version << "', Got version (from Bitstream): '" << info.version << "'. Are you using the driver library compiled against the FPGA bitstream?";
                throw std::runtime_error(err.str());
            }
            return info;
        }

};

};

#endif
