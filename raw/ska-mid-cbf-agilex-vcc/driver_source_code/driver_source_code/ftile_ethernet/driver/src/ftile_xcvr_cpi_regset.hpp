
#ifndef __FTILE_XCVR_CPI_REGSET__H__
    #define __FTILE_XCVR_CPI_REGSET__H__
    #include <cstdint>
    #include <assert.h>
    #include <iostream>
    #include "register_types.hpp"
    using fpga_driver::reg_t;
    namespace ftile_xcvr_cpi_regset {

        const std::string mnemonic = "ftile_xcvr_cpi";
        const std::string version = "1.0.0";

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cfg_link_mng_cpi_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> cfg_link_mng_cpi_opcode; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,11,8> cfg_link_mng_cpi_lane_number; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,13,13> cfg_link_mng_cpi_set_get; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,14,14> cfg_link_mng_cpi_reset; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,15> cfg_link_mng_cpi_service_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,16> cfg_link_mng_cpi_data; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _cfg_link_mng_cpi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cfg_link_mng_cpi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cfg_phy_cpi_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> cfg_phy_cpi_opcode; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,11,8> cfg_phy_cpi_lane_number; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,13,13> cfg_phy_cpi_set_get; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,14,14> cfg_phy_cpi_reset; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,15> cfg_phy_cpi_service_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,16> cfg_phy_cpi_data; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _cfg_phy_cpi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cfg_phy_cpi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _fgt_quad_lane_number_s
        {
            union {
                reg_t<std::uint32_t,is_reg,1,0> fgt_lane_number; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,2> fgt_quad_number; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _fgt_quad_lane_number_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _fgt_quad_lane_number_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_xcvr_cpi_regs
        {
            reg_t<std::uint8_t,is_reg> reserved1[60];
            _cfg_link_mng_cpi_u<is_reg> cfg_link_mng_cpi;
            _cfg_phy_cpi_u<is_reg> cfg_phy_cpi;
            reg_t<std::uint8_t,is_reg> reserved3[56];
            _fgt_quad_lane_number_u<is_reg> fgt_quad_lane_number;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_xcvr_cpi_fields
        {
            reg_t<std::uint8_t,is_reg> reserved5[60];
            union {
                reg_t<std::uint32_t,is_reg,7,0> cfg_link_mng_cpi_opcode; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,11,8> cfg_link_mng_cpi_lane_number; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,13,13> cfg_link_mng_cpi_set_get; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,14,14> cfg_link_mng_cpi_reset; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,15> cfg_link_mng_cpi_service_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,16> cfg_link_mng_cpi_data; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,7,0> cfg_phy_cpi_opcode; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,11,8> cfg_phy_cpi_lane_number; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,13,13> cfg_phy_cpi_set_get; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,14,14> cfg_phy_cpi_reset; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,15> cfg_phy_cpi_service_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,16> cfg_phy_cpi_data; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved7[56];
            union {
                reg_t<std::uint32_t,is_reg,1,0> fgt_lane_number; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,2> fgt_quad_number; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union ftile_xcvr_cpi_u
        {
            ftile_xcvr_cpi_regs<is_reg> reg;
            ftile_xcvr_cpi_fields<is_reg> fld;
        };

        typedef ftile_xcvr_cpi_fields<true>  ftile_xcvr_cpi_reg_t;
        typedef ftile_xcvr_cpi_fields<false> ftile_xcvr_cpi_mem_t;




        static_assert(4 == sizeof(_cfg_link_mng_cpi_s<>), "struct _cfg_link_mng_cpi_s does not have the correct size.");
        static_assert(4 == sizeof(_cfg_link_mng_cpi_u<>), "union _cfg_link_mng_cpi_u does not have the correct size.");
        static_assert(4 == sizeof(_cfg_phy_cpi_s<>), "struct _cfg_phy_cpi_s does not have the correct size.");
        static_assert(4 == sizeof(_cfg_phy_cpi_u<>), "union _cfg_phy_cpi_u does not have the correct size.");
        static_assert(4 == sizeof(_fgt_quad_lane_number_s<>), "struct _fgt_quad_lane_number_s does not have the correct size.");
        static_assert(4 == sizeof(_fgt_quad_lane_number_u<>), "union _fgt_quad_lane_number_u does not have the correct size.");
        static_assert(128 == sizeof(ftile_xcvr_cpi_regs<>), "struct ftile_xcvr_cpi_regs does not have the correct size.");
        static_assert(128 == sizeof(ftile_xcvr_cpi_fields<>), "struct ftile_xcvr_cpi_fields does not have the correct size.");
        static_assert(128 == sizeof(ftile_xcvr_cpi_u<>), "union ftile_xcvr_cpi_u does not have the correct size.");
        static_assert(128 == sizeof(ftile_xcvr_cpi_reg_t), "type ftile_xcvr_cpi_reg_t does not have the correct size.");
        static_assert(128 == sizeof(ftile_xcvr_cpi_mem_t), "type ftile_xcvr_cpi_mem_t does not have the correct size.");

    /* trailer stuff */
    }
#endif
