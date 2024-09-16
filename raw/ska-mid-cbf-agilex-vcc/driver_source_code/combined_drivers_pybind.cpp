#include <pybind11/pybind11.h>
namespace py = pybind11;

void init_ftile_ethernet_submodule(py::module &);
void init_fpga_driver_base_submodule(py::module &);
void init_circuit_switch_submodule(py::module &);
void init_vcc_ch20_submodule(py::module &);

PYBIND11_MODULE(talon_dx_agilex_m_vcc_base_vcc_processing, m) {
   py::module ftile_ethernet_module = m.def_submodule("ftile_ethernet", "ftile_ethernet module");
   init_ftile_ethernet_submodule(ftile_ethernet_module);

   py::module fpga_driver_base_module = m.def_submodule("fpga_driver_base", "fpga_driver_base module");
   init_fpga_driver_base_submodule(fpga_driver_base_module);

   py::module circuit_switch_module = m.def_submodule("circuit_switch", "circuit_switch module");
   init_circuit_switch_submodule(circuit_switch_module);

   py::module vcc_ch20_module = m.def_submodule("vcc_ch20", "vcc_ch20 module");
   init_vcc_ch20_submodule(vcc_ch20_module);

}
