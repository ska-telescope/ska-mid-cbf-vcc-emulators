
#ifndef __VCC_CH20_REGSET__H__
    #define __VCC_CH20_REGSET__H__
    #include <cstdint>
    #include <assert.h>
    #include <iostream>
    #include "register_types.hpp"
    using fpga_driver::reg_t;
    namespace vcc_ch20_regset {

        const std::string mnemonic = "vcc_ch20";
        const std::string version = "1.0.0";

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _config_pps_frame_count_s
        {
            reg_t<std::uint32_t,is_reg,31,0> frame_count; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _config_pps_frame_count_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _config_pps_frame_count_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _config_fs_sft_scl_s
        {
            union {
                reg_t<std::uint32_t,is_reg,3,0> fs_sft; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,19,4> fs_scl; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _config_fs_sft_scl_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _config_fs_sft_scl_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) vcc_ch20_regs
        {
            _config_pps_frame_count_u<is_reg> config_pps_frame_count;
            _config_fs_sft_scl_u<is_reg> config_fs_sft_scl[20];
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) vcc_ch20_fields
        {
            reg_t<std::uint32_t,is_reg,31,0> frame_count; /*!< [rw] */
            _config_fs_sft_scl_s<is_reg> config_fs_sft_scl[20];
        };

        template<bool is_reg=false>
        union vcc_ch20_u
        {
            vcc_ch20_regs<is_reg> reg;
            vcc_ch20_fields<is_reg> fld;
        };

        typedef vcc_ch20_fields<true>  vcc_ch20_reg_t;
        typedef vcc_ch20_fields<false> vcc_ch20_mem_t;

        struct vcc_ch20_fpga_parameters
        {
            std::uint32_t channels_out; /*!< Number of output channels configured in the firmware for this instance. */
            std::uint32_t polarisations; /*!< Number of polarisations configured in the firmware for this instance. */
            std::uint32_t input_frame_size; /*!< Size of input frame configured in the firmware for this instance. */
        };


        static_assert(4 == sizeof(_config_pps_frame_count_s<>), "struct _config_pps_frame_count_s does not have the correct size.");
        static_assert(4 == sizeof(_config_pps_frame_count_u<>), "union _config_pps_frame_count_u does not have the correct size.");
        static_assert(4 == sizeof(_config_fs_sft_scl_s<>), "struct _config_fs_sft_scl_s does not have the correct size.");
        static_assert(4 == sizeof(_config_fs_sft_scl_u<>), "union _config_fs_sft_scl_u does not have the correct size.");
        static_assert(84 == sizeof(vcc_ch20_regs<>), "struct vcc_ch20_regs does not have the correct size.");
        static_assert(84 == sizeof(vcc_ch20_fields<>), "struct vcc_ch20_fields does not have the correct size.");
        static_assert(84 == sizeof(vcc_ch20_u<>), "union vcc_ch20_u does not have the correct size.");
        static_assert(84 == sizeof(vcc_ch20_reg_t), "type vcc_ch20_reg_t does not have the correct size.");
        static_assert(84 == sizeof(vcc_ch20_mem_t), "type vcc_ch20_mem_t does not have the correct size.");

    /* trailer stuff */
    }
#endif
