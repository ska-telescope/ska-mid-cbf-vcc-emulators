# ska-mid-cbf-vcc-emulators

This repository is intended for uploading the Mid.CBF VCC bitstream emulator source code
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
1. On branch `main`, add the bitstream files to `raw/ska-mid-cbf-vcc-emulators/`. Each sub-directory of `raw/` prefixed with `ska-` will be packaged and uploaded to the CAR separately upon tag pipeline success, so delete any directories not intended for release; currently, only the `ska-mid-cbf-vcc-emulators` package is used.

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
