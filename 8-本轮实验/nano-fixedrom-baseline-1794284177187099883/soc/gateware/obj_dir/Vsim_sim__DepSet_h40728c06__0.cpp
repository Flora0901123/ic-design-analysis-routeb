// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__storage_1__v0 = 0U;
    vlSelfRef.__VdlySet__storage__v0 = 0U;
    vlSelfRef.__VdlySet__storage_7__v0 = 0U;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_consume 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_consume 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_postponer_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_timer_count1 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_bus_errors 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_consume 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_consume 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_consume 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_consume 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume;
    vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant;
    vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level;
    vlSelfRef.__VdlySet__storage_2__v0 = 0U;
    vlSelfRef.__VdlySet__storage_3__v0 = 0U;
    vlSelfRef.__VdlySet__storage_4__v0 = 0U;
    vlSelfRef.__VdlySet__storage_5__v0 = 0U;
    vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last;
    vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first;
    vlSelfRef.__Vdly__build_soc_uptime_cycles = vlSelfRef.__PVT__build_soc_uptime_cycles;
    vlSelfRef.__VdlySet__data_mem_grain12__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain13__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain14__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain15__v0 = 0U;
    vlSelfRef.__VdlySet__sram__v0 = 0U;
    vlSelfRef.__VdlySet__sram__v1 = 0U;
    vlSelfRef.__VdlySet__sram__v2 = 0U;
    vlSelfRef.__VdlySet__sram__v3 = 0U;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_ram_bus_ram_bus_ack 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_count;
    vlSelfRef.__VdlySet__data_mem_grain8__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain9__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain10__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain11__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain4__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain5__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain6__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain7__v0 = 0U;
    vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk;
    vlSelfRef.__VdlySet__data_mem_grain0__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain1__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain2__v0 = 0U;
    vlSelfRef.__VdlySet__data_mem_grain3__v0 = 0U;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_level 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_level 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_level 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_level 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level;
    vlSelfRef.__VdlySet__tag_mem__v0 = 0U;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_timer_value 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value;
    vlSelfRef.__VdlySet__mem_1__v0 = 0U;
    vlSelfRef.__VdlySet__mem_1__v1 = 0U;
    vlSelfRef.__VdlySet__mem_1__v2 = 0U;
    vlSelfRef.__VdlySet__mem_1__v3 = 0U;
    vlSelfRef.__VdlySet__mem_1__v4 = 0U;
    vlSelfRef.__VdlySet__mem_1__v5 = 0U;
    vlSelfRef.__VdlySet__mem_1__v6 = 0U;
    vlSelfRef.__VdlySet__mem_1__v7 = 0U;
    vlSelfRef.__VdlySet__mem_1__v8 = 0U;
    vlSelfRef.__VdlySet__mem_1__v9 = 0U;
    vlSelfRef.__VdlySet__mem_1__v10 = 0U;
    vlSelfRef.__VdlySet__mem_1__v11 = 0U;
    vlSelfRef.__VdlySet__mem_1__v12 = 0U;
    vlSelfRef.__VdlySet__mem_1__v13 = 0U;
    vlSelfRef.__VdlySet__mem_1__v14 = 0U;
    vlSelfRef.__VdlySet__mem_1__v15 = 0U;
    vlSelfRef.__VdlySet__mem_2__v0 = 0U;
    vlSelfRef.__VdlySet__mem_2__v1 = 0U;
    vlSelfRef.__VdlySet__mem_2__v2 = 0U;
    vlSelfRef.__VdlySet__mem_2__v3 = 0U;
    vlSelfRef.__VdlySet__mem_2__v4 = 0U;
    vlSelfRef.__VdlySet__mem_2__v5 = 0U;
    vlSelfRef.__VdlySet__mem_2__v6 = 0U;
    vlSelfRef.__VdlySet__mem_2__v7 = 0U;
    vlSelfRef.__VdlySet__mem_2__v8 = 0U;
    vlSelfRef.__VdlySet__mem_2__v9 = 0U;
    vlSelfRef.__VdlySet__mem_2__v10 = 0U;
    vlSelfRef.__VdlySet__mem_2__v11 = 0U;
    vlSelfRef.__VdlySet__mem_2__v12 = 0U;
    vlSelfRef.__VdlySet__mem_2__v13 = 0U;
    vlSelfRef.__VdlySet__mem_2__v14 = 0U;
    vlSelfRef.__VdlySet__mem_2__v15 = 0U;
    vlSelfRef.__VdlySet__mem_3__v0 = 0U;
    vlSelfRef.__VdlySet__mem_3__v1 = 0U;
    vlSelfRef.__VdlySet__mem_3__v2 = 0U;
    vlSelfRef.__VdlySet__mem_3__v3 = 0U;
    vlSelfRef.__VdlySet__mem_3__v4 = 0U;
    vlSelfRef.__VdlySet__mem_3__v5 = 0U;
    vlSelfRef.__VdlySet__mem_3__v6 = 0U;
    vlSelfRef.__VdlySet__mem_3__v7 = 0U;
    vlSelfRef.__VdlySet__mem_3__v8 = 0U;
    vlSelfRef.__VdlySet__mem_3__v9 = 0U;
    vlSelfRef.__VdlySet__mem_3__v10 = 0U;
    vlSelfRef.__VdlySet__mem_3__v11 = 0U;
    vlSelfRef.__VdlySet__mem_3__v12 = 0U;
    vlSelfRef.__VdlySet__mem_3__v13 = 0U;
    vlSelfRef.__VdlySet__mem_3__v14 = 0U;
    vlSelfRef.__VdlySet__mem_3__v15 = 0U;
    vlSelfRef.__VdlySet__mem_4__v0 = 0U;
    vlSelfRef.__VdlySet__mem_4__v1 = 0U;
    vlSelfRef.__VdlySet__mem_4__v2 = 0U;
    vlSelfRef.__VdlySet__mem_4__v3 = 0U;
    vlSelfRef.__VdlySet__mem_4__v4 = 0U;
    vlSelfRef.__VdlySet__mem_4__v5 = 0U;
    vlSelfRef.__VdlySet__mem_4__v6 = 0U;
    vlSelfRef.__VdlySet__mem_4__v7 = 0U;
    vlSelfRef.__VdlySet__mem_4__v8 = 0U;
    vlSelfRef.__VdlySet__mem_4__v9 = 0U;
    vlSelfRef.__VdlySet__mem_4__v10 = 0U;
    vlSelfRef.__VdlySet__mem_4__v11 = 0U;
    vlSelfRef.__VdlySet__mem_4__v12 = 0U;
    vlSelfRef.__VdlySet__mem_4__v13 = 0U;
    vlSelfRef.__VdlySet__mem_4__v14 = 0U;
    vlSelfRef.__VdlySet__mem_4__v15 = 0U;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_count;
    vlSelfRef.__Vdly__build_soc_cpu_traffic_capture_q 
        = vlSelfRef.__PVT__build_soc_cpu_traffic_capture_q;
    vlSelfRef.__Vdly__build_soc_cpu_traffic_ibus_count 
        = vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_count;
    vlSelfRef.__Vdly__build_soc_cpu_traffic_dbus_count 
        = vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_count;
    vlSelfRef.__Vdly__build_soc_cpu_traffic_dma_count 
        = vlSelfRef.__PVT__build_soc_cpu_traffic_dma_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready;
    vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant 
        = vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant;
    vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant 
        = vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant;
    vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant 
        = vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant;
    vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant 
        = vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant;
    vlSelfRef.__VdlySet__storage_6__v0 = 0U;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count;
    vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count;
    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count;
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__3(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self25) 
         & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) {
        vlSelfRef.__VdlyVal__storage_3__v0 = ((vlSelfRef.__PVT__builder_rhs_self23 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__builder_rhs_self24));
        vlSelfRef.__VdlyDim0__storage_3__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr;
        vlSelfRef.__VdlySet__storage_3__v0 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce)));
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self28) 
         & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) {
        vlSelfRef.__VdlyVal__storage_4__v0 = ((vlSelfRef.__PVT__builder_rhs_self26 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__builder_rhs_self27));
        vlSelfRef.__VdlyDim0__storage_4__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr;
        vlSelfRef.__VdlySet__storage_4__v0 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce)));
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self31) 
         & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))) {
        vlSelfRef.__VdlyVal__storage_5__v0 = ((vlSelfRef.__PVT__builder_rhs_self29 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT__builder_rhs_self30));
        vlSelfRef.__VdlyDim0__storage_5__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr;
        vlSelfRef.__VdlySet__storage_5__v0 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce)));
    }
    if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all) 
         & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready))) {
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last = 0U;
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first = 0U;
    } else if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid) 
                & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready))) {
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last;
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first;
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self22) 
         & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce)));
    }
    if (((0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)) 
         & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk 
            = ((0xeU & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk) 
                        << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk) 
                                         >> 3U)));
    }
    if ((0x1000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain12__v0 = 
            (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U]);
        vlSelfRef.__VdlyDim0__data_mem_grain12__v0 
            = (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                         >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain12__v0 = 1U;
    }
    if ((0x2000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain13__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
                      >> 8U));
        vlSelfRef.__VdlyDim0__data_mem_grain13__v0 
            = (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                         >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain13__v0 = 1U;
    }
    if ((0x4000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain14__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
                      >> 0x10U));
        vlSelfRef.__VdlyDim0__data_mem_grain14__v0 
            = (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                         >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain14__v0 = 1U;
    }
    if ((0x8000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain15__v0 = 
            (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
             >> 0x18U);
        vlSelfRef.__VdlyDim0__data_mem_grain15__v0 
            = (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                         >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain15__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_we))) {
        vlSelfRef.__VdlyVal__sram__v0 = (0xffU & vlSelfRef.__PVT__builder_rhs_self1);
        vlSelfRef.__VdlyDim0__sram__v0 = (0x7ffU & vlSelfRef.__PVT__builder_rhs_self0);
        vlSelfRef.__VdlySet__sram__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_we))) {
        vlSelfRef.__VdlyVal__sram__v1 = (0xffU & (vlSelfRef.__PVT__builder_rhs_self1 
                                                  >> 8U));
        vlSelfRef.__VdlyDim0__sram__v1 = (0x7ffU & vlSelfRef.__PVT__builder_rhs_self0);
        vlSelfRef.__VdlySet__sram__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_we))) {
        vlSelfRef.__VdlyVal__sram__v2 = (0xffU & (vlSelfRef.__PVT__builder_rhs_self1 
                                                  >> 0x10U));
        vlSelfRef.__VdlyDim0__sram__v2 = (0x7ffU & vlSelfRef.__PVT__builder_rhs_self0);
        vlSelfRef.__VdlySet__sram__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_we))) {
        vlSelfRef.__VdlyVal__sram__v3 = (vlSelfRef.__PVT__builder_rhs_self1 
                                         >> 0x18U);
        vlSelfRef.__VdlyDim0__sram__v3 = (0x7ffU & vlSelfRef.__PVT__builder_rhs_self0);
        vlSelfRef.__VdlySet__sram__v3 = 1U;
    }
    vlSelfRef.__Vdly__build_soc_coursesimsoc_ram_bus_ram_bus_ack = 0U;
    if ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc) 
          & (IData)(vlSelfRef.__PVT__builder_rhs_self3)) 
         & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_ram_bus_ram_bus_ack = 1U;
    }
    if ((0x100U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain8__v0 = 
            (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U]);
        vlSelfRef.__VdlyDim0__data_mem_grain8__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain8__v0 = 1U;
    }
    if ((0x200U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain9__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
                      >> 8U));
        vlSelfRef.__VdlyDim0__data_mem_grain9__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain9__v0 = 1U;
    }
    if ((0x400U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain10__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
                      >> 0x10U));
        vlSelfRef.__VdlyDim0__data_mem_grain10__v0 
            = (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                         >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain10__v0 = 1U;
    }
    if ((0x800U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain11__v0 = 
            (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
             >> 0x18U);
        vlSelfRef.__VdlyDim0__data_mem_grain11__v0 
            = (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                         >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain11__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
          & (~ (IData)(vlSelfRef.__PVT__builder_error))) 
         & (~ (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_50)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__builder_error)))) {
            vlSelfRef.__PVT__builder_count = (0xfffffU 
                                              & (vlSelfRef.__PVT__builder_count 
                                                 - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__builder_count = 0xf4240U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_ram_bus_ram_bus_ack = 0U;
        vlSelfRef.__PVT__builder_count = 0xf4240U;
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain4__v0 = 
            (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U]);
        vlSelfRef.__VdlyDim0__data_mem_grain4__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain4__v0 = 1U;
    }
    if ((0x20U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain5__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
                      >> 8U));
        vlSelfRef.__VdlyDim0__data_mem_grain5__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain5__v0 = 1U;
    }
    if ((0x40U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain6__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
                      >> 0x10U));
        vlSelfRef.__VdlyDim0__data_mem_grain6__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain6__v0 = 1U;
    }
    if ((0x80U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain7__v0 = 
            (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
             >> 0x18U);
        vlSelfRef.__VdlyDim0__data_mem_grain7__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain7__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain0__v0 = 
            (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U]);
        vlSelfRef.__VdlyDim0__data_mem_grain0__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain0__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__4(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain1__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
                      >> 8U));
        vlSelfRef.__VdlyDim0__data_mem_grain1__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain1__v0 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain2__v0 = 
            (0xffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
                      >> 0x10U));
        vlSelfRef.__VdlyDim0__data_mem_grain2__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain2__v0 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we))) {
        vlSelfRef.__VdlyVal__data_mem_grain3__v0 = 
            (vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
             >> 0x18U);
        vlSelfRef.__VdlyDim0__data_mem_grain3__v0 = 
            (0x1ffU & (vlSelfRef.__PVT__builder_rhs_self0 
                       >> 2U));
        vlSelfRef.__VdlySet__data_mem_grain3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
         & ((IData)(vlSelfRef.__PVT__builder_rhs_self17) 
            | (IData)(vlSelfRef.__PVT__builder_rhs_self18)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_ready = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_count 
            = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_count) 
                     - (IData)(1U)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_count) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_ready = 1U;
        }
    }
    vlSelfRef.__Vdly__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
          & (0U == (0x3fff8000U & vlSelfRef.__PVT__builder_rhs_self0))) 
         & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self22) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_ready))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)));
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_level 
            = (0xfU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level) 
                       - (IData)(1U)));
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self31) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_ready))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)));
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_level 
            = (0xfU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level) 
                       - (IData)(1U)));
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self28) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_ready))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)));
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_level 
            = (0xfU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level) 
                       - (IData)(1U)));
    }
    if (((IData)(vlSelfRef.__PVT__builder_rhs_self25) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_ready))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_level 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)));
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_level 
            = (0xfU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level) 
                       - (IData)(1U)));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_level = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_level = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_level = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_level = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_tag_port_we) {
        vlSelfRef.__VdlyVal__tag_mem__v0 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_tag_di_dirty) 
                                             << 0x15U) 
                                            | (0x7ffffU 
                                               & (vlSelfRef.__PVT__builder_rhs_self0 
                                                  >> 0xbU)));
        vlSelfRef.__VdlyDim0__tag_mem__v0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
        vlSelfRef.__VdlySet__tag_mem__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v0 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U]);
        vlSelfRef.__VdlyDim0__mem_1__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v1 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_1__v1 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v2 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_1__v2 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v3 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_1__v3 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v3 = 1U;
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v4 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U]);
        vlSelfRef.__VdlyDim0__mem_1__v4 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v4 = 1U;
    }
    if ((0x20U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v5 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_1__v5 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v5 = 1U;
    }
    if ((0x40U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v6 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_1__v6 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v6 = 1U;
    }
    if ((0x80U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v7 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_1__v7 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v7 = 1U;
    }
    if ((0x100U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v8 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U]);
        vlSelfRef.__VdlyDim0__mem_1__v8 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v8 = 1U;
    }
    if ((0x200U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v9 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_1__v9 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v9 = 1U;
    }
    if ((0x400U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v10 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_1__v10 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v10 = 1U;
    }
    if ((0x800U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v11 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_1__v11 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v11 = 1U;
    }
    if ((0x1000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v12 = (0xffU & 
                                           vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U]);
        vlSelfRef.__VdlyDim0__mem_1__v12 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v12 = 1U;
    }
    if ((0x2000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v13 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] 
                                            >> 8U));
        vlSelfRef.__VdlyDim0__mem_1__v13 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v13 = 1U;
    }
    if ((0x4000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v14 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_1__v14 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v14 = 1U;
    }
    if ((0x8000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_1__v15 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_1__v15 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
        vlSelfRef.__VdlySet__mem_1__v15 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v0 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U]);
        vlSelfRef.__VdlyDim0__mem_2__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v1 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_2__v1 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v2 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_2__v2 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v2 = 1U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__5(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v3 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_2__v3 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v3 = 1U;
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v4 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U]);
        vlSelfRef.__VdlyDim0__mem_2__v4 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v4 = 1U;
    }
    if ((0x20U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v5 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_2__v5 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v5 = 1U;
    }
    if ((0x40U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v6 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_2__v6 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v6 = 1U;
    }
    if ((0x80U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v7 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_2__v7 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v7 = 1U;
    }
    if ((0x100U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v8 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U]);
        vlSelfRef.__VdlyDim0__mem_2__v8 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v8 = 1U;
    }
    if ((0x200U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v9 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_2__v9 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v9 = 1U;
    }
    if ((0x400U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v10 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_2__v10 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v10 = 1U;
    }
    if ((0x800U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v11 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_2__v11 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v11 = 1U;
    }
    if ((0x1000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v12 = (0xffU & 
                                           vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U]);
        vlSelfRef.__VdlyDim0__mem_2__v12 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v12 = 1U;
    }
    if ((0x2000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v13 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] 
                                            >> 8U));
        vlSelfRef.__VdlyDim0__mem_2__v13 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v13 = 1U;
    }
    if ((0x4000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v14 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_2__v14 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v14 = 1U;
    }
    if ((0x8000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_2__v15 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_2__v15 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
        vlSelfRef.__VdlySet__mem_2__v15 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v0 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U]);
        vlSelfRef.__VdlyDim0__mem_3__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v1 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_3__v1 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v2 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_3__v2 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v3 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_3__v3 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v3 = 1U;
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v4 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U]);
        vlSelfRef.__VdlyDim0__mem_3__v4 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v4 = 1U;
    }
    if ((0x20U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v5 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_3__v5 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v5 = 1U;
    }
    if ((0x40U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v6 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_3__v6 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v6 = 1U;
    }
    if ((0x80U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v7 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_3__v7 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v7 = 1U;
    }
    if ((0x100U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v8 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U]);
        vlSelfRef.__VdlyDim0__mem_3__v8 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v8 = 1U;
    }
    if ((0x200U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v9 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_3__v9 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v9 = 1U;
    }
    if ((0x400U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v10 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_3__v10 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v10 = 1U;
    }
    if ((0x800U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v11 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_3__v11 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v11 = 1U;
    }
    if ((0x1000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v12 = (0xffU & 
                                           vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U]);
        vlSelfRef.__VdlyDim0__mem_3__v12 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v12 = 1U;
    }
    if ((0x2000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v13 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] 
                                            >> 8U));
        vlSelfRef.__VdlyDim0__mem_3__v13 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v13 = 1U;
    }
    if ((0x4000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v14 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_3__v14 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v14 = 1U;
    }
    if ((0x8000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_3__v15 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_3__v15 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
        vlSelfRef.__VdlySet__mem_3__v15 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v0 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U]);
        vlSelfRef.__VdlyDim0__mem_4__v0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v1 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_4__v1 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v2 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_4__v2 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v3 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_4__v3 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v3 = 1U;
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v4 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U]);
        vlSelfRef.__VdlyDim0__mem_4__v4 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v4 = 1U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__6(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v5 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_4__v5 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v5 = 1U;
    }
    if ((0x40U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v6 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] 
                                                   >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_4__v6 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v6 = 1U;
    }
    if ((0x80U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v7 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] 
                                          >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_4__v7 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v7 = 1U;
    }
    if ((0x100U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v8 = (0xffU & vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U]);
        vlSelfRef.__VdlyDim0__mem_4__v8 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v8 = 1U;
    }
    if ((0x200U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v9 = (0xffU & (
                                                   vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] 
                                                   >> 8U));
        vlSelfRef.__VdlyDim0__mem_4__v9 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v9 = 1U;
    }
    if ((0x400U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v10 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_4__v10 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v10 = 1U;
    }
    if ((0x800U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v11 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_4__v11 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v11 = 1U;
    }
    if ((0x1000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v12 = (0xffU & 
                                           vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U]);
        vlSelfRef.__VdlyDim0__mem_4__v12 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v12 = 1U;
    }
    if ((0x2000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v13 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] 
                                            >> 8U));
        vlSelfRef.__VdlyDim0__mem_4__v13 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v13 = 1U;
    }
    if ((0x4000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v14 = (0xffU & 
                                           (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] 
                                            >> 0x10U));
        vlSelfRef.__VdlyDim0__mem_4__v14 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v14 = 1U;
    }
    if ((0x8000U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we))) {
        vlSelfRef.__VdlyVal__mem_4__v15 = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] 
                                           >> 0x18U);
        vlSelfRef.__VdlyDim0__mem_4__v15 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
        vlSelfRef.__VdlySet__mem_4__v15 = 1U;
    }
    if (vlSelfRef.__PVT__builder_grant) {
        if (vlSelfRef.__PVT__builder_grant) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__builder_request) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__builder_request))) {
                    vlSelfRef.__PVT__builder_grant = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__builder_request)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_request))) {
            vlSelfRef.__PVT__builder_grant = 1U;
        }
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
         & ((~ ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas) 
                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we))) 
            & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_count = 1U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_count 
            = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_count) 
                     - (IData)(1U)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_count) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_ready = 1U;
        }
    }
    if (((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid9) 
         & (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)))) {
        vlSelfRef.__Vlvbound_h43db630d__0[0U] = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
        vlSelfRef.__Vlvbound_h43db630d__0[1U] = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
        vlSelfRef.__Vlvbound_h43db630d__0[2U] = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
        vlSelfRef.__Vlvbound_h43db630d__0[3U] = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
        vlSelfRef.__Vlvbound_h43db630d__0[4U] = 0U;
        if ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr))) {
            vlSelfRef.__VdlyVal__storage_6__v0[0U] 
                = vlSelfRef.__Vlvbound_h43db630d__0[0U];
            vlSelfRef.__VdlyVal__storage_6__v0[1U] 
                = vlSelfRef.__Vlvbound_h43db630d__0[1U];
            vlSelfRef.__VdlyVal__storage_6__v0[2U] 
                = vlSelfRef.__Vlvbound_h43db630d__0[2U];
            vlSelfRef.__VdlyVal__storage_6__v0[3U] 
                = vlSelfRef.__Vlvbound_h43db630d__0[3U];
            vlSelfRef.__VdlyVal__storage_6__v0[4U] 
                = vlSelfRef.__Vlvbound_h43db630d__0[4U];
            vlSelfRef.__VdlyDim0__storage_6__v0 = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr;
            vlSelfRef.__VdlySet__storage_6__v0 = 1U;
        }
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce 
            = ((2U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce))));
    }
    if (((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid9) 
         & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_sink_ready))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read)))) {
            vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)));
        }
    } else if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read) {
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level 
            = (3U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level) 
                     - (IData)(1U)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__builder_rhs_self14)) 
               | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
            if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
                if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 0U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                    vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 2U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 3U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
            if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 2U;
            } else if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 3U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 2U;
        } else if ((8U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 3U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count = 6U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = 1U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count = 6U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready = 1U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count = 6U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready = 1U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_grant = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_count = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce = 0U;
        vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__7(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count = 6U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count 
                = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count 
                = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count) 
                         - (IData)(1U)));
            if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count))) {
                vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready = 1U;
            }
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready = 1U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready = 1U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready = 1U;
        }
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_1) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready = 1U;
        }
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_3) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready = 1U;
        }
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_2) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready = 1U;
        }
    }
    if (((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_0) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count = 4U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready)))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count 
            = (7U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count) 
                     - (IData)(1U)));
        if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready = 1U;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_count = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_count 
                = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count) 
                         - (IData)(1U)));
        }
    }
    vlSelfRef.__PVT__mem_1_adr0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr;
    vlSelfRef.__PVT__mem_2_adr0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr;
    vlSelfRef.__PVT__mem_3_adr0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr;
    vlSelfRef.__PVT__mem_4_adr0 = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr;
    vlSelfRef.__PVT__storage_dat0 = vlSelfRef.__PVT__storage
        [vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr];
    vlSelfRef.__PVT__storage_1_dat0 = vlSelfRef.__PVT__storage_1
        [vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr];
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read) {
        vlSelfRef.__PVT__storage_dat1 = vlSelfRef.__PVT__storage
            [vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume];
    }
    vlSelfRef.__PVT__storage_7_dat0 = ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr))
                                        ? vlSelfRef.__PVT__storage_7
                                       [vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr]
                                        : 0ULL);
    if ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr))) {
        vlSelfRef.__PVT__storage_6_dat0[0U] = vlSelfRef.__PVT__storage_6
            [vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr][0U];
        vlSelfRef.__PVT__storage_6_dat0[1U] = vlSelfRef.__PVT__storage_6
            [vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr][1U];
        vlSelfRef.__PVT__storage_6_dat0[2U] = vlSelfRef.__PVT__storage_6
            [vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr][2U];
        vlSelfRef.__PVT__storage_6_dat0[3U] = vlSelfRef.__PVT__storage_6
            [vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr][3U];
        vlSelfRef.__PVT__storage_6_dat0[4U] = vlSelfRef.__PVT__storage_6
            [vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr][4U];
    } else {
        vlSelfRef.__PVT__storage_6_dat0[0U] = 0U;
        vlSelfRef.__PVT__storage_6_dat0[1U] = 0U;
        vlSelfRef.__PVT__storage_6_dat0[2U] = 0U;
        vlSelfRef.__PVT__storage_6_dat0[3U] = 0U;
        vlSelfRef.__PVT__storage_6_dat0[4U] = 0U;
    }
    vlSelfRef.__PVT__storage_2_dat0 = vlSelfRef.__PVT__storage_2
        [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr];
    vlSelfRef.__PVT__storage_3_dat0 = vlSelfRef.__PVT__storage_3
        [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr];
    vlSelfRef.__PVT__storage_4_dat0 = vlSelfRef.__PVT__storage_4
        [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr];
    vlSelfRef.__PVT__storage_5_dat0 = vlSelfRef.__PVT__storage_5
        [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr];
    vlSelfRef.__PVT__build_soc_status_re = vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_status_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxfull_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxfull_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_status_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_status_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_status_re;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_bytes_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_txfull_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txfull_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxempty_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxempty_re;
    vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_bytes_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dma_bytes_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_bus_errors_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_value_re;
    vlSelfRef.__PVT__build_soc_uptime_cycles_re = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_txempty_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txempty_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_en0_re;
    vlSelfRef.__PVT__build_soc_enable_re = vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_count = 0U;
        vlSelfRef.__PVT__build_soc_status_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxfull_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_status_re = 0U;
        vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_bytes_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_txfull_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxempty_re = 0U;
        vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_bytes_re = 0U;
        vlSelfRef.__PVT__build_soc_cpu_traffic_dma_bytes_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value_re = 0U;
        vlSelfRef.__PVT__build_soc_uptime_cycles_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_txempty_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_re = 0U;
        vlSelfRef.__PVT__build_soc_enable_re = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__8(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re;
    vlSelfRef.__PVT__build_soc_cpu_traffic_reset_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re;
    vlSelfRef.__PVT__build_soc_cpu_traffic_capture_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_scratch_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_scratch0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_load0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_reload0_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re;
    vlSelfRef.__PVT__build_soc_pending_re = vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_pending_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_pending_re;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en 
        = vlSelfRef.__PVT__builder_self6;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en 
        = vlSelfRef.__PVT__builder_self5;
    vlSelfRef.__PVT__build_soc_coursesimsoc_reset_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_reset0_re;
    vlSelfRef.__PVT__builder_slave_sel_r = vlSelfRef.__PVT__builder_slave_sel;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1))) {
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_postponer_count 
            = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_count) 
                     - (IData)(1U)));
        if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_count)))) {
            vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_postponer_count = 0U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_o = 1U;
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_re 
        = vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_pending_re;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_precharge)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_row 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate_row;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_precharge)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_row 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate_row;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_precharge)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_row 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate_row;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_precharge)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_row 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row;
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_precharge) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active = 1U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_precharge) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active = 1U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_precharge) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active = 1U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_precharge) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active = 1U;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_pending_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_r 
            = (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_pending_re) {
        vlSelfRef.__PVT__build_soc_pending_r = (1U 
                                                & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce) {
        vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted 
            = vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value;
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_pending_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_r 
            = (3U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_aborted 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value;
    }
    vlSelfRef.__PVT__builder_wishbone2csr_state = vlSelfRef.__PVT__builder_wishbone2csr_next_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address 
        = vlSelfRef.__PVT__builder_self1;
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank 
        = vlSelfRef.__PVT__builder_self0;
    if (vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2) {
        vlSelfRef.__PVT__builder_interface1_re = vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2;
    }
    vlSelfRef.__PVT__sram_adr0 = (0x7ffU & vlSelfRef.__PVT__builder_rhs_self0);
    vlSelfRef.__PVT__rom_dat0 = vlSelfRef.__PVT__rom
        [(0x7fffU & vlSelfRef.__PVT__builder_rhs_self0)];
    vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r 
        = (3U & vlSelfRef.__PVT__builder_rhs_self0);
    vlSelfRef.__PVT__data_mem_grain12_adr0 = (0x1ffU 
                                              & (vlSelfRef.__PVT__builder_rhs_self0 
                                                 >> 2U));
    vlSelfRef.__PVT__data_mem_grain13_adr0 = (0x1ffU 
                                              & (vlSelfRef.__PVT__builder_rhs_self0 
                                                 >> 2U));
    vlSelfRef.__PVT__data_mem_grain14_adr0 = (0x1ffU 
                                              & (vlSelfRef.__PVT__builder_rhs_self0 
                                                 >> 2U));
    vlSelfRef.__PVT__data_mem_grain15_adr0 = (0x1ffU 
                                              & (vlSelfRef.__PVT__builder_rhs_self0 
                                                 >> 2U));
    vlSelfRef.__PVT__builder_litedramwishbone2native1_state 
        = vlSelfRef.__PVT__builder_litedramwishbone2native1_next_state;
    vlSelfRef.__PVT__data_mem_grain8_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain9_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain10_adr0 = (0x1ffU 
                                              & (vlSelfRef.__PVT__builder_rhs_self0 
                                                 >> 2U));
    vlSelfRef.__PVT__data_mem_grain11_adr0 = (0x1ffU 
                                              & (vlSelfRef.__PVT__builder_rhs_self0 
                                                 >> 2U));
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_clear) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_pending = 0U;
    }
    if (((0x10U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
         & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_trigger_d)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_pending = 1U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_re = 0U;
        vlSelfRef.__PVT__build_soc_cpu_traffic_reset_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_re = 0U;
        vlSelfRef.__PVT__build_soc_cpu_traffic_capture_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_scratch_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_re = 0U;
        vlSelfRef.__PVT__build_soc_pending_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reset_re = 0U;
        vlSelfRef.__PVT__builder_slave_sel_r = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_o = 0U;
        vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_postponer_count = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_re = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_row = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_row = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_row = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_row = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_r = 0U;
        vlSelfRef.__PVT__build_soc_pending_r = 0U;
        vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_r = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_aborted = 0U;
        vlSelfRef.__PVT__builder_wishbone2csr_state = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank = 0U;
        vlSelfRef.__PVT__builder_interface1_re = 0U;
        vlSelfRef.__PVT__builder_litedramwishbone2native1_state = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_pending = 0U;
    }
    vlSelfRef.__PVT__data_mem_grain4_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain5_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain6_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain7_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
    vlSelfRef.__PVT__data_mem_grain0_adr0 = (0x1ffU 
                                             & (vlSelfRef.__PVT__builder_rhs_self0 
                                                >> 2U));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__10(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 1U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 1U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 1U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 0U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 1U;
    }
    vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    if ((4U == (0x1fU & ((IData)(vlSelfRef.__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                    ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)
                    : ((1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                        ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage)
                        : ((2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                            ? 0U : ((3U == (0x1ffU 
                                            & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                     ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_storage)
                                     : ((4U == (0x1ffU 
                                                & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                         ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_storage)
                                         : ((5U == 
                                             (0x1ffU 
                                              & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                             ? vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U]
                                             : ((6U 
                                                 == 
                                                 (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                                 ? 
                                                vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U]
                                                 : 
                                                vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U])))))));
        } else if ((8U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U];
        } else if ((9U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U];
        } else if ((0xaU == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U];
        } else if ((0xbU == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U];
        } else if ((0xcU == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U];
        }
    }
    vlSelfRef.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((1U == (0x1fU & ((IData)(vlSelfRef.__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr))))) {
            vlSelfRef.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                    ? (IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_reset_storage)
                    : ((1U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                        ? (IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_capture_storage)
                        : ((2U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                            ? (IData)((vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_snapshot 
                                       >> 0x20U)) : 
                           ((3U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                             ? (IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_snapshot)
                             : ((4U == (0x1ffU & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                 ? (IData)((vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_snapshot 
                                            >> 0x20U))
                                 : ((5U == (0x1ffU 
                                            & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                     ? (IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_snapshot)
                                     : ((6U == (0x1ffU 
                                                & (IData)(vlSelfRef.__PVT__builder_interface1_adr)))
                                         ? (IData)(
                                                   (vlSelfRef.__PVT__build_soc_cpu_traffic_dma_snapshot 
                                                    >> 0x20U))
                                         : (IData)(vlSelfRef.__PVT__build_soc_cpu_traffic_dma_snapshot))))))));
        }
    }
    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row 
                = (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row 
                = (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row 
                = (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close)))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row 
                = (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    vlSelfRef.__PVT__builder_litedramcore_refresher_state 
        = vlSelfRef.__PVT__builder_litedramcore_refresher_next_state;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 0U;
        vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state = 0U;
        vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state = 0U;
        vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state = 0U;
        vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row = 0U;
        vlSelfRef.__PVT__builder_litedramcore_refresher_state = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level 
        = vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last 
        = vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last;
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__11(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first 
        = vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first;
    if (vlSelfRef.__VdlySet__data_mem_grain12__v0) {
        vlSelfRef.__PVT__data_mem_grain12[vlSelfRef.__VdlyDim0__data_mem_grain12__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain12__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain13__v0) {
        vlSelfRef.__PVT__data_mem_grain13[vlSelfRef.__VdlyDim0__data_mem_grain13__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain13__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain14__v0) {
        vlSelfRef.__PVT__data_mem_grain14[vlSelfRef.__VdlyDim0__data_mem_grain14__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain14__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain15__v0) {
        vlSelfRef.__PVT__data_mem_grain15[vlSelfRef.__VdlyDim0__data_mem_grain15__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain15__v0;
    }
    if (vlSelfRef.__VdlySet__sram__v0) {
        vlSelfRef.__PVT__sram[vlSelfRef.__VdlyDim0__sram__v0] 
            = ((0xffffff00U & vlSelfRef.__PVT__sram
                [vlSelfRef.__VdlyDim0__sram__v0]) | (IData)(vlSelfRef.__VdlyVal__sram__v0));
    }
    if (vlSelfRef.__VdlySet__sram__v1) {
        vlSelfRef.__PVT__sram[vlSelfRef.__VdlyDim0__sram__v1] 
            = ((0xffff00ffU & vlSelfRef.__PVT__sram
                [vlSelfRef.__VdlyDim0__sram__v1]) | 
               ((IData)(vlSelfRef.__VdlyVal__sram__v1) 
                << 8U));
    }
    if (vlSelfRef.__VdlySet__sram__v2) {
        vlSelfRef.__PVT__sram[vlSelfRef.__VdlyDim0__sram__v2] 
            = ((0xff00ffffU & vlSelfRef.__PVT__sram
                [vlSelfRef.__VdlyDim0__sram__v2]) | 
               ((IData)(vlSelfRef.__VdlyVal__sram__v2) 
                << 0x10U));
    }
    if (vlSelfRef.__VdlySet__sram__v3) {
        vlSelfRef.__PVT__sram[vlSelfRef.__VdlyDim0__sram__v3] 
            = ((0xffffffU & vlSelfRef.__PVT__sram[vlSelfRef.__VdlyDim0__sram__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__sram__v3) 
                  << 0x18U));
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_ram_bus_ram_bus_ack;
    if (vlSelfRef.__VdlySet__data_mem_grain8__v0) {
        vlSelfRef.__PVT__data_mem_grain8[vlSelfRef.__VdlyDim0__data_mem_grain8__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain8__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain9__v0) {
        vlSelfRef.__PVT__data_mem_grain9[vlSelfRef.__VdlyDim0__data_mem_grain9__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain9__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain10__v0) {
        vlSelfRef.__PVT__data_mem_grain10[vlSelfRef.__VdlyDim0__data_mem_grain10__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain10__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain11__v0) {
        vlSelfRef.__PVT__data_mem_grain11[vlSelfRef.__VdlyDim0__data_mem_grain11__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain11__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain4__v0) {
        vlSelfRef.__PVT__data_mem_grain4[vlSelfRef.__VdlyDim0__data_mem_grain4__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain4__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain5__v0) {
        vlSelfRef.__PVT__data_mem_grain5[vlSelfRef.__VdlyDim0__data_mem_grain5__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain5__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain6__v0) {
        vlSelfRef.__PVT__data_mem_grain6[vlSelfRef.__VdlyDim0__data_mem_grain6__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain6__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain7__v0) {
        vlSelfRef.__PVT__data_mem_grain7[vlSelfRef.__VdlyDim0__data_mem_grain7__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain7__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain0__v0) {
        vlSelfRef.__PVT__data_mem_grain0[vlSelfRef.__VdlyDim0__data_mem_grain0__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain0__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain1__v0) {
        vlSelfRef.__PVT__data_mem_grain1[vlSelfRef.__VdlyDim0__data_mem_grain1__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain1__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain2__v0) {
        vlSelfRef.__PVT__data_mem_grain2[vlSelfRef.__VdlyDim0__data_mem_grain2__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain2__v0;
    }
    if (vlSelfRef.__VdlySet__data_mem_grain3__v0) {
        vlSelfRef.__PVT__data_mem_grain3[vlSelfRef.__VdlyDim0__data_mem_grain3__v0] 
            = vlSelfRef.__VdlyVal__data_mem_grain3__v0;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_tccdcon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack;
    if (vlSelfRef.__VdlySet__tag_mem__v0) {
        vlSelfRef.__PVT__tag_mem[vlSelfRef.__VdlyDim0__tag_mem__v0] 
            = vlSelfRef.__VdlyVal__tag_mem__v0;
    }
    if (vlSelfRef.__VdlySet__mem_1__v0) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v0][0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v0][0U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_1__v0));
    }
    if (vlSelfRef.__VdlySet__mem_1__v1) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v1][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v2) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v2][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v3) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v3][0U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v3][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v3) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v4) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v4][1U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v4][1U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_1__v4));
    }
    if (vlSelfRef.__VdlySet__mem_1__v5) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v5][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v6) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v6][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v6) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v7) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v7][1U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v7][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v7) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v8) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v8][2U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v8][2U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_1__v8));
    }
    if (vlSelfRef.__VdlySet__mem_1__v9) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v9][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v9) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v10) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v10][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v10) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v11) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v11][2U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v11][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v11) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v12) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v12][3U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v12][3U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_1__v12));
    }
    if (vlSelfRef.__VdlySet__mem_1__v13) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v13][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v13) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v14) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_1
                [vlSelfRef.__VdlyDim0__mem_1__v14][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v14) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_1__v15) {
        vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v15][3U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_1[vlSelfRef.__VdlyDim0__mem_1__v15][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_1__v15) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v0) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v0][0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v0][0U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_2__v0));
    }
    if (vlSelfRef.__VdlySet__mem_2__v1) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v1][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v2) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v2][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v3) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v3][0U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v3][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v3) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v4) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v4][1U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v4][1U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_2__v4));
    }
    if (vlSelfRef.__VdlySet__mem_2__v5) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v5][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v6) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v6][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v6) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v7) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v7][1U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v7][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v7) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v8) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v8][2U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v8][2U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_2__v8));
    }
    if (vlSelfRef.__VdlySet__mem_2__v9) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v9][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v9) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v10) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v10][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v10) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v11) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v11][2U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v11][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v11) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v12) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v12][3U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v12][3U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_2__v12));
    }
    if (vlSelfRef.__VdlySet__mem_2__v13) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v13][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v13) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v14) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_2
                [vlSelfRef.__VdlyDim0__mem_2__v14][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v14) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_2__v15) {
        vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v15][3U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_2[vlSelfRef.__VdlyDim0__mem_2__v15][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_2__v15) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v0) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v0][0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v0][0U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_3__v0));
    }
    if (vlSelfRef.__VdlySet__mem_3__v1) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v1][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v2) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v2][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v2) 
                  << 0x10U));
    }
}
