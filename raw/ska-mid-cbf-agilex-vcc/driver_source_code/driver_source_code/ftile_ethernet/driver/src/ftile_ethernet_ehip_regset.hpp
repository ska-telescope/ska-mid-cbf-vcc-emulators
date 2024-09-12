
#ifndef __FTILE_ETHERNET_EHIP_REGSET__H__
    #define __FTILE_ETHERNET_EHIP_REGSET__H__
    #include <cstdint>
    #include <assert.h>
    #include <iostream>
    #include "register_types.hpp"
    using fpga_driver::reg_t;
    namespace ftile_ethernet_ehip_regset {

        const std::string mnemonic = "ftile_ethernet_ehip";
        const std::string version = "24.2.0";

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _config_ctrl_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_shadow_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_shadow_req; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _config_ctrl_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _config_ctrl_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pld_conf_s
        {
            reg_t<std::uint32_t,is_reg,2,0> tx_ehip_mode; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pld_conf_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pld_conf_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_pld_conf_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> rx_ehip_mode; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> rxpldmux_pcs; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> rxpldmux_pcs66; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,10,8> rxpldmux_sel; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rx_pld_conf_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_pld_conf_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _phy_ehip_pcs_modes_s
        {
            reg_t<std::uint32_t,is_reg,12,12> phy_sclr_frame_error; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _phy_ehip_pcs_modes_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _phy_ehip_pcs_modes_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_am_encoding_0_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_am_encoding_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_am_encoding_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_am_encoding_1_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_am_encoding_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_am_encoding_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_am_encoding_2_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_2; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_am_encoding_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_am_encoding_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_am_encoding_3_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_3; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_am_encoding_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_am_encoding_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_am_encoding_0_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_4; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_am_encoding_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_am_encoding_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_am_encoding_1_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_5; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_am_encoding_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_am_encoding_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_am_encoding_2_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_6; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_am_encoding_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_am_encoding_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_am_encoding_3_s
        {
            reg_t<std::uint32_t,is_reg,23,0> am_7; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_am_encoding_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_am_encoding_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _xus_timer_window_s
        {
            reg_t<std::uint32_t,is_reg,20,0> cycles; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _xus_timer_window_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _xus_timer_window_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ber_invalid_count_s
        {
            reg_t<std::uint32_t,is_reg,6,0> count_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _ber_invalid_count_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ber_invalid_count_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _err_inj_s
        {
            reg_t<std::uint32_t,is_reg,19,0> inj_err; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _err_inj_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _err_inj_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _phy_frame_error_s
        {
            reg_t<std::uint32_t,is_reg,19,0> frmerr; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _phy_frame_error_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _phy_frame_error_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _phy_rxpcs_status_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_aligned; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> hi_ber; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _phy_rxpcs_status_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _phy_rxpcs_status_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _am_lock_s
        {
            reg_t<std::uint32_t,is_reg,0,0> am_lock; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _am_lock_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _am_lock_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _lanes_deskewed_s
        {
            reg_t<std::uint32_t,is_reg,0,0> dskew_chng_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _lanes_deskewed_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _lanes_deskewed_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ber_count_s
        {
            reg_t<std::uint32_t,is_reg,31,0> count_23; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ber_count_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ber_count_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pcs_vlane_0_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,10> vlane2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,15> vlane3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,20> vlane4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,25> vlane5; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _pcs_vlane_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pcs_vlane_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pcs_vlane_1_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,10> vlane8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,15> vlane9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,20> vlane10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,25> vlane11; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _pcs_vlane_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pcs_vlane_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pcs_vlane_2_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,10> vlane14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,15> vlane15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,20> vlane16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,25> vlane17; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _pcs_vlane_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pcs_vlane_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pcs_vlane_3_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane19; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _pcs_vlane_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pcs_vlane_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_0_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_1_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_2_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_3_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_4_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_5_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_6; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_6_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_7; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_7_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_8; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_8_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_9; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_9_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_10; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_10_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_11; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_11_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_12; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_12_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_13; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_13_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_14; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_14_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_15; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_15_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_16; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_16_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_17; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_16_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_16_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_17_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_18; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_17_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_17_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_18_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_19; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_18_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_18_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _bip_counter_19_s
        {
            reg_t<std::uint32_t,is_reg,15,0> count_20; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _bip_counter_19_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _bip_counter_19_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _err_block_cnt_s
        {
            reg_t<std::uint32_t,is_reg,31,0> count_21; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _err_block_cnt_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _err_block_cnt_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dsk_depth_0_s
        {
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dsk_depth_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dsk_depth_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dsk_depth_1_s
        {
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_1; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dsk_depth_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dsk_depth_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dsk_depth_2_s
        {
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_2; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dsk_depth_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dsk_depth_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dsk_depth_3_s
        {
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_3; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dsk_depth_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dsk_depth_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pcs_bitslip_cnt_s
        {
            union {
                reg_t<std::uint32_t,is_reg,6,0> bitslip_cnt; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,7> dlpulse_alignment; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _pcs_bitslip_cnt_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pcs_bitslip_cnt_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_0_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_1_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_1; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_2_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_2; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_3_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_3; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_4_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_4; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_5_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_5; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_6_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_6; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_7_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_7; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_8_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_8; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_9_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_9; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_10_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_10; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_11_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_11; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_12_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_12; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_13_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_13; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_14_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_14; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_15_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_15; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_16_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_16; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_16_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_16_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_17_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_17; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_17_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_17_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_18_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_18; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_18_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_18_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_lo_19_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_19; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_lo_19_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_lo_19_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_0_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_20; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_20; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_1_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_21; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_21; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_2_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_22; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_22; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_3_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_23; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_23; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_4_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_24; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_24; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_5_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_25; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_25; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_6_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_26; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_26; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_7_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_27; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_27; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_8_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_28; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_28; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_9_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_29; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_29; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_10_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_30; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_30; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_11_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_31; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_31; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_12_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_32; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_32; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_13_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_33; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_33; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_14_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_34; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_34; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_15_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_35; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_35; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_16_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_36; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_36; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_16_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_16_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_17_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_37; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_37; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_17_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_17_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_18_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_38; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_38; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_18_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_18_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_vl_data_hi_19_s
        {
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_39; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_39; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_vl_data_hi_19_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_vl_data_hi_19_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_lal_s
        {
            reg_t<std::uint32_t,is_reg,4,0> count_22; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_lal_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_lal_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _link_fault_config_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_lf; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> en_unidir; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> disable_rf; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> force_rf; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _link_fault_config_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _link_fault_config_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ipg_col_rem_s
        {
            reg_t<std::uint32_t,is_reg,15,0> ipg_col_rem; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _ipg_col_rem_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ipg_col_rem_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _max_tx_size_config_s
        {
            reg_t<std::uint32_t,is_reg,15,0> max_tx; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _max_tx_size_config_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _max_tx_size_config_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _txmac_control_s
        {
            union {
                reg_t<std::uint32_t,is_reg,1,1> disable_txvlan; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> disable_txmac; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> en_saddr_insert; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _txmac_control_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _txmac_control_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _txmac_ehip_cfg_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_pp_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,1> ipg; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> tx_plen_en; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,9,9> txcrc_covers_preamble; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _txmac_ehip_cfg_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _txmac_ehip_cfg_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _txmac_saddrl_s
        {
            reg_t<std::uint32_t,is_reg,31,0> saddrl_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _txmac_saddrl_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _txmac_saddrl_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _txmac_saddrh_s
        {
            reg_t<std::uint32_t,is_reg,15,0> saddrh_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _txmac_saddrh_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _txmac_saddrh_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _max_rx_size_config_s
        {
            reg_t<std::uint32_t,is_reg,15,0> max_rx; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _max_rx_size_config_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _max_rx_size_config_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _mac_crc_config_s
        {
            reg_t<std::uint32_t,is_reg,0,0> forward_rx_crc; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _mac_crc_config_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _mac_crc_config_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rxmac_control_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_plen; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> disable_rxvlan; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> en_check_sfd; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> en_strict_preamble; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,7,7> enforce_max_rx; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,8,8> remove_rx_pad; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rxmac_control_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rxmac_control_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rxmac_ehip_cfg_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_pp_0; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rxcrc_covers_preamble; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,2> mac_lb_mode; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rxmac_ehip_cfg_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rxmac_ehip_cfg_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pause_en_s
        {
            reg_t<std::uint32_t,is_reg,8,0> en_pfc_port; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pause_en_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pause_en_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pause_request_s
        {
            reg_t<std::uint32_t,is_reg,8,0> req_pause; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pause_request_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pause_request_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _retransmit_xoff_holdoff_en_s
        {
            reg_t<std::uint32_t,is_reg,8,0> en_holdoff; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _retransmit_xoff_holdoff_en_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _retransmit_xoff_holdoff_en_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _retransmit_xoff_holdoff_quanta_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _retransmit_xoff_holdoff_quanta_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _retransmit_xoff_holdoff_quanta_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pause_quanta_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pause_quanta_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pause_quanta_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_xof_en_tx_pause_qnumber_s
        {
            reg_t<std::uint32_t,is_reg,2,0> en_xoff_qnum_sel; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_xof_en_tx_pause_qnumber_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_xof_en_tx_pause_qnumber_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cfg_retransmit_holdoff_en_s
        {
            reg_t<std::uint32_t,is_reg,0,0> en_holdoff_all; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _cfg_retransmit_holdoff_en_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cfg_retransmit_holdoff_en_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cfg_retransmit_holdoff_quanta_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_all_quanta; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _cfg_retransmit_holdoff_quanta_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cfg_retransmit_holdoff_quanta_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pfc_daddrl_s
        {
            reg_t<std::uint32_t,is_reg,31,0> daddrl; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pfc_daddrl_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pfc_daddrl_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pfc_daddrh_s
        {
            reg_t<std::uint32_t,is_reg,15,0> daddrh; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pfc_daddrh_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pfc_daddrh_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pfc_saddrl_s
        {
            reg_t<std::uint32_t,is_reg,31,0> saddrl_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pfc_saddrl_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pfc_saddrl_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_pfc_saddrh_s
        {
            reg_t<std::uint32_t,is_reg,15,0> saddrh_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_pfc_saddrh_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_pfc_saddrh_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _txsfc_ehip_cfg_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_sfc_0; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> en_pfc_0; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _txsfc_ehip_cfg_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _txsfc_ehip_cfg_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_pause_enable_s
        {
            reg_t<std::uint32_t,is_reg,7,0> en_rx_pause; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_pause_enable_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_pause_enable_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_pause_fwd_s
        {
            reg_t<std::uint32_t,is_reg,0,0> rx_pause_fwd; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_pause_fwd_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_pause_fwd_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_pause_daddrl_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_pause_daddrl; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_pause_daddrl_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_pause_daddrl_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_pause_daddrh_s
        {
            reg_t<std::uint32_t,is_reg,15,0> rx_pause_daddrh; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_pause_daddrh_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_pause_daddrh_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rxsfc_ehip_cfg_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_sfc_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> en_pfc_1; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rxsfc_ehip_cfg_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rxsfc_ehip_cfg_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_config_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rst_tx_stats; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rst_tx_parity; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _cntr_tx_config_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_config_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_config_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rst_rx_stats; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rst_rx_parity; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _cntr_rx_config_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_config_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_0_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_1_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_2; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_2_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_3; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_3_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_4; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_4_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_5; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_5_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_6; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_6_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_7; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_pause_quanta_7_s
        {
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_8; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_pause_quanta_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_pause_quanta_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_0_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_1_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_2; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_2_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_3; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_3_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_4; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_4_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_5; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_5_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_6; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_6_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_7; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pfc_holdoff_quanta_7_s
        {
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_8; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pfc_holdoff_quanta_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pfc_holdoff_quanta_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_extra_latency_s
        {
            reg_t<std::uint32_t,is_reg,31,0> extra_latency_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_extra_latency_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_extra_latency_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_ui_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ui_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_ui_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_ui_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_phy_lane_num_s
        {
            reg_t<std::uint32_t,is_reg,5,0> lane_num_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_phy_lane_num_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_phy_lane_num_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_ap_filter_s
        {
            reg_t<std::uint32_t,is_reg,15,0> ap_filter_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_ap_filter_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_ap_filter_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_2; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_3; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_4; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_5; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_6; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_7; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_8; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_9; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_10; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_11; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_12; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_13; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_14; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_15; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_16_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_16; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_16_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_16_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_17_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_17; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_17_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_17_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_18_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_18; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_18_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_18_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_vl_offset_19_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_19; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _tx_ptp_vl_offset_19_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_vl_offset_19_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_extra_latency_s
        {
            reg_t<std::uint32_t,is_reg,31,0> extra_latency_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_extra_latency_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_extra_latency_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_ui_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ui_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_ui_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_ui_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_phy_lane_num_s
        {
            reg_t<std::uint32_t,is_reg,5,0> lane_num_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_phy_lane_num_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_phy_lane_num_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_ap_filter_s
        {
            reg_t<std::uint32_t,is_reg,15,0> ap_filter_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_ap_filter_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_ap_filter_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_20; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_21; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_22; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_23; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_24; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_25; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_26; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_27; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_28; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_29; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_30; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_31; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_32; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_33; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_34; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_35; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_16_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_36; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_16_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_16_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_17_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_37; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_17_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_17_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_18_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_38; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_18_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_18_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_offset_19_s
        {
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_39; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_offset_19_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_offset_19_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_2; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_3; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_4; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_5; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_6; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_7; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_8; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_9; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_10; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_11; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_12; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_13; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_14; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_15; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_16_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_16; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_16_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_16_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_17_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_17; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_17_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_17_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_18_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_18; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_18_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_18_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_vl_to_pl_19_s
        {
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_19; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_ptp_vl_to_pl_19_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_vl_to_pl_19_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_pkt_n_ts_rx_ctr_s
        {
            reg_t<std::uint32_t,is_reg,19,0> n_ts_ctr; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _rx_pkt_n_ts_rx_ctr_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_pkt_n_ts_rx_ctr_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_fragments_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_fragments_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_fragments_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_fragments_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_jabbers_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_jabbers_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_jabbers_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_jabbers_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_fcs_err_okpkt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_fcs_err_okpkt_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_fcs_err_okpkt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_fcs_err_okpkt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_mcast_data_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_data_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_mcast_data_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_mcast_data_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_bcast_data_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_data_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_bcast_data_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_bcast_data_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_ucast_data_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_data_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_ucast_data_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_ucast_data_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_mcast_ctrl_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_ctrl_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_mcast_ctrl_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_mcast_ctrl_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_bcast_ctrl_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_ctrl_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_bcast_ctrl_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_bcast_ctrl_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_ucast_ctrl_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_ctrl_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_ucast_ctrl_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_ucast_ctrl_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_pause_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pause_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_pause_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_pause_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_64b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_64b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_64b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_64b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_64b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_64b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_64b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_64b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_65to127b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_65to127b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_65to127b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_65to127b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_65to127b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_65to127b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_65to127b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_65to127b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_128to255b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_128to255b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_128to255b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_128to255b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_128to255b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_128to255b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_128to255b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_128to255b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_256to511b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_256to511b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_256to511b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_256to511b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_256to511b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_256to511b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_256to511b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_256to511b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_512to1023b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_512to1023b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_512to1023b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_512to1023b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_512to1023b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_512to1023b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_512to1023b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_512to1023b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_1024to1518b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1024to1518b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_1024to1518b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_1024to1518b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_1024to1518b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1024to1518b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_1024to1518b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_1024to1518b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_1519tomaxb_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1519tomaxb_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_1519tomaxb_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_1519tomaxb_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_1519tomaxb_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1519tomaxb_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_1519tomaxb_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_1519tomaxb_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_oversize_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_oversize_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_oversize_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_oversize_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_mcast_data_ok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_data_ok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_mcast_data_ok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_mcast_data_ok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_mcast_data_ok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_data_ok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_mcast_data_ok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_mcast_data_ok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_bcast_data_ok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_data_ok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_bcast_data_ok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_bcast_data_ok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_bcast_data_ok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_data_ok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_bcast_data_ok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_bcast_data_ok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_ucast_data_ok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_data_ok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_ucast_data_ok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_ucast_data_ok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_ucast_data_ok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_data_ok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_ucast_data_ok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_ucast_data_ok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_mcast_ctrl_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_ctrl_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_mcast_ctrl_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_mcast_ctrl_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_mcast_ctrl_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_ctrl_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_mcast_ctrl_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_mcast_ctrl_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_bcast_ctrl_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_ctrl_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_bcast_ctrl_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_bcast_ctrl_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_bcast_ctrl_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_ctrl_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_bcast_ctrl_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_bcast_ctrl_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_ucast_ctrl_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_ctrl_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_ucast_ctrl_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_ucast_ctrl_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_ucast_ctrl_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_ctrl_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_ucast_ctrl_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_ucast_ctrl_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_pause_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pause_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_pause_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_pause_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_pause_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pause_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_pause_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_pause_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_runt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_runt_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_runt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_runt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_st_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_st_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_st_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_st_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_st_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_st_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_st_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_st_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_lenerr_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_lenerr_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_lenerr_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_lenerr_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_pfc_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pfc_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_pfc_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_pfc_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_pfc_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pfc_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_pfc_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_pfc_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_pfc_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pfc_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_pfc_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_pfc_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_payloadoctetsok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_payloadoctetsok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_payloadoctetsok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_payloadoctetsok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_payloadoctetsok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_payloadoctetsok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_payloadoctetsok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_payloadoctetsok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_octetsok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_octetsok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_octetsok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_octetsok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_octetsok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_octetsok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_octetsok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_octetsok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_malformed_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_malformed_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_malformed_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_malformed_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_dropped_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_dropped_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_dropped_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_dropped_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_badlt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_badlt_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_badlt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_badlt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_total_ptp_pkts_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_ptp_pkts; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_total_ptp_pkts_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_total_ptp_pkts_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_total_1step_ptp_pkts_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_1step_ptp_pkts; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_total_1step_ptp_pkts_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_total_1step_ptp_pkts_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_total_2step_ptp_pkts_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_2step_ptp_pkts; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_total_2step_ptp_pkts_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_total_2step_ptp_pkts_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_total_v1_ptp_pkts_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_v1_ptp_pkts; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_total_v1_ptp_pkts_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_total_v1_ptp_pkts_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_tx_total_v2_ptp_pkts_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_v2_ptp_pkts; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_tx_total_v2_ptp_pkts_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_tx_total_v2_ptp_pkts_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_fragments_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_fragments_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_fragments_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_fragments_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_jabbers_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_jabbers_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_jabbers_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_jabbers_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_fcs_err_okpkt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_fcs_err_okpkt_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_fcs_err_okpkt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_fcs_err_okpkt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_mcast_data_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_data_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_mcast_data_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_mcast_data_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_bcast_data_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_data_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_bcast_data_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_bcast_data_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_ucast_data_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_data_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_ucast_data_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_ucast_data_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_mcast_ctrl_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_ctrl_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_mcast_ctrl_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_mcast_ctrl_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_bcast_ctrl_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_ctrl_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_bcast_ctrl_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_bcast_ctrl_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_ucast_ctrl_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_ctrl_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_ucast_ctrl_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_ucast_ctrl_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_pause_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pause_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_pause_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_pause_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_64b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_64b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_64b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_64b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_64b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_64b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_64b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_64b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_65to127b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_65to127b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_65to127b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_65to127b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_65to127b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_65to127b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_65to127b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_65to127b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_128to255b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_128to255b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_128to255b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_128to255b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_128to255b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_128to255b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_128to255b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_128to255b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_256to511b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_256to511b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_256to511b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_256to511b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_256to511b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_256to511b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_256to511b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_256to511b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_512to1023b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_512to1023b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_512to1023b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_512to1023b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_512to1023b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_512to1023b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_512to1023b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_512to1023b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_1024to1518b_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1024to1518b_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_1024to1518b_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_1024to1518b_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_1024to1518b_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1024to1518b_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_1024to1518b_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_1024to1518b_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_1519tomaxb_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1519tomaxb_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_1519tomaxb_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_1519tomaxb_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_1519tomaxb_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1519tomaxb_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_1519tomaxb_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_1519tomaxb_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_oversize_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_oversize_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_oversize_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_oversize_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_mcast_data_ok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_data_ok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_mcast_data_ok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_mcast_data_ok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_mcast_data_ok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_data_ok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_mcast_data_ok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_mcast_data_ok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_bcast_data_ok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_data_ok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_bcast_data_ok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_bcast_data_ok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_bcast_data_ok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_data_ok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_bcast_data_ok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_bcast_data_ok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_ucast_data_ok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_data_ok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_ucast_data_ok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_ucast_data_ok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_ucast_data_ok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_data_ok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_ucast_data_ok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_ucast_data_ok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_mcast_ctrl_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_ctrl_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_mcast_ctrl_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_mcast_ctrl_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_mcast_ctrl_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_ctrl_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_mcast_ctrl_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_mcast_ctrl_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_bcast_ctrl_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_ctrl_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_bcast_ctrl_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_bcast_ctrl_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_bcast_ctrl_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_ctrl_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_bcast_ctrl_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_bcast_ctrl_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_ucast_ctrl_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_ctrl_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_ucast_ctrl_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_ucast_ctrl_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_ucast_ctrl_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_ctrl_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_ucast_ctrl_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_ucast_ctrl_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_pause_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pause_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_pause_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_pause_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_pause_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pause_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_pause_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_pause_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_runt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_runt_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_runt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_runt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_st_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_st_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_st_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_st_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_st_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_st_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_st_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_st_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_lenerr_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_lenerr_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_lenerr_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_lenerr_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_pfc_err_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pfc_err_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_pfc_err_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_pfc_err_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_pfc_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pfc_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_pfc_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_pfc_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_pfc_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pfc_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_pfc_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_pfc_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_payloadoctetsok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_payloadoctetsok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_payloadoctetsok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_payloadoctetsok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_payloadoctetsok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_payloadoctetsok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_payloadoctetsok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_payloadoctetsok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_octetsok_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_octetsok_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_octetsok_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_octetsok_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_octetsok_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_octetsok_hi; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_octetsok_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_octetsok_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_malformed_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_malformed_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_malformed_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_malformed_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_dropped_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_dropped_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_dropped_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_dropped_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_badlt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_badlt_lo; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_badlt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_badlt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cntr_rx_total_ptp_ts_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_total_ptp_ts; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cntr_rx_total_ptp_ts_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cntr_rx_total_ptp_ts_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_cf_overflow_s
        {
            reg_t<std::uint32_t,is_reg,1,1> bit1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_cf_overflow_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_cf_overflow_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_6; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_7; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_8; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_9; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_10; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_11; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_12; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_13; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_14; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_15; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_16; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_17; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_18; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_19; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_20; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_6; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_21; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_22; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_23; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_7; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_24; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_25; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_26; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_8; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_27; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_28; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_29; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_9; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_30; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_31; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_32; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_10; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_33; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_34; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_35; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_11; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_36; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_37; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_38; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_12; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_39; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_40; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_41; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_13; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_42; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_43; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_44; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_14; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_lo_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_45; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_lo_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_lo_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_med_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_46; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_med_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_med_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_hi_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_47; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_hi_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_hi_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ptp_tam_adj_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_15; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ptp_tam_adj_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ptp_tam_adj_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ts_ss_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ts_ss_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ts_ss_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ts_ss_mid_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ts_ss_mid_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ts_ss_mid_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_ts_ss_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_ts_ss_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_ts_ss_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_48; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_49; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_50; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_16; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_51; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_52; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_53; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_1_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_17; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_54; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_55; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_56; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_2_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_18; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_57; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_58; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_59; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_3_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_19; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_60; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_61; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_62; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_4_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_20; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_63; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_64; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_65; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_5_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_21; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_5_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_5_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_66; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_67; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_68; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_6_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_22; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_6_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_6_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_69; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_70; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_71; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_7_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_23; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_72; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_73; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_74; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_8_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_24; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_8_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_8_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_75; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_76; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_77; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_9_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_25; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_9_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_9_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_78; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_79; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_80; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_10_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_26; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_10_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_10_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_81; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_82; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_83; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_11_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_27; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_84; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_85; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_86; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_12_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_28; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_87; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_88; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_89; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_13_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_29; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_13_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_13_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_90; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_91; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_92; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_14_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_30; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_14_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_14_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_lo_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_93; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_lo_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_lo_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_med_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_94; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_med_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_med_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_hi_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_95; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_hi_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_hi_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ptp_tam_adj_pl_15_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_31; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ptp_tam_adj_pl_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ptp_tam_adj_pl_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ts_ss_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ts_ss_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ts_ss_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ts_ss_mid_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ts_ss_mid_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ts_ss_mid_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_ts_ss_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_ts_ss_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_ts_ss_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_ethernet_ehip_regs
        {
            _config_ctrl_u<is_reg> config_ctrl;
            reg_t<std::uint8_t,is_reg> reserved1[12];
            _tx_pld_conf_u<is_reg> tx_pld_conf;
            _rx_pld_conf_u<is_reg> rx_pld_conf;
            reg_t<std::uint8_t,is_reg> reserved3[48];
            _phy_ehip_pcs_modes_u<is_reg> phy_ehip_pcs_modes;
            reg_t<std::uint8_t,is_reg> reserved5[4];
            _tx_am_encoding_0_u<is_reg> tx_am_encoding_0;
            _tx_am_encoding_1_u<is_reg> tx_am_encoding_1;
            _tx_am_encoding_2_u<is_reg> tx_am_encoding_2;
            _tx_am_encoding_3_u<is_reg> tx_am_encoding_3;
            _rx_am_encoding_0_u<is_reg> rx_am_encoding_0;
            _rx_am_encoding_1_u<is_reg> rx_am_encoding_1;
            _rx_am_encoding_2_u<is_reg> rx_am_encoding_2;
            _rx_am_encoding_3_u<is_reg> rx_am_encoding_3;
            _xus_timer_window_u<is_reg> xus_timer_window;
            _ber_invalid_count_u<is_reg> ber_invalid_count;
            _err_inj_u<is_reg> err_inj;
            reg_t<std::uint8_t,is_reg> reserved7[4];
            _phy_frame_error_u<is_reg> phy_frame_error;
            _phy_rxpcs_status_u<is_reg> phy_rxpcs_status;
            _am_lock_u<is_reg> am_lock;
            _lanes_deskewed_u<is_reg> lanes_deskewed;
            _ber_count_u<is_reg> ber_count;
            _pcs_vlane_0_u<is_reg> pcs_vlane_0;
            _pcs_vlane_1_u<is_reg> pcs_vlane_1;
            _pcs_vlane_2_u<is_reg> pcs_vlane_2;
            _pcs_vlane_3_u<is_reg> pcs_vlane_3;
            _bip_counter_0_u<is_reg> bip_counter_0;
            _bip_counter_1_u<is_reg> bip_counter_1;
            _bip_counter_2_u<is_reg> bip_counter_2;
            _bip_counter_3_u<is_reg> bip_counter_3;
            _bip_counter_4_u<is_reg> bip_counter_4;
            _bip_counter_5_u<is_reg> bip_counter_5;
            _bip_counter_6_u<is_reg> bip_counter_6;
            _bip_counter_7_u<is_reg> bip_counter_7;
            _bip_counter_8_u<is_reg> bip_counter_8;
            _bip_counter_9_u<is_reg> bip_counter_9;
            _bip_counter_10_u<is_reg> bip_counter_10;
            _bip_counter_11_u<is_reg> bip_counter_11;
            _bip_counter_12_u<is_reg> bip_counter_12;
            _bip_counter_13_u<is_reg> bip_counter_13;
            _bip_counter_14_u<is_reg> bip_counter_14;
            _bip_counter_15_u<is_reg> bip_counter_15;
            _bip_counter_16_u<is_reg> bip_counter_16;
            _bip_counter_17_u<is_reg> bip_counter_17;
            _bip_counter_18_u<is_reg> bip_counter_18;
            _bip_counter_19_u<is_reg> bip_counter_19;
            _err_block_cnt_u<is_reg> err_block_cnt;
            reg_t<std::uint8_t,is_reg> reserved9[4];
            _dsk_depth_0_u<is_reg> dsk_depth_0;
            _dsk_depth_1_u<is_reg> dsk_depth_1;
            _dsk_depth_2_u<is_reg> dsk_depth_2;
            _dsk_depth_3_u<is_reg> dsk_depth_3;
            reg_t<std::uint8_t,is_reg> reserved11[4];
            _pcs_bitslip_cnt_u<is_reg> pcs_bitslip_cnt;
            _ptp_vl_data_lo_0_u<is_reg> ptp_vl_data_lo_0;
            _ptp_vl_data_lo_1_u<is_reg> ptp_vl_data_lo_1;
            _ptp_vl_data_lo_2_u<is_reg> ptp_vl_data_lo_2;
            _ptp_vl_data_lo_3_u<is_reg> ptp_vl_data_lo_3;
            _ptp_vl_data_lo_4_u<is_reg> ptp_vl_data_lo_4;
            _ptp_vl_data_lo_5_u<is_reg> ptp_vl_data_lo_5;
            _ptp_vl_data_lo_6_u<is_reg> ptp_vl_data_lo_6;
            _ptp_vl_data_lo_7_u<is_reg> ptp_vl_data_lo_7;
            _ptp_vl_data_lo_8_u<is_reg> ptp_vl_data_lo_8;
            _ptp_vl_data_lo_9_u<is_reg> ptp_vl_data_lo_9;
            _ptp_vl_data_lo_10_u<is_reg> ptp_vl_data_lo_10;
            _ptp_vl_data_lo_11_u<is_reg> ptp_vl_data_lo_11;
            _ptp_vl_data_lo_12_u<is_reg> ptp_vl_data_lo_12;
            _ptp_vl_data_lo_13_u<is_reg> ptp_vl_data_lo_13;
            _ptp_vl_data_lo_14_u<is_reg> ptp_vl_data_lo_14;
            _ptp_vl_data_lo_15_u<is_reg> ptp_vl_data_lo_15;
            _ptp_vl_data_lo_16_u<is_reg> ptp_vl_data_lo_16;
            _ptp_vl_data_lo_17_u<is_reg> ptp_vl_data_lo_17;
            _ptp_vl_data_lo_18_u<is_reg> ptp_vl_data_lo_18;
            _ptp_vl_data_lo_19_u<is_reg> ptp_vl_data_lo_19;
            _ptp_vl_data_hi_0_u<is_reg> ptp_vl_data_hi_0;
            _ptp_vl_data_hi_1_u<is_reg> ptp_vl_data_hi_1;
            _ptp_vl_data_hi_2_u<is_reg> ptp_vl_data_hi_2;
            _ptp_vl_data_hi_3_u<is_reg> ptp_vl_data_hi_3;
            _ptp_vl_data_hi_4_u<is_reg> ptp_vl_data_hi_4;
            _ptp_vl_data_hi_5_u<is_reg> ptp_vl_data_hi_5;
            _ptp_vl_data_hi_6_u<is_reg> ptp_vl_data_hi_6;
            _ptp_vl_data_hi_7_u<is_reg> ptp_vl_data_hi_7;
            _ptp_vl_data_hi_8_u<is_reg> ptp_vl_data_hi_8;
            _ptp_vl_data_hi_9_u<is_reg> ptp_vl_data_hi_9;
            _ptp_vl_data_hi_10_u<is_reg> ptp_vl_data_hi_10;
            _ptp_vl_data_hi_11_u<is_reg> ptp_vl_data_hi_11;
            _ptp_vl_data_hi_12_u<is_reg> ptp_vl_data_hi_12;
            _ptp_vl_data_hi_13_u<is_reg> ptp_vl_data_hi_13;
            _ptp_vl_data_hi_14_u<is_reg> ptp_vl_data_hi_14;
            _ptp_vl_data_hi_15_u<is_reg> ptp_vl_data_hi_15;
            _ptp_vl_data_hi_16_u<is_reg> ptp_vl_data_hi_16;
            _ptp_vl_data_hi_17_u<is_reg> ptp_vl_data_hi_17;
            _ptp_vl_data_hi_18_u<is_reg> ptp_vl_data_hi_18;
            _ptp_vl_data_hi_19_u<is_reg> ptp_vl_data_hi_19;
            _ptp_lal_u<is_reg> ptp_lal;
            reg_t<std::uint8_t,is_reg> reserved13[72];
            _link_fault_config_u<is_reg> link_fault_config;
            _ipg_col_rem_u<is_reg> ipg_col_rem;
            _max_tx_size_config_u<is_reg> max_tx_size_config;
            _txmac_control_u<is_reg> txmac_control;
            _txmac_ehip_cfg_u<is_reg> txmac_ehip_cfg;
            _txmac_saddrl_u<is_reg> txmac_saddrl;
            _txmac_saddrh_u<is_reg> txmac_saddrh;
            _max_rx_size_config_u<is_reg> max_rx_size_config;
            _mac_crc_config_u<is_reg> mac_crc_config;
            _rxmac_control_u<is_reg> rxmac_control;
            _rxmac_ehip_cfg_u<is_reg> rxmac_ehip_cfg;
            _tx_pause_en_u<is_reg> tx_pause_en;
            _tx_pause_request_u<is_reg> tx_pause_request;
            _retransmit_xoff_holdoff_en_u<is_reg> retransmit_xoff_holdoff_en;
            _retransmit_xoff_holdoff_quanta_u<is_reg> retransmit_xoff_holdoff_quanta;
            _tx_pause_quanta_u<is_reg> tx_pause_quanta;
            _tx_xof_en_tx_pause_qnumber_u<is_reg> tx_xof_en_tx_pause_qnumber;
            _cfg_retransmit_holdoff_en_u<is_reg> cfg_retransmit_holdoff_en;
            _cfg_retransmit_holdoff_quanta_u<is_reg> cfg_retransmit_holdoff_quanta;
            _tx_pfc_daddrl_u<is_reg> tx_pfc_daddrl;
            _tx_pfc_daddrh_u<is_reg> tx_pfc_daddrh;
            _tx_pfc_saddrl_u<is_reg> tx_pfc_saddrl;
            _tx_pfc_saddrh_u<is_reg> tx_pfc_saddrh;
            _txsfc_ehip_cfg_u<is_reg> txsfc_ehip_cfg;
            _rx_pause_enable_u<is_reg> rx_pause_enable;
            _rx_pause_fwd_u<is_reg> rx_pause_fwd;
            _rx_pause_daddrl_u<is_reg> rx_pause_daddrl;
            _rx_pause_daddrh_u<is_reg> rx_pause_daddrh;
            _rxsfc_ehip_cfg_u<is_reg> rxsfc_ehip_cfg;
            _cntr_tx_config_u<is_reg> cntr_tx_config;
            _cntr_rx_config_u<is_reg> cntr_rx_config;
            reg_t<std::uint8_t,is_reg> reserved15[8];
            _pfc_pause_quanta_0_u<is_reg> pfc_pause_quanta_0;
            _pfc_pause_quanta_1_u<is_reg> pfc_pause_quanta_1;
            _pfc_pause_quanta_2_u<is_reg> pfc_pause_quanta_2;
            _pfc_pause_quanta_3_u<is_reg> pfc_pause_quanta_3;
            _pfc_pause_quanta_4_u<is_reg> pfc_pause_quanta_4;
            _pfc_pause_quanta_5_u<is_reg> pfc_pause_quanta_5;
            _pfc_pause_quanta_6_u<is_reg> pfc_pause_quanta_6;
            _pfc_pause_quanta_7_u<is_reg> pfc_pause_quanta_7;
            _pfc_holdoff_quanta_0_u<is_reg> pfc_holdoff_quanta_0;
            _pfc_holdoff_quanta_1_u<is_reg> pfc_holdoff_quanta_1;
            _pfc_holdoff_quanta_2_u<is_reg> pfc_holdoff_quanta_2;
            _pfc_holdoff_quanta_3_u<is_reg> pfc_holdoff_quanta_3;
            _pfc_holdoff_quanta_4_u<is_reg> pfc_holdoff_quanta_4;
            _pfc_holdoff_quanta_5_u<is_reg> pfc_holdoff_quanta_5;
            _pfc_holdoff_quanta_6_u<is_reg> pfc_holdoff_quanta_6;
            _pfc_holdoff_quanta_7_u<is_reg> pfc_holdoff_quanta_7;
            reg_t<std::uint8_t,is_reg> reserved17[28];
            _tx_ptp_extra_latency_u<is_reg> tx_ptp_extra_latency;
            _tx_ptp_ui_u<is_reg> tx_ptp_ui;
            reg_t<std::uint8_t,is_reg> reserved19[4];
            _tx_ptp_phy_lane_num_u<is_reg> tx_ptp_phy_lane_num;
            _tx_ptp_ap_filter_u<is_reg> tx_ptp_ap_filter;
            _tx_ptp_vl_offset_0_u<is_reg> tx_ptp_vl_offset_0;
            _tx_ptp_vl_offset_1_u<is_reg> tx_ptp_vl_offset_1;
            _tx_ptp_vl_offset_2_u<is_reg> tx_ptp_vl_offset_2;
            _tx_ptp_vl_offset_3_u<is_reg> tx_ptp_vl_offset_3;
            _tx_ptp_vl_offset_4_u<is_reg> tx_ptp_vl_offset_4;
            _tx_ptp_vl_offset_5_u<is_reg> tx_ptp_vl_offset_5;
            _tx_ptp_vl_offset_6_u<is_reg> tx_ptp_vl_offset_6;
            _tx_ptp_vl_offset_7_u<is_reg> tx_ptp_vl_offset_7;
            _tx_ptp_vl_offset_8_u<is_reg> tx_ptp_vl_offset_8;
            _tx_ptp_vl_offset_9_u<is_reg> tx_ptp_vl_offset_9;
            _tx_ptp_vl_offset_10_u<is_reg> tx_ptp_vl_offset_10;
            _tx_ptp_vl_offset_11_u<is_reg> tx_ptp_vl_offset_11;
            _tx_ptp_vl_offset_12_u<is_reg> tx_ptp_vl_offset_12;
            _tx_ptp_vl_offset_13_u<is_reg> tx_ptp_vl_offset_13;
            _tx_ptp_vl_offset_14_u<is_reg> tx_ptp_vl_offset_14;
            _tx_ptp_vl_offset_15_u<is_reg> tx_ptp_vl_offset_15;
            _tx_ptp_vl_offset_16_u<is_reg> tx_ptp_vl_offset_16;
            _tx_ptp_vl_offset_17_u<is_reg> tx_ptp_vl_offset_17;
            _tx_ptp_vl_offset_18_u<is_reg> tx_ptp_vl_offset_18;
            _tx_ptp_vl_offset_19_u<is_reg> tx_ptp_vl_offset_19;
            _rx_ptp_extra_latency_u<is_reg> rx_ptp_extra_latency;
            _rx_ptp_ui_u<is_reg> rx_ptp_ui;
            reg_t<std::uint8_t,is_reg> reserved21[4];
            _rx_ptp_phy_lane_num_u<is_reg> rx_ptp_phy_lane_num;
            _rx_ptp_ap_filter_u<is_reg> rx_ptp_ap_filter;
            _rx_ptp_vl_offset_0_u<is_reg> rx_ptp_vl_offset_0;
            _rx_ptp_vl_offset_1_u<is_reg> rx_ptp_vl_offset_1;
            _rx_ptp_vl_offset_2_u<is_reg> rx_ptp_vl_offset_2;
            _rx_ptp_vl_offset_3_u<is_reg> rx_ptp_vl_offset_3;
            _rx_ptp_vl_offset_4_u<is_reg> rx_ptp_vl_offset_4;
            _rx_ptp_vl_offset_5_u<is_reg> rx_ptp_vl_offset_5;
            _rx_ptp_vl_offset_6_u<is_reg> rx_ptp_vl_offset_6;
            _rx_ptp_vl_offset_7_u<is_reg> rx_ptp_vl_offset_7;
            _rx_ptp_vl_offset_8_u<is_reg> rx_ptp_vl_offset_8;
            _rx_ptp_vl_offset_9_u<is_reg> rx_ptp_vl_offset_9;
            _rx_ptp_vl_offset_10_u<is_reg> rx_ptp_vl_offset_10;
            _rx_ptp_vl_offset_11_u<is_reg> rx_ptp_vl_offset_11;
            _rx_ptp_vl_offset_12_u<is_reg> rx_ptp_vl_offset_12;
            _rx_ptp_vl_offset_13_u<is_reg> rx_ptp_vl_offset_13;
            _rx_ptp_vl_offset_14_u<is_reg> rx_ptp_vl_offset_14;
            _rx_ptp_vl_offset_15_u<is_reg> rx_ptp_vl_offset_15;
            _rx_ptp_vl_offset_16_u<is_reg> rx_ptp_vl_offset_16;
            _rx_ptp_vl_offset_17_u<is_reg> rx_ptp_vl_offset_17;
            _rx_ptp_vl_offset_18_u<is_reg> rx_ptp_vl_offset_18;
            _rx_ptp_vl_offset_19_u<is_reg> rx_ptp_vl_offset_19;
            _rx_ptp_vl_to_pl_0_u<is_reg> rx_ptp_vl_to_pl_0;
            _rx_ptp_vl_to_pl_1_u<is_reg> rx_ptp_vl_to_pl_1;
            _rx_ptp_vl_to_pl_2_u<is_reg> rx_ptp_vl_to_pl_2;
            _rx_ptp_vl_to_pl_3_u<is_reg> rx_ptp_vl_to_pl_3;
            _rx_ptp_vl_to_pl_4_u<is_reg> rx_ptp_vl_to_pl_4;
            _rx_ptp_vl_to_pl_5_u<is_reg> rx_ptp_vl_to_pl_5;
            _rx_ptp_vl_to_pl_6_u<is_reg> rx_ptp_vl_to_pl_6;
            _rx_ptp_vl_to_pl_7_u<is_reg> rx_ptp_vl_to_pl_7;
            _rx_ptp_vl_to_pl_8_u<is_reg> rx_ptp_vl_to_pl_8;
            _rx_ptp_vl_to_pl_9_u<is_reg> rx_ptp_vl_to_pl_9;
            _rx_ptp_vl_to_pl_10_u<is_reg> rx_ptp_vl_to_pl_10;
            _rx_ptp_vl_to_pl_11_u<is_reg> rx_ptp_vl_to_pl_11;
            _rx_ptp_vl_to_pl_12_u<is_reg> rx_ptp_vl_to_pl_12;
            _rx_ptp_vl_to_pl_13_u<is_reg> rx_ptp_vl_to_pl_13;
            _rx_ptp_vl_to_pl_14_u<is_reg> rx_ptp_vl_to_pl_14;
            _rx_ptp_vl_to_pl_15_u<is_reg> rx_ptp_vl_to_pl_15;
            _rx_ptp_vl_to_pl_16_u<is_reg> rx_ptp_vl_to_pl_16;
            _rx_ptp_vl_to_pl_17_u<is_reg> rx_ptp_vl_to_pl_17;
            _rx_ptp_vl_to_pl_18_u<is_reg> rx_ptp_vl_to_pl_18;
            _rx_ptp_vl_to_pl_19_u<is_reg> rx_ptp_vl_to_pl_19;
            _rx_pkt_n_ts_rx_ctr_u<is_reg> rx_pkt_n_ts_rx_ctr;
            reg_t<std::uint8_t,is_reg> reserved23[1028];
            _cntr_tx_fragments_lo_u<is_reg> cntr_tx_fragments_lo;
            reg_t<std::uint8_t,is_reg> reserved25[4];
            _cntr_tx_jabbers_lo_u<is_reg> cntr_tx_jabbers_lo;
            reg_t<std::uint8_t,is_reg> reserved27[12];
            _cntr_tx_fcs_err_okpkt_lo_u<is_reg> cntr_tx_fcs_err_okpkt_lo;
            reg_t<std::uint8_t,is_reg> reserved29[4];
            _cntr_tx_mcast_data_err_lo_u<is_reg> cntr_tx_mcast_data_err_lo;
            reg_t<std::uint8_t,is_reg> reserved31[4];
            _cntr_tx_bcast_data_err_lo_u<is_reg> cntr_tx_bcast_data_err_lo;
            reg_t<std::uint8_t,is_reg> reserved33[4];
            _cntr_tx_ucast_data_err_lo_u<is_reg> cntr_tx_ucast_data_err_lo;
            reg_t<std::uint8_t,is_reg> reserved35[4];
            _cntr_tx_mcast_ctrl_err_lo_u<is_reg> cntr_tx_mcast_ctrl_err_lo;
            reg_t<std::uint8_t,is_reg> reserved37[4];
            _cntr_tx_bcast_ctrl_err_lo_u<is_reg> cntr_tx_bcast_ctrl_err_lo;
            reg_t<std::uint8_t,is_reg> reserved39[4];
            _cntr_tx_ucast_ctrl_err_lo_u<is_reg> cntr_tx_ucast_ctrl_err_lo;
            reg_t<std::uint8_t,is_reg> reserved41[4];
            _cntr_tx_pause_err_lo_u<is_reg> cntr_tx_pause_err_lo;
            reg_t<std::uint8_t,is_reg> reserved43[4];
            _cntr_tx_64b_lo_u<is_reg> cntr_tx_64b_lo;
            _cntr_tx_64b_hi_u<is_reg> cntr_tx_64b_hi;
            _cntr_tx_65to127b_lo_u<is_reg> cntr_tx_65to127b_lo;
            _cntr_tx_65to127b_hi_u<is_reg> cntr_tx_65to127b_hi;
            _cntr_tx_128to255b_lo_u<is_reg> cntr_tx_128to255b_lo;
            _cntr_tx_128to255b_hi_u<is_reg> cntr_tx_128to255b_hi;
            _cntr_tx_256to511b_lo_u<is_reg> cntr_tx_256to511b_lo;
            _cntr_tx_256to511b_hi_u<is_reg> cntr_tx_256to511b_hi;
            _cntr_tx_512to1023b_lo_u<is_reg> cntr_tx_512to1023b_lo;
            _cntr_tx_512to1023b_hi_u<is_reg> cntr_tx_512to1023b_hi;
            _cntr_tx_1024to1518b_lo_u<is_reg> cntr_tx_1024to1518b_lo;
            _cntr_tx_1024to1518b_hi_u<is_reg> cntr_tx_1024to1518b_hi;
            _cntr_tx_1519tomaxb_lo_u<is_reg> cntr_tx_1519tomaxb_lo;
            _cntr_tx_1519tomaxb_hi_u<is_reg> cntr_tx_1519tomaxb_hi;
            _cntr_tx_oversize_lo_u<is_reg> cntr_tx_oversize_lo;
            reg_t<std::uint8_t,is_reg> reserved45[4];
            _cntr_tx_mcast_data_ok_lo_u<is_reg> cntr_tx_mcast_data_ok_lo;
            _cntr_tx_mcast_data_ok_hi_u<is_reg> cntr_tx_mcast_data_ok_hi;
            _cntr_tx_bcast_data_ok_lo_u<is_reg> cntr_tx_bcast_data_ok_lo;
            _cntr_tx_bcast_data_ok_hi_u<is_reg> cntr_tx_bcast_data_ok_hi;
            _cntr_tx_ucast_data_ok_lo_u<is_reg> cntr_tx_ucast_data_ok_lo;
            _cntr_tx_ucast_data_ok_hi_u<is_reg> cntr_tx_ucast_data_ok_hi;
            _cntr_tx_mcast_ctrl_lo_u<is_reg> cntr_tx_mcast_ctrl_lo;
            _cntr_tx_mcast_ctrl_hi_u<is_reg> cntr_tx_mcast_ctrl_hi;
            _cntr_tx_bcast_ctrl_lo_u<is_reg> cntr_tx_bcast_ctrl_lo;
            _cntr_tx_bcast_ctrl_hi_u<is_reg> cntr_tx_bcast_ctrl_hi;
            _cntr_tx_ucast_ctrl_lo_u<is_reg> cntr_tx_ucast_ctrl_lo;
            _cntr_tx_ucast_ctrl_hi_u<is_reg> cntr_tx_ucast_ctrl_hi;
            _cntr_tx_pause_lo_u<is_reg> cntr_tx_pause_lo;
            _cntr_tx_pause_hi_u<is_reg> cntr_tx_pause_hi;
            _cntr_tx_runt_lo_u<is_reg> cntr_tx_runt_lo;
            reg_t<std::uint8_t,is_reg> reserved47[4];
            _cntr_tx_st_lo_u<is_reg> cntr_tx_st_lo;
            _cntr_tx_st_hi_u<is_reg> cntr_tx_st_hi;
            _cntr_tx_lenerr_lo_u<is_reg> cntr_tx_lenerr_lo;
            reg_t<std::uint8_t,is_reg> reserved49[4];
            _cntr_tx_pfc_err_lo_u<is_reg> cntr_tx_pfc_err_lo;
            reg_t<std::uint8_t,is_reg> reserved51[4];
            _cntr_tx_pfc_lo_u<is_reg> cntr_tx_pfc_lo;
            _cntr_tx_pfc_hi_u<is_reg> cntr_tx_pfc_hi;
            _cntr_tx_payloadoctetsok_lo_u<is_reg> cntr_tx_payloadoctetsok_lo;
            _cntr_tx_payloadoctetsok_hi_u<is_reg> cntr_tx_payloadoctetsok_hi;
            _cntr_tx_octetsok_lo_u<is_reg> cntr_tx_octetsok_lo;
            _cntr_tx_octetsok_hi_u<is_reg> cntr_tx_octetsok_hi;
            _cntr_tx_malformed_lo_u<is_reg> cntr_tx_malformed_lo;
            reg_t<std::uint8_t,is_reg> reserved53[4];
            _cntr_tx_dropped_lo_u<is_reg> cntr_tx_dropped_lo;
            reg_t<std::uint8_t,is_reg> reserved55[4];
            _cntr_tx_badlt_lo_u<is_reg> cntr_tx_badlt_lo;
            reg_t<std::uint8_t,is_reg> reserved57[4];
            _cntr_tx_total_ptp_pkts_u<is_reg> cntr_tx_total_ptp_pkts;
            _cntr_tx_total_1step_ptp_pkts_u<is_reg> cntr_tx_total_1step_ptp_pkts;
            _cntr_tx_total_2step_ptp_pkts_u<is_reg> cntr_tx_total_2step_ptp_pkts;
            _cntr_tx_total_v1_ptp_pkts_u<is_reg> cntr_tx_total_v1_ptp_pkts;
            _cntr_tx_total_v2_ptp_pkts_u<is_reg> cntr_tx_total_v2_ptp_pkts;
            _cntr_rx_fragments_lo_u<is_reg> cntr_rx_fragments_lo;
            reg_t<std::uint8_t,is_reg> reserved59[4];
            _cntr_rx_jabbers_lo_u<is_reg> cntr_rx_jabbers_lo;
            reg_t<std::uint8_t,is_reg> reserved61[12];
            _cntr_rx_fcs_err_okpkt_lo_u<is_reg> cntr_rx_fcs_err_okpkt_lo;
            reg_t<std::uint8_t,is_reg> reserved63[4];
            _cntr_rx_mcast_data_err_lo_u<is_reg> cntr_rx_mcast_data_err_lo;
            reg_t<std::uint8_t,is_reg> reserved65[4];
            _cntr_rx_bcast_data_err_lo_u<is_reg> cntr_rx_bcast_data_err_lo;
            reg_t<std::uint8_t,is_reg> reserved67[4];
            _cntr_rx_ucast_data_err_lo_u<is_reg> cntr_rx_ucast_data_err_lo;
            reg_t<std::uint8_t,is_reg> reserved69[4];
            _cntr_rx_mcast_ctrl_err_lo_u<is_reg> cntr_rx_mcast_ctrl_err_lo;
            reg_t<std::uint8_t,is_reg> reserved71[4];
            _cntr_rx_bcast_ctrl_err_lo_u<is_reg> cntr_rx_bcast_ctrl_err_lo;
            reg_t<std::uint8_t,is_reg> reserved73[4];
            _cntr_rx_ucast_ctrl_err_lo_u<is_reg> cntr_rx_ucast_ctrl_err_lo;
            reg_t<std::uint8_t,is_reg> reserved75[4];
            _cntr_rx_pause_err_lo_u<is_reg> cntr_rx_pause_err_lo;
            reg_t<std::uint8_t,is_reg> reserved77[4];
            _cntr_rx_64b_lo_u<is_reg> cntr_rx_64b_lo;
            _cntr_rx_64b_hi_u<is_reg> cntr_rx_64b_hi;
            _cntr_rx_65to127b_lo_u<is_reg> cntr_rx_65to127b_lo;
            _cntr_rx_65to127b_hi_u<is_reg> cntr_rx_65to127b_hi;
            _cntr_rx_128to255b_lo_u<is_reg> cntr_rx_128to255b_lo;
            _cntr_rx_128to255b_hi_u<is_reg> cntr_rx_128to255b_hi;
            _cntr_rx_256to511b_lo_u<is_reg> cntr_rx_256to511b_lo;
            _cntr_rx_256to511b_hi_u<is_reg> cntr_rx_256to511b_hi;
            _cntr_rx_512to1023b_lo_u<is_reg> cntr_rx_512to1023b_lo;
            _cntr_rx_512to1023b_hi_u<is_reg> cntr_rx_512to1023b_hi;
            _cntr_rx_1024to1518b_lo_u<is_reg> cntr_rx_1024to1518b_lo;
            _cntr_rx_1024to1518b_hi_u<is_reg> cntr_rx_1024to1518b_hi;
            _cntr_rx_1519tomaxb_lo_u<is_reg> cntr_rx_1519tomaxb_lo;
            _cntr_rx_1519tomaxb_hi_u<is_reg> cntr_rx_1519tomaxb_hi;
            _cntr_rx_oversize_lo_u<is_reg> cntr_rx_oversize_lo;
            reg_t<std::uint8_t,is_reg> reserved79[4];
            _cntr_rx_mcast_data_ok_lo_u<is_reg> cntr_rx_mcast_data_ok_lo;
            _cntr_rx_mcast_data_ok_hi_u<is_reg> cntr_rx_mcast_data_ok_hi;
            _cntr_rx_bcast_data_ok_lo_u<is_reg> cntr_rx_bcast_data_ok_lo;
            _cntr_rx_bcast_data_ok_hi_u<is_reg> cntr_rx_bcast_data_ok_hi;
            _cntr_rx_ucast_data_ok_lo_u<is_reg> cntr_rx_ucast_data_ok_lo;
            _cntr_rx_ucast_data_ok_hi_u<is_reg> cntr_rx_ucast_data_ok_hi;
            _cntr_rx_mcast_ctrl_lo_u<is_reg> cntr_rx_mcast_ctrl_lo;
            _cntr_rx_mcast_ctrl_hi_u<is_reg> cntr_rx_mcast_ctrl_hi;
            _cntr_rx_bcast_ctrl_lo_u<is_reg> cntr_rx_bcast_ctrl_lo;
            _cntr_rx_bcast_ctrl_hi_u<is_reg> cntr_rx_bcast_ctrl_hi;
            _cntr_rx_ucast_ctrl_lo_u<is_reg> cntr_rx_ucast_ctrl_lo;
            _cntr_rx_ucast_ctrl_hi_u<is_reg> cntr_rx_ucast_ctrl_hi;
            _cntr_rx_pause_lo_u<is_reg> cntr_rx_pause_lo;
            _cntr_rx_pause_hi_u<is_reg> cntr_rx_pause_hi;
            _cntr_rx_runt_lo_u<is_reg> cntr_rx_runt_lo;
            reg_t<std::uint8_t,is_reg> reserved81[4];
            _cntr_rx_st_lo_u<is_reg> cntr_rx_st_lo;
            _cntr_rx_st_hi_u<is_reg> cntr_rx_st_hi;
            _cntr_rx_lenerr_lo_u<is_reg> cntr_rx_lenerr_lo;
            reg_t<std::uint8_t,is_reg> reserved83[4];
            _cntr_rx_pfc_err_lo_u<is_reg> cntr_rx_pfc_err_lo;
            reg_t<std::uint8_t,is_reg> reserved85[4];
            _cntr_rx_pfc_lo_u<is_reg> cntr_rx_pfc_lo;
            _cntr_rx_pfc_hi_u<is_reg> cntr_rx_pfc_hi;
            _cntr_rx_payloadoctetsok_lo_u<is_reg> cntr_rx_payloadoctetsok_lo;
            _cntr_rx_payloadoctetsok_hi_u<is_reg> cntr_rx_payloadoctetsok_hi;
            _cntr_rx_octetsok_lo_u<is_reg> cntr_rx_octetsok_lo;
            _cntr_rx_octetsok_hi_u<is_reg> cntr_rx_octetsok_hi;
            _cntr_rx_malformed_lo_u<is_reg> cntr_rx_malformed_lo;
            reg_t<std::uint8_t,is_reg> reserved87[4];
            _cntr_rx_dropped_lo_u<is_reg> cntr_rx_dropped_lo;
            reg_t<std::uint8_t,is_reg> reserved89[4];
            _cntr_rx_badlt_lo_u<is_reg> cntr_rx_badlt_lo;
            reg_t<std::uint8_t,is_reg> reserved91[4];
            _cntr_rx_total_ptp_ts_u<is_reg> cntr_rx_total_ptp_ts;
            _tx_ptp_cf_overflow_u<is_reg> tx_ptp_cf_overflow;
            _tx_ptp_tam_lo_pl_0_u<is_reg> tx_ptp_tam_lo_pl_0;
            _tx_ptp_tam_med_pl_0_u<is_reg> tx_ptp_tam_med_pl_0;
            _tx_ptp_tam_hi_pl_0_u<is_reg> tx_ptp_tam_hi_pl_0;
            _tx_ptp_tam_adj_pl_0_u<is_reg> tx_ptp_tam_adj_pl_0;
            _tx_ptp_tam_lo_pl_1_u<is_reg> tx_ptp_tam_lo_pl_1;
            _tx_ptp_tam_med_pl_1_u<is_reg> tx_ptp_tam_med_pl_1;
            _tx_ptp_tam_hi_pl_1_u<is_reg> tx_ptp_tam_hi_pl_1;
            _tx_ptp_tam_adj_pl_1_u<is_reg> tx_ptp_tam_adj_pl_1;
            _tx_ptp_tam_lo_pl_2_u<is_reg> tx_ptp_tam_lo_pl_2;
            _tx_ptp_tam_med_pl_2_u<is_reg> tx_ptp_tam_med_pl_2;
            _tx_ptp_tam_hi_pl_2_u<is_reg> tx_ptp_tam_hi_pl_2;
            _tx_ptp_tam_adj_pl_2_u<is_reg> tx_ptp_tam_adj_pl_2;
            _tx_ptp_tam_lo_pl_3_u<is_reg> tx_ptp_tam_lo_pl_3;
            _tx_ptp_tam_med_pl_3_u<is_reg> tx_ptp_tam_med_pl_3;
            _tx_ptp_tam_hi_pl_3_u<is_reg> tx_ptp_tam_hi_pl_3;
            _tx_ptp_tam_adj_pl_3_u<is_reg> tx_ptp_tam_adj_pl_3;
            _tx_ptp_tam_lo_pl_4_u<is_reg> tx_ptp_tam_lo_pl_4;
            _tx_ptp_tam_med_pl_4_u<is_reg> tx_ptp_tam_med_pl_4;
            _tx_ptp_tam_hi_pl_4_u<is_reg> tx_ptp_tam_hi_pl_4;
            _tx_ptp_tam_adj_pl_4_u<is_reg> tx_ptp_tam_adj_pl_4;
            _tx_ptp_tam_lo_pl_5_u<is_reg> tx_ptp_tam_lo_pl_5;
            _tx_ptp_tam_med_pl_5_u<is_reg> tx_ptp_tam_med_pl_5;
            _tx_ptp_tam_hi_pl_5_u<is_reg> tx_ptp_tam_hi_pl_5;
            _tx_ptp_tam_adj_pl_5_u<is_reg> tx_ptp_tam_adj_pl_5;
            _tx_ptp_tam_lo_pl_6_u<is_reg> tx_ptp_tam_lo_pl_6;
            _tx_ptp_tam_med_pl_6_u<is_reg> tx_ptp_tam_med_pl_6;
            _tx_ptp_tam_hi_pl_6_u<is_reg> tx_ptp_tam_hi_pl_6;
            _tx_ptp_tam_adj_pl_6_u<is_reg> tx_ptp_tam_adj_pl_6;
            _tx_ptp_tam_lo_pl_7_u<is_reg> tx_ptp_tam_lo_pl_7;
            _tx_ptp_tam_med_pl_7_u<is_reg> tx_ptp_tam_med_pl_7;
            _tx_ptp_tam_hi_pl_7_u<is_reg> tx_ptp_tam_hi_pl_7;
            _tx_ptp_tam_adj_pl_7_u<is_reg> tx_ptp_tam_adj_pl_7;
            _tx_ptp_tam_lo_pl_8_u<is_reg> tx_ptp_tam_lo_pl_8;
            _tx_ptp_tam_med_pl_8_u<is_reg> tx_ptp_tam_med_pl_8;
            _tx_ptp_tam_hi_pl_8_u<is_reg> tx_ptp_tam_hi_pl_8;
            _tx_ptp_tam_adj_pl_8_u<is_reg> tx_ptp_tam_adj_pl_8;
            _tx_ptp_tam_lo_pl_9_u<is_reg> tx_ptp_tam_lo_pl_9;
            _tx_ptp_tam_med_pl_9_u<is_reg> tx_ptp_tam_med_pl_9;
            _tx_ptp_tam_hi_pl_9_u<is_reg> tx_ptp_tam_hi_pl_9;
            _tx_ptp_tam_adj_pl_9_u<is_reg> tx_ptp_tam_adj_pl_9;
            _tx_ptp_tam_lo_pl_10_u<is_reg> tx_ptp_tam_lo_pl_10;
            _tx_ptp_tam_med_pl_10_u<is_reg> tx_ptp_tam_med_pl_10;
            _tx_ptp_tam_hi_pl_10_u<is_reg> tx_ptp_tam_hi_pl_10;
            _tx_ptp_tam_adj_pl_10_u<is_reg> tx_ptp_tam_adj_pl_10;
            _tx_ptp_tam_lo_pl_11_u<is_reg> tx_ptp_tam_lo_pl_11;
            _tx_ptp_tam_med_pl_11_u<is_reg> tx_ptp_tam_med_pl_11;
            _tx_ptp_tam_hi_pl_11_u<is_reg> tx_ptp_tam_hi_pl_11;
            _tx_ptp_tam_adj_pl_11_u<is_reg> tx_ptp_tam_adj_pl_11;
            _tx_ptp_tam_lo_pl_12_u<is_reg> tx_ptp_tam_lo_pl_12;
            _tx_ptp_tam_med_pl_12_u<is_reg> tx_ptp_tam_med_pl_12;
            _tx_ptp_tam_hi_pl_12_u<is_reg> tx_ptp_tam_hi_pl_12;
            _tx_ptp_tam_adj_pl_12_u<is_reg> tx_ptp_tam_adj_pl_12;
            _tx_ptp_tam_lo_pl_13_u<is_reg> tx_ptp_tam_lo_pl_13;
            _tx_ptp_tam_med_pl_13_u<is_reg> tx_ptp_tam_med_pl_13;
            _tx_ptp_tam_hi_pl_13_u<is_reg> tx_ptp_tam_hi_pl_13;
            _tx_ptp_tam_adj_pl_13_u<is_reg> tx_ptp_tam_adj_pl_13;
            _tx_ptp_tam_lo_pl_14_u<is_reg> tx_ptp_tam_lo_pl_14;
            _tx_ptp_tam_med_pl_14_u<is_reg> tx_ptp_tam_med_pl_14;
            _tx_ptp_tam_hi_pl_14_u<is_reg> tx_ptp_tam_hi_pl_14;
            _tx_ptp_tam_adj_pl_14_u<is_reg> tx_ptp_tam_adj_pl_14;
            _tx_ptp_tam_lo_pl_15_u<is_reg> tx_ptp_tam_lo_pl_15;
            _tx_ptp_tam_med_pl_15_u<is_reg> tx_ptp_tam_med_pl_15;
            _tx_ptp_tam_hi_pl_15_u<is_reg> tx_ptp_tam_hi_pl_15;
            _tx_ptp_tam_adj_pl_15_u<is_reg> tx_ptp_tam_adj_pl_15;
            _tx_ts_ss_lo_u<is_reg> tx_ts_ss_lo;
            _tx_ts_ss_mid_u<is_reg> tx_ts_ss_mid;
            _tx_ts_ss_hi_u<is_reg> tx_ts_ss_hi;
            reg_t<std::uint8_t,is_reg> reserved93[4];
            _rx_ptp_tam_lo_pl_0_u<is_reg> rx_ptp_tam_lo_pl_0;
            _rx_ptp_tam_med_pl_0_u<is_reg> rx_ptp_tam_med_pl_0;
            _rx_ptp_tam_hi_pl_0_u<is_reg> rx_ptp_tam_hi_pl_0;
            _rx_ptp_tam_adj_pl_0_u<is_reg> rx_ptp_tam_adj_pl_0;
            _rx_ptp_tam_lo_pl_1_u<is_reg> rx_ptp_tam_lo_pl_1;
            _rx_ptp_tam_med_pl_1_u<is_reg> rx_ptp_tam_med_pl_1;
            _rx_ptp_tam_hi_pl_1_u<is_reg> rx_ptp_tam_hi_pl_1;
            _rx_ptp_tam_adj_pl_1_u<is_reg> rx_ptp_tam_adj_pl_1;
            _rx_ptp_tam_lo_pl_2_u<is_reg> rx_ptp_tam_lo_pl_2;
            _rx_ptp_tam_med_pl_2_u<is_reg> rx_ptp_tam_med_pl_2;
            _rx_ptp_tam_hi_pl_2_u<is_reg> rx_ptp_tam_hi_pl_2;
            _rx_ptp_tam_adj_pl_2_u<is_reg> rx_ptp_tam_adj_pl_2;
            _rx_ptp_tam_lo_pl_3_u<is_reg> rx_ptp_tam_lo_pl_3;
            _rx_ptp_tam_med_pl_3_u<is_reg> rx_ptp_tam_med_pl_3;
            _rx_ptp_tam_hi_pl_3_u<is_reg> rx_ptp_tam_hi_pl_3;
            _rx_ptp_tam_adj_pl_3_u<is_reg> rx_ptp_tam_adj_pl_3;
            _rx_ptp_tam_lo_pl_4_u<is_reg> rx_ptp_tam_lo_pl_4;
            _rx_ptp_tam_med_pl_4_u<is_reg> rx_ptp_tam_med_pl_4;
            _rx_ptp_tam_hi_pl_4_u<is_reg> rx_ptp_tam_hi_pl_4;
            _rx_ptp_tam_adj_pl_4_u<is_reg> rx_ptp_tam_adj_pl_4;
            _rx_ptp_tam_lo_pl_5_u<is_reg> rx_ptp_tam_lo_pl_5;
            _rx_ptp_tam_med_pl_5_u<is_reg> rx_ptp_tam_med_pl_5;
            _rx_ptp_tam_hi_pl_5_u<is_reg> rx_ptp_tam_hi_pl_5;
            _rx_ptp_tam_adj_pl_5_u<is_reg> rx_ptp_tam_adj_pl_5;
            _rx_ptp_tam_lo_pl_6_u<is_reg> rx_ptp_tam_lo_pl_6;
            _rx_ptp_tam_med_pl_6_u<is_reg> rx_ptp_tam_med_pl_6;
            _rx_ptp_tam_hi_pl_6_u<is_reg> rx_ptp_tam_hi_pl_6;
            _rx_ptp_tam_adj_pl_6_u<is_reg> rx_ptp_tam_adj_pl_6;
            _rx_ptp_tam_lo_pl_7_u<is_reg> rx_ptp_tam_lo_pl_7;
            _rx_ptp_tam_med_pl_7_u<is_reg> rx_ptp_tam_med_pl_7;
            _rx_ptp_tam_hi_pl_7_u<is_reg> rx_ptp_tam_hi_pl_7;
            _rx_ptp_tam_adj_pl_7_u<is_reg> rx_ptp_tam_adj_pl_7;
            _rx_ptp_tam_lo_pl_8_u<is_reg> rx_ptp_tam_lo_pl_8;
            _rx_ptp_tam_med_pl_8_u<is_reg> rx_ptp_tam_med_pl_8;
            _rx_ptp_tam_hi_pl_8_u<is_reg> rx_ptp_tam_hi_pl_8;
            _rx_ptp_tam_adj_pl_8_u<is_reg> rx_ptp_tam_adj_pl_8;
            _rx_ptp_tam_lo_pl_9_u<is_reg> rx_ptp_tam_lo_pl_9;
            _rx_ptp_tam_med_pl_9_u<is_reg> rx_ptp_tam_med_pl_9;
            _rx_ptp_tam_hi_pl_9_u<is_reg> rx_ptp_tam_hi_pl_9;
            _rx_ptp_tam_adj_pl_9_u<is_reg> rx_ptp_tam_adj_pl_9;
            _rx_ptp_tam_lo_pl_10_u<is_reg> rx_ptp_tam_lo_pl_10;
            _rx_ptp_tam_med_pl_10_u<is_reg> rx_ptp_tam_med_pl_10;
            _rx_ptp_tam_hi_pl_10_u<is_reg> rx_ptp_tam_hi_pl_10;
            _rx_ptp_tam_adj_pl_10_u<is_reg> rx_ptp_tam_adj_pl_10;
            _rx_ptp_tam_lo_pl_11_u<is_reg> rx_ptp_tam_lo_pl_11;
            _rx_ptp_tam_med_pl_11_u<is_reg> rx_ptp_tam_med_pl_11;
            _rx_ptp_tam_hi_pl_11_u<is_reg> rx_ptp_tam_hi_pl_11;
            _rx_ptp_tam_adj_pl_11_u<is_reg> rx_ptp_tam_adj_pl_11;
            _rx_ptp_tam_lo_pl_12_u<is_reg> rx_ptp_tam_lo_pl_12;
            _rx_ptp_tam_med_pl_12_u<is_reg> rx_ptp_tam_med_pl_12;
            _rx_ptp_tam_hi_pl_12_u<is_reg> rx_ptp_tam_hi_pl_12;
            _rx_ptp_tam_adj_pl_12_u<is_reg> rx_ptp_tam_adj_pl_12;
            _rx_ptp_tam_lo_pl_13_u<is_reg> rx_ptp_tam_lo_pl_13;
            _rx_ptp_tam_med_pl_13_u<is_reg> rx_ptp_tam_med_pl_13;
            _rx_ptp_tam_hi_pl_13_u<is_reg> rx_ptp_tam_hi_pl_13;
            _rx_ptp_tam_adj_pl_13_u<is_reg> rx_ptp_tam_adj_pl_13;
            _rx_ptp_tam_lo_pl_14_u<is_reg> rx_ptp_tam_lo_pl_14;
            _rx_ptp_tam_med_pl_14_u<is_reg> rx_ptp_tam_med_pl_14;
            _rx_ptp_tam_hi_pl_14_u<is_reg> rx_ptp_tam_hi_pl_14;
            _rx_ptp_tam_adj_pl_14_u<is_reg> rx_ptp_tam_adj_pl_14;
            _rx_ptp_tam_lo_pl_15_u<is_reg> rx_ptp_tam_lo_pl_15;
            _rx_ptp_tam_med_pl_15_u<is_reg> rx_ptp_tam_med_pl_15;
            _rx_ptp_tam_hi_pl_15_u<is_reg> rx_ptp_tam_hi_pl_15;
            _rx_ptp_tam_adj_pl_15_u<is_reg> rx_ptp_tam_adj_pl_15;
            _rx_ts_ss_lo_u<is_reg> rx_ts_ss_lo;
            _rx_ts_ss_mid_u<is_reg> rx_ts_ss_mid;
            _rx_ts_ss_hi_u<is_reg> rx_ts_ss_hi;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_ethernet_ehip_fields
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_shadow_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_shadow_req; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved95[12];
            reg_t<std::uint32_t,is_reg,2,0> tx_ehip_mode; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,2,0> rx_ehip_mode; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> rxpldmux_pcs; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> rxpldmux_pcs66; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,10,8> rxpldmux_sel; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved97[48];
            reg_t<std::uint32_t,is_reg,12,12> phy_sclr_frame_error; /*!< [rw] */
            reg_t<std::uint8_t,is_reg> reserved99[4];
            reg_t<std::uint32_t,is_reg,23,0> am_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,23,0> am_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,23,0> am_2; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,23,0> am_3; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,23,0> am_4; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,23,0> am_5; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,23,0> am_6; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,23,0> am_7; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,20,0> cycles; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,6,0> count_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,19,0> inj_err; /*!< [rw] */
            reg_t<std::uint8_t,is_reg> reserved101[4];
            reg_t<std::uint32_t,is_reg,19,0> frmerr; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_aligned; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> hi_ber; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,0,0> am_lock; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,0,0> dskew_chng_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> count_23; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,10> vlane2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,15> vlane3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,20> vlane4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,25> vlane5; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,10> vlane8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,15> vlane9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,20> vlane10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,25> vlane11; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,10> vlane14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,15> vlane15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,20> vlane16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,25> vlane17; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> vlane19; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,15,0> count_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_2; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_3; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_5; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_6; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_7; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_8; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_9; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_10; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_11; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_12; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_13; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_14; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_15; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_16; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_17; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_18; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_19; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,15,0> count_20; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> count_21; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved103[4];
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_0; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_1; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_2; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,5,0> depth0_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,11,6> depth1_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,17,12> depth2_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,18> depth3_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,29,24> depth4_3; /*!< [ro] */
            };
            reg_t<std::uint8_t,is_reg> reserved105[4];
            union {
                reg_t<std::uint32_t,is_reg,6,0> bitslip_cnt; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,7> dlpulse_alignment; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_0; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_1; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_2; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_3; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_4; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_5; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_6; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_7; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_8; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_9; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_10; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_11; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_12; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_13; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_14; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_15; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_16; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_17; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_18; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,2,0> ptp_gbstate_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,3> ptp_al_blk_phase_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,5> ptp_al_pos_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,10> ptp_am_count_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,28,24> local_vl_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,29> spare_19; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_20; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_20; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_21; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_21; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_22; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_22; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_23; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_23; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_24; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_24; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_25; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_25; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_26; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_26; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_27; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_27; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_28; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_8; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_28; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_29; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_9; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_29; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_30; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_10; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_30; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_31; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_11; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_31; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_32; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_12; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_32; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_33; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_13; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_33; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_34; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_14; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_34; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_35; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_15; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_35; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_36; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_16; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_36; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_37; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_17; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_37; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_38; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_18; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_38; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,4,0> vlane_num_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,5> local_pl_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,8> local_vl_39; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,13> ptp_blk_align_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,18,16> ptp_am_detect_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,21,19> ptp_gb110_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,22> ptp_gb33to66_occupancy_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,24> ptp_al_pos_50g_19; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> spare_39; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,4,0> count_22; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved107[72];
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_lf; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> en_unidir; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> disable_rf; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> force_rf; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,15,0> ipg_col_rem; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> max_tx; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,1,1> disable_txvlan; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> disable_txmac; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> en_saddr_insert; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_pp_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,1> ipg; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> tx_plen_en; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,9,9> txcrc_covers_preamble; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> saddrl_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> saddrh_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> max_rx; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,0,0> forward_rx_crc; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_plen; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> disable_rxvlan; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> en_check_sfd; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> en_strict_preamble; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,7,7> enforce_max_rx; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,8,8> remove_rx_pad; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_pp_0; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rxcrc_covers_preamble; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,2> mac_lb_mode; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,8,0> en_pfc_port; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,8,0> req_pause; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,8,0> en_holdoff; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,2,0> en_xoff_qnum_sel; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,0,0> en_holdoff_all; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_all_quanta; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> daddrl; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> daddrh; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> saddrl_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> saddrh_0; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_sfc_0; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> en_pfc_0; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,7,0> en_rx_pause; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,0,0> rx_pause_fwd; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> rx_pause_daddrl; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> rx_pause_daddrh; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> en_sfc_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> en_pfc_1; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> rst_tx_stats; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rst_tx_parity; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> rst_rx_stats; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rst_rx_parity; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved109[8];
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_2; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_3; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_4; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_5; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_6; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_7; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> pause_quanta_8; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_2; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_3; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_4; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_5; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_6; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_7; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> holdoff_quanta_8; /*!< [rw] */
            reg_t<std::uint8_t,is_reg> reserved111[28];
            reg_t<std::uint32_t,is_reg,31,0> extra_latency_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> ui_0; /*!< [rw] */
            reg_t<std::uint8_t,is_reg> reserved113[4];
            reg_t<std::uint32_t,is_reg,5,0> lane_num_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> ap_filter_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_2; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_3; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_4; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_5; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_6; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_7; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_8; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_9; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_10; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_11; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_12; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_13; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_14; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_15; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_16; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_17; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_18; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_19; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> extra_latency_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> ui_1; /*!< [rw] */
            reg_t<std::uint8_t,is_reg> reserved115[4];
            reg_t<std::uint32_t,is_reg,5,0> lane_num_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,15,0> ap_filter_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_20; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_21; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_22; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_23; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_24; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_25; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_26; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_27; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_28; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_29; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_30; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_31; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_32; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_33; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_34; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_35; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_36; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_37; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_38; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> vl_offset_39; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_1; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_2; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_3; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_4; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_5; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_6; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_7; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_8; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_9; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_10; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_11; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_12; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_13; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_14; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_15; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_16; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_17; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_18; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,4,0> vl_to_pl_19; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,19,0> n_ts_ctr; /*!< [rw] */
            reg_t<std::uint8_t,is_reg> reserved117[1028];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_fragments_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved119[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_jabbers_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved121[12];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_fcs_err_okpkt_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved123[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_data_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved125[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_data_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved127[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_data_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved129[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_ctrl_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved131[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_ctrl_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved133[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_ctrl_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved135[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pause_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved137[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_64b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_64b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_65to127b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_65to127b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_128to255b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_128to255b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_256to511b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_256to511b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_512to1023b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_512to1023b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1024to1518b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1024to1518b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1519tomaxb_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_1519tomaxb_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_oversize_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved139[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_data_ok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_data_ok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_data_ok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_data_ok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_data_ok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_data_ok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_ctrl_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_mcast_ctrl_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_ctrl_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_bcast_ctrl_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_ctrl_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_ucast_ctrl_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pause_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pause_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_runt_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved141[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_st_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_st_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_lenerr_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved143[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pfc_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved145[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pfc_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_pfc_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_payloadoctetsok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_payloadoctetsok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_octetsok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_octetsok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_malformed_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved147[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_dropped_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved149[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_badlt_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved151[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_ptp_pkts; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_1step_ptp_pkts; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_2step_ptp_pkts; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_v1_ptp_pkts; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_tx_total_v2_ptp_pkts; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_fragments_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved153[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_jabbers_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved155[12];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_fcs_err_okpkt_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved157[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_data_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved159[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_data_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved161[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_data_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved163[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_ctrl_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved165[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_ctrl_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved167[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_ctrl_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved169[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pause_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved171[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_64b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_64b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_65to127b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_65to127b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_128to255b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_128to255b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_256to511b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_256to511b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_512to1023b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_512to1023b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1024to1518b_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1024to1518b_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1519tomaxb_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_1519tomaxb_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_oversize_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved173[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_data_ok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_data_ok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_data_ok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_data_ok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_data_ok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_data_ok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_ctrl_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_mcast_ctrl_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_ctrl_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_bcast_ctrl_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_ctrl_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_ucast_ctrl_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pause_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pause_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_runt_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved175[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_st_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_st_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_lenerr_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved177[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pfc_err_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved179[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pfc_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_pfc_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_payloadoctetsok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_payloadoctetsok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_octetsok_lo; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_octetsok_hi; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_malformed_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved181[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_dropped_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved183[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_badlt_lo; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved185[4];
            reg_t<std::uint32_t,is_reg,31,0> cntr_rx_total_ptp_ts; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,1,1> bit1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_2; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_3; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_5; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_6; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_7; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_8; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_2; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_9; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_10; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_11; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_3; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_12; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_13; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_14; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_15; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_16; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_17; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_5; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_18; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_19; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_20; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_6; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_21; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_22; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_23; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_7; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_24; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_25; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_26; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_8; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_27; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_28; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_29; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_9; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_30; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_31; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_32; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_10; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_33; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_34; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_35; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_11; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_36; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_37; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_38; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_12; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_39; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_40; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_41; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_13; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_42; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_43; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_44; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_14; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_45; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_46; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_47; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_15; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_2; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved187[4];
            reg_t<std::uint32_t,is_reg,31,0> tam_48; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_49; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_50; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_16; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_51; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_52; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_53; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_17; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_54; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_55; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_56; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_18; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_57; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_58; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_59; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_19; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_60; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_61; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_62; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_20; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_63; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_64; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_65; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_21; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_66; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_67; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_68; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_22; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_69; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_70; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_71; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_23; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_72; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_73; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_74; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_24; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_75; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_76; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_77; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_25; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_78; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_79; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_80; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_26; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_81; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_82; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_83; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_27; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_84; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_85; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_86; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_28; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_87; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_88; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_89; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_29; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_90; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_91; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_92; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_30; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_93; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_94; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_95; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adj_31; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_3; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> ts_ss_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union ftile_ethernet_ehip_u
        {
            ftile_ethernet_ehip_regs<is_reg> reg;
            ftile_ethernet_ehip_fields<is_reg> fld;
        };

        typedef ftile_ethernet_ehip_fields<true>  ftile_ethernet_ehip_reg_t;
        typedef ftile_ethernet_ehip_fields<false> ftile_ethernet_ehip_mem_t;




        static_assert(4 == sizeof(_config_ctrl_s<>), "struct _config_ctrl_s does not have the correct size.");
        static_assert(4 == sizeof(_config_ctrl_u<>), "union _config_ctrl_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pld_conf_s<>), "struct _tx_pld_conf_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pld_conf_u<>), "union _tx_pld_conf_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_pld_conf_s<>), "struct _rx_pld_conf_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_pld_conf_u<>), "union _rx_pld_conf_u does not have the correct size.");
        static_assert(4 == sizeof(_phy_ehip_pcs_modes_s<>), "struct _phy_ehip_pcs_modes_s does not have the correct size.");
        static_assert(4 == sizeof(_phy_ehip_pcs_modes_u<>), "union _phy_ehip_pcs_modes_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_0_s<>), "struct _tx_am_encoding_0_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_0_u<>), "union _tx_am_encoding_0_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_1_s<>), "struct _tx_am_encoding_1_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_1_u<>), "union _tx_am_encoding_1_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_2_s<>), "struct _tx_am_encoding_2_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_2_u<>), "union _tx_am_encoding_2_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_3_s<>), "struct _tx_am_encoding_3_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_am_encoding_3_u<>), "union _tx_am_encoding_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_0_s<>), "struct _rx_am_encoding_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_0_u<>), "union _rx_am_encoding_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_1_s<>), "struct _rx_am_encoding_1_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_1_u<>), "union _rx_am_encoding_1_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_2_s<>), "struct _rx_am_encoding_2_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_2_u<>), "union _rx_am_encoding_2_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_3_s<>), "struct _rx_am_encoding_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_am_encoding_3_u<>), "union _rx_am_encoding_3_u does not have the correct size.");
        static_assert(4 == sizeof(_xus_timer_window_s<>), "struct _xus_timer_window_s does not have the correct size.");
        static_assert(4 == sizeof(_xus_timer_window_u<>), "union _xus_timer_window_u does not have the correct size.");
        static_assert(4 == sizeof(_ber_invalid_count_s<>), "struct _ber_invalid_count_s does not have the correct size.");
        static_assert(4 == sizeof(_ber_invalid_count_u<>), "union _ber_invalid_count_u does not have the correct size.");
        static_assert(4 == sizeof(_err_inj_s<>), "struct _err_inj_s does not have the correct size.");
        static_assert(4 == sizeof(_err_inj_u<>), "union _err_inj_u does not have the correct size.");
        static_assert(4 == sizeof(_phy_frame_error_s<>), "struct _phy_frame_error_s does not have the correct size.");
        static_assert(4 == sizeof(_phy_frame_error_u<>), "union _phy_frame_error_u does not have the correct size.");
        static_assert(4 == sizeof(_phy_rxpcs_status_s<>), "struct _phy_rxpcs_status_s does not have the correct size.");
        static_assert(4 == sizeof(_phy_rxpcs_status_u<>), "union _phy_rxpcs_status_u does not have the correct size.");
        static_assert(4 == sizeof(_am_lock_s<>), "struct _am_lock_s does not have the correct size.");
        static_assert(4 == sizeof(_am_lock_u<>), "union _am_lock_u does not have the correct size.");
        static_assert(4 == sizeof(_lanes_deskewed_s<>), "struct _lanes_deskewed_s does not have the correct size.");
        static_assert(4 == sizeof(_lanes_deskewed_u<>), "union _lanes_deskewed_u does not have the correct size.");
        static_assert(4 == sizeof(_ber_count_s<>), "struct _ber_count_s does not have the correct size.");
        static_assert(4 == sizeof(_ber_count_u<>), "union _ber_count_u does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_0_s<>), "struct _pcs_vlane_0_s does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_0_u<>), "union _pcs_vlane_0_u does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_1_s<>), "struct _pcs_vlane_1_s does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_1_u<>), "union _pcs_vlane_1_u does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_2_s<>), "struct _pcs_vlane_2_s does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_2_u<>), "union _pcs_vlane_2_u does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_3_s<>), "struct _pcs_vlane_3_s does not have the correct size.");
        static_assert(4 == sizeof(_pcs_vlane_3_u<>), "union _pcs_vlane_3_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_0_s<>), "struct _bip_counter_0_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_0_u<>), "union _bip_counter_0_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_1_s<>), "struct _bip_counter_1_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_1_u<>), "union _bip_counter_1_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_2_s<>), "struct _bip_counter_2_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_2_u<>), "union _bip_counter_2_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_3_s<>), "struct _bip_counter_3_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_3_u<>), "union _bip_counter_3_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_4_s<>), "struct _bip_counter_4_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_4_u<>), "union _bip_counter_4_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_5_s<>), "struct _bip_counter_5_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_5_u<>), "union _bip_counter_5_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_6_s<>), "struct _bip_counter_6_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_6_u<>), "union _bip_counter_6_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_7_s<>), "struct _bip_counter_7_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_7_u<>), "union _bip_counter_7_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_8_s<>), "struct _bip_counter_8_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_8_u<>), "union _bip_counter_8_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_9_s<>), "struct _bip_counter_9_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_9_u<>), "union _bip_counter_9_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_10_s<>), "struct _bip_counter_10_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_10_u<>), "union _bip_counter_10_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_11_s<>), "struct _bip_counter_11_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_11_u<>), "union _bip_counter_11_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_12_s<>), "struct _bip_counter_12_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_12_u<>), "union _bip_counter_12_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_13_s<>), "struct _bip_counter_13_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_13_u<>), "union _bip_counter_13_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_14_s<>), "struct _bip_counter_14_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_14_u<>), "union _bip_counter_14_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_15_s<>), "struct _bip_counter_15_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_15_u<>), "union _bip_counter_15_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_16_s<>), "struct _bip_counter_16_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_16_u<>), "union _bip_counter_16_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_17_s<>), "struct _bip_counter_17_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_17_u<>), "union _bip_counter_17_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_18_s<>), "struct _bip_counter_18_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_18_u<>), "union _bip_counter_18_u does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_19_s<>), "struct _bip_counter_19_s does not have the correct size.");
        static_assert(4 == sizeof(_bip_counter_19_u<>), "union _bip_counter_19_u does not have the correct size.");
        static_assert(4 == sizeof(_err_block_cnt_s<>), "struct _err_block_cnt_s does not have the correct size.");
        static_assert(4 == sizeof(_err_block_cnt_u<>), "union _err_block_cnt_u does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_0_s<>), "struct _dsk_depth_0_s does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_0_u<>), "union _dsk_depth_0_u does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_1_s<>), "struct _dsk_depth_1_s does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_1_u<>), "union _dsk_depth_1_u does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_2_s<>), "struct _dsk_depth_2_s does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_2_u<>), "union _dsk_depth_2_u does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_3_s<>), "struct _dsk_depth_3_s does not have the correct size.");
        static_assert(4 == sizeof(_dsk_depth_3_u<>), "union _dsk_depth_3_u does not have the correct size.");
        static_assert(4 == sizeof(_pcs_bitslip_cnt_s<>), "struct _pcs_bitslip_cnt_s does not have the correct size.");
        static_assert(4 == sizeof(_pcs_bitslip_cnt_u<>), "union _pcs_bitslip_cnt_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_0_s<>), "struct _ptp_vl_data_lo_0_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_0_u<>), "union _ptp_vl_data_lo_0_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_1_s<>), "struct _ptp_vl_data_lo_1_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_1_u<>), "union _ptp_vl_data_lo_1_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_2_s<>), "struct _ptp_vl_data_lo_2_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_2_u<>), "union _ptp_vl_data_lo_2_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_3_s<>), "struct _ptp_vl_data_lo_3_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_3_u<>), "union _ptp_vl_data_lo_3_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_4_s<>), "struct _ptp_vl_data_lo_4_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_4_u<>), "union _ptp_vl_data_lo_4_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_5_s<>), "struct _ptp_vl_data_lo_5_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_5_u<>), "union _ptp_vl_data_lo_5_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_6_s<>), "struct _ptp_vl_data_lo_6_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_6_u<>), "union _ptp_vl_data_lo_6_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_7_s<>), "struct _ptp_vl_data_lo_7_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_7_u<>), "union _ptp_vl_data_lo_7_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_8_s<>), "struct _ptp_vl_data_lo_8_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_8_u<>), "union _ptp_vl_data_lo_8_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_9_s<>), "struct _ptp_vl_data_lo_9_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_9_u<>), "union _ptp_vl_data_lo_9_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_10_s<>), "struct _ptp_vl_data_lo_10_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_10_u<>), "union _ptp_vl_data_lo_10_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_11_s<>), "struct _ptp_vl_data_lo_11_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_11_u<>), "union _ptp_vl_data_lo_11_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_12_s<>), "struct _ptp_vl_data_lo_12_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_12_u<>), "union _ptp_vl_data_lo_12_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_13_s<>), "struct _ptp_vl_data_lo_13_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_13_u<>), "union _ptp_vl_data_lo_13_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_14_s<>), "struct _ptp_vl_data_lo_14_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_14_u<>), "union _ptp_vl_data_lo_14_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_15_s<>), "struct _ptp_vl_data_lo_15_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_15_u<>), "union _ptp_vl_data_lo_15_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_16_s<>), "struct _ptp_vl_data_lo_16_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_16_u<>), "union _ptp_vl_data_lo_16_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_17_s<>), "struct _ptp_vl_data_lo_17_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_17_u<>), "union _ptp_vl_data_lo_17_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_18_s<>), "struct _ptp_vl_data_lo_18_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_18_u<>), "union _ptp_vl_data_lo_18_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_19_s<>), "struct _ptp_vl_data_lo_19_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_lo_19_u<>), "union _ptp_vl_data_lo_19_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_0_s<>), "struct _ptp_vl_data_hi_0_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_0_u<>), "union _ptp_vl_data_hi_0_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_1_s<>), "struct _ptp_vl_data_hi_1_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_1_u<>), "union _ptp_vl_data_hi_1_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_2_s<>), "struct _ptp_vl_data_hi_2_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_2_u<>), "union _ptp_vl_data_hi_2_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_3_s<>), "struct _ptp_vl_data_hi_3_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_3_u<>), "union _ptp_vl_data_hi_3_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_4_s<>), "struct _ptp_vl_data_hi_4_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_4_u<>), "union _ptp_vl_data_hi_4_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_5_s<>), "struct _ptp_vl_data_hi_5_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_5_u<>), "union _ptp_vl_data_hi_5_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_6_s<>), "struct _ptp_vl_data_hi_6_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_6_u<>), "union _ptp_vl_data_hi_6_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_7_s<>), "struct _ptp_vl_data_hi_7_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_7_u<>), "union _ptp_vl_data_hi_7_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_8_s<>), "struct _ptp_vl_data_hi_8_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_8_u<>), "union _ptp_vl_data_hi_8_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_9_s<>), "struct _ptp_vl_data_hi_9_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_9_u<>), "union _ptp_vl_data_hi_9_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_10_s<>), "struct _ptp_vl_data_hi_10_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_10_u<>), "union _ptp_vl_data_hi_10_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_11_s<>), "struct _ptp_vl_data_hi_11_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_11_u<>), "union _ptp_vl_data_hi_11_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_12_s<>), "struct _ptp_vl_data_hi_12_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_12_u<>), "union _ptp_vl_data_hi_12_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_13_s<>), "struct _ptp_vl_data_hi_13_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_13_u<>), "union _ptp_vl_data_hi_13_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_14_s<>), "struct _ptp_vl_data_hi_14_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_14_u<>), "union _ptp_vl_data_hi_14_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_15_s<>), "struct _ptp_vl_data_hi_15_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_15_u<>), "union _ptp_vl_data_hi_15_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_16_s<>), "struct _ptp_vl_data_hi_16_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_16_u<>), "union _ptp_vl_data_hi_16_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_17_s<>), "struct _ptp_vl_data_hi_17_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_17_u<>), "union _ptp_vl_data_hi_17_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_18_s<>), "struct _ptp_vl_data_hi_18_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_18_u<>), "union _ptp_vl_data_hi_18_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_19_s<>), "struct _ptp_vl_data_hi_19_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_vl_data_hi_19_u<>), "union _ptp_vl_data_hi_19_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_lal_s<>), "struct _ptp_lal_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_lal_u<>), "union _ptp_lal_u does not have the correct size.");
        static_assert(4 == sizeof(_link_fault_config_s<>), "struct _link_fault_config_s does not have the correct size.");
        static_assert(4 == sizeof(_link_fault_config_u<>), "union _link_fault_config_u does not have the correct size.");
        static_assert(4 == sizeof(_ipg_col_rem_s<>), "struct _ipg_col_rem_s does not have the correct size.");
        static_assert(4 == sizeof(_ipg_col_rem_u<>), "union _ipg_col_rem_u does not have the correct size.");
        static_assert(4 == sizeof(_max_tx_size_config_s<>), "struct _max_tx_size_config_s does not have the correct size.");
        static_assert(4 == sizeof(_max_tx_size_config_u<>), "union _max_tx_size_config_u does not have the correct size.");
        static_assert(4 == sizeof(_txmac_control_s<>), "struct _txmac_control_s does not have the correct size.");
        static_assert(4 == sizeof(_txmac_control_u<>), "union _txmac_control_u does not have the correct size.");
        static_assert(4 == sizeof(_txmac_ehip_cfg_s<>), "struct _txmac_ehip_cfg_s does not have the correct size.");
        static_assert(4 == sizeof(_txmac_ehip_cfg_u<>), "union _txmac_ehip_cfg_u does not have the correct size.");
        static_assert(4 == sizeof(_txmac_saddrl_s<>), "struct _txmac_saddrl_s does not have the correct size.");
        static_assert(4 == sizeof(_txmac_saddrl_u<>), "union _txmac_saddrl_u does not have the correct size.");
        static_assert(4 == sizeof(_txmac_saddrh_s<>), "struct _txmac_saddrh_s does not have the correct size.");
        static_assert(4 == sizeof(_txmac_saddrh_u<>), "union _txmac_saddrh_u does not have the correct size.");
        static_assert(4 == sizeof(_max_rx_size_config_s<>), "struct _max_rx_size_config_s does not have the correct size.");
        static_assert(4 == sizeof(_max_rx_size_config_u<>), "union _max_rx_size_config_u does not have the correct size.");
        static_assert(4 == sizeof(_mac_crc_config_s<>), "struct _mac_crc_config_s does not have the correct size.");
        static_assert(4 == sizeof(_mac_crc_config_u<>), "union _mac_crc_config_u does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_control_s<>), "struct _rxmac_control_s does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_control_u<>), "union _rxmac_control_u does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_ehip_cfg_s<>), "struct _rxmac_ehip_cfg_s does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_ehip_cfg_u<>), "union _rxmac_ehip_cfg_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pause_en_s<>), "struct _tx_pause_en_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pause_en_u<>), "union _tx_pause_en_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pause_request_s<>), "struct _tx_pause_request_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pause_request_u<>), "union _tx_pause_request_u does not have the correct size.");
        static_assert(4 == sizeof(_retransmit_xoff_holdoff_en_s<>), "struct _retransmit_xoff_holdoff_en_s does not have the correct size.");
        static_assert(4 == sizeof(_retransmit_xoff_holdoff_en_u<>), "union _retransmit_xoff_holdoff_en_u does not have the correct size.");
        static_assert(4 == sizeof(_retransmit_xoff_holdoff_quanta_s<>), "struct _retransmit_xoff_holdoff_quanta_s does not have the correct size.");
        static_assert(4 == sizeof(_retransmit_xoff_holdoff_quanta_u<>), "union _retransmit_xoff_holdoff_quanta_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pause_quanta_s<>), "struct _tx_pause_quanta_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pause_quanta_u<>), "union _tx_pause_quanta_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_xof_en_tx_pause_qnumber_s<>), "struct _tx_xof_en_tx_pause_qnumber_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_xof_en_tx_pause_qnumber_u<>), "union _tx_xof_en_tx_pause_qnumber_u does not have the correct size.");
        static_assert(4 == sizeof(_cfg_retransmit_holdoff_en_s<>), "struct _cfg_retransmit_holdoff_en_s does not have the correct size.");
        static_assert(4 == sizeof(_cfg_retransmit_holdoff_en_u<>), "union _cfg_retransmit_holdoff_en_u does not have the correct size.");
        static_assert(4 == sizeof(_cfg_retransmit_holdoff_quanta_s<>), "struct _cfg_retransmit_holdoff_quanta_s does not have the correct size.");
        static_assert(4 == sizeof(_cfg_retransmit_holdoff_quanta_u<>), "union _cfg_retransmit_holdoff_quanta_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_daddrl_s<>), "struct _tx_pfc_daddrl_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_daddrl_u<>), "union _tx_pfc_daddrl_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_daddrh_s<>), "struct _tx_pfc_daddrh_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_daddrh_u<>), "union _tx_pfc_daddrh_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_saddrl_s<>), "struct _tx_pfc_saddrl_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_saddrl_u<>), "union _tx_pfc_saddrl_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_saddrh_s<>), "struct _tx_pfc_saddrh_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_pfc_saddrh_u<>), "union _tx_pfc_saddrh_u does not have the correct size.");
        static_assert(4 == sizeof(_txsfc_ehip_cfg_s<>), "struct _txsfc_ehip_cfg_s does not have the correct size.");
        static_assert(4 == sizeof(_txsfc_ehip_cfg_u<>), "union _txsfc_ehip_cfg_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_enable_s<>), "struct _rx_pause_enable_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_enable_u<>), "union _rx_pause_enable_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_fwd_s<>), "struct _rx_pause_fwd_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_fwd_u<>), "union _rx_pause_fwd_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_daddrl_s<>), "struct _rx_pause_daddrl_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_daddrl_u<>), "union _rx_pause_daddrl_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_daddrh_s<>), "struct _rx_pause_daddrh_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_pause_daddrh_u<>), "union _rx_pause_daddrh_u does not have the correct size.");
        static_assert(4 == sizeof(_rxsfc_ehip_cfg_s<>), "struct _rxsfc_ehip_cfg_s does not have the correct size.");
        static_assert(4 == sizeof(_rxsfc_ehip_cfg_u<>), "union _rxsfc_ehip_cfg_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_config_s<>), "struct _cntr_tx_config_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_config_u<>), "union _cntr_tx_config_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_config_s<>), "struct _cntr_rx_config_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_config_u<>), "union _cntr_rx_config_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_0_s<>), "struct _pfc_pause_quanta_0_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_0_u<>), "union _pfc_pause_quanta_0_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_1_s<>), "struct _pfc_pause_quanta_1_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_1_u<>), "union _pfc_pause_quanta_1_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_2_s<>), "struct _pfc_pause_quanta_2_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_2_u<>), "union _pfc_pause_quanta_2_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_3_s<>), "struct _pfc_pause_quanta_3_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_3_u<>), "union _pfc_pause_quanta_3_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_4_s<>), "struct _pfc_pause_quanta_4_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_4_u<>), "union _pfc_pause_quanta_4_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_5_s<>), "struct _pfc_pause_quanta_5_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_5_u<>), "union _pfc_pause_quanta_5_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_6_s<>), "struct _pfc_pause_quanta_6_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_6_u<>), "union _pfc_pause_quanta_6_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_7_s<>), "struct _pfc_pause_quanta_7_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_pause_quanta_7_u<>), "union _pfc_pause_quanta_7_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_0_s<>), "struct _pfc_holdoff_quanta_0_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_0_u<>), "union _pfc_holdoff_quanta_0_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_1_s<>), "struct _pfc_holdoff_quanta_1_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_1_u<>), "union _pfc_holdoff_quanta_1_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_2_s<>), "struct _pfc_holdoff_quanta_2_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_2_u<>), "union _pfc_holdoff_quanta_2_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_3_s<>), "struct _pfc_holdoff_quanta_3_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_3_u<>), "union _pfc_holdoff_quanta_3_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_4_s<>), "struct _pfc_holdoff_quanta_4_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_4_u<>), "union _pfc_holdoff_quanta_4_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_5_s<>), "struct _pfc_holdoff_quanta_5_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_5_u<>), "union _pfc_holdoff_quanta_5_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_6_s<>), "struct _pfc_holdoff_quanta_6_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_6_u<>), "union _pfc_holdoff_quanta_6_u does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_7_s<>), "struct _pfc_holdoff_quanta_7_s does not have the correct size.");
        static_assert(4 == sizeof(_pfc_holdoff_quanta_7_u<>), "union _pfc_holdoff_quanta_7_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_extra_latency_s<>), "struct _tx_ptp_extra_latency_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_extra_latency_u<>), "union _tx_ptp_extra_latency_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_ui_s<>), "struct _tx_ptp_ui_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_ui_u<>), "union _tx_ptp_ui_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_phy_lane_num_s<>), "struct _tx_ptp_phy_lane_num_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_phy_lane_num_u<>), "union _tx_ptp_phy_lane_num_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_ap_filter_s<>), "struct _tx_ptp_ap_filter_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_ap_filter_u<>), "union _tx_ptp_ap_filter_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_0_s<>), "struct _tx_ptp_vl_offset_0_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_0_u<>), "union _tx_ptp_vl_offset_0_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_1_s<>), "struct _tx_ptp_vl_offset_1_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_1_u<>), "union _tx_ptp_vl_offset_1_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_2_s<>), "struct _tx_ptp_vl_offset_2_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_2_u<>), "union _tx_ptp_vl_offset_2_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_3_s<>), "struct _tx_ptp_vl_offset_3_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_3_u<>), "union _tx_ptp_vl_offset_3_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_4_s<>), "struct _tx_ptp_vl_offset_4_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_4_u<>), "union _tx_ptp_vl_offset_4_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_5_s<>), "struct _tx_ptp_vl_offset_5_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_5_u<>), "union _tx_ptp_vl_offset_5_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_6_s<>), "struct _tx_ptp_vl_offset_6_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_6_u<>), "union _tx_ptp_vl_offset_6_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_7_s<>), "struct _tx_ptp_vl_offset_7_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_7_u<>), "union _tx_ptp_vl_offset_7_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_8_s<>), "struct _tx_ptp_vl_offset_8_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_8_u<>), "union _tx_ptp_vl_offset_8_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_9_s<>), "struct _tx_ptp_vl_offset_9_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_9_u<>), "union _tx_ptp_vl_offset_9_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_10_s<>), "struct _tx_ptp_vl_offset_10_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_10_u<>), "union _tx_ptp_vl_offset_10_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_11_s<>), "struct _tx_ptp_vl_offset_11_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_11_u<>), "union _tx_ptp_vl_offset_11_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_12_s<>), "struct _tx_ptp_vl_offset_12_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_12_u<>), "union _tx_ptp_vl_offset_12_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_13_s<>), "struct _tx_ptp_vl_offset_13_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_13_u<>), "union _tx_ptp_vl_offset_13_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_14_s<>), "struct _tx_ptp_vl_offset_14_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_14_u<>), "union _tx_ptp_vl_offset_14_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_15_s<>), "struct _tx_ptp_vl_offset_15_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_15_u<>), "union _tx_ptp_vl_offset_15_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_16_s<>), "struct _tx_ptp_vl_offset_16_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_16_u<>), "union _tx_ptp_vl_offset_16_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_17_s<>), "struct _tx_ptp_vl_offset_17_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_17_u<>), "union _tx_ptp_vl_offset_17_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_18_s<>), "struct _tx_ptp_vl_offset_18_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_18_u<>), "union _tx_ptp_vl_offset_18_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_19_s<>), "struct _tx_ptp_vl_offset_19_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_vl_offset_19_u<>), "union _tx_ptp_vl_offset_19_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_extra_latency_s<>), "struct _rx_ptp_extra_latency_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_extra_latency_u<>), "union _rx_ptp_extra_latency_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_ui_s<>), "struct _rx_ptp_ui_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_ui_u<>), "union _rx_ptp_ui_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_phy_lane_num_s<>), "struct _rx_ptp_phy_lane_num_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_phy_lane_num_u<>), "union _rx_ptp_phy_lane_num_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_ap_filter_s<>), "struct _rx_ptp_ap_filter_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_ap_filter_u<>), "union _rx_ptp_ap_filter_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_0_s<>), "struct _rx_ptp_vl_offset_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_0_u<>), "union _rx_ptp_vl_offset_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_1_s<>), "struct _rx_ptp_vl_offset_1_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_1_u<>), "union _rx_ptp_vl_offset_1_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_2_s<>), "struct _rx_ptp_vl_offset_2_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_2_u<>), "union _rx_ptp_vl_offset_2_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_3_s<>), "struct _rx_ptp_vl_offset_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_3_u<>), "union _rx_ptp_vl_offset_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_4_s<>), "struct _rx_ptp_vl_offset_4_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_4_u<>), "union _rx_ptp_vl_offset_4_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_5_s<>), "struct _rx_ptp_vl_offset_5_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_5_u<>), "union _rx_ptp_vl_offset_5_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_6_s<>), "struct _rx_ptp_vl_offset_6_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_6_u<>), "union _rx_ptp_vl_offset_6_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_7_s<>), "struct _rx_ptp_vl_offset_7_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_7_u<>), "union _rx_ptp_vl_offset_7_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_8_s<>), "struct _rx_ptp_vl_offset_8_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_8_u<>), "union _rx_ptp_vl_offset_8_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_9_s<>), "struct _rx_ptp_vl_offset_9_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_9_u<>), "union _rx_ptp_vl_offset_9_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_10_s<>), "struct _rx_ptp_vl_offset_10_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_10_u<>), "union _rx_ptp_vl_offset_10_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_11_s<>), "struct _rx_ptp_vl_offset_11_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_11_u<>), "union _rx_ptp_vl_offset_11_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_12_s<>), "struct _rx_ptp_vl_offset_12_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_12_u<>), "union _rx_ptp_vl_offset_12_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_13_s<>), "struct _rx_ptp_vl_offset_13_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_13_u<>), "union _rx_ptp_vl_offset_13_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_14_s<>), "struct _rx_ptp_vl_offset_14_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_14_u<>), "union _rx_ptp_vl_offset_14_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_15_s<>), "struct _rx_ptp_vl_offset_15_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_15_u<>), "union _rx_ptp_vl_offset_15_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_16_s<>), "struct _rx_ptp_vl_offset_16_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_16_u<>), "union _rx_ptp_vl_offset_16_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_17_s<>), "struct _rx_ptp_vl_offset_17_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_17_u<>), "union _rx_ptp_vl_offset_17_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_18_s<>), "struct _rx_ptp_vl_offset_18_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_18_u<>), "union _rx_ptp_vl_offset_18_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_19_s<>), "struct _rx_ptp_vl_offset_19_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_offset_19_u<>), "union _rx_ptp_vl_offset_19_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_0_s<>), "struct _rx_ptp_vl_to_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_0_u<>), "union _rx_ptp_vl_to_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_1_s<>), "struct _rx_ptp_vl_to_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_1_u<>), "union _rx_ptp_vl_to_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_2_s<>), "struct _rx_ptp_vl_to_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_2_u<>), "union _rx_ptp_vl_to_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_3_s<>), "struct _rx_ptp_vl_to_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_3_u<>), "union _rx_ptp_vl_to_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_4_s<>), "struct _rx_ptp_vl_to_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_4_u<>), "union _rx_ptp_vl_to_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_5_s<>), "struct _rx_ptp_vl_to_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_5_u<>), "union _rx_ptp_vl_to_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_6_s<>), "struct _rx_ptp_vl_to_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_6_u<>), "union _rx_ptp_vl_to_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_7_s<>), "struct _rx_ptp_vl_to_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_7_u<>), "union _rx_ptp_vl_to_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_8_s<>), "struct _rx_ptp_vl_to_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_8_u<>), "union _rx_ptp_vl_to_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_9_s<>), "struct _rx_ptp_vl_to_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_9_u<>), "union _rx_ptp_vl_to_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_10_s<>), "struct _rx_ptp_vl_to_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_10_u<>), "union _rx_ptp_vl_to_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_11_s<>), "struct _rx_ptp_vl_to_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_11_u<>), "union _rx_ptp_vl_to_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_12_s<>), "struct _rx_ptp_vl_to_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_12_u<>), "union _rx_ptp_vl_to_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_13_s<>), "struct _rx_ptp_vl_to_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_13_u<>), "union _rx_ptp_vl_to_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_14_s<>), "struct _rx_ptp_vl_to_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_14_u<>), "union _rx_ptp_vl_to_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_15_s<>), "struct _rx_ptp_vl_to_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_15_u<>), "union _rx_ptp_vl_to_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_16_s<>), "struct _rx_ptp_vl_to_pl_16_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_16_u<>), "union _rx_ptp_vl_to_pl_16_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_17_s<>), "struct _rx_ptp_vl_to_pl_17_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_17_u<>), "union _rx_ptp_vl_to_pl_17_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_18_s<>), "struct _rx_ptp_vl_to_pl_18_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_18_u<>), "union _rx_ptp_vl_to_pl_18_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_19_s<>), "struct _rx_ptp_vl_to_pl_19_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_vl_to_pl_19_u<>), "union _rx_ptp_vl_to_pl_19_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_pkt_n_ts_rx_ctr_s<>), "struct _rx_pkt_n_ts_rx_ctr_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_pkt_n_ts_rx_ctr_u<>), "union _rx_pkt_n_ts_rx_ctr_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_fragments_lo_s<>), "struct _cntr_tx_fragments_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_fragments_lo_u<>), "union _cntr_tx_fragments_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_jabbers_lo_s<>), "struct _cntr_tx_jabbers_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_jabbers_lo_u<>), "union _cntr_tx_jabbers_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_fcs_err_okpkt_lo_s<>), "struct _cntr_tx_fcs_err_okpkt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_fcs_err_okpkt_lo_u<>), "union _cntr_tx_fcs_err_okpkt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_data_err_lo_s<>), "struct _cntr_tx_mcast_data_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_data_err_lo_u<>), "union _cntr_tx_mcast_data_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_data_err_lo_s<>), "struct _cntr_tx_bcast_data_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_data_err_lo_u<>), "union _cntr_tx_bcast_data_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_data_err_lo_s<>), "struct _cntr_tx_ucast_data_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_data_err_lo_u<>), "union _cntr_tx_ucast_data_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_ctrl_err_lo_s<>), "struct _cntr_tx_mcast_ctrl_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_ctrl_err_lo_u<>), "union _cntr_tx_mcast_ctrl_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_ctrl_err_lo_s<>), "struct _cntr_tx_bcast_ctrl_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_ctrl_err_lo_u<>), "union _cntr_tx_bcast_ctrl_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_ctrl_err_lo_s<>), "struct _cntr_tx_ucast_ctrl_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_ctrl_err_lo_u<>), "union _cntr_tx_ucast_ctrl_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pause_err_lo_s<>), "struct _cntr_tx_pause_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pause_err_lo_u<>), "union _cntr_tx_pause_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_64b_lo_s<>), "struct _cntr_tx_64b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_64b_lo_u<>), "union _cntr_tx_64b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_64b_hi_s<>), "struct _cntr_tx_64b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_64b_hi_u<>), "union _cntr_tx_64b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_65to127b_lo_s<>), "struct _cntr_tx_65to127b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_65to127b_lo_u<>), "union _cntr_tx_65to127b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_65to127b_hi_s<>), "struct _cntr_tx_65to127b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_65to127b_hi_u<>), "union _cntr_tx_65to127b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_128to255b_lo_s<>), "struct _cntr_tx_128to255b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_128to255b_lo_u<>), "union _cntr_tx_128to255b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_128to255b_hi_s<>), "struct _cntr_tx_128to255b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_128to255b_hi_u<>), "union _cntr_tx_128to255b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_256to511b_lo_s<>), "struct _cntr_tx_256to511b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_256to511b_lo_u<>), "union _cntr_tx_256to511b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_256to511b_hi_s<>), "struct _cntr_tx_256to511b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_256to511b_hi_u<>), "union _cntr_tx_256to511b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_512to1023b_lo_s<>), "struct _cntr_tx_512to1023b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_512to1023b_lo_u<>), "union _cntr_tx_512to1023b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_512to1023b_hi_s<>), "struct _cntr_tx_512to1023b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_512to1023b_hi_u<>), "union _cntr_tx_512to1023b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1024to1518b_lo_s<>), "struct _cntr_tx_1024to1518b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1024to1518b_lo_u<>), "union _cntr_tx_1024to1518b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1024to1518b_hi_s<>), "struct _cntr_tx_1024to1518b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1024to1518b_hi_u<>), "union _cntr_tx_1024to1518b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1519tomaxb_lo_s<>), "struct _cntr_tx_1519tomaxb_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1519tomaxb_lo_u<>), "union _cntr_tx_1519tomaxb_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1519tomaxb_hi_s<>), "struct _cntr_tx_1519tomaxb_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_1519tomaxb_hi_u<>), "union _cntr_tx_1519tomaxb_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_oversize_lo_s<>), "struct _cntr_tx_oversize_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_oversize_lo_u<>), "union _cntr_tx_oversize_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_data_ok_lo_s<>), "struct _cntr_tx_mcast_data_ok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_data_ok_lo_u<>), "union _cntr_tx_mcast_data_ok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_data_ok_hi_s<>), "struct _cntr_tx_mcast_data_ok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_data_ok_hi_u<>), "union _cntr_tx_mcast_data_ok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_data_ok_lo_s<>), "struct _cntr_tx_bcast_data_ok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_data_ok_lo_u<>), "union _cntr_tx_bcast_data_ok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_data_ok_hi_s<>), "struct _cntr_tx_bcast_data_ok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_data_ok_hi_u<>), "union _cntr_tx_bcast_data_ok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_data_ok_lo_s<>), "struct _cntr_tx_ucast_data_ok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_data_ok_lo_u<>), "union _cntr_tx_ucast_data_ok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_data_ok_hi_s<>), "struct _cntr_tx_ucast_data_ok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_data_ok_hi_u<>), "union _cntr_tx_ucast_data_ok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_ctrl_lo_s<>), "struct _cntr_tx_mcast_ctrl_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_ctrl_lo_u<>), "union _cntr_tx_mcast_ctrl_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_ctrl_hi_s<>), "struct _cntr_tx_mcast_ctrl_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_mcast_ctrl_hi_u<>), "union _cntr_tx_mcast_ctrl_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_ctrl_lo_s<>), "struct _cntr_tx_bcast_ctrl_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_ctrl_lo_u<>), "union _cntr_tx_bcast_ctrl_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_ctrl_hi_s<>), "struct _cntr_tx_bcast_ctrl_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_bcast_ctrl_hi_u<>), "union _cntr_tx_bcast_ctrl_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_ctrl_lo_s<>), "struct _cntr_tx_ucast_ctrl_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_ctrl_lo_u<>), "union _cntr_tx_ucast_ctrl_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_ctrl_hi_s<>), "struct _cntr_tx_ucast_ctrl_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_ucast_ctrl_hi_u<>), "union _cntr_tx_ucast_ctrl_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pause_lo_s<>), "struct _cntr_tx_pause_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pause_lo_u<>), "union _cntr_tx_pause_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pause_hi_s<>), "struct _cntr_tx_pause_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pause_hi_u<>), "union _cntr_tx_pause_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_runt_lo_s<>), "struct _cntr_tx_runt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_runt_lo_u<>), "union _cntr_tx_runt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_st_lo_s<>), "struct _cntr_tx_st_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_st_lo_u<>), "union _cntr_tx_st_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_st_hi_s<>), "struct _cntr_tx_st_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_st_hi_u<>), "union _cntr_tx_st_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_lenerr_lo_s<>), "struct _cntr_tx_lenerr_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_lenerr_lo_u<>), "union _cntr_tx_lenerr_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pfc_err_lo_s<>), "struct _cntr_tx_pfc_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pfc_err_lo_u<>), "union _cntr_tx_pfc_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pfc_lo_s<>), "struct _cntr_tx_pfc_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pfc_lo_u<>), "union _cntr_tx_pfc_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pfc_hi_s<>), "struct _cntr_tx_pfc_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_pfc_hi_u<>), "union _cntr_tx_pfc_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_payloadoctetsok_lo_s<>), "struct _cntr_tx_payloadoctetsok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_payloadoctetsok_lo_u<>), "union _cntr_tx_payloadoctetsok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_payloadoctetsok_hi_s<>), "struct _cntr_tx_payloadoctetsok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_payloadoctetsok_hi_u<>), "union _cntr_tx_payloadoctetsok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_octetsok_lo_s<>), "struct _cntr_tx_octetsok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_octetsok_lo_u<>), "union _cntr_tx_octetsok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_octetsok_hi_s<>), "struct _cntr_tx_octetsok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_octetsok_hi_u<>), "union _cntr_tx_octetsok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_malformed_lo_s<>), "struct _cntr_tx_malformed_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_malformed_lo_u<>), "union _cntr_tx_malformed_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_dropped_lo_s<>), "struct _cntr_tx_dropped_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_dropped_lo_u<>), "union _cntr_tx_dropped_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_badlt_lo_s<>), "struct _cntr_tx_badlt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_badlt_lo_u<>), "union _cntr_tx_badlt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_ptp_pkts_s<>), "struct _cntr_tx_total_ptp_pkts_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_ptp_pkts_u<>), "union _cntr_tx_total_ptp_pkts_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_1step_ptp_pkts_s<>), "struct _cntr_tx_total_1step_ptp_pkts_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_1step_ptp_pkts_u<>), "union _cntr_tx_total_1step_ptp_pkts_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_2step_ptp_pkts_s<>), "struct _cntr_tx_total_2step_ptp_pkts_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_2step_ptp_pkts_u<>), "union _cntr_tx_total_2step_ptp_pkts_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_v1_ptp_pkts_s<>), "struct _cntr_tx_total_v1_ptp_pkts_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_v1_ptp_pkts_u<>), "union _cntr_tx_total_v1_ptp_pkts_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_v2_ptp_pkts_s<>), "struct _cntr_tx_total_v2_ptp_pkts_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_tx_total_v2_ptp_pkts_u<>), "union _cntr_tx_total_v2_ptp_pkts_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_fragments_lo_s<>), "struct _cntr_rx_fragments_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_fragments_lo_u<>), "union _cntr_rx_fragments_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_jabbers_lo_s<>), "struct _cntr_rx_jabbers_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_jabbers_lo_u<>), "union _cntr_rx_jabbers_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_fcs_err_okpkt_lo_s<>), "struct _cntr_rx_fcs_err_okpkt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_fcs_err_okpkt_lo_u<>), "union _cntr_rx_fcs_err_okpkt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_data_err_lo_s<>), "struct _cntr_rx_mcast_data_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_data_err_lo_u<>), "union _cntr_rx_mcast_data_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_data_err_lo_s<>), "struct _cntr_rx_bcast_data_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_data_err_lo_u<>), "union _cntr_rx_bcast_data_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_data_err_lo_s<>), "struct _cntr_rx_ucast_data_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_data_err_lo_u<>), "union _cntr_rx_ucast_data_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_ctrl_err_lo_s<>), "struct _cntr_rx_mcast_ctrl_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_ctrl_err_lo_u<>), "union _cntr_rx_mcast_ctrl_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_ctrl_err_lo_s<>), "struct _cntr_rx_bcast_ctrl_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_ctrl_err_lo_u<>), "union _cntr_rx_bcast_ctrl_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_ctrl_err_lo_s<>), "struct _cntr_rx_ucast_ctrl_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_ctrl_err_lo_u<>), "union _cntr_rx_ucast_ctrl_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pause_err_lo_s<>), "struct _cntr_rx_pause_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pause_err_lo_u<>), "union _cntr_rx_pause_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_64b_lo_s<>), "struct _cntr_rx_64b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_64b_lo_u<>), "union _cntr_rx_64b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_64b_hi_s<>), "struct _cntr_rx_64b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_64b_hi_u<>), "union _cntr_rx_64b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_65to127b_lo_s<>), "struct _cntr_rx_65to127b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_65to127b_lo_u<>), "union _cntr_rx_65to127b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_65to127b_hi_s<>), "struct _cntr_rx_65to127b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_65to127b_hi_u<>), "union _cntr_rx_65to127b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_128to255b_lo_s<>), "struct _cntr_rx_128to255b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_128to255b_lo_u<>), "union _cntr_rx_128to255b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_128to255b_hi_s<>), "struct _cntr_rx_128to255b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_128to255b_hi_u<>), "union _cntr_rx_128to255b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_256to511b_lo_s<>), "struct _cntr_rx_256to511b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_256to511b_lo_u<>), "union _cntr_rx_256to511b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_256to511b_hi_s<>), "struct _cntr_rx_256to511b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_256to511b_hi_u<>), "union _cntr_rx_256to511b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_512to1023b_lo_s<>), "struct _cntr_rx_512to1023b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_512to1023b_lo_u<>), "union _cntr_rx_512to1023b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_512to1023b_hi_s<>), "struct _cntr_rx_512to1023b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_512to1023b_hi_u<>), "union _cntr_rx_512to1023b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1024to1518b_lo_s<>), "struct _cntr_rx_1024to1518b_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1024to1518b_lo_u<>), "union _cntr_rx_1024to1518b_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1024to1518b_hi_s<>), "struct _cntr_rx_1024to1518b_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1024to1518b_hi_u<>), "union _cntr_rx_1024to1518b_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1519tomaxb_lo_s<>), "struct _cntr_rx_1519tomaxb_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1519tomaxb_lo_u<>), "union _cntr_rx_1519tomaxb_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1519tomaxb_hi_s<>), "struct _cntr_rx_1519tomaxb_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_1519tomaxb_hi_u<>), "union _cntr_rx_1519tomaxb_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_oversize_lo_s<>), "struct _cntr_rx_oversize_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_oversize_lo_u<>), "union _cntr_rx_oversize_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_data_ok_lo_s<>), "struct _cntr_rx_mcast_data_ok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_data_ok_lo_u<>), "union _cntr_rx_mcast_data_ok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_data_ok_hi_s<>), "struct _cntr_rx_mcast_data_ok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_data_ok_hi_u<>), "union _cntr_rx_mcast_data_ok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_data_ok_lo_s<>), "struct _cntr_rx_bcast_data_ok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_data_ok_lo_u<>), "union _cntr_rx_bcast_data_ok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_data_ok_hi_s<>), "struct _cntr_rx_bcast_data_ok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_data_ok_hi_u<>), "union _cntr_rx_bcast_data_ok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_data_ok_lo_s<>), "struct _cntr_rx_ucast_data_ok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_data_ok_lo_u<>), "union _cntr_rx_ucast_data_ok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_data_ok_hi_s<>), "struct _cntr_rx_ucast_data_ok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_data_ok_hi_u<>), "union _cntr_rx_ucast_data_ok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_ctrl_lo_s<>), "struct _cntr_rx_mcast_ctrl_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_ctrl_lo_u<>), "union _cntr_rx_mcast_ctrl_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_ctrl_hi_s<>), "struct _cntr_rx_mcast_ctrl_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_mcast_ctrl_hi_u<>), "union _cntr_rx_mcast_ctrl_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_ctrl_lo_s<>), "struct _cntr_rx_bcast_ctrl_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_ctrl_lo_u<>), "union _cntr_rx_bcast_ctrl_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_ctrl_hi_s<>), "struct _cntr_rx_bcast_ctrl_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_bcast_ctrl_hi_u<>), "union _cntr_rx_bcast_ctrl_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_ctrl_lo_s<>), "struct _cntr_rx_ucast_ctrl_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_ctrl_lo_u<>), "union _cntr_rx_ucast_ctrl_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_ctrl_hi_s<>), "struct _cntr_rx_ucast_ctrl_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_ucast_ctrl_hi_u<>), "union _cntr_rx_ucast_ctrl_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pause_lo_s<>), "struct _cntr_rx_pause_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pause_lo_u<>), "union _cntr_rx_pause_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pause_hi_s<>), "struct _cntr_rx_pause_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pause_hi_u<>), "union _cntr_rx_pause_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_runt_lo_s<>), "struct _cntr_rx_runt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_runt_lo_u<>), "union _cntr_rx_runt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_st_lo_s<>), "struct _cntr_rx_st_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_st_lo_u<>), "union _cntr_rx_st_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_st_hi_s<>), "struct _cntr_rx_st_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_st_hi_u<>), "union _cntr_rx_st_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_lenerr_lo_s<>), "struct _cntr_rx_lenerr_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_lenerr_lo_u<>), "union _cntr_rx_lenerr_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pfc_err_lo_s<>), "struct _cntr_rx_pfc_err_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pfc_err_lo_u<>), "union _cntr_rx_pfc_err_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pfc_lo_s<>), "struct _cntr_rx_pfc_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pfc_lo_u<>), "union _cntr_rx_pfc_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pfc_hi_s<>), "struct _cntr_rx_pfc_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_pfc_hi_u<>), "union _cntr_rx_pfc_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_payloadoctetsok_lo_s<>), "struct _cntr_rx_payloadoctetsok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_payloadoctetsok_lo_u<>), "union _cntr_rx_payloadoctetsok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_payloadoctetsok_hi_s<>), "struct _cntr_rx_payloadoctetsok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_payloadoctetsok_hi_u<>), "union _cntr_rx_payloadoctetsok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_octetsok_lo_s<>), "struct _cntr_rx_octetsok_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_octetsok_lo_u<>), "union _cntr_rx_octetsok_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_octetsok_hi_s<>), "struct _cntr_rx_octetsok_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_octetsok_hi_u<>), "union _cntr_rx_octetsok_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_malformed_lo_s<>), "struct _cntr_rx_malformed_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_malformed_lo_u<>), "union _cntr_rx_malformed_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_dropped_lo_s<>), "struct _cntr_rx_dropped_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_dropped_lo_u<>), "union _cntr_rx_dropped_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_badlt_lo_s<>), "struct _cntr_rx_badlt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_badlt_lo_u<>), "union _cntr_rx_badlt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_total_ptp_ts_s<>), "struct _cntr_rx_total_ptp_ts_s does not have the correct size.");
        static_assert(4 == sizeof(_cntr_rx_total_ptp_ts_u<>), "union _cntr_rx_total_ptp_ts_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_cf_overflow_s<>), "struct _tx_ptp_cf_overflow_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_cf_overflow_u<>), "union _tx_ptp_cf_overflow_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_0_s<>), "struct _tx_ptp_tam_lo_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_0_u<>), "union _tx_ptp_tam_lo_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_0_s<>), "struct _tx_ptp_tam_med_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_0_u<>), "union _tx_ptp_tam_med_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_0_s<>), "struct _tx_ptp_tam_hi_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_0_u<>), "union _tx_ptp_tam_hi_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_0_s<>), "struct _tx_ptp_tam_adj_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_0_u<>), "union _tx_ptp_tam_adj_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_1_s<>), "struct _tx_ptp_tam_lo_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_1_u<>), "union _tx_ptp_tam_lo_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_1_s<>), "struct _tx_ptp_tam_med_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_1_u<>), "union _tx_ptp_tam_med_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_1_s<>), "struct _tx_ptp_tam_hi_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_1_u<>), "union _tx_ptp_tam_hi_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_1_s<>), "struct _tx_ptp_tam_adj_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_1_u<>), "union _tx_ptp_tam_adj_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_2_s<>), "struct _tx_ptp_tam_lo_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_2_u<>), "union _tx_ptp_tam_lo_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_2_s<>), "struct _tx_ptp_tam_med_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_2_u<>), "union _tx_ptp_tam_med_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_2_s<>), "struct _tx_ptp_tam_hi_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_2_u<>), "union _tx_ptp_tam_hi_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_2_s<>), "struct _tx_ptp_tam_adj_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_2_u<>), "union _tx_ptp_tam_adj_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_3_s<>), "struct _tx_ptp_tam_lo_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_3_u<>), "union _tx_ptp_tam_lo_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_3_s<>), "struct _tx_ptp_tam_med_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_3_u<>), "union _tx_ptp_tam_med_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_3_s<>), "struct _tx_ptp_tam_hi_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_3_u<>), "union _tx_ptp_tam_hi_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_3_s<>), "struct _tx_ptp_tam_adj_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_3_u<>), "union _tx_ptp_tam_adj_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_4_s<>), "struct _tx_ptp_tam_lo_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_4_u<>), "union _tx_ptp_tam_lo_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_4_s<>), "struct _tx_ptp_tam_med_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_4_u<>), "union _tx_ptp_tam_med_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_4_s<>), "struct _tx_ptp_tam_hi_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_4_u<>), "union _tx_ptp_tam_hi_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_4_s<>), "struct _tx_ptp_tam_adj_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_4_u<>), "union _tx_ptp_tam_adj_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_5_s<>), "struct _tx_ptp_tam_lo_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_5_u<>), "union _tx_ptp_tam_lo_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_5_s<>), "struct _tx_ptp_tam_med_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_5_u<>), "union _tx_ptp_tam_med_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_5_s<>), "struct _tx_ptp_tam_hi_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_5_u<>), "union _tx_ptp_tam_hi_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_5_s<>), "struct _tx_ptp_tam_adj_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_5_u<>), "union _tx_ptp_tam_adj_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_6_s<>), "struct _tx_ptp_tam_lo_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_6_u<>), "union _tx_ptp_tam_lo_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_6_s<>), "struct _tx_ptp_tam_med_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_6_u<>), "union _tx_ptp_tam_med_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_6_s<>), "struct _tx_ptp_tam_hi_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_6_u<>), "union _tx_ptp_tam_hi_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_6_s<>), "struct _tx_ptp_tam_adj_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_6_u<>), "union _tx_ptp_tam_adj_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_7_s<>), "struct _tx_ptp_tam_lo_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_7_u<>), "union _tx_ptp_tam_lo_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_7_s<>), "struct _tx_ptp_tam_med_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_7_u<>), "union _tx_ptp_tam_med_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_7_s<>), "struct _tx_ptp_tam_hi_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_7_u<>), "union _tx_ptp_tam_hi_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_7_s<>), "struct _tx_ptp_tam_adj_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_7_u<>), "union _tx_ptp_tam_adj_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_8_s<>), "struct _tx_ptp_tam_lo_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_8_u<>), "union _tx_ptp_tam_lo_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_8_s<>), "struct _tx_ptp_tam_med_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_8_u<>), "union _tx_ptp_tam_med_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_8_s<>), "struct _tx_ptp_tam_hi_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_8_u<>), "union _tx_ptp_tam_hi_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_8_s<>), "struct _tx_ptp_tam_adj_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_8_u<>), "union _tx_ptp_tam_adj_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_9_s<>), "struct _tx_ptp_tam_lo_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_9_u<>), "union _tx_ptp_tam_lo_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_9_s<>), "struct _tx_ptp_tam_med_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_9_u<>), "union _tx_ptp_tam_med_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_9_s<>), "struct _tx_ptp_tam_hi_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_9_u<>), "union _tx_ptp_tam_hi_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_9_s<>), "struct _tx_ptp_tam_adj_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_9_u<>), "union _tx_ptp_tam_adj_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_10_s<>), "struct _tx_ptp_tam_lo_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_10_u<>), "union _tx_ptp_tam_lo_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_10_s<>), "struct _tx_ptp_tam_med_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_10_u<>), "union _tx_ptp_tam_med_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_10_s<>), "struct _tx_ptp_tam_hi_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_10_u<>), "union _tx_ptp_tam_hi_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_10_s<>), "struct _tx_ptp_tam_adj_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_10_u<>), "union _tx_ptp_tam_adj_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_11_s<>), "struct _tx_ptp_tam_lo_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_11_u<>), "union _tx_ptp_tam_lo_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_11_s<>), "struct _tx_ptp_tam_med_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_11_u<>), "union _tx_ptp_tam_med_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_11_s<>), "struct _tx_ptp_tam_hi_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_11_u<>), "union _tx_ptp_tam_hi_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_11_s<>), "struct _tx_ptp_tam_adj_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_11_u<>), "union _tx_ptp_tam_adj_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_12_s<>), "struct _tx_ptp_tam_lo_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_12_u<>), "union _tx_ptp_tam_lo_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_12_s<>), "struct _tx_ptp_tam_med_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_12_u<>), "union _tx_ptp_tam_med_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_12_s<>), "struct _tx_ptp_tam_hi_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_12_u<>), "union _tx_ptp_tam_hi_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_12_s<>), "struct _tx_ptp_tam_adj_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_12_u<>), "union _tx_ptp_tam_adj_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_13_s<>), "struct _tx_ptp_tam_lo_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_13_u<>), "union _tx_ptp_tam_lo_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_13_s<>), "struct _tx_ptp_tam_med_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_13_u<>), "union _tx_ptp_tam_med_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_13_s<>), "struct _tx_ptp_tam_hi_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_13_u<>), "union _tx_ptp_tam_hi_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_13_s<>), "struct _tx_ptp_tam_adj_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_13_u<>), "union _tx_ptp_tam_adj_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_14_s<>), "struct _tx_ptp_tam_lo_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_14_u<>), "union _tx_ptp_tam_lo_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_14_s<>), "struct _tx_ptp_tam_med_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_14_u<>), "union _tx_ptp_tam_med_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_14_s<>), "struct _tx_ptp_tam_hi_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_14_u<>), "union _tx_ptp_tam_hi_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_14_s<>), "struct _tx_ptp_tam_adj_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_14_u<>), "union _tx_ptp_tam_adj_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_15_s<>), "struct _tx_ptp_tam_lo_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_lo_pl_15_u<>), "union _tx_ptp_tam_lo_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_15_s<>), "struct _tx_ptp_tam_med_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_med_pl_15_u<>), "union _tx_ptp_tam_med_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_15_s<>), "struct _tx_ptp_tam_hi_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_hi_pl_15_u<>), "union _tx_ptp_tam_hi_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_15_s<>), "struct _tx_ptp_tam_adj_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ptp_tam_adj_pl_15_u<>), "union _tx_ptp_tam_adj_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ts_ss_lo_s<>), "struct _tx_ts_ss_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ts_ss_lo_u<>), "union _tx_ts_ss_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ts_ss_mid_s<>), "struct _tx_ts_ss_mid_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ts_ss_mid_u<>), "union _tx_ts_ss_mid_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_ts_ss_hi_s<>), "struct _tx_ts_ss_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_ts_ss_hi_u<>), "union _tx_ts_ss_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_0_s<>), "struct _rx_ptp_tam_lo_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_0_u<>), "union _rx_ptp_tam_lo_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_0_s<>), "struct _rx_ptp_tam_med_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_0_u<>), "union _rx_ptp_tam_med_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_0_s<>), "struct _rx_ptp_tam_hi_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_0_u<>), "union _rx_ptp_tam_hi_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_0_s<>), "struct _rx_ptp_tam_adj_pl_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_0_u<>), "union _rx_ptp_tam_adj_pl_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_1_s<>), "struct _rx_ptp_tam_lo_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_1_u<>), "union _rx_ptp_tam_lo_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_1_s<>), "struct _rx_ptp_tam_med_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_1_u<>), "union _rx_ptp_tam_med_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_1_s<>), "struct _rx_ptp_tam_hi_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_1_u<>), "union _rx_ptp_tam_hi_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_1_s<>), "struct _rx_ptp_tam_adj_pl_1_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_1_u<>), "union _rx_ptp_tam_adj_pl_1_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_2_s<>), "struct _rx_ptp_tam_lo_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_2_u<>), "union _rx_ptp_tam_lo_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_2_s<>), "struct _rx_ptp_tam_med_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_2_u<>), "union _rx_ptp_tam_med_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_2_s<>), "struct _rx_ptp_tam_hi_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_2_u<>), "union _rx_ptp_tam_hi_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_2_s<>), "struct _rx_ptp_tam_adj_pl_2_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_2_u<>), "union _rx_ptp_tam_adj_pl_2_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_3_s<>), "struct _rx_ptp_tam_lo_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_3_u<>), "union _rx_ptp_tam_lo_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_3_s<>), "struct _rx_ptp_tam_med_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_3_u<>), "union _rx_ptp_tam_med_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_3_s<>), "struct _rx_ptp_tam_hi_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_3_u<>), "union _rx_ptp_tam_hi_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_3_s<>), "struct _rx_ptp_tam_adj_pl_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_3_u<>), "union _rx_ptp_tam_adj_pl_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_4_s<>), "struct _rx_ptp_tam_lo_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_4_u<>), "union _rx_ptp_tam_lo_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_4_s<>), "struct _rx_ptp_tam_med_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_4_u<>), "union _rx_ptp_tam_med_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_4_s<>), "struct _rx_ptp_tam_hi_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_4_u<>), "union _rx_ptp_tam_hi_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_4_s<>), "struct _rx_ptp_tam_adj_pl_4_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_4_u<>), "union _rx_ptp_tam_adj_pl_4_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_5_s<>), "struct _rx_ptp_tam_lo_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_5_u<>), "union _rx_ptp_tam_lo_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_5_s<>), "struct _rx_ptp_tam_med_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_5_u<>), "union _rx_ptp_tam_med_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_5_s<>), "struct _rx_ptp_tam_hi_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_5_u<>), "union _rx_ptp_tam_hi_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_5_s<>), "struct _rx_ptp_tam_adj_pl_5_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_5_u<>), "union _rx_ptp_tam_adj_pl_5_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_6_s<>), "struct _rx_ptp_tam_lo_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_6_u<>), "union _rx_ptp_tam_lo_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_6_s<>), "struct _rx_ptp_tam_med_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_6_u<>), "union _rx_ptp_tam_med_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_6_s<>), "struct _rx_ptp_tam_hi_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_6_u<>), "union _rx_ptp_tam_hi_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_6_s<>), "struct _rx_ptp_tam_adj_pl_6_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_6_u<>), "union _rx_ptp_tam_adj_pl_6_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_7_s<>), "struct _rx_ptp_tam_lo_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_7_u<>), "union _rx_ptp_tam_lo_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_7_s<>), "struct _rx_ptp_tam_med_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_7_u<>), "union _rx_ptp_tam_med_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_7_s<>), "struct _rx_ptp_tam_hi_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_7_u<>), "union _rx_ptp_tam_hi_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_7_s<>), "struct _rx_ptp_tam_adj_pl_7_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_7_u<>), "union _rx_ptp_tam_adj_pl_7_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_8_s<>), "struct _rx_ptp_tam_lo_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_8_u<>), "union _rx_ptp_tam_lo_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_8_s<>), "struct _rx_ptp_tam_med_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_8_u<>), "union _rx_ptp_tam_med_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_8_s<>), "struct _rx_ptp_tam_hi_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_8_u<>), "union _rx_ptp_tam_hi_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_8_s<>), "struct _rx_ptp_tam_adj_pl_8_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_8_u<>), "union _rx_ptp_tam_adj_pl_8_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_9_s<>), "struct _rx_ptp_tam_lo_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_9_u<>), "union _rx_ptp_tam_lo_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_9_s<>), "struct _rx_ptp_tam_med_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_9_u<>), "union _rx_ptp_tam_med_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_9_s<>), "struct _rx_ptp_tam_hi_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_9_u<>), "union _rx_ptp_tam_hi_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_9_s<>), "struct _rx_ptp_tam_adj_pl_9_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_9_u<>), "union _rx_ptp_tam_adj_pl_9_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_10_s<>), "struct _rx_ptp_tam_lo_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_10_u<>), "union _rx_ptp_tam_lo_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_10_s<>), "struct _rx_ptp_tam_med_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_10_u<>), "union _rx_ptp_tam_med_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_10_s<>), "struct _rx_ptp_tam_hi_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_10_u<>), "union _rx_ptp_tam_hi_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_10_s<>), "struct _rx_ptp_tam_adj_pl_10_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_10_u<>), "union _rx_ptp_tam_adj_pl_10_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_11_s<>), "struct _rx_ptp_tam_lo_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_11_u<>), "union _rx_ptp_tam_lo_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_11_s<>), "struct _rx_ptp_tam_med_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_11_u<>), "union _rx_ptp_tam_med_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_11_s<>), "struct _rx_ptp_tam_hi_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_11_u<>), "union _rx_ptp_tam_hi_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_11_s<>), "struct _rx_ptp_tam_adj_pl_11_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_11_u<>), "union _rx_ptp_tam_adj_pl_11_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_12_s<>), "struct _rx_ptp_tam_lo_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_12_u<>), "union _rx_ptp_tam_lo_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_12_s<>), "struct _rx_ptp_tam_med_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_12_u<>), "union _rx_ptp_tam_med_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_12_s<>), "struct _rx_ptp_tam_hi_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_12_u<>), "union _rx_ptp_tam_hi_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_12_s<>), "struct _rx_ptp_tam_adj_pl_12_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_12_u<>), "union _rx_ptp_tam_adj_pl_12_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_13_s<>), "struct _rx_ptp_tam_lo_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_13_u<>), "union _rx_ptp_tam_lo_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_13_s<>), "struct _rx_ptp_tam_med_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_13_u<>), "union _rx_ptp_tam_med_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_13_s<>), "struct _rx_ptp_tam_hi_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_13_u<>), "union _rx_ptp_tam_hi_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_13_s<>), "struct _rx_ptp_tam_adj_pl_13_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_13_u<>), "union _rx_ptp_tam_adj_pl_13_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_14_s<>), "struct _rx_ptp_tam_lo_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_14_u<>), "union _rx_ptp_tam_lo_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_14_s<>), "struct _rx_ptp_tam_med_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_14_u<>), "union _rx_ptp_tam_med_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_14_s<>), "struct _rx_ptp_tam_hi_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_14_u<>), "union _rx_ptp_tam_hi_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_14_s<>), "struct _rx_ptp_tam_adj_pl_14_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_14_u<>), "union _rx_ptp_tam_adj_pl_14_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_15_s<>), "struct _rx_ptp_tam_lo_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_lo_pl_15_u<>), "union _rx_ptp_tam_lo_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_15_s<>), "struct _rx_ptp_tam_med_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_med_pl_15_u<>), "union _rx_ptp_tam_med_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_15_s<>), "struct _rx_ptp_tam_hi_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_hi_pl_15_u<>), "union _rx_ptp_tam_hi_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_15_s<>), "struct _rx_ptp_tam_adj_pl_15_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ptp_tam_adj_pl_15_u<>), "union _rx_ptp_tam_adj_pl_15_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ts_ss_lo_s<>), "struct _rx_ts_ss_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ts_ss_lo_u<>), "union _rx_ts_ss_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ts_ss_mid_s<>), "struct _rx_ts_ss_mid_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ts_ss_mid_u<>), "union _rx_ts_ss_mid_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_ts_ss_hi_s<>), "struct _rx_ts_ss_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_ts_ss_hi_u<>), "union _rx_ts_ss_hi_u does not have the correct size.");
        static_assert(3192 == sizeof(ftile_ethernet_ehip_regs<>), "struct ftile_ethernet_ehip_regs does not have the correct size.");
        static_assert(3192 == sizeof(ftile_ethernet_ehip_fields<>), "struct ftile_ethernet_ehip_fields does not have the correct size.");
        static_assert(3192 == sizeof(ftile_ethernet_ehip_u<>), "union ftile_ethernet_ehip_u does not have the correct size.");
        static_assert(3192 == sizeof(ftile_ethernet_ehip_reg_t), "type ftile_ethernet_ehip_reg_t does not have the correct size.");
        static_assert(3192 == sizeof(ftile_ethernet_ehip_mem_t), "type ftile_ethernet_ehip_mem_t does not have the correct size.");

    /* trailer stuff */
    }
#endif
