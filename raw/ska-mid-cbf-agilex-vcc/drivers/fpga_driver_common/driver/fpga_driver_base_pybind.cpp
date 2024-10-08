#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "src/fpga_driver_base.hpp"

namespace py = pybind11;
using namespace fpga_driver;


FPGA_DRIVER_PYBIND_MODULE_DECLARATION(fpga_driver_base, m) {

    py::enum_<LogLevel>(m, "LogLevel")
        .value("Failure", LogLevel::Failure)
        .value("Error", LogLevel::Error)
        .value("Warning", LogLevel::Warning)
        .value("Info", LogLevel::Info)
        .value("Pass", LogLevel::Pass)
        .value("Debug", LogLevel::Debug)
        .value("Trace", LogLevel::Trace);

    py::class_<RegisterSetInfo>(m, "RegisterSetInfo")
        .def(py::init<>())
        .def(py::init<std::string, u_int32_t, u_int32_t, std::string>())
        .def_readwrite("dev_file", &RegisterSetInfo::dev_file)
        .def_readwrite("address", &RegisterSetInfo::address)
        .def_readwrite("depth", &RegisterSetInfo::depth)
        .def_readwrite("version", &RegisterSetInfo::version);

    py::class_<Logger>(m, "Logger")
      .def(py::init<LogLevel>(), py::arg("severity") = LogLevel::Warning)
      .def("set_logging_level", &Logger::set_logging_level, py::arg("severity"))
      .def("get_logging_level", &Logger::get_logging_level)
      .def("failure", &Logger::failure, py::arg("msg"))
      .def("error", &Logger::error, py::arg("msg"))
      .def("warning", &Logger::warning, py::arg("msg"))
      .def("info", &Logger::info, py::arg("msg"))
      .def("pass", &Logger::pass, py::arg("msg"))
      .def("debug", &Logger::debug, py::arg("msg"))
      .def("trace", &Logger::trace, py::arg("msg"));
}