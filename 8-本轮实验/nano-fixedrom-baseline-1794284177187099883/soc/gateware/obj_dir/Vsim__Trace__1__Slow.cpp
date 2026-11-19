// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+603,((0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1))),8);
    bufp->fullCData(oldp+604,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0),5);
    bufp->fullCData(oldp+605,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0) 
                                        + (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)))),5);
    bufp->fullCData(oldp+606,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce),4);
    bufp->fullSData(oldp+607,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
    bufp->fullBit(oldp+608,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re));
    bufp->fullBit(oldp+609,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0))));
    bufp->fullCData(oldp+610,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+611,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
    bufp->fullBit(oldp+612,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_trigger_d));
    bufp->fullBit(oldp+613,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxempty_re));
    bufp->fullBit(oldp+614,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)))));
    bufp->fullBit(oldp+615,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxempty_we));
    bufp->fullBit(oldp+616,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxfull_re));
    bufp->fullBit(oldp+617,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxfull_we));
    bufp->fullCData(oldp+618,((0xffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),8);
    bufp->fullBit(oldp+619,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_re));
    bufp->fullBit(oldp+620,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_we));
    bufp->fullBit(oldp+621,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_status_re));
    bufp->fullCData(oldp+622,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_status_status),2);
    bufp->fullBit(oldp+623,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_status_we));
    bufp->fullBit(oldp+624,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
    bufp->fullBit(oldp+625,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_pending));
    bufp->fullBit(oldp+626,((1U & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_storage))));
    bufp->fullBit(oldp+627,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_clear));
    bufp->fullCData(oldp+628,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume),4);
    bufp->fullCData(oldp+629,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0),5);
    bufp->fullCData(oldp+630,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0) 
                                        + (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)))),5);
    bufp->fullCData(oldp+631,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce),4);
    bufp->fullSData(oldp+632,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
    bufp->fullSData(oldp+633,((0xffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),10);
    bufp->fullBit(oldp+634,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
    bufp->fullCData(oldp+635,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+636,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
    bufp->fullBit(oldp+637,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_re) 
                             & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)))));
    bufp->fullBit(oldp+638,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_trigger_d));
    bufp->fullBit(oldp+639,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_txempty_re));
    bufp->fullBit(oldp+640,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)))));
    bufp->fullBit(oldp+641,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txempty_we));
    bufp->fullBit(oldp+642,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_txfull_re));
    bufp->fullBit(oldp+643,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
    bufp->fullBit(oldp+644,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txfull_we));
    bufp->fullIData(oldp+645,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r),32);
    bufp->fullBit(oldp+646,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes0));
    bufp->fullBit(oldp+647,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes1));
    bufp->fullBit(oldp+648,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes2));
    bufp->fullBit(oldp+649,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes3));
    bufp->fullBit(oldp+650,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_q));
    bufp->fullBit(oldp+651,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_re));
    bufp->fullBit(oldp+652,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_storage));
    bufp->fullBit(oldp+653,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_bytes_re));
    bufp->fullQData(oldp+654,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot),64);
    bufp->fullBit(oldp+656,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we));
    bufp->fullQData(oldp+657,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_count),64);
    bufp->fullCData(oldp+659,((7U & ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL)) 
                                     + ((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                               >> 1U)) 
                                        + ((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                  >> 2U)) 
                                           + (1U & 
                                              ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                               >> 3U))))))),3);
    bufp->fullBit(oldp+660,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_bytes_re));
    bufp->fullQData(oldp+661,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot),64);
    bufp->fullBit(oldp+663,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we));
    bufp->fullQData(oldp+664,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_count),64);
    bufp->fullBit(oldp+666,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_bytes_re));
    bufp->fullQData(oldp+667,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot),64);
    bufp->fullBit(oldp+669,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we));
    bufp->fullQData(oldp+670,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_count),64);
    bufp->fullBit(oldp+672,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_reset_re));
    bufp->fullBit(oldp+673,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_reset_storage));
    bufp->fullBit(oldp+674,(vlSymsp->TOP__sim.__PVT__build_soc_enable_storage));
    bufp->fullBit(oldp+675,(vlSymsp->TOP__sim.__PVT__build_soc_enable_re));
    bufp->fullBit(oldp+676,(vlSymsp->TOP__sim.__PVT__build_soc_pending_r));
    bufp->fullBit(oldp+677,(vlSymsp->TOP__sim.__PVT__build_soc_pending_re));
    bufp->fullBit(oldp+678,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_pending_we));
    bufp->fullBit(oldp+679,(vlSymsp->TOP__sim.__PVT__build_soc_status_re));
    bufp->fullBit(oldp+680,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_status_we));
    bufp->fullBit(oldp+681,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted));
    bufp->fullBit(oldp+682,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_is_ongoing));
    bufp->fullIData(oldp+683,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr),26);
    bufp->fullCData(oldp+684,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel),4);
    bufp->fullBit(oldp+685,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we));
    bufp->fullBit(oldp+686,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    bufp->fullBit(oldp+687,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we));
    bufp->fullCData(oldp+689,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk),4);
    bufp->fullBit(oldp+690,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid));
    bufp->fullBit(oldp+691,((0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
    bufp->fullBit(oldp+692,((3U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
    bufp->fullCData(oldp+693,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux),2);
    bufp->fullBit(oldp+694,((1U & vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U])));
    bufp->fullBit(oldp+695,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U] 
                                   >> 1U))));
    bufp->fullWData(oldp+696,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data),128);
    bufp->fullBit(oldp+700,(((3U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready))));
    bufp->fullBit(oldp+701,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level))));
    bufp->fullBit(oldp+702,((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U] 
                             & (0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)))));
    bufp->fullBit(oldp+703,(((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U] 
                              >> 1U) & (3U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)))));
    bufp->fullIData(oldp+704,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data),32);
    bufp->fullBit(oldp+705,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready));
    bufp->fullCData(oldp+706,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume),2);
    bufp->fullBit(oldp+707,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read));
    bufp->fullCData(oldp+708,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level),2);
    bufp->fullCData(oldp+709,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce),2);
    bufp->fullWData(oldp+710,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r),130);
    bufp->fullBit(oldp+715,((3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level))));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid9));
    bufp->fullCData(oldp+717,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr),2);
    bufp->fullWData(oldp+718,(vlSymsp->TOP__sim.__PVT__storage_6_dat0),130);
    bufp->fullBit(oldp+723,(((IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid9) 
                             & (3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)))));
    bufp->fullBit(oldp+724,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished));
    bufp->fullBit(oldp+725,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock));
    bufp->fullBit(oldp+726,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked));
    bufp->fullCData(oldp+727,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel),4);
    bufp->fullWData(oldp+728,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data),128);
    bufp->fullSData(oldp+732,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel))),16);
    bufp->fullBit(oldp+733,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all));
    bufp->fullBit(oldp+734,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_first));
    bufp->fullBit(oldp+735,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_last));
    bufp->fullWData(oldp+736,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data),128);
    bufp->fullSData(oldp+740,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we),16);
    bufp->fullBit(oldp+741,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid));
    bufp->fullCData(oldp+742,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk),4);
    bufp->fullBit(oldp+743,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid));
    bufp->fullCData(oldp+744,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux),2);
    bufp->fullQData(oldp+745,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data),36);
    bufp->fullBit(oldp+747,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid));
    bufp->fullBit(oldp+748,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first));
    bufp->fullBit(oldp+749,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last));
    bufp->fullWData(oldp+750,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data),144);
    bufp->fullCData(oldp+755,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count),3);
    bufp->fullIData(oldp+756,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data),32);
    bufp->fullCData(oldp+757,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we),4);
    bufp->fullSData(oldp+758,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we),16);
    bufp->fullCData(oldp+759,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume),2);
    bufp->fullBit(oldp+760,((1U & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+761,((1U & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                           >> 0x25U)))));
    bufp->fullIData(oldp+762,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r)),32);
    bufp->fullCData(oldp+763,((0xfU & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+764,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level),2);
    bufp->fullCData(oldp+765,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce),2);
    bufp->fullQData(oldp+766,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r),38);
    bufp->fullBit(oldp+768,((3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level))));
    bufp->fullBit(oldp+769,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level))));
    bufp->fullCData(oldp+770,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr),2);
    bufp->fullQData(oldp+771,(vlSymsp->TOP__sim.__PVT__storage_7_dat0),38);
    bufp->fullSData(oldp+773,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel),16);
    bufp->fullIData(oldp+774,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_rdata_payload_data),32);
    bufp->fullBit(oldp+775,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_rdata_valid));
    bufp->fullIData(oldp+776,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_payload_addr),24);
    bufp->fullBit(oldp+777,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_payload_we));
    bufp->fullBit(oldp+778,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_valid));
    bufp->fullIData(oldp+779,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_dat_r),32);
    bufp->fullQData(oldp+780,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles),64);
    bufp->fullBit(oldp+782,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_re));
    bufp->fullQData(oldp+783,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status),64);
    bufp->fullBit(oldp+785,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we));
    bufp->fullBit(oldp+786,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_latch_re));
    bufp->fullBit(oldp+787,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_latch_storage));
    bufp->fullIData(oldp+788,(vlSymsp->TOP__sim.__PVT__builder_count),20);
    bufp->fullCData(oldp+789,((0x1fU & (IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr))),5);
    bufp->fullBit(oldp+790,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re));
    bufp->fullBit(oldp+791,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we));
    bufp->fullBit(oldp+792,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_pending_re));
    bufp->fullBit(oldp+793,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_status_re));
    bufp->fullBit(oldp+794,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+795,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_capture0_re));
    bufp->fullBit(oldp+796,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_capture0_we));
    bufp->fullIData(oldp+797,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w),32);
    bufp->fullBit(oldp+798,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re));
    bufp->fullIData(oldp+799,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot)),32);
    bufp->fullBit(oldp+800,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re));
    bufp->fullIData(oldp+801,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+802,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we));
    bufp->fullBit(oldp+803,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re));
    bufp->fullIData(oldp+804,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot)),32);
    bufp->fullBit(oldp+805,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re));
    bufp->fullIData(oldp+806,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+807,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we));
    bufp->fullBit(oldp+808,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re));
    bufp->fullIData(oldp+809,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot)),32);
    bufp->fullBit(oldp+810,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re));
    bufp->fullIData(oldp+811,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+812,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we));
    bufp->fullBit(oldp+813,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_re));
    bufp->fullBit(oldp+814,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_we));
    bufp->fullBit(oldp+815,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+816,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_bus_errors_re));
    bufp->fullCData(oldp+817,((3U & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),2);
    bufp->fullBit(oldp+818,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reset0_re));
    bufp->fullBit(oldp+819,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reset0_we));
    bufp->fullBit(oldp+820,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_scratch0_re));
    bufp->fullBit(oldp+821,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_scratch0_we));
    bufp->fullBit(oldp+822,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+823,((0xfU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),4);
    bufp->fullBit(oldp+824,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re));
    bufp->fullBit(oldp+825,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we));
    bufp->fullSData(oldp+826,((0x1fffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),13);
    bufp->fullBit(oldp+827,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re));
    bufp->fullBit(oldp+828,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we));
    bufp->fullBit(oldp+829,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re));
    bufp->fullBit(oldp+830,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we));
    bufp->fullBit(oldp+831,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re));
    bufp->fullBit(oldp+832,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we));
    bufp->fullBit(oldp+833,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re));
    bufp->fullIData(oldp+834,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U]),32);
    bufp->fullBit(oldp+835,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re));
    bufp->fullIData(oldp+836,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U]),32);
    bufp->fullBit(oldp+837,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re));
    bufp->fullIData(oldp+839,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U]),32);
    bufp->fullBit(oldp+840,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re));
    bufp->fullIData(oldp+842,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U]),32);
    bufp->fullBit(oldp+843,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we));
    bufp->fullBit(oldp+844,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re));
    bufp->fullIData(oldp+845,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U]),32);
    bufp->fullBit(oldp+846,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we));
    bufp->fullBit(oldp+847,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re));
    bufp->fullIData(oldp+848,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U]),32);
    bufp->fullBit(oldp+849,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we));
    bufp->fullBit(oldp+850,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re));
    bufp->fullIData(oldp+851,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U]),32);
    bufp->fullBit(oldp+852,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we));
    bufp->fullBit(oldp+853,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re));
    bufp->fullIData(oldp+854,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U]),32);
    bufp->fullBit(oldp+855,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we));
    bufp->fullBit(oldp+856,((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+857,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_en0_re));
    bufp->fullBit(oldp+858,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_en0_we));
    bufp->fullBit(oldp+859,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re));
    bufp->fullBit(oldp+860,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_pending_re));
    bufp->fullBit(oldp+862,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_status_re));
    bufp->fullBit(oldp+863,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_load0_re));
    bufp->fullBit(oldp+864,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_load0_we));
    bufp->fullBit(oldp+865,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_reload0_re));
    bufp->fullBit(oldp+866,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_reload0_we));
    bufp->fullBit(oldp+867,((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+868,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_update_value0_re));
    bufp->fullBit(oldp+869,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_update_value0_we));
    bufp->fullBit(oldp+870,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re));
    bufp->fullIData(oldp+871,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status)),32);
    bufp->fullBit(oldp+872,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re));
    bufp->fullIData(oldp+873,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+874,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we));
    bufp->fullBit(oldp+875,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we));
    bufp->fullBit(oldp+877,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_value_re));
    bufp->fullBit(oldp+878,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re));
    bufp->fullBit(oldp+879,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_pending_re));
    bufp->fullBit(oldp+881,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_status_re));
    bufp->fullBit(oldp+882,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxempty_re));
    bufp->fullBit(oldp+883,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxfull_re));
    bufp->fullBit(oldp+884,((6U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+885,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txempty_re));
    bufp->fullBit(oldp+886,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txfull_re));
    bufp->fullCData(oldp+887,(((0x10U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                ? vlSymsp->TOP__sim.__PVT__mem
                               [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                : 0U)),8);
    bufp->fullSData(oldp+888,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr),14);
    bufp->fullIData(oldp+889,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r),32);
    bufp->fullBit(oldp+890,(vlSymsp->TOP__sim.__PVT__builder_interface1_re));
    bufp->fullBit(oldp+891,(vlSymsp->TOP__sim.__PVT__builder_interface1_we));
    bufp->fullIData(oldp+892,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r),32);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r),32);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r),32);
    bufp->fullIData(oldp+895,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r),32);
    bufp->fullIData(oldp+896,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r),32);
    bufp->fullBit(oldp+897,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+898,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r));
    bufp->fullIData(oldp+899,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r),32);
    bufp->fullIData(oldp+900,((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                               | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                                  | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                                     | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                                        | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                                           | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r 
                                              | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r))))))),32);
    bufp->fullCData(oldp+901,(vlSymsp->TOP__sim.__PVT__builder_fullmemorywe_state),2);
    bufp->fullBit(oldp+902,(vlSymsp->TOP__sim.__PVT__builder_grant));
    bufp->fullBit(oldp+903,(vlSymsp->TOP__sim.__PVT__builder_interface0_ack));
    bufp->fullIData(oldp+904,(vlSymsp->TOP__sim.__PVT__builder_interface0_dat_r),32);
    bufp->fullBit(oldp+905,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0));
    bufp->fullCData(oldp+906,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine0_next_state),3);
    bufp->fullCData(oldp+907,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine0_state),3);
    bufp->fullCData(oldp+908,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine1_next_state),3);
    bufp->fullCData(oldp+909,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine1_state),3);
    bufp->fullCData(oldp+910,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine2_next_state),3);
    bufp->fullCData(oldp+911,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine2_state),3);
    bufp->fullCData(oldp+912,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine3_next_state),3);
    bufp->fullCData(oldp+913,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine3_state),3);
    bufp->fullCData(oldp+914,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_multiplexer_next_state),3);
    bufp->fullCData(oldp+915,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_multiplexer_state),3);
    bufp->fullBit(oldp+916,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid1));
    bufp->fullBit(oldp+917,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid2));
    bufp->fullBit(oldp+918,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid3));
    bufp->fullBit(oldp+919,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid6));
    bufp->fullBit(oldp+920,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid7));
    bufp->fullBit(oldp+921,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid8));
    bufp->fullCData(oldp+922,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_refresher_next_state),2);
    bufp->fullCData(oldp+923,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_refresher_state),2);
    bufp->fullCData(oldp+924,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_state),2);
    bufp->fullCData(oldp+925,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native0_state),2);
    bufp->fullCData(oldp+926,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native1_state),2);
    bufp->fullCData(oldp+927,(vlSymsp->TOP__sim.__PVT__builder_request),2);
    bufp->fullCData(oldp+928,(vlSymsp->TOP__sim.__PVT__builder_self0),2);
    bufp->fullSData(oldp+929,(vlSymsp->TOP__sim.__PVT__builder_self1),13);
    bufp->fullBit(oldp+930,(vlSymsp->TOP__sim.__PVT__builder_self2));
    bufp->fullBit(oldp+931,(vlSymsp->TOP__sim.__PVT__builder_self3));
    bufp->fullBit(oldp+932,(vlSymsp->TOP__sim.__PVT__builder_self4));
    bufp->fullBit(oldp+933,(vlSymsp->TOP__sim.__PVT__builder_self5));
    bufp->fullBit(oldp+934,(vlSymsp->TOP__sim.__PVT__builder_self6));
    bufp->fullCData(oldp+935,(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r),6);
    bufp->fullIData(oldp+936,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0)))),23);
    bufp->fullIData(oldp+937,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)))),23);
    bufp->fullIData(oldp+938,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0)))),23);
    bufp->fullIData(oldp+939,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)))),23);
    bufp->fullIData(oldp+940,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0)))),23);
    bufp->fullIData(oldp+941,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)))),23);
    bufp->fullIData(oldp+942,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0)))),23);
    bufp->fullIData(oldp+943,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)))),23);
    bufp->fullBit(oldp+944,(vlSymsp->TOP__sim.__PVT__builder_t_self0));
    bufp->fullBit(oldp+945,(vlSymsp->TOP__sim.__PVT__builder_t_self1));
    bufp->fullBit(oldp+946,(vlSymsp->TOP__sim.__PVT__builder_t_self2));
    bufp->fullBit(oldp+947,(vlSymsp->TOP__sim.__PVT__builder_t_self3));
    bufp->fullBit(oldp+948,(vlSymsp->TOP__sim.__PVT__builder_t_self4));
    bufp->fullBit(oldp+949,(vlSymsp->TOP__sim.__PVT__builder_t_self5));
    bufp->fullCData(oldp+950,(vlSymsp->TOP__sim.__PVT__builder_wishbone2csr_state),2);
    bufp->fullSData(oldp+951,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
    bufp->fullCData(oldp+952,(vlSymsp->TOP__sim.__PVT__mem_adr0),5);
    bufp->fullSData(oldp+953,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
    bufp->fullSData(oldp+954,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
    bufp->fullSData(oldp+955,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
    bufp->fullSData(oldp+956,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
    bufp->fullSData(oldp+957,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
    bufp->fullSData(oldp+958,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
    bufp->fullSData(oldp+959,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
    bufp->fullSData(oldp+960,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
    bufp->fullSData(oldp+961,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
    bufp->fullSData(oldp+962,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
    bufp->fullSData(oldp+963,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
    bufp->fullSData(oldp+964,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
    bufp->fullSData(oldp+965,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
    bufp->fullSData(oldp+966,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
    bufp->fullSData(oldp+967,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
    bufp->fullSData(oldp+968,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
    bufp->fullSData(oldp+969,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
    bufp->fullSData(oldp+970,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
    bufp->fullSData(oldp+971,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
    bufp->fullSData(oldp+972,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
    bufp->fullSData(oldp+973,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
    bufp->fullSData(oldp+974,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
    bufp->fullSData(oldp+975,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
    bufp->fullSData(oldp+976,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
    bufp->fullSData(oldp+977,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
    bufp->fullSData(oldp+978,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
    bufp->fullSData(oldp+979,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
    bufp->fullSData(oldp+980,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
    bufp->fullSData(oldp+981,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
    bufp->fullSData(oldp+982,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
    bufp->fullSData(oldp+983,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
    bufp->fullSData(oldp+984,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
    bufp->fullIData(oldp+985,(vlSymsp->TOP__sim.__PVT__mem_1_adr0),22);
    bufp->fullIData(oldp+986,(vlSymsp->TOP__sim.__PVT__mem_2_adr0),22);
    bufp->fullIData(oldp+987,(vlSymsp->TOP__sim.__PVT__mem_3_adr0),22);
    bufp->fullIData(oldp+988,(vlSymsp->TOP__sim.__PVT__mem_4_adr0),22);
    bufp->fullIData(oldp+989,(vlSymsp->TOP__sim.__PVT__storage_2[0]),25);
    bufp->fullIData(oldp+990,(vlSymsp->TOP__sim.__PVT__storage_2[1]),25);
    bufp->fullIData(oldp+991,(vlSymsp->TOP__sim.__PVT__storage_2[2]),25);
    bufp->fullIData(oldp+992,(vlSymsp->TOP__sim.__PVT__storage_2[3]),25);
    bufp->fullIData(oldp+993,(vlSymsp->TOP__sim.__PVT__storage_2[4]),25);
    bufp->fullIData(oldp+994,(vlSymsp->TOP__sim.__PVT__storage_2[5]),25);
    bufp->fullIData(oldp+995,(vlSymsp->TOP__sim.__PVT__storage_2[6]),25);
    bufp->fullIData(oldp+996,(vlSymsp->TOP__sim.__PVT__storage_2[7]),25);
    bufp->fullIData(oldp+997,(vlSymsp->TOP__sim.__PVT__storage_3[0]),25);
    bufp->fullIData(oldp+998,(vlSymsp->TOP__sim.__PVT__storage_3[1]),25);
    bufp->fullIData(oldp+999,(vlSymsp->TOP__sim.__PVT__storage_3[2]),25);
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__sim.__PVT__storage_3[3]),25);
    bufp->fullIData(oldp+1001,(vlSymsp->TOP__sim.__PVT__storage_3[4]),25);
    bufp->fullIData(oldp+1002,(vlSymsp->TOP__sim.__PVT__storage_3[5]),25);
    bufp->fullIData(oldp+1003,(vlSymsp->TOP__sim.__PVT__storage_3[6]),25);
    bufp->fullIData(oldp+1004,(vlSymsp->TOP__sim.__PVT__storage_3[7]),25);
    bufp->fullIData(oldp+1005,(vlSymsp->TOP__sim.__PVT__storage_4[0]),25);
    bufp->fullIData(oldp+1006,(vlSymsp->TOP__sim.__PVT__storage_4[1]),25);
    bufp->fullIData(oldp+1007,(vlSymsp->TOP__sim.__PVT__storage_4[2]),25);
    bufp->fullIData(oldp+1008,(vlSymsp->TOP__sim.__PVT__storage_4[3]),25);
    bufp->fullIData(oldp+1009,(vlSymsp->TOP__sim.__PVT__storage_4[4]),25);
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__sim.__PVT__storage_4[5]),25);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__sim.__PVT__storage_4[6]),25);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__sim.__PVT__storage_4[7]),25);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__sim.__PVT__storage_5[0]),25);
    bufp->fullIData(oldp+1014,(vlSymsp->TOP__sim.__PVT__storage_5[1]),25);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__sim.__PVT__storage_5[2]),25);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__sim.__PVT__storage_5[3]),25);
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__sim.__PVT__storage_5[4]),25);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__sim.__PVT__storage_5[5]),25);
    bufp->fullIData(oldp+1019,(vlSymsp->TOP__sim.__PVT__storage_5[6]),25);
    bufp->fullIData(oldp+1020,(vlSymsp->TOP__sim.__PVT__storage_5[7]),25);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1021,(vlSymsp->TOP__sim.__PVT__tag_mem_adr0),9);
    bufp->fullWData(oldp+1022,(vlSymsp->TOP__sim.__PVT__storage_6[0]),130);
    bufp->fullWData(oldp+1027,(vlSymsp->TOP__sim.__PVT__storage_6[1]),130);
    bufp->fullWData(oldp+1032,(vlSymsp->TOP__sim.__PVT__storage_6[2]),130);
    bufp->fullQData(oldp+1037,(vlSymsp->TOP__sim.__PVT__storage_7[0]),38);
    bufp->fullQData(oldp+1039,(vlSymsp->TOP__sim.__PVT__storage_7[1]),38);
    bufp->fullQData(oldp+1041,(vlSymsp->TOP__sim.__PVT__storage_7[2]),38);
    bufp->fullSData(oldp+1043,(vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0),9);
    bufp->fullSData(oldp+1044,(vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0),9);
    bufp->fullSData(oldp+1045,(vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0),9);
    bufp->fullSData(oldp+1046,(vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0),9);
    bufp->fullSData(oldp+1047,(vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0),9);
    bufp->fullSData(oldp+1048,(vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0),9);
    bufp->fullSData(oldp+1049,(vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0),9);
    bufp->fullSData(oldp+1050,(vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0),9);
    bufp->fullSData(oldp+1051,(vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0),9);
    bufp->fullSData(oldp+1052,(vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0),9);
    bufp->fullSData(oldp+1053,(vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0),9);
    bufp->fullSData(oldp+1054,(vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0),9);
    bufp->fullSData(oldp+1055,(vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0),9);
    bufp->fullSData(oldp+1056,(vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0),9);
    bufp->fullSData(oldp+1057,(vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0),9);
    bufp->fullSData(oldp+1058,(vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0),9);
    bufp->fullBit(oldp+1059,(((IData)(vlSymsp->TOP__sim.__PVT__builder_grant) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                 & VL_REDXOR_4(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)))));
    bufp->fullBit(oldp+1060,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
    bufp->fullBit(oldp+1061,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2))));
    bufp->fullBit(oldp+1062,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
    bufp->fullBit(oldp+1063,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
    bufp->fullBit(oldp+1064,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
    bufp->fullBit(oldp+1065,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
    bufp->fullIData(oldp+1066,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_address),32);
    bufp->fullBit(oldp+1067,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
    bufp->fullIData(oldp+1068,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+1069,((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1070,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
    bufp->fullIData(oldp+1071,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+1072,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+1073,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
    bufp->fullBit(oldp+1074,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
    bufp->fullBit(oldp+1075,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
    bufp->fullIData(oldp+1076,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
    bufp->fullBit(oldp+1077,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                              | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgRegularize_h7c702150_0_0)))));
    bufp->fullBit(oldp+1078,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    bufp->fullBit(oldp+1079,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgRegularize_h7c702150_0_0)))));
    bufp->fullIData(oldp+1080,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
    bufp->fullBit(oldp+1081,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
    bufp->fullIData(oldp+1082,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+1083,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
    bufp->fullIData(oldp+1084,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
    bufp->fullBit(oldp+1085,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                       >> 7U)))));
    bufp->fullBit(oldp+1086,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
    bufp->fullBit(oldp+1087,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
    bufp->fullBit(oldp+1088,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
    bufp->fullIData(oldp+1089,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
    bufp->fullBit(oldp+1090,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
    bufp->fullBit(oldp+1091,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
    bufp->fullBit(oldp+1092,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
    bufp->fullBit(oldp+1093,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
    bufp->fullBit(oldp+1094,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
    bufp->fullBit(oldp+1095,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
    bufp->fullBit(oldp+1096,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
    bufp->fullBit(oldp+1098,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
    bufp->fullIData(oldp+1099,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
    bufp->fullCData(oldp+1100,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
    bufp->fullCData(oldp+1101,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
    bufp->fullQData(oldp+1102,((0xfffffffffffffULL 
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
    bufp->fullQData(oldp+1104,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
    bufp->fullQData(oldp+1106,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullQData(oldp+1108,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, 
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
    bufp->fullQData(oldp+1110,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, 
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                             (0x3ffffffffULL 
                                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullIData(oldp+1112,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullIData(oldp+1113,((0xfffffffeU & (((3U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                               + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
    bufp->fullBit(oldp+1114,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                               != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_COND_RESULT)) 
                              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_COND_RESULT) 
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
    bufp->fullIData(oldp+1115,((IData)((0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(33,33,5, 
                                                         (((QData)((IData)(
                                                                           ((3U 
                                                                             == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                               >> 0x1fU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                         (0x1fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2))))),32);
    bufp->fullIData(oldp+1116,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                 ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2)
                                     : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1 
                                            | vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2)
                                         : (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1 
                                            ^ vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2)))
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                     ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC_LESS)
                                     : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_address))),32);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+1118,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
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
    bufp->fullBit(oldp+1119,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U)))));
    bufp->fullBit(oldp+1120,((1U & (~ (IData)(((0U 
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
    bufp->fullBit(oldp+1121,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_PREDICTION_HAD_BRANCHED2));
    bufp->fullBit(oldp+1122,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC_USE_SUB_LESS)) 
                              & (0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))));
    bufp->fullBit(oldp+1123,((0U == (0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1124,((0x2004020U == (0x2004064U 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1125,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
    bufp->fullBit(oldp+1126,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
    bufp->fullBit(oldp+1127,((0x2000030U == (0x2004074U 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullCData(oldp+1128,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL),2);
    bufp->fullBit(oldp+1129,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_IS_CSR));
    bufp->fullCData(oldp+1130,((3U & (vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_31 
                                      >> 0x15U))),2);
    bufp->fullCData(oldp+1131,((3U & (vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_32 
                                      >> 0x12U))),2);
    bufp->fullBit(oldp+1132,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC_LESS_UNSIGNED));
    bufp->fullBit(oldp+1133,((0x4008U == (0x4048U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1134,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
    bufp->fullBit(oldp+1135,((0x20U == (0x20U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+1138,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_BYPASSABLE_EXECUTE_STAGE));
    bufp->fullCData(oldp+1139,((3U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_33) 
                                      >> 8U))),2);
    bufp->fullCData(oldp+1140,((3U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_34) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1141,((3U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_156) 
                                      >> 1U))),2);
    bufp->fullIData(oldp+1142,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+1143,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+1144,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+1145,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullIData(oldp+1146,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
    bufp->fullBit(oldp+1147,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
    bufp->fullBit(oldp+1148,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
    bufp->fullBit(oldp+1149,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
    bufp->fullBit(oldp+1150,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
    bufp->fullBit(oldp+1151,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
    bufp->fullQData(oldp+1152,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
    bufp->fullQData(oldp+1154,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
    bufp->fullQData(oldp+1156,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
    bufp->fullQData(oldp+1158,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
    bufp->fullIData(oldp+1160,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
    bufp->fullBit(oldp+1161,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
    bufp->fullBit(oldp+1162,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    bufp->fullBit(oldp+1163,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
    bufp->fullCData(oldp+1164,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
    bufp->fullCData(oldp+1165,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
    bufp->fullCData(oldp+1166,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
    bufp->fullIData(oldp+1167,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
    bufp->fullBit(oldp+1168,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    bufp->fullIData(oldp+1169,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1170,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
    bufp->fullIData(oldp+1171,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
    bufp->fullBit(oldp+1172,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_COND_RESULT));
    bufp->fullCData(oldp+1173,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
    bufp->fullBit(oldp+1174,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2_USE));
    bufp->fullBit(oldp+1175,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1_USE));
    bufp->fullBit(oldp+1176,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+1177,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
    bufp->fullBit(oldp+1178,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+1179,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
    bufp->fullBit(oldp+1180,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+1181,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+1182,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
    bufp->fullIData(oldp+1183,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
    bufp->fullIData(oldp+1184,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
    bufp->fullCData(oldp+1185,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
    bufp->fullCData(oldp+1186,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
    bufp->fullBit(oldp+1187,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
    bufp->fullBit(oldp+1188,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
    bufp->fullBit(oldp+1189,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
    bufp->fullCData(oldp+1190,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
    bufp->fullCData(oldp+1191,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
    bufp->fullBit(oldp+1192,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC_USE_SUB_LESS));
    bufp->fullBit(oldp+1193,((0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1194,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC_LESS));
    bufp->fullCData(oldp+1195,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
    bufp->fullIData(oldp+1196,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2),32);
    bufp->fullIData(oldp+1197,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1),32);
    bufp->fullCData(oldp+1198,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
    bufp->fullIData(oldp+1199,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
    bufp->fullBit(oldp+1200,(((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                               >> 7U))) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_98))));
    bufp->fullBit(oldp+1201,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_LEGAL_INSTRUCTION));
    bufp->fullBit(oldp+1202,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
    bufp->fullBit(oldp+1203,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    bufp->fullBit(oldp+1204,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
    bufp->fullBit(oldp+1205,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
    bufp->fullBit(oldp+1206,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    bufp->fullIData(oldp+1207,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
    bufp->fullBit(oldp+1208,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
    bufp->fullBit(oldp+1209,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    bufp->fullIData(oldp+1210,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
    bufp->fullBit(oldp+1211,((0U == (0x58U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1212,((0x1008U == (0x5048U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    bufp->fullBit(oldp+1213,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3))));
    bufp->fullBit(oldp+1214,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
    bufp->fullBit(oldp+1215,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1))));
    bufp->fullBit(oldp+1216,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
    bufp->fullCData(oldp+1217,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_10 
                                      >> 0x17U))),2);
    bufp->fullIData(oldp+1218,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
    bufp->fullIData(oldp+1219,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
    bufp->fullIData(oldp+1220,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
    bufp->fullBit(oldp+1221,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
    bufp->fullBit(oldp+1222,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
    bufp->fullBit(oldp+1223,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid));
    bufp->fullBit(oldp+1224,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck));
    bufp->fullBit(oldp+1225,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
    bufp->fullBit(oldp+1226,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
    bufp->fullBit(oldp+1227,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
    bufp->fullBit(oldp+1228,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
    bufp->fullBit(oldp+1229,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
    bufp->fullBit(oldp+1230,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_25))));
    bufp->fullBit(oldp+1231,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
    bufp->fullBit(oldp+1232,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
    bufp->fullBit(oldp+1233,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
    bufp->fullBit(oldp+1234,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
    bufp->fullBit(oldp+1235,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuckByOthers));
    bufp->fullBit(oldp+1236,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
    bufp->fullBit(oldp+1237,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
    bufp->fullBit(oldp+1238,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
    bufp->fullBit(oldp+1239,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuckByOthers))))));
    bufp->fullBit(oldp+1240,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
    bufp->fullBit(oldp+1241,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
    bufp->fullIData(oldp+1242,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
    bufp->fullBit(oldp+1243,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong));
    bufp->fullBit(oldp+1244,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
    bufp->fullBit(oldp+1245,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
    bufp->fullBit(oldp+1246,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
    bufp->fullBit(oldp+1247,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
    bufp->fullBit(oldp+1248,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    bufp->fullCData(oldp+1249,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
    bufp->fullIData(oldp+1250,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullBit(oldp+1251,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
    bufp->fullIData(oldp+1252,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
    bufp->fullCData(oldp+1253,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
    bufp->fullCData(oldp+1254,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
    bufp->fullBit(oldp+1255,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
    bufp->fullBit(oldp+1256,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
    bufp->fullIData(oldp+1257,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
    bufp->fullBit(oldp+1258,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
    bufp->fullCData(oldp+1259,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
    bufp->fullBit(oldp+1260,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_LEGAL_INSTRUCTION)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid))));
    bufp->fullBit(oldp+1261,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
    bufp->fullIData(oldp+1262,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataSignal),32);
    bufp->fullIData(oldp+1263,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_writeDataSignal),32);
    bufp->fullBit(oldp+1264,((0U == (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid)))));
    bufp->fullBit(oldp+1265,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
    bufp->fullBit(oldp+1266,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
    bufp->fullBit(oldp+1267,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
    bufp->fullBit(oldp+1268,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
    bufp->fullBit(oldp+1269,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
    bufp->fullCData(oldp+1270,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
    bufp->fullBit(oldp+1271,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready));
    bufp->fullBit(oldp+1272,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
    bufp->fullBit(oldp+1273,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
    bufp->fullBit(oldp+1274,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    bufp->fullBit(oldp+1275,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
    bufp->fullBit(oldp+1276,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
    bufp->fullBit(oldp+1277,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
    bufp->fullBit(oldp+1278,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    bufp->fullBit(oldp+1279,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck)))));
    bufp->fullBit(oldp+1280,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
    bufp->fullBit(oldp+1281,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
    bufp->fullBit(oldp+1282,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    bufp->fullBit(oldp+1283,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
    bufp->fullBit(oldp+1284,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuckByOthers)))));
    bufp->fullBit(oldp+1285,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
    bufp->fullIData(oldp+1286,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
    bufp->fullIData(oldp+1287,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
    bufp->fullBit(oldp+1288,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
    bufp->fullBit(oldp+1289,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
    bufp->fullBit(oldp+1290,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
    bufp->fullBit(oldp+1291,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
    bufp->fullBit(oldp+1292,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
    bufp->fullBit(oldp+1293,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid))));
    bufp->fullBit(oldp+1294,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
    bufp->fullBit(oldp+1295,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
    bufp->fullIData(oldp+1296,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
    bufp->fullIData(oldp+1297,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
    bufp->fullCData(oldp+1298,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
    bufp->fullCData(oldp+1299,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
    bufp->fullBit(oldp+1300,(((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))) 
                              || (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last))));
    bufp->fullBit(oldp+1301,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
    bufp->fullBit(oldp+1302,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
    bufp->fullBit(oldp+1303,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
    bufp->fullIData(oldp+1304,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
    bufp->fullIData(oldp+1305,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
    bufp->fullCData(oldp+1306,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
    bufp->fullCData(oldp+1307,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
    bufp->fullBit(oldp+1308,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
    bufp->fullBit(oldp+1309,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
    bufp->fullIData(oldp+1310,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
    bufp->fullCData(oldp+1311,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))),2);
    bufp->fullBit(oldp+1312,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid))));
    bufp->fullBit(oldp+1313,((1U & ((~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                        >> 7U)) | (
                                                   (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid))))));
    bufp->fullCData(oldp+1314,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
    bufp->fullCData(oldp+1315,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1316,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1317,((vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1318,(((0xffff0000U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_36))),32);
    bufp->fullCData(oldp+1319,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                      >> 0xcU))),2);
    bufp->fullIData(oldp+1320,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
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
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_36))
                                     : ((0xffff0000U 
                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_36))))),32);
    bufp->fullBit(oldp+1321,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                              >> 7U)))));
    bufp->fullCData(oldp+1322,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1323,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1324,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
    bufp->fullIData(oldp+1325,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
    bufp->fullIData(oldp+1326,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1 
                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1 
                                        | vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2)
                                     : (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1 
                                        ^ vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2)))),32);
    bufp->fullCData(oldp+1327,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2)),5);
    bufp->fullIData(oldp+1328,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
    bufp->fullBit(oldp+1329,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
    bufp->fullBit(oldp+1330,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
    bufp->fullCData(oldp+1331,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U))),5);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_7(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    bufp->fullIData(oldp+1332,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
    bufp->fullBit(oldp+1333,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
    bufp->fullCData(oldp+1334,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
    bufp->fullIData(oldp+1335,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
    bufp->fullBit(oldp+1336,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                              == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+1337,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                              == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+1338,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U)) == 
                              (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+1339,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U)) == 
                              (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+1340,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
    bufp->fullBit(oldp+1341,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
    bufp->fullBit(oldp+1342,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
    bufp->fullBit(oldp+1343,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
    bufp->fullBit(oldp+1344,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
    bufp->fullBit(oldp+1345,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
    bufp->fullBit(oldp+1346,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
    bufp->fullBit(oldp+1347,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
    bufp->fullBit(oldp+1348,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
    bufp->fullBit(oldp+1349,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1_USE)))));
    bufp->fullBit(oldp+1350,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2_USE)))));
    bufp->fullBit(oldp+1351,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
    bufp->fullBit(oldp+1352,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
    bufp->fullCData(oldp+1353,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))),3);
    bufp->fullBit(oldp+1354,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_COND_RESULT) 
                              & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0x15U) ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                   >> 1U))
                                  : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0x15U) : 
                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                      >> 8U))))));
    bufp->fullIData(oldp+1355,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
    bufp->fullIData(oldp+1356,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
    bufp->fullIData(oldp+1357,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                  : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
    bufp->fullCData(oldp+1358,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_misa_base),2);
    bufp->fullIData(oldp+1359,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_misa_extensions),26);
    bufp->fullCData(oldp+1360,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
    bufp->fullIData(oldp+1361,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
    bufp->fullIData(oldp+1362,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
    bufp->fullBit(oldp+1363,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
    bufp->fullBit(oldp+1364,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
    bufp->fullCData(oldp+1365,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
    bufp->fullBit(oldp+1366,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
    bufp->fullBit(oldp+1367,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
    bufp->fullBit(oldp+1368,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
    bufp->fullBit(oldp+1369,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    bufp->fullBit(oldp+1370,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    bufp->fullBit(oldp+1371,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    bufp->fullIData(oldp+1372,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mscratch),32);
    bufp->fullBit(oldp+1373,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
    bufp->fullCData(oldp+1374,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
    bufp->fullIData(oldp+1375,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
    bufp->fullQData(oldp+1376,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
    bufp->fullQData(oldp+1378,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
    bufp->fullBit(oldp+1380,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    bufp->fullCData(oldp+1381,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
    bufp->fullIData(oldp+1382,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
    bufp->fullBit(oldp+1383,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
    bufp->fullCData(oldp+1384,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
    bufp->fullBit(oldp+1385,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952));
    bufp->fullBit(oldp+1386,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952_1));
    bufp->fullBit(oldp+1387,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952_2));
    bufp->fullBit(oldp+1388,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_lastStageWasWfi));
    bufp->fullBit(oldp+1389,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
    bufp->fullBit(oldp+1390,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
    bufp->fullBit(oldp+1391,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
    bufp->fullBit(oldp+1392,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
    bufp->fullBit(oldp+1393,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                      << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
    bufp->fullBit(oldp+1394,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1064));
    bufp->fullCData(oldp+1395,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                      >> 0x1cU))),2);
    bufp->fullBit(oldp+1396,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
    bufp->fullBit(oldp+1397,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1108));
    bufp->fullBit(oldp+1398,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake)))));
    bufp->fullBit(oldp+1399,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1064) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                                   & (1U 
                                                      == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))))))));
    bufp->fullBit(oldp+1400,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid)))));
    bufp->fullBit(oldp+1401,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
    bufp->fullBit(oldp+1402,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                              & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
    bufp->fullBit(oldp+1403,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1144));
    bufp->fullBit(oldp+1404,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE))));
    bufp->fullBit(oldp+1405,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE))));
    bufp->fullBit(oldp+1406,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
    bufp->fullBit(oldp+1407,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE)))));
    bufp->fullBit(oldp+1408,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1409,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176));
    bufp->fullSData(oldp+1410,((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x14U)),12);
    bufp->fullBit(oldp+1411,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU))) 
                              | (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU))))));
    bufp->fullBit(oldp+1412,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU)))));
    bufp->fullSData(oldp+1413,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
    bufp->fullSData(oldp+1414,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
    bufp->fullIData(oldp+1415,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
    bufp->fullIData(oldp+1416,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
    bufp->fullIData(oldp+1417,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
    bufp->fullIData(oldp+1418,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
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
    bufp->fullWData(oldp+1419,(__Vtemp_6),66);
    bufp->fullBit(oldp+1422,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid))));
    bufp->fullQData(oldp+1423,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
    bufp->fullIData(oldp+1425,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
    bufp->fullWData(oldp+1426,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
    bufp->fullBit(oldp+1429,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
    bufp->fullBit(oldp+1430,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
    bufp->fullCData(oldp+1431,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)
                                 ? (((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))
                                     ? 0U : (0x3fU 
                                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value) 
                                                + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))))
                                 : 0U)),6);
    bufp->fullCData(oldp+1432,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
    bufp->fullBit(oldp+1433,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullBit(oldp+1434,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    bufp->fullBit(oldp+1435,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
    bufp->fullBit(oldp+1436,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullIData(oldp+1437,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
    bufp->fullBit(oldp+1438,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
    bufp->fullBit(oldp+1439,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
    bufp->fullQData(oldp+1440,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
    bufp->fullQData(oldp+1442,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
    bufp->fullIData(oldp+1444,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                               >> 0x20U)))
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
    bufp->fullIData(oldp+1445,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                 << 1U) | (1U & (~ (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                            >> 0x20U)))))),32);
    bufp->fullIData(oldp+1446,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
    bufp->fullBit(oldp+1447,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuckByOthers))))));
    bufp->fullBit(oldp+1448,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuckByOthers)) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
    bufp->fullBit(oldp+1449,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
    bufp->fullBit(oldp+1450,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3857));
    bufp->fullBit(oldp+1451,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3858));
    bufp->fullBit(oldp+1452,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3859));
    bufp->fullBit(oldp+1453,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3860));
    bufp->fullBit(oldp+1454,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_769));
    bufp->fullBit(oldp+1455,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
    bufp->fullBit(oldp+1456,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
    bufp->fullBit(oldp+1457,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
    bufp->fullBit(oldp+1458,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
    bufp->fullBit(oldp+1459,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
    bufp->fullBit(oldp+1460,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_832));
    bufp->fullBit(oldp+1461,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
    bufp->fullBit(oldp+1462,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
    bufp->fullBit(oldp+1463,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2816));
    bufp->fullBit(oldp+1464,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2944));
    bufp->fullBit(oldp+1465,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2818));
    bufp->fullBit(oldp+1466,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2946));
    bufp->fullBit(oldp+1467,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3072));
    bufp->fullBit(oldp+1468,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3200));
    bufp->fullBit(oldp+1469,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3074));
    bufp->fullBit(oldp+1470,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3202));
    bufp->fullBit(oldp+1471,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
    bufp->fullBit(oldp+1472,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
    bufp->fullBit(oldp+1473,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176)))));
    bufp->fullQData(oldp+1474,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL_string),40);
    bufp->fullWData(oldp+1476,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
    bufp->fullQData(oldp+1479,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_32 
                                              >> 0x12U)))
                                 ? 0x584f525f31ULL : 
                                ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_32 
                                               >> 0x12U)))
                                  ? 0x4f525f3120ULL
                                  : ((2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_32 
                                                   >> 0x12U)))
                                      ? 0x414e445f31ULL
                                      : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+1481,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC2_CTRL_string),24);
    bufp->fullQData(oldp+1482,(((0U == (3U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_34) 
                                              >> 6U)))
                                 ? 0x4144445f53554220ULL
                                 : ((1U == (3U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_34) 
                                                  >> 6U)))
                                     ? 0x534c545f534c5455ULL
                                     : ((2U == (3U 
                                                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgRegularize_h1463825b_0_34) 
                                                   >> 6U)))
                                         ? 0x4249545749534520ULL
                                         : 0x3f3f3f3f3f3f3f3fULL)))),64);
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_8(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1484,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+1487,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1489,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1491,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_ENV_CTRL_string),40);
    bufp->fullIData(oldp+1493,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+1494,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+1497,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+1500,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2_CTRL_string),24);
    bufp->fullWData(oldp+1501,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+1504,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                 ? 0x4144445f53554220ULL
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                     ? 0x534c545f534c5455ULL
                                     : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                         ? 0x4249545749534520ULL
                                         : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullQData(oldp+1506,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? 0x584f525f31ULL : 
                                ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? 0x4f525f3120ULL
                                  : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? 0x414e445f31ULL
                                      : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+1508,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_BRANCH_CTRL_string),32);
    bufp->fullWData(oldp+1509,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
    bufp->fullIData(oldp+1512,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL_string),24);
    bufp->fullWData(oldp+1513,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+1516,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+1519,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL_string),32);
    bufp->fullQData(oldp+1520,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1522,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL_string),40);
    bufp->fullQData(oldp+1524,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL_string),40);
    bufp->fullBit(oldp+1526,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
    bufp->fullBit(oldp+1527,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    bufp->fullIData(oldp+1528,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
    bufp->fullBit(oldp+1529,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
    bufp->fullBit(oldp+1530,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    bufp->fullCData(oldp+1531,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
    bufp->fullBit(oldp+1532,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                       >> 7U)))));
    bufp->fullBit(oldp+1533,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
    bufp->fullBit(oldp+1534,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
    bufp->fullBit(oldp+1535,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
    bufp->fullBit(oldp+1536,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
    bufp->fullCData(oldp+1537,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
    bufp->fullBit(oldp+1538,((1U & ((~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                        >> 7U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))));
    bufp->fullCData(oldp+1539,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                             >> 5U)
                                          : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
    bufp->fullBit(oldp+1540,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                    >> 7U))));
    bufp->fullIData(oldp+1541,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                >> 0xcU)),20);
    bufp->fullSData(oldp+1542,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                           >> 2U)) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
    bufp->fullBit(oldp+1543,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
    bufp->fullBit(oldp+1544,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
    bufp->fullBit(oldp+1545,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                    >> 1U))));
    bufp->fullIData(oldp+1546,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                            >> 2U))),20);
    bufp->fullBit(oldp+1547,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
    bufp->fullBit(oldp+1548,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
    bufp->fullBit(oldp+1549,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
    bufp->fullBit(oldp+1550,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
    bufp->fullBit(oldp+1551,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
    bufp->fullBit(oldp+1552,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
    bufp->fullBit(oldp+1553,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+1554,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
    bufp->fullBit(oldp+1555,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
    bufp->fullBit(oldp+1556,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
    bufp->fullCData(oldp+1557,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid)
                                 ? (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_address 
                                             >> 5U))
                                 : 0U)),7);
    bufp->fullBit(oldp+1558,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
    bufp->fullBit(oldp+1559,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
    bufp->fullCData(oldp+1560,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
    bufp->fullBit(oldp+1561,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
    bufp->fullBit(oldp+1562,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
    bufp->fullIData(oldp+1563,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
    bufp->fullBit(oldp+1564,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
    bufp->fullBit(oldp+1565,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
    bufp->fullCData(oldp+1566,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
    bufp->fullBit(oldp+1567,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
    bufp->fullBit(oldp+1568,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
    bufp->fullIData(oldp+1569,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
    bufp->fullSData(oldp+1570,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
    bufp->fullBit(oldp+1571,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
    bufp->fullBit(oldp+1572,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
    bufp->fullSData(oldp+1573,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
    bufp->fullIData(oldp+1574,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
    bufp->fullCData(oldp+1575,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
    bufp->fullBit(oldp+1576,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+1577,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                    >> 1U))));
    bufp->fullIData(oldp+1578,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                            >> 2U))),20);
    bufp->fullIData(oldp+1579,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                  << 0x18U) | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                               << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                    << 8U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read)))),32);
    bufp->fullBit(oldp+1580,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid))));
    bufp->fullBit(oldp+1581,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1));
    bufp->fullBit(oldp+1582,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
    bufp->fullBit(oldp+1583,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid))));
    bufp->fullCData(oldp+1584,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
    bufp->fullBit(oldp+1585,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1) 
                              & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_address 
                                                >> 2U))) 
                                 & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
    bufp->fullCData(oldp+1586,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
    bufp->fullBit(oldp+1587,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
    bufp->fullCData(oldp+1588,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
    bufp->fullBit(oldp+1589,((((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                >> 0xcU) == (0xfffffU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                >> 2U))) 
                              & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+1590,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
    bufp->fullBit(oldp+1591,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
    bufp->fullBit(oldp+1592,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_1) 
                                 & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                     == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                   >> 2U))) 
                                    & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
                                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask))))))));
    bufp->fullCData(oldp+1593,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
    bufp->fullBit(oldp+1594,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
    bufp->fullBit(oldp+1595,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid))));
    bufp->fullBit(oldp+1596,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l816));
    bufp->fullIData(oldp+1597,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+1598,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    bufp->fullBit(oldp+1599,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
    bufp->fullBit(oldp+1600,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
    bufp->fullBit(oldp+1601,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
    bufp->fullBit(oldp+1602,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
    bufp->fullBit(oldp+1603,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
    bufp->fullBit(oldp+1604,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+1605,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
    bufp->fullBit(oldp+1606,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
    bufp->fullIData(oldp+1607,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
    bufp->fullIData(oldp+1608,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
    bufp->fullBit(oldp+1609,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
    bufp->fullBit(oldp+1610,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
    bufp->fullBit(oldp+1611,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
    bufp->fullBit(oldp+1612,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
    bufp->fullBit(oldp+1613,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
    bufp->fullBit(oldp+1614,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
    bufp->fullBit(oldp+1615,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
    bufp->fullCData(oldp+1616,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
    bufp->fullBit(oldp+1617,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
    bufp->fullBit(oldp+1618,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
    bufp->fullBit(oldp+1619,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
    bufp->fullBit(oldp+1620,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                    | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                       & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
    bufp->fullBit(oldp+1621,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
    bufp->fullBit(oldp+1622,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                     ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                     : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
    bufp->fullBit(oldp+1623,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l989));
    bufp->fullBit(oldp+1624,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                    | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
    bufp->fullBit(oldp+1625,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
    bufp->fullBit(oldp+1626,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
    bufp->fullBit(oldp+1627,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1051));
    bufp->fullBit(oldp+1628,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
    bufp->fullBit(oldp+1629,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    bufp->fullCData(oldp+1630,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                      + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
    bufp->fullCData(oldp+1631,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
    bufp->fullBit(oldp+1632,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
    bufp->fullBit(oldp+1633,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
    bufp->fullBit(oldp+1634,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
    bufp->fullBit(oldp+1635,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
    bufp->fullBit(oldp+1636,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
    bufp->fullBit(oldp+1637,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
    bufp->fullBit(oldp+1638,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
    bufp->fullBit(oldp+1639,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
    bufp->fullIData(oldp+1640,(((0xffffe00U & (vlSymsp->TOP__sim.__PVT__tag_mem
                                               [vlSymsp->TOP__sim.__PVT__tag_mem_adr0] 
                                               << 9U)) 
                                | (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                             >> 2U)))),28);
    bufp->fullIData(oldp+1641,(((0xfffe00U & (vlSymsp->TOP__sim.__PVT__tag_mem
                                              [vlSymsp->TOP__sim.__PVT__tag_mem_adr0] 
                                              << 9U)) 
                                | (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                             >> 2U)))),24);
    bufp->fullBit(oldp+1642,((((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant)) 
                               & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_39) 
                                  & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                              | (((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                  & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_35) 
                                     & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                 | (((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                     & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_33) 
                                        & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                    | ((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                       & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_31) 
                                          & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))))))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_9(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+1643,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1644,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1645,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1646,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)))));
    bufp->fullBit(oldp+1647,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) 
                              | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished))));
    bufp->fullBit(oldp+1648,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                              & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed)) 
                                 & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)) 
                                    & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid))))));
    bufp->fullQData(oldp+1649,((((QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self2)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self1)))),38);
    bufp->fullBit(oldp+1651,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
                              & (3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))));
    bufp->fullBit(oldp+1652,((((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant)) 
                               & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_41) 
                                  & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                              | (((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                  & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_37) 
                                     & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                 | (((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                     & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_34) 
                                        & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                    | ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                       & ((IData)(vlSymsp->TOP__sim.__VdfgRegularize_h32427ced_0_32) 
                                          & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))))))));
    bufp->fullBit(oldp+1653,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))));
    bufp->fullBit(oldp+1654,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))));
    bufp->fullBit(oldp+1655,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))));
    bufp->fullBit(oldp+1656,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))));
    bufp->fullBit(oldp+1657,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
    bufp->fullBit(oldp+1658,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ACK))));
    bufp->fullIData(oldp+1659,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_q),32);
    bufp->fullCData(oldp+1660,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_q),3);
    bufp->fullBit(oldp+1661,((0U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullBit(oldp+1662,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__pending_q));
    bufp->fullQData(oldp+1663,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__cycles_q),64);
    bufp->fullCData(oldp+1665,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__status_q),8);
    bufp->fullBit(oldp+1666,((4U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullIData(oldp+1667,((0xffffffU & (vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                             >> 4U))),24);
    bufp->fullBit(oldp+1668,((3U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullBit(oldp+1669,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_valid));
    bufp->fullCData(oldp+1670,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__addr_q),8);
    bufp->fullIData(oldp+1671,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q),32);
    bufp->fullBit(oldp+1672,(vlSymsp->TOP__sim.__PVT__build_soc_csr_req_ready));
    bufp->fullBit(oldp+1673,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    bufp->fullBit(oldp+1674,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    bufp->fullBit(oldp+1675,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q));
    bufp->fullIData(oldp+1676,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q),32);
    bufp->fullBit(oldp+1677,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q));
    bufp->fullBit(oldp+1678,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__irq_q));
    bufp->fullIData(oldp+1679,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_addr),32);
    bufp->fullBit(oldp+1680,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_ready));
    bufp->fullBit(oldp+1681,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullWData(oldp+1682,(vlSymsp->TOP__sim.__PVT__build_soc_mem_rsp_data),128);
    bufp->fullBit(oldp+1686,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q));
    bufp->fullBit(oldp+1687,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
    bufp->fullBit(oldp+1688,(((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                              | (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))));
    bufp->fullBit(oldp+1689,(((2U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                              | (6U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)))));
    bufp->fullWData(oldp+1690,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q),128);
    bufp->fullBit(oldp+1694,((4U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullSData(oldp+1695,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q),16);
    bufp->fullBit(oldp+1696,(vlSymsp->TOP__sim.__PVT__build_soc_pending_status));
    bufp->fullBit(oldp+1697,(vlSymsp->TOP__sim.__PVT__build_soc_status_status));
    bufp->fullBit(oldp+1698,((3U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    bufp->fullIData(oldp+1699,(vlSymsp->TOP__sim.__PVT__build_soc_wb_dat_r),32);
    bufp->fullBit(oldp+1700,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__start_raw));
    bufp->fullBit(oldp+1701,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
                              & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_csr_req_ready) 
                                 & ((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                                    & (IData)((((0xcU 
                                                 == 
                                                 (0xfcU 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) 
                                                & vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q) 
                                               & ((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                                   ? 0xfU
                                                   : 0U))))))));
    bufp->fullBit(oldp+1702,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__inflight_q));
    bufp->fullCData(oldp+1703,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_cfg),3);
    bufp->fullIData(oldp+1704,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_cfg),32);
    bufp->fullCData(oldp+1705,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__status_q),8);
    bufp->fullQData(oldp+1706,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__cycles_q),64);
    bufp->fullBit(oldp+1708,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__busy));
    bufp->fullCData(oldp+1709,(((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                 ? 0xfU : 0U)),4);
    bufp->fullQData(oldp+1710,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q),64);
    bufp->fullWData(oldp+1712,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__descriptor_q),512);
    bufp->fullCData(oldp+1728,((vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1729,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q),32);
    bufp->fullIData(oldp+1730,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__response_count_q),32);
    bufp->fullCData(oldp+1731,((0U != vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q)),2);
    bufp->fullCData(oldp+1732,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q),3);
    bufp->fullCData(oldp+1733,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__beat_q),2);
    bufp->fullCData(oldp+1734,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__opcode_q),3);
    bufp->fullIData(oldp+1735,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__address_q),32);
    bufp->fullIData(oldp+1736,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q),32);
    bufp->fullIData(oldp+1737,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__reserved_q),32);
    bufp->fullBit(oldp+1738,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__outstanding_q));
    bufp->fullCData(oldp+1739,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q),2);
    bufp->fullBit(oldp+1740,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request));
    bufp->fullBit(oldp+1741,((0U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullBit(oldp+1742,((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    bufp->fullWData(oldp+1743,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q),128);
    bufp->fullBit(oldp+1747,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)) 
                              & ((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request)) 
                                 & (~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))))));
    bufp->fullBit(oldp+1748,(((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                              & (2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)))));
    bufp->fullCData(oldp+1749,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q),4);
    bufp->fullBit(oldp+1750,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q));
    bufp->fullIData(oldp+1751,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q),32);
    bufp->fullSData(oldp+1752,((0x7fffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),15);
    bufp->fullIData(oldp+1753,(vlSymsp->TOP__sim.__PVT__builder_rhs_self0),30);
    bufp->fullBit(oldp+1754,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                              & (0U == (0x3fff8000U 
                                        & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)))));
    bufp->fullIData(oldp+1755,(vlSymsp->TOP__sim.__PVT__builder_rhs_self1),32);
    bufp->fullBit(oldp+1756,(vlSymsp->TOP__sim.__PVT__builder_rhs_self3));
    bufp->fullBit(oldp+1757,(vlSymsp->TOP__sim.__PVT__builder_rhs_self5));
    bufp->fullSData(oldp+1758,((0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                          >> 2U))),9);
    bufp->fullWData(oldp+1759,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_dat_w),128);
    bufp->fullSData(oldp+1763,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_we),16);
    bufp->fullBit(oldp+1764,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_int_rst));
    bufp->fullBit(oldp+1765,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_ack));
    bufp->fullWData(oldp+1766,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_dat_r),128);
    bufp->fullWData(oldp+1770,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata),128);
    bufp->fullBit(oldp+1774,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready0));
    bufp->fullSData(oldp+1775,((0x7ffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),11);
    bufp->fullBit(oldp+1776,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc));
    bufp->fullCData(oldp+1777,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_we),4);
    bufp->fullBit(oldp+1778,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read));
    bufp->fullBit(oldp+1779,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready));
    bufp->fullBit(oldp+1780,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock));
    bufp->fullBit(oldp+1781,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid));
    bufp->fullBit(oldp+1782,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
    bufp->fullBit(oldp+1783,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read));
    bufp->fullBit(oldp+1784,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready));
    bufp->fullBit(oldp+1785,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock));
    bufp->fullBit(oldp+1786,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid));
    bufp->fullBit(oldp+1787,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
    bufp->fullBit(oldp+1788,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read));
    bufp->fullBit(oldp+1789,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready));
    bufp->fullBit(oldp+1790,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock));
    bufp->fullBit(oldp+1791,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid));
    bufp->fullBit(oldp+1792,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
    bufp->fullBit(oldp+1793,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read));
    bufp->fullBit(oldp+1794,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready));
    bufp->fullBit(oldp+1795,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock));
    bufp->fullBit(oldp+1796,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid));
    bufp->fullBit(oldp+1797,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
    bufp->fullBit(oldp+1798,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty));
    bufp->fullIData(oldp+1799,((0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                            >> 0xbU))),21);
    bufp->fullIData(oldp+1800,((((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty) 
                                 << 0x15U) | (0x7ffffU 
                                              & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                                 >> 0xbU)))),22);
    bufp->fullBit(oldp+1801,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_we));
    bufp->fullBit(oldp+1802,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_ack));
    bufp->fullBit(oldp+1803,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_cyc));
    bufp->fullBit(oldp+1804,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_clr));
    bufp->fullBit(oldp+1805,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_inc));
    bufp->fullBit(oldp+1806,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_write_from_slave));
    bufp->fullBit(oldp+1807,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid14));
    bufp->fullBit(oldp+1808,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready2));
    bufp->fullBit(oldp+1809,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value));
    bufp->fullBit(oldp+1810,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed));
    bufp->fullIData(oldp+1811,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0),26);
    bufp->fullBit(oldp+1812,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0));
    bufp->fullBit(oldp+1813,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2));
    bufp->fullBit(oldp+1814,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2));
    bufp->fullBit(oldp+1815,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1));
    bufp->fullBit(oldp+1816,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1));
    bufp->fullBit(oldp+1817,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd));
    __Vtemp_1[0U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
    __Vtemp_1[1U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
    __Vtemp_1[2U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
    __Vtemp_1[3U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
    __Vtemp_1[4U] = 0U;
    bufp->fullWData(oldp+1818,(__Vtemp_1),130);
    bufp->fullCData(oldp+1823,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3),4);
    bufp->fullBit(oldp+1824,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3));
    bufp->fullBit(oldp+1825,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready));
    bufp->fullBit(oldp+1826,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready1));
    bufp->fullBit(oldp+1827,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part));
    bufp->fullBit(oldp+1828,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
}

