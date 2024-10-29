import logging
import sys
import os

sys.path.append(os.path.join(os.path.dirname(__file__)))
from py_drivers import drivers, pybind_module_name

class Py_Driver_Initializer:
    def __init__(self, instance_name: str, memory_map_file: str, logger: logging.Logger):
        """
        Initialize a driver for the given instance name, based on the configuration contained in the DeTrI JSON

        Args: 
            instance_name (str): The name of the driver instance, as defined in the DeTri JSON and py_drivers files.
            pybind_module_name (str): The name of the (compiled) pybind module, which contains all driver submodules.
            memory_map_file (str): Path to the memory map file that the drivers will use to access registers.
            logger (logging.Logger): A Python logger instance for logging messages redirected from the drivers' C++.

        Raises:
            KeyError: If the provided driver instance name is not found in the py_drivers file.
        """

        self.instance_name = instance_name
        self.memory_map_file = memory_map_file
        self.pybind_module_name = pybind_module_name
        self.drivers = drivers
        self.driver_instance = self.drivers.get(self.instance_name, "")

        # Validate that there is an instance with the provided instance name in the drivers data:
        if not self.driver_instance:
            raise KeyError(f"No driver named '{self.instance_name}' was found in the py_drivers file.")

        # Get the driver name for this driver instance:
        self.driver_name = self.driver_instance["driver"]

        # Get the driver submodule name for this driver instance:
        self.driver_submodule_name = self.driver_instance["driver"].replace("_driver", "")

        logger.info(f"Instantiating instance '{self.instance_name}' of driver {self.driver_submodule_name}")

        # Import the base submodule, and the driver submodule, from the master pybind module:
        base_submodule = __import__(f"{self.pybind_module_name}.fpga_driver_base", fromlist=[None])
        self.base_submodule = base_submodule
        self.driver_submodule = __import__(f"{self.pybind_module_name}.{self.driver_submodule_name}", fromlist=[None])

        # Setup CLogger to redirect log messages from C++ to python
        class CLogger(base_submodule.Logger):
            severity_to_level = {
                base_submodule.LogLevel.Failure: logging.CRITICAL,
                base_submodule.LogLevel.Error: logging.ERROR,
                base_submodule.LogLevel.Warning: logging.WARNING,
                base_submodule.LogLevel.Info: logging.INFO,
                base_submodule.LogLevel.Pass: logging.INFO,
                base_submodule.LogLevel.Debug: logging.DEBUG,
                base_submodule.LogLevel.Trace: logging.DEBUG,
            }
            level_to_severity = {v: k for k, v in reversed(severity_to_level.items())}

            def __init__(self, logger: logging.Logger):
                """Init the C logger with the provided python log level"""
                self.logger = logger
                base_submodule.Logger.__init__(self, self.level_to_severity[logger.getEffectiveLevel()])
                self._monkey_patch_set_level()

            def log_message(self, severity, msg):
                """Override the C log_message and forward logs to the python logger"""
                self.logger.log(self.severity_to_level[severity], msg)

            def _monkey_patch_set_level(self):
                """Hook the python setLevel function and forward the new level to C"""
                original_setLevel = self.logger.setLevel

                def patched_setLevel(level):
                    original_setLevel(level)
                    severity = self.level_to_severity[level]
                    self.logger.info(f"Setting C logger to level {severity}")
                    self.set_logging_level(severity)

                self.logger.setLevel = patched_setLevel

        self.c_logger = CLogger(logger)

        # Loop through the register sets of this driver instance, and populate the regsets dict:
        self.regsets = {}
        self.params = {}
        for regset_id, regset_info in self.driver_instance.get("register_sets", {}).items():
            self.regsets[regset_id] = self.base_submodule.RegisterSetInfo(
                dev_file=self.memory_map_file, 
                address=regset_info["bridge_address"] + regset_info['firmware_offset'],
                depth=regset_info["firmware_depth"],
                version=regset_info["regdef"]["version"]
            )
            if regset_info.get("parameters"):
                self.params[regset_id] = self.driver_submodule.param_t(**regset_info["parameters"])

        # Instantiate the driver:
        # TODO: firmware team to figure out how to pass a map of params to c++ constructor, mirroring the ability to pass
        # a map of multiple regsets as key-value pairs. This is because parameters are associated with the register set(s), 
        # not the instance, and multiple register sets (theoretically) means multiple sets of parameters.
        # We should get to a point where we can just do:
        # self.driver = self.driver_submodule.driver(self.params, self.regsets, self.c_logger)

        # Until then, this script instantiates a driver with its 'csr' regset, or its first (or only) regset, or default params.
        if 'csr' in self.params:
            instantiation_params = self.params['csr']
        elif self.params:
            instantiation_params = next(iter(self.params.values()))
        else:
            instantiation_params = self.driver_submodule.param_t()

        self.driver = self.driver_submodule.driver(instantiation_params, self.regsets, self.c_logger)

# Example usage:
if __name__ == "__main__":
    logging.basicConfig(level=logging.INFO)
    logger = logging.getLogger(__name__)

    vcc_ch20 = Py_Driver_Initializer(
        instance_name="vcc_ch20",  
        memory_map_file="/dev/mem",
        logger=logger
    )