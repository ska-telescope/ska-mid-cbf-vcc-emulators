#ifndef __REGISTER_TYPES_H__
#define __REGISTER_TYPES_H__
//-----------------------------------------------------------------------------
// File Name    : register_types.hpp
//
// Description  : Class definition to instanciate memory mapped register structs.
//
// Author       : William Kamp
//
// History      : 1 July 2024 - created
//
//-----------------------------------------------------------------------------

#include <map>
#include <iterator>
#ifdef VPROC_NODE
    #include "VUser.h"
#endif

namespace fpga_driver {

    /**A global mapping that stores the translation from the memory mapped region to the register address.
     * This is populated and depopulated when a register set is memory mapped and unmapped - see RegisterMap.hpp
     * This is accessed by the _translate_to_reg_addr function.
    */
    static std::map<const void*, unsigned> _mmap_ptr_to_reg_addr;

    /**Convert a memory mapped address to a register bus address.*/
    inline unsigned _translate_to_reg_addr(const void* mmap_ptr) {
        auto iter = std::prev(_mmap_ptr_to_reg_addr.upper_bound(mmap_ptr));
        std::pair<const void*, unsigned> p = *iter;
        return (unsigned)(uint64_t)mmap_ptr - (uint64_t)p.first + p.second;
    }

    

    template <typename T, bool is_reg = false, int high=sizeof(T)*8-1, int low=0>
    class reg_t
    {
    public:
        T _reg;

        // WRITE:
        void operator=(T in)
        {
            constexpr int bits = high - low + 1;
            constexpr bool full_reg = (bits == sizeof(T)*8);
            constexpr T mask = full_reg ? ~0 : (1 << bits) - 1;
            T cleared = full_reg ? 0 : _reg & ~((mask) << low); // READ and clear existing bitfield value
            _reg = cleared | ((in & mask) << low); // Modify and Write.
            if (is_reg) {
                #ifdef VPROC_NODE
                    if (sizeof(T) <= 4) {
                        // std::cout<< "WRITE Register: 0x" << std::hex << _translate_to_reg_addr(&_reg) << " <= 0x" << in << " size=" << std::dec <<  sizeof(T)*8 << "b" << std::endl;
                        constexpr unsigned byte_enable = (1 << sizeof(T)) - 1;
                        VWriteBE(_translate_to_reg_addr(&_reg), (unsigned int)_reg, byte_enable, 0, VPROC_NODE);
                    } else {
                        // std::cout<< "BURST WRITE Register: 0x" << std::hex << _translate_to_reg_addr(&_reg) << " <= 0x" << in << " size=" << std::dec << sizeof(T)*8 << "b" << std::endl;
                        unsigned word_len = sizeof(T)/4;
                        T* ptr = &_reg;
                        VBurstWrite(_translate_to_reg_addr(&_reg), (void*)ptr, word_len, VPROC_NODE);
                    }
                #endif
            } else {
                // std::cout<< "WRITE Memory: 0x" << std::hex << &_reg << " <= " << std::dec << in << std::endl;
            }
        };

        // READ:
        operator T() const
        {
            constexpr size_t x = sizeof(_reg)*8 - high - 1;
            T value;
            if (is_reg) {
                #ifdef VPROC_NODE
                    if (sizeof(T) <= 4) {
                        unsigned data;
                        VRead(_translate_to_reg_addr(&_reg), &data, 0, VPROC_NODE);
                        value = (data << x) >> (x + low);
                    } else {
                        constexpr unsigned word_len = sizeof(T)/4;
                        unsigned data[word_len];
                        VBurstRead(_translate_to_reg_addr(&_reg), &data, word_len, VPROC_NODE);
                        value = (T)*data;
                    }
                #else
                    value = (_reg << x) >> (x + low);
                #endif
                // std::cout<< "READ Register: 0x" << std::hex << _translate_to_reg_addr(&_reg) << " => 0x" << value << " size=" << std::dec <<  sizeof(T)*8 << "b" << std::endl;
            } else {
                value = (_reg << x) >> (x + low);
                // std::cout<< "READ Memory: 0x" << std::hex << &_reg << " => " << std::dec << value << std::endl;
            }
            return value;
        }

        // Overload & to return memory mapped register address
        T* operator&()
        {
            return &_reg;
        };

    };
};

#endif
