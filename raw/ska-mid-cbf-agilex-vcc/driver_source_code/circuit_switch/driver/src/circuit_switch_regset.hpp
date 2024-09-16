
#ifndef __CIRCUIT_SWITCH_REGSET__H__
    #define __CIRCUIT_SWITCH_REGSET__H__
    #include <cstdint>
    #include <assert.h>
    #include <iostream>
    #include "register_types.hpp"
    using fpga_driver::reg_t;
    namespace circuit_switch_regset {

        const std::string mnemonic = "circuit_switch";
        const std::string version = "2.0.0";

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _number_of_ports_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> number_of_inputs; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> number_of_outputs; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _number_of_ports_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _number_of_ports_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _input_sel_s
        {
            reg_t<std::uint32_t,is_reg,7,0> input_select; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _input_sel_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _input_sel_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) circuit_switch_regs
        {
            _number_of_ports_u<is_reg> number_of_ports;
            _input_sel_u<is_reg> input_sel[31];
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) circuit_switch_fields
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> number_of_inputs; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> number_of_outputs; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,7,0> input_select[31]; /*!< [rw] */
        };

        template<bool is_reg=false>
        union circuit_switch_u
        {
            circuit_switch_regs<is_reg> reg;
            circuit_switch_fields<is_reg> fld;
        };

        typedef circuit_switch_fields<true>  circuit_switch_reg_t;
        typedef circuit_switch_fields<false> circuit_switch_mem_t;




        static_assert(4 == sizeof(_number_of_ports_s<>), "struct _number_of_ports_s does not have the correct size.");
        static_assert(4 == sizeof(_number_of_ports_u<>), "union _number_of_ports_u does not have the correct size.");
        static_assert(4 == sizeof(_input_sel_s<>), "struct _input_sel_s does not have the correct size.");
        static_assert(4 == sizeof(_input_sel_u<>), "union _input_sel_u does not have the correct size.");
        static_assert(128 == sizeof(circuit_switch_regs<>), "struct circuit_switch_regs does not have the correct size.");
        static_assert(128 == sizeof(circuit_switch_fields<>), "struct circuit_switch_fields does not have the correct size.");
        static_assert(128 == sizeof(circuit_switch_u<>), "union circuit_switch_u does not have the correct size.");
        static_assert(128 == sizeof(circuit_switch_reg_t), "type circuit_switch_reg_t does not have the correct size.");
        static_assert(128 == sizeof(circuit_switch_mem_t), "type circuit_switch_mem_t does not have the correct size.");

    /* trailer stuff */
    }
#endif
