#ifndef __FTILE_ETHERNET_DRIVER_H
#define __FTILE_ETHERNET_DRIVER_H

#include <cstdint>
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

// FPGA Driver Stuff.
#include "fpga_driver_base.hpp"

// Local register set definitions.
#include "ftile_ethernet_base_regset.hpp"
#include "ftile_ethernet_ehip_regset.hpp"
#include "ftile_ethernet_fec_regset.hpp"
#include "ftile_xcvr_cpi_regset.hpp"

using namespace ftile_ethernet_base_regset;
using namespace ftile_ethernet_ehip_regset;
using namespace ftile_ethernet_fec_regset;
using namespace ftile_xcvr_cpi_regset;


#define POLL_WITH_TIMEOUT(__condition__, __timeout_ms__) \
{ \
    int32_t __count__ = __timeout_ms__; \
    while (!(__condition__) && !(__count__ < 0)) { \
        __count__--; \
        usleep(1000); \
    } \
    if (__count__ < 0) { \
        throw std::runtime_error("Polling timed out in " \
            + std::string(__FILE__) + ":" + std::to_string(__LINE__) + " - " \
            + std::string(__PRETTY_FUNCTION__) + "."); \
    } \
}

namespace fpga_driver {

    // Struct that captures data and control error / ok packet counts.
    // TODO: Could be broken down one more level into a struct that has
    // .err and .ok, stylistic preference. 
    struct ftile_ethernet_cast_stats {
        uint32_t data_err;
        uint32_t ctrl_err;
        uint64_t data_ok ;
        uint64_t ctrl_ok ;
    };

    // MAC stats for Rx or Tx. 
    struct ftile_ethernet_mac_stats {

        uint32_t fragments    ;
        uint32_t jabbers      ;
        uint32_t fcs_err      ;
        uint32_t pause_err    ;

        ftile_ethernet_cast_stats multicast    ;
        ftile_ethernet_cast_stats broadcast    ;
        ftile_ethernet_cast_stats unicast      ;
        
        uint64_t packet_count_64b        ;
        uint64_t packet_count_65to127b   ;
        uint64_t packet_count_128to255b  ;
        uint64_t packet_count_256to511b  ;
        uint64_t packet_count_512to1023b ;
        uint64_t packet_count_1024to1518b;
        uint64_t packet_count_1519tomaxb ;

        uint32_t packet_count_oversize     ;
        uint64_t pause      ;
        uint32_t runt     ;
        uint64_t frame_starts;
        uint32_t length_error    ;
        uint32_t pfc_error       ;
        uint32_t pfc             ;
        uint32_t malformed       ;
        uint32_t dropped         ;
        uint32_t bad_length_type ;

        uint64_t payload_bytes   ;
        uint64_t total_bytes     ;

    };

    struct ftile_ethernet_fec_stats {
        std::vector<uint64_t> corrected_codewords;
        std::vector<uint64_t> uncorrected_codewords;
    };

    struct ftile_ethernet_config {
        bool loopback;
        bool unidirectional;
    };

    struct ftile_ethernet_status {
        ftile_ethernet_mac_stats rx_mac;
        ftile_ethernet_mac_stats tx_mac;
        ftile_ethernet_fec_stats rx_fec;
        uint8_t tx_pll_locked;
        bool    tx_lanes_stable;
        uint8_t rx_cdr_locked;
        bool    rx_deskew;
        bool    rx_deskew_change;
        bool    rx_pcs_ready;
        bool    tx_ready;
        bool    rx_ready;
        bool    ready;
    };

