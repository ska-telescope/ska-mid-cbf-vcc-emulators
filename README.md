# ska-mid-cbf-vcc-emulators

This repository is intended for uploading the Mid.CBF bitstream emulator and driver source code
raw packages to the [Central Artefact Repository](https://artefact.skao.int/). 
It is based on the [ska-raw-skeleton](https://gitlab.com/ska-telescope/templates/ska-raw-skeleton) repository.

## Initialization

### Prerequisites
- Git

Clone the repository locally, then set up the `.make` submodule.
```bash
git submodule init
git submodule update
```

## Release bitstream emulator raw packages
1. On branch `main`, add the bitstream files to `raw/ska-mid-cbf-<bitstream-name>/`. Each sub-directory of `raw/` prefixed with `ska-` will be packaged and uploaded to the CAR separately upon tag pipeline success, so delete any directories not intended for release.

   To generate the bitstream files if not already acquired, create a workspace using the `fpga_tools/fpga_build/new_workspace.py` script (e.g. using base `agilex_m_vcc_base` and persona `vcc_processing`). Within the workspace, run both `fpga_tools/fpga_build/driver_modules_compiler.py` and `fpga_tools/fpga_build/emulator_bundler.py` to generate .tar.gz files containing the driver_source_code and emulator_source_code folders, respectively, which contain the files that should be copied into this repository.

   The expected directory structure is (e.g.):
   ```text
   raw
   |-- ska-mid-cbf-agilex-vcc
       |-- driver_source_code  // (output from fpga_tools/fpga_build/driver_modules_compiler.py)
       |   |-- fpga_driver_common
       |   |   | ...
       |   |-- <IP block driver folders>
       |   |-- Makefile
       |   |-- <other pybind files>.cpp
       |   |-- <generated pybind object file>.o  // (?)
       |   |-- <generated pybind object file>.so
       |-- emulator_source_code  // (output from fpga_tools/fpga_build/emulator_bundler.py)
           |-- <IP block emulator folders>  // see ska-mid-cbf-emulators docs for details
           |   |-- api.py
           |   |-- event_handler.py
           |   |-- ip_block.py
           |   |-- state_machine.py
           |   |-- <other_misc_emulator_files>
           |-- config.json  // bitstream emulator config file
   ```

2. Update the `.release` file version; if simply incrementing the current 
semver, can use the following make rules: `make bump-patch-release`, 
`make bump-minor-release` or `make bump-major-release`.

    *Note: currently the `.make` submodule applies the same semver tag (from `.release`) to all packages created from the sub-directories of `raw/`.*

3. Commit changes and tag release;
```bash
git add .
```

To commit, tag and push both in fewer commands:
```bash
git commit -m <message>
git tag <tag>
git push --atomic origin main <tag>
```
