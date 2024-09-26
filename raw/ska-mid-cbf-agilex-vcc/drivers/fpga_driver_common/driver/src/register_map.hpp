#ifndef __REGISTER_MAP_H__
#define __REGISTER_MAP_H__
//-----------------------------------------------------------------------------
// File Name    : register_map.hpp
//
// Description  : Class definition to instanciate memory mapped register structs.
//
// Author       : William Kamp
//
// History      : 1 July 2024 - created
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <assert.h>
#include <stdexcept>
#include <string>
#include <iostream>
#include <bit>
#include <map>
#include <memory>
#include "fpga_driver_logger.hpp"
#include "register_types.hpp"
#include <type_traits>

namespace fpga_driver {

    struct RegisterSetInfo
    {
        std::string  dev_file; //!< The linux device file that provides access to the FPGA register bus.
        uint32_t     address;  //!< Address of the FPGA register set relative to the device file.
        uint32_t     depth;    //!< The size of the memory region used by this register set.
        std::string  version;  //!< Version string of the register definition.
    };

    typedef std::map<std::string, RegisterSetInfo> RegisterSetInfos;
    
    template  <typename FPGA_REG_T, typename FPGA_MEM_T = FPGA_REG_T> class RegisterMap {

        private:
            Logger *log = nullptr;

            std::shared_ptr<FPGA_REG_T> registers_;

            FPGA_REG_T* MemMap(const RegisterSetInfo &info, void* &map_addr_, size_t &map_length_){
                //align base_address with page boundary for mmap
                unsigned int page_size = sysconf(_SC_PAGE_SIZE);
                unsigned int page_offset = info.address % page_size;
                unsigned int page_addr = info.address - page_offset;

                int flags = MAP_SHARED;
                int fd = -1;
                if (info.dev_file.length()) {
                    /* open the memory device file */
                    fd = open(info.dev_file.c_str(), O_RDWR|O_SYNC);
                    if (fd < 0) {
                        throw std::runtime_error(std::string("Failed to open device file ") + info.dev_file);
                    }
                } else {
                    flags |= MAP_ANONYMOUS;
                }
                /* map a small portion of the FPGA register bus into process memory */
                // std::cout << std::to_string(page_offset) << " " << std::to_string(sizeof(FPGA_REG_T)) << std::endl;
                map_length_ = page_offset + info.depth;
                map_addr_ = mmap(NULL, map_length_, PROT_READ | PROT_WRITE, flags, fd,  page_addr);
                if (fd >= 0){
                    close(fd);
                }
                if (map_addr_ == MAP_FAILED) {
                    throw std::runtime_error(std::string("Failed to memory-map file ") + info.dev_file + std::string(" at ") + std::to_string(page_addr) + std::string(" with ") + std::to_string(map_length_) + std::string(" bytes."));
                }
                _mmap_ptr_to_reg_addr[map_addr_] = (unsigned)info.address;
                return (FPGA_REG_T*)(((uint8_t*) map_addr_ + page_offset));
            };

            struct MemUnmap
            {
                void* map_addr;
                size_t map_length;
                MemUnmap(void* map_addr, size_t map_length) : map_addr(map_addr), map_length(map_length) {}

                void operator()(FPGA_REG_T p)
                    {
                        msync(map_addr, map_length, MS_SYNC);
                        if (map_addr != nullptr && map_addr != MAP_FAILED && munmap(map_addr, map_length)){
                            std::cerr << "Failed to unmap memory" << std::endl;
                        }
                        _mmap_ptr_to_reg_addr.erase(map_addr);
                    };
                void operator()(FPGA_REG_T *p)
                    {
                        msync(map_addr, map_length, MS_SYNC);
                        if (map_addr != nullptr && map_addr != MAP_FAILED && munmap(map_addr, map_length)){
                            std::cerr << "Failed to unmap memory" << std::endl;
                        }
                        _mmap_ptr_to_reg_addr.erase(map_addr);
                    };
            };

        public:

            int repeat;
            FPGA_REG_T *ptr;

            RegisterMap(const RegisterSetInfo &info){
                if constexpr (std::is_array<FPGA_REG_T>()) {
                    // A repeated register set is rounded up to a power of two size, then replicated, so that the repeats are address aligned to make easy decoding at the FPGA.
                    // Can use the depth to infer the number of repeats - which might be less than the maximum listed in the registerDef json file.
                    void* map_addr;
                    size_t map_length;
                    repeat = info.depth / sizeof(registers_[0]);
                    ptr = MemMap(info, map_addr, map_length);
                    registers_ = std::shared_ptr<FPGA_REG_T>(*ptr, MemUnmap(map_addr, map_length));
                } else {
                    void* map_addr;
                    size_t map_length;
                    repeat = info.depth / sizeof(registers_);
                    ptr = MemMap(info, map_addr, map_length);
                    registers_ = std::shared_ptr<FPGA_REG_T>(ptr, MemUnmap(map_addr, map_length));
                }
            }

            void set_logger(Logger *logger){
                log = logger;
            }

            ~RegisterMap() {
                registers_.reset();
            }

            std::shared_ptr<FPGA_REG_T> regs() {
                return std::shared_ptr<FPGA_REG_T>(registers_);
            }

            void write(FPGA_MEM_T &from, int index = -1) {
                /** Write to the entire register set at once. */
                /** @param from a <FPGA_REG_T> array to copy from. */
                /** @param index the index from which to read and write. If < 0, then will write the whole array.*/
                reg_t<int8_t>* src;
                reg_t<int8_t>* dst;
                size_t size_bytes;
                if constexpr (std::is_array<FPGA_REG_T>()) {
                    size_bytes = sizeof(registers_[0]);
                } else {
                    size_bytes = sizeof(registers_);
                }
                if (std::is_array<FPGA_REG_T>() && index >= 0){
                    // Copy one indexed element.
                    assert(index < repeat && 0 <= index && "Index is out of bounds");
                    src = (reg_t<int8_t>*) &from[index];
                    dst = (reg_t<int8_t>*) registers_.get() + index * size_bytes;
                } else {
                    // Copy the entire array.
                    src = (reg_t<int8_t>*) from;
                    dst = (reg_t<int8_t>*) registers_.get();
                    size_bytes *= repeat;
                }
                // Assume that registers are aligned according to their length - which is enforced by DeTrI.
                // dst address will be a multiple of the next power of two greater or equal to sizeof(fpga_reg_t).
                // FIXME: Can we assume the same about src. will it at least be 128b aligned?
                // Write up to 16 bytes at a time, until you can't.
                // This results in burst-4 AXI transactions on the Stratix10 ARM HPS 32b light-weight bus.
                // // This results in burst-2 AXI transactions on the Stratix10 ARM HPS 64b high-performance bus.

                if (size_bytes >= sizeof(reg_t<int64_t>)){
                    assert( (((long)src & 0x7) == 0) && "src pointer is not 64b aligned.");
                    for (size_t idx = 0; idx < size_bytes/sizeof(reg_t<int64_t>); ++idx){
                        // hopefully the compiler unrolls this for small register sets.
                        std::cout << std::hex << "W " << idx << " : " << *(reg_t<int64_t>*)src << std::endl;
                        *(reg_t<int64_t,true>*)dst = *(reg_t<int64_t>*)src;
                        dst += sizeof(reg_t<int64_t>);
                        src += sizeof(reg_t<int64_t>);
                    }
                }
                // if (size_bytes >= sizeof(reg_t<__int128_t>)){
                //     assert( (((long)src & 0xF) == 0) && "src pointer is not 128b aligned.");
                //     for (size_t idx = 0; idx < size_bytes/sizeof(reg_t<__int128_t>); ++idx){
                //         // hopefully the compiler unrolls this for small register sets.
                //         *(reg_t<__int128_t,127,0,true>*)dst = *(reg_t<__int128_t>*)src;
                //         dst += sizeof(reg_t<__int128_t>);
                //         src += sizeof(reg_t<__int128_t>);
                //     }
                // }
                // Write remaining bytes in as big a chunks as possible, without overwriting.
                // if (size_bytes & 0x8) {*(reg_t<int64_t,63,0,true>*)dst = *(reg_t<int64_t>*)src; dst += sizeof(reg_t<int64_t>); src += sizeof(reg_t<int64_t>);}
                if (size_bytes & 0x4) {*(reg_t<int32_t,true>*)dst = *(reg_t<int32_t>*)src; dst += sizeof(reg_t<int32_t>); src += sizeof(reg_t<int32_t>);}
                if (size_bytes & 0x2) {*(reg_t<int16_t,true>*)dst = *(reg_t<int16_t>*)src; dst += sizeof(reg_t<int16_t>); src += sizeof(reg_t<int16_t>);}
                if (size_bytes & 0x1) {*(reg_t<int8_t,true>*)dst   = *(reg_t<int8_t>*)src; dst += sizeof(reg_t<int8_t>);  src += sizeof(reg_t<int8_t>);}
            };

            void read(FPGA_MEM_T &to, int index = -1) {
                /** Read the entire register set at once. */
                /** @param to a <FPGA_REG_T> array to copy into. */
                /** @param index the index from which to read and write. If < 0, then will read the whole array.*/
                reg_t<int8_t>* src;
                reg_t<int8_t>* dst;
                size_t size_bytes;
                if constexpr (std::is_array<FPGA_REG_T>()) {
                    size_bytes = sizeof(registers_[0]);
                } else {
                    size_bytes = sizeof(registers_);
                }
                if (std::is_array<FPGA_REG_T>() && index >= 0){
                    // Copy one indexed element.
                    assert(index < repeat && 0 <= index && "Index is out of bounds");
                    src = (reg_t<int8_t>*) registers_.get() + index * size_bytes;
                    dst = (reg_t<int8_t>*) &to[index];
                } else {
                    // Copy the entire regset / array.
                    src = (reg_t<int8_t>*) registers_.get();
                    dst = (reg_t<int8_t>*) to;
                    size_bytes *= repeat;
                }
                // Assume that registers are aligned according to their length - which is enforced by DeTrI.
                // src address will be a multiple of the next power of two greater or equal to sizeof(fpga_reg_t).
                // FIXME: Can we assume the same about dst. will it at least be 128b aligned?
                // Read up to 16 bytes at a time, until you can't.
                // This results in burst-4 AXI transactions on the Stratix10 ARM HPS 32b light-weight bus.
                // This results in burst-2 AXI transactions on the Stratix10 ARM HPS 64b high-performance bus.
                if (size_bytes >= sizeof(reg_t<int64_t>)){
                    assert( (((long)dst & 0xF) == 0) && "dst pointer is not 128b aligned.");
                    for (size_t idx = 0; idx < size_bytes/sizeof(reg_t<int64_t>); ++idx){
                            // hopefully the compiler unrolls this for small register sets.
                        *(reg_t<int64_t>*)dst = *(reg_t<int64_t,true>*)src;
                        src += sizeof(reg_t<int64_t>);
                        dst += sizeof(reg_t<int64_t>);
                    }
                }
                // if (size_bytes >= sizeof(__int128_t)){
                //     assert( (((long)dst & 0xF) == 0) && "dst pointer is not 128b aligned.");
                //     for (size_t idx = 0; idx < size_bytes/sizeof(__int128_t); ++idx){
                //             // hopefully the compiler unrolls this for small register sets.
                //         *(__int128_t*)dst = *(__int128_t*)src;
                //         src += sizeof(__int128_t);
                //         dst += sizeof(__int128_t);
                //     }
                // }
                // Write remaining bytes in as big a chunks as possible, without overwriting.
                if (size_bytes & 0x8) {*(reg_t<int64_t>*)dst = *(reg_t<int64_t,true>*)src; dst += sizeof(reg_t<int64_t>); src += sizeof(reg_t<int64_t>);}
                if (size_bytes & 0x4) {*(reg_t<int32_t>*)dst = *(reg_t<int32_t,true>*)src; dst += sizeof(reg_t<int32_t>); src += sizeof(reg_t<int32_t>);}
                if (size_bytes & 0x2) {*(reg_t<int16_t>*)dst = *(reg_t<int16_t,true>*)src; dst += sizeof(reg_t<int16_t>); src += sizeof(reg_t<int16_t>);}
                if (size_bytes & 0x1) {*(reg_t<int8_t>*)dst  = *(reg_t<int8_t,true>*)src;  dst += sizeof(reg_t<int8_t>);  src += sizeof(reg_t<int8_t>);}
            };
    };
};

#endif