    class ftile_ethernet_driver : public fpga_driver::Base<ftile_ethernet_config, ftile_ethernet_status> 
    {
        public:
            ftile_ethernet_driver(RegisterSetInfos &regset, Logger &logger) 
            : fpga_driver::Base<ftile_ethernet_config, ftile_ethernet_status>(regset, logger)
            {
                // Number of lanes is available in the base register set. 
                // Lets figure out if this is a valid thing before we instantiate the rest.
                csr_ = new RegisterMap<ftile_ethernet_base_regset::ftile_ethernet_base_u<true>>(get_regset_info("csr", ftile_ethernet_base_regset::version));

                num_lanes_ = csr_->regs()->fld.num_lanes;
                log->info("F-Tile Ethernet got " + std::to_string(num_lanes_) + " lanes.");
                if (num_lanes_ != 1 && num_lanes_ != 2 && num_lanes_ != 4 && num_lanes_ != 8) {
                    delete csr_;
                    throw std::runtime_error("Number of lanes is invalid: " + std::to_string(num_lanes_) + ".");
                }

                // Hard IP register map (stats and stuff)
                hip_ = new RegisterMap<ftile_ethernet_ehip_regset::ftile_ethernet_ehip_u<true>>(get_regset_info("hip", ftile_ethernet_ehip_regset::version));

                // FEC register map (uncorrectable per lane stats)
                fec_ = new RegisterMap<ftile_ethernet_fec_regset::ftile_ethernet_fec_u<true>>*[2*num_lanes_];
                for (uint32_t lane = 0; lane < 2*num_lanes_; lane++) {
                    fec_[lane] = new RegisterMap<ftile_ethernet_fec_regset::ftile_ethernet_fec_u<true>>(get_regset_info("fec" + std::to_string(lane), ftile_ethernet_fec_regset::version));
                    // TODO: Check nullptr or does new throw an allocation failure? 
                }

                xcvr_ = new RegisterMap<ftile_xcvr_cpi_regset::ftile_xcvr_cpi_u<true>>*[num_lanes_];
                for (uint32_t lane = 0; lane < num_lanes_; lane++) {
                    xcvr_[lane] = new RegisterMap<ftile_xcvr_cpi_regset::ftile_xcvr_cpi_u<true>>(get_regset_info("xcvr" + std::to_string(lane), ftile_xcvr_cpi_regset::version));
                    // TODO: Check nullptr or does new throw an allocation failure? 
                }
            };

            ~ftile_ethernet_driver() {

                // Free the memory that was created in the constructor. 
                for (uint32_t lane = 0; lane < num_lanes_; lane++) {
                    delete xcvr_[lane];
                }
                delete [] xcvr_;

                for (uint32_t lane = 0; lane < 2*num_lanes_; lane++) {
                    delete fec_[lane];
                }
                delete [] fec_;

                delete hip_;
                delete csr_;
            }

            virtual void get_default_config (ftile_ethernet_config &config) {
                config.loopback       = false;
                config.unidirectional = false;
            };

    private:
        uint32_t num_lanes_;
        RegisterMap<ftile_ethernet_base_regset::ftile_ethernet_base_u<true>> *csr_ = nullptr;
        RegisterMap<ftile_ethernet_ehip_regset::ftile_ethernet_ehip_u<true>> *hip_ = nullptr;
        RegisterMap<ftile_ethernet_fec_regset::ftile_ethernet_fec_u<true>>  **fec_ = nullptr;
        RegisterMap<ftile_xcvr_cpi_regset::ftile_xcvr_cpi_u<true>>         **xcvr_ = nullptr;

        void set_unidirectional(bool unidirectional) {
            hip_->regs()->fld.en_unidir = unidirectional;
        }

