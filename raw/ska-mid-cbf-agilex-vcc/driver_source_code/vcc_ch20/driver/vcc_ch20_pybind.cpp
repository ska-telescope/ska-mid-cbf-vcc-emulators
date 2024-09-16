#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "src/vcc_ch20_driver.hpp"

namespace py = pybind11;
using namespace fpga_driver;

FPGA_DRIVER_PYBIND_MODULE_DECLARATION(vcc_ch20, m) {
    py::class_<vcc_ch20_param_t>(m, "param_t")
        .def(py::init<>())
        .def(py::init<uint16_t, uint16_t, uint8_t>(),
            py::arg("channels_out") = 10, py::arg("input_frame_size") = 18, py::arg("polarisations") = 2)
        .def_readwrite("channels_out", &vcc_ch20_param_t::channels_out)
        .def_readwrite("input_frame_size", &vcc_ch20_param_t::input_frame_size)
        .def_readwrite("polarisations", &vcc_ch20_param_t::polarisations);

    py::class_<vcc_ch20_config_t>(m, "config_t")
        .def(py::init<>())
        .def(py::init<uint32_t, uint8_t, uint16_t, float>(),
            py::arg("sample_rate"), py::arg("pol"), py::arg("channel"), py::arg("gain"))
        .def_readwrite("sample_rate", &vcc_ch20_config_t::sample_rate)
        .def_readwrite("pol", &vcc_ch20_config_t::pol)
        .def_readwrite("channel", &vcc_ch20_config_t::channel)
        .def_readwrite("gain", &vcc_ch20_config_t::gain);

    py::class_<vcc_ch20_status_t>(m, "status_t")
        .def(py::init<>())
        .def(py::init<uint16_t, uint8_t>())
        .def_readwrite("sample_rate", &vcc_ch20_status_t::sample_rate)
        .def_readwrite("num_channels", &vcc_ch20_status_t::num_channels)
        .def_readwrite("num_polarisations", &vcc_ch20_status_t::num_polarisations)
        .def_readwrite("gains", &vcc_ch20_status_t::gains);

    py::class_<VCC_CH20_Driver>(m, "driver")
        .def(py::init<vcc_ch20_param_t&, RegisterSetInfos&, Logger&>())
        .def("recover", &VCC_CH20_Driver::recover)
        .def("configure", &VCC_CH20_Driver::configure)
        .def("start", &VCC_CH20_Driver::start)
        .def("stop", &VCC_CH20_Driver::stop)
        .def("deconfigure", &VCC_CH20_Driver::deconfigure)
        .def("status", &VCC_CH20_Driver::status)
        .def("get_default_config", &VCC_CH20_Driver::get_default_config);
}