#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <src/ftile_ethernet_driver.hpp>

namespace py = pybind11;
using namespace fpga_driver;

FPGA_DRIVER_PYBIND_MODULE_DECLARATION(ftile_ethernet, m) {
py::class_<ftile_ethernet_cast_stats>(m, "ftile_ethernet_cast_stats")
.def_readwrite("data_err", &ftile_ethernet_cast_stats::data_err)
.def_readwrite("ctrl_err", &ftile_ethernet_cast_stats::ctrl_err)
.def_readwrite("data_ok", &ftile_ethernet_cast_stats::data_ok)
.def_readwrite("ctrl_ok", &ftile_ethernet_cast_stats::ctrl_ok)
;

py::class_<ftile_ethernet_mac_stats>(m, "ftile_ethernet_mac_stats")
.def_readwrite("fragments", &ftile_ethernet_mac_stats::fragments)
.def_readwrite("jabbers", &ftile_ethernet_mac_stats::jabbers)
.def_readwrite("fcs_err", &ftile_ethernet_mac_stats::fcs_err)
.def_readwrite("pause_err", &ftile_ethernet_mac_stats::pause_err)
.def_readwrite("multicast", &ftile_ethernet_mac_stats::multicast)
.def_readwrite("broadcast", &ftile_ethernet_mac_stats::broadcast)
.def_readwrite("unicast", &ftile_ethernet_mac_stats::unicast)
.def_readwrite("packet_count_64b", &ftile_ethernet_mac_stats::packet_count_64b)
.def_readwrite("packet_count_65to127b", &ftile_ethernet_mac_stats::packet_count_65to127b)
.def_readwrite("packet_count_128to255b", &ftile_ethernet_mac_stats::packet_count_128to255b)
.def_readwrite("packet_count_256to511b", &ftile_ethernet_mac_stats::packet_count_256to511b)
.def_readwrite("packet_count_512to1023b", &ftile_ethernet_mac_stats::packet_count_512to1023b)
.def_readwrite("packet_count_1024to1518b", &ftile_ethernet_mac_stats::packet_count_1024to1518b)
.def_readwrite("packet_count_1519tomaxb", &ftile_ethernet_mac_stats::packet_count_1519tomaxb)
.def_readwrite("packet_count_oversize", &ftile_ethernet_mac_stats::packet_count_oversize)
.def_readwrite("pause", &ftile_ethernet_mac_stats::pause)
.def_readwrite("runt", &ftile_ethernet_mac_stats::runt)
.def_readwrite("frame_starts", &ftile_ethernet_mac_stats::frame_starts)
.def_readwrite("length_error", &ftile_ethernet_mac_stats::length_error)
.def_readwrite("pfc_error", &ftile_ethernet_mac_stats::pfc_error)
.def_readwrite("pfc", &ftile_ethernet_mac_stats::pfc)
.def_readwrite("malformed", &ftile_ethernet_mac_stats::malformed)
.def_readwrite("dropped", &ftile_ethernet_mac_stats::dropped)
.def_readwrite("bad_length_type", &ftile_ethernet_mac_stats::bad_length_type)
.def_readwrite("payload_bytes", &ftile_ethernet_mac_stats::payload_bytes)
.def_readwrite("total_bytes", &ftile_ethernet_mac_stats::total_bytes)
;

py::class_<ftile_ethernet_config>(m, "ftile_ethernet_config")
.def(py::init<>())
.def_readwrite("loopback", &ftile_ethernet_config::loopback)
.def_readwrite("unidirectional", &ftile_ethernet_config::unidirectional)
;

py::class_<ftile_ethernet_fec_stats>(m, "ftile_ethernet_fec_stats")
.def_readwrite("corrected_codewords", &ftile_ethernet_fec_stats::corrected_codewords)
.def_readwrite("uncorrected_codewords", &ftile_ethernet_fec_stats::uncorrected_codewords)
;

py::class_<ftile_ethernet_status>(m, "ftile_ethernet_status")
.def(py::init<>())
.def_readwrite("rx_mac", &ftile_ethernet_status::rx_mac)
.def_readwrite("tx_mac", &ftile_ethernet_status::tx_mac)
.def_readwrite("rx_fec", &ftile_ethernet_status::rx_fec)
.def_readwrite("tx_pll_locked", &ftile_ethernet_status::tx_pll_locked)
.def_readwrite("tx_lanes_stable", &ftile_ethernet_status::tx_lanes_stable)
.def_readwrite("rx_cdr_locked", &ftile_ethernet_status::rx_cdr_locked)
.def_readwrite("rx_deskew", &ftile_ethernet_status::rx_deskew)
.def_readwrite("rx_deskew_change", &ftile_ethernet_status::rx_deskew_change)
.def_readwrite("rx_pcs_ready", &ftile_ethernet_status::rx_pcs_ready)
.def_readwrite("tx_ready", &ftile_ethernet_status::tx_ready)
.def_readwrite("rx_ready", &ftile_ethernet_status::rx_ready)
.def_readwrite("ready", &ftile_ethernet_status::ready)
;

py::class_<ftile_ethernet_param_t>(m, "param_t")
.def(py::init<>());



    py::class_<ftile_ethernet_driver>(m, "ftile_ethernet_driver")
        .def(py::init<ftile_ethernet_param_t&, RegisterSetInfos&, fpga_driver::Logger&>())
        .def("get_default_config", &ftile_ethernet_driver::get_default_config)
        .def("recover", &ftile_ethernet_driver::recover)
        .def("configure",   &ftile_ethernet_driver::configure)
        .def("deconfigure", &ftile_ethernet_driver::deconfigure)
        .def("status",      &ftile_ethernet_driver::status)
        .def("start",       &ftile_ethernet_driver::start)
        .def("stop",        &ftile_ethernet_driver::stop);

}