        void set_loopback(bool loopback) {

            log->info("Setting loopback to " + std::to_string(loopback) + ".");

            // Pointer to CSR registers.
            std::shared_ptr<ftile_ethernet_base_u<true>> csr_u = csr_->regs();

            // Put RX datapath into reset. 
            csr_u->fld.soft_rx_rst = 1;
            POLL_WITH_TIMEOUT(0 == csr_u->fld.rx_rst_ack_n, 10000);

            // Do the SERDES CPI thing:
            // My vague understanding is that when using RX auto adaptation mode (to tune PAM4 thresholds etc across temperature etc) 
            // there is a control unit (a firmware wrapper) that takes over RX adaptation from the PMA. I think it's a NIOS or something.
            // It will overwrite register settings that you try to make so you need to make "CPI" requests to have it do things
            // on your behalf. It can do a couple things, like set loopbacks, TX or RX lane polarity inversion, BER testing, inject errors. 
            // we could write a module which handles all this if necessary but we really only have the 1 use case which is
            // serial loopback on Ethernet transceivers. 
            for (uint32_t lane = 0; lane < num_lanes_; lane++) {

                log->info("Setting loopback for lane " + std::to_string(lane) + ".");

                // Pointer to current lane XCVR regs.
                std::shared_ptr<ftile_xcvr_cpi_u<true>> xcvr_u = xcvr_[lane]->regs();

                // Get the physical lane number of the transceiver you're talking to.
                // This is relative to the quad so it's always 0-3. 
                // For 400G it maps logical lane 0-3 => physical lane 3-0 (reverse order) and logical lane 4-7 => physical lane 3-0 (i.e. across 2 quads)
                // For 200G it maps logical lane 0-3 => physical lane 3-0. 
                // For 100G it can either be logical lane 0-1 => physical lane 3-2 or 1-0, this is how we know this. 
                // There seems to be one CPI "control unit" per quad so you can inadvertently set lanes associated with another 100GE instance
                // into loopback if you dont check the physical lane.
                uint32_t command_word = 0xA040;
                command_word |= (xcvr_u->fld.fgt_lane_number << 8);

                if (loopback) {
                    command_word |= 0x60000;
                }

                // Request service, poll till complete.
                xcvr_u->reg.cfg_link_mng_cpi.reg = command_word;
                POLL_WITH_TIMEOUT((1 == xcvr_u->fld.cfg_phy_cpi_service_req) && (0 == xcvr_u->fld.cfg_phy_cpi_reset), 100);

                // This means we are not requesting service anymore. Poll till complete.
                command_word &= (~(0x8000));
                xcvr_u->reg.cfg_link_mng_cpi.reg = command_word;
                POLL_WITH_TIMEOUT((0 == xcvr_u->fld.cfg_phy_cpi_service_req) && (0 == xcvr_u->fld.cfg_phy_cpi_reset), 100);

            }

            // Release RX datapath from reset.
            csr_u->fld.soft_rx_rst = 0;
            POLL_WITH_TIMEOUT(1 == csr_u->fld.rx_rst_ack_n, 10000);
        }

        void get_fec_stats(ftile_ethernet_fec_stats &rx, bool clear) {

            rx.uncorrected_codewords.resize(2*num_lanes_);
            rx.corrected_codewords.resize(2*num_lanes_);

            for (uint32_t fec_lane = 0; fec_lane < 2*num_lanes_; fec_lane++) {
                // Write the full register to ensure the shadow and clear happen at the same time.
                if (clear) {
                    fec_[fec_lane]->regs()->reg.rsfec_debug_cfg.reg = 0x11;
                }
                
                rx.corrected_codewords[fec_lane]   = (((uint64_t)fec_[fec_lane]->regs()->reg.rsfec_corr_cw_cnt_hi.reg)   << 32) + (uint64_t)fec_[fec_lane]->regs()->reg.rsfec_corr_cw_cnt_lo.reg;
                rx.uncorrected_codewords[fec_lane] = (((uint64_t)fec_[fec_lane]->regs()->reg.rsfec_uncorr_cw_cnt_hi.reg) << 32) + (uint64_t)fec_[fec_lane]->regs()->reg.rsfec_uncorr_cw_cnt_lo.reg;

                if (clear) {
                    fec_[fec_lane]->regs()->reg.rsfec_debug_cfg.reg = 0;
                }
            }
        }

