// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim___024root__trace_chg_0_sub_9(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1643);
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+0,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+1,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+2,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+3,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
                                    | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+4,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) 
                              | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished))));
        bufp->chgBit(oldp+5,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                              & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed)) 
                                 & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)) 
                                    & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid))))));
        bufp->chgQData(oldp+6,((((QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self2)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self1)))),38);
        bufp->chgBit(oldp+8,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
                              & (3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))));
        bufp->chgBit(oldp+9,((((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant)) 
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
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgBit(oldp+10,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))));
        bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))));
        bufp->chgBit(oldp+12,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))));
        bufp->chgBit(oldp+13,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))));
        bufp->chgBit(oldp+14,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
        bufp->chgBit(oldp+15,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ACK))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+16,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_q),32);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_q),3);
        bufp->chgBit(oldp+18,((0U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__pending_q));
        bufp->chgQData(oldp+20,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__cycles_q),64);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__status_q),8);
        bufp->chgBit(oldp+23,((4U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgIData(oldp+24,((0xffffffU & (vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                              >> 4U))),24);
        bufp->chgBit(oldp+25,((3U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_valid));
        bufp->chgCData(oldp+27,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__addr_q),8);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q),32);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__build_soc_csr_req_ready));
        bufp->chgBit(oldp+30,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
        bufp->chgBit(oldp+31,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q));
        bufp->chgIData(oldp+33,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q),32);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__irq_q));
        bufp->chgIData(oldp+36,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_addr),32);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_ready));
        bufp->chgBit(oldp+38,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgWData(oldp+39,(vlSymsp->TOP__sim.__PVT__build_soc_mem_rsp_data),128);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q));
        bufp->chgBit(oldp+44,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgBit(oldp+45,(((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                               | (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))));
        bufp->chgBit(oldp+46,(((2U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                               | (6U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)))));
        bufp->chgWData(oldp+47,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q),128);
        bufp->chgBit(oldp+51,((4U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgSData(oldp+52,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q),16);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__build_soc_pending_status));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim.__PVT__build_soc_status_status));
        bufp->chgBit(oldp+55,((3U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
        bufp->chgIData(oldp+56,(vlSymsp->TOP__sim.__PVT__build_soc_wb_dat_r),32);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__start_raw));
        bufp->chgBit(oldp+58,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
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
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__inflight_q));
        bufp->chgCData(oldp+60,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_cfg),3);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_cfg),32);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__status_q),8);
        bufp->chgQData(oldp+63,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__cycles_q),64);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__busy));
        bufp->chgCData(oldp+66,(((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                  ? 0xfU : 0U)),4);
        bufp->chgQData(oldp+67,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q),64);
        bufp->chgWData(oldp+69,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__descriptor_q),512);
        bufp->chgCData(oldp+85,((vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q 
                                 >> 0x18U)),8);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__response_count_q),32);
        bufp->chgCData(oldp+88,((0U != vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q)),2);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q),3);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__beat_q),2);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__opcode_q),3);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__address_q),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__reserved_q),32);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__outstanding_q));
        bufp->chgCData(oldp+96,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q),2);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request));
        bufp->chgBit(oldp+98,((0U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgBit(oldp+99,((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgWData(oldp+100,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q),128);
        bufp->chgBit(oldp+104,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)) 
                                & ((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request)) 
                                   & (~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))))));
        bufp->chgBit(oldp+105,(((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                                & (2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)))));
        bufp->chgCData(oldp+106,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q),4);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q));
        bufp->chgIData(oldp+108,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+109,((0x7fffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),15);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__sim.__PVT__builder_rhs_self0),30);
        bufp->chgBit(oldp+111,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                                & (0U == (0x3fff8000U 
                                          & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)))));
        bufp->chgIData(oldp+112,(vlSymsp->TOP__sim.__PVT__builder_rhs_self1),32);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__sim.__PVT__builder_rhs_self3));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sim.__PVT__builder_rhs_self5));
        bufp->chgSData(oldp+115,((0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                            >> 2U))),9);
        bufp->chgWData(oldp+116,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_dat_w),128);
        bufp->chgSData(oldp+120,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_we),16);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_int_rst));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_ack));
        bufp->chgWData(oldp+123,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_dat_r),128);
        bufp->chgWData(oldp+127,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata),128);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready0));
        bufp->chgSData(oldp+132,((0x7ffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),11);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc));
        bufp->chgCData(oldp+134,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_we),4);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty));
        bufp->chgIData(oldp+156,((0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                              >> 0xbU))),21);
        bufp->chgIData(oldp+157,((((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty) 
                                   << 0x15U) | (0x7ffffU 
                                                & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                                   >> 0xbU)))),22);
        bufp->chgBit(oldp+158,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_we));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_ack));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_cyc));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_clr));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_inc));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_write_from_slave));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid14));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready2));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed));
        bufp->chgIData(oldp+168,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0),26);
        bufp->chgBit(oldp+169,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd));
        __Vtemp_1[0U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
        __Vtemp_1[1U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
        __Vtemp_1[2U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
        __Vtemp_1[3U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
        __Vtemp_1[4U] = 0U;
        bufp->chgWData(oldp+175,(__Vtemp_1),130);
        bufp->chgCData(oldp+180,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3),4);
        bufp->chgBit(oldp+181,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready1));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
    }
}

