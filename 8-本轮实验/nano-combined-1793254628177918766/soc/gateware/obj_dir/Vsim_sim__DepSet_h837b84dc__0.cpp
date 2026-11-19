// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___ico_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ico_sequent__TOP__sim__0\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)) 
              | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__1\n"); );
    // Body
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger;
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_count 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count;
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & 
         (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)))) {
        vlSelf->__Vdlyvval__storage_1__v0 = vlSymsp->TOP.serial_sink_data;
        vlSelf->__Vdlyvset__storage_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage_1__v0 = vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__2(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_re) 
         & (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)))) {
        vlSelf->__Vdlyvval__storage__v0 = (0xffU & vlSelf->__PVT__builder_interface1_dat_w);
        vlSelf->__Vdlyvset__storage__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage__v0 = vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce)));
    }
    if (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid) 
         & (3U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))) {
        vlSelf->__Vlvbound_ha8d1c414__0 = (((QData)((IData)(vlSelf->__PVT__builder_rhs_self2)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->__PVT__builder_rhs_self1)));
        if ((2U >= (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr))) {
            vlSelf->__Vdlyvval__storage_7__v0 = vlSelf->__Vlvbound_ha8d1c414__0;
            vlSelf->__Vdlyvset__storage_7__v0 = 1U;
            vlSelf->__Vdlyvdim0__storage_7__v0 = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr;
        }
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce 
            = ((2U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce))));
    }
    if ((0xffffffffU != vlSelf->__PVT__build_soc_coursesimsoc_bus_errors)) {
        if (vlSelf->__PVT__builder_error) {
            vlSelf->__Vdly__build_soc_coursesimsoc_bus_errors 
                = ((IData)(1U) + vlSelf->__PVT__build_soc_coursesimsoc_bus_errors);
        }
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read) {
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_tx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume)));
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read) {
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_rx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume)));
    }
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_timer_count1 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_wait) 
            & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_i)))
            ? (0x3ffU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1) 
                         - (IData)(1U))) : 0x30dU);
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & 
         (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce)));
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_en1) {
        if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time1)))) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1 
                = (0xfU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1) 
                           - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1 = 0xfU;
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_en0) {
        if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time0)))) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0 
                = (0x1fU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0) 
                            - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0 = 0x1fU;
    }
    if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume 
            = ((2U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))));
    }
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & (IData)(vlSelf->serial_sink_ready))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read)))) {
            vlSelf->__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)));
        }
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read) {
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0 
            = (0x1fU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0) 
                        - (IData)(1U)));
    }
    if (((IData)(vlSelf->__VdfgTmp_h6f2610d2__0) & (IData)(vlSelf->__PVT__builder_rhs_self18))) {
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count = 4U;
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready)))) {
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count 
            = (7U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_count))) {
            vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready = 1U;
        }
    }
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_re) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx0))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read)))) {
            vlSelf->__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)));
        }
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read) {
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0 
            = (0x1fU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0) 
                        - (IData)(1U)));
    }
    if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume 
            = ((2U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))));
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume)));
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume)));
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume)));
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume)));
    }
    if (((0U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)) 
         & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready))) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux 
            = ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last)
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_rhs_self8)))) {
        if ((2U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
            if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
                if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
                } else if ((2U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 1U;
                } else if ((4U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 2U;
                }
            } else if ((8U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 3U;
            } else if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 1U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
            if ((4U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 2U;
            } else if ((8U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 3U;
            } else if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
            vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 1U;
        } else if ((4U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
            vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 2U;
        } else if ((8U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
            vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 3U;
        }
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__Vdly__build_soc_coursesimsoc_bus_errors = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_tx_fifo_consume = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_rx_fifo_consume = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_timer_count1 = 0x30dU;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1 = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0 = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0 = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0 = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
    }
    if (((IData)(vlSelf->__PVT__builder_rhs_self25) 
         & (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) {
        vlSelf->__Vdlyvval__storage_3__v0 = ((vlSelf->__PVT__builder_rhs_self23 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__builder_rhs_self24));
        vlSelf->__Vdlyvset__storage_3__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage_3__v0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__15(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__15\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time1 
        = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time0 
        = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last 
        = (3U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux));
    vlSelf->__PVT__builder_rhs_self10 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                                    ? 2U
                                                    : 3U)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_sink_ready 
        = (3U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce;
    vlSelf->__PVT__builder_error = 0U;
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_error = 1U;
        vlSelf->__PVT__builder_done = 1U;
    } else {
        vlSelf->__PVT__builder_done = 0U;
    }
    vlSelf->__PVT__builder_rhs_self6 = ((IData)(vlSelf->__PVT__builder_grant)
                                         ? ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                             ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                                 ? 7U
                                                 : 2U)
                                             : 0U) : 
                                        ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                          ? 7U : 2U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_sink_ready 
        = (3U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level));
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid9 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid8;
    vlSelf->__PVT__builder_rhs_self16 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                    ? 2U
                                                    : 3U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start1) 
         & (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0x400U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 1U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 1U;
    }
    if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0x400U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 1U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 1U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
    }
    if ((9U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 1U;
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger = 0U;
    } else if ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger))) {
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger)));
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start1) {
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger = 1U;
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
        = ((2U >= (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))
            ? vlSelf->__PVT__storage_7[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume]
            : 0ULL);
    if ((2U >= (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][0U];
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][1U];
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][2U];
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][3U];
    } else {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U] = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_wait 
        = (0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_i 
        = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelf->__PVT__build_soc_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_pending_re) 
         & (IData)(vlSelf->__PVT__build_soc_pending_r))) {
        vlSelf->__PVT__build_soc_clear = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_re) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_r))) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_clear = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_re) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_r))) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_clear = 1U;
    }
    vlSelf->__PVT__builder_interface0_ack = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_interface0_ack = 1U;
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_status 
        = vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_pending;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_trigger_d 
        = (0U == vlSelf->__PVT__build_soc_coursesimsoc_timer_value);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_trigger_d 
        = (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0));
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid9 = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_trigger_d = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_trigger_d = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__data_mem_grain7
                                    [vlSelf->__PVT__data_mem_grain7_adr0])) 
                    << 0x38U) | (((QData)((IData)(vlSelf->__PVT__data_mem_grain6
                                                  [vlSelf->__PVT__data_mem_grain6_adr0])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->__PVT__data_mem_grain5
                                                                [vlSelf->__PVT__data_mem_grain5_adr0])) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__data_mem_grain4
                                                                   [vlSelf->__PVT__data_mem_grain4_adr0])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->__PVT__data_mem_grain3
                                                                      [vlSelf->__PVT__data_mem_grain3_adr0] 
                                                                      << 0x18U) 
                                                                     | ((vlSelf->__PVT__data_mem_grain2
                                                                         [vlSelf->__PVT__data_mem_grain2_adr0] 
                                                                         << 0x10U) 
                                                                        | ((vlSelf->__PVT__data_mem_grain1
                                                                            [vlSelf->__PVT__data_mem_grain1_adr0] 
                                                                            << 8U) 
                                                                           | vlSelf->__PVT__data_mem_grain0
                                                                           [vlSelf->__PVT__data_mem_grain0_adr0]))))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[1U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__data_mem_grain7
                                     [vlSelf->__PVT__data_mem_grain7_adr0])) 
                     << 0x38U) | (((QData)((IData)(
                                                   vlSelf->__PVT__data_mem_grain6
                                                   [vlSelf->__PVT__data_mem_grain6_adr0])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__data_mem_grain5
                                                                 [vlSelf->__PVT__data_mem_grain5_adr0])) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__data_mem_grain4
                                                                    [vlSelf->__PVT__data_mem_grain4_adr0])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->__PVT__data_mem_grain3
                                                                       [vlSelf->__PVT__data_mem_grain3_adr0] 
                                                                       << 0x18U) 
                                                                      | ((vlSelf->__PVT__data_mem_grain2
                                                                          [vlSelf->__PVT__data_mem_grain2_adr0] 
                                                                          << 0x10U) 
                                                                         | ((vlSelf->__PVT__data_mem_grain1
                                                                             [vlSelf->__PVT__data_mem_grain1_adr0] 
                                                                             << 8U) 
                                                                            | vlSelf->__PVT__data_mem_grain0
                                                                            [vlSelf->__PVT__data_mem_grain0_adr0]))))))))) 
                   >> 0x20U));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[2U] 
        = ((vlSelf->__PVT__data_mem_grain11[vlSelf->__PVT__data_mem_grain11_adr0] 
            << 0x18U) | ((vlSelf->__PVT__data_mem_grain10
                          [vlSelf->__PVT__data_mem_grain10_adr0] 
                          << 0x10U) | ((vlSelf->__PVT__data_mem_grain9
                                        [vlSelf->__PVT__data_mem_grain9_adr0] 
                                        << 8U) | vlSelf->__PVT__data_mem_grain8
                                       [vlSelf->__PVT__data_mem_grain8_adr0])));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[3U] 
        = ((vlSelf->__PVT__data_mem_grain15[vlSelf->__PVT__data_mem_grain15_adr0] 
            << 0x18U) | ((vlSelf->__PVT__data_mem_grain14
                          [vlSelf->__PVT__data_mem_grain14_adr0] 
                          << 0x10U) | ((vlSelf->__PVT__data_mem_grain13
                                        [vlSelf->__PVT__data_mem_grain13_adr0] 
                                        << 8U) | vlSelf->__PVT__data_mem_grain12
                                       [vlSelf->__PVT__data_mem_grain12_adr0])));
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h14e0e0b9_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h115ff64d_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_he9cb56c3_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vsim__ConstPool__TABLE_h3e1e8770_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__16(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__16\n"); );
    // Init
    CData/*2:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*2:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*2:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*2:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*2:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
        = vlSelf->__PVT__tag_mem[vlSelf->__PVT__tag_mem_adr0];
    vlSelf->__PVT__build_soc_coursesimsoc_interface_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_we = 1U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        } else if ((3U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_we = 0U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[0U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[1U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[2U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[3U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read2 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read1;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_status 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_pending) 
            << 1U) | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_pending));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_trigger_d 
        = vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable;
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid = 1U;
        vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
            = (0xffffffU & (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                            >> 2U));
    }
    if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 1U;
    }
    if (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid) 
         & (IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready))) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 0U;
    }
    if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1;
    }
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->__PVT__builder_csr_bankarray_sel_r) {
        vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r 
            = ((0x10U >= (IData)(vlSelf->__PVT__mem_adr0))
                ? vlSelf->__PVT__mem[vlSelf->__PVT__mem_adr0]
                : 0U);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re) {
        vlSelf->__PVT__build_soc_enable_storage = (1U 
                                                   & vlSelf->__PVT__builder_interface1_dat_w);
    }
    __Vtableidx56 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en0 
        = Vsim__ConstPool__TABLE_h14e0e0b9_0[__Vtableidx56];
    __Vtableidx58 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en1 
        = Vsim__ConstPool__TABLE_h115ff64d_0[__Vtableidx58];
    __Vtableidx60 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready 
        = Vsim__ConstPool__TABLE_he9cb56c3_0[__Vtableidx60];
    __Vtableidx55 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0 
        = Vsim__ConstPool__TABLE_h3e1e8770_0[__Vtableidx55];
    __Vtableidx57 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads 
        = Vsim__ConstPool__TABLE_h14e0e0b9_0[__Vtableidx57];
    __Vtableidx59 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes 
        = Vsim__ConstPool__TABLE_h115ff64d_0[__Vtableidx59];
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_scratch_storage 
            = vlSelf->__PVT__builder_interface1_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_reset_storage 
            = (3U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0));
    if (vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read) {
        vlSelf->__PVT__storage_1_dat1 = vlSelf->__PVT__storage_1
            [vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume];
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 1U;
    } else if (vlSymsp->TOP.serial_source_ready) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 0U;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_storage 
            = (3U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid3 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid2;
    if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 0U;
    }
    if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part) {
        if ((3U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
            vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = 0U;
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 1U;
        } else {
            vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux)));
        }
        if ((2U & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
            if ((1U & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                    = ((0xfffU & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U]) 
                       | ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                          << 0xcU));
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
                    = (0xffffU & (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                                   >> 0x14U) | ((IData)(
                                                        (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                                                         >> 0x20U)) 
                                                << 0xcU)));
            } else {
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                    = ((0xffU & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
                       | ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                          << 8U));
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                    = ((0xfffff000U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U]) 
                       | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                           >> 0x18U) | ((IData)((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                                                 >> 0x20U)) 
                                        << 8U)));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                = ((0xfU & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U]) 
                   | ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                      << 4U));
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                = ((0xffffff00U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
                   | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                       >> 0x1cU) | ((IData)((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                                             >> 0x20U)) 
                                    << 4U)));
        } else {
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U] 
                = (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data);
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                = ((0xfffffff0U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U]) 
                   | (IData)((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                              >> 0x20U)));
        }
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux)));
    }
    if (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid) 
         & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready))) {
        vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk 
            = ((0xeU & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
                        << 1U)) | (1U & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
                                         >> 3U)));
    }
    if ((((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid) 
          & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we)) 
         & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
            >> 3U))) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel 
            = ((0xf000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                                             >> 3U)))) 
                           << 0xcU)) | ((0xf00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                                                                  >> 2U)))) 
                                                   << 8U)) 
                                        | ((0xf0U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                                                            >> 1U)))) 
                                             << 4U)) 
                                           | (0xfU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel))))))));
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_storage 
            = (1U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re) {
        vlSelf->__PVT__build_soc_uptime_latch_storage 
            = (1U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_storage 
            = (1U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[0U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[1U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[2U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[3U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read2 = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_trigger_d = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we = 0U;
        vlSelf->__PVT__build_soc_enable_storage = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_scratch_storage = 0x12345678U;
        vlSelf->__PVT__build_soc_coursesimsoc_reset_storage = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_storage = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid3 = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count = 0U;
        vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 0U;
        vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk = 1U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_storage = 0U;
        vlSelf->__PVT__build_soc_uptime_latch_storage = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_storage = 0U;
    }
    vlSelf->__Vdly__build_soc_uptime_cycles = (1ULL 
                                               + vlSelf->__PVT__build_soc_uptime_cycles);
    if (vlSelf->__PVT__build_soc_uptime_latch_re) {
        vlSelf->__PVT__build_soc_uptime_cycles_status 
            = vlSelf->__PVT__build_soc_uptime_cycles;
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_hbf1c8db9_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h7816d9de_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h7483c1fa_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hb0aef77e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_he88ec13e_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__17(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__17\n"); );
    // Init
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*3:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*5:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*5:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*3:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*5:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*3:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*3:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*2:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*3:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*3:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*3:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*2:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*3:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*5:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    // Body
    vlSelf->__Vdly__build_soc_coursesimsoc_timer_value 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_timer_en_storage)
            ? ((0U == vlSelf->__PVT__build_soc_coursesimsoc_timer_value)
                ? vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_storage
                : (vlSelf->__PVT__build_soc_coursesimsoc_timer_value 
                   - (IData)(1U))) : vlSelf->__PVT__build_soc_coursesimsoc_timer_load_storage);
    if (vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_value_status 
            = vlSelf->__PVT__build_soc_coursesimsoc_timer_value;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U] 
            = vlSelf->__PVT__builder_interface1_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U] 
            = vlSelf->__PVT__builder_interface1_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U] 
            = vlSelf->__PVT__builder_interface1_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U] 
            = vlSelf->__PVT__builder_interface1_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_storage 
            = (0x1fffU & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_storage 
            = (3U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U];
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage 
            = (0xffU & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage 
            = (0xfU & vlSelf->__PVT__builder_interface1_dat_w);
    }
    __Vtableidx25 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx25];
    __Vtableidx24 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx24];
    __Vtableidx15 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx15];
    __Vtableidx27 = vlSelf->__PVT__builder_litedramcore_bankmachine1_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx27];
    __Vtableidx19 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx19];
    __Vtableidx17 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx17];
    __Vtableidx14 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx14];
    __Vtableidx13 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx13];
    __Vtableidx4 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                     << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx4];
    __Vtableidx3 = vlSelf->__PVT__builder_litedramcore_bankmachine0_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx3];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx8];
    __Vtableidx6 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx6];
    __Vtableidx35 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx35];
    __Vtableidx34 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx34];
    __Vtableidx38 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx38];
    __Vtableidx37 = vlSelf->__PVT__builder_litedramcore_bankmachine2_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx37];
    __Vtableidx29 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx29];
    __Vtableidx40 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx40];
    __Vtableidx44 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx44];
    __Vtableidx43 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx43];
    __Vtableidx47 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx47];
    __Vtableidx46 = vlSelf->__PVT__builder_litedramcore_bankmachine3_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx46];
    __Vtableidx51 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx51];
    __Vtableidx49 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx49];
    if (vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1) {
        vlSelf->__PVT__builder_interface1_adr = vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1;
    }
    vlSelf->__Vdly__build_soc_cpu_traffic_capture_q 
        = vlSelf->__PVT__build_soc_cpu_traffic_capture_storage;
    if (vlSelf->__PVT__build_soc_cpu_traffic_reset_storage) {
        vlSelf->__Vdly__build_soc_cpu_traffic_ibus_count = 0ULL;
        vlSelf->__Vdly__build_soc_cpu_traffic_dbus_count = 0ULL;
        vlSelf->__Vdly__build_soc_cpu_traffic_dma_count = 0ULL;
    } else {
        if ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC) 
              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB)) 
             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_ibus_ack))) {
            vlSelf->__Vdly__build_soc_cpu_traffic_ibus_count 
                = (4ULL + vlSelf->__PVT__build_soc_cpu_traffic_ibus_count);
        }
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_dbus_ack))) {
            vlSelf->__Vdly__build_soc_cpu_traffic_dbus_count 
                = (vlSelf->__PVT__build_soc_cpu_traffic_dbus_count 
                   + (QData)((IData)((7U & ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL)) 
                                            + ((1U 
                                                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                   >> 1U)) 
                                               + ((1U 
                                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                      >> 2U)) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                      >> 3U)))))))));
        }
        if (((1U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)) 
             & (IData)(vlSelf->__PVT__build_soc_mem_req_ready))) {
            vlSelf->__Vdly__build_soc_cpu_traffic_dma_count 
                = (vlSelf->__PVT__build_soc_cpu_traffic_dma_count 
                   + (QData)((IData)(vlSelf->__PVT__build_soc_cpu_traffic_dma_increment)));
        }
    }
    if (((IData)(vlSelf->__PVT__build_soc_cpu_traffic_capture_storage) 
         & (~ (IData)(vlSelf->__PVT__build_soc_cpu_traffic_capture_q)))) {
        vlSelf->__PVT__build_soc_cpu_traffic_ibus_snapshot 
            = vlSelf->__PVT__build_soc_cpu_traffic_ibus_count;
        vlSelf->__PVT__build_soc_cpu_traffic_dbus_snapshot 
            = vlSelf->__PVT__build_soc_cpu_traffic_dbus_count;
        vlSelf->__PVT__build_soc_cpu_traffic_dma_snapshot 
            = vlSelf->__PVT__build_soc_cpu_traffic_dma_count;
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__build_soc_uptime_cycles_status = 0ULL;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_value_status = 0U;
        vlSelf->__Vdly__build_soc_coursesimsoc_timer_value = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage = 1U;
        vlSelf->__Vdly__build_soc_cpu_traffic_ibus_count = 0ULL;
        vlSelf->__Vdly__build_soc_cpu_traffic_dbus_count = 0ULL;
        vlSelf->__PVT__build_soc_cpu_traffic_ibus_snapshot = 0ULL;
        vlSelf->__PVT__build_soc_cpu_traffic_dbus_snapshot = 0ULL;
        vlSelf->__Vdly__build_soc_cpu_traffic_capture_q = 0U;
        vlSelf->__Vdly__build_soc_cpu_traffic_dma_count = 0ULL;
        vlSelf->__PVT__build_soc_cpu_traffic_dma_snapshot = 0ULL;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
               | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid 
            = (0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_first 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
                     >> 0x17U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_last 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
                     >> 0x18U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we 
            = (1U & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r);
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
                            >> 1U));
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__19(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__19\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras;
    } else {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras;
    }
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras;
    } else {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras;
    }
    vlSelf->__PVT__build_soc_cpu_traffic_capture_q 
        = vlSelf->__Vdly__build_soc_cpu_traffic_capture_q;
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_count 
        = vlSelf->__Vdly__build_soc_cpu_traffic_ibus_count;
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_count 
        = vlSelf->__Vdly__build_soc_cpu_traffic_dbus_count;
    vlSelf->__PVT__build_soc_cpu_traffic_dma_count 
        = vlSelf->__Vdly__build_soc_cpu_traffic_dma_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
        = vlSelf->__PVT__storage_3[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_level;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
        = vlSelf->__PVT__storage_2[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_level;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
        = vlSelf->__PVT__storage_4[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_level;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
        = vlSelf->__PVT__storage_5[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_level;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid8 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid7;
    vlSelf->__PVT__builder_self0 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                     ? 0U : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelf->__PVT__builder_rhs_self16)
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                  ? (IData)(vlSelf->__PVT__builder_rhs_self16)
                                                  : (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done0 
        = ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count)) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx0 
        = (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0));
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U] 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U];
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read1 
        = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read0;
    if (vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 1U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 0U;
    }
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we;
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            if ((3U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we 
                    = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we;
            }
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start1 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0));
    vlSelf->__PVT__build_soc_coursesimsoc_soc_rst = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_reset_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_soc_rst 
            = (1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_reset_storage));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)) 
              | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid2 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid1;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[0U] 
        = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U];
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[1U] 
        = ((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
            << 0x1cU) | (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                         >> 4U));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[2U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
                                      << 0x14U) | (
                                                   vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                                   >> 0xcU)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                                  << 0x18U) 
                                                 | (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                    >> 8U))))));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[3U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
                                       << 0x14U) | 
                                      (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                       >> 0xcU)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                     >> 8U))))) 
                   >> 0x20U));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we 
        = ((0xf000U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U]) 
           | ((0xf00U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U]) 
              | ((0xf0U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
                 | (0xfU & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U]))));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid 
        = (0U != ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid 
        = (0U != ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk)));
    vlSelf->__PVT__build_soc_uptime_latch_re = vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_status 
        = (0U == vlSelf->__PVT__build_soc_coursesimsoc_timer_value);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_re 
        = vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_re;
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_en_storage 
            = (1U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_storage 
            = vlSelf->__PVT__builder_interface1_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_load_storage 
            = vlSelf->__PVT__builder_interface1_dat_w;
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid8 = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read1 = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid2 = 0U;
        vlSelf->__PVT__build_soc_uptime_latch_re = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_re = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_en_storage = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_storage = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_timer_load_storage = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n 
        = ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (1U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage) 
                     >> 3U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read3;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = 0U;
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read3;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__29(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__29\n"); );
    // Body
    vlSelf->__PVT__builder_rhs_self2 = ((IData)(vlSelf->__PVT__builder_grant)
                                         ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL)
                                         : 0xfU);
    vlSelf->__PVT__builder_request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                       << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__33(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__33\n"); );
    // Init
    CData/*0:0*/ __VdfgExtracted_h47e9c76d__0;
    __VdfgExtracted_h47e9c76d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hf43c3f12__0;
    __VdfgExtracted_hf43c3f12__0 = 0;
    // Body
    if (vlSelf->__PVT__builder_grant) {
        vlSelf->__PVT__builder_rhs_self1 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data;
        vlSelf->__PVT__builder_rhs_self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSelf->__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSelf->__PVT__builder_rhs_self0 = (0x3fffffffU 
                                            & (((5U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                 ? 
                                                ((0xffffffe0U 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                 | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                                    << 2U))
                                                 : 
                                                (0xfffffffcU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                               >> 2U));
    } else {
        vlSelf->__PVT__builder_rhs_self1 = 0U;
        vlSelf->__PVT__builder_rhs_self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
        vlSelf->__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
        vlSelf->__PVT__builder_rhs_self0 = (0x3fffffffU 
                                            & ((0x3ffffff8U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 2U)) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
    }
    vlSelf->__PVT__builder_rhs_self5 = ((IData)(vlSelf->__PVT__builder_grant) 
                                        && (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] = 0U;
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
    }
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 
                = vlSelf->__PVT__builder_rhs_self1;
        }
    }
    __VdfgExtracted_h47e9c76d__0 = ((IData)(vlSelf->__PVT__builder_rhs_self4) 
                                    & (IData)(vlSelf->__PVT__builder_rhs_self5));
    vlSelf->__VdfgExtracted_h34e003a0__0 = ((0x3ffe00U 
                                             & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                                << 7U)) 
                                            | (0x1ffU 
                                               & (vlSelf->__PVT__builder_rhs_self0 
                                                  >> 2U)));
    vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_payload_addr 
        = ((0xfffe00U & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                         << 9U)) | (0x1ffU & (vlSelf->__PVT__builder_rhs_self0 
                                              >> 2U)));
    vlSelf->__VdfgExtracted_h9f6f40cd__0 = ((0x1fffffU 
                                             & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r) 
                                            == (0x7ffffU 
                                                & (vlSelf->__PVT__builder_rhs_self0 
                                                   >> 0xbU)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed 
        = ((0xffffffU & (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                         >> 2U)) != (0xffffffU & ((vlSelf->__PVT__builder_rhs_self0 
                                                   - (IData)(0x800000U)) 
                                                  >> 2U)));
    vlSelf->__PVT__builder_slave_sel = ((((0xf000U 
                                           == (0xffffU 
                                               & (vlSelf->__PVT__builder_rhs_self0 
                                                  >> 0xeU))) 
                                          << 5U) | 
                                         ((0xe0000U 
                                           == (0xfffffU 
                                               & (vlSelf->__PVT__builder_rhs_self0 
                                                  >> 0xaU))) 
                                          << 4U)) | 
                                        ((((0x71U == 
                                            (0x7fU 
                                             & (vlSelf->__PVT__builder_rhs_self0 
                                                >> 0x17U))) 
                                           << 3U) | 
                                          ((4U == (0xfU 
                                                   & (vlSelf->__PVT__builder_rhs_self0 
                                                      >> 0x1aU))) 
                                           << 2U)) 
                                         | (((0x8000U 
                                              == (0x7ffffU 
                                                  & (vlSelf->__PVT__builder_rhs_self0 
                                                     >> 0xbU))) 
                                             << 1U) 
                                            | (0U == 
                                               (0x7fffU 
                                                & (vlSelf->__PVT__builder_rhs_self0 
                                                   >> 0xfU))))));
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[3U] = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
            if (vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid4) {
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[0U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[1U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[2U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[3U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
            }
        }
    }
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid14 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid13;
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid14 = 0U;
    }
    vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid 
        = __VdfgExtracted_h47e9c76d__0;
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing)))) {
        vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_tag_di_dirty = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
        if (vlSelf->__VdfgExtracted_h9f6f40cd__0) {
            vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack = 1U;
            if (vlSelf->__PVT__builder_rhs_self5) {
                vlSelf->__PVT__build_soc_coursesimsoc_tag_di_dirty = 1U;
            }
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc 
        = ((IData)(vlSelf->__PVT__builder_rhs_self3) 
           & ((IData)(vlSelf->__PVT__builder_slave_sel) 
              >> 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_cyc 
        = ((IData)(vlSelf->__PVT__builder_rhs_self3) 
           & ((IData)(vlSelf->__PVT__builder_slave_sel) 
              >> 2U));
    __VdfgExtracted_hf43c3f12__0 = (((IData)(vlSelf->__PVT__builder_rhs_self3) 
                                     & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                        >> 5U)) & (IData)(vlSelf->__PVT__builder_rhs_self4));
    vlSelf->__PVT__build_soc_uncached_wb_cyc = ((IData)(vlSelf->__PVT__builder_rhs_self3) 
                                                & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                                   >> 3U));
    vlSelf->__VdfgTmp_he06a0c02__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc) 
                                      & (IData)(__VdfgExtracted_h47e9c76d__0));
    vlSelf->__PVT__builder_wishbone2csr_next_state 
        = vlSelf->__PVT__builder_wishbone2csr_state;
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 0U;
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 0U;
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 0U;
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        vlSelf->__PVT__builder_wishbone2csr_next_state = 2U;
        vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
        vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
        vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
        vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
        vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
        vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    } else {
        if ((2U == (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_wishbone2csr_next_state = 0U;
        } else if (__VdfgExtracted_hf43c3f12__0) {
            vlSelf->__PVT__builder_wishbone2csr_next_state = 1U;
        }
        if ((2U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            if (__VdfgExtracted_hf43c3f12__0) {
                vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
                vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
                vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
                vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 
                    = (0x3fffU & vlSelf->__PVT__builder_rhs_self0);
                vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 
                    = ((~ (IData)(vlSelf->__PVT__builder_rhs_self5)) 
                       & (0U != (IData)(vlSelf->__PVT__builder_rhs_self2)));
                vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 
                    = ((IData)(vlSelf->__PVT__builder_rhs_self5) 
                       & (0U != (IData)(vlSelf->__PVT__builder_rhs_self2)));
            }
        }
    }
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value 
        = (1U & ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))
                  ? ((~ (IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc)) 
                     | (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted))
                  : ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state)) 
                     && (1U & ((~ (IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc)) 
                               | (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted))))));
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
            vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid 
                = ((IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc) 
                   & (IData)(vlSelf->__PVT__builder_rhs_self4));
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd 
        = (1U & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed) 
                 | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                     != (IData)(vlSelf->__PVT__builder_rhs_self5)) 
                    | ((0xfU == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel)) 
                       | ((~ (IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc)) 
                          | (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last))))));
}