        void get_mac_stats(ftile_ethernet_mac_stats &tx, ftile_ethernet_mac_stats &rx, bool clear) {

            ftile_ethernet_ehip_fields<true> *fld = &hip_->regs()->fld;

            // Write the full register. This ensures rx and tx are latched at the same time.
            if (clear) {
                hip_->regs()->reg.config_ctrl.reg = 0x3;
            }

            tx.fragments          = fld->cntr_tx_fragments_lo;
            tx.jabbers            = fld->cntr_tx_jabbers_lo;
            tx.fcs_err            = fld->cntr_tx_fcs_err_okpkt_lo;
            tx.multicast.data_err = fld->cntr_tx_mcast_data_err_lo;
            tx.broadcast.data_err = fld->cntr_tx_bcast_data_err_lo;
            tx.unicast.data_err   = fld->cntr_tx_ucast_data_err_lo;
            tx.multicast.ctrl_err = fld->cntr_tx_mcast_ctrl_err_lo;
            tx.broadcast.ctrl_err = fld->cntr_tx_bcast_ctrl_err_lo;
            tx.unicast.ctrl_err   = fld->cntr_tx_ucast_ctrl_err_lo;

            // _HI and _LO registers are not correctly 64b aligned. I think this prevents you from using 64b regs to represent them.
            tx.multicast.data_ok = (((uint64_t)fld->cntr_tx_mcast_data_ok_hi) << 32) + (uint64_t)fld->cntr_tx_mcast_data_ok_lo;
            tx.broadcast.data_ok = (((uint64_t)fld->cntr_tx_bcast_data_ok_hi) << 32) + (uint64_t)fld->cntr_tx_bcast_data_ok_lo;
            tx.unicast.data_ok   = (((uint64_t)fld->cntr_tx_ucast_data_ok_hi) << 32) + (uint64_t)fld->cntr_tx_ucast_data_ok_lo;
            tx.multicast.ctrl_ok = (((uint64_t)fld->cntr_tx_mcast_ctrl_hi)    << 32) + (uint64_t)fld->cntr_tx_mcast_ctrl_lo;
            tx.broadcast.ctrl_ok = (((uint64_t)fld->cntr_tx_bcast_ctrl_hi)    << 32) + (uint64_t)fld->cntr_tx_bcast_ctrl_lo;
            tx.unicast.ctrl_ok   = (((uint64_t)fld->cntr_tx_ucast_ctrl_hi)    << 32) + (uint64_t)fld->cntr_tx_ucast_ctrl_lo;
            tx.pause_err         = fld->cntr_tx_pause_err_lo;

            tx.packet_count_64b         = (((uint64_t)fld->cntr_tx_64b_hi)         << 32) + (uint64_t)fld->cntr_tx_64b_lo;
            tx.packet_count_65to127b    = (((uint64_t)fld->cntr_tx_65to127b_hi)    << 32) + (uint64_t)fld->cntr_tx_65to127b_lo;
            tx.packet_count_128to255b   = (((uint64_t)fld->cntr_tx_128to255b_hi)   << 32) + (uint64_t)fld->cntr_tx_128to255b_lo;
            tx.packet_count_256to511b   = (((uint64_t)fld->cntr_tx_256to511b_hi)   << 32) + (uint64_t)fld->cntr_tx_256to511b_lo;
            tx.packet_count_512to1023b  = (((uint64_t)fld->cntr_tx_512to1023b_hi)  << 32) + (uint64_t)fld->cntr_tx_512to1023b_lo;
            tx.packet_count_1024to1518b = (((uint64_t)fld->cntr_tx_1024to1518b_hi) << 32) + (uint64_t)fld->cntr_tx_1024to1518b_lo;
            tx.packet_count_1519tomaxb  = (((uint64_t)fld->cntr_tx_1519tomaxb_hi)  << 32) + (uint64_t)fld->cntr_tx_1519tomaxb_lo;
            tx.packet_count_oversize    = fld->cntr_tx_oversize_lo;
            tx.pause                    = (((uint64_t)fld->cntr_tx_pause_hi)       << 32) + (uint64_t)fld->cntr_tx_pause_lo;
            tx.runt                     = fld->cntr_tx_runt_lo;
            tx.frame_starts             = (((uint64_t)fld->cntr_tx_st_hi)          << 32) + (uint64_t)fld->cntr_tx_st_lo;
            tx.length_error             = fld->cntr_tx_lenerr_lo;
            tx.pfc_error                = fld->cntr_tx_pfc_err_lo;
            tx.pfc                      = (((uint64_t)fld->cntr_tx_pfc_hi)         << 32) + (uint64_t)fld->cntr_tx_pfc_lo;
            tx.malformed                = fld->cntr_tx_malformed_lo;
            tx.dropped                  = fld->cntr_tx_dropped_lo;
            tx.bad_length_type          = fld->cntr_tx_badlt_lo;

            tx.payload_bytes = (((uint64_t)fld->cntr_tx_payloadoctetsok_hi) << 32) + (uint64_t)fld->cntr_tx_payloadoctetsok_lo;
            tx.total_bytes   = (((uint64_t)fld->cntr_tx_octetsok_hi)        << 32) + (uint64_t)fld->cntr_tx_octetsok_lo;

            rx.fragments          = fld->cntr_rx_fragments_lo;
            rx.jabbers            = fld->cntr_rx_jabbers_lo;
            rx.fcs_err            = fld->cntr_rx_fcs_err_okpkt_lo;
            rx.multicast.data_err = fld->cntr_rx_mcast_data_err_lo;
            rx.broadcast.data_err = fld->cntr_rx_bcast_data_err_lo;
            rx.unicast.data_err   = fld->cntr_rx_ucast_data_err_lo;
            rx.multicast.ctrl_err = fld->cntr_rx_mcast_ctrl_err_lo;
            rx.broadcast.ctrl_err = fld->cntr_rx_bcast_ctrl_err_lo;
            rx.unicast.ctrl_err   = fld->cntr_rx_ucast_ctrl_err_lo;
            rx.multicast.data_ok  = (((uint64_t)fld->cntr_rx_mcast_data_ok_hi) << 32) + (uint64_t)fld->cntr_rx_mcast_data_ok_lo;
            rx.broadcast.data_ok  = (((uint64_t)fld->cntr_rx_bcast_data_ok_hi) << 32) + (uint64_t)fld->cntr_rx_bcast_data_ok_lo;
            rx.unicast.data_ok    = (((uint64_t)fld->cntr_rx_ucast_data_ok_hi) << 32) + (uint64_t)fld->cntr_rx_ucast_data_ok_lo;
            rx.multicast.ctrl_ok  = (((uint64_t)fld->cntr_rx_mcast_ctrl_hi)    << 32) + (uint64_t)fld->cntr_rx_mcast_ctrl_lo;
            rx.broadcast.ctrl_ok  = (((uint64_t)fld->cntr_rx_bcast_ctrl_hi)    << 32) + (uint64_t)fld->cntr_rx_bcast_ctrl_lo;
            rx.unicast.ctrl_ok    = (((uint64_t)fld->cntr_rx_ucast_ctrl_hi)    << 32) + (uint64_t)fld->cntr_rx_ucast_ctrl_lo;
            rx.pause_err          = fld->cntr_rx_pause_err_lo;

            rx.packet_count_64b         = (((uint64_t)fld->cntr_rx_64b_hi)         << 32) + (uint64_t)fld->cntr_rx_64b_lo;
            rx.packet_count_65to127b    = (((uint64_t)fld->cntr_rx_65to127b_hi)    << 32) + (uint64_t)fld->cntr_rx_65to127b_lo;
            rx.packet_count_128to255b   = (((uint64_t)fld->cntr_rx_128to255b_hi)   << 32) + (uint64_t)fld->cntr_rx_128to255b_lo;
            rx.packet_count_256to511b   = (((uint64_t)fld->cntr_rx_256to511b_hi)   << 32) + (uint64_t)fld->cntr_rx_256to511b_lo;
            rx.packet_count_512to1023b  = (((uint64_t)fld->cntr_rx_512to1023b_hi)  << 32) + (uint64_t)fld->cntr_rx_512to1023b_lo;
            rx.packet_count_1024to1518b = (((uint64_t)fld->cntr_rx_1024to1518b_hi) << 32) + (uint64_t)fld->cntr_rx_1024to1518b_lo;
            rx.packet_count_1519tomaxb  = (((uint64_t)fld->cntr_rx_1519tomaxb_hi)  << 32) + (uint64_t)fld->cntr_rx_1519tomaxb_lo;
            rx.packet_count_oversize    = fld->cntr_rx_oversize_lo;
            rx.pause                    = (((uint64_t)fld->cntr_rx_pause_hi) << 32) + (uint64_t)fld->cntr_rx_pause_lo;
            rx.runt                     = fld->cntr_rx_runt_lo;
            rx.frame_starts             = (((uint64_t)fld->cntr_rx_st_hi) << 32) + fld->cntr_rx_st_lo;
            rx.length_error             = fld->cntr_rx_lenerr_lo;
            rx.pfc_error                = fld->cntr_rx_pfc_err_lo;
            rx.pfc                      = (((uint64_t)fld->cntr_rx_pfc_hi) << 32) + fld->cntr_rx_pfc_lo;
            rx.malformed                = fld->cntr_rx_malformed_lo;
            rx.dropped                  = fld->cntr_rx_dropped_lo;
            rx.bad_length_type          = fld->cntr_rx_badlt_lo;

            rx.payload_bytes = (((uint64_t)fld->cntr_rx_payloadoctetsok_hi) << 32) + (uint64_t)fld->cntr_rx_payloadoctetsok_lo;
            rx.total_bytes   = (((uint64_t)fld->cntr_rx_octetsok_hi) << 32)        + (uint64_t)fld->cntr_rx_octetsok_lo;

            // Write the full register. This ensures rx and tx are unlatched at the same time.
            if (clear) {
                hip_->regs()->reg.config_ctrl.reg = 0;
            }

        }

