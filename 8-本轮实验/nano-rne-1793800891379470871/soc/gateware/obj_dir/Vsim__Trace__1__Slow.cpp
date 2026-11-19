// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_19;
    // Body
    bufp->fullCData(oldp+610,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0),5);
    bufp->fullCData(oldp+611,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0) 
                                        + (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)))),5);
    bufp->fullCData(oldp+612,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce),4);
    bufp->fullSData(oldp+613,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
    bufp->fullBit(oldp+614,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re));
    bufp->fullBit(oldp+615,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0))));
    bufp->fullCData(oldp+616,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+617,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
    bufp->fullBit(oldp+618,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_trigger_d));
    bufp->fullBit(oldp+619,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxempty_re));
    bufp->fullBit(oldp+620,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)))));
    bufp->fullBit(oldp+621,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxempty_we));
    bufp->fullBit(oldp+622,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxfull_re));
    bufp->fullBit(oldp+623,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0))));
    bufp->fullBit(oldp+624,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxfull_we));
    bufp->fullCData(oldp+625,((0xffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),8);
    bufp->fullBit(oldp+626,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_re));
    bufp->fullBit(oldp+627,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_we));
    bufp->fullBit(oldp+628,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_status_re));
    bufp->fullCData(oldp+629,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_status_status),2);
    bufp->fullBit(oldp+630,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_status_we));
    bufp->fullBit(oldp+631,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
    bufp->fullBit(oldp+632,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_pending));
    bufp->fullBit(oldp+633,((1U & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_storage))));
    bufp->fullBit(oldp+634,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_clear));
    bufp->fullCData(oldp+635,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume),4);
    bufp->fullCData(oldp+636,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0),5);
    bufp->fullCData(oldp+637,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0) 
                                        + (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)))),5);
    bufp->fullCData(oldp+638,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce),4);
    bufp->fullSData(oldp+639,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
    bufp->fullSData(oldp+640,((0xffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),10);
    bufp->fullBit(oldp+641,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
    bufp->fullCData(oldp+642,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+643,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
    bufp->fullBit(oldp+644,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_re) 
                             & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)))));
    bufp->fullBit(oldp+645,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_trigger_d));
    bufp->fullBit(oldp+646,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_txempty_re));
    bufp->fullBit(oldp+647,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)))));
    bufp->fullBit(oldp+648,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txempty_we));
    bufp->fullBit(oldp+649,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_txfull_re));
    bufp->fullBit(oldp+650,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
    bufp->fullBit(oldp+651,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txfull_we));
    bufp->fullIData(oldp+652,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r),32);
    bufp->fullBit(oldp+653,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes0));
    bufp->fullBit(oldp+654,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes1));
    bufp->fullBit(oldp+655,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes2));
    bufp->fullBit(oldp+656,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes3));
    bufp->fullBit(oldp+657,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_q));
    bufp->fullBit(oldp+658,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_re));
    bufp->fullBit(oldp+659,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_storage));
    bufp->fullBit(oldp+660,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_bytes_re));
    bufp->fullQData(oldp+661,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot),64);
    bufp->fullBit(oldp+663,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we));
    bufp->fullQData(oldp+664,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_count),64);
    bufp->fullCData(oldp+666,((7U & ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL)) 
                                     + ((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                               >> 1U)) 
                                        + ((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                  >> 2U)) 
                                           + (1U & 
                                              ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                               >> 3U))))))),3);
    bufp->fullBit(oldp+667,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_bytes_re));
    bufp->fullQData(oldp+668,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot),64);
    bufp->fullBit(oldp+670,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we));
    bufp->fullQData(oldp+671,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_count),64);
    bufp->fullBit(oldp+673,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_bytes_re));
    bufp->fullQData(oldp+674,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot),64);
    bufp->fullBit(oldp+676,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we));
    bufp->fullQData(oldp+677,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_count),64);
    bufp->fullBit(oldp+679,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_reset_re));
    bufp->fullBit(oldp+680,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_reset_storage));
    bufp->fullBit(oldp+681,(vlSymsp->TOP__sim.__PVT__build_soc_enable_storage));
    bufp->fullBit(oldp+682,(vlSymsp->TOP__sim.__PVT__build_soc_enable_re));
    bufp->fullBit(oldp+683,(vlSymsp->TOP__sim.__PVT__build_soc_pending_r));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__sim.__PVT__build_soc_pending_re));
    bufp->fullBit(oldp+685,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_pending_we));
    bufp->fullBit(oldp+686,(vlSymsp->TOP__sim.__PVT__build_soc_status_re));
    bufp->fullBit(oldp+687,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_status_we));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted));
    bufp->fullBit(oldp+689,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_is_ongoing));
    bufp->fullIData(oldp+690,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr),26);
    bufp->fullCData(oldp+691,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel),4);
    bufp->fullBit(oldp+692,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we));
    bufp->fullBit(oldp+693,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    bufp->fullBit(oldp+694,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last));
    bufp->fullBit(oldp+695,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we));
    bufp->fullCData(oldp+696,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk),4);
    bufp->fullBit(oldp+697,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid));
    bufp->fullBit(oldp+698,((0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
    bufp->fullBit(oldp+699,((3U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
    bufp->fullCData(oldp+700,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux),2);
    bufp->fullBit(oldp+701,(((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                              ? (1U & vlSymsp->TOP__sim.__PVT__storage_6
                                 [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U])
                              : 0U)));
    bufp->fullBit(oldp+702,((1U & (((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                                     ? vlSymsp->TOP__sim.__PVT__storage_6
                                    [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U]
                                     : 0U) >> 1U))));
    bufp->fullWData(oldp+703,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data),128);
    bufp->fullBit(oldp+707,(((3U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready))));
    bufp->fullBit(oldp+708,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level))));
    bufp->fullBit(oldp+709,((((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                               ? vlSymsp->TOP__sim.__PVT__storage_6
                              [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U]
                               : 0U) & (0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)))));
    bufp->fullBit(oldp+710,(((((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                                ? vlSymsp->TOP__sim.__PVT__storage_6
                               [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U]
                                : 0U) >> 1U) & (3U 
                                                == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)))));
    bufp->fullIData(oldp+711,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data),32);
    bufp->fullBit(oldp+712,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready));
    if ((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))) {
        __Vtemp_16[0U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][0U];
        __Vtemp_16[1U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][1U];
        __Vtemp_16[2U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][2U];
        __Vtemp_16[3U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][3U];
        __Vtemp_19[0U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][0U];
        __Vtemp_19[1U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][1U];
        __Vtemp_19[2U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][2U];
        __Vtemp_19[3U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][3U];
        __Vtemp_19[4U] = vlSymsp->TOP__sim.__PVT__storage_6
            [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U];
    } else {
        __Vtemp_16[0U] = 0U;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_19[0U] = 0U;
        __Vtemp_19[1U] = 0U;
        __Vtemp_19[2U] = 0U;
        __Vtemp_19[3U] = 0U;
        __Vtemp_19[4U] = 0U;
    }
    bufp->fullWData(oldp+713,(__Vtemp_16),128);
    bufp->fullCData(oldp+717,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume),2);
    bufp->fullBit(oldp+718,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read));
    bufp->fullCData(oldp+719,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level),2);
    bufp->fullCData(oldp+720,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce),2);
    bufp->fullWData(oldp+721,(__Vtemp_19),130);
    bufp->fullBit(oldp+726,((3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level))));
    bufp->fullBit(oldp+727,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid9));
    bufp->fullCData(oldp+728,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr),2);
    bufp->fullWData(oldp+729,(vlSymsp->TOP__sim.__PVT__storage_6_dat0),130);
    bufp->fullBit(oldp+734,(((IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid9) 
                             & (3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)))));
    bufp->fullBit(oldp+735,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished));
    bufp->fullBit(oldp+736,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock));
    bufp->fullBit(oldp+737,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked));
    bufp->fullCData(oldp+738,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel),4);
    bufp->fullWData(oldp+739,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data),128);
    bufp->fullSData(oldp+743,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel))),16);
    bufp->fullBit(oldp+744,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all));
    bufp->fullBit(oldp+745,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_first));
    bufp->fullBit(oldp+746,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_last));
    bufp->fullWData(oldp+747,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data),128);
    bufp->fullSData(oldp+751,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we),16);
    bufp->fullBit(oldp+752,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid));
    bufp->fullCData(oldp+753,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk),4);
    bufp->fullBit(oldp+754,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid));
    bufp->fullCData(oldp+755,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux),2);
    bufp->fullQData(oldp+756,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data),36);
    bufp->fullBit(oldp+758,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid));
    bufp->fullBit(oldp+759,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first));
    bufp->fullBit(oldp+760,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last));
    bufp->fullWData(oldp+761,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data),144);
    bufp->fullCData(oldp+766,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count),3);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data),32);
    bufp->fullCData(oldp+768,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we),4);
    bufp->fullSData(oldp+769,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we),16);
    bufp->fullCData(oldp+770,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume),2);
    bufp->fullBit(oldp+771,((1U & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+772,((1U & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                           >> 0x25U)))));
    bufp->fullIData(oldp+773,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r)),32);
    bufp->fullCData(oldp+774,((0xfU & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+775,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level),2);
    bufp->fullCData(oldp+776,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce),2);
    bufp->fullQData(oldp+777,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r),38);
    bufp->fullBit(oldp+779,((3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level))));
    bufp->fullBit(oldp+780,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level))));
    bufp->fullCData(oldp+781,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr),2);
    bufp->fullQData(oldp+782,(vlSymsp->TOP__sim.__PVT__storage_7_dat0),38);
    bufp->fullSData(oldp+784,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel),16);
    bufp->fullIData(oldp+785,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_rdata_payload_data),32);
    bufp->fullBit(oldp+786,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_rdata_valid));
    bufp->fullIData(oldp+787,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_payload_addr),24);
    bufp->fullBit(oldp+788,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_payload_we));
    bufp->fullBit(oldp+789,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_valid));
    bufp->fullIData(oldp+790,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_dat_r),32);
    bufp->fullQData(oldp+791,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles),64);
    bufp->fullBit(oldp+793,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_re));
    bufp->fullQData(oldp+794,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status),64);
    bufp->fullBit(oldp+796,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we));
    bufp->fullBit(oldp+797,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_latch_re));
    bufp->fullBit(oldp+798,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_latch_storage));
    bufp->fullIData(oldp+799,(vlSymsp->TOP__sim.__PVT__builder_count),20);
    bufp->fullCData(oldp+800,((0x1fU & (IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr))),5);
    bufp->fullBit(oldp+801,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re));
    bufp->fullBit(oldp+802,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we));
    bufp->fullBit(oldp+803,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_pending_re));
    bufp->fullBit(oldp+804,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_status_re));
    bufp->fullBit(oldp+805,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+806,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_capture0_re));
    bufp->fullBit(oldp+807,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_capture0_we));
    bufp->fullIData(oldp+808,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w),32);
    bufp->fullBit(oldp+809,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re));
    bufp->fullIData(oldp+810,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot)),32);
    bufp->fullBit(oldp+811,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+812,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+813,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we));
    bufp->fullBit(oldp+814,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re));
    bufp->fullIData(oldp+815,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot)),32);
    bufp->fullBit(oldp+816,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re));
    bufp->fullIData(oldp+817,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+818,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we));
    bufp->fullBit(oldp+819,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re));
    bufp->fullIData(oldp+820,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot)),32);
    bufp->fullBit(oldp+821,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re));
    bufp->fullIData(oldp+822,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+823,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we));
    bufp->fullBit(oldp+824,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_re));
    bufp->fullBit(oldp+825,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_we));
    bufp->fullBit(oldp+826,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+827,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_bus_errors_re));
    bufp->fullCData(oldp+828,((3U & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),2);
    bufp->fullBit(oldp+829,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reset0_re));
    bufp->fullBit(oldp+830,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reset0_we));
    bufp->fullBit(oldp+831,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_scratch0_re));
    bufp->fullBit(oldp+832,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_scratch0_we));
    bufp->fullBit(oldp+833,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullCData(oldp+834,((0xfU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),4);
    bufp->fullBit(oldp+835,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re));
    bufp->fullBit(oldp+836,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we));
    bufp->fullSData(oldp+837,((0x1fffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),13);
    bufp->fullBit(oldp+838,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we));
    bufp->fullBit(oldp+842,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re));
    bufp->fullBit(oldp+843,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we));
    bufp->fullBit(oldp+844,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re));
    bufp->fullIData(oldp+845,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U]),32);
    bufp->fullBit(oldp+846,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re));
    bufp->fullIData(oldp+847,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U]),32);
    bufp->fullBit(oldp+848,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we));
    bufp->fullBit(oldp+849,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re));
    bufp->fullIData(oldp+850,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U]),32);
    bufp->fullBit(oldp+851,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we));
    bufp->fullBit(oldp+852,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re));
    bufp->fullIData(oldp+853,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U]),32);
    bufp->fullBit(oldp+854,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we));
    bufp->fullBit(oldp+855,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re));
    bufp->fullIData(oldp+856,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U]),32);
    bufp->fullBit(oldp+857,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we));
    bufp->fullBit(oldp+858,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re));
    bufp->fullIData(oldp+859,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U]),32);
    bufp->fullBit(oldp+860,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re));
    bufp->fullIData(oldp+862,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U]),32);
    bufp->fullBit(oldp+863,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we));
    bufp->fullBit(oldp+864,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re));
    bufp->fullIData(oldp+865,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U]),32);
    bufp->fullBit(oldp+866,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we));
    bufp->fullBit(oldp+867,((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+868,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_en0_re));
    bufp->fullBit(oldp+869,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_en0_we));
    bufp->fullBit(oldp+870,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re));
    bufp->fullBit(oldp+871,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we));
    bufp->fullBit(oldp+872,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_pending_re));
    bufp->fullBit(oldp+873,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_status_re));
    bufp->fullBit(oldp+874,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_load0_re));
    bufp->fullBit(oldp+875,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_load0_we));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_reload0_re));
    bufp->fullBit(oldp+877,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_reload0_we));
    bufp->fullBit(oldp+878,((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+879,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_update_value0_re));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_update_value0_we));
    bufp->fullBit(oldp+881,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re));
    bufp->fullIData(oldp+882,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status)),32);
    bufp->fullBit(oldp+883,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re));
    bufp->fullIData(oldp+884,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+885,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we));
    bufp->fullBit(oldp+886,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re));
    bufp->fullBit(oldp+887,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we));
    bufp->fullBit(oldp+888,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_value_re));
    bufp->fullBit(oldp+889,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re));
    bufp->fullBit(oldp+890,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we));
    bufp->fullBit(oldp+891,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_pending_re));
    bufp->fullBit(oldp+892,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_status_re));
    bufp->fullBit(oldp+893,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxempty_re));
    bufp->fullBit(oldp+894,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxfull_re));
    bufp->fullBit(oldp+895,((6U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+896,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txempty_re));
    bufp->fullBit(oldp+897,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txfull_re));
    bufp->fullCData(oldp+898,(((0x10U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                ? vlSymsp->TOP__sim.__PVT__mem
                               [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                : 0U)),8);
    bufp->fullSData(oldp+899,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr),14);
    bufp->fullIData(oldp+900,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r),32);
    bufp->fullBit(oldp+901,(vlSymsp->TOP__sim.__PVT__builder_interface1_re));
    bufp->fullBit(oldp+902,(vlSymsp->TOP__sim.__PVT__builder_interface1_we));
    bufp->fullIData(oldp+903,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r),32);
    bufp->fullIData(oldp+904,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r),32);
    bufp->fullIData(oldp+905,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r),32);
    bufp->fullIData(oldp+906,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r),32);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r),32);
    bufp->fullBit(oldp+908,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+909,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r));
    bufp->fullIData(oldp+910,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r),32);
    bufp->fullIData(oldp+911,((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                               | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                                  | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                                     | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                                        | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                                           | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r 
                                              | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r))))))),32);
    bufp->fullBit(oldp+912,((0U == vlSymsp->TOP__sim.__PVT__builder_count)));
    bufp->fullCData(oldp+913,(vlSymsp->TOP__sim.__PVT__builder_fullmemorywe_state),2);
    bufp->fullBit(oldp+914,(vlSymsp->TOP__sim.__PVT__builder_grant));
    bufp->fullBit(oldp+915,(vlSymsp->TOP__sim.__PVT__builder_interface0_ack));
    bufp->fullIData(oldp+916,(vlSymsp->TOP__sim.__PVT__builder_interface0_dat_r),32);
    bufp->fullBit(oldp+917,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0));
    bufp->fullCData(oldp+918,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine0_next_state),3);
    bufp->fullCData(oldp+919,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine0_state),3);
    bufp->fullCData(oldp+920,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine1_next_state),3);
    bufp->fullCData(oldp+921,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine1_state),3);
    bufp->fullCData(oldp+922,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine2_next_state),3);
    bufp->fullCData(oldp+923,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine2_state),3);
    bufp->fullCData(oldp+924,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine3_next_state),3);
    bufp->fullCData(oldp+925,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine3_state),3);
    bufp->fullCData(oldp+926,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_multiplexer_next_state),3);
    bufp->fullCData(oldp+927,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_multiplexer_state),3);
    bufp->fullBit(oldp+928,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid1));
    bufp->fullBit(oldp+929,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid2));
    bufp->fullBit(oldp+930,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid3));
    bufp->fullBit(oldp+931,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid6));
    bufp->fullBit(oldp+932,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid7));
    bufp->fullBit(oldp+933,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid8));
    bufp->fullCData(oldp+934,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_refresher_next_state),2);
    bufp->fullCData(oldp+935,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_refresher_state),2);
    bufp->fullCData(oldp+936,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_state),2);
    bufp->fullCData(oldp+937,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native0_state),2);
    bufp->fullCData(oldp+938,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native1_state),2);
    bufp->fullCData(oldp+939,(vlSymsp->TOP__sim.__PVT__builder_request),2);
    bufp->fullCData(oldp+940,(vlSymsp->TOP__sim.__PVT__builder_self0),2);
    bufp->fullSData(oldp+941,(vlSymsp->TOP__sim.__PVT__builder_self1),13);
    bufp->fullBit(oldp+942,(vlSymsp->TOP__sim.__PVT__builder_self2));
    bufp->fullBit(oldp+943,(vlSymsp->TOP__sim.__PVT__builder_self3));
    bufp->fullBit(oldp+944,(vlSymsp->TOP__sim.__PVT__builder_self4));
    bufp->fullBit(oldp+945,(vlSymsp->TOP__sim.__PVT__builder_self5));
    bufp->fullBit(oldp+946,(vlSymsp->TOP__sim.__PVT__builder_self6));
    bufp->fullCData(oldp+947,(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r),6);
    bufp->fullIData(oldp+948,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0)))),23);
    bufp->fullIData(oldp+949,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)))),23);
    bufp->fullIData(oldp+950,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col1)))),23);
    bufp->fullIData(oldp+951,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_col)))),23);
    bufp->fullIData(oldp+952,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col2)))),23);
    bufp->fullIData(oldp+953,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_col)))),23);
    bufp->fullIData(oldp+954,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col3)))),23);
    bufp->fullIData(oldp+955,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_col)))),23);
    bufp->fullBit(oldp+956,(vlSymsp->TOP__sim.__PVT__builder_t_self0));
    bufp->fullBit(oldp+957,(vlSymsp->TOP__sim.__PVT__builder_t_self1));
    bufp->fullBit(oldp+958,(vlSymsp->TOP__sim.__PVT__builder_t_self2));
    bufp->fullBit(oldp+959,(vlSymsp->TOP__sim.__PVT__builder_t_self3));
    bufp->fullBit(oldp+960,(vlSymsp->TOP__sim.__PVT__builder_t_self4));
    bufp->fullBit(oldp+961,(vlSymsp->TOP__sim.__PVT__builder_t_self5));
    bufp->fullCData(oldp+962,(vlSymsp->TOP__sim.__PVT__builder_wishbone2csr_state),2);
    bufp->fullSData(oldp+963,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
    bufp->fullCData(oldp+964,(vlSymsp->TOP__sim.__PVT__mem_adr0),5);
    bufp->fullSData(oldp+965,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
    bufp->fullSData(oldp+966,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
    bufp->fullSData(oldp+967,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
    bufp->fullSData(oldp+968,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
    bufp->fullSData(oldp+969,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
    bufp->fullSData(oldp+970,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
    bufp->fullSData(oldp+971,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
    bufp->fullSData(oldp+972,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
    bufp->fullSData(oldp+973,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
    bufp->fullSData(oldp+974,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
    bufp->fullSData(oldp+975,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
    bufp->fullSData(oldp+976,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
    bufp->fullSData(oldp+977,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
    bufp->fullSData(oldp+978,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
    bufp->fullSData(oldp+979,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
    bufp->fullSData(oldp+980,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
    bufp->fullSData(oldp+981,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
    bufp->fullSData(oldp+982,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
    bufp->fullSData(oldp+983,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
    bufp->fullSData(oldp+984,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
    bufp->fullSData(oldp+985,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
    bufp->fullSData(oldp+986,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
    bufp->fullSData(oldp+987,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
    bufp->fullSData(oldp+988,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
    bufp->fullSData(oldp+989,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
    bufp->fullSData(oldp+990,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
    bufp->fullSData(oldp+991,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
    bufp->fullSData(oldp+992,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
    bufp->fullSData(oldp+993,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
    bufp->fullSData(oldp+994,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
    bufp->fullSData(oldp+995,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
    bufp->fullSData(oldp+996,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
    bufp->fullIData(oldp+997,(vlSymsp->TOP__sim.__PVT__mem_1_adr0),22);
    bufp->fullIData(oldp+998,(vlSymsp->TOP__sim.__PVT__mem_2_adr0),22);
    bufp->fullIData(oldp+999,(vlSymsp->TOP__sim.__PVT__mem_3_adr0),22);
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__sim.__PVT__mem_4_adr0),22);
    bufp->fullIData(oldp+1001,(vlSymsp->TOP__sim.__PVT__storage_2[0]),25);
    bufp->fullIData(oldp+1002,(vlSymsp->TOP__sim.__PVT__storage_2[1]),25);
    bufp->fullIData(oldp+1003,(vlSymsp->TOP__sim.__PVT__storage_2[2]),25);
    bufp->fullIData(oldp+1004,(vlSymsp->TOP__sim.__PVT__storage_2[3]),25);
    bufp->fullIData(oldp+1005,(vlSymsp->TOP__sim.__PVT__storage_2[4]),25);
    bufp->fullIData(oldp+1006,(vlSymsp->TOP__sim.__PVT__storage_2[5]),25);
    bufp->fullIData(oldp+1007,(vlSymsp->TOP__sim.__PVT__storage_2[6]),25);
    bufp->fullIData(oldp+1008,(vlSymsp->TOP__sim.__PVT__storage_2[7]),25);
    bufp->fullIData(oldp+1009,(vlSymsp->TOP__sim.__PVT__storage_3[0]),25);
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__sim.__PVT__storage_3[1]),25);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__sim.__PVT__storage_3[2]),25);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__sim.__PVT__storage_3[3]),25);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__sim.__PVT__storage_3[4]),25);
    bufp->fullIData(oldp+1014,(vlSymsp->TOP__sim.__PVT__storage_3[5]),25);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__sim.__PVT__storage_3[6]),25);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__sim.__PVT__storage_3[7]),25);
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__sim.__PVT__storage_4[0]),25);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__sim.__PVT__storage_4[1]),25);
    bufp->fullIData(oldp+1019,(vlSymsp->TOP__sim.__PVT__storage_4[2]),25);
    bufp->fullIData(oldp+1020,(vlSymsp->TOP__sim.__PVT__storage_4[3]),25);
    bufp->fullIData(oldp+1021,(vlSymsp->TOP__sim.__PVT__storage_4[4]),25);
    bufp->fullIData(oldp+1022,(vlSymsp->TOP__sim.__PVT__storage_4[5]),25);
    bufp->fullIData(oldp+1023,(vlSymsp->TOP__sim.__PVT__storage_4[6]),25);
    bufp->fullIData(oldp+1024,(vlSymsp->TOP__sim.__PVT__storage_4[7]),25);
    bufp->fullIData(oldp+1025,(vlSymsp->TOP__sim.__PVT__storage_5[0]),25);
    bufp->fullIData(oldp+1026,(vlSymsp->TOP__sim.__PVT__storage_5[1]),25);
    bufp->fullIData(oldp+1027,(vlSymsp->TOP__sim.__PVT__storage_5[2]),25);
    bufp->fullIData(oldp+1028,(vlSymsp->TOP__sim.__PVT__storage_5[3]),25);
    bufp->fullIData(oldp+1029,(vlSymsp->TOP__sim.__PVT__storage_5[4]),25);
    bufp->fullIData(oldp+1030,(vlSymsp->TOP__sim.__PVT__storage_5[5]),25);
    bufp->fullIData(oldp+1031,(vlSymsp->TOP__sim.__PVT__storage_5[6]),25);
    bufp->fullIData(oldp+1032,(vlSymsp->TOP__sim.__PVT__storage_5[7]),25);
    bufp->fullSData(oldp+1033,(vlSymsp->TOP__sim.__PVT__tag_mem_adr0),9);
    bufp->fullWData(oldp+1034,(vlSymsp->TOP__sim.__PVT__storage_6[0]),130);
    bufp->fullWData(oldp+1039,(vlSymsp->TOP__sim.__PVT__storage_6[1]),130);
    bufp->fullWData(oldp+1044,(vlSymsp->TOP__sim.__PVT__storage_6[2]),130);
    bufp->fullQData(oldp+1049,(vlSymsp->TOP__sim.__PVT__storage_7[0]),38);
    bufp->fullQData(oldp+1051,(vlSymsp->TOP__sim.__PVT__storage_7[1]),38);
    bufp->fullQData(oldp+1053,(vlSymsp->TOP__sim.__PVT__storage_7[2]),38);
    bufp->fullSData(oldp+1055,(vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0),9);
    bufp->fullSData(oldp+1056,(vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0),9);
    bufp->fullSData(oldp+1057,(vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0),9);
    bufp->fullSData(oldp+1058,(vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0),9);
    bufp->fullSData(oldp+1059,(vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0),9);
    bufp->fullSData(oldp+1060,(vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0),9);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1061,(vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0),9);
    bufp->fullSData(oldp+1062,(vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0),9);
    bufp->fullSData(oldp+1063,(vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0),9);
    bufp->fullSData(oldp+1064,(vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0),9);
    bufp->fullSData(oldp+1065,(vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0),9);
    bufp->fullSData(oldp+1066,(vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0),9);
    bufp->fullSData(oldp+1067,(vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0),9);
    bufp->fullSData(oldp+1068,(vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0),9);
    bufp->fullSData(oldp+1069,(vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0),9);
    bufp->fullSData(oldp+1070,(vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0),9);
    bufp->fullBit(oldp+1071,((1U & VL_REDXOR_4(vlSymsp->TOP__sim.__PVT__builder_rhs_self2))));
    bufp->fullBit(oldp+1072,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
    bufp->fullBit(oldp+1073,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2))));
    bufp->fullBit(oldp+1074,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready)))));
    bufp->fullBit(oldp+1075,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
    bufp->fullBit(oldp+1076,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
    bufp->fullBit(oldp+1077,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
    bufp->fullIData(oldp+1078,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
    bufp->fullBit(oldp+1079,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
    bufp->fullIData(oldp+1080,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+1081,((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1082,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
    bufp->fullIData(oldp+1083,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+1084,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+1085,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
    bufp->fullBit(oldp+1086,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
    bufp->fullBit(oldp+1087,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
    bufp->fullIData(oldp+1088,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
    bufp->fullBit(oldp+1089,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                              | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
    bufp->fullBit(oldp+1090,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    bufp->fullBit(oldp+1091,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
    bufp->fullIData(oldp+1092,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
    bufp->fullBit(oldp+1093,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
    bufp->fullIData(oldp+1094,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+1095,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
    bufp->fullIData(oldp+1096,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
    bufp->fullBit(oldp+1098,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
    bufp->fullBit(oldp+1099,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
    bufp->fullBit(oldp+1100,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
    bufp->fullIData(oldp+1101,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
    bufp->fullBit(oldp+1102,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
    bufp->fullBit(oldp+1104,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
    bufp->fullBit(oldp+1105,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
    bufp->fullBit(oldp+1106,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
    bufp->fullBit(oldp+1107,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
    bufp->fullBit(oldp+1108,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
    bufp->fullBit(oldp+1109,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
    bufp->fullBit(oldp+1110,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
    bufp->fullIData(oldp+1111,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
    bufp->fullCData(oldp+1112,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
    bufp->fullCData(oldp+1113,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
    bufp->fullQData(oldp+1114,((0xfffffffffffffULL 
                                & (((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                    + (((QData)((IData)(
                                                        (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (1ULL 
                                                                                & (VL_SHIFTL_QQI(50,50,32, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH, 0x10U) 
                                                                                >> 0x31U))))))))) 
                                        << 0x32U) | 
                                       (0x3ffffffffffffULL 
                                        & VL_SHIFTL_QQI(50,50,32, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH, 0x10U)))) 
                                   + (((QData)((IData)(
                                                       (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (1ULL 
                                                                                & (VL_SHIFTL_QQI(50,50,32, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL, 0x10U) 
                                                                                >> 0x31U))))))))) 
                                       << 0x32U) | 
                                      (0x3ffffffffffffULL 
                                       & VL_SHIFTL_QQI(50,50,32, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL, 0x10U)))))),52);
    bufp->fullQData(oldp+1116,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
    bufp->fullQData(oldp+1118,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullQData(oldp+1120,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, 
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
    bufp->fullQData(oldp+1122,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, 
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullIData(oldp+1124,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullIData(oldp+1125,((0xfffffffeU & (((3U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                               + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
    bufp->fullBit(oldp+1126,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                               != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                 & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                     ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x15U) 
                                        ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                           >> 1U)) : 
                                    ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x15U) : 
                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 8U)))))));
    bufp->fullIData(oldp+1127,((IData)((0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(33,33,5, 
                                                         (((QData)((IData)(
                                                                           ((3U 
                                                                             == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                               >> 0x1fU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                         (0x1fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5))))),32);
    bufp->fullIData(oldp+1128,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                 ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                     : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                            | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                         : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                            ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                     ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA)
                                     : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
    bufp->fullIData(oldp+1129,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+1130,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU)))
                                 ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                     << 0x18U) | ((0xff0000U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                                 : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0xcU)))
                                     ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                     : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullBit(oldp+1131,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U)))));
    bufp->fullBit(oldp+1132,((1U & (~ (IData)(((0U 
                                                == 
                                                (0xf8000U 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               & ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                       >> 0xdU))) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                         >> 0xdU))))))))));
    bufp->fullBit(oldp+1133,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
    bufp->fullBit(oldp+1134,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_150)) 
                              & (0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))));
    bufp->fullBit(oldp+1135,((0U == (0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1136,((0x2004020U == (0x2004064U 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
    bufp->fullBit(oldp+1138,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
    bufp->fullBit(oldp+1139,((0x2000030U == (0x2004074U 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullCData(oldp+1140,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL),2);
    bufp->fullBit(oldp+1141,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_7));
    bufp->fullCData(oldp+1142,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL),2);
    bufp->fullCData(oldp+1143,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL),2);
    bufp->fullBit(oldp+1144,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_38))));
    bufp->fullBit(oldp+1145,((0x4008U == (0x4048U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1146,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
    bufp->fullBit(oldp+1147,((0x20U == (0x20U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1148,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+1149,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_70));
    bufp->fullBit(oldp+1150,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_84))));
    bufp->fullCData(oldp+1151,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC2_CTRL),2);
    bufp->fullCData(oldp+1152,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL),2);
    bufp->fullCData(oldp+1153,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL),2);
    bufp->fullIData(oldp+1154,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+1155,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+1156,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+1157,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullIData(oldp+1158,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
    bufp->fullBit(oldp+1159,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
    bufp->fullBit(oldp+1160,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
    bufp->fullBit(oldp+1161,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
    bufp->fullBit(oldp+1162,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
    bufp->fullBit(oldp+1163,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
    bufp->fullQData(oldp+1164,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
    bufp->fullQData(oldp+1166,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
    bufp->fullQData(oldp+1168,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
    bufp->fullQData(oldp+1170,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
    bufp->fullIData(oldp+1172,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
    bufp->fullBit(oldp+1173,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
    bufp->fullBit(oldp+1174,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    bufp->fullBit(oldp+1175,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
    bufp->fullCData(oldp+1176,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
    bufp->fullCData(oldp+1177,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
    bufp->fullCData(oldp+1178,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
    bufp->fullIData(oldp+1179,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
    bufp->fullBit(oldp+1180,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    bufp->fullIData(oldp+1181,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
    bufp->fullBit(oldp+1182,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
    bufp->fullIData(oldp+1183,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
    bufp->fullBit(oldp+1184,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
    bufp->fullCData(oldp+1185,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
    bufp->fullBit(oldp+1186,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_47));
    bufp->fullBit(oldp+1187,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_136))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1188,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+1189,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
    bufp->fullBit(oldp+1190,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+1191,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
    bufp->fullBit(oldp+1192,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+1193,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+1194,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
    bufp->fullIData(oldp+1195,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
    bufp->fullIData(oldp+1196,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
    bufp->fullCData(oldp+1197,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
    bufp->fullCData(oldp+1198,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
    bufp->fullBit(oldp+1199,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
    bufp->fullBit(oldp+1200,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
    bufp->fullBit(oldp+1201,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
    bufp->fullCData(oldp+1202,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
    bufp->fullCData(oldp+1203,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
    bufp->fullBit(oldp+1204,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_150))));
    bufp->fullBit(oldp+1205,((0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1206,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA));
    bufp->fullCData(oldp+1207,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
    bufp->fullIData(oldp+1208,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
    bufp->fullIData(oldp+1209,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
    bufp->fullCData(oldp+1210,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
    bufp->fullIData(oldp+1211,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
    bufp->fullBit(oldp+1212,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+1213,((0U != (((0x17U == (0x5fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      << 0x14U) | (
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    << 0x13U) 
                                                   | (((3U 
                                                        == 
                                                        (0x106fU 
                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                       << 0x12U) 
                                                      | (((0x1073U 
                                                           == 
                                                           (0x107fU 
                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                          << 0x11U) 
                                                         | (((0x2073U 
                                                              == 
                                                              (0x207fU 
                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                             << 0x10U) 
                                                            | (((0x4063U 
                                                                 == 
                                                                 (0x407fU 
                                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                << 0xfU) 
                                                               | (((0x2013U 
                                                                    == 
                                                                    (0x207fU 
                                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                   << 0xeU) 
                                                                  | (((0x23U 
                                                                       == 
                                                                       (0x603fU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                      << 0xdU) 
                                                                     | (((3U 
                                                                          == 
                                                                          (0x207fU 
                                                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                         << 0xcU) 
                                                                        | (((3U 
                                                                             == 
                                                                             (0x505fU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                            << 0xbU) 
                                                                           | (((0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                               << 0xaU) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 9U) 
                                                                                | (((0x33U 
                                                                                == 
                                                                                (0xfc00007fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 8U) 
                                                                                | (((0x500fU 
                                                                                == 
                                                                                (0x1f0707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 7U) 
                                                                                | (((0x5013U 
                                                                                == 
                                                                                (0xbc00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 6U) 
                                                                                | (((0x1013U 
                                                                                == 
                                                                                (0xfc00307fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 5U) 
                                                                                | (((0x5033U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 4U) 
                                                                                | (((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 3U) 
                                                                                | (((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 2U) 
                                                                                | (((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                << 1U) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))))));
    bufp->fullBit(oldp+1214,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
    bufp->fullBit(oldp+1215,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    bufp->fullBit(oldp+1216,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
    bufp->fullBit(oldp+1217,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
    bufp->fullBit(oldp+1218,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    bufp->fullIData(oldp+1219,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
    bufp->fullBit(oldp+1220,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
    bufp->fullBit(oldp+1221,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    bufp->fullIData(oldp+1222,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
    bufp->fullBit(oldp+1223,((0U == (0x58U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1224,((0x1008U == (0x5048U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1225,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
    bufp->fullBit(oldp+1226,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
    bufp->fullBit(oldp+1227,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
    bufp->fullBit(oldp+1228,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
    bufp->fullCData(oldp+1229,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_BRANCH_CTRL),2);
    bufp->fullIData(oldp+1230,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
    bufp->fullIData(oldp+1231,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
    bufp->fullIData(oldp+1232,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
    bufp->fullBit(oldp+1233,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
    bufp->fullBit(oldp+1234,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
    bufp->fullBit(oldp+1235,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid));
    bufp->fullBit(oldp+1236,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
    bufp->fullBit(oldp+1237,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
    bufp->fullBit(oldp+1238,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
    bufp->fullBit(oldp+1239,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
    bufp->fullBit(oldp+1240,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
    bufp->fullBit(oldp+1241,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
    bufp->fullBit(oldp+1242,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_h017d330c__0))));
    bufp->fullBit(oldp+1243,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
    bufp->fullBit(oldp+1244,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
    bufp->fullBit(oldp+1245,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
    bufp->fullBit(oldp+1246,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
    bufp->fullBit(oldp+1247,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    bufp->fullBit(oldp+1248,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
    bufp->fullBit(oldp+1249,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
    bufp->fullBit(oldp+1250,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
    bufp->fullBit(oldp+1251,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
    bufp->fullBit(oldp+1252,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    bufp->fullBit(oldp+1253,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
    bufp->fullBit(oldp+1254,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
    bufp->fullIData(oldp+1255,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
    bufp->fullBit(oldp+1256,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong));
    bufp->fullBit(oldp+1257,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
    bufp->fullBit(oldp+1258,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
    bufp->fullBit(oldp+1259,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
    bufp->fullBit(oldp+1260,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
    bufp->fullBit(oldp+1261,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    bufp->fullCData(oldp+1262,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
    bufp->fullIData(oldp+1263,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullBit(oldp+1264,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
    bufp->fullIData(oldp+1265,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
    bufp->fullCData(oldp+1266,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
    bufp->fullCData(oldp+1267,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
    bufp->fullBit(oldp+1268,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
    bufp->fullBit(oldp+1269,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
    bufp->fullIData(oldp+1270,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
    bufp->fullBit(oldp+1271,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
    bufp->fullBit(oldp+1272,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
    bufp->fullCData(oldp+1273,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
    bufp->fullBit(oldp+1274,(((0U == (((0x17U == (0x5fU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                       << 0x14U) | 
                                      (((0x6fU == (0x7fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                        << 0x13U) | 
                                       (((3U == (0x106fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         << 0x12U) 
                                        | (((0x1073U 
                                             == (0x107fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                            << 0x11U) 
                                           | (((0x2073U 
                                                == 
                                                (0x207fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               << 0x10U) 
                                              | (((0x4063U 
                                                   == 
                                                   (0x407fU 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                  << 0xfU) 
                                                 | (((0x2013U 
                                                      == 
                                                      (0x207fU 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                     << 0xeU) 
                                                    | (((0x23U 
                                                         == 
                                                         (0x603fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        << 0xdU) 
                                                       | (((3U 
                                                            == 
                                                            (0x207fU 
                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                           << 0xcU) 
                                                          | (((3U 
                                                               == 
                                                               (0x505fU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                              << 0xbU) 
                                                             | (((0x63U 
                                                                  == 
                                                                  (0x707bU 
                                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 << 0xaU) 
                                                                | (((0xfU 
                                                                     == 
                                                                     (0x607fU 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    << 9U) 
                                                                   | (((0x33U 
                                                                        == 
                                                                        (0xfc00007fU 
                                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                       << 8U) 
                                                                      | (((0x500fU 
                                                                           == 
                                                                           (0x1f0707fU 
                                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                          << 7U) 
                                                                         | (((0x5013U 
                                                                              == 
                                                                              (0xbc00707fU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                             << 6U) 
                                                                            | (((0x1013U 
                                                                                == 
                                                                                (0xfc00307fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 5U) 
                                                                               | (((0x5033U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 4U) 
                                                                                | (((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 3U) 
                                                                                | (((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 2U) 
                                                                                | (((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                << 1U) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid))));
    bufp->fullBit(oldp+1275,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
    bufp->fullIData(oldp+1276,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataSignal),32);
    bufp->fullIData(oldp+1277,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
    bufp->fullBit(oldp+1278,((0U == (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid)))));
    bufp->fullBit(oldp+1279,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
    bufp->fullBit(oldp+1280,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
    bufp->fullBit(oldp+1281,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
    bufp->fullBit(oldp+1282,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
    bufp->fullBit(oldp+1283,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
    bufp->fullBit(oldp+1284,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
    bufp->fullCData(oldp+1285,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
    bufp->fullBit(oldp+1286,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready));
    bufp->fullBit(oldp+1287,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
    bufp->fullBit(oldp+1288,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
    bufp->fullBit(oldp+1289,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    bufp->fullBit(oldp+1290,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
    bufp->fullBit(oldp+1291,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
    bufp->fullBit(oldp+1292,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready));
    bufp->fullBit(oldp+1293,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
    bufp->fullBit(oldp+1294,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
    bufp->fullBit(oldp+1295,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    bufp->fullBit(oldp+1296,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
    bufp->fullBit(oldp+1297,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_7(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1298,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
    bufp->fullBit(oldp+1299,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
    bufp->fullBit(oldp+1300,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
    bufp->fullBit(oldp+1301,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
    bufp->fullBit(oldp+1302,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    bufp->fullBit(oldp+1303,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
    bufp->fullBit(oldp+1304,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
    bufp->fullBit(oldp+1305,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
    bufp->fullIData(oldp+1306,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
    bufp->fullIData(oldp+1307,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
    bufp->fullBit(oldp+1308,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
    bufp->fullBit(oldp+1309,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
    bufp->fullBit(oldp+1310,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
    bufp->fullBit(oldp+1311,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
    bufp->fullBit(oldp+1312,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
    bufp->fullBit(oldp+1313,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
    bufp->fullBit(oldp+1314,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
    bufp->fullBit(oldp+1315,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid))));
    bufp->fullBit(oldp+1316,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
    bufp->fullBit(oldp+1317,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
    bufp->fullIData(oldp+1318,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
    bufp->fullIData(oldp+1319,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
    bufp->fullCData(oldp+1320,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
    bufp->fullCData(oldp+1321,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
    bufp->fullBit(oldp+1322,(((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))) 
                              || (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last))));
    bufp->fullBit(oldp+1323,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
    bufp->fullBit(oldp+1324,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
    bufp->fullBit(oldp+1325,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
    bufp->fullIData(oldp+1326,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
    bufp->fullIData(oldp+1327,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
    bufp->fullCData(oldp+1328,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
    bufp->fullCData(oldp+1329,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
    bufp->fullBit(oldp+1330,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
    bufp->fullBit(oldp+1331,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
    bufp->fullIData(oldp+1332,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
    bufp->fullCData(oldp+1333,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))),2);
    bufp->fullBit(oldp+1334,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid))));
    bufp->fullBit(oldp+1335,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid)) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
    bufp->fullBit(oldp+1336,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
    bufp->fullBit(oldp+1337,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
    bufp->fullCData(oldp+1338,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
    bufp->fullCData(oldp+1339,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1340,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1341,((vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1342,(((0xffff0000U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_he4444737__0))),32);
    bufp->fullCData(oldp+1343,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                      >> 0xcU))),2);
    bufp->fullIData(oldp+1344,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                              >> 0xcU)))
                                 ? (((- (IData)(((~ 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                   >> 0xeU)) 
                                                 & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspShifted) 
                                                    >> 7U)))) 
                                     << 8U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspShifted))
                                 : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                  >> 0xcU)))
                                     ? (((- (IData)(
                                                    ((~ 
                                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                       >> 0xeU)) 
                                                     & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2) 
                                                        >> 7U)))) 
                                         << 0x10U) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_he4444737__0))
                                     : ((0xffff0000U 
                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_he4444737__0))))),32);
    bufp->fullBit(oldp+1345,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                              >> 7U)))));
    bufp->fullCData(oldp+1346,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1347,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1348,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
    bufp->fullIData(oldp+1349,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
    bufp->fullIData(oldp+1350,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                    & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                        | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                     : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                        ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
    bufp->fullCData(oldp+1351,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
    bufp->fullIData(oldp+1352,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
    bufp->fullBit(oldp+1353,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
    bufp->fullBit(oldp+1354,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
    bufp->fullBit(oldp+1355,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackWrites_valid));
    bufp->fullCData(oldp+1356,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1357,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
    bufp->fullBit(oldp+1358,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
    bufp->fullCData(oldp+1359,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
    bufp->fullIData(oldp+1360,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
    bufp->fullBit(oldp+1361,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                              == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+1362,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                              == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+1363,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U)) == 
                              (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+1364,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U)) == 
                              (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+1365,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
    bufp->fullBit(oldp+1366,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
    bufp->fullBit(oldp+1367,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
    bufp->fullBit(oldp+1368,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
    bufp->fullBit(oldp+1369,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
    bufp->fullBit(oldp+1370,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
    bufp->fullBit(oldp+1371,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
    bufp->fullBit(oldp+1372,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
    bufp->fullBit(oldp+1373,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
    bufp->fullBit(oldp+1374,((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_136))));
    bufp->fullBit(oldp+1375,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_47)))));
    bufp->fullBit(oldp+1376,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
    bufp->fullBit(oldp+1377,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
    bufp->fullCData(oldp+1378,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))),3);
    bufp->fullBit(oldp+1379,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                              & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0x15U) ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                   >> 1U))
                                  : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x15U) : 
                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 8U))))));
    bufp->fullIData(oldp+1380,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
    bufp->fullIData(oldp+1381,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
    bufp->fullIData(oldp+1382,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                  : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
    bufp->fullCData(oldp+1383,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_misa_base),2);
    bufp->fullIData(oldp+1384,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_misa_extensions),26);
    bufp->fullCData(oldp+1385,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
    bufp->fullIData(oldp+1386,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
    bufp->fullIData(oldp+1387,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
    bufp->fullBit(oldp+1388,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
    bufp->fullBit(oldp+1389,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
    bufp->fullCData(oldp+1390,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
    bufp->fullBit(oldp+1391,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
    bufp->fullBit(oldp+1392,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
    bufp->fullBit(oldp+1393,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
    bufp->fullBit(oldp+1394,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    bufp->fullBit(oldp+1395,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    bufp->fullBit(oldp+1396,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    bufp->fullIData(oldp+1397,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mscratch),32);
    bufp->fullBit(oldp+1398,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
    bufp->fullCData(oldp+1399,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
    bufp->fullIData(oldp+1400,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
    bufp->fullQData(oldp+1401,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
    bufp->fullQData(oldp+1403,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
    bufp->fullBit(oldp+1405,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    bufp->fullCData(oldp+1406,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
    bufp->fullIData(oldp+1407,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
    bufp->fullBit(oldp+1408,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
    bufp->fullCData(oldp+1409,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
    bufp->fullBit(oldp+1410,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952));
    bufp->fullBit(oldp+1411,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952_1));
    bufp->fullBit(oldp+1412,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952_2));
    bufp->fullBit(oldp+1413,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_lastStageWasWfi));
    bufp->fullBit(oldp+1414,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
    bufp->fullBit(oldp+1415,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
    bufp->fullBit(oldp+1416,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
    bufp->fullBit(oldp+1417,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
    bufp->fullBit(oldp+1418,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                      << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
    bufp->fullBit(oldp+1419,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1064));
    bufp->fullCData(oldp+1420,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                      >> 0x1cU))),2);
    bufp->fullBit(oldp+1421,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
    bufp->fullBit(oldp+1422,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1108));
    bufp->fullBit(oldp+1423,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake)))));
    bufp->fullBit(oldp+1424,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1064) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                                   & (1U 
                                                      == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))))))));
    bufp->fullBit(oldp+1425,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid)))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_8(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    bufp->fullBit(oldp+1426,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
    bufp->fullBit(oldp+1427,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                              & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
    bufp->fullBit(oldp+1428,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1144));
    bufp->fullBit(oldp+1429,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE))));
    bufp->fullBit(oldp+1430,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE))));
    bufp->fullBit(oldp+1431,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
    bufp->fullBit(oldp+1432,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                              & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE)))));
    bufp->fullBit(oldp+1433,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1434,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176));
    bufp->fullSData(oldp+1435,((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x14U)),12);
    bufp->fullBit(oldp+1436,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU))) 
                              || (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+1437,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU)))));
    bufp->fullSData(oldp+1438,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
    bufp->fullSData(oldp+1439,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
    bufp->fullIData(oldp+1440,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
    bufp->fullIData(oldp+1441,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
    bufp->fullIData(oldp+1442,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
    bufp->fullIData(oldp+1443,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
    __Vtemp_2[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                >> 0x33U))))) 
                      << 0x14U) | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (3U & ((- (IData)((1U & (IData)(
                                                    (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                     >> 0x33U))))) 
                           >> 0xcU));
    __Vtemp_3[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
    __Vtemp_3[1U] = (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH 
                             >> 0x20U));
    __Vtemp_3[2U] = 0U;
    VL_SHIFTL_WWI(66,66,32, __Vtemp_4, __Vtemp_3, 0x20U);
    VL_ADD_W(3, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    __Vtemp_6[0U] = __Vtemp_5[0U];
    __Vtemp_6[1U] = __Vtemp_5[1U];
    __Vtemp_6[2U] = (3U & __Vtemp_5[2U]);
    bufp->fullWData(oldp+1444,(__Vtemp_6),66);
    bufp->fullBit(oldp+1447,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid))));
    bufp->fullQData(oldp+1448,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
    bufp->fullIData(oldp+1450,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
    bufp->fullWData(oldp+1451,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
    bufp->fullBit(oldp+1454,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
    bufp->fullBit(oldp+1455,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
    bufp->fullBit(oldp+1456,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
    bufp->fullCData(oldp+1457,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
    bufp->fullCData(oldp+1458,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
    bufp->fullBit(oldp+1459,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullBit(oldp+1460,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    bufp->fullBit(oldp+1461,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
    bufp->fullBit(oldp+1462,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullIData(oldp+1463,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
    bufp->fullBit(oldp+1464,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
    bufp->fullBit(oldp+1465,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
    bufp->fullQData(oldp+1466,((((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U])) 
                                 << 1U) | (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                                      >> 0x1fU))))))),33);
    bufp->fullQData(oldp+1468,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
    bufp->fullIData(oldp+1470,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                               >> 0x20U)))
                                 ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U] 
                                     << 1U) | (1U & (IData)(
                                                            (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                             >> 0x1fU))))
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
    bufp->fullIData(oldp+1471,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                 << 1U) | (1U & (~ (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                            >> 0x20U)))))),32);
    bufp->fullIData(oldp+1472,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
    bufp->fullBit(oldp+1473,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
    bufp->fullBit(oldp+1474,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
    bufp->fullBit(oldp+1475,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
    bufp->fullBit(oldp+1476,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3857));
    bufp->fullBit(oldp+1477,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3858));
    bufp->fullBit(oldp+1478,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3859));
    bufp->fullBit(oldp+1479,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3860));
    bufp->fullBit(oldp+1480,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_769));
    bufp->fullBit(oldp+1481,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
    bufp->fullBit(oldp+1482,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
    bufp->fullBit(oldp+1483,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
    bufp->fullBit(oldp+1484,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
    bufp->fullBit(oldp+1485,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
    bufp->fullBit(oldp+1486,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_832));
    bufp->fullBit(oldp+1487,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
    bufp->fullBit(oldp+1488,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
    bufp->fullBit(oldp+1489,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2816));
    bufp->fullBit(oldp+1490,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2944));
    bufp->fullBit(oldp+1491,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2818));
    bufp->fullBit(oldp+1492,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2946));
    bufp->fullBit(oldp+1493,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3072));
    bufp->fullBit(oldp+1494,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3200));
    bufp->fullBit(oldp+1495,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3074));
    bufp->fullBit(oldp+1496,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3202));
    bufp->fullBit(oldp+1497,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
    bufp->fullBit(oldp+1498,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
    bufp->fullBit(oldp+1499,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176)))));
    bufp->fullBit(oldp+1500,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
    bufp->fullQData(oldp+1501,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL_string),40);
    bufp->fullWData(oldp+1503,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
    bufp->fullQData(oldp+1506,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                 ? 0x584f525f31ULL : 
                                ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                  ? 0x4f525f3120ULL
                                  : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                      ? 0x414e445f31ULL
                                      : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+1508,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC2_CTRL_string),24);
    bufp->fullQData(oldp+1509,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                 ? 0x4144445f53554220ULL
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                     ? 0x534c545f534c5455ULL
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                         ? 0x4249545749534520ULL
                                         : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullWData(oldp+1511,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+1514,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1516,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1518,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_ENV_CTRL_string),40);
    bufp->fullIData(oldp+1520,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+1521,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+1524,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+1527,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2_CTRL_string),24);
    bufp->fullWData(oldp+1528,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+1531,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                 ? 0x4144445f53554220ULL
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                     ? 0x534c545f534c5455ULL
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                         ? 0x4249545749534520ULL
                                         : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullQData(oldp+1533,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? 0x584f525f31ULL : 
                                ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? 0x4f525f3120ULL
                                  : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? 0x414e445f31ULL
                                      : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+1535,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+1536,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
    bufp->fullIData(oldp+1539,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL_string),24);
    bufp->fullWData(oldp+1540,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+1543,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+1546,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL_string),32);
    bufp->fullQData(oldp+1547,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1549,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1551,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL_string),40);
    bufp->fullBit(oldp+1553,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
    bufp->fullBit(oldp+1554,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    bufp->fullIData(oldp+1555,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
    bufp->fullBit(oldp+1556,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
    bufp->fullBit(oldp+1557,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    bufp->fullCData(oldp+1558,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
    bufp->fullBit(oldp+1559,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                       >> 7U)))));
    bufp->fullBit(oldp+1560,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
    bufp->fullBit(oldp+1561,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
    bufp->fullBit(oldp+1562,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
    bufp->fullBit(oldp+1563,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
    bufp->fullBit(oldp+1564,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
    bufp->fullCData(oldp+1565,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
    bufp->fullBit(oldp+1566,((1U & ((~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                        >> 7U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))));
    bufp->fullCData(oldp+1567,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                             >> 5U)
                                          : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
    bufp->fullBit(oldp+1568,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                    >> 7U))));
    bufp->fullIData(oldp+1569,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                >> 0xcU)),20);
    bufp->fullSData(oldp+1570,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                           >> 2U)) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
    bufp->fullBit(oldp+1571,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
    bufp->fullBit(oldp+1572,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
    bufp->fullBit(oldp+1573,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                    >> 1U))));
    bufp->fullIData(oldp+1574,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                            >> 2U))),20);
    bufp->fullBit(oldp+1575,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
    bufp->fullBit(oldp+1576,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
    bufp->fullBit(oldp+1577,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
    bufp->fullBit(oldp+1578,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
    bufp->fullBit(oldp+1579,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
    bufp->fullBit(oldp+1580,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
    bufp->fullBit(oldp+1581,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+1582,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
    bufp->fullBit(oldp+1583,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
    bufp->fullBit(oldp+1584,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
    bufp->fullCData(oldp+1585,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
    bufp->fullBit(oldp+1586,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
    bufp->fullBit(oldp+1587,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
    bufp->fullCData(oldp+1588,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
    bufp->fullBit(oldp+1589,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
    bufp->fullBit(oldp+1590,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
    bufp->fullIData(oldp+1591,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
    bufp->fullBit(oldp+1592,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
    bufp->fullBit(oldp+1593,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
    bufp->fullCData(oldp+1594,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_9(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_9\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1595,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
    bufp->fullBit(oldp+1596,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
    bufp->fullIData(oldp+1597,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
    bufp->fullBit(oldp+1598,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
    bufp->fullSData(oldp+1599,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
    bufp->fullBit(oldp+1600,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
    bufp->fullBit(oldp+1601,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
    bufp->fullSData(oldp+1602,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
    bufp->fullIData(oldp+1603,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
    bufp->fullCData(oldp+1604,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
    bufp->fullBit(oldp+1605,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+1606,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                    >> 1U))));
    bufp->fullIData(oldp+1607,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                            >> 2U))),20);
    bufp->fullIData(oldp+1608,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                 << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                               << 0x10U) 
                                              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                  << 8U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
    bufp->fullBit(oldp+1609,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid))));
    bufp->fullBit(oldp+1610,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l637));
    bufp->fullBit(oldp+1611,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l656));
    bufp->fullBit(oldp+1612,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
    bufp->fullBit(oldp+1613,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid))));
    bufp->fullCData(oldp+1614,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
    bufp->fullBit(oldp+1615,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l637) 
                              & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                                >> 2U))) 
                                 & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
    bufp->fullCData(oldp+1616,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
    bufp->fullBit(oldp+1617,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
    bufp->fullCData(oldp+1618,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
    bufp->fullBit(oldp+1619,((((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                >> 0xcU) == (0xfffffU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                >> 2U))) 
                              & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+1620,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
    bufp->fullBit(oldp+1621,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
    bufp->fullBit(oldp+1622,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l637) 
                                 & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                     == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                   >> 2U))) 
                                    & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
                                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask))))))));
    bufp->fullCData(oldp+1623,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
    bufp->fullBit(oldp+1624,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
    bufp->fullBit(oldp+1625,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
    bufp->fullBit(oldp+1626,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l816));
    bufp->fullIData(oldp+1627,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+1628,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    bufp->fullBit(oldp+1629,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
    bufp->fullBit(oldp+1630,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
    bufp->fullBit(oldp+1631,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
    bufp->fullBit(oldp+1632,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
    bufp->fullBit(oldp+1633,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
    bufp->fullBit(oldp+1634,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+1635,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
    bufp->fullBit(oldp+1636,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
    bufp->fullIData(oldp+1637,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
    bufp->fullIData(oldp+1638,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
    bufp->fullBit(oldp+1639,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
    bufp->fullBit(oldp+1640,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
    bufp->fullBit(oldp+1641,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
    bufp->fullBit(oldp+1642,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
    bufp->fullBit(oldp+1643,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
    bufp->fullBit(oldp+1644,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
    bufp->fullBit(oldp+1645,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
    bufp->fullCData(oldp+1646,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
    bufp->fullBit(oldp+1647,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                       >> 7U)))));
    bufp->fullBit(oldp+1648,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
    bufp->fullBit(oldp+1649,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
    bufp->fullBit(oldp+1650,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
    bufp->fullBit(oldp+1651,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                    | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                       & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
    bufp->fullBit(oldp+1652,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
    bufp->fullBit(oldp+1653,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                     ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                     : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
    bufp->fullBit(oldp+1654,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l989));
    bufp->fullBit(oldp+1655,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                    | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
    bufp->fullBit(oldp+1656,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
    bufp->fullBit(oldp+1657,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
    bufp->fullBit(oldp+1658,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1051));
    bufp->fullBit(oldp+1659,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
    bufp->fullBit(oldp+1660,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    bufp->fullCData(oldp+1661,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                      + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
    bufp->fullCData(oldp+1662,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
    bufp->fullBit(oldp+1663,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
    bufp->fullBit(oldp+1664,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
    bufp->fullBit(oldp+1665,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
    bufp->fullBit(oldp+1666,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
    bufp->fullBit(oldp+1667,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
    bufp->fullBit(oldp+1668,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1075));
    bufp->fullBit(oldp+1669,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
    bufp->fullBit(oldp+1670,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
    bufp->fullBit(oldp+1671,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
    bufp->fullBit(oldp+1672,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid))));
    bufp->fullIData(oldp+1673,(((0xffffe00U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                               << 9U)) 
                                | (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                             >> 2U)))),28);
    bufp->fullBit(oldp+1674,((((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant)) 
                               & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_hd8d6a76f__0) 
                                  & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                              | (((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                  & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_hdc6a83f0__0) 
                                     & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                 | (((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                     & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_h2ddda157__0) 
                                        & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                    | ((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                       & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_hca1fd5df__0) 
                                          & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))))))));
    bufp->fullBit(oldp+1675,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1676,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1677,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1678,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1679,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) 
                              | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished))));
    bufp->fullBit(oldp+1680,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                 & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)) 
                                    & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed)))))));
    bufp->fullQData(oldp+1681,((((QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self2)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self1)))),38);
    bufp->fullBit(oldp+1683,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
                              & (3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))));
    bufp->fullBit(oldp+1684,((((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant)) 
                               & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_hf9a94d1e__0) 
                                  & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                              | (((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                  & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_h03a3b0c1__0) 
                                     & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                 | (((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                     & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_hd46bfa9e__0) 
                                        & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                    | ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                       & ((IData)(vlSymsp->TOP__sim.__VdfgTmp_hee7cfa21__0) 
                                          & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))))))));
    bufp->fullBit(oldp+1685,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))));
    bufp->fullBit(oldp+1686,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))));
    bufp->fullBit(oldp+1687,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))));
    bufp->fullBit(oldp+1688,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))));
    bufp->fullBit(oldp+1689,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
    bufp->fullBit(oldp+1690,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ibus_ack))));
    bufp->fullIData(oldp+1691,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_q),32);
    bufp->fullCData(oldp+1692,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_q),3);
    bufp->fullBit(oldp+1693,((0U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullBit(oldp+1694,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__pending_q));
    bufp->fullQData(oldp+1695,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__cycles_q),64);
    bufp->fullCData(oldp+1697,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__status_q),8);
    bufp->fullBit(oldp+1698,((4U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullIData(oldp+1699,((0xffffffU & (vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                             >> 4U))),24);
    bufp->fullBit(oldp+1700,((3U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullBit(oldp+1701,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_valid));
    bufp->fullCData(oldp+1702,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__addr_q),8);
    bufp->fullIData(oldp+1703,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q),32);
    bufp->fullBit(oldp+1704,(vlSymsp->TOP__sim.__PVT__build_soc_csr_req_ready));
    bufp->fullBit(oldp+1705,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    bufp->fullBit(oldp+1706,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    bufp->fullBit(oldp+1707,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q));
    bufp->fullIData(oldp+1708,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q),32);
    bufp->fullBit(oldp+1709,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_10(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_10\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+1710,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__irq_q));
    bufp->fullIData(oldp+1711,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_addr),32);
    bufp->fullBit(oldp+1712,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_ready));
    bufp->fullBit(oldp+1713,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullWData(oldp+1714,(vlSymsp->TOP__sim.__PVT__build_soc_mem_rsp_data),128);
    bufp->fullBit(oldp+1718,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q));
    bufp->fullBit(oldp+1719,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullBit(oldp+1720,(((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                              | (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))));
    bufp->fullBit(oldp+1721,(((2U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                              | (6U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)))));
    bufp->fullWData(oldp+1722,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q),128);
    bufp->fullBit(oldp+1726,((4U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullSData(oldp+1727,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q),16);
    bufp->fullBit(oldp+1728,(vlSymsp->TOP__sim.__PVT__build_soc_pending_status));
    bufp->fullBit(oldp+1729,(vlSymsp->TOP__sim.__PVT__build_soc_status_status));
    bufp->fullBit(oldp+1730,((3U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    bufp->fullIData(oldp+1731,(vlSymsp->TOP__sim.__PVT__build_soc_wb_dat_r),32);
    bufp->fullBit(oldp+1732,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__start_raw));
    bufp->fullBit(oldp+1733,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_csr_req_ready) 
                                 & (((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                                     & (0xcU == (0xfcU 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__addr_q)))) 
                                    & vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q)))));
    bufp->fullBit(oldp+1734,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__inflight_q));
    bufp->fullCData(oldp+1735,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_cfg),3);
    bufp->fullIData(oldp+1736,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_cfg),32);
    bufp->fullCData(oldp+1737,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__status_q),8);
    bufp->fullQData(oldp+1738,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__cycles_q),64);
    bufp->fullBit(oldp+1740,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__busy));
    bufp->fullCData(oldp+1741,(((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                 ? 0xfU : 0U)),4);
    bufp->fullQData(oldp+1742,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q),64);
    bufp->fullWData(oldp+1744,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__descriptor_q),512);
    bufp->fullCData(oldp+1760,((vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1761,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q),32);
    bufp->fullIData(oldp+1762,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__response_count_q),32);
    bufp->fullCData(oldp+1763,((0U != vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q)),2);
    bufp->fullCData(oldp+1764,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q),3);
    bufp->fullCData(oldp+1765,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__beat_q),2);
    bufp->fullCData(oldp+1766,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__opcode_q),3);
    bufp->fullIData(oldp+1767,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__address_q),32);
    bufp->fullIData(oldp+1768,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q),32);
    bufp->fullIData(oldp+1769,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__reserved_q),32);
    bufp->fullBit(oldp+1770,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__outstanding_q));
    bufp->fullCData(oldp+1771,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q),2);
    bufp->fullBit(oldp+1772,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request));
    bufp->fullBit(oldp+1773,((0U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullBit(oldp+1774,((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullWData(oldp+1775,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q),128);
    bufp->fullBit(oldp+1779,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)) 
                              & ((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request)) 
                                 & (~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))))));
    bufp->fullBit(oldp+1780,(((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                              & (2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)))));
    bufp->fullCData(oldp+1781,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q),4);
    bufp->fullBit(oldp+1782,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q));
    bufp->fullIData(oldp+1783,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q),32);
    bufp->fullSData(oldp+1784,((0x7fffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),15);
    bufp->fullIData(oldp+1785,(vlSymsp->TOP__sim.__PVT__builder_rhs_self0),30);
    bufp->fullBit(oldp+1786,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel))));
    bufp->fullIData(oldp+1787,(vlSymsp->TOP__sim.__PVT__builder_rhs_self1),32);
    bufp->fullBit(oldp+1788,(vlSymsp->TOP__sim.__PVT__builder_rhs_self4));
    bufp->fullBit(oldp+1789,(vlSymsp->TOP__sim.__PVT__builder_rhs_self5));
    bufp->fullSData(oldp+1790,((0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                          >> 2U))),9);
    bufp->fullWData(oldp+1791,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_dat_w),128);
    bufp->fullSData(oldp+1795,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_we),16);
    bufp->fullBit(oldp+1796,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_int_rst));
    bufp->fullBit(oldp+1797,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_ack));
    bufp->fullWData(oldp+1798,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_dat_r),128);
    bufp->fullIData(oldp+1802,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_port_cmd_payload_addr),24);
    bufp->fullWData(oldp+1803,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata),128);
    bufp->fullBit(oldp+1807,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready0));
    bufp->fullSData(oldp+1808,((0x7ffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),11);
    bufp->fullBit(oldp+1809,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc));
    bufp->fullCData(oldp+1810,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_we),4);
    bufp->fullBit(oldp+1811,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read));
    bufp->fullBit(oldp+1812,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready));
    bufp->fullBit(oldp+1813,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock));
    bufp->fullBit(oldp+1814,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid));
    bufp->fullBit(oldp+1815,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
    bufp->fullBit(oldp+1816,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read));
    bufp->fullBit(oldp+1817,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready));
    bufp->fullBit(oldp+1818,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock));
    bufp->fullBit(oldp+1819,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid));
    bufp->fullBit(oldp+1820,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
    bufp->fullBit(oldp+1821,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read));
    bufp->fullBit(oldp+1822,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready));
    bufp->fullBit(oldp+1823,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock));
    bufp->fullBit(oldp+1824,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid));
    bufp->fullBit(oldp+1825,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
    bufp->fullBit(oldp+1826,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read));
    bufp->fullBit(oldp+1827,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready));
    bufp->fullBit(oldp+1828,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock));
    bufp->fullBit(oldp+1829,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid));
    bufp->fullBit(oldp+1830,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
    bufp->fullBit(oldp+1831,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty));
    bufp->fullIData(oldp+1832,((0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                            >> 0xbU))),21);
    bufp->fullIData(oldp+1833,((((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty) 
                                 << 0x15U) | (0x7ffffU 
                                              & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                                 >> 0xbU)))),22);
    bufp->fullBit(oldp+1834,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_we));
    bufp->fullBit(oldp+1835,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_ack));
    bufp->fullBit(oldp+1836,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_cyc));
    bufp->fullBit(oldp+1837,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_clr));
    bufp->fullBit(oldp+1838,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_inc));
    bufp->fullBit(oldp+1839,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_write_from_slave));
    bufp->fullBit(oldp+1840,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid14));
    bufp->fullBit(oldp+1841,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready2));
    bufp->fullBit(oldp+1842,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value));
    bufp->fullBit(oldp+1843,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed));
    bufp->fullIData(oldp+1844,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0),26);
    bufp->fullBit(oldp+1845,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0));
    bufp->fullBit(oldp+1846,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2));
    bufp->fullBit(oldp+1847,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2));
    bufp->fullBit(oldp+1848,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1));
    bufp->fullBit(oldp+1849,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1));
    bufp->fullBit(oldp+1850,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd));
    __Vtemp_1[0U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
    __Vtemp_1[1U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
    __Vtemp_1[2U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
    __Vtemp_1[3U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
    __Vtemp_1[4U] = 0U;
    bufp->fullWData(oldp+1851,(__Vtemp_1),130);
    bufp->fullCData(oldp+1856,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3),4);
    bufp->fullBit(oldp+1857,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3));
    bufp->fullBit(oldp+1858,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready));
    bufp->fullBit(oldp+1859,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready1));
    bufp->fullBit(oldp+1860,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part));
    bufp->fullBit(oldp+1861,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
    bufp->fullBit(oldp+1862,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read));
    bufp->fullBit(oldp+1863,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid));
    bufp->fullBit(oldp+1864,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
    bufp->fullBit(oldp+1865,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished));
    bufp->fullBit(oldp+1866,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)))));
    bufp->fullIData(oldp+1867,((0x3ffffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                              - (IData)(0x800000U)))),26);
    bufp->fullBit(oldp+1868,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_ready));
    bufp->fullBit(oldp+1869,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid));
    bufp->fullBit(oldp+1870,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc)))));
    bufp->fullBit(oldp+1871,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_ack));
    bufp->fullIData(oldp+1872,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),28);
    bufp->fullBit(oldp+1873,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc));
    bufp->fullBit(oldp+1874,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel) 
                                 >> 4U))));
    bufp->fullCData(oldp+1875,(vlSymsp->TOP__sim.__PVT__builder_fullmemorywe_next_state),2);
    bufp->fullBit(oldp+1876,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel) 
                                 >> 5U))));
    bufp->fullSData(oldp+1877,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value1),14);
    bufp->fullBit(oldp+1878,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1));
    bufp->fullIData(oldp+1879,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0),32);
    bufp->fullBit(oldp+1880,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value2));
    bufp->fullBit(oldp+1881,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2));
    bufp->fullBit(oldp+1882,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value3));
    bufp->fullBit(oldp+1883,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3));
    bufp->fullBit(oldp+1884,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid0));
    bufp->fullBit(oldp+1885,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid10));
    bufp->fullBit(oldp+1886,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid11));
    bufp->fullBit(oldp+1887,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid12));
    bufp->fullBit(oldp+1888,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid13));
    bufp->fullBit(oldp+1889,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid5));
    bufp->fullCData(oldp+1890,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_next_state),2);
    bufp->fullCData(oldp+1891,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant),2);
    bufp->fullCData(oldp+1892,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant),2);
    bufp->fullCData(oldp+1893,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant),2);
    bufp->fullCData(oldp+1894,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant),2);
    bufp->fullCData(oldp+1895,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native0_next_state),2);
    bufp->fullCData(oldp+1896,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native1_next_state),2);
    bufp->fullBit(oldp+1897,(vlSymsp->TOP__sim.__PVT__builder_rhs_self3));
    bufp->fullCData(oldp+1898,(vlSymsp->TOP__sim.__PVT__builder_slave_sel),6);
    bufp->fullCData(oldp+1899,(vlSymsp->TOP__sim.__PVT__builder_wishbone2csr_next_state),2);
    bufp->fullBit(oldp+1900,(vlSymsp->TOP__sim.__Vcellinp__litex_wishbone_csr_bridge__rst_ni));
    bufp->fullIData(oldp+1901,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),30);
    bufp->fullBit(oldp+1902,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
    bufp->fullBit(oldp+1903,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock))))));
    bufp->fullBit(oldp+1904,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock))))));
    bufp->fullBit(oldp+1905,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock))))));
    bufp->fullBit(oldp+1906,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock))))));
    bufp->fullBit(oldp+1907,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self4) 
                              & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack)) 
                                 & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3)))));
    bufp->fullBit(oldp+1908,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_ready));
    bufp->fullWData(oldp+1909,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata),128);
    bufp->fullSData(oldp+1913,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask),16);
    bufp->fullWData(oldp+1914,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w),128);
    bufp->fullSData(oldp+1918,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we),16);
    bufp->fullWData(oldp+1919,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w),128);
    bufp->fullSData(oldp+1923,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we),16);
    bufp->fullWData(oldp+1924,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w),128);
    bufp->fullSData(oldp+1928,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we),16);
    bufp->fullWData(oldp+1929,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w),128);
    bufp->fullSData(oldp+1933,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we),16);
    bufp->fullBit(oldp+1934,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_dbus_ack));
    bufp->fullIData(oldp+1935,(vlSymsp->TOP__sim.__PVT__builder_shared_dat_r),32);
    bufp->fullBit(oldp+1936,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ibus_ack));
    bufp->fullIData(oldp+1937,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interrupt),32);
    bufp->fullIData(oldp+1938,(vlSymsp->TOP__sim.__PVT__builder_rhs_self20),22);
    bufp->fullBit(oldp+1939,(vlSymsp->TOP__sim.__PVT__builder_rhs_self21));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_11(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1940,(vlSymsp->TOP__sim.__PVT__builder_rhs_self22));
    bufp->fullIData(oldp+1941,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self20 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self21))),25);
    bufp->fullIData(oldp+1942,(vlSymsp->TOP__sim.__PVT__builder_rhs_self23),22);
    bufp->fullBit(oldp+1943,(vlSymsp->TOP__sim.__PVT__builder_rhs_self24));
    bufp->fullBit(oldp+1944,(vlSymsp->TOP__sim.__PVT__builder_rhs_self25));
    bufp->fullIData(oldp+1945,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self23 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self24))),25);
    bufp->fullIData(oldp+1946,(vlSymsp->TOP__sim.__PVT__builder_rhs_self26),22);
    bufp->fullBit(oldp+1947,(vlSymsp->TOP__sim.__PVT__builder_rhs_self27));
    bufp->fullBit(oldp+1948,(vlSymsp->TOP__sim.__PVT__builder_rhs_self28));
    bufp->fullIData(oldp+1949,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self26 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self27))),25);
    bufp->fullIData(oldp+1950,(vlSymsp->TOP__sim.__PVT__builder_rhs_self29),22);
    bufp->fullBit(oldp+1951,(vlSymsp->TOP__sim.__PVT__builder_rhs_self30));
    bufp->fullBit(oldp+1952,(vlSymsp->TOP__sim.__PVT__builder_rhs_self31));
    bufp->fullIData(oldp+1953,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self29 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self30))),25);
    bufp->fullWData(oldp+1954,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata),128);
    bufp->fullSData(oldp+1958,((0xffffU & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we)))),16);
    bufp->fullSData(oldp+1959,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we),16);
    bufp->fullCData(oldp+1960,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_request),3);
    bufp->fullCData(oldp+1961,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_request),3);
    bufp->fullCData(oldp+1962,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_request),3);
    bufp->fullCData(oldp+1963,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_request),3);
    bufp->fullBit(oldp+1964,(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
    bufp->fullBit(oldp+1965,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
    bufp->fullCData(oldp+1966,(vlSelf->serial_sink_data),8);
    bufp->fullBit(oldp+1967,(vlSelf->serial_sink_ready));
    bufp->fullBit(oldp+1968,(vlSelf->serial_sink_valid));
    bufp->fullCData(oldp+1969,(vlSelf->serial_source_data),8);
    bufp->fullBit(oldp+1970,(vlSelf->serial_source_ready));
    bufp->fullBit(oldp+1971,(vlSelf->serial_source_valid));
    bufp->fullBit(oldp+1972,(vlSelf->sim_trace));
    bufp->fullBit(oldp+1973,(vlSelf->sys_clk));
    bufp->fullSData(oldp+1974,(vlSelf->serial_sink_data),10);
    bufp->fullBit(oldp+1975,(((IData)(vlSelf->serial_sink_valid) 
                              & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)))));
    bufp->fullBit(oldp+1976,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_enable_storage) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_pending_status))));
    bufp->fullIData(oldp+1977,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
    bufp->fullIData(oldp+1978,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
    bufp->fullIData(oldp+1979,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
    bufp->fullBit(oldp+1980,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
    bufp->fullBit(oldp+1981,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
    bufp->fullBit(oldp+1982,((vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1983,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
    bufp->fullBit(oldp+1984,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
    bufp->fullCData(oldp+1985,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->fullIData(oldp+1986,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->fullCData(oldp+1987,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
    bufp->fullBit(oldp+1988,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    bufp->fullBit(oldp+1989,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
    bufp->fullIData(oldp+1990,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->fullIData(oldp+1991,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->fullIData(oldp+1992,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->fullIData(oldp+1993,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->fullIData(oldp+1994,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->fullIData(oldp+1995,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->fullIData(oldp+1996,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->fullIData(oldp+1997,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->fullIData(oldp+1998,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->fullIData(oldp+1999,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->fullIData(oldp+2000,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->fullIData(oldp+2001,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->fullIData(oldp+2002,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->fullIData(oldp+2003,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->fullIData(oldp+2004,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->fullIData(oldp+2005,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->fullIData(oldp+2006,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->fullIData(oldp+2007,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->fullIData(oldp+2008,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->fullIData(oldp+2009,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->fullIData(oldp+2010,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->fullIData(oldp+2011,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->fullIData(oldp+2012,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->fullIData(oldp+2013,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->fullIData(oldp+2014,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->fullIData(oldp+2015,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->fullIData(oldp+2016,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->fullIData(oldp+2017,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->fullIData(oldp+2018,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->fullIData(oldp+2019,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->fullIData(oldp+2020,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->fullIData(oldp+2021,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
    bufp->fullBit(oldp+2022,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                              & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                              >> 2U)) 
                                 == (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                     >> 0xcU)))));
}
