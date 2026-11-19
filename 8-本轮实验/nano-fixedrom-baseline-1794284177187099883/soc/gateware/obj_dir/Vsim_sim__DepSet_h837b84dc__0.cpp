// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___ico_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ico_sequent__TOP__sim__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)) 
              | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__1(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count;
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & (IData)(vlSymsp->TOP.serial_sink_ready))) {
        vlSelfRef.__VdlyVal__storage_1__v0 = vlSymsp->TOP.serial_sink_data;
        vlSelfRef.__VdlyDim0__storage_1__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr;
        vlSelfRef.__VdlySet__storage_1__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__2(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxtx_re) 
         & (0x10U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)))) {
        vlSelfRef.__VdlyVal__storage__v0 = (0xffU & vlSelfRef.__PVT__builder_interface1_dat_w);
        vlSelfRef.__VdlyDim0__storage__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr;
        vlSelfRef.__VdlySet__storage__v0 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce)));
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
         & (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))) {
        vlSelfRef.__Vlvbound_he973b6be__0 = (((QData)((IData)(vlSelfRef.__PVT__builder_rhs_self2)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__builder_rhs_self1)));
        if ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr))) {
            vlSelfRef.__VdlyVal__storage_7__v0 = vlSelfRef.__Vlvbound_he973b6be__0;
            vlSelfRef.__VdlyDim0__storage_7__v0 = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr;
            vlSelfRef.__VdlySet__storage_7__v0 = 1U;
        }
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce 
            = ((2U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce))));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume)));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume)));
    }
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & (IData)(vlSymsp->TOP.serial_sink_ready))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce)));
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)));
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0) 
                        - (IData)(1U)));
    }
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_timer_count1 
        = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_wait) 
            & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_i)))
            ? (0x3ffU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1) 
                         - (IData)(1U))) : 0x30dU);
    if ((0xffffffffU != vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors)) {
        if (vlSelfRef.__PVT__builder_error) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_bus_errors 
                = ((IData)(1U) + vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors);
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready = 1U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en1) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_max_time1)))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1 
                = (0xfU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1) 
                           - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1 = 0xfU;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en0) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_max_time0)))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0) 
                            - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0 = 0x1fU;
    }
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume 
            = ((2U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))));
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxtx_re) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx0))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)));
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0) 
                        - (IData)(1U)));
    }
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume 
            = ((2U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume)));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume)));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume)));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_consume 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume)));
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__builder_rhs_self8)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
            if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
                if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 2U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 3U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
            if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 2U;
            } else if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 3U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 2U;
        } else if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 3U;
        }
    }
    if (((0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)) 
         & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux 
            = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last)
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
         & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_sink_ready))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read)))) {
            vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)));
        }
    } else if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read) {
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level 
            = (3U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level) 
                     - (IData)(1U)));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_consume = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_consume = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_timer_count1 = 0x30dU;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_bus_errors = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0 = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0 = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0 = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_consume = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_consume = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_consume = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_consume = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux = 0U;
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self22) 
         & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) {
        vlSelfRef.__VdlyVal__storage_2__v0 = ((vlSelfRef.__PVT__builder_rhs_self20 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__builder_rhs_self21));
        vlSelfRef.__VdlyDim0__storage_2__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr;
        vlSelfRef.__VdlySet__storage_2__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__9(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_mem_grain1_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain2_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain3_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__builder_litedramwishbone2native0_state 
        = vlSelfRef.__PVT__builder_litedramwishbone2native0_next_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n 
        = (1U & (~ (IData)(vlSelfRef.__PVT__builder_self4)));
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n 
        = (1U & (~ (IData)(vlSelfRef.__PVT__builder_self2)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n 
        = (1U & (~ (IData)(vlSelfRef.__PVT__builder_self3)));
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0;
    }
    vlSelfRef.__PVT__tag_mem_adr0 = (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                                               >> 2U));
    vlSelfRef.__PVT__builder_fullmemorywe_state = vlSelfRef.__PVT__builder_fullmemorywe_next_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[0U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[1U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[2U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[3U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read3 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read2;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_clear) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_pending = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable) 
         & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_trigger_d)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_pending = 1U;
    }
    vlSelfRef.__PVT__builder_litedramcore_state = vlSelfRef.__PVT__builder_litedramcore_next_state;
    if (vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3) {
        vlSelfRef.__PVT__builder_interface1_we = vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3;
    }
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock = 0U;
    } else if (((((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                  & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed)) 
                     & ((~ (IData)(vlSelfRef.__PVT__builder_rhs_self5)) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid)))) 
                 & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid))) 
                & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked)))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock = 1U;
    }
    vlSelfRef.__PVT__mem_adr0 = (0x1fU & (IData)(vlSelfRef.__PVT__builder_interface1_adr));
    vlSelfRef.__PVT__builder_csr_bankarray_sel_r = 
        (3U == (0x1fU & ((IData)(vlSelfRef.__PVT__builder_interface1_adr) 
                         >> 9U)));
    vlSelfRef.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelfRef.__PVT__accelerator_shell__DOT__irq_q;
        } else if ((1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelfRef.__PVT__accelerator_shell__DOT__irq_q;
        } else if ((2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_enable_storage;
        }
    }
    vlSelfRef.__PVT__builder_litedramcore_multiplexer_state 
        = vlSelfRef.__PVT__builder_litedramcore_multiplexer_next_state;
    vlSelfRef.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = 0U;
    if ((2U == (0x1fU & ((IData)(vlSelfRef.__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_reset_storage;
        } else if ((1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_scratch_storage;
        } else if ((2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors;
        }
    }
    vlSelfRef.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r = 0U;
    if ((6U == (0x1fU & ((IData)(vlSelfRef.__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                    ? (0xffU & (IData)(vlSelfRef.__PVT__storage_1_dat1))
                    : ((1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                        ? (0x10U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))
                        : ((2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                            ? (1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)))
                            : ((3U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_status_status)
                                : ((4U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                    ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_status)
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                        ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_storage)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                            ? (1U & 
                                               (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)))
                                            : (1U & 
                                               (~ (IData)(vlSymsp->TOP.serial_sink_ready))))))))));
        }
    }
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid4 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid3;
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid)) 
               | (IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1)))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_first = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_last = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[0U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[0U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[1U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[1U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[2U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[2U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[3U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[3U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we 
            = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we) 
               & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramwishbone2native0_state = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n = 1U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n = 1U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr = 0U;
        vlSelfRef.__PVT__builder_fullmemorywe_state = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read3 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_pending = 0U;
        vlSelfRef.__PVT__builder_litedramcore_state = 0U;
        vlSelfRef.__PVT__builder_interface1_we = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock = 0U;
        vlSelfRef.__PVT__builder_csr_bankarray_sel_r = 0U;
        vlSelfRef.__PVT__builder_litedramcore_multiplexer_state = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid4 = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[0U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[1U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[2U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[3U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we = 0U;
    }
    vlSelfRef.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r = 0U;
    if ((5U == (0x1fU & ((IData)(vlSelfRef.__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                    ? vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_storage
                    : ((1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                        ? vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_storage
                        : ((2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                            ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_storage)
                            : ((3U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_storage)
                                : ((4U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                    ? vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value_status
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                        ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_status)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                            ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending)
                                            : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_storage))))))));
        } else if ((8U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_uptime_latch_storage;
        } else if ((9U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                = (IData)((vlSelfRef.__PVT__build_soc_uptime_cycles_status 
                           >> 0x20U));
        } else if ((0xaU == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                = (IData)(vlSelfRef.__PVT__build_soc_uptime_cycles_status);
        }
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__13(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_postponer_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_timer_count1;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_bus_errors;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_max_time1 
        = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_max_time0 
        = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce;
    vlSelfRef.__PVT__builder_rhs_self10 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                              ? 2U : 3U)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last 
        = (3U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_sink_ready 
        = (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce;
    vlSelfRef.__PVT__builder_error = (0U == vlSelfRef.__PVT__builder_count);
    vlSelfRef.__PVT__builder_rhs_self6 = ((IData)(vlSelfRef.__PVT__builder_grant)
                                           ? ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                               ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                                   ? 7U
                                                   : 2U)
                                               : 0U)
                                           : ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                               ? 7U
                                               : 2U));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_sink_ready 
        = (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level));
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid9 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid8;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid9 = 0U;
    }
    vlSelfRef.__PVT__builder_rhs_self16 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                              ? 2U : 3U)));
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h85140e42_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h25847427_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vsim__ConstPool__TABLE_hb3efc88a_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h0d0ea857_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__14(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 0U;
    if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start1) 
         & (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0x400U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 1U;
    }
    if ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0x400U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
    }
    if ((9U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 1U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger = 0U;
    } else if ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger)));
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start1) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger = 1U;
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
        = ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))
            ? vlSelfRef.__PVT__storage_7[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume]
            : 0ULL);
    if ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[0U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][0U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[1U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][1U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[2U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][2U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[3U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][3U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U];
    } else {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[0U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[1U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[2U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[3U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U] = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_wait 
        = (0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_i 
        = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelfRef.__PVT__build_soc_clear = ((IData)(vlSelfRef.__PVT__build_soc_pending_r) 
                                        & (IData)(vlSelfRef.__PVT__build_soc_pending_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_clear 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_re) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_r));
    vlSelfRef.__PVT__builder_interface0_ack = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_interface0_ack = 1U;
        }
    }
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_is_ongoing 
        = (1U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_trigger_d 
        = (0x10U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0));
    vlSelfRef.__VdfgRegularize_h787163e4_0_45 = (((
                                                   vlSelfRef.__PVT__data_mem_grain3
                                                   [vlSelfRef.__PVT__data_mem_grain3_adr0] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.__PVT__data_mem_grain2
                                                     [vlSelfRef.__PVT__data_mem_grain2_adr0] 
                                                     << 0x10U)) 
                                                 | ((vlSelfRef.__PVT__data_mem_grain1
                                                     [vlSelfRef.__PVT__data_mem_grain1_adr0] 
                                                     << 8U) 
                                                    | vlSelfRef.__PVT__data_mem_grain0
                                                    [vlSelfRef.__PVT__data_mem_grain0_adr0]));
    vlSelfRef.__PVT__build_soc_coursesimsoc_is_ongoing 
        = (1U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_tag_do_dirty 
        = (1U & (vlSelfRef.__PVT__tag_mem[vlSelfRef.__PVT__tag_mem_adr0] 
                 >> 0x15U));
    vlSelfRef.__VdfgRegularize_h32427ced_0_40 = (3U 
                                                 & vlSelfRef.__PVT__tag_mem
                                                 [vlSelfRef.__PVT__tag_mem_adr0]);
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we = 1U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we = 0U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[0U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[1U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[2U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[3U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read2 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read1;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_status 
        = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_pending) 
            << 1U) | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_pending));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_trigger_d 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable;
    vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid 
        = (1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_state));
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
         & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1;
    }
    vlSelfRef.__PVT__builder_csr_bankarray_sram_bus_dat_r 
        = ((IData)(vlSelfRef.__PVT__builder_csr_bankarray_sel_r)
            ? ((0x10U >= (IData)(vlSelfRef.__PVT__mem_adr0))
                ? vlSelfRef.__PVT__mem[vlSelfRef.__PVT__mem_adr0]
                : 0U) : 0U);
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re) {
        vlSelfRef.__PVT__build_soc_enable_storage = 
            (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    __Vtableidx56 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en0 
        = Vsim__ConstPool__TABLE_h85140e42_0[__Vtableidx56];
    __Vtableidx58 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en1 
        = Vsim__ConstPool__TABLE_h25847427_0[__Vtableidx58];
    __Vtableidx55 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0 
        = Vsim__ConstPool__TABLE_hb3efc88a_0[__Vtableidx55];
    __Vtableidx60 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_ready 
        = Vsim__ConstPool__TABLE_h0d0ea857_0[__Vtableidx60];
    __Vtableidx57 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads 
        = Vsim__ConstPool__TABLE_h85140e42_0[__Vtableidx57];
    __Vtableidx59 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes 
        = Vsim__ConstPool__TABLE_h25847427_0[__Vtableidx59];
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_scratch0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_scratch_storage 
            = vlSelfRef.__PVT__builder_interface1_dat_w;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_reset0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_reset_storage 
            = (3U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read) {
        vlSelfRef.__PVT__storage_1_dat1 = vlSelfRef.__PVT__storage_1
            [vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume];
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 1U;
    } else if (vlSymsp->TOP.serial_source_ready) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 0U;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_storage 
            = (3U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid3 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid2;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_trigger_d = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read2 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_trigger_d = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we = 0U;
        vlSelfRef.__PVT__build_soc_enable_storage = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_scratch_storage = 0x12345678U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reset_storage = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_storage = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid3 = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part) {
        if ((3U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
            vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = 0U;
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 1U;
        } else {
            vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux)));
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_hd2aee074_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_he06485ad_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h940dac24_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h1f6686ad_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h2351faa6_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__15(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    CData/*3:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*3:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*2:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*3:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    // Body
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part) {
        if ((2U & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
            if ((1U & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                    = ((0xfffU & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U]) 
                       | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                          << 0xcU));
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
                    = (0xffffU & (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                                   >> 0x14U) | ((IData)(
                                                        (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                                                         >> 0x20U)) 
                                                << 0xcU)));
            } else {
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                    = ((0xffU & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
                       | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                          << 8U));
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                    = ((0xfffff000U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U]) 
                       | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                           >> 0x18U) | ((IData)((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                                                 >> 0x20U)) 
                                        << 8U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux))) {
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                = ((0xfU & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U]) 
                   | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                      << 4U));
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                = ((0xffffff00U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
                   | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data) 
                       >> 0x1cU) | ((IData)((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                                             >> 0x20U)) 
                                    << 4U)));
        } else {
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U] 
                = (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data);
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                = ((0xfffffff0U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U]) 
                   | (IData)((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
                              >> 0x20U)));
        }
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux)));
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid) 
         & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready))) {
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk 
            = ((0xeU & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
                        << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
                                         >> 3U)));
    }
    if ((((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid) 
          & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we)) 
         & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
            >> 3U))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel 
            = (((0xf000U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                                              >> 3U)))) 
                            << 0xcU)) | (0xf00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                                                                  >> 2U)))) 
                                                   << 8U))) 
               | ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                                              >> 1U)))) 
                            << 4U)) | (0xfU & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel)))))));
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_update_value0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_storage 
            = (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re) {
        vlSelfRef.__PVT__build_soc_uptime_latch_storage 
            = (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_storage 
            = (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    vlSelfRef.__Vdly__build_soc_uptime_cycles = (1ULL 
                                                 + vlSelfRef.__PVT__build_soc_uptime_cycles);
    if (vlSelfRef.__PVT__build_soc_uptime_latch_re) {
        vlSelfRef.__PVT__build_soc_uptime_cycles_status 
            = vlSelfRef.__PVT__build_soc_uptime_cycles;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_clear) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_status) 
         & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_trigger_d)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending = 1U;
    }
    vlSelfRef.__Vdly__build_soc_coursesimsoc_timer_value 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_storage)
            ? ((0U == vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value)
                ? vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_storage
                : (vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value 
                   - (IData)(1U))) : vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_storage);
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value_status 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U] 
            = vlSelfRef.__PVT__builder_interface1_dat_w;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U] 
            = vlSelfRef.__PVT__builder_interface1_dat_w;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U] 
            = vlSelfRef.__PVT__builder_interface1_dat_w;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U] 
            = vlSelfRef.__PVT__builder_interface1_dat_w;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_storage 
            = (0x1fffU & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_storage 
            = (3U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U];
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage 
            = (0xffU & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage 
            = (0xfU & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1) {
        vlSelfRef.__PVT__builder_interface1_adr = vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1;
    }
    vlSelfRef.__Vdly__build_soc_cpu_traffic_capture_q 
        = vlSelfRef.__PVT__build_soc_cpu_traffic_capture_storage;
    if (vlSelfRef.__PVT__build_soc_cpu_traffic_reset_storage) {
        vlSelfRef.__Vdly__build_soc_cpu_traffic_ibus_count = 0ULL;
        vlSelfRef.__Vdly__build_soc_cpu_traffic_dbus_count = 0ULL;
        vlSelfRef.__Vdly__build_soc_cpu_traffic_dma_count = 0ULL;
    } else {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC) 
             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ACK))) {
            vlSelfRef.__Vdly__build_soc_cpu_traffic_ibus_count 
                = (4ULL + vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_count);
        }
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ACK))) {
            vlSelfRef.__Vdly__build_soc_cpu_traffic_dbus_count 
                = (vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_count 
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
        if (((1U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)) 
             & (IData)(vlSelfRef.__PVT__build_soc_mem_req_ready))) {
            vlSelfRef.__Vdly__build_soc_cpu_traffic_dma_count 
                = (vlSelfRef.__PVT__build_soc_cpu_traffic_dma_count 
                   + (QData)((IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_dma_increment)));
        }
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_capture_storage) 
         & (~ (IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_capture_q)))) {
        vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_snapshot 
            = vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_count;
        vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_snapshot 
            = vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_count;
        vlSelfRef.__PVT__build_soc_cpu_traffic_dma_snapshot 
            = vlSelfRef.__PVT__build_soc_cpu_traffic_dma_count;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count = 0U;
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 0U;
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk = 1U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_storage = 0U;
        vlSelfRef.__PVT__build_soc_uptime_latch_storage = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_storage = 0U;
        vlSelfRef.__PVT__build_soc_uptime_cycles_status = 0ULL;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value_status = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_timer_value = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage = 1U;
        vlSelfRef.__Vdly__build_soc_cpu_traffic_ibus_count = 0ULL;
        vlSelfRef.__Vdly__build_soc_cpu_traffic_dbus_count = 0ULL;
        vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_snapshot = 0ULL;
        vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_snapshot = 0ULL;
        vlSelfRef.__Vdly__build_soc_cpu_traffic_capture_q = 0U;
        vlSelfRef.__Vdly__build_soc_cpu_traffic_dma_count = 0ULL;
        vlSelfRef.__PVT__build_soc_cpu_traffic_dma_snapshot = 0ULL;
    }
    __Vtableidx14 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx14];
    __Vtableidx13 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx13];
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                     << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx4];
    __Vtableidx3 = vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx3];
    __Vtableidx8 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[__Vtableidx8];
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx6];
    __Vtableidx44 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx44];
    __Vtableidx43 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx43];
    __Vtableidx47 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx47];
    __Vtableidx46 = vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx46];
    vlSelfRef.__Vtableidx51 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                                << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                           << 4U) | 
                                          (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__18(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start1 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0));
    vlSelfRef.__PVT__build_soc_coursesimsoc_soc_rst 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_reset_re) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_reset_storage));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)) 
              | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid2 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid1;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[0U] 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[1U] 
        = (IData)((((QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                      << 0x18U) | (
                                                   vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                   >> 8U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                  << 0x1cU) 
                                                 | (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                                                    >> 4U))))));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[2U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                       << 0x18U) | 
                                      (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                       >> 8U)))) << 0x20U) 
                    | (QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                        << 0x1cU) | 
                                       (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                                        >> 4U))))) 
                   >> 0x20U));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[3U] 
        = ((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
            << 0x14U) | (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                         >> 0xcU));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we 
        = (((0xf000U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U]) 
            | (0xf00U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U])) 
           | ((0xf0U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
              | (0xfU & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U])));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid 
        = (0U != ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid 
        = (0U != ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk)));
    vlSelfRef.__PVT__build_soc_uptime_latch_re = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_status 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_trigger_d 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_status;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_update_value0_re;
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_en0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_storage 
            = (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_reload0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_storage 
            = vlSelfRef.__PVT__builder_interface1_dat_w;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_load0_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_storage 
            = vlSelfRef.__PVT__builder_interface1_dat_w;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid2 = 0U;
        vlSelfRef.__PVT__build_soc_uptime_latch_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_trigger_d = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_storage = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_storage = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_storage = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n 
        = ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage) 
                     >> 3U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read3;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_storage;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_storage;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read3));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke 
        = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 1U));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt 
        = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 2U));
    vlSelfRef.__VdfgExtracted_h25346117__0 = (IData)(
                                                     (0U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h24fc13b9__0 = (IData)(
                                                     (1U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2533be31__0 = (IData)(
                                                     (2U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef687232__0 = (IData)(
                                                     (0x200U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_he461509c__0 = (IData)(
                                                     (0x201U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef761210__0 = (IData)(
                                                     (0x202U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_he461317e__0 = (IData)(
                                                     (0x203U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_he460bdc9__0 = (IData)(
                                                     (0x204U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef6d69c2__0 = (IData)(
                                                     (0x205U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef75d414__0 = (IData)(
                                                     (0x206U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef6b8ce0__0 = (IData)(
                                                     (0x207U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h3fb6d6f0__0 = (IData)(
                                                     (0x400U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h3fa7b93a__0 = (IData)(
                                                     (0x401U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h3fb673d2__0 = (IData)(
                                                     (0x402U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a80050__0 = (IData)(
                                                     (0x800U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5cbde46__0 = (IData)(
                                                     (0x801U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5cbbe0c__0 = (IData)(
                                                     (0x803U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5cf6e57__0 = (IData)(
                                                     (0x804U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a8f9c0__0 = (IData)(
                                                     (0x805U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a8e03e__0 = (IData)(
                                                     (0x806U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a906da__0 = (IData)(
                                                     (0x807U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4aa8d69__0 = (IData)(
                                                     (0x808U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5d3f333__0 = (IData)(
                                                     (0x809U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4aad40b__0 = (IData)(
                                                     (0x80aU 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__26(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__builder_rhs_self2 = ((IData)(vlSelfRef.__PVT__builder_grant)
                                           ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL)
                                           : 0xfU);
    vlSelfRef.__PVT__builder_request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                         << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
}

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__28(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_status_status = vlSelfRef.__PVT__accelerator_shell__DOT__irq_q;
    vlSelfRef.__PVT__build_soc_pending_status = vlSelfRef.__PVT__accelerator_shell__DOT__irq_q;
    if (vlSelfRef.__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        if (((1U == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & (IData)(vlSelfRef.__PVT__build_soc_csr_req_ready))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                                    vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q 
                                        = vlSelfRef.__PVT__accelerator_shell__DOT__cycles_q;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((4U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q))) {
            vlSelfRef.__PVT__accelerator_shell__DOT__status_q 
                = vlSelfRef.__PVT__litex_descriptor_engine__DOT__status_q;
            vlSelfRef.__PVT__accelerator_shell__DOT__cycles_q 
                = vlSelfRef.__PVT__litex_descriptor_engine__DOT__cycles_q;
        }
    } else {
        vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q = 0ULL;
        vlSelfRef.__PVT__accelerator_shell__DOT__status_q = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__cycles_q = 0ULL;
    }
    if (vlSelfRef.__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        if (((0U != (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)) 
             & (4U != (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)))) {
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__cycles_q 
                = (1ULL + vlSelfRef.__PVT__litex_descriptor_engine__DOT__cycles_q);
        }
        if ((4U & (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q))) {
            vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q))) {
                if ((((1U != (0xffU & vlSelfRef.__PVT__litex_descriptor_engine__DOT__header_q)) 
                      | ((0xffU & (vlSelfRef.__PVT__litex_descriptor_engine__DOT__header_q 
                                   >> 8U)) != (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__opcode_q))) 
                     | (0U != vlSelfRef.__PVT__litex_descriptor_engine__DOT__reserved_q))) {
                    vlSelfRef.__PVT__litex_descriptor_engine__DOT__status_q = 1U;
                }
                vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 4U;
            } else if (((7U == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                        | (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))) {
                vlSelfRef.__PVT__litex_descriptor_engine__DOT__response_count_q 
                    = ((IData)(1U) + vlSelfRef.__PVT__litex_descriptor_engine__DOT__response_count_q);
                vlSelfRef.__Vdly__litex_descriptor_engine__DOT__outstanding_q = 0U;
                if (vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q) {
                    vlSelfRef.__PVT__litex_descriptor_engine__DOT__status_q = 5U;
                    vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 4U;
                } else {
                    VL_ASSIGNSEL_WW(512, 128, (0x1ffU 
                                               & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q), 7U)), vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q, vlSelfRef.__PVT__build_soc_mem_rsp_data);
                    if ((0U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q))) {
                        vlSelfRef.__PVT__litex_descriptor_engine__DOT__header_q 
                            = vlSelfRef.__PVT__build_soc_mem_rsp_data[0U];
                    }
                    if ((3U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q))) {
                        vlSelfRef.__PVT__litex_descriptor_engine__DOT__reserved_q 
                            = vlSelfRef.__PVT__build_soc_mem_rsp_data[3U];
                    }
                    if ((3U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q))) {
                        vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 3U;
                    } else {
                        vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q)));
                        vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 1U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q))) {
            if (vlSelfRef.__PVT__build_soc_mem_req_ready) {
                vlSelfRef.__PVT__litex_descriptor_engine__DOT__request_count_q 
                    = ((IData)(1U) + vlSelfRef.__PVT__litex_descriptor_engine__DOT__request_count_q);
                vlSelfRef.__Vdly__litex_descriptor_engine__DOT__outstanding_q = 1U;
                vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 2U;
            }
        } else if (vlSelfRef.__PVT__accelerator_shell__DOT__pending_q) {
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q = 0U;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__request_count_q = 0U;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__response_count_q = 0U;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__opcode_q 
                = vlSelfRef.__PVT__accelerator_shell__DOT__opcode_q;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__address_q 
                = vlSelfRef.__PVT__accelerator_shell__DOT__desc_q;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__header_q = 0U;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__reserved_q = 0U;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xaU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xbU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xcU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xdU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xeU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xfU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xfU];
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__cycles_q = 0ULL;
            vlSelfRef.__PVT__litex_descriptor_engine__DOT__status_q = 0U;
            vlSelfRef.__Vdly__litex_descriptor_engine__DOT__outstanding_q = 0U;
            if ((((0U != (0x3fU & vlSelfRef.__PVT__accelerator_shell__DOT__desc_q)) 
                  | (0U == (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__opcode_q))) 
                 | (4U < (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__opcode_q)))) {
                vlSelfRef.__PVT__litex_descriptor_engine__DOT__status_q = 1U;
                vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 4U;
            } else {
                vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 1U;
            }
        }
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__outstanding_q) 
                              & (1U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)))))) {
                VL_WRITEF_NX("[%0t] %%Error: litex_descriptor_engine.sv:121: Assertion failed in %Nsim.litex_descriptor_engine: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/mnt/d/Users/Camellia/Desktop/\351\233\206\346\210\220\347\224\265\350\267\257\350\256\276\350\256\241\344\270\216\345\210\206\346\236\220-RouteB\344\272\244\344\273\230/student-mini-v1-cpu-gpu/sources/shared/rtl/litex_descriptor_engine.sv", 121, "");
            }
        }
    } else {
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q = 0U;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__request_count_q = 0U;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__response_count_q = 0U;
        vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q = 0U;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__opcode_q = 0U;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__address_q = 0U;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__header_q = 0U;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__reserved_q = 0U;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xaU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xbU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xcU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xdU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xeU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__descriptor_q[0xfU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__cycles_q = 0ULL;
        vlSelfRef.__PVT__litex_descriptor_engine__DOT__status_q = 0U;
        vlSelfRef.__Vdly__litex_descriptor_engine__DOT__outstanding_q = 0U;
    }
    if (vlSelfRef.__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        if (((IData)(vlSelfRef.__PVT__accelerator_shell__DOT__start_raw) 
             & (~ (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__busy)))) {
            vlSelfRef.__PVT__accelerator_shell__DOT__opcode_q 
                = vlSelfRef.__PVT__accelerator_shell__DOT__opcode_cfg;
            vlSelfRef.__PVT__accelerator_shell__DOT__desc_q 
                = vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & (IData)(vlSelfRef.__PVT__build_soc_csr_req_ready))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                                    if (((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                                         & ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                             ? 0xfU
                                             : 0U))) {
                                        vlSelfRef.__PVT__accelerator_shell__DOT__opcode_cfg 
                                            = (7U & vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__accelerator_shell__DOT__opcode_q = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__desc_q = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__opcode_cfg = 0U;
    }
    vlSelfRef.__PVT__litex_descriptor_engine__DOT__outstanding_q 
        = vlSelfRef.__Vdly__litex_descriptor_engine__DOT__outstanding_q;
    vlSelfRef.__PVT__accelerator_shell__DOT__pending_q 
        = vlSelfRef.__Vdly__accelerator_shell__DOT__pending_q;
    vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q 
        = vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q;
    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q 
        = vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q;
    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q 
        = vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q;
    vlSelfRef.__PVT__build_soc_mem_req_addr = (vlSelfRef.__PVT__litex_descriptor_engine__DOT__address_q 
                                               + ((IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q) 
                                                  << 4U));
    if (vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q) {
        vlSelfRef.__PVT__build_soc_mem_rsp_data[0U] = 0U;
        vlSelfRef.__PVT__build_soc_mem_rsp_data[1U] = 0U;
        vlSelfRef.__PVT__build_soc_mem_rsp_data[2U] = 0U;
        vlSelfRef.__PVT__build_soc_mem_rsp_data[3U] = 0U;
    } else {
        vlSelfRef.__PVT__build_soc_mem_rsp_data[0U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U];
        vlSelfRef.__PVT__build_soc_mem_rsp_data[1U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U];
        vlSelfRef.__PVT__build_soc_mem_rsp_data[2U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U];
        vlSelfRef.__PVT__build_soc_mem_rsp_data[3U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U];
    }
    vlSelfRef.__PVT__build_soc_mem_req_ready = ((~ (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)));
    vlSelfRef.__PVT__build_soc_cmd_valid = ((1U == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                            | ((3U 
                                                == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                               | (5U 
                                                  == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__invalid_request 
        = (IData)((0x40000000U != (0xf000000fU & vlSelfRef.__PVT__build_soc_mem_req_addr)));
    vlSelfRef.__PVT__accelerator_shell__DOT__busy = 
        ((IData)(vlSelfRef.__PVT__accelerator_shell__DOT__inflight_q) 
         | (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__pending_q));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__30(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__30\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgExtracted_h0545c670__0;
    __VdfgExtracted_h0545c670__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h9c9f4e1d__0;
    __VdfgExtracted_h9c9f4e1d__0 = 0;
    CData/*0:0*/ __VdfgRegularize_h32427ced_0_30;
    __VdfgRegularize_h32427ced_0_30 = 0;
    // Body
    if (vlSelfRef.__PVT__builder_grant) {
        vlSelfRef.__PVT__builder_rhs_self1 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data;
        vlSelfRef.__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSelfRef.__PVT__builder_rhs_self0 = (0x3fffffffU 
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
        vlSelfRef.__PVT__builder_rhs_self5 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr;
    } else {
        vlSelfRef.__PVT__builder_rhs_self1 = 0U;
        vlSelfRef.__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
        vlSelfRef.__PVT__builder_rhs_self0 = (0x3fffffffU 
                                              & ((0x3ffffff8U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                     >> 2U)) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR)));
        vlSelfRef.__PVT__builder_rhs_self5 = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
    }
    vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 
                = vlSelfRef.__PVT__builder_rhs_self1;
        }
    }
    vlSelfRef.__PVT__builder_rhs_self4 = vlSelfRef.__PVT__builder_rhs_self3;
    __VdfgExtracted_h0545c670__0 = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
                                    & (IData)(vlSelfRef.__PVT__builder_rhs_self5));
    vlSelfRef.__PVT__builder_slave_sel = ((((0xf000U 
                                             == (0xffffU 
                                                 & (vlSelfRef.__PVT__builder_rhs_self0 
                                                    >> 0xeU))) 
                                            << 5U) 
                                           | (((0xe0000U 
                                                == 
                                                (0xfffffU 
                                                 & (vlSelfRef.__PVT__builder_rhs_self0 
                                                    >> 0xaU))) 
                                               << 4U) 
                                              | ((0x71U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelfRef.__PVT__builder_rhs_self0 
                                                      >> 0x17U))) 
                                                 << 3U))) 
                                          | (((4U == 
                                               (0xfU 
                                                & (vlSelfRef.__PVT__builder_rhs_self0 
                                                   >> 0x1aU))) 
                                              << 2U) 
                                             | (((0x8000U 
                                                  == 
                                                  (0x7ffffU 
                                                   & (vlSelfRef.__PVT__builder_rhs_self0 
                                                      >> 0xbU))) 
                                                 << 1U) 
                                                | (0U 
                                                   == 
                                                   (0x7fffU 
                                                    & (vlSelfRef.__PVT__builder_rhs_self0 
                                                       >> 0xfU))))));
    vlSelfRef.__VdfgExtracted_h31a84d38__0 = ((0x3ffe00U 
                                               & (vlSelfRef.__PVT__tag_mem
                                                  [vlSelfRef.__PVT__tag_mem_adr0] 
                                                  << 7U)) 
                                              | (0x1ffU 
                                                 & (vlSelfRef.__PVT__builder_rhs_self0 
                                                    >> 2U)));
    vlSelfRef.__VdfgExtracted_h9204c5e2__0 = ((0x1fffffU 
                                               & vlSelfRef.__PVT__tag_mem
                                               [vlSelfRef.__PVT__tag_mem_adr0]) 
                                              == (0x7ffffU 
                                                  & (vlSelfRef.__PVT__builder_rhs_self0 
                                                     >> 0xbU)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed 
        = ((0xffffffU & (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                         >> 2U)) != (0xffffffU & ((vlSelfRef.__PVT__builder_rhs_self0 
                                                   - (IData)(0x800000U)) 
                                                  >> 2U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
           & (0x4000000U == (0x3ffff800U & vlSelfRef.__PVT__builder_rhs_self0)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_cyc 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
           & (0x10000000U == (0x3c000000U & vlSelfRef.__PVT__builder_rhs_self0)));
    __VdfgExtracted_h9c9f4e1d__0 = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
                                    & (0x3c000000U 
                                       == (0x3fffc000U 
                                           & vlSelfRef.__PVT__builder_rhs_self0)));
    vlSelfRef.__PVT__build_soc_uncached_wb_cyc = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
                                                  & (0x38800000U 
                                                     == 
                                                     (0x3f800000U 
                                                      & vlSelfRef.__PVT__builder_rhs_self0)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[3U] = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
            if (vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid4) {
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[0U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[1U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[2U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[3U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
            }
        }
    }
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid14 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid13;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid14 = 0U;
    }
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_is_ongoing) 
           & (IData)(__VdfgExtracted_h0545c670__0));
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_tag_di_dirty = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
        if (vlSelfRef.__VdfgExtracted_h9204c5e2__0) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack = 1U;
            if (vlSelfRef.__PVT__builder_rhs_self5) {
                vlSelfRef.__PVT__build_soc_coursesimsoc_tag_di_dirty = 1U;
            }
        }
    }
    __VdfgRegularize_h32427ced_0_30 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc) 
                                       & (IData)(__VdfgExtracted_h0545c670__0));
    vlSelfRef.__PVT__builder_wishbone2csr_next_state 
        = vlSelfRef.__PVT__builder_wishbone2csr_state;
    vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 0U;
    vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 0U;
    vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 0U;
    vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
    vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
    vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        vlSelfRef.__PVT__builder_wishbone2csr_next_state = 2U;
        vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
        vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
        vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
        vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
        vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
        vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_wishbone2csr_next_state = 0U;
        } else if (__VdfgExtracted_h9c9f4e1d__0) {
            vlSelfRef.__PVT__builder_wishbone2csr_next_state = 1U;
        }
        if ((2U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            if (__VdfgExtracted_h9c9f4e1d__0) {
                vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
                vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
                vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
                vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1 
                    = (0x3fffU & vlSelfRef.__PVT__builder_rhs_self0);
                vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2 
                    = ((~ (IData)(vlSelfRef.__PVT__builder_rhs_self5)) 
                       & (0U != (IData)(vlSelfRef.__PVT__builder_rhs_self2)));
                vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3 
                    = ((IData)(vlSelfRef.__PVT__builder_rhs_self5) 
                       & (0U != (IData)(vlSelfRef.__PVT__builder_rhs_self2)));
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h787163e4_0_15 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc)) 
                                                    | (IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted)));
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
            vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid 
                = ((IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc) 
                   & (IData)(vlSelfRef.__PVT__builder_rhs_self3));
        }
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd 
        = (1U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed) 
                 | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                     != (IData)(vlSelfRef.__PVT__builder_rhs_self5)) 
                    | ((0xfU == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel)) 
                       | ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc)) 
                          | (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last))))));
    vlSelfRef.__PVT__build_soc_uncached_wb_ack = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
             & (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))) {
            vlSelfRef.__PVT__build_soc_uncached_wb_ack 
                = ((IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc) 
                   & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted)));
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid) {
            vlSelfRef.__PVT__build_soc_uncached_wb_ack 
                = ((IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc) 
                   & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted)));
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_ram_we 
        = ((0xfffffff8U & (((IData)(__VdfgRegularize_h32427ced_0_30) 
                            << 3U) & (IData)(vlSelfRef.__PVT__builder_rhs_self2))) 
           | ((0xfffffffcU & (((IData)(__VdfgRegularize_h32427ced_0_30) 
                               << 2U) & (IData)(vlSelfRef.__PVT__builder_rhs_self2))) 
              | (3U & ((- (IData)((IData)(__VdfgRegularize_h32427ced_0_30))) 
                       & (IData)(vlSelfRef.__PVT__builder_rhs_self2)))));
}