        virtual void recover_() {
            
            // Reset the whole deal. Resets the CSR. 
            csr_->regs()->fld.eio_sys_rst = 1;
            POLL_WITH_TIMEOUT(0 == csr_->regs()->fld.rst_ack_n, 10000);
            
            csr_->regs()->fld.eio_sys_rst = 0;
            POLL_WITH_TIMEOUT(1 == csr_->regs()->fld.rst_ack_n, 10000);

        };

        virtual void configure_(const ftile_ethernet_config &config) {
            log->info("In configure..");
            set_unidirectional(config.unidirectional);
            set_loopback(config.loopback);
        };

        virtual void status_(ftile_ethernet_status &status, bool clear) {

            // Get Stats
            get_mac_stats(status.tx_mac, status.rx_mac, clear);
            get_fec_stats(status.rx_fec, clear);

            // Get TX PLL status
            status.tx_pll_locked = csr_->regs()->fld.tx_pll_locked;
            status.tx_lanes_stable = csr_->regs()->fld.tx_lanes_stable;

            // Get RX CDR Status
            status.rx_cdr_locked = csr_->regs()->fld.eio_freq_lock;

            // Get PCS status.
            status.rx_deskew        = csr_->regs()->fld.dskew_status;
            status.rx_deskew_change = csr_->regs()->fld.dskew_chng_0;
            status.rx_pcs_ready     = csr_->regs()->fld.rx_pcs_ready;
            if (clear) {
                // Not self-clearing, according to docos.
                csr_->regs()->fld.clr_dskew_chng = 1;
                csr_->regs()->fld.clr_dskew_chng = 0;
            }

            // Rollup status.
            if (((1 << num_lanes_)-1) == status.rx_cdr_locked && status.rx_deskew && status.rx_pcs_ready) {
                status.rx_ready = true;
            }

            if (((1 << num_lanes_)-1) == status.tx_pll_locked && status.tx_lanes_stable) {
                status.tx_ready = true;
            }

            status.ready = status.rx_ready && status.tx_ready;

        };


    };

}

#endif 
