// Generally following https://google.github.io/styleguide/cppguide.html

#ifndef FPGA_DRIVER_LOGGER_H_
#define FPGA_DRIVER_LOGGER_H_

#include <cstdint>
#include <string>
#include <iostream>

namespace fpga_driver {

// Space between levels, in case we want to add more for some reason.
// Uses VUnit style labels.
enum class LogLevel { 
    Failure = 0, 
    Error   = 10, 
    Warning = 20, 
    Info    = 30, 
    Pass    = 40, 
    Debug   = 50, 
    Trace   = 60 
};

class Logger {

    public:

        Logger(LogLevel severity = LogLevel::Warning) : log_level_(severity) {};
        ~Logger() {};

        void set_logging_level(LogLevel severity) {
            log_level_ = severity;
        };

        LogLevel get_logging_level() {
            return log_level_;
        };
            
        // VUnit Logging Levels.
        virtual void failure(std::string msg) {
            log_message(LogLevel::Failure, "FAILURE: " + msg);
        };

        virtual void error(std::string msg) {
            log_message(LogLevel::Error, "ERROR: " + msg);
        };

        virtual void warning(std::string msg) {
            log_message(LogLevel::Warning, "WARNING: " + msg);
        };

        virtual void info(std::string msg) {
            log_message(LogLevel::Info, "INFO: " + msg);
        };

        virtual void pass(std::string msg) {
            log_message(LogLevel::Pass, "PASS: " + msg);
        };

        virtual void debug(std::string msg) {
            log_message(LogLevel::Debug, "DEBUG: " + msg);
        };

        virtual void trace(std::string msg) {
            log_message(LogLevel::Trace, "TRACE: " + msg);
        };

    protected:

        virtual void log_message(LogLevel severity, std::string msg) {
            if (log_level_ >= severity) {
                std::cout << msg << std::endl;
            };
        };

        LogLevel log_level_;

};

};

#endif