# Driver directories, or paths to driver/ folders with Makefiles in them, should be provided externally, i.e. through a script
DRIVER_DIRS ?= driver/

MODULE_NAME =

SUFFIX = $(shell python3-config --extension-suffix)
COMBINED_SRC = combined_drivers_pybind.cpp
COMBINED_OBJ = $(MODULE_NAME).o
COMBINED_SHARED_OBJ = $(MODULE_NAME).so

COMPILER ?= c++
CROSS_COMPILER ?= aarch64-linux-gnu-g++
COMPILE_TYPE ?= default
BUILD ?= release
COMMON_FLAGS ?= -Wall -std=c++17 -fPIC $(shell python3 -m pybind11 --includes)

ifeq ($(BUILD), debug)
COMPILE_FLAGS = -O0 -g $(COMMON_FLAGS)
else ifeq ($(BUILD), release)
COMPILE_FLAGS = -O3 $(COMMON_FLAGS)
endif

ifeq ($(COMPILE_TYPE), cross)
COMPILER= $(CROSS_COMPILER)
endif

# Cross compile settings:
DOCKER_IMAGE = combined_fpga_drivers_build_image
DOCKER_CONTAINER = combined_fpga_drivers_build_container

all: $(COMBINED_SHARED_OBJ)

generate-structs-for-all-blocks:
	@for dir in $(DRIVER_DIRS); do \
		if [ "$$dir" != "fpga_driver_common/driver" ]; then \
			$(MAKE) -C $$dir generate-register-structs; \
		fi \
	done

# Run 'make combined' in each driver/ directory
.PHONY: combined
combined:
	$(foreach dir,$(DRIVER_DIRS),$(MAKE) -C $(dir) combined;)

# Compile the master wrapper into an object file
$(COMBINED_OBJ): $(COMBINED_SRC)
	$(COMPILER) $(COMPILE_FLAGS) -c $< -o $@

# Build the combined shared object file with all required modules
$(COMBINED_SHARED_OBJ): $(COMBINED_OBJ) combined
	$(COMPILER) -shared $(COMPILE_FLAGS) -o $@ $(COMBINED_OBJ) $(foreach dir,$(DRIVER_DIRS),$(wildcard $(dir)/*.o))

compile-native: generate-structs-for-all-blocks $(COMBINED_SHARED_OBJ)

# The following rule only works if it is being executed from the staging area created by the script "build_combined_drivers.py"
compile-in-container: generate-structs-for-all-blocks
	docker build -t $(DOCKER_IMAGE) -f fpga_driver_common/Docker/Dockerfile .
	docker run -t --name $(DOCKER_CONTAINER) -d -v .:/app $(DOCKER_IMAGE)
	docker exec -ti $(DOCKER_CONTAINER) make DRIVER_DIRS="$(DRIVER_DIRS)" COMPILER=$(COMPILER) BUILD=$(BUILD) MODULE_NAME=$(MODULE_NAME)
	docker cp $(DOCKER_CONTAINER):/app/$(COMBINED_SHARED_OBJ) .
	docker stop $(DOCKER_CONTAINER) || true
	docker rm $(DOCKER_CONTAINER) || true

clean: 
	rm -f $(COMBINED_SHARED_OBJ) $(COMBINED_OBJ)
	$(foreach dir,$(DRIVER_DIRS),$(MAKE) -C $(dir) clean;)

.PHONY: all clean