
#ifndef __FTILE_ETHERNET_BASE_REGSET__H__
    #define __FTILE_ETHERNET_BASE_REGSET__H__
    #include <cstdint>
    #include <assert.h>
    #include <iostream>
    #include "register_types.hpp"
    using fpga_driver::reg_t;
    namespace ftile_ethernet_base_regset {

        const std::string mnemonic = "ftile_ethernet_base";
        const std::string version = "24.2.0";

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _gui_option_s
        {
            union {
                reg_t<std::uint32_t,is_reg,1,0> device_name; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,2> tile_name; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,5> eth_rate; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,8,8> anlt_enable; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,9> modulation_type; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,10> rsfec_type; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,13,13> ptp_enable; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,16,14> flow_control_mode; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,17> client_intf; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,20,20> xcvr_type; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,21> num_lanes; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _gui_option_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _gui_option_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _qhip_scratch_s
        {
            reg_t<std::uint32_t,is_reg,31,0> scratch; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _qhip_scratch_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _qhip_scratch_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _eth_reset_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> eio_sys_rst; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> soft_tx_rst; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> soft_rx_rst; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,23,16> tx_clear_alarm; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,24> rx_clear_alarm; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _eth_reset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _eth_reset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _eth_reset_status_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rst_ack_n; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_rst_ack_n; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> rx_rst_ack_n; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,10,8> tx_lane_current_state; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,12> rx_lane_current_state; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> tx_alarm; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> rx_alarm; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _eth_reset_status_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _eth_reset_status_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _phy_tx_pll_locked_s
        {
            reg_t<std::uint32_t,is_reg,7,0> tx_pll_locked; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _phy_tx_pll_locked_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _phy_tx_pll_locked_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _phy_eiofreq_locked_s
        {
            reg_t<std::uint32_t,is_reg,7,0> eio_freq_lock; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _phy_eiofreq_locked_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _phy_eiofreq_locked_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pcs_status_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> dskew_status; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> dskew_chng_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_lanes_stable; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_pcs_ready; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> kr_mode; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> kr_fec_mode; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _pcs_status_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pcs_status_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _pcs_control_s
        {
            reg_t<std::uint32_t,is_reg,0,0> clr_dskew_chng; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _pcs_control_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _pcs_control_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _link_fault_status_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> lfault; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rfault; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _link_fault_status_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _link_fault_status_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _clk_tx_khz_s
        {
            reg_t<std::uint32_t,is_reg,31,0> clk_tx_khz; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _clk_tx_khz_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _clk_tx_khz_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _clk_rx_khz_s
        {
            reg_t<std::uint32_t,is_reg,31,0> clk_rx_khz; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _clk_rx_khz_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _clk_rx_khz_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _clk_pll_khz_s
        {
            reg_t<std::uint32_t,is_reg,31,0> clk_pll_khz; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _clk_pll_khz_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _clk_pll_khz_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _clk_tx_div_khz_s
        {
            reg_t<std::uint32_t,is_reg,31,0> clk_tx_div_khz; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _clk_tx_div_khz_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _clk_tx_div_khz_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _clk_rec_div64_khz_s
        {
            reg_t<std::uint32_t,is_reg,31,0> clk_rec_div64_khz; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _clk_rec_div64_khz_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _clk_rec_div64_khz_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _clk_rec_div_khz_s
        {
            reg_t<std::uint32_t,is_reg,31,0> clk_rec_div_khz; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _clk_rec_div_khz_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _clk_rec_div_khz_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rxmac_adapt_dropped_31_0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rxmac_adapt_dropped_31_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rxmac_adapt_dropped_31_0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rxmac_adapt_dropped_31_0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rxmac_adapt_dropped_63_32_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rxmac_adapt_dropped_63_32; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rxmac_adapt_dropped_63_32_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rxmac_adapt_dropped_63_32_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rxmac_adapt_dropped_control_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rxmac_adapt_dropped_clear; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rxmac_adapt_dropped_snapshot; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _rxmac_adapt_dropped_control_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rxmac_adapt_dropped_control_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_1L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_1l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_1L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_1l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_1L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_1l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_1L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_1l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_1L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_0; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_0; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_1L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_1l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_1L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_1l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_1L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_1L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_1L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_2L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_2l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_2L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_2l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_2L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_2l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_2L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_2l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_2L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_1; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_2L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_2l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_2L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_2l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_2L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_1; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_2L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_2L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_3L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_3l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_3L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_3l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_3L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_3l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_3L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_3l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_3L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_2; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_2; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_3L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_3l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_3L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_3l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_3L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_2; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_3L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_3L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_4L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_4l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_4L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_4l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_4L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_4l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_4L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_4l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_4L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_3; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_3; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_4L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_4l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_4L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_4l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_4L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_3; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_4L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_4L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_5L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_5l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_5L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_5l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_5L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_5l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_5L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_5l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_5L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_4; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_4; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_5L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_5l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_5L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_5l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_5L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_4; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_5L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_5L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_6L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_6l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_6L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_6l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_6L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_6l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_6L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_6l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_6L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_5; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_5; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_6L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_6l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_6L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_6l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_6L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_5; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_6L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_6L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_7L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_7l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_7L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_7l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_7L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_7l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_7L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_7l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_7L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_6; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_6; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_7L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_7l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_7L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_7l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_7L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_6; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_7L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_7L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_sync_counter_8L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_8l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_sync_counter_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_sync_counter_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_async_counter_8L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_8l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_async_counter_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_async_counter_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_sync_counter_8L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_8l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_sync_counter_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_sync_counter_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_async_counter_8L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_8l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_async_counter_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_async_counter_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_cfg_8L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_7; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_7; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _dl_cfg_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_cfg_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _tx_dl_delay_8L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_8l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _tx_dl_delay_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _tx_dl_delay_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _rx_dl_delay_8L_s
        {
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_8l; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _rx_dl_delay_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _rx_dl_delay_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _dl_status_8L_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_7; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _dl_status_8L_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _dl_status_8L_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin_control_register_s
        {
            reg_t<std::uint32_t,is_reg,0,0> cwbin_control_register; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _cwbin_control_register_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin_control_register_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin0_A_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin0_a; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin0_A_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin0_A_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin1_A_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin1_a; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin1_A_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin1_A_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin2_A_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin2_a; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin2_A_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin2_A_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin3_A_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin3_a; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin3_A_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin3_A_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin0_B_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin0_b; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin0_B_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin0_B_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin1_B_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin1_b; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin1_B_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin1_B_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin2_B_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin2_b; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin2_B_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin2_B_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _cwbin3_B_s
        {
            reg_t<std::uint32_t,is_reg,31,0> cwbin3_b; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _cwbin3_B_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _cwbin3_B_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_tam_adjust_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adjust_0; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _ptp_tx_tam_adjust_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_tam_adjust_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_tam_adjust_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_adjust_1; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _ptp_rx_tam_adjust_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_tam_adjust_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_ref_lane_s
        {
            union {
                reg_t<std::uint32_t,is_reg,2,0> tx_ref_lane; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,3> rx_ref_lane; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _ptp_ref_lane_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_ref_lane_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_dr_cfg_s
        {
            reg_t<std::uint32_t,is_reg,0,0> tx_ehip_preamble_passthrough; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _ptp_dr_cfg_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_dr_cfg_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_user_cfg_status_s
        {
            reg_t<std::uint32_t,is_reg,0,0> tx_user_cfg_done; /*!< [rw] */
        };

        template<bool is_reg=false>
        union _ptp_tx_user_cfg_status_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_user_cfg_status_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_user_cfg_status_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_user_cfg_done; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_fec_cw_pos_cfg_done; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _ptp_rx_user_cfg_status_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_user_cfg_status_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_uim_tam_snapshot_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_tam_snapshot; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_tam_snapshot; /*!< [rw] */
            };
        };

        template<bool is_reg=false>
        union _ptp_uim_tam_snapshot_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_uim_tam_snapshot_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_uim_tam_info0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_31_0_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_uim_tam_info0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_uim_tam_info0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_uim_tam_info1_s
        {
            union {
                reg_t<std::uint32_t,is_reg,15,0> tam_47_32_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,16> tam_cnt_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> tam_valid_0; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_tx_uim_tam_info1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_uim_tam_info1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_uim_tam_info0_s
        {
            reg_t<std::uint32_t,is_reg,31,0> tam_31_0_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_uim_tam_info0_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_uim_tam_info0_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_uim_tam_info1_s
        {
            union {
                reg_t<std::uint32_t,is_reg,15,0> tam_47_32_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,16> tam_cnt_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> tam_valid_1; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_rx_uim_tam_info1_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_uim_tam_info1_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_status_s
        {
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_ptp_offset_data_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_ptp_offset_data_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_ptp_ready; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_ptp_ready; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_status_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_status_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_status2_s
        {
            union {
                reg_t<std::uint32_t,is_reg,1,1> tx_calc_data_time_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_calc_data_wiredelay_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_calc_data_offset_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> rx_calc_data_time_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> rx_calc_data_wiredelay_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> rx_vl_offset_data_ready; /*!< [ro] */
            };
        };

        template<bool is_reg=false>
        union _ptp_status2_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_status2_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane_calc_data_constdelay_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_constdelay_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane_calc_data_constdelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane_calc_data_constdelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane_calc_data_constdelay_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_constdelay_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane_calc_data_constdelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane_calc_data_constdelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane0_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane0_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane0_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane0_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane0_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane0_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane0_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane0_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane0_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane0_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane0_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane0_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane0_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_0; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane0_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane0_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane0_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_1; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane0_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane0_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane1_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane1_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane1_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane1_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane1_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane1_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane1_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane1_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane1_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane1_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane1_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane1_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane1_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_2; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane1_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane1_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane1_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_3; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane1_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane1_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane2_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane2_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane2_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane2_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane2_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane2_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane2_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane2_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane2_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane2_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane2_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane2_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane2_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_4; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane2_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane2_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane2_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_5; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane2_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane2_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane3_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_6; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane3_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane3_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane3_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_7; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane3_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane3_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane3_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_6; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane3_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane3_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane3_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_7; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane3_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane3_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane3_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_6; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane3_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane3_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane3_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_7; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane3_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane3_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane4_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_8; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane4_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane4_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane4_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_9; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane4_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane4_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane4_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_8; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane4_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane4_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane4_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_9; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane4_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane4_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane4_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_8; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane4_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane4_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane4_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_9; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane4_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane4_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane5_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_10; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane5_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane5_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane5_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_11; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane5_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane5_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane5_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_10; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane5_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane5_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane5_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_11; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane5_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane5_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane5_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_10; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane5_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane5_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane5_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_11; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane5_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane5_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane6_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_12; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane6_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane6_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane6_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_13; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane6_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane6_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane6_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_12; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane6_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane6_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane6_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_13; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane6_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane6_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane6_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_12; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane6_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane6_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane6_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_13; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane6_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane6_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane7_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_14; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane7_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane7_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane7_calc_data_offset_s
        {
            reg_t<std::uint32_t,is_reg,31,0> data_offset_15; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane7_calc_data_offset_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane7_calc_data_offset_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane7_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_14; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane7_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane7_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane7_calc_data_time_s
        {
            reg_t<std::uint32_t,is_reg,27,0> data_time_15; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane7_calc_data_time_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane7_calc_data_time_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_tx_lane7_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_14; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_tx_lane7_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_tx_lane7_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) _ptp_rx_lane7_calc_data_wiredelay_s
        {
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_15; /*!< [ro] */
        };

        template<bool is_reg=false>
        union _ptp_rx_lane7_calc_data_wiredelay_u
        {
            reg_t<std::uint32_t,is_reg> reg;
            _ptp_rx_lane7_calc_data_wiredelay_s<is_reg> fld;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_ethernet_base_regs
        {
            reg_t<std::uint8_t,is_reg> reserved1[256];
            _gui_option_u<is_reg> gui_option;
            _qhip_scratch_u<is_reg> qhip_scratch;
            _eth_reset_u<is_reg> eth_reset;
            _eth_reset_status_u<is_reg> eth_reset_status;
            _phy_tx_pll_locked_u<is_reg> phy_tx_pll_locked;
            _phy_eiofreq_locked_u<is_reg> phy_eiofreq_locked;
            _pcs_status_u<is_reg> pcs_status;
            _pcs_control_u<is_reg> pcs_control;
            _link_fault_status_u<is_reg> link_fault_status;
            reg_t<std::uint8_t,is_reg> reserved3[4];
            _clk_tx_khz_u<is_reg> clk_tx_khz;
            _clk_rx_khz_u<is_reg> clk_rx_khz;
            _clk_pll_khz_u<is_reg> clk_pll_khz;
            _clk_tx_div_khz_u<is_reg> clk_tx_div_khz;
            _clk_rec_div64_khz_u<is_reg> clk_rec_div64_khz;
            _clk_rec_div_khz_u<is_reg> clk_rec_div_khz;
            _rxmac_adapt_dropped_31_0_u<is_reg> rxmac_adapt_dropped_31_0;
            _rxmac_adapt_dropped_63_32_u<is_reg> rxmac_adapt_dropped_63_32;
            _rxmac_adapt_dropped_control_u<is_reg> rxmac_adapt_dropped_control;
            reg_t<std::uint8_t,is_reg> reserved5[436];
            _tx_sync_counter_1L_u<is_reg> tx_sync_counter_1L;
            _tx_async_counter_1L_u<is_reg> tx_async_counter_1L;
            _rx_sync_counter_1L_u<is_reg> rx_sync_counter_1L;
            _rx_async_counter_1L_u<is_reg> rx_async_counter_1L;
            _dl_cfg_1L_u<is_reg> dl_cfg_1L;
            _tx_dl_delay_1L_u<is_reg> tx_dl_delay_1L;
            _rx_dl_delay_1L_u<is_reg> rx_dl_delay_1L;
            _dl_status_1L_u<is_reg> dl_status_1L;
            _tx_sync_counter_2L_u<is_reg> tx_sync_counter_2L;
            _tx_async_counter_2L_u<is_reg> tx_async_counter_2L;
            _rx_sync_counter_2L_u<is_reg> rx_sync_counter_2L;
            _rx_async_counter_2L_u<is_reg> rx_async_counter_2L;
            _dl_cfg_2L_u<is_reg> dl_cfg_2L;
            _tx_dl_delay_2L_u<is_reg> tx_dl_delay_2L;
            _rx_dl_delay_2L_u<is_reg> rx_dl_delay_2L;
            _dl_status_2L_u<is_reg> dl_status_2L;
            _tx_sync_counter_3L_u<is_reg> tx_sync_counter_3L;
            _tx_async_counter_3L_u<is_reg> tx_async_counter_3L;
            _rx_sync_counter_3L_u<is_reg> rx_sync_counter_3L;
            _rx_async_counter_3L_u<is_reg> rx_async_counter_3L;
            _dl_cfg_3L_u<is_reg> dl_cfg_3L;
            _tx_dl_delay_3L_u<is_reg> tx_dl_delay_3L;
            _rx_dl_delay_3L_u<is_reg> rx_dl_delay_3L;
            _dl_status_3L_u<is_reg> dl_status_3L;
            _tx_sync_counter_4L_u<is_reg> tx_sync_counter_4L;
            _tx_async_counter_4L_u<is_reg> tx_async_counter_4L;
            _rx_sync_counter_4L_u<is_reg> rx_sync_counter_4L;
            _rx_async_counter_4L_u<is_reg> rx_async_counter_4L;
            _dl_cfg_4L_u<is_reg> dl_cfg_4L;
            _tx_dl_delay_4L_u<is_reg> tx_dl_delay_4L;
            _rx_dl_delay_4L_u<is_reg> rx_dl_delay_4L;
            _dl_status_4L_u<is_reg> dl_status_4L;
            _tx_sync_counter_5L_u<is_reg> tx_sync_counter_5L;
            _tx_async_counter_5L_u<is_reg> tx_async_counter_5L;
            _rx_sync_counter_5L_u<is_reg> rx_sync_counter_5L;
            _rx_async_counter_5L_u<is_reg> rx_async_counter_5L;
            _dl_cfg_5L_u<is_reg> dl_cfg_5L;
            _tx_dl_delay_5L_u<is_reg> tx_dl_delay_5L;
            _rx_dl_delay_5L_u<is_reg> rx_dl_delay_5L;
            _dl_status_5L_u<is_reg> dl_status_5L;
            _tx_sync_counter_6L_u<is_reg> tx_sync_counter_6L;
            _tx_async_counter_6L_u<is_reg> tx_async_counter_6L;
            _rx_sync_counter_6L_u<is_reg> rx_sync_counter_6L;
            _rx_async_counter_6L_u<is_reg> rx_async_counter_6L;
            _dl_cfg_6L_u<is_reg> dl_cfg_6L;
            _tx_dl_delay_6L_u<is_reg> tx_dl_delay_6L;
            _rx_dl_delay_6L_u<is_reg> rx_dl_delay_6L;
            _dl_status_6L_u<is_reg> dl_status_6L;
            _tx_sync_counter_7L_u<is_reg> tx_sync_counter_7L;
            _tx_async_counter_7L_u<is_reg> tx_async_counter_7L;
            _rx_sync_counter_7L_u<is_reg> rx_sync_counter_7L;
            _rx_async_counter_7L_u<is_reg> rx_async_counter_7L;
            _dl_cfg_7L_u<is_reg> dl_cfg_7L;
            _tx_dl_delay_7L_u<is_reg> tx_dl_delay_7L;
            _rx_dl_delay_7L_u<is_reg> rx_dl_delay_7L;
            _dl_status_7L_u<is_reg> dl_status_7L;
            _tx_sync_counter_8L_u<is_reg> tx_sync_counter_8L;
            _tx_async_counter_8L_u<is_reg> tx_async_counter_8L;
            _rx_sync_counter_8L_u<is_reg> rx_sync_counter_8L;
            _rx_async_counter_8L_u<is_reg> rx_async_counter_8L;
            _dl_cfg_8L_u<is_reg> dl_cfg_8L;
            _tx_dl_delay_8L_u<is_reg> tx_dl_delay_8L;
            _rx_dl_delay_8L_u<is_reg> rx_dl_delay_8L;
            _dl_status_8L_u<is_reg> dl_status_8L;
            _cwbin_control_register_u<is_reg> cwbin_control_register;
            _cwbin0_A_u<is_reg> cwbin0_A;
            _cwbin1_A_u<is_reg> cwbin1_A;
            _cwbin2_A_u<is_reg> cwbin2_A;
            _cwbin3_A_u<is_reg> cwbin3_A;
            _cwbin0_B_u<is_reg> cwbin0_B;
            _cwbin1_B_u<is_reg> cwbin1_B;
            _cwbin2_B_u<is_reg> cwbin2_B;
            _cwbin3_B_u<is_reg> cwbin3_B;
            reg_t<std::uint8_t,is_reg> reserved7[988];
            _ptp_tx_tam_adjust_u<is_reg> ptp_tx_tam_adjust;
            _ptp_rx_tam_adjust_u<is_reg> ptp_rx_tam_adjust;
            reg_t<std::uint8_t,is_reg> reserved9[4];
            _ptp_ref_lane_u<is_reg> ptp_ref_lane;
            _ptp_dr_cfg_u<is_reg> ptp_dr_cfg;
            _ptp_tx_user_cfg_status_u<is_reg> ptp_tx_user_cfg_status;
            _ptp_rx_user_cfg_status_u<is_reg> ptp_rx_user_cfg_status;
            _ptp_uim_tam_snapshot_u<is_reg> ptp_uim_tam_snapshot;
            _ptp_tx_uim_tam_info0_u<is_reg> ptp_tx_uim_tam_info0;
            _ptp_tx_uim_tam_info1_u<is_reg> ptp_tx_uim_tam_info1;
            _ptp_rx_uim_tam_info0_u<is_reg> ptp_rx_uim_tam_info0;
            _ptp_rx_uim_tam_info1_u<is_reg> ptp_rx_uim_tam_info1;
            _ptp_status_u<is_reg> ptp_status;
            reg_t<std::uint8_t,is_reg> reserved11[12];
            _ptp_status2_u<is_reg> ptp_status2;
            reg_t<std::uint8_t,is_reg> reserved13[172];
            _ptp_tx_lane_calc_data_constdelay_u<is_reg> ptp_tx_lane_calc_data_constdelay;
            _ptp_rx_lane_calc_data_constdelay_u<is_reg> ptp_rx_lane_calc_data_constdelay;
            reg_t<std::uint8_t,is_reg> reserved15[8];
            _ptp_tx_lane0_calc_data_offset_u<is_reg> ptp_tx_lane0_calc_data_offset;
            _ptp_rx_lane0_calc_data_offset_u<is_reg> ptp_rx_lane0_calc_data_offset;
            _ptp_tx_lane0_calc_data_time_u<is_reg> ptp_tx_lane0_calc_data_time;
            _ptp_rx_lane0_calc_data_time_u<is_reg> ptp_rx_lane0_calc_data_time;
            _ptp_tx_lane0_calc_data_wiredelay_u<is_reg> ptp_tx_lane0_calc_data_wiredelay;
            _ptp_rx_lane0_calc_data_wiredelay_u<is_reg> ptp_rx_lane0_calc_data_wiredelay;
            reg_t<std::uint8_t,is_reg> reserved17[8];
            _ptp_tx_lane1_calc_data_offset_u<is_reg> ptp_tx_lane1_calc_data_offset;
            _ptp_rx_lane1_calc_data_offset_u<is_reg> ptp_rx_lane1_calc_data_offset;
            _ptp_tx_lane1_calc_data_time_u<is_reg> ptp_tx_lane1_calc_data_time;
            _ptp_rx_lane1_calc_data_time_u<is_reg> ptp_rx_lane1_calc_data_time;
            _ptp_tx_lane1_calc_data_wiredelay_u<is_reg> ptp_tx_lane1_calc_data_wiredelay;
            _ptp_rx_lane1_calc_data_wiredelay_u<is_reg> ptp_rx_lane1_calc_data_wiredelay;
            reg_t<std::uint8_t,is_reg> reserved19[8];
            _ptp_tx_lane2_calc_data_offset_u<is_reg> ptp_tx_lane2_calc_data_offset;
            _ptp_rx_lane2_calc_data_offset_u<is_reg> ptp_rx_lane2_calc_data_offset;
            _ptp_tx_lane2_calc_data_time_u<is_reg> ptp_tx_lane2_calc_data_time;
            _ptp_rx_lane2_calc_data_time_u<is_reg> ptp_rx_lane2_calc_data_time;
            _ptp_tx_lane2_calc_data_wiredelay_u<is_reg> ptp_tx_lane2_calc_data_wiredelay;
            _ptp_rx_lane2_calc_data_wiredelay_u<is_reg> ptp_rx_lane2_calc_data_wiredelay;
            reg_t<std::uint8_t,is_reg> reserved21[8];
            _ptp_tx_lane3_calc_data_offset_u<is_reg> ptp_tx_lane3_calc_data_offset;
            _ptp_rx_lane3_calc_data_offset_u<is_reg> ptp_rx_lane3_calc_data_offset;
            _ptp_tx_lane3_calc_data_time_u<is_reg> ptp_tx_lane3_calc_data_time;
            _ptp_rx_lane3_calc_data_time_u<is_reg> ptp_rx_lane3_calc_data_time;
            _ptp_tx_lane3_calc_data_wiredelay_u<is_reg> ptp_tx_lane3_calc_data_wiredelay;
            _ptp_rx_lane3_calc_data_wiredelay_u<is_reg> ptp_rx_lane3_calc_data_wiredelay;
            reg_t<std::uint8_t,is_reg> reserved23[8];
            _ptp_tx_lane4_calc_data_offset_u<is_reg> ptp_tx_lane4_calc_data_offset;
            _ptp_rx_lane4_calc_data_offset_u<is_reg> ptp_rx_lane4_calc_data_offset;
            _ptp_tx_lane4_calc_data_time_u<is_reg> ptp_tx_lane4_calc_data_time;
            _ptp_rx_lane4_calc_data_time_u<is_reg> ptp_rx_lane4_calc_data_time;
            _ptp_tx_lane4_calc_data_wiredelay_u<is_reg> ptp_tx_lane4_calc_data_wiredelay;
            _ptp_rx_lane4_calc_data_wiredelay_u<is_reg> ptp_rx_lane4_calc_data_wiredelay;
            reg_t<std::uint8_t,is_reg> reserved25[8];
            _ptp_tx_lane5_calc_data_offset_u<is_reg> ptp_tx_lane5_calc_data_offset;
            _ptp_rx_lane5_calc_data_offset_u<is_reg> ptp_rx_lane5_calc_data_offset;
            _ptp_tx_lane5_calc_data_time_u<is_reg> ptp_tx_lane5_calc_data_time;
            _ptp_rx_lane5_calc_data_time_u<is_reg> ptp_rx_lane5_calc_data_time;
            _ptp_tx_lane5_calc_data_wiredelay_u<is_reg> ptp_tx_lane5_calc_data_wiredelay;
            _ptp_rx_lane5_calc_data_wiredelay_u<is_reg> ptp_rx_lane5_calc_data_wiredelay;
            reg_t<std::uint8_t,is_reg> reserved27[8];
            _ptp_tx_lane6_calc_data_offset_u<is_reg> ptp_tx_lane6_calc_data_offset;
            _ptp_rx_lane6_calc_data_offset_u<is_reg> ptp_rx_lane6_calc_data_offset;
            _ptp_tx_lane6_calc_data_time_u<is_reg> ptp_tx_lane6_calc_data_time;
            _ptp_rx_lane6_calc_data_time_u<is_reg> ptp_rx_lane6_calc_data_time;
            _ptp_tx_lane6_calc_data_wiredelay_u<is_reg> ptp_tx_lane6_calc_data_wiredelay;
            _ptp_rx_lane6_calc_data_wiredelay_u<is_reg> ptp_rx_lane6_calc_data_wiredelay;
            reg_t<std::uint8_t,is_reg> reserved29[8];
            _ptp_tx_lane7_calc_data_offset_u<is_reg> ptp_tx_lane7_calc_data_offset;
            _ptp_rx_lane7_calc_data_offset_u<is_reg> ptp_rx_lane7_calc_data_offset;
            _ptp_tx_lane7_calc_data_time_u<is_reg> ptp_tx_lane7_calc_data_time;
            _ptp_rx_lane7_calc_data_time_u<is_reg> ptp_rx_lane7_calc_data_time;
            _ptp_tx_lane7_calc_data_wiredelay_u<is_reg> ptp_tx_lane7_calc_data_wiredelay;
            _ptp_rx_lane7_calc_data_wiredelay_u<is_reg> ptp_rx_lane7_calc_data_wiredelay;
        };

        template<bool is_reg=false>
        struct __attribute__((__packed__)) ftile_ethernet_base_fields
        {
            reg_t<std::uint8_t,is_reg> reserved31[256];
            union {
                reg_t<std::uint32_t,is_reg,1,0> device_name; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,2> tile_name; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,7,5> eth_rate; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,8,8> anlt_enable; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,9,9> modulation_type; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,12,10> rsfec_type; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,13,13> ptp_enable; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,16,14> flow_control_mode; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,19,17> client_intf; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,20,20> xcvr_type; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,24,21> num_lanes; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> scratch; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> eio_sys_rst; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> soft_tx_rst; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,2,2> soft_rx_rst; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,23,16> tx_clear_alarm; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,24> rx_clear_alarm; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> rst_ack_n; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_rst_ack_n; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> rx_rst_ack_n; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,10,8> tx_lane_current_state; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,14,12> rx_lane_current_state; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,23,16> tx_alarm; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,24> rx_alarm; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,7,0> tx_pll_locked; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,7,0> eio_freq_lock; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> dskew_status; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> dskew_chng_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_lanes_stable; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_pcs_ready; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> kr_mode; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> kr_fec_mode; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,0,0> clr_dskew_chng; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> lfault; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rfault; /*!< [ro] */
            };
            reg_t<std::uint8_t,is_reg> reserved33[4];
            reg_t<std::uint32_t,is_reg,31,0> clk_tx_khz; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> clk_rx_khz; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> clk_pll_khz; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> clk_tx_div_khz; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> clk_rec_div64_khz; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> clk_rec_div_khz; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rxmac_adapt_dropped_31_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rxmac_adapt_dropped_63_32; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rxmac_adapt_dropped_clear; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rxmac_adapt_dropped_snapshot; /*!< [rw] */
            };
            reg_t<std::uint8_t,is_reg> reserved35[436];
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_1l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_1l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_1l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_1l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_0; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_0; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_1l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_1l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_0; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_2l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_2l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_2l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_2l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_1; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_1; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_2l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_2l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_1; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_3l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_3l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_3l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_3l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_2; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_2; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_3l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_3l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_2; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_2; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_4l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_4l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_4l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_4l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_3; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_3; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_4l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_4l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_3; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_3; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_5l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_5l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_5l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_5l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_4; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_4; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_5l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_5l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_4; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_4; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_6l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_6l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_6l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_6l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_5; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_5; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_6l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_6l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_5; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_5; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_7l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_7l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_7l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_7l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_6; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_6; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_7l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_7l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_6; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_6; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_sync_counter_8l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> tx_async_counter_8l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_sync_counter_8l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_async_counter_8l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_measure_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> tx_measure_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,30> rx_dl_restart_7; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,31,31> tx_dl_restart_7; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tx_dl_delay_8l; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> rx_dl_delay_8l; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_async_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_sync_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_async_valid_7; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> tx_sync_valid_7; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,0,0> cwbin_control_register; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin0_a; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin1_a; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin2_a; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin3_a; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin0_b; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin1_b; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin2_b; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> cwbin3_b; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved37[988];
            reg_t<std::uint32_t,is_reg,31,0> tam_adjust_0; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,31,0> tam_adjust_1; /*!< [rw] */
            reg_t<std::uint8_t,is_reg> reserved39[4];
            union {
                reg_t<std::uint32_t,is_reg,2,0> tx_ref_lane; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,5,3> rx_ref_lane; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,0,0> tx_ehip_preamble_passthrough; /*!< [rw] */
            reg_t<std::uint32_t,is_reg,0,0> tx_user_cfg_done; /*!< [rw] */
            union {
                reg_t<std::uint32_t,is_reg,0,0> rx_user_cfg_done; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_fec_cw_pos_cfg_done; /*!< [rw] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_tam_snapshot; /*!< [rw] */
                reg_t<std::uint32_t,is_reg,1,1> rx_tam_snapshot; /*!< [rw] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tam_31_0_0; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,15,0> tam_47_32_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,16> tam_cnt_0; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> tam_valid_0; /*!< [ro] */
            };
            reg_t<std::uint32_t,is_reg,31,0> tam_31_0_1; /*!< [ro] */
            union {
                reg_t<std::uint32_t,is_reg,15,0> tam_47_32_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,30,16> tam_cnt_1; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,31,31> tam_valid_1; /*!< [ro] */
            };
            union {
                reg_t<std::uint32_t,is_reg,0,0> tx_ptp_offset_data_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,1,1> rx_ptp_offset_data_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_ptp_ready; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_ptp_ready; /*!< [ro] */
            };
            reg_t<std::uint8_t,is_reg> reserved41[12];
            union {
                reg_t<std::uint32_t,is_reg,1,1> tx_calc_data_time_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,2,2> tx_calc_data_wiredelay_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,3,3> rx_calc_data_offset_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,4,4> rx_calc_data_time_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,5,5> rx_calc_data_wiredelay_valid; /*!< [ro] */
                reg_t<std::uint32_t,is_reg,6,6> rx_vl_offset_data_ready; /*!< [ro] */
            };
            reg_t<std::uint8_t,is_reg> reserved43[172];
            reg_t<std::uint32_t,is_reg,31,0> data_constdelay_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_constdelay_1; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved45[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_1; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_0; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_1; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved47[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_2; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_3; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_2; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_3; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_2; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_3; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved49[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_5; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_5; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_4; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_5; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved51[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_6; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_7; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_6; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_7; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_6; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_7; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved53[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_8; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_9; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_8; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_9; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_8; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_9; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved55[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_10; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_11; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_10; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_11; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_10; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_11; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved57[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_12; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_13; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_12; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_13; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_12; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_13; /*!< [ro] */
            reg_t<std::uint8_t,is_reg> reserved59[8];
            reg_t<std::uint32_t,is_reg,31,0> data_offset_14; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,31,0> data_offset_15; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_14; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,27,0> data_time_15; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_14; /*!< [ro] */
            reg_t<std::uint32_t,is_reg,19,0> data_wiredelay_15; /*!< [ro] */
        };

        template<bool is_reg=false>
        union ftile_ethernet_base_u
        {
            ftile_ethernet_base_regs<is_reg> reg;
            ftile_ethernet_base_fields<is_reg> fld;
        };

        typedef ftile_ethernet_base_fields<true>  ftile_ethernet_base_reg_t;
        typedef ftile_ethernet_base_fields<false> ftile_ethernet_base_mem_t;




        static_assert(4 == sizeof(_gui_option_s<>), "struct _gui_option_s does not have the correct size.");
        static_assert(4 == sizeof(_gui_option_u<>), "union _gui_option_u does not have the correct size.");
        static_assert(4 == sizeof(_qhip_scratch_s<>), "struct _qhip_scratch_s does not have the correct size.");
        static_assert(4 == sizeof(_qhip_scratch_u<>), "union _qhip_scratch_u does not have the correct size.");
        static_assert(4 == sizeof(_eth_reset_s<>), "struct _eth_reset_s does not have the correct size.");
        static_assert(4 == sizeof(_eth_reset_u<>), "union _eth_reset_u does not have the correct size.");
        static_assert(4 == sizeof(_eth_reset_status_s<>), "struct _eth_reset_status_s does not have the correct size.");
        static_assert(4 == sizeof(_eth_reset_status_u<>), "union _eth_reset_status_u does not have the correct size.");
        static_assert(4 == sizeof(_phy_tx_pll_locked_s<>), "struct _phy_tx_pll_locked_s does not have the correct size.");
        static_assert(4 == sizeof(_phy_tx_pll_locked_u<>), "union _phy_tx_pll_locked_u does not have the correct size.");
        static_assert(4 == sizeof(_phy_eiofreq_locked_s<>), "struct _phy_eiofreq_locked_s does not have the correct size.");
        static_assert(4 == sizeof(_phy_eiofreq_locked_u<>), "union _phy_eiofreq_locked_u does not have the correct size.");
        static_assert(4 == sizeof(_pcs_status_s<>), "struct _pcs_status_s does not have the correct size.");
        static_assert(4 == sizeof(_pcs_status_u<>), "union _pcs_status_u does not have the correct size.");
        static_assert(4 == sizeof(_pcs_control_s<>), "struct _pcs_control_s does not have the correct size.");
        static_assert(4 == sizeof(_pcs_control_u<>), "union _pcs_control_u does not have the correct size.");
        static_assert(4 == sizeof(_link_fault_status_s<>), "struct _link_fault_status_s does not have the correct size.");
        static_assert(4 == sizeof(_link_fault_status_u<>), "union _link_fault_status_u does not have the correct size.");
        static_assert(4 == sizeof(_clk_tx_khz_s<>), "struct _clk_tx_khz_s does not have the correct size.");
        static_assert(4 == sizeof(_clk_tx_khz_u<>), "union _clk_tx_khz_u does not have the correct size.");
        static_assert(4 == sizeof(_clk_rx_khz_s<>), "struct _clk_rx_khz_s does not have the correct size.");
        static_assert(4 == sizeof(_clk_rx_khz_u<>), "union _clk_rx_khz_u does not have the correct size.");
        static_assert(4 == sizeof(_clk_pll_khz_s<>), "struct _clk_pll_khz_s does not have the correct size.");
        static_assert(4 == sizeof(_clk_pll_khz_u<>), "union _clk_pll_khz_u does not have the correct size.");
        static_assert(4 == sizeof(_clk_tx_div_khz_s<>), "struct _clk_tx_div_khz_s does not have the correct size.");
        static_assert(4 == sizeof(_clk_tx_div_khz_u<>), "union _clk_tx_div_khz_u does not have the correct size.");
        static_assert(4 == sizeof(_clk_rec_div64_khz_s<>), "struct _clk_rec_div64_khz_s does not have the correct size.");
        static_assert(4 == sizeof(_clk_rec_div64_khz_u<>), "union _clk_rec_div64_khz_u does not have the correct size.");
        static_assert(4 == sizeof(_clk_rec_div_khz_s<>), "struct _clk_rec_div_khz_s does not have the correct size.");
        static_assert(4 == sizeof(_clk_rec_div_khz_u<>), "union _clk_rec_div_khz_u does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_adapt_dropped_31_0_s<>), "struct _rxmac_adapt_dropped_31_0_s does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_adapt_dropped_31_0_u<>), "union _rxmac_adapt_dropped_31_0_u does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_adapt_dropped_63_32_s<>), "struct _rxmac_adapt_dropped_63_32_s does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_adapt_dropped_63_32_u<>), "union _rxmac_adapt_dropped_63_32_u does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_adapt_dropped_control_s<>), "struct _rxmac_adapt_dropped_control_s does not have the correct size.");
        static_assert(4 == sizeof(_rxmac_adapt_dropped_control_u<>), "union _rxmac_adapt_dropped_control_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_1L_s<>), "struct _tx_sync_counter_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_1L_u<>), "union _tx_sync_counter_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_1L_s<>), "struct _tx_async_counter_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_1L_u<>), "union _tx_async_counter_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_1L_s<>), "struct _rx_sync_counter_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_1L_u<>), "union _rx_sync_counter_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_1L_s<>), "struct _rx_async_counter_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_1L_u<>), "union _rx_async_counter_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_1L_s<>), "struct _dl_cfg_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_1L_u<>), "union _dl_cfg_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_1L_s<>), "struct _tx_dl_delay_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_1L_u<>), "union _tx_dl_delay_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_1L_s<>), "struct _rx_dl_delay_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_1L_u<>), "union _rx_dl_delay_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_1L_s<>), "struct _dl_status_1L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_1L_u<>), "union _dl_status_1L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_2L_s<>), "struct _tx_sync_counter_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_2L_u<>), "union _tx_sync_counter_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_2L_s<>), "struct _tx_async_counter_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_2L_u<>), "union _tx_async_counter_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_2L_s<>), "struct _rx_sync_counter_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_2L_u<>), "union _rx_sync_counter_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_2L_s<>), "struct _rx_async_counter_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_2L_u<>), "union _rx_async_counter_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_2L_s<>), "struct _dl_cfg_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_2L_u<>), "union _dl_cfg_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_2L_s<>), "struct _tx_dl_delay_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_2L_u<>), "union _tx_dl_delay_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_2L_s<>), "struct _rx_dl_delay_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_2L_u<>), "union _rx_dl_delay_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_2L_s<>), "struct _dl_status_2L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_2L_u<>), "union _dl_status_2L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_3L_s<>), "struct _tx_sync_counter_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_3L_u<>), "union _tx_sync_counter_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_3L_s<>), "struct _tx_async_counter_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_3L_u<>), "union _tx_async_counter_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_3L_s<>), "struct _rx_sync_counter_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_3L_u<>), "union _rx_sync_counter_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_3L_s<>), "struct _rx_async_counter_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_3L_u<>), "union _rx_async_counter_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_3L_s<>), "struct _dl_cfg_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_3L_u<>), "union _dl_cfg_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_3L_s<>), "struct _tx_dl_delay_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_3L_u<>), "union _tx_dl_delay_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_3L_s<>), "struct _rx_dl_delay_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_3L_u<>), "union _rx_dl_delay_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_3L_s<>), "struct _dl_status_3L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_3L_u<>), "union _dl_status_3L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_4L_s<>), "struct _tx_sync_counter_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_4L_u<>), "union _tx_sync_counter_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_4L_s<>), "struct _tx_async_counter_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_4L_u<>), "union _tx_async_counter_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_4L_s<>), "struct _rx_sync_counter_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_4L_u<>), "union _rx_sync_counter_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_4L_s<>), "struct _rx_async_counter_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_4L_u<>), "union _rx_async_counter_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_4L_s<>), "struct _dl_cfg_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_4L_u<>), "union _dl_cfg_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_4L_s<>), "struct _tx_dl_delay_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_4L_u<>), "union _tx_dl_delay_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_4L_s<>), "struct _rx_dl_delay_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_4L_u<>), "union _rx_dl_delay_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_4L_s<>), "struct _dl_status_4L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_4L_u<>), "union _dl_status_4L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_5L_s<>), "struct _tx_sync_counter_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_5L_u<>), "union _tx_sync_counter_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_5L_s<>), "struct _tx_async_counter_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_5L_u<>), "union _tx_async_counter_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_5L_s<>), "struct _rx_sync_counter_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_5L_u<>), "union _rx_sync_counter_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_5L_s<>), "struct _rx_async_counter_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_5L_u<>), "union _rx_async_counter_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_5L_s<>), "struct _dl_cfg_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_5L_u<>), "union _dl_cfg_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_5L_s<>), "struct _tx_dl_delay_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_5L_u<>), "union _tx_dl_delay_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_5L_s<>), "struct _rx_dl_delay_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_5L_u<>), "union _rx_dl_delay_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_5L_s<>), "struct _dl_status_5L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_5L_u<>), "union _dl_status_5L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_6L_s<>), "struct _tx_sync_counter_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_6L_u<>), "union _tx_sync_counter_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_6L_s<>), "struct _tx_async_counter_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_6L_u<>), "union _tx_async_counter_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_6L_s<>), "struct _rx_sync_counter_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_6L_u<>), "union _rx_sync_counter_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_6L_s<>), "struct _rx_async_counter_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_6L_u<>), "union _rx_async_counter_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_6L_s<>), "struct _dl_cfg_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_6L_u<>), "union _dl_cfg_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_6L_s<>), "struct _tx_dl_delay_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_6L_u<>), "union _tx_dl_delay_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_6L_s<>), "struct _rx_dl_delay_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_6L_u<>), "union _rx_dl_delay_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_6L_s<>), "struct _dl_status_6L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_6L_u<>), "union _dl_status_6L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_7L_s<>), "struct _tx_sync_counter_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_7L_u<>), "union _tx_sync_counter_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_7L_s<>), "struct _tx_async_counter_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_7L_u<>), "union _tx_async_counter_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_7L_s<>), "struct _rx_sync_counter_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_7L_u<>), "union _rx_sync_counter_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_7L_s<>), "struct _rx_async_counter_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_7L_u<>), "union _rx_async_counter_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_7L_s<>), "struct _dl_cfg_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_7L_u<>), "union _dl_cfg_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_7L_s<>), "struct _tx_dl_delay_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_7L_u<>), "union _tx_dl_delay_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_7L_s<>), "struct _rx_dl_delay_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_7L_u<>), "union _rx_dl_delay_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_7L_s<>), "struct _dl_status_7L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_7L_u<>), "union _dl_status_7L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_8L_s<>), "struct _tx_sync_counter_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_sync_counter_8L_u<>), "union _tx_sync_counter_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_8L_s<>), "struct _tx_async_counter_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_async_counter_8L_u<>), "union _tx_async_counter_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_8L_s<>), "struct _rx_sync_counter_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_sync_counter_8L_u<>), "union _rx_sync_counter_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_8L_s<>), "struct _rx_async_counter_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_async_counter_8L_u<>), "union _rx_async_counter_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_8L_s<>), "struct _dl_cfg_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_cfg_8L_u<>), "union _dl_cfg_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_8L_s<>), "struct _tx_dl_delay_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_tx_dl_delay_8L_u<>), "union _tx_dl_delay_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_8L_s<>), "struct _rx_dl_delay_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_rx_dl_delay_8L_u<>), "union _rx_dl_delay_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_8L_s<>), "struct _dl_status_8L_s does not have the correct size.");
        static_assert(4 == sizeof(_dl_status_8L_u<>), "union _dl_status_8L_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin_control_register_s<>), "struct _cwbin_control_register_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin_control_register_u<>), "union _cwbin_control_register_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin0_A_s<>), "struct _cwbin0_A_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin0_A_u<>), "union _cwbin0_A_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin1_A_s<>), "struct _cwbin1_A_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin1_A_u<>), "union _cwbin1_A_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin2_A_s<>), "struct _cwbin2_A_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin2_A_u<>), "union _cwbin2_A_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin3_A_s<>), "struct _cwbin3_A_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin3_A_u<>), "union _cwbin3_A_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin0_B_s<>), "struct _cwbin0_B_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin0_B_u<>), "union _cwbin0_B_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin1_B_s<>), "struct _cwbin1_B_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin1_B_u<>), "union _cwbin1_B_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin2_B_s<>), "struct _cwbin2_B_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin2_B_u<>), "union _cwbin2_B_u does not have the correct size.");
        static_assert(4 == sizeof(_cwbin3_B_s<>), "struct _cwbin3_B_s does not have the correct size.");
        static_assert(4 == sizeof(_cwbin3_B_u<>), "union _cwbin3_B_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_tam_adjust_s<>), "struct _ptp_tx_tam_adjust_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_tam_adjust_u<>), "union _ptp_tx_tam_adjust_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_tam_adjust_s<>), "struct _ptp_rx_tam_adjust_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_tam_adjust_u<>), "union _ptp_rx_tam_adjust_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_ref_lane_s<>), "struct _ptp_ref_lane_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_ref_lane_u<>), "union _ptp_ref_lane_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_dr_cfg_s<>), "struct _ptp_dr_cfg_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_dr_cfg_u<>), "union _ptp_dr_cfg_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_user_cfg_status_s<>), "struct _ptp_tx_user_cfg_status_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_user_cfg_status_u<>), "union _ptp_tx_user_cfg_status_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_user_cfg_status_s<>), "struct _ptp_rx_user_cfg_status_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_user_cfg_status_u<>), "union _ptp_rx_user_cfg_status_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_uim_tam_snapshot_s<>), "struct _ptp_uim_tam_snapshot_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_uim_tam_snapshot_u<>), "union _ptp_uim_tam_snapshot_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_uim_tam_info0_s<>), "struct _ptp_tx_uim_tam_info0_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_uim_tam_info0_u<>), "union _ptp_tx_uim_tam_info0_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_uim_tam_info1_s<>), "struct _ptp_tx_uim_tam_info1_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_uim_tam_info1_u<>), "union _ptp_tx_uim_tam_info1_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_uim_tam_info0_s<>), "struct _ptp_rx_uim_tam_info0_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_uim_tam_info0_u<>), "union _ptp_rx_uim_tam_info0_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_uim_tam_info1_s<>), "struct _ptp_rx_uim_tam_info1_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_uim_tam_info1_u<>), "union _ptp_rx_uim_tam_info1_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_status_s<>), "struct _ptp_status_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_status_u<>), "union _ptp_status_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_status2_s<>), "struct _ptp_status2_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_status2_u<>), "union _ptp_status2_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane_calc_data_constdelay_s<>), "struct _ptp_tx_lane_calc_data_constdelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane_calc_data_constdelay_u<>), "union _ptp_tx_lane_calc_data_constdelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane_calc_data_constdelay_s<>), "struct _ptp_rx_lane_calc_data_constdelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane_calc_data_constdelay_u<>), "union _ptp_rx_lane_calc_data_constdelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane0_calc_data_offset_s<>), "struct _ptp_tx_lane0_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane0_calc_data_offset_u<>), "union _ptp_tx_lane0_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane0_calc_data_offset_s<>), "struct _ptp_rx_lane0_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane0_calc_data_offset_u<>), "union _ptp_rx_lane0_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane0_calc_data_time_s<>), "struct _ptp_tx_lane0_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane0_calc_data_time_u<>), "union _ptp_tx_lane0_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane0_calc_data_time_s<>), "struct _ptp_rx_lane0_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane0_calc_data_time_u<>), "union _ptp_rx_lane0_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane0_calc_data_wiredelay_s<>), "struct _ptp_tx_lane0_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane0_calc_data_wiredelay_u<>), "union _ptp_tx_lane0_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane0_calc_data_wiredelay_s<>), "struct _ptp_rx_lane0_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane0_calc_data_wiredelay_u<>), "union _ptp_rx_lane0_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane1_calc_data_offset_s<>), "struct _ptp_tx_lane1_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane1_calc_data_offset_u<>), "union _ptp_tx_lane1_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane1_calc_data_offset_s<>), "struct _ptp_rx_lane1_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane1_calc_data_offset_u<>), "union _ptp_rx_lane1_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane1_calc_data_time_s<>), "struct _ptp_tx_lane1_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane1_calc_data_time_u<>), "union _ptp_tx_lane1_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane1_calc_data_time_s<>), "struct _ptp_rx_lane1_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane1_calc_data_time_u<>), "union _ptp_rx_lane1_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane1_calc_data_wiredelay_s<>), "struct _ptp_tx_lane1_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane1_calc_data_wiredelay_u<>), "union _ptp_tx_lane1_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane1_calc_data_wiredelay_s<>), "struct _ptp_rx_lane1_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane1_calc_data_wiredelay_u<>), "union _ptp_rx_lane1_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane2_calc_data_offset_s<>), "struct _ptp_tx_lane2_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane2_calc_data_offset_u<>), "union _ptp_tx_lane2_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane2_calc_data_offset_s<>), "struct _ptp_rx_lane2_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane2_calc_data_offset_u<>), "union _ptp_rx_lane2_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane2_calc_data_time_s<>), "struct _ptp_tx_lane2_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane2_calc_data_time_u<>), "union _ptp_tx_lane2_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane2_calc_data_time_s<>), "struct _ptp_rx_lane2_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane2_calc_data_time_u<>), "union _ptp_rx_lane2_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane2_calc_data_wiredelay_s<>), "struct _ptp_tx_lane2_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane2_calc_data_wiredelay_u<>), "union _ptp_tx_lane2_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane2_calc_data_wiredelay_s<>), "struct _ptp_rx_lane2_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane2_calc_data_wiredelay_u<>), "union _ptp_rx_lane2_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane3_calc_data_offset_s<>), "struct _ptp_tx_lane3_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane3_calc_data_offset_u<>), "union _ptp_tx_lane3_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane3_calc_data_offset_s<>), "struct _ptp_rx_lane3_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane3_calc_data_offset_u<>), "union _ptp_rx_lane3_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane3_calc_data_time_s<>), "struct _ptp_tx_lane3_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane3_calc_data_time_u<>), "union _ptp_tx_lane3_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane3_calc_data_time_s<>), "struct _ptp_rx_lane3_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane3_calc_data_time_u<>), "union _ptp_rx_lane3_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane3_calc_data_wiredelay_s<>), "struct _ptp_tx_lane3_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane3_calc_data_wiredelay_u<>), "union _ptp_tx_lane3_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane3_calc_data_wiredelay_s<>), "struct _ptp_rx_lane3_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane3_calc_data_wiredelay_u<>), "union _ptp_rx_lane3_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane4_calc_data_offset_s<>), "struct _ptp_tx_lane4_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane4_calc_data_offset_u<>), "union _ptp_tx_lane4_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane4_calc_data_offset_s<>), "struct _ptp_rx_lane4_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane4_calc_data_offset_u<>), "union _ptp_rx_lane4_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane4_calc_data_time_s<>), "struct _ptp_tx_lane4_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane4_calc_data_time_u<>), "union _ptp_tx_lane4_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane4_calc_data_time_s<>), "struct _ptp_rx_lane4_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane4_calc_data_time_u<>), "union _ptp_rx_lane4_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane4_calc_data_wiredelay_s<>), "struct _ptp_tx_lane4_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane4_calc_data_wiredelay_u<>), "union _ptp_tx_lane4_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane4_calc_data_wiredelay_s<>), "struct _ptp_rx_lane4_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane4_calc_data_wiredelay_u<>), "union _ptp_rx_lane4_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane5_calc_data_offset_s<>), "struct _ptp_tx_lane5_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane5_calc_data_offset_u<>), "union _ptp_tx_lane5_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane5_calc_data_offset_s<>), "struct _ptp_rx_lane5_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane5_calc_data_offset_u<>), "union _ptp_rx_lane5_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane5_calc_data_time_s<>), "struct _ptp_tx_lane5_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane5_calc_data_time_u<>), "union _ptp_tx_lane5_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane5_calc_data_time_s<>), "struct _ptp_rx_lane5_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane5_calc_data_time_u<>), "union _ptp_rx_lane5_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane5_calc_data_wiredelay_s<>), "struct _ptp_tx_lane5_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane5_calc_data_wiredelay_u<>), "union _ptp_tx_lane5_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane5_calc_data_wiredelay_s<>), "struct _ptp_rx_lane5_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane5_calc_data_wiredelay_u<>), "union _ptp_rx_lane5_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane6_calc_data_offset_s<>), "struct _ptp_tx_lane6_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane6_calc_data_offset_u<>), "union _ptp_tx_lane6_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane6_calc_data_offset_s<>), "struct _ptp_rx_lane6_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane6_calc_data_offset_u<>), "union _ptp_rx_lane6_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane6_calc_data_time_s<>), "struct _ptp_tx_lane6_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane6_calc_data_time_u<>), "union _ptp_tx_lane6_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane6_calc_data_time_s<>), "struct _ptp_rx_lane6_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane6_calc_data_time_u<>), "union _ptp_rx_lane6_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane6_calc_data_wiredelay_s<>), "struct _ptp_tx_lane6_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane6_calc_data_wiredelay_u<>), "union _ptp_tx_lane6_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane6_calc_data_wiredelay_s<>), "struct _ptp_rx_lane6_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane6_calc_data_wiredelay_u<>), "union _ptp_rx_lane6_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane7_calc_data_offset_s<>), "struct _ptp_tx_lane7_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane7_calc_data_offset_u<>), "union _ptp_tx_lane7_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane7_calc_data_offset_s<>), "struct _ptp_rx_lane7_calc_data_offset_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane7_calc_data_offset_u<>), "union _ptp_rx_lane7_calc_data_offset_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane7_calc_data_time_s<>), "struct _ptp_tx_lane7_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane7_calc_data_time_u<>), "union _ptp_tx_lane7_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane7_calc_data_time_s<>), "struct _ptp_rx_lane7_calc_data_time_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane7_calc_data_time_u<>), "union _ptp_rx_lane7_calc_data_time_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane7_calc_data_wiredelay_s<>), "struct _ptp_tx_lane7_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_tx_lane7_calc_data_wiredelay_u<>), "union _ptp_tx_lane7_calc_data_wiredelay_u does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane7_calc_data_wiredelay_s<>), "struct _ptp_rx_lane7_calc_data_wiredelay_s does not have the correct size.");
        static_assert(4 == sizeof(_ptp_rx_lane7_calc_data_wiredelay_u<>), "union _ptp_rx_lane7_calc_data_wiredelay_u does not have the correct size.");
        static_assert(2552 == sizeof(ftile_ethernet_base_regs<>), "struct ftile_ethernet_base_regs does not have the correct size.");
        static_assert(2552 == sizeof(ftile_ethernet_base_fields<>), "struct ftile_ethernet_base_fields does not have the correct size.");
        static_assert(2552 == sizeof(ftile_ethernet_base_u<>), "union ftile_ethernet_base_u does not have the correct size.");
        static_assert(2552 == sizeof(ftile_ethernet_base_reg_t), "type ftile_ethernet_base_reg_t does not have the correct size.");
        static_assert(2552 == sizeof(ftile_ethernet_base_mem_t), "type ftile_ethernet_base_mem_t does not have the correct size.");

    /* trailer stuff */
    }
#endif
