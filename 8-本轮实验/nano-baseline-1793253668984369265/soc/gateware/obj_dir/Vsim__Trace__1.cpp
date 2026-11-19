// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim___024root__trace_chg_0_sub_9(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_9\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1595);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
        bufp->chgIData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
        bufp->chgSData(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
        bufp->chgSData(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
        bufp->chgBit(oldp+10,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        bufp->chgBit(oldp+11,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                     >> 1U))));
        bufp->chgIData(oldp+12,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                             >> 2U))),20);
        bufp->chgIData(oldp+13,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                  << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                                << 0x10U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                   << 8U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
        bufp->chgBit(oldp+14,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid))));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l637));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l656));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
        bufp->chgBit(oldp+18,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid))));
        bufp->chgCData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
        bufp->chgBit(oldp+20,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l637) 
                               & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                   == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                                 >> 2U))) 
                                  & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
        bufp->chgCData(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
        bufp->chgCData(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
        bufp->chgBit(oldp+24,((((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                 >> 0xcU) == (0xfffffU 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                 >> 2U))) 
                               & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
        bufp->chgBit(oldp+27,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l637) 
                                  & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                      == (0x3ffU & 
                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                           >> 2U))) 
                                     & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
                                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask))))))));
        bufp->chgCData(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l816));
        bufp->chgIData(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
        bufp->chgIData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
        bufp->chgBit(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
        bufp->chgBit(oldp+52,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                        >> 7U)))));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
        bufp->chgBit(oldp+55,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
        bufp->chgBit(oldp+56,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                     | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                        & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                      ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l989));
        bufp->chgBit(oldp+60,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                     | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
        bufp->chgBit(oldp+61,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
        bufp->chgBit(oldp+62,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1051));
        bufp->chgBit(oldp+64,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
        bufp->chgCData(oldp+66,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                       + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
        bufp->chgBit(oldp+68,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1075));
        bufp->chgBit(oldp+74,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
        bufp->chgBit(oldp+76,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
        bufp->chgBit(oldp+77,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+78,(((0xffffe00U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                                << 9U)) 
                                 | (0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                              >> 2U)))),28);
        bufp->chgBit(oldp+79,((((0U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant)) 
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
        bufp->chgBit(oldp+80,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+81,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+82,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+83,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)))));
        bufp->chgBit(oldp+84,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) 
                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished))));
        bufp->chgBit(oldp+85,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                               & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                  & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)) 
                                     & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed)))))));
        bufp->chgQData(oldp+86,((((QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self2)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self1)))),38);
        bufp->chgBit(oldp+88,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
                               & (3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))));
        bufp->chgBit(oldp+89,((((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant)) 
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
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+90,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))));
        bufp->chgBit(oldp+91,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))));
        bufp->chgBit(oldp+92,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))));
        bufp->chgBit(oldp+93,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                               & (8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))));
        bufp->chgBit(oldp+94,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
        bufp->chgBit(oldp+95,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ibus_ack))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+96,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_q),32);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_q),3);
        bufp->chgBit(oldp+98,((0U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__pending_q));
        bufp->chgQData(oldp+100,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__cycles_q),64);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__status_q),8);
        bufp->chgBit(oldp+103,((4U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgIData(oldp+104,((0xffffffU & (vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                               >> 4U))),24);
        bufp->chgBit(oldp+105,((3U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_valid));
        bufp->chgCData(oldp+107,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__addr_q),8);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q),32);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__sim.__PVT__build_soc_csr_req_ready));
        bufp->chgBit(oldp+110,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
        bufp->chgBit(oldp+111,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q));
        bufp->chgIData(oldp+113,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q),32);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q));
    }
}

