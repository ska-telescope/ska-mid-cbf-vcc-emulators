
#ifndef __VCC_FS_SELECTION_REGSET__H__
    #define __VCC_FS_SELECTION_REGSET__H__
    #include <cstdint>
    #include <assert.h>
    #include <iostream>
    #include "register_types.hpp"
    using fpga_driver::reg_t;
    namespace vcc_fs_selection_regset {

        const std::string mnemonic = "vcc_fs_selection";
        const std::string version = "1.0.0";

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _scratch_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _scratch_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _scratch_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _vcc_fs_selection_register_s
        {
            reg_t<std::uint32_t,is_reg,25,0> fs_1_26_select; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _vcc_fs_selection_register_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _vcc_fs_selection_register_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) vcc_fs_selection_regs
        {
            _scratch_u<is_reg> scratch;
            _vcc_fs_selection_register_u<is_reg> vcc_fs_selection_register;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) vcc_fs_selection_fields
        {
            reg_t<std::uint32_t,is_reg,31,0> data; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,25,0> fs_1_26_select; /*!< [rw] */
        };

        template<bool is_reg=false>
        union vcc_fs_selection_u
        {
            vcc_fs_selection_regs<is_reg> reg;
            vcc_fs_selection_fields<is_reg> fld;
        };

        typedef vcc_fs_selection_fields<true>  vcc_fs_selection_reg_t;
        typedef vcc_fs_selection_fields<false> vcc_fs_selection_mem_t;




        static_assert(4 == sizeof(_scratch_s<>), "struct _scratch_s does not have the correct size.");
        static_assert(4 == sizeof(_scratch_u<>), "union _scratch_u does not have the correct size.");
        static_assert(4 == sizeof(_vcc_fs_selection_register_s<>), "struct _vcc_fs_selection_register_s does not have the correct size.");
        static_assert(4 == sizeof(_vcc_fs_selection_register_u<>), "union _vcc_fs_selection_register_u does not have the correct size.");
        static_assert(8 == sizeof(vcc_fs_selection_regs<>), "struct vcc_fs_selection_regs does not have the correct size.");
        static_assert(8 == sizeof(vcc_fs_selection_fields<>), "struct vcc_fs_selection_fields does not have the correct size.");
        static_assert(8 == sizeof(vcc_fs_selection_u<>), "union vcc_fs_selection_u does not have the correct size.");
        static_assert(8 == sizeof(vcc_fs_selection_reg_t), "type vcc_fs_selection_reg_t does not have the correct size.");
        static_assert(8 == sizeof(vcc_fs_selection_mem_t), "type vcc_fs_selection_mem_t does not have the correct size.");

    /* trailer stuff */
    }
#endif