VL_ATTR_COLD void Vsim___024root__trace_full_0_sub_10(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_0_sub_10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1829,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read));
    bufp->fullBit(oldp+1830,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid));
    bufp->fullBit(oldp+1831,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
    bufp->fullBit(oldp+1832,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished));
    bufp->fullBit(oldp+1833,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)))));
    bufp->fullIData(oldp+1834,((0x3ffffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                              - (IData)(0x800000U)))),26);
    bufp->fullBit(oldp+1835,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_ready));
    bufp->fullBit(oldp+1836,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid));
    bufp->fullBit(oldp+1837,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc)))));
    bufp->fullBit(oldp+1838,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_ack));
    bufp->fullIData(oldp+1839,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),28);
    bufp->fullBit(oldp+1840,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc));
    bufp->fullBit(oldp+1841,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                              & (0x38000000U == (0x3ffffc00U 
                                                 & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)))));
    bufp->fullCData(oldp+1842,(vlSymsp->TOP__sim.__PVT__builder_fullmemorywe_next_state),2);
    bufp->fullBit(oldp+1843,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                              & (0x3c000000U == (0x3fffc000U 
                                                 & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)))));
    bufp->fullSData(oldp+1844,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value1),14);
    bufp->fullBit(oldp+1845,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1));
    bufp->fullIData(oldp+1846,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0),32);
    bufp->fullBit(oldp+1847,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value2));
    bufp->fullBit(oldp+1848,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2));
    bufp->fullBit(oldp+1849,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value3));
    bufp->fullBit(oldp+1850,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3));
    bufp->fullBit(oldp+1851,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid0));
    bufp->fullBit(oldp+1852,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid10));
    bufp->fullBit(oldp+1853,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid11));
    bufp->fullBit(oldp+1854,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid12));
    bufp->fullBit(oldp+1855,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid13));
    bufp->fullBit(oldp+1856,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid5));
    bufp->fullCData(oldp+1857,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_next_state),2);
    bufp->fullCData(oldp+1858,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant),2);
    bufp->fullCData(oldp+1859,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant),2);
    bufp->fullCData(oldp+1860,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant),2);
    bufp->fullCData(oldp+1861,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant),2);
    bufp->fullCData(oldp+1862,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native0_next_state),2);
    bufp->fullCData(oldp+1863,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native1_next_state),2);
    bufp->fullBit(oldp+1864,(vlSymsp->TOP__sim.__PVT__builder_rhs_self4));
    bufp->fullCData(oldp+1865,(vlSymsp->TOP__sim.__PVT__builder_slave_sel),6);
    bufp->fullCData(oldp+1866,(vlSymsp->TOP__sim.__PVT__builder_wishbone2csr_next_state),2);
    bufp->fullBit(oldp+1867,(vlSymsp->TOP__sim.__Vcellinp__litex_wishbone_csr_bridge__rst_ni));
    bufp->fullIData(oldp+1868,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),30);
    bufp->fullBit(oldp+1869,(vlSymsp->TOP__sim__VexRiscv.__PVT__reset));
    bufp->fullBit(oldp+1870,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_ready));
    bufp->fullWData(oldp+1871,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata),128);
    bufp->fullSData(oldp+1875,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask),16);
    bufp->fullWData(oldp+1876,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w),128);
    bufp->fullSData(oldp+1880,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we),16);
    bufp->fullWData(oldp+1881,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w),128);
    bufp->fullSData(oldp+1885,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we),16);
    bufp->fullWData(oldp+1886,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w),128);
    bufp->fullSData(oldp+1890,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we),16);
    bufp->fullWData(oldp+1891,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w),128);
    bufp->fullSData(oldp+1895,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we),16);
    bufp->fullBit(oldp+1896,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ACK));
    bufp->fullIData(oldp+1897,(vlSymsp->TOP__sim.__PVT__builder_shared_dat_r),32);
    bufp->fullBit(oldp+1898,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ACK));
    bufp->fullIData(oldp+1899,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interrupt),32);
    bufp->fullIData(oldp+1900,(vlSymsp->TOP__sim.__PVT__builder_rhs_self20),22);
    bufp->fullBit(oldp+1901,(vlSymsp->TOP__sim.__PVT__builder_rhs_self21));
    bufp->fullBit(oldp+1902,(vlSymsp->TOP__sim.__PVT__builder_rhs_self22));
    bufp->fullIData(oldp+1903,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self20 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self21))),25);
    bufp->fullIData(oldp+1904,(vlSymsp->TOP__sim.__PVT__builder_rhs_self23),22);
    bufp->fullBit(oldp+1905,(vlSymsp->TOP__sim.__PVT__builder_rhs_self24));
    bufp->fullBit(oldp+1906,(vlSymsp->TOP__sim.__PVT__builder_rhs_self25));
    bufp->fullIData(oldp+1907,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self23 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self24))),25);
    bufp->fullIData(oldp+1908,(vlSymsp->TOP__sim.__PVT__builder_rhs_self26),22);
    bufp->fullBit(oldp+1909,(vlSymsp->TOP__sim.__PVT__builder_rhs_self27));
    bufp->fullBit(oldp+1910,(vlSymsp->TOP__sim.__PVT__builder_rhs_self28));
    bufp->fullIData(oldp+1911,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self26 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self27))),25);
    bufp->fullIData(oldp+1912,(vlSymsp->TOP__sim.__PVT__builder_rhs_self29),22);
    bufp->fullBit(oldp+1913,(vlSymsp->TOP__sim.__PVT__builder_rhs_self30));
    bufp->fullBit(oldp+1914,(vlSymsp->TOP__sim.__PVT__builder_rhs_self31));
    bufp->fullIData(oldp+1915,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self29 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self30))),25);
    bufp->fullWData(oldp+1916,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata),128);
    bufp->fullSData(oldp+1920,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask),16);
    bufp->fullSData(oldp+1921,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we),16);
    bufp->fullCData(oldp+1922,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_request),3);
    bufp->fullCData(oldp+1923,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_request),3);
    bufp->fullCData(oldp+1924,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_request),3);
    bufp->fullCData(oldp+1925,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_request),3);
    bufp->fullBit(oldp+1926,(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
    bufp->fullBit(oldp+1927,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
    bufp->fullCData(oldp+1928,(vlSelfRef.serial_sink_data),8);
    bufp->fullBit(oldp+1929,(vlSelfRef.serial_sink_ready));
    bufp->fullBit(oldp+1930,(vlSelfRef.serial_sink_valid));
    bufp->fullCData(oldp+1931,(vlSelfRef.serial_source_data),8);
    bufp->fullBit(oldp+1932,(vlSelfRef.serial_source_ready));
    bufp->fullBit(oldp+1933,(vlSelfRef.serial_source_valid));
    bufp->fullBit(oldp+1934,(vlSelfRef.sim_trace));
    bufp->fullBit(oldp+1935,(vlSelfRef.sys_clk));
    bufp->fullSData(oldp+1936,(vlSelfRef.serial_sink_data),10);
    bufp->fullBit(oldp+1937,(((IData)(vlSelfRef.serial_sink_valid) 
                              & (IData)(vlSelfRef.serial_sink_ready))));
    bufp->fullBit(oldp+1938,((1U & (~ (IData)(vlSelfRef.serial_sink_ready)))));
    bufp->fullBit(oldp+1939,(((IData)(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__irq_q) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_enable_storage))));
    bufp->fullBit(oldp+1940,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock))))));
    bufp->fullBit(oldp+1941,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock))))));
    bufp->fullBit(oldp+1942,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock))))));
    bufp->fullBit(oldp+1943,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock))))));
    bufp->fullBit(oldp+1944,((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                               & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_error))) 
                              & (~ (IData)(vlSymsp->TOP__sim.__VdfgRegularize_h787163e4_0_50)))));
    bufp->fullIData(oldp+1945,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
    bufp->fullBit(oldp+1946,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
    bufp->fullIData(oldp+1947,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
    bufp->fullIData(oldp+1948,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
    bufp->fullBit(oldp+1949,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
    bufp->fullBit(oldp+1950,((vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1951,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
    bufp->fullBit(oldp+1952,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
    bufp->fullCData(oldp+1953,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->fullIData(oldp+1954,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->fullCData(oldp+1955,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
    bufp->fullBit(oldp+1956,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    bufp->fullBit(oldp+1957,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
    bufp->fullCData(oldp+1958,(((IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code))),4);
    bufp->fullIData(oldp+1959,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->fullIData(oldp+1960,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->fullIData(oldp+1961,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->fullIData(oldp+1962,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->fullIData(oldp+1963,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->fullIData(oldp+1964,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->fullIData(oldp+1965,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->fullIData(oldp+1966,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->fullIData(oldp+1967,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->fullIData(oldp+1968,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->fullIData(oldp+1969,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->fullIData(oldp+1970,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->fullIData(oldp+1971,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->fullIData(oldp+1972,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->fullIData(oldp+1973,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->fullIData(oldp+1974,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->fullIData(oldp+1975,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->fullIData(oldp+1976,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->fullIData(oldp+1977,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->fullIData(oldp+1978,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->fullIData(oldp+1979,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->fullIData(oldp+1980,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->fullIData(oldp+1981,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->fullIData(oldp+1982,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->fullIData(oldp+1983,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->fullIData(oldp+1984,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->fullIData(oldp+1985,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->fullIData(oldp+1986,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->fullIData(oldp+1987,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->fullIData(oldp+1988,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->fullIData(oldp+1989,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->fullIData(oldp+1990,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
    bufp->fullBit(oldp+1991,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                              & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                              >> 2U)) 
                                 == (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                     >> 0xcU)))));
}