void Vsim___024root__trace_chg_0_sub_10(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_10\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1710);
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__irq_q));
        bufp->chgIData(oldp+1,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_addr),32);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__build_soc_mem_req_ready));
        bufp->chgBit(oldp+3,((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgWData(oldp+4,(vlSymsp->TOP__sim.__PVT__build_soc_mem_rsp_data),128);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q));
        bufp->chgBit(oldp+9,((2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q))));
        bufp->chgBit(oldp+10,(((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                               | (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))));
        bufp->chgBit(oldp+11,(((2U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                               | (6U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)))));
        bufp->chgWData(oldp+12,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q),128);
        bufp->chgBit(oldp+16,((4U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgSData(oldp+17,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q),16);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__build_soc_pending_status));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__build_soc_status_status));
        bufp->chgBit(oldp+20,((3U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
        bufp->chgIData(oldp+21,(vlSymsp->TOP__sim.__PVT__build_soc_wb_dat_r),32);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__start_raw));
        bufp->chgBit(oldp+23,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
                               & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_csr_req_ready) 
                                  & (((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                                      & (0xcU == (0xfcU 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__addr_q)))) 
                                     & vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q)))));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__inflight_q));
        bufp->chgCData(oldp+25,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__opcode_cfg),3);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__desc_cfg),32);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__status_q),8);
        bufp->chgQData(oldp+28,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__cycles_q),64);
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__busy));
        bufp->chgCData(oldp+31,(((IData)(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                  ? 0xfU : 0U)),4);
        bufp->chgQData(oldp+32,(vlSymsp->TOP__sim.__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q),64);
        bufp->chgWData(oldp+34,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__descriptor_q),512);
        bufp->chgCData(oldp+50,((vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q 
                                 >> 0x18U)),8);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__response_count_q),32);
        bufp->chgCData(oldp+53,((0U != vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__request_count_q)),2);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q),3);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__beat_q),2);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__opcode_q),3);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__address_q),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__header_q),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__reserved_q),32);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__outstanding_q));
        bufp->chgCData(oldp+61,(vlSymsp->TOP__sim.__PVT__litex_wishbone_csr_bridge__DOT__state_q),2);
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request));
        bufp->chgBit(oldp+63,((0U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgBit(oldp+64,((7U == (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
        bufp->chgWData(oldp+65,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q),128);
        bufp->chgBit(oldp+69,(((1U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)) 
                               & ((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__invalid_request)) 
                                  & (~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))))));
        bufp->chgBit(oldp+70,(((~ (IData)(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                               & (2U == (IData)(vlSymsp->TOP__sim.__PVT__litex_descriptor_engine__DOT__state_q)))));
        bufp->chgCData(oldp+71,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q),4);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__sim.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+74,((0x7fffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),15);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__sim.__PVT__builder_rhs_self0),30);
        bufp->chgBit(oldp+76,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel))));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__sim.__PVT__builder_rhs_self1),32);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__builder_rhs_self4));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__builder_rhs_self5));
        bufp->chgSData(oldp+80,((0x1ffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                           >> 2U))),9);
        bufp->chgWData(oldp+81,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_dat_w),128);
        bufp->chgSData(oldp+85,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_we),16);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_int_rst));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_ack));
        bufp->chgWData(oldp+88,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_dat_r),128);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_port_cmd_payload_addr),24);
        bufp->chgWData(oldp+93,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata),128);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready0));
        bufp->chgSData(oldp+98,((0x7ffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),11);
        bufp->chgBit(oldp+99,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc));
        bufp->chgCData(oldp+100,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_we),4);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty));
        bufp->chgIData(oldp+122,((0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                              >> 0xbU))),21);
        bufp->chgIData(oldp+123,((((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_di_dirty) 
                                   << 0x15U) | (0x7ffffU 
                                                & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                                   >> 0xbU)))),22);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_we));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_ack));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_cyc));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_clr));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_word_inc));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_write_from_slave));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid14));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready2));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed));
        bufp->chgIData(oldp+134,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0),26);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd));
        __Vtemp_1[0U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
        __Vtemp_1[1U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
        __Vtemp_1[2U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
        __Vtemp_1[3U] = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
        __Vtemp_1[4U] = 0U;
        bufp->chgWData(oldp+141,(__Vtemp_1),130);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3),4);
        bufp->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_wdata_ready1));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_wdata_valid));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished));
        bufp->chgBit(oldp+156,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self5)))));
        bufp->chgIData(oldp+157,((0x3ffffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_self0 
                                                - (IData)(0x800000U)))),26);
        bufp->chgBit(oldp+158,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_ready));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_cmd_valid));
        bufp->chgBit(oldp+160,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc)))));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_ack));
        bufp->chgIData(oldp+162,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),28);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_cyc));
        bufp->chgBit(oldp+164,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                                & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel) 
                                   >> 4U))));
        bufp->chgCData(oldp+165,(vlSymsp->TOP__sim.__PVT__builder_fullmemorywe_next_state),2);
        bufp->chgBit(oldp+166,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3) 
                                & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel) 
                                   >> 5U))));
        bufp->chgSData(oldp+167,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value1),14);
        bufp->chgBit(oldp+168,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1));
        bufp->chgIData(oldp+169,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0),32);
        bufp->chgBit(oldp+170,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value2));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__sim.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value3));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__sim.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid0));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid10));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid11));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid12));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid13));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid5));
        bufp->chgCData(oldp+180,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_next_state),2);
        bufp->chgCData(oldp+181,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_grant),2);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_grant),2);
        bufp->chgCData(oldp+183,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_grant),2);
        bufp->chgCData(oldp+184,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_grant),2);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native0_next_state),2);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native1_next_state),2);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__sim.__PVT__builder_rhs_self3));
        bufp->chgCData(oldp+188,(vlSymsp->TOP__sim.__PVT__builder_slave_sel),6);
        bufp->chgCData(oldp+189,(vlSymsp->TOP__sim.__PVT__builder_wishbone2csr_next_state),2);
        bufp->chgBit(oldp+190,(vlSymsp->TOP__sim.__Vcellinp__litex_wishbone_csr_bridge__rst_ni));
        bufp->chgIData(oldp+191,((0xfffffffU & vlSymsp->TOP__sim.__PVT__builder_rhs_self0)),30);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+193,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self22) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock))))));
        bufp->chgBit(oldp+194,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self25) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock))))));
        bufp->chgBit(oldp+195,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self28) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock))))));
        bufp->chgBit(oldp+196,((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self31) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock))))));
        bufp->chgBit(oldp+197,(((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self4) 
                                & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack)) 
                                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self3)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+198,(vlSymsp->TOP__sim.__PVT__build_soc_cmd_ready));
        bufp->chgWData(oldp+199,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata),128);
        bufp->chgSData(oldp+203,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask),16);
        bufp->chgWData(oldp+204,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w),128);
        bufp->chgSData(oldp+208,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we),16);
        bufp->chgWData(oldp+209,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w),128);
        bufp->chgSData(oldp+213,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we),16);
        bufp->chgWData(oldp+214,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w),128);
        bufp->chgSData(oldp+218,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we),16);
        bufp->chgWData(oldp+219,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w),128);
        bufp->chgSData(oldp+223,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we),16);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_dbus_ack));
        bufp->chgIData(oldp+225,(vlSymsp->TOP__sim.__PVT__builder_shared_dat_r),32);
        bufp->chgBit(oldp+226,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ibus_ack));
        bufp->chgIData(oldp+227,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interrupt),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__sim.__PVT__builder_rhs_self20),22);
        bufp->chgBit(oldp+229,(vlSymsp->TOP__sim.__PVT__builder_rhs_self21));
    }
}

