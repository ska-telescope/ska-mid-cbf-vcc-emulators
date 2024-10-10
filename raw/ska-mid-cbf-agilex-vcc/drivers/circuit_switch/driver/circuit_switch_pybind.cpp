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
        .def(py::init<uint8_t, uint8_t>(),
            py::arg("output") = 255,
            py::arg("input") = 255)
        .def_readwrite("output", &circuit_switch_config_t::output)
        .def_readwrite("input", &circuit_switch_config_t::input);

    py::class_<circuit_switch_status_t>(m, "status_t")
        .def(py::init<>())
        .def_readwrite("num_inputs", &circuit_switch_status_t::num_inputs)
        .def_readwrite("num_outputs", &circuit_switch_status_t::num_outputs)
        .def_readwrite("connected", &circuit_switch_status_t::connected);

    py::class_<Circuit_Switch_Driver>(m, "driver")
        .def(py::init<circuit_switch_param_t&, RegisterSetInfos&, Logger&>())
        .def("recover", &Circuit_Switch_Driver::recover)
        .def("configure", &Circuit_Switch_Driver::configure)
        .def("deconfigure", &Circuit_Switch_Driver::deconfigure)
        .def("start", &Circuit_Switch_Driver::start)
        .def("stop", &Circuit_Switch_Driver::stop)
        .def("status", &Circuit_Switch_Driver::status)
        .def("get_default_config", &Circuit_Switch_Driver::get_default_config);
}