COMPILER ?= c++
BUILD ?= release
COMMON_FLAGS ?= -Wall -std=c++17 -fPIC $(shell python3 -m pybind11 --includes)

ifeq ($(BUILD), debug)
	COMPILE_FLAGS = -O0 -g $(COMMON_FLAGS)
else ifeq ($(BUILD), release)
	COMPILE_FLAGS = -O3 $(COMMON_FLAGS)
endif

INCLUDES = -I ./ -I ../$(deps_dir)/fpga_driver_common/driver/src
SRC = $(BLOCK)_pybind.cpp
OBJ = $(BLOCK).o
SHARED_OBJ = $(BLOCK).so

all: do-nothing

generate-register-structs:
	@for reg_json in $(wildcard ../reg/*.json); do \
		python3 -m RenderModule.cppStructGen $$reg_json -o src; \
	done

standalone: generate-register-structs $(SHARED_OBJ)

combined: $(OBJ)

do-nothing:

$(OBJ): $(SRC)
	$(COMPILER) $(COMPILE_FLAGS) -DCOMBINED $(INCLUDES) -c $< -o $@

$(SHARED_OBJ):
	$(COMPILER) -shared $(COMPILE_FLAGS) $(INCLUDES) -DSTANDALONE $(SRC) -o $@

clean: 
	rm -f $(OBJ) $(SHARED_OBJ)