void Vsim___024root__trace_chg_0_sub_11(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1940);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim.__PVT__builder_rhs_self22));
        bufp->chgIData(oldp+1,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self20 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self21))),25);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__sim.__PVT__builder_rhs_self23),22);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__sim.__PVT__builder_rhs_self24));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__sim.__PVT__builder_rhs_self25));
        bufp->chgIData(oldp+5,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self23 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self24))),25);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__sim.__PVT__builder_rhs_self26),22);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__builder_rhs_self27));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__builder_rhs_self28));
        bufp->chgIData(oldp+9,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self26 
                                 << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self27))),25);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__sim.__PVT__builder_rhs_self29),22);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__builder_rhs_self30));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__builder_rhs_self31));
        bufp->chgIData(oldp+13,(((vlSymsp->TOP__sim.__PVT__builder_rhs_self29 
                                  << 1U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self30))),25);
        bufp->chgWData(oldp+14,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata),128);
        bufp->chgSData(oldp+18,((0xffffU & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we)))),16);
        bufp->chgSData(oldp+19,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we),16);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin0_request),3);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin1_request),3);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin2_request),3);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_roundrobin3_request),3);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
    }
    bufp->chgCData(oldp+26,(vlSelf->serial_sink_data),8);
    bufp->chgBit(oldp+27,(vlSelf->serial_sink_ready));
    bufp->chgBit(oldp+28,(vlSelf->serial_sink_valid));
    bufp->chgCData(oldp+29,(vlSelf->serial_source_data),8);
    bufp->chgBit(oldp+30,(vlSelf->serial_source_ready));
    bufp->chgBit(oldp+31,(vlSelf->serial_source_valid));
    bufp->chgBit(oldp+32,(vlSelf->sim_trace));
    bufp->chgBit(oldp+33,(vlSelf->sys_clk));
    bufp->chgSData(oldp+34,(vlSelf->serial_sink_data),10);
    bufp->chgBit(oldp+35,(((IData)(vlSelf->serial_sink_valid) 
                           & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)))));
    bufp->chgBit(oldp+36,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_enable_storage) 
                           & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_pending_status))));
    bufp->chgIData(oldp+37,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
    bufp->chgIData(oldp+38,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
    bufp->chgIData(oldp+39,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
    bufp->chgBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
    bufp->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
    bufp->chgBit(oldp+42,((vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                           >> 0x1fU)));
    bufp->chgBit(oldp+43,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
    bufp->chgBit(oldp+44,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
    bufp->chgCData(oldp+45,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->chgIData(oldp+46,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->chgCData(oldp+47,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
    bufp->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
    bufp->chgIData(oldp+50,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->chgIData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->chgIData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->chgIData(oldp+53,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->chgIData(oldp+54,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->chgIData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->chgIData(oldp+56,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->chgIData(oldp+57,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->chgIData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->chgIData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->chgIData(oldp+60,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->chgIData(oldp+61,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->chgIData(oldp+62,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->chgIData(oldp+63,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->chgIData(oldp+64,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->chgIData(oldp+65,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->chgIData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->chgIData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->chgIData(oldp+68,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->chgIData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->chgIData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->chgIData(oldp+71,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->chgIData(oldp+72,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->chgIData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->chgIData(oldp+74,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->chgIData(oldp+75,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->chgIData(oldp+76,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->chgIData(oldp+77,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->chgIData(oldp+78,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->chgIData(oldp+79,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->chgIData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->chgIData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
    bufp->chgBit(oldp+82,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
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