void Vsim___024root__trace_chg_0_sub_10(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1829);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished));
        bufp->chgBit(oldp+4,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)))));
        bufp->chgIData(oldp+5,((0x3ffffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                              - (IData)(0x800000U)))),26);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_ready));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid));
        bufp->chgBit(oldp+8,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc)))));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_ack));
        bufp->chgIData(oldp+10,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),28);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc));
        bufp->chgBit(oldp+12,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                               & (0x38000000U == (0x3ffffc00U 
                                                  & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)))));
        bufp->chgCData(oldp+13,(vlSymsp->TOP__sim.__PVT__builder_fullmemorywe_next_state),2);
        bufp->chgBit(oldp+14,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                               & (0x3c000000U == (0x3fffc000U 
                                                  & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)))));
        bufp->chgSData(oldp+15,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value1),14);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value2));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value3));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid0));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid10));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid11));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid12));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid13));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid5));
        bufp->chgCData(oldp+28,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_next_state),2);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant),2);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant),2);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant),2);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant),2);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native0_next_state),2);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native1_next_state),2);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__builder_rhs_self4));
        bufp->chgCData(oldp+36,(vlSymsp->TOP__sim.__PVT__builder_slave_sel),6);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__sim.__PVT__builder_wishbone2csr_next_state),2);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim.__Vcellinp__litex_wishbone_csr_bridge__rst_ni));
        bufp->chgIData(oldp+39,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),30);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__reset));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+41,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_ready));
        bufp->chgWData(oldp+42,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata),128);
        bufp->chgSData(oldp+46,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask),16);
        bufp->chgWData(oldp+47,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w),128);
        bufp->chgSData(oldp+51,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we),16);
        bufp->chgWData(oldp+52,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w),128);
        bufp->chgSData(oldp+56,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we),16);
        bufp->chgWData(oldp+57,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w),128);
        bufp->chgSData(oldp+61,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we),16);
        bufp->chgWData(oldp+62,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w),128);
        bufp->chgSData(oldp+66,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we),16);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_ACK));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__sim.__PVT__builder_shared_dat_r),32);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_ACK));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interrupt),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__sim.__PVT__builder_rhs_self20),22);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__builder_rhs_self21));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__builder_rhs_self22));
        bufp->chgIData(oldp+74,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self20 
                                  << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self21))),25);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__sim.__PVT__builder_rhs_self23),22);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__builder_rhs_self24));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__builder_rhs_self25));
        bufp->chgIData(oldp+78,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self23 
                                  << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self24))),25);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__sim.__PVT__builder_rhs_self26),22);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__builder_rhs_self27));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__builder_rhs_self28));
        bufp->chgIData(oldp+82,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self26 
                                  << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self27))),25);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__sim.__PVT__builder_rhs_self29),22);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__builder_rhs_self30));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim.__PVT__builder_rhs_self31));
        bufp->chgIData(oldp+86,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self29 
                                  << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self30))),25);
        bufp->chgWData(oldp+87,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata),128);
        bufp->chgSData(oldp+91,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask),16);
        bufp->chgSData(oldp+92,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we),16);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_request),3);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_request),3);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_request),3);
        bufp->chgCData(oldp+96,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_request),3);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
    }
    bufp->chgCData(oldp+99,(vlSelfRef.serial_sink_data),8);
    bufp->chgBit(oldp+100,(vlSelfRef.serial_sink_ready));
    bufp->chgBit(oldp+101,(vlSelfRef.serial_sink_valid));
    bufp->chgCData(oldp+102,(vlSelfRef.serial_source_data),8);
    bufp->chgBit(oldp+103,(vlSelfRef.serial_source_ready));
    bufp->chgBit(oldp+104,(vlSelfRef.serial_source_valid));
    bufp->chgBit(oldp+105,(vlSelfRef.sim_trace));
    bufp->chgBit(oldp+106,(vlSelfRef.sys_clk));
    bufp->chgSData(oldp+107,(vlSelfRef.serial_sink_data),10);
    bufp->chgBit(oldp+108,(((IData)(vlSelfRef.serial_sink_valid) 
                            & (IData)(vlSelfRef.serial_sink_ready))));
    bufp->chgBit(oldp+109,((1U & (~ (IData)(vlSelfRef.serial_sink_ready)))));
    bufp->chgBit(oldp+110,(((IData)(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__irq_q) 
                            & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_enable_storage))));
    bufp->chgBit(oldp+111,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock))))));
    bufp->chgBit(oldp+112,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock))))));
    bufp->chgBit(oldp+113,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock))))));
    bufp->chgBit(oldp+114,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock))))));
    bufp->chgBit(oldp+115,((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                             & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_error))) 
                            & (~ (IData)(vlSymsp->TOP__sim.__VdfgRegularize_h787163e4_0_50)))));
    bufp->chgIData(oldp+116,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
    bufp->chgBit(oldp+117,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
    bufp->chgIData(oldp+118,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
    bufp->chgIData(oldp+119,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
    bufp->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
    bufp->chgBit(oldp+121,((vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                            >> 0x1fU)));
    bufp->chgBit(oldp+122,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
    bufp->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
    bufp->chgCData(oldp+124,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->chgIData(oldp+125,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->chgCData(oldp+126,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
    bufp->chgBit(oldp+127,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    bufp->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
    bufp->chgCData(oldp+129,(((IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code)
                               : (IData)(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code))),4);
    bufp->chgIData(oldp+130,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->chgIData(oldp+131,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->chgIData(oldp+132,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->chgIData(oldp+133,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->chgIData(oldp+134,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->chgIData(oldp+135,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->chgIData(oldp+136,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->chgIData(oldp+137,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->chgIData(oldp+138,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->chgIData(oldp+139,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->chgIData(oldp+140,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->chgIData(oldp+141,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->chgIData(oldp+142,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->chgIData(oldp+143,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->chgIData(oldp+144,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->chgIData(oldp+145,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->chgIData(oldp+146,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->chgIData(oldp+147,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->chgIData(oldp+148,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->chgIData(oldp+149,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->chgIData(oldp+150,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->chgIData(oldp+151,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->chgIData(oldp+152,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->chgIData(oldp+153,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->chgIData(oldp+154,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->chgIData(oldp+155,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->chgIData(oldp+156,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->chgIData(oldp+157,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->chgIData(oldp+158,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->chgIData(oldp+159,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->chgIData(oldp+160,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->chgIData(oldp+161,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
    bufp->chgBit(oldp+162,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                            & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                            >> 2U)) 
                               == (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                   >> 0xcU)))));
}

void Vsim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_cleanup\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
