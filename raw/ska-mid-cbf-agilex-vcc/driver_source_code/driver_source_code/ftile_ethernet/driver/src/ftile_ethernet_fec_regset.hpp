
#ifndef __FTILE_ETHERNET_FEC_REGSET__H__
    #define __FTILE_ETHERNET_FEC_REGSET__H__
    #include <cstdint>
    #include <assert.h>
    #include <iostream>
    #include "register_types.hpp"
    using fpga_driver::reg_t;
    namespace ftile_ethernet_fec_regset {

        const std::string mnemonic = "ftile_ethernet_fec";
        const std::string version = "24.2.0";

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_xcvrif_reg_12_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> lpbk_en; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> force_signal_ok; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> signal_ok_sel; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_xcvrif_reg_12_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_xcvrif_reg_12_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_rsfec_top_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> fec_data_mux; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> fec_lpbk_en; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> fec_bypass_en; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_rsfec_top_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_rsfec_top_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_rsfec_lane_cfg0_s
        {
            union {
                reg_t<std::uint32_t,is_reg,8,8> indic_byp; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,9,9> corr_byp; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_rsfec_lane_cfg0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_rsfec_lane_cfg0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_xcvrif_stat_0_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_fifo_pfull_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_fifo_full_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_fifo_pempty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_fifo_empty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> tx_fifo_underrun_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> tx_fifo_overflow_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> tx_gb_restarted_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,7> tx_gb_reserved_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_xcvrif_stat_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_xcvrif_stat_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_xcvrif_stat_hold_1_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_fifo_pfull_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> tx_fifo_full_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> tx_fifo_pempty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> tx_fifo_empty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> tx_fifo_underrun_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> tx_fifo_overflow_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> tx_gb_restarted_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,7,7> tx_gb_reserved_1; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_xcvrif_stat_hold_1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_xcvrif_stat_hold_1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_xcvrif_stat_3_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_fifo_pfull_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_fifo_full_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> rx_fifo_pempty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_fifo_empty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> rx_fifo_underrun_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> rx_fifo_overflow_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> rx_gb_restarted_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,7> rx_gb_reserved_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_xcvrif_stat_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_xcvrif_stat_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_xcvrif_stat_hold_4_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_fifo_pfull_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_fifo_full_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> rx_fifo_pempty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> rx_fifo_empty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> rx_fifo_underrun_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> rx_fifo_overflow_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> rx_gb_restarted_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,7,7> rx_gb_reserved_1; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_xcvrif_stat_hold_4_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_xcvrif_stat_hold_4_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _e25g_s0_rsfec_err_inj_tx_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> rate; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,8> pat; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _e25g_s0_rsfec_err_inj_tx_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _e25g_s0_rsfec_err_inj_tx_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_lane_tx_stat_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> hdr_inv_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> blk_inv_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> resync_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> pace_inv_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,4> am_sf_tx_in_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_lane_tx_stat_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_lane_tx_stat_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_lane_tx_hold_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> hdr_inv_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> blk_inv_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> resync_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> pace_inv_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,4> am_sf_tx_in_1; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_lane_tx_hold_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_lane_tx_hold_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_lane_rx_stat_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> sf_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> not_locked_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> fec_3bad_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> am_5bad_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> hi_ser_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> corr_cw_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> uncorr_cw_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> corr_cw_bins_lo_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> corr_cw_bins_hi_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,24> degr_ser_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,27,25> am_sf_rx_in_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_lane_rx_stat_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_lane_rx_stat_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_lane_rx_hold_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> sf_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> not_locked_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> fec_3bad_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> am_5bad_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> hi_ser_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> corr_cw_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> uncorr_cw_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,8> corr_cw_bins_lo_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,23,16> corr_cw_bins_hi_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,24,24> degr_ser_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,27,25> am_sf_rx_in_1; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_lane_rx_hold_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_lane_rx_hold_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_aggr_rx_stat_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> not_align_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> not_deskew_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,2> last_lane; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_aggr_rx_stat_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_aggr_rx_stat_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_aggr_rx_hold_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> not_align_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> not_deskew_1; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_aggr_rx_hold_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_aggr_rx_hold_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_ln_mapping_rx_s
        {
            reg_t<std::uint32_t,is_reg,3,0> fec_lane; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_ln_mapping_rx_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_ln_mapping_rx_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_ln_skew_rx_s
        {
            reg_t<std::uint32_t,is_reg,7,0> skew; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_ln_skew_rx_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_ln_skew_rx_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_cw_pos_rx_s
        {
            reg_t<std::uint32_t,is_reg,14,0> num; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_cw_pos_rx_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_cw_pos_rx_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_core_ecc_hold_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> sbe; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,8> mbe; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_core_ecc_hold_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_core_ecc_hold_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_err_val_tx_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> inj0s; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> inj1s; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_err_val_tx_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_err_val_tx_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_cw_cnt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_cw_cnt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_cw_cnt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_cw_cnt_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_cw_cnt_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_cw_cnt_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_uncorr_cw_cnt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_uncorr_cw_cnt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_uncorr_cw_cnt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_uncorr_cw_cnt_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_uncorr_cw_cnt_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_uncorr_cw_cnt_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_syms_cnt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_syms_cnt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_syms_cnt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_syms_cnt_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_syms_cnt_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_syms_cnt_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_0s_cnt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_6; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_0s_cnt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_0s_cnt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_0s_cnt_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_7; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_0s_cnt_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_0s_cnt_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_1s_cnt_lo_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_8; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_1s_cnt_lo_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_1s_cnt_lo_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_1s_cnt_hi_s
        {
            reg_t<std::uint32_t,is_reg,31,0> stat_9; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rsfec_corr_1s_cnt_hi_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_1s_cnt_hi_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_cwbin_cnt_0_3_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin0_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin1_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin2_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin3_stat; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_corr_cwbin_cnt_0_3_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_cwbin_cnt_0_3_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_cwbin_cnt_4_7_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin4_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin5_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin6_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin7_stat; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_corr_cwbin_cnt_4_7_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_cwbin_cnt_4_7_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_cwbin_cnt_8_11_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin8_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin9_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin10_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin11_stat; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_corr_cwbin_cnt_8_11_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_cwbin_cnt_8_11_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_corr_cwbin_cnt_12_15_s
        {
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin12_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin13_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin14_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin15_stat; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_corr_cwbin_cnt_12_15_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_corr_cwbin_cnt_12_15_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rsfec_debug_cfg_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> shadow_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> shadow_clear; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rsfec_debug_cfg_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rsfec_debug_cfg_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_ethernet_fec_regs
        {
            reg_t<std::uint8_t,is_reg> reserved1[112];
            _e25g_s0_xcvrif_reg_12_u<is_reg> e25g_s0_xcvrif_reg_12;
            reg_t<std::uint8_t,is_reg> reserved3[76];
            _e25g_s0_rsfec_top_u<is_reg> e25g_s0_rsfec_top;
            reg_t<std::uint8_t,is_reg> reserved5[4];
            _e25g_s0_rsfec_lane_cfg0_u<is_reg> e25g_s0_rsfec_lane_cfg0;
            reg_t<std::uint8_t,is_reg> reserved7[68];
            _e25g_s0_xcvrif_stat_0_u<is_reg> e25g_s0_xcvrif_stat_0;
            _e25g_s0_xcvrif_stat_hold_1_u<is_reg> e25g_s0_xcvrif_stat_hold_1;
            reg_t<std::uint8_t,is_reg> reserved9[8];
            _e25g_s0_xcvrif_stat_3_u<is_reg> e25g_s0_xcvrif_stat_3;
            _e25g_s0_xcvrif_stat_hold_4_u<is_reg> e25g_s0_xcvrif_stat_hold_4;
            reg_t<std::uint8_t,is_reg> reserved11[16];
            _e25g_s0_rsfec_err_inj_tx_u<is_reg> e25g_s0_rsfec_err_inj_tx;
            reg_t<std::uint8_t,is_reg> reserved13[12];
            _rsfec_lane_tx_stat_u<is_reg> rsfec_lane_tx_stat;
            _rsfec_lane_tx_hold_u<is_reg> rsfec_lane_tx_hold;
            reg_t<std::uint8_t,is_reg> reserved15[4];
            _rsfec_lane_rx_stat_u<is_reg> rsfec_lane_rx_stat;
            _rsfec_lane_rx_hold_u<is_reg> rsfec_lane_rx_hold;
            reg_t<std::uint8_t,is_reg> reserved17[4];
            _rsfec_aggr_rx_stat_u<is_reg> rsfec_aggr_rx_stat;
            _rsfec_aggr_rx_hold_u<is_reg> rsfec_aggr_rx_hold;
            reg_t<std::uint8_t,is_reg> reserved19[4];
            _rsfec_ln_mapping_rx_u<is_reg> rsfec_ln_mapping_rx;
            _rsfec_ln_skew_rx_u<is_reg> rsfec_ln_skew_rx;
            _rsfec_cw_pos_rx_u<is_reg> rsfec_cw_pos_rx;
            _rsfec_core_ecc_hold_u<is_reg> rsfec_core_ecc_hold;
            _rsfec_err_val_tx_u<is_reg> rsfec_err_val_tx;
            reg_t<std::uint8_t,is_reg> reserved21[4];
            _rsfec_corr_cw_cnt_lo_u<is_reg> rsfec_corr_cw_cnt_lo;
            _rsfec_corr_cw_cnt_hi_u<is_reg> rsfec_corr_cw_cnt_hi;
            _rsfec_uncorr_cw_cnt_lo_u<is_reg> rsfec_uncorr_cw_cnt_lo;
            _rsfec_uncorr_cw_cnt_hi_u<is_reg> rsfec_uncorr_cw_cnt_hi;
            _rsfec_corr_syms_cnt_lo_u<is_reg> rsfec_corr_syms_cnt_lo;
            _rsfec_corr_syms_cnt_hi_u<is_reg> rsfec_corr_syms_cnt_hi;
            _rsfec_corr_0s_cnt_lo_u<is_reg> rsfec_corr_0s_cnt_lo;
            _rsfec_corr_0s_cnt_hi_u<is_reg> rsfec_corr_0s_cnt_hi;
            _rsfec_corr_1s_cnt_lo_u<is_reg> rsfec_corr_1s_cnt_lo;
            _rsfec_corr_1s_cnt_hi_u<is_reg> rsfec_corr_1s_cnt_hi;
            reg_t<std::uint8_t,is_reg> reserved23[36];
            _rsfec_corr_cwbin_cnt_0_3_u<is_reg> rsfec_corr_cwbin_cnt_0_3;
            _rsfec_corr_cwbin_cnt_4_7_u<is_reg> rsfec_corr_cwbin_cnt_4_7;
            _rsfec_corr_cwbin_cnt_8_11_u<is_reg> rsfec_corr_cwbin_cnt_8_11;
            _rsfec_corr_cwbin_cnt_12_15_u<is_reg> rsfec_corr_cwbin_cnt_12_15;
            _rsfec_debug_cfg_u<is_reg> rsfec_debug_cfg;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_ethernet_fec_fields
        {
            reg_t<std::uint8_t,is_reg> reserved25[112];
            union {
                reg_t<std::uint32_t,is_reg,0,0> lpbk_en; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> force_signal_ok; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> signal_ok_sel; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved27[76];
            union {
                reg_t<std::uint32_t,is_reg,0,0> fec_data_mux; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> fec_lpbk_en; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> fec_bypass_en; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved29[4];
            union {
                reg_t<std::uint32_t,is_reg,8,8> indic_byp; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,9,9> corr_byp; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved31[68];
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_fifo_pfull_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_fifo_full_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_fifo_pempty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_fifo_empty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> tx_fifo_underrun_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> tx_fifo_overflow_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> tx_gb_restarted_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,7> tx_gb_reserved_0; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_fifo_pfull_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> tx_fifo_full_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> tx_fifo_pempty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> tx_fifo_empty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> tx_fifo_underrun_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> tx_fifo_overflow_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> tx_gb_restarted_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,7,7> tx_gb_reserved_1; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved33[8];
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_fifo_pfull_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_fifo_full_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> rx_fifo_pempty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_fifo_empty_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> rx_fifo_underrun_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> rx_fifo_overflow_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> rx_gb_restarted_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,7> rx_gb_reserved_0; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_fifo_pfull_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_fifo_full_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> rx_fifo_pempty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> rx_fifo_empty_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> rx_fifo_underrun_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> rx_fifo_overflow_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> rx_gb_restarted_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,7,7> rx_gb_reserved_1; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved35[16];
            union {
                reg_t<std::uint32_t,is_reg,7,0> rate; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,8> pat; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved37[12];
            union {
                reg_t<std::uint32_t,is_reg,0,0> hdr_inv_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> blk_inv_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> resync_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> pace_inv_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,4> am_sf_tx_in_0; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> hdr_inv_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> blk_inv_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> resync_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> pace_inv_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,4> am_sf_tx_in_1; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved39[4];
            union {
                reg_t<std::uint32_t,is_reg,0,0> sf_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> not_locked_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> fec_3bad_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> am_5bad_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> hi_ser_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> corr_cw_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> uncorr_cw_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> corr_cw_bins_lo_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> corr_cw_bins_hi_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,24> degr_ser_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,27,25> am_sf_rx_in_0; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> sf_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> not_locked_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> fec_3bad_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,3,3> am_5bad_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> hi_ser_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,5> corr_cw_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,6,6> uncorr_cw_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,8> corr_cw_bins_lo_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,23,16> corr_cw_bins_hi_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,24,24> degr_ser_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,27,25> am_sf_rx_in_1; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved41[4];
            union {
                reg_t<std::uint32_t,is_reg,0,0> not_align_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> not_deskew_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,2> last_lane; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> not_align_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> not_deskew_1; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved43[4];
            reg_t<std::uint32_t,is_reg,3,0> fec_lane; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,7,0> skew; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,14,0> num; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,7,0> sbe; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,15,8> mbe; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,7,0> inj0s; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> inj1s; /*!< [ro] */
            };
            reg_t<std::uint8_t,is_reg> reserved45[4];
            reg_t<std::uint32_t,is_reg,31,0> stat_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_2; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_3; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_5; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_6; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_7; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_8; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> stat_9; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved47[36];
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin0_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin1_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin2_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin3_stat; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin4_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin5_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin6_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin7_stat; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin8_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin9_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin10_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin11_stat; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,7,0> cwbin12_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,15,8> cwbin13_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> cwbin14_stat; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> cwbin15_stat; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> shadow_req; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,4,4> shadow_clear; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union ftile_ethernet_fec_u
        {
            ftile_ethernet_fec_regs<is_reg> reg;
            ftile_ethernet_fec_fields<is_reg> fld;
        };

        typedef ftile_ethernet_fec_fields<true>  ftile_ethernet_fec_reg_t;
        typedef ftile_ethernet_fec_fields<false> ftile_ethernet_fec_mem_t;




        static_assert(4 == sizeof(_e25g_s0_xcvrif_reg_12_s<>), "struct _e25g_s0_xcvrif_reg_12_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_reg_12_u<>), "union _e25g_s0_xcvrif_reg_12_u does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_rsfec_top_s<>), "struct _e25g_s0_rsfec_top_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_rsfec_top_u<>), "union _e25g_s0_rsfec_top_u does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_rsfec_lane_cfg0_s<>), "struct _e25g_s0_rsfec_lane_cfg0_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_rsfec_lane_cfg0_u<>), "union _e25g_s0_rsfec_lane_cfg0_u does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_0_s<>), "struct _e25g_s0_xcvrif_stat_0_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_0_u<>), "union _e25g_s0_xcvrif_stat_0_u does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_hold_1_s<>), "struct _e25g_s0_xcvrif_stat_hold_1_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_hold_1_u<>), "union _e25g_s0_xcvrif_stat_hold_1_u does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_3_s<>), "struct _e25g_s0_xcvrif_stat_3_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_3_u<>), "union _e25g_s0_xcvrif_stat_3_u does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_hold_4_s<>), "struct _e25g_s0_xcvrif_stat_hold_4_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_xcvrif_stat_hold_4_u<>), "union _e25g_s0_xcvrif_stat_hold_4_u does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_rsfec_err_inj_tx_s<>), "struct _e25g_s0_rsfec_err_inj_tx_s does not have the correct size.");
        static_assert(4 == sizeof(_e25g_s0_rsfec_err_inj_tx_u<>), "union _e25g_s0_rsfec_err_inj_tx_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_tx_stat_s<>), "struct _rsfec_lane_tx_stat_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_tx_stat_u<>), "union _rsfec_lane_tx_stat_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_tx_hold_s<>), "struct _rsfec_lane_tx_hold_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_tx_hold_u<>), "union _rsfec_lane_tx_hold_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_rx_stat_s<>), "struct _rsfec_lane_rx_stat_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_rx_stat_u<>), "union _rsfec_lane_rx_stat_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_rx_hold_s<>), "struct _rsfec_lane_rx_hold_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_lane_rx_hold_u<>), "union _rsfec_lane_rx_hold_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_aggr_rx_stat_s<>), "struct _rsfec_aggr_rx_stat_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_aggr_rx_stat_u<>), "union _rsfec_aggr_rx_stat_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_aggr_rx_hold_s<>), "struct _rsfec_aggr_rx_hold_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_aggr_rx_hold_u<>), "union _rsfec_aggr_rx_hold_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_ln_mapping_rx_s<>), "struct _rsfec_ln_mapping_rx_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_ln_mapping_rx_u<>), "union _rsfec_ln_mapping_rx_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_ln_skew_rx_s<>), "struct _rsfec_ln_skew_rx_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_ln_skew_rx_u<>), "union _rsfec_ln_skew_rx_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_cw_pos_rx_s<>), "struct _rsfec_cw_pos_rx_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_cw_pos_rx_u<>), "union _rsfec_cw_pos_rx_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_core_ecc_hold_s<>), "struct _rsfec_core_ecc_hold_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_core_ecc_hold_u<>), "union _rsfec_core_ecc_hold_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_err_val_tx_s<>), "struct _rsfec_err_val_tx_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_err_val_tx_u<>), "union _rsfec_err_val_tx_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cw_cnt_lo_s<>), "struct _rsfec_corr_cw_cnt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cw_cnt_lo_u<>), "union _rsfec_corr_cw_cnt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cw_cnt_hi_s<>), "struct _rsfec_corr_cw_cnt_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cw_cnt_hi_u<>), "union _rsfec_corr_cw_cnt_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_uncorr_cw_cnt_lo_s<>), "struct _rsfec_uncorr_cw_cnt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_uncorr_cw_cnt_lo_u<>), "union _rsfec_uncorr_cw_cnt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_uncorr_cw_cnt_hi_s<>), "struct _rsfec_uncorr_cw_cnt_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_uncorr_cw_cnt_hi_u<>), "union _rsfec_uncorr_cw_cnt_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_syms_cnt_lo_s<>), "struct _rsfec_corr_syms_cnt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_syms_cnt_lo_u<>), "union _rsfec_corr_syms_cnt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_syms_cnt_hi_s<>), "struct _rsfec_corr_syms_cnt_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_syms_cnt_hi_u<>), "union _rsfec_corr_syms_cnt_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_0s_cnt_lo_s<>), "struct _rsfec_corr_0s_cnt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_0s_cnt_lo_u<>), "union _rsfec_corr_0s_cnt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_0s_cnt_hi_s<>), "struct _rsfec_corr_0s_cnt_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_0s_cnt_hi_u<>), "union _rsfec_corr_0s_cnt_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_1s_cnt_lo_s<>), "struct _rsfec_corr_1s_cnt_lo_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_1s_cnt_lo_u<>), "union _rsfec_corr_1s_cnt_lo_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_1s_cnt_hi_s<>), "struct _rsfec_corr_1s_cnt_hi_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_1s_cnt_hi_u<>), "union _rsfec_corr_1s_cnt_hi_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_0_3_s<>), "struct _rsfec_corr_cwbin_cnt_0_3_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_0_3_u<>), "union _rsfec_corr_cwbin_cnt_0_3_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_4_7_s<>), "struct _rsfec_corr_cwbin_cnt_4_7_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_4_7_u<>), "union _rsfec_corr_cwbin_cnt_4_7_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_8_11_s<>), "struct _rsfec_corr_cwbin_cnt_8_11_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_8_11_u<>), "union _rsfec_corr_cwbin_cnt_8_11_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_12_15_s<>), "struct _rsfec_corr_cwbin_cnt_12_15_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_corr_cwbin_cnt_12_15_u<>), "union _rsfec_corr_cwbin_cnt_12_15_u does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_debug_cfg_s<>), "struct _rsfec_debug_cfg_s does not have the correct size.");
        static_assert(4 == sizeof(_rsfec_debug_cfg_u<>), "union _rsfec_debug_cfg_u does not have the correct size.");
        static_assert(484 == sizeof(ftile_ethernet_fec_regs<>), "struct ftile_ethernet_fec_regs does not have the correct size.");
        static_assert(484 == sizeof(ftile_ethernet_fec_fields<>), "struct ftile_ethernet_fec_fields does not have the correct size.");
        static_assert(484 == sizeof(ftile_ethernet_fec_u<>), "union ftile_ethernet_fec_u does not have the correct size.");
        static_assert(484 == sizeof(ftile_ethernet_fec_reg_t), "type ftile_ethernet_fec_reg_t does not have the correct size.");
        static_assert(484 == sizeof(ftile_ethernet_fec_mem_t), "type ftile_ethernet_fec_mem_t does not have the correct size.");

    /* trailer stuff */
    }
#endif
