#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "src/vcc_fs_selection_driver.hpp"

namespace py = pybind11;
using namespace fpga_driver;

FPGA_DRIVER_PYBIND_MODULE_DECLARATION(vcc_fs_selection, m) {
    py::class_<vcc_fs_selection_param_t>(m, "param_t")
        .def(py::init<>());

    py::class_<vcc_fs_selection_config_t>(m, "config_t")
        .def(py::init<>())
        .def(py::init<uint32_t>(),
	     	py::arg("band_select") = 1)
        .def_readwrite("band_select", &vcc_fs_selection_config_t::band_select);

    py::class_<vcc_fs_selection_status_t>(m, "status_t")
        .def(py::init<>())
        .def_readwrite("band_select_status", &vcc_fs_selection_status_t::band_select_status);

    py::class_<Vcc_Fs_Selection_Driver>(m, "driver")
        .def(py::init<vcc_fs_selection_param_t&, RegisterSetInfos&, Logger&>())
        .def("recover", &Vcc_Fs_Selection_Driver::recover)
        .def("configure", &Vcc_Fs_Selection_Driver::configure)
        .def("deconfigure", &Vcc_Fs_Selection_Driver::deconfigure)
        .def("start", &Vcc_Fs_Selection_Driver::start)
        .def("stop", &Vcc_Fs_Selection_Driver::stop)
        .def("status", &Vcc_Fs_Selection_Driver::status)
        .def("get_default_config", &Vcc_Fs_Selection_Driver::get_default_config);
}