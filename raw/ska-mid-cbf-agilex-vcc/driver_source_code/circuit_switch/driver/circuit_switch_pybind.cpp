// clear; c++ -O3 -Wall -shared -std=c++2a -fPIC $(python3 -m pybind11 --includes) pybind_wrapper.cpp -o circuitswitch$(python3-config --extension-suffix)
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "src/circuit_switch_driver.hpp"

namespace py = pybind11;
using namespace fpga_driver;


FPGA_DRIVER_PYBIND_MODULE_DECLARATION(circuit_switch, m) {
    py::class_<circuit_switch_param_t>(m, "param_t")
        .def(py::init<>());

    py::class_<circuit_switch_config_t>(m, "config_t")
        .def(py::init<>())
        .def(py::init<uint8_t,uint8_t>())
        .def_readwrite("output", &circuit_switch_config_t::output)
        .def_readwrite("input",  &circuit_switch_config_t::input);

    py::class_<circuit_switch_status_t>(m, "status_t")
        .def(py::init<>())
        .def(py::init<uint8_t,uint8_t, std::vector<circuit_switch_config_t>>())
        .def_readwrite("num_inputs", &circuit_switch_status_t::num_inputs)
        .def_readwrite("num_outputs", &circuit_switch_status_t::num_outputs)
        .def_readwrite("connected",  &circuit_switch_status_t::connected);

    py::class_<CircuitSwitch>(m, "driver")
        .def(py::init<circuit_switch_param_t&, RegisterSetInfos&, Logger&>())
        .def("setIdentity", &CircuitSwitch::setIdentity)
        .def("recover", &CircuitSwitch::recover)
        .def("configure", &CircuitSwitch::configure)
        .def("deconfigure", &CircuitSwitch::deconfigure)
        .def("start", &CircuitSwitch::start)
        .def("stop", &CircuitSwitch::stop)
        .def("status", &CircuitSwitch::status)
        .def("get_default_config", &CircuitSwitch::get_default_config);   
}
