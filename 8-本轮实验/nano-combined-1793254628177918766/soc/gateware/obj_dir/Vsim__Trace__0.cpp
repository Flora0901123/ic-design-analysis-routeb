// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim___024root__trace_chg_0_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_7(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_8(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_9(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_10(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_0_sub_11(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsim___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_2((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_3((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_4((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_5((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_6((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_7((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_8((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_9((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_10((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_0_sub_11((&vlSymsp->TOP), bufp);
}

void Vsim___024root__trace_chg_0_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce));
        bufp->chgCData(oldp+1,(vlSymsp->TOP__sim.__PVT__builder_rhs_self7),2);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_act_n));
        bufp->chgWData(oldp+3,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata),128);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata_valid));
        bufp->chgCData(oldp+8,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_increment),5);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce));
        bufp->chgCData(oldp+10,(vlSymsp->TOP__sim.__PVT__mem[0]),8);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__sim.__PVT__mem[1]),8);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__sim.__PVT__mem[2]),8);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__sim.__PVT__mem[3]),8);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__sim.__PVT__mem[4]),8);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__sim.__PVT__mem[5]),8);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__sim.__PVT__mem[6]),8);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__sim.__PVT__mem[7]),8);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__sim.__PVT__mem[8]),8);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__sim.__PVT__mem[9]),8);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__sim.__PVT__mem[10]),8);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__sim.__PVT__mem[11]),8);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__sim.__PVT__mem[12]),8);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__sim.__PVT__mem[13]),8);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__sim.__PVT__mem[14]),8);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__sim.__PVT__mem[15]),8);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__sim.__PVT__mem[16]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isMoving));
        bufp->chgBit(oldp+33,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isMoving))));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isMoving));
        bufp->chgBit(oldp+37,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isMoving))));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isMoving));
        bufp->chgBit(oldp+41,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isMoving))));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
        bufp->chgBit(oldp+44,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) 
                               | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                          << 3U) | 
                                         (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
        bufp->chgBit(oldp+45,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
        bufp->chgBit(oldp+48,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                       << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
        bufp->chgIData(oldp+50,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                      ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                          ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                          : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_fire));
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_Fetcher_l131));
        bufp->chgBit(oldp+56,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready))));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
        bufp->chgBit(oldp+58,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_Fetcher_l131)))));
        bufp->chgBit(oldp+59,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid))));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
        bufp->chgBit(oldp+64,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                       << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l985));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
        bufp->chgCData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1019));
        bufp->chgBit(oldp+72,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+73,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0))));
        bufp->chgCData(oldp+74,((0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1))),8);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__build_soc_clear));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_aborted));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_activates0));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_activates1));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_activates2));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_activates3));
        bufp->chgCData(oldp+83,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_adr_offset_r),2);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write0));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write1));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write2));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write3));
        bufp->chgSData(oldp+88,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0),9);
        bufp->chgSData(oldp+89,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col1),9);
        bufp->chgSData(oldp+90,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col2),9);
        bufp->chgSData(oldp+91,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col3),9);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_activate));
        bufp->chgSData(oldp+93,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row),13);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_active));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_precharge));
        bufp->chgIData(oldp+96,((0x3fffffU & ((0x7fffffU 
                                               & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                                              | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)))),22);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read));
        bufp->chgSData(oldp+98,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col),9);
        bufp->chgWData(oldp+99,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_data),128);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr),22);
        bufp->chgWData(oldp+104,(vlSymsp->TOP__sim.__PVT__mem_1
                                 [vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr]),128);
        bufp->chgSData(oldp+108,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row),13);
        bufp->chgIData(oldp+109,((0x3fffffU & ((0x7fffffU 
                                                & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0)))),22);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr),22);
        bufp->chgWData(oldp+111,(vlSymsp->TOP__sim.__PVT__mem_1
                                 [vlSymsp->TOP__sim.__PVT__mem_1_adr0]),128);
        bufp->chgBit(oldp+115,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_activate));
        bufp->chgSData(oldp+116,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_activate_row),13);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_active));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_precharge));
        bufp->chgIData(oldp+119,((0x3fffffU & ((0x7fffffU 
                                                & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_col)))),22);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read));
        bufp->chgSData(oldp+121,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_col),9);
        bufp->chgWData(oldp+122,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_data),128);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr),22);
        bufp->chgWData(oldp+127,(vlSymsp->TOP__sim.__PVT__mem_2
                                 [vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr]),128);
        bufp->chgSData(oldp+131,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row),13);
        bufp->chgIData(oldp+132,((0x3fffffU & ((0x7fffffU 
                                                & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col1)))),22);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr),22);
        bufp->chgWData(oldp+134,(vlSymsp->TOP__sim.__PVT__mem_2
                                 [vlSymsp->TOP__sim.__PVT__mem_2_adr0]),128);
        bufp->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_activate));
        bufp->chgSData(oldp+139,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_activate_row),13);
        bufp->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_active));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_precharge));
        bufp->chgIData(oldp+142,((0x3fffffU & ((0x7fffffU 
                                                & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_col)))),22);
        bufp->chgBit(oldp+143,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read));
        bufp->chgSData(oldp+144,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_col),9);
        bufp->chgWData(oldp+145,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_data),128);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr),22);
        bufp->chgWData(oldp+150,(vlSymsp->TOP__sim.__PVT__mem_3
                                 [vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr]),128);
        bufp->chgSData(oldp+154,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row),13);
        bufp->chgIData(oldp+155,((0x3fffffU & ((0x7fffffU 
                                                & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col2)))),22);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr),22);
        bufp->chgWData(oldp+157,(vlSymsp->TOP__sim.__PVT__mem_3
                                 [vlSymsp->TOP__sim.__PVT__mem_3_adr0]),128);
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_activate));
        bufp->chgSData(oldp+162,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_activate_row),13);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_active));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_precharge));
        bufp->chgIData(oldp+165,((0x3fffffU & ((0x7fffffU 
                                                & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_col)))),22);
        bufp->chgBit(oldp+166,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read));
        bufp->chgSData(oldp+167,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_col),9);
        bufp->chgWData(oldp+168,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_data),128);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr),22);
        bufp->chgWData(oldp+173,(vlSymsp->TOP__sim.__PVT__mem_4
                                 [vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr]),128);
        bufp->chgSData(oldp+177,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row),13);
        bufp->chgIData(oldp+178,((0x3fffffU & ((0x7fffffU 
                                                & VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col3)))),22);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr),22);
        bufp->chgWData(oldp+180,(vlSymsp->TOP__sim.__PVT__mem_4
                                 [vlSymsp->TOP__sim.__PVT__mem_4_adr0]),128);
        bufp->chgBit(oldp+184,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read) 
                                | ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read) 
                                   | ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read) 
                                      | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read))))));
        __Vtemp_3[0U] = (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] 
                         | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] 
                            | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] 
                               | vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U])));
        __Vtemp_3[1U] = (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] 
                         | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] 
                            | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] 
                               | vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U])));
        __Vtemp_3[2U] = (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] 
                         | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] 
                            | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] 
                               | vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U])));
        __Vtemp_3[3U] = (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] 
                         | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] 
                            | (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] 
                               | vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U])));
        bufp->chgWData(oldp+185,(__Vtemp_3),128);
        bufp->chgBit(oldp+189,(vlSymsp->TOP__sim.__PVT__builder_error));
        bufp->chgIData(oldp+190,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bus_errors),32);
        bufp->chgBit(oldp+191,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bus_errors_re));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_bus_errors_we));
        bufp->chgIData(oldp+193,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
        bufp->chgBit(oldp+194,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack));
        bufp->chgCData(oldp+195,(vlSymsp->TOP__sim.__PVT__builder_rhs_self6),3);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__sim.__PVT__builder_rhs_self2),4);
        bufp->chgBit(oldp+197,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reset_storage) 
                                      >> 1U))));
        bufp->chgWData(oldp+198,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_data_port_dat_r),128);
        bufp->chgIData(oldp+202,((((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                    ? ((0xffffffe0U 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                       | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                          << 2U)) : 
                                   (0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                  >> 2U)),30);
    }
}

void Vsim___024root__trace_chg_0_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 204);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+0,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                 ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                     ? 7U : 2U) : 0U)),3);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
        bufp->chgIData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL),4);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
        bufp->chgSData(oldp+5,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_address),13);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank),2);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_cke));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_odt));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n));
        bufp->chgWData(oldp+12,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read_data3),128);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read3));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_dfiphasemodel_activate));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_dfiphasemodel_read));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_dfiphasemodel_write));
        bufp->chgIData(oldp+25,(((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 2U)) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
        bufp->chgCData(oldp+26,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                  ? 7U : 2U)),3);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_cyc));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_stb));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_we));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_is_ongoing));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read0));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read1));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read2));
        bufp->chgWData(oldp+36,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read_data0),128);
        bufp->chgWData(oldp+40,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read_data1),128);
        bufp->chgWData(oldp+44,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_new_banks_read_data2),128);
        bufp->chgBit(oldp+48,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_we)))));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_port_cmd_valid));
        bufp->chgBit(oldp+50,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interface_cyc)))));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid4));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_port_wdata_valid));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_precharges0));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_precharges1));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_precharges2));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_precharges3));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack));
        bufp->chgIData(oldp+58,(vlSymsp->TOP__sim.__PVT__sram
                                [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reads0));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reads1));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reads2));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reads3));
        bufp->chgBit(oldp+63,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_soc_rst) 
                               | ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reset_storage) 
                                  >> 1U))));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reset_re));
        bufp->chgCData(oldp+65,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reset_storage),2);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_scratch_re));
        bufp->chgIData(oldp+67,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_scratch_storage),32);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_address_re));
        bufp->chgSData(oldp+69,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_address_storage),13);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_baddress_re));
        bufp->chgCData(oldp+71,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_baddress_storage),2);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge));
        bufp->chgSData(oldp+73,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a),13);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid));
        bufp->chgCData(oldp+82,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume),3);
        bufp->chgBit(oldp+83,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
                                     >> 0x17U))));
        bufp->chgBit(oldp+84,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
                                     >> 0x18U))));
        bufp->chgIData(oldp+85,((0x3fffffU & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
                                              >> 1U))),22);
        bufp->chgBit(oldp+86,((1U & vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r)));
        bufp->chgCData(oldp+87,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level),4);
        bufp->chgBit(oldp+88,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level))));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_first));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_last));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr),22);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid));
        bufp->chgCData(oldp+94,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce),3);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r),25);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_valid));
        bufp->chgBit(oldp+98,((8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level))));
        bufp->chgSData(oldp+99,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row),13);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened));
        bufp->chgCData(oldp+105,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count),3);
        bufp->chgBit(oldp+106,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid));
        bufp->chgCData(oldp+108,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count),3);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready));
        bufp->chgCData(oldp+110,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count),3);
        bufp->chgBit(oldp+111,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready));
        bufp->chgBit(oldp+112,(((IData)(vlSymsp->TOP__sim.__VdfgTmp_h0bc4cdaf__0) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write))));
        bufp->chgCData(oldp+113,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr),3);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__sim.__PVT__storage_2_dat0),25);
        bufp->chgBit(oldp+115,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge));
        bufp->chgSData(oldp+116,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a),13);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid));
        bufp->chgCData(oldp+125,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume),3);
        bufp->chgBit(oldp+126,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
                                      >> 0x17U))));
        bufp->chgBit(oldp+127,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
                                      >> 0x18U))));
        bufp->chgIData(oldp+128,((0x3fffffU & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
                                               >> 1U))),22);
        bufp->chgBit(oldp+129,((1U & vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r)));
        bufp->chgCData(oldp+130,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level),4);
        bufp->chgBit(oldp+131,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level))));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_first));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_last));
        bufp->chgIData(oldp+134,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr),22);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid));
        bufp->chgCData(oldp+137,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce),3);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r),25);
        bufp->chgBit(oldp+139,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt));
        bufp->chgBit(oldp+140,((8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level))));
        bufp->chgSData(oldp+141,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row),13);
        bufp->chgBit(oldp+142,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened));
        bufp->chgCData(oldp+147,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count),3);
        bufp->chgBit(oldp+148,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count),3);
        bufp->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready));
        bufp->chgCData(oldp+152,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count),3);
        bufp->chgBit(oldp+153,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready));
        bufp->chgBit(oldp+154,(((IData)(vlSymsp->TOP__sim.__VdfgTmp_hf3ab4187__0) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write))));
        bufp->chgCData(oldp+155,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr),3);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__sim.__PVT__storage_3_dat0),25);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge));
        bufp->chgSData(oldp+158,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a),13);
        bufp->chgBit(oldp+159,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid));
        bufp->chgCData(oldp+167,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume),3);
        bufp->chgBit(oldp+168,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
                                      >> 0x17U))));
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
                                      >> 0x18U))));
        bufp->chgIData(oldp+170,((0x3fffffU & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
                                               >> 1U))),22);
        bufp->chgBit(oldp+171,((1U & vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r)));
        bufp->chgCData(oldp+172,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level),4);
        bufp->chgBit(oldp+173,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level))));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_first));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_last));
        bufp->chgIData(oldp+176,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr),22);
        bufp->chgBit(oldp+177,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid));
        bufp->chgCData(oldp+179,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce),3);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r),25);
        bufp->chgBit(oldp+181,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt));
        bufp->chgBit(oldp+182,((8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level))));
        bufp->chgSData(oldp+183,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row),13);
        bufp->chgBit(oldp+184,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened));
        bufp->chgCData(oldp+189,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count),3);
        bufp->chgBit(oldp+190,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid));
        bufp->chgCData(oldp+192,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count),3);
        bufp->chgBit(oldp+193,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready));
        bufp->chgCData(oldp+194,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count),3);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready));
        bufp->chgBit(oldp+196,(((IData)(vlSymsp->TOP__sim.__VdfgTmp_hf611e082__0) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write))));
        bufp->chgCData(oldp+197,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr),3);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__sim.__PVT__storage_4_dat0),25);
        bufp->chgBit(oldp+199,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge));
        bufp->chgSData(oldp+200,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a),13);
        bufp->chgBit(oldp+201,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid));
        bufp->chgCData(oldp+209,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume),3);
        bufp->chgBit(oldp+210,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
                                      >> 0x17U))));
        bufp->chgBit(oldp+211,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
                                      >> 0x18U))));
        bufp->chgIData(oldp+212,((0x3fffffU & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
                                               >> 1U))),22);
        bufp->chgBit(oldp+213,((1U & vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r)));
    }
}

void Vsim___024root__trace_chg_0_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 418);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level),4);
        bufp->chgBit(oldp+1,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level))));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_first));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_last));
        bufp->chgIData(oldp+4,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr),22);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid));
        bufp->chgCData(oldp+7,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce),3);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r),25);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt));
        bufp->chgBit(oldp+10,((8U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level))));
        bufp->chgSData(oldp+11,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row),13);
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened));
        bufp->chgCData(oldp+17,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count),3);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid));
        bufp->chgCData(oldp+20,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count),3);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready));
        bufp->chgCData(oldp+22,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count),3);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready));
        bufp->chgBit(oldp+24,(((IData)(vlSymsp->TOP__sim.__VdfgTmp_h5a540cc0__0) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write))));
        bufp->chgCData(oldp+25,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr),3);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__sim.__PVT__storage_5_dat0),25);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready));
        bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self8)))));
        bufp->chgSData(oldp+29,(vlSymsp->TOP__sim.__PVT__builder_rhs_self9),13);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__sim.__PVT__builder_rhs_self10),2);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__builder_rhs_self13));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim.__PVT__builder_rhs_self11));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__builder_rhs_self12));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__builder_rhs_self8));
        bufp->chgCData(oldp+38,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant),2);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids),4);
        bufp->chgBit(oldp+40,((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self14)) 
                                     | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)))));
        bufp->chgSData(oldp+41,(vlSymsp->TOP__sim.__PVT__builder_rhs_self15),13);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__sim.__PVT__builder_rhs_self16),2);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__sim.__PVT__builder_rhs_self19));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim.__PVT__builder_rhs_self17));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__builder_rhs_self18));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__builder_rhs_self14));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant),2);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids),4);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_storage) 
                                     >> 1U))));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_last));
        bufp->chgSData(oldp+58,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a),13);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba),2);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_cmd_ready));
        bufp->chgBit(oldp+64,((1U & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_issue_re));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_issue_we));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_re));
        bufp->chgCData(oldp+68,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage),8);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n));
        bufp->chgWData(oldp+74,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata),128);
        bufp->chgBit(oldp+78,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_issue_re) 
                               & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                  >> 5U))));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_storage) 
                                     >> 3U))));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n));
        bufp->chgWData(oldp+82,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage),128);
        bufp->chgBit(oldp+86,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_issue_re) 
                               & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                  >> 4U))));
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                     >> 2U))));
        bufp->chgBit(oldp+88,((1U & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage))));
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                     >> 7U))));
        bufp->chgBit(oldp+90,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                     >> 6U))));
        bufp->chgBit(oldp+91,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                     >> 3U))));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                     >> 5U))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                     >> 1U))));
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                     >> 4U))));
        bufp->chgSData(oldp+95,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address),13);
        bufp->chgCData(oldp+96,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank),2);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_en0));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_en1));
        bufp->chgBit(oldp+106,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt) 
                                & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt) 
                                   & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt))))));
        bufp->chgBit(oldp+107,((0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_time0))));
        bufp->chgBit(oldp+108,((0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_time1))));
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_storage) 
                                      >> 2U))));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_postponer_count));
        bufp->chgBit(oldp+111,((0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_timer_count1))));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_postponer_req_o));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_re));
        bufp->chgWData(oldp+115,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status),128);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_we));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_re));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_read_available));
        bufp->chgBit(oldp+122,((1U & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_storage))));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_sequencer_count));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_sequencer_done0));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_sequencer_start1));
        bufp->chgCData(oldp+128,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger),4);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_steerer0),2);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_storage),4);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_tccdcon_count));
        bufp->chgBit(oldp+132,(((IData)(vlSymsp->TOP__sim.__VdfgTmp_h6f2610d2__0) 
                                & ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self17) 
                                   | (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self18)))));
        bufp->chgBit(oldp+133,(((IData)(vlSymsp->TOP__sim.__VdfgTmp_h6f2610d2__0) 
                                & ((~ ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas) 
                                       | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we))) 
                                   & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras)))));
        bufp->chgCData(oldp+134,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_time0),5);
        bufp->chgCData(oldp+135,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_time1),4);
        bufp->chgSData(oldp+136,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_timer_count1),10);
        bufp->chgBit(oldp+137,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_timer_count1))));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_trrdcon_count));
        bufp->chgCData(oldp+139,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_twtrcon_count),3);
        bufp->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready));
        bufp->chgBit(oldp+141,(((IData)(vlSymsp->TOP__sim.__VdfgTmp_h6f2610d2__0) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_self18))));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_re));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_write_available));
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                                      >> 8U))));
        bufp->chgBit(oldp+145,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                                      >> 9U))));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_soc_rst));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                      >> 0x15U))));
        bufp->chgIData(oldp+148,((0x1fffffU & vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_dat_r)),21);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_tag_port_dat_r),22);
        bufp->chgBit(oldp+150,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_en_re));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_en_storage));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_enable_re));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_enable_storage));
        bufp->chgBit(oldp+154,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_enable_storage) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_pending_status))));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_load_re));
        bufp->chgIData(oldp+156,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_load_storage),32);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_pending_r));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_pending_re));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_pending_status));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_pending_we));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_reload_re));
        bufp->chgIData(oldp+162,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_reload_storage),32);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_status_re));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_status_status));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_status_we));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_update_value_re));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_update_value_storage));
        bufp->chgIData(oldp+168,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_value),32);
        bufp->chgBit(oldp+169,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_value_re));
        bufp->chgIData(oldp+170,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_value_status),32);
        bufp->chgBit(oldp+171,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_value_we));
        bufp->chgBit(oldp+172,((0U == vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_value)));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_zero_pending));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_zero_clear));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_timer_zero_trigger_d));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_re));
        bufp->chgCData(oldp+177,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_storage),2);
        bufp->chgBit(oldp+178,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_pending_status) 
                                       & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_storage)) 
                                      | (((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_pending_status) 
                                          & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_storage)) 
                                         >> 1U)))));
        bufp->chgCData(oldp+179,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_pending_r),2);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_pending_re));
        bufp->chgCData(oldp+181,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_pending_status),2);
        bufp->chgBit(oldp+182,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_pending_we));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_pending));
        bufp->chgBit(oldp+185,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_storage) 
                                      >> 1U))));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_clear));
        bufp->chgCData(oldp+187,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume),4);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read));
        bufp->chgBit(oldp+189,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                                      >> 8U))));
        bufp->chgBit(oldp+190,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                                      >> 9U))));
        bufp->chgCData(oldp+191,((0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1))),8);
    }
}

void Vsim___024root__trace_chg_0_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 610);
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_19;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0),5);
        bufp->chgCData(oldp+1,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0) 
                                         + (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)))),5);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce),4);
        bufp->chgSData(oldp+3,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re));
        bufp->chgBit(oldp+5,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0))));
        bufp->chgCData(oldp+6,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr),4);
        bufp->chgSData(oldp+7,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_trigger_d));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxempty_re));
        bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)))));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxempty_we));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxfull_re));
        bufp->chgBit(oldp+13,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0))));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxfull_we));
        bufp->chgCData(oldp+15,((0xffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),8);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_re));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_we));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_status_re));
        bufp->chgCData(oldp+19,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_status_status),2);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_status_we));
        bufp->chgBit(oldp+21,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_pending));
        bufp->chgBit(oldp+23,((1U & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_enable_storage))));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_clear));
        bufp->chgCData(oldp+25,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume),4);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0),5);
        bufp->chgCData(oldp+27,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0) 
                                          + (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)))),5);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce),4);
        bufp->chgSData(oldp+29,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
        bufp->chgSData(oldp+30,((0xffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),10);
        bufp->chgBit(oldp+31,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
        bufp->chgCData(oldp+32,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr),4);
        bufp->chgSData(oldp+33,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
        bufp->chgBit(oldp+34,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_rxtx_re) 
                               & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)))));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_trigger_d));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_txempty_re));
        bufp->chgBit(oldp+37,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)))));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txempty_we));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_txfull_re));
        bufp->chgBit(oldp+40,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0))));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txfull_we));
        bufp->chgIData(oldp+42,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r),32);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes0));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes1));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes2));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_writes3));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_q));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_re));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_capture_storage));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_bytes_re));
        bufp->chgQData(oldp+51,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot),64);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we));
        bufp->chgQData(oldp+54,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_count),64);
        bufp->chgCData(oldp+56,((7U & ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL)) 
                                       + ((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                 >> 1U)) 
                                          + ((1U & 
                                              ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                               >> 2U)) 
                                             + (1U 
                                                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL) 
                                                   >> 3U))))))),3);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_bytes_re));
        bufp->chgQData(oldp+58,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot),64);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we));
        bufp->chgQData(oldp+61,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_count),64);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_bytes_re));
        bufp->chgQData(oldp+64,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot),64);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we));
        bufp->chgQData(oldp+67,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_count),64);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_reset_re));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_reset_storage));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__build_soc_enable_storage));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__build_soc_enable_re));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__build_soc_pending_r));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim.__PVT__build_soc_pending_re));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_pending_we));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__build_soc_status_re));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_status_we));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_aborted));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_dram_bridge_is_ongoing));
        bufp->chgIData(oldp+80,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr),26);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel),4);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we));
        bufp->chgCData(oldp+86,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk),4);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid));
        bufp->chgBit(oldp+88,((0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
        bufp->chgBit(oldp+89,((3U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))));
        bufp->chgCData(oldp+90,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux),2);
        bufp->chgBit(oldp+91,(((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                                ? (1U & vlSymsp->TOP__sim.__PVT__storage_6
                                   [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U])
                                : 0U)));
        bufp->chgBit(oldp+92,((1U & (((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                                       ? vlSymsp->TOP__sim.__PVT__storage_6
                                      [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U]
                                       : 0U) >> 1U))));
        bufp->chgWData(oldp+93,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data),128);
        bufp->chgBit(oldp+97,(((3U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready))));
        bufp->chgBit(oldp+98,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level))));
        bufp->chgBit(oldp+99,((((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                                 ? vlSymsp->TOP__sim.__PVT__storage_6
                                [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U]
                                 : 0U) & (0U == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)))));
        bufp->chgBit(oldp+100,(((((2U >= (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))
                                   ? vlSymsp->TOP__sim.__PVT__storage_6
                                  [vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U]
                                   : 0U) >> 1U) & (3U 
                                                   == (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)))));
        bufp->chgIData(oldp+101,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data),32);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready));
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
        bufp->chgWData(oldp+103,(__Vtemp_16),128);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume),2);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read));
        bufp->chgCData(oldp+109,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level),2);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce),2);
        bufp->chgWData(oldp+111,(__Vtemp_19),130);
        bufp->chgBit(oldp+116,((3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level))));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid9));
        bufp->chgCData(oldp+118,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr),2);
        bufp->chgWData(oldp+119,(vlSymsp->TOP__sim.__PVT__storage_6_dat0),130);
        bufp->chgBit(oldp+124,(((IData)(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid9) 
                                & (3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)))));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked));
        bufp->chgCData(oldp+128,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel),4);
        bufp->chgWData(oldp+129,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data),128);
        bufp->chgSData(oldp+133,(((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we) 
                                  & (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel))),16);
        bufp->chgBit(oldp+134,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_first));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_last));
        bufp->chgWData(oldp+137,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data),128);
        bufp->chgSData(oldp+141,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we),16);
        bufp->chgBit(oldp+142,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid));
        bufp->chgCData(oldp+143,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk),4);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid));
        bufp->chgCData(oldp+145,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux),2);
        bufp->chgQData(oldp+146,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data),36);
        bufp->chgBit(oldp+148,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last));
        bufp->chgWData(oldp+151,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data),144);
        bufp->chgCData(oldp+156,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count),3);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data),32);
        bufp->chgCData(oldp+158,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we),4);
        bufp->chgSData(oldp+159,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we),16);
        bufp->chgCData(oldp+160,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume),2);
        bufp->chgBit(oldp+161,((1U & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                              >> 0x25U)))));
        bufp->chgIData(oldp+163,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r)),32);
        bufp->chgCData(oldp+164,((0xfU & (IData)((vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+165,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level),2);
        bufp->chgCData(oldp+166,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce),2);
        bufp->chgQData(oldp+167,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r),38);
        bufp->chgBit(oldp+169,((3U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level))));
        bufp->chgBit(oldp+170,((0U != (IData)(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level))));
        bufp->chgCData(oldp+171,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr),2);
        bufp->chgQData(oldp+172,(vlSymsp->TOP__sim.__PVT__storage_7_dat0),38);
        bufp->chgSData(oldp+174,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel),16);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_rdata_payload_data),32);
        bufp->chgBit(oldp+176,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_new_port_rdata_valid));
        bufp->chgIData(oldp+177,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_payload_addr),24);
        bufp->chgBit(oldp+178,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_payload_we));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_port_port_cmd_valid));
        bufp->chgIData(oldp+180,(vlSymsp->TOP__sim.__PVT__build_soc_uncached_wb_dat_r),32);
        bufp->chgQData(oldp+181,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles),64);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_re));
        bufp->chgQData(oldp+184,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status),64);
        bufp->chgBit(oldp+186,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_latch_re));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__sim.__PVT__build_soc_uptime_latch_storage));
        bufp->chgIData(oldp+189,(vlSymsp->TOP__sim.__PVT__builder_count),20);
        bufp->chgCData(oldp+190,((0x1fU & (IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr))),5);
        bufp->chgBit(oldp+191,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_pending_re));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_ev_status_re));
        bufp->chgBit(oldp+195,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                                >> 9U)))));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_capture0_re));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_capture0_we));
        bufp->chgIData(oldp+198,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w),32);
        bufp->chgBit(oldp+199,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re));
        bufp->chgIData(oldp+200,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot)),32);
        bufp->chgBit(oldp+201,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re));
    }
}

void Vsim___024root__trace_chg_0_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 812);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+0,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dbus_snapshot 
                                        >> 0x20U))),32);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re));
        bufp->chgIData(oldp+3,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot)),32);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re));
        bufp->chgIData(oldp+5,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_dma_snapshot 
                                        >> 0x20U))),32);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re));
        bufp->chgIData(oldp+8,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot)),32);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re));
        bufp->chgIData(oldp+10,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_cpu_traffic_ibus_snapshot 
                                         >> 0x20U))),32);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_re));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_we));
        bufp->chgBit(oldp+14,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                               >> 9U)))));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_bus_errors_re));
        bufp->chgCData(oldp+16,((3U & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),2);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reset0_re));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reset0_we));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_scratch0_re));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_scratch0_we));
        bufp->chgBit(oldp+21,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                               >> 9U)))));
        bufp->chgCData(oldp+22,((0xfU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),4);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we));
        bufp->chgSData(oldp+25,((0x1fffU & vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w)),13);
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re));
        bufp->chgIData(oldp+33,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U]),32);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re));
        bufp->chgIData(oldp+35,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U]),32);
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re));
        bufp->chgIData(oldp+38,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U]),32);
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re));
        bufp->chgIData(oldp+41,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U]),32);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re));
        bufp->chgIData(oldp+44,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U]),32);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U]),32);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re));
        bufp->chgIData(oldp+50,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U]),32);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re));
        bufp->chgIData(oldp+53,(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U]),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we));
        bufp->chgBit(oldp+55,((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                               >> 9U)))));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_en0_re));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_en0_we));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_pending_re));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_ev_status_re));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_load0_re));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_load0_we));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_reload0_re));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_reload0_we));
        bufp->chgBit(oldp+66,((5U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                               >> 9U)))));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_update_value0_re));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_update_value0_we));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re));
        bufp->chgIData(oldp+70,((IData)(vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status)),32);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re));
        bufp->chgIData(oldp+72,((IData)((vlSymsp->TOP__sim.__PVT__build_soc_uptime_cycles_status 
                                         >> 0x20U))),32);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank4_value_re));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_pending_re));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_ev_status_re));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxempty_re));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_rxfull_re));
        bufp->chgBit(oldp+83,((6U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                               >> 9U)))));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txempty_re));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank5_txfull_re));
        bufp->chgCData(oldp+86,(((0x10U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                  ? vlSymsp->TOP__sim.__PVT__mem
                                 [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                  : 0U)),8);
        bufp->chgSData(oldp+87,(vlSymsp->TOP__sim.__PVT__builder_interface1_adr),14);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__sim.__PVT__builder_interface1_re));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim.__PVT__builder_interface1_we));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r),32);
        bufp->chgBit(oldp+96,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_interface1_adr) 
                                               >> 9U)))));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r));
        bufp->chgIData(oldp+98,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r),32);
        bufp->chgIData(oldp+99,((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                                 | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                                    | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                                       | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                                          | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                                             | (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r 
                                                | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r))))))),32);
        bufp->chgBit(oldp+100,((0U == vlSymsp->TOP__sim.__PVT__builder_count)));
        bufp->chgCData(oldp+101,(vlSymsp->TOP__sim.__PVT__builder_fullmemorywe_state),2);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim.__PVT__builder_grant));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__sim.__PVT__builder_interface0_ack));
        bufp->chgIData(oldp+104,(vlSymsp->TOP__sim.__PVT__builder_interface0_dat_r),32);
        bufp->chgBit(oldp+105,(vlSymsp->TOP__sim.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0));
        bufp->chgCData(oldp+106,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine0_next_state),3);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine0_state),3);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine1_next_state),3);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine1_state),3);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine2_next_state),3);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine2_state),3);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine3_next_state),3);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_bankmachine3_state),3);
        bufp->chgCData(oldp+114,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_multiplexer_next_state),3);
        bufp->chgCData(oldp+115,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_multiplexer_state),3);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid1));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid2));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid3));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid6));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid7));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_new_master_rdata_valid8));
        bufp->chgCData(oldp+122,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_refresher_next_state),2);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_refresher_state),2);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__sim.__PVT__builder_litedramcore_state),2);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native0_state),2);
        bufp->chgCData(oldp+126,(vlSymsp->TOP__sim.__PVT__builder_litedramwishbone2native1_state),2);
        bufp->chgCData(oldp+127,(vlSymsp->TOP__sim.__PVT__builder_request),2);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__sim.__PVT__builder_self0),2);
        bufp->chgSData(oldp+129,(vlSymsp->TOP__sim.__PVT__builder_self1),13);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__sim.__PVT__builder_self2));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__sim.__PVT__builder_self3));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__sim.__PVT__builder_self4));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__sim.__PVT__builder_self5));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__sim.__PVT__builder_self6));
        bufp->chgCData(oldp+135,(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r),6);
        bufp->chgIData(oldp+136,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col0)))),23);
        bufp->chgIData(oldp+137,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)))),23);
        bufp->chgIData(oldp+138,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col1)))),23);
        bufp->chgIData(oldp+139,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel1_read_col)))),23);
        bufp->chgIData(oldp+140,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col2)))),23);
        bufp->chgIData(oldp+141,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel2_read_col)))),23);
        bufp->chgIData(oldp+142,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bank_write_col3)))),23);
        bufp->chgIData(oldp+143,((0x7fffffU & (VL_SHIFTL_III(23,23,32, (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U) 
                                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_bankmodel3_read_col)))),23);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__sim.__PVT__builder_t_self0));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__sim.__PVT__builder_t_self1));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__sim.__PVT__builder_t_self2));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__builder_t_self3));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__sim.__PVT__builder_t_self4));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__sim.__PVT__builder_t_self5));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__sim.__PVT__builder_wishbone2csr_state),2);
        bufp->chgSData(oldp+151,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__sim.__PVT__mem_adr0),5);
        bufp->chgSData(oldp+153,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
        bufp->chgSData(oldp+154,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
        bufp->chgSData(oldp+155,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
        bufp->chgSData(oldp+156,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
        bufp->chgSData(oldp+157,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
        bufp->chgSData(oldp+158,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
        bufp->chgSData(oldp+159,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
        bufp->chgSData(oldp+160,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
        bufp->chgSData(oldp+161,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
        bufp->chgSData(oldp+162,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
        bufp->chgSData(oldp+163,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
        bufp->chgSData(oldp+164,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
        bufp->chgSData(oldp+165,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
        bufp->chgSData(oldp+166,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
        bufp->chgSData(oldp+167,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
        bufp->chgSData(oldp+168,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
        bufp->chgSData(oldp+169,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
        bufp->chgSData(oldp+170,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
        bufp->chgSData(oldp+171,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
        bufp->chgSData(oldp+172,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
        bufp->chgSData(oldp+173,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
        bufp->chgSData(oldp+174,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
        bufp->chgSData(oldp+175,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
        bufp->chgSData(oldp+176,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
        bufp->chgSData(oldp+177,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
        bufp->chgSData(oldp+178,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
        bufp->chgSData(oldp+179,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
        bufp->chgSData(oldp+180,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
        bufp->chgSData(oldp+181,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
        bufp->chgSData(oldp+182,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
        bufp->chgSData(oldp+183,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
        bufp->chgSData(oldp+184,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__sim.__PVT__mem_1_adr0),22);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__sim.__PVT__mem_2_adr0),22);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__sim.__PVT__mem_3_adr0),22);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__sim.__PVT__mem_4_adr0),22);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__sim.__PVT__storage_2[0]),25);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__sim.__PVT__storage_2[1]),25);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__sim.__PVT__storage_2[2]),25);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__sim.__PVT__storage_2[3]),25);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__sim.__PVT__storage_2[4]),25);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__sim.__PVT__storage_2[5]),25);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__sim.__PVT__storage_2[6]),25);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__sim.__PVT__storage_2[7]),25);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__sim.__PVT__storage_3[0]),25);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__sim.__PVT__storage_3[1]),25);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__sim.__PVT__storage_3[2]),25);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__sim.__PVT__storage_3[3]),25);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__sim.__PVT__storage_3[4]),25);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__sim.__PVT__storage_3[5]),25);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__sim.__PVT__storage_3[6]),25);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__sim.__PVT__storage_3[7]),25);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__sim.__PVT__storage_4[0]),25);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__sim.__PVT__storage_4[1]),25);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__sim.__PVT__storage_4[2]),25);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__sim.__PVT__storage_4[3]),25);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__sim.__PVT__storage_4[4]),25);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__sim.__PVT__storage_4[5]),25);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__sim.__PVT__storage_4[6]),25);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__sim.__PVT__storage_4[7]),25);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__sim.__PVT__storage_5[0]),25);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__sim.__PVT__storage_5[1]),25);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__sim.__PVT__storage_5[2]),25);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__sim.__PVT__storage_5[3]),25);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__sim.__PVT__storage_5[4]),25);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__sim.__PVT__storage_5[5]),25);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__sim.__PVT__storage_5[6]),25);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__sim.__PVT__storage_5[7]),25);
        bufp->chgSData(oldp+221,(vlSymsp->TOP__sim.__PVT__tag_mem_adr0),9);
        bufp->chgWData(oldp+222,(vlSymsp->TOP__sim.__PVT__storage_6[0]),130);
        bufp->chgWData(oldp+227,(vlSymsp->TOP__sim.__PVT__storage_6[1]),130);
        bufp->chgWData(oldp+232,(vlSymsp->TOP__sim.__PVT__storage_6[2]),130);
        bufp->chgQData(oldp+237,(vlSymsp->TOP__sim.__PVT__storage_7[0]),38);
        bufp->chgQData(oldp+239,(vlSymsp->TOP__sim.__PVT__storage_7[1]),38);
        bufp->chgQData(oldp+241,(vlSymsp->TOP__sim.__PVT__storage_7[2]),38);
        bufp->chgSData(oldp+243,(vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0),9);
        bufp->chgSData(oldp+244,(vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0),9);
        bufp->chgSData(oldp+245,(vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0),9);
        bufp->chgSData(oldp+246,(vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0),9);
        bufp->chgSData(oldp+247,(vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0),9);
        bufp->chgSData(oldp+248,(vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0),9);
    }
}

void Vsim___024root__trace_chg_0_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1061);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+0,(vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0),9);
        bufp->chgSData(oldp+1,(vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0),9);
        bufp->chgSData(oldp+2,(vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0),9);
        bufp->chgSData(oldp+3,(vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0),9);
        bufp->chgSData(oldp+4,(vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0),9);
        bufp->chgSData(oldp+5,(vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0),9);
        bufp->chgSData(oldp+6,(vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0),9);
        bufp->chgSData(oldp+7,(vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0),9);
        bufp->chgSData(oldp+8,(vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0),9);
        bufp->chgSData(oldp+9,(vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0),9);
        bufp->chgBit(oldp+10,((1U & VL_REDXOR_4(vlSymsp->TOP__sim.__PVT__builder_rhs_self2))));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
        bufp->chgBit(oldp+12,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2))));
        bufp->chgBit(oldp+13,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready)))));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
        bufp->chgBit(oldp+18,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
        bufp->chgIData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
        bufp->chgBit(oldp+20,((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                               >> 0x1fU)));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
        bufp->chgIData(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
        bufp->chgBit(oldp+25,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
        bufp->chgIData(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
        bufp->chgBit(oldp+28,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                               | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
        bufp->chgBit(oldp+30,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
        bufp->chgIData(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
        bufp->chgBit(oldp+32,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
        bufp->chgIData(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
        bufp->chgIData(oldp+35,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
        bufp->chgIData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
        bufp->chgIData(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
        bufp->chgQData(oldp+53,((0xfffffffffffffULL 
                                 & (((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                     + (((QData)((IData)(
                                                         (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & (VL_SHIFTL_QQI(50,50,32, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH, 0x10U) 
                                                                                >> 0x31U))))))))) 
                                         << 0x32U) 
                                        | (0x3ffffffffffffULL 
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
        bufp->chgQData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
        bufp->chgQData(oldp+57,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        bufp->chgQData(oldp+59,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,17, 
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
        bufp->chgQData(oldp+61,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,17, 
                                                                               (0xffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        bufp->chgIData(oldp+63,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                 * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        bufp->chgIData(oldp+64,((0xfffffffeU & (((3U 
                                                  == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                                  : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                                + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
        bufp->chgBit(oldp+65,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                                != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                  & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0x15U) 
                                         ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                            >> 1U))
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0x15U)
                                          : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 8U)))))));
        bufp->chgIData(oldp+66,((IData)((0x1ffffffffULL 
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
        bufp->chgIData(oldp+67,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
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
        bufp->chgIData(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
        bufp->chgIData(oldp+69,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU)))
                                  ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                      << 0x18U) | (
                                                   (0xff0000U 
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
        bufp->chgBit(oldp+70,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 7U)))));
        bufp->chgBit(oldp+71,((1U & (~ (IData)(((0U 
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
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
        bufp->chgBit(oldp+73,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_150)) 
                               & (0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))));
        bufp->chgBit(oldp+74,((0U == (0x1000U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgBit(oldp+75,((0x2004020U == (0x2004064U 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
        bufp->chgBit(oldp+78,((0x2000030U == (0x2004074U 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgCData(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL),2);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_7));
        bufp->chgCData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL),2);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL),2);
        bufp->chgBit(oldp+83,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_38))));
        bufp->chgBit(oldp+84,((0x4008U == (0x4048U 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
        bufp->chgBit(oldp+86,((0x20U == (0x20U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_70));
        bufp->chgBit(oldp+89,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_84))));
        bufp->chgCData(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC2_CTRL),2);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL),2);
        bufp->chgCData(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL),2);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+96,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
        bufp->chgQData(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
        bufp->chgQData(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
        bufp->chgQData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
        bufp->chgQData(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
        bufp->chgCData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
        bufp->chgIData(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
        bufp->chgIData(oldp+122,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
        bufp->chgCData(oldp+124,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_47));
        bufp->chgBit(oldp+126,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_136))));
    }
}

void Vsim___024root__trace_chg_0_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1188);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
        bufp->chgIData(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
        bufp->chgCData(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
        bufp->chgBit(oldp+16,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_150))));
        bufp->chgBit(oldp+17,((0x24U == (0x64U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA));
        bufp->chgCData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
        bufp->chgBit(oldp+25,((0U != (((0x17U == (0x5fU 
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
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))))));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
        bufp->chgIData(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
        bufp->chgIData(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
        bufp->chgBit(oldp+35,((0U == (0x58U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgBit(oldp+36,((0x1008U == (0x5048U 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
        bufp->chgCData(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_BRANCH_CTRL),2);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_h017d330c__0))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
        bufp->chgBit(oldp+63,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
        bufp->chgIData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
        bufp->chgCData(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
        bufp->chgIData(oldp+75,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
        bufp->chgIData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
        bufp->chgBit(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
        bufp->chgCData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
        bufp->chgBit(oldp+86,(((0U == (((0x17U == (0x5fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                        << 0x14U) | 
                                       (((0x6fU == 
                                          (0x7fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         << 0x13U) 
                                        | (((3U == 
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
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
        bufp->chgIData(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataSignal),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
        bufp->chgBit(oldp+90,((0U == (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                       << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid)))));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
        bufp->chgBit(oldp+95,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
        bufp->chgCData(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_ready));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
        bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
    }
}

void Vsim___024root__trace_chg_0_sub_7(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1298);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
        bufp->chgBit(oldp+1,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
        bufp->chgBit(oldp+2,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
        bufp->chgBit(oldp+4,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        bufp->chgBit(oldp+5,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
        bufp->chgIData(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid))));
        bufp->chgBit(oldp+18,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
        bufp->chgBit(oldp+19,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
        bufp->chgIData(oldp+20,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                  : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
        bufp->chgIData(oldp+21,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                  : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
        bufp->chgCData(oldp+22,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                  ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                  : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                  ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                  : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
        bufp->chgBit(oldp+24,(((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))) 
                               || (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last))));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
        bufp->chgIData(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
        bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
        bufp->chgIData(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
        bufp->chgCData(oldp+35,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0xcU))),2);
        bufp->chgBit(oldp+36,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid))));
        bufp->chgBit(oldp+37,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid)) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
        bufp->chgBit(oldp+39,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
        bufp->chgCData(oldp+40,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
        bufp->chgCData(oldp+41,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                          >> 8U))),8);
        bufp->chgCData(oldp+42,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+43,((vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                 >> 0x18U)),8);
        bufp->chgIData(oldp+44,(((0xffff0000U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__VdfgTmp_he4444737__0))),32);
        bufp->chgCData(oldp+45,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 0xcU))),2);
        bufp->chgIData(oldp+46,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
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
        bufp->chgBit(oldp+47,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                               >> 7U)))));
        bufp->chgCData(oldp+48,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+49,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
        bufp->chgIData(oldp+52,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                     & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                         | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                      : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                         ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
        bufp->chgCData(oldp+53,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackWrites_valid));
        bufp->chgCData(oldp+58,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                          >> 7U))),5);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
        bufp->chgCData(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
        bufp->chgBit(oldp+63,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                               == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))));
        bufp->chgBit(oldp+64,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                               == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))));
        bufp->chgBit(oldp+65,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U)) == 
                               (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+66,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U)) == 
                               (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
        bufp->chgBit(oldp+75,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
        bufp->chgBit(oldp+76,((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_136))));
        bufp->chgBit(oldp+77,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_47)))));
        bufp->chgBit(oldp+78,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
        bufp->chgCData(oldp+80,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                               & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                   ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0x15U) ^ 
                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                       >> 1U)) : ((2U 
                                                   == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                   ? 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 8U))))));
        bufp->chgIData(oldp+82,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                  : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
        bufp->chgIData(oldp+84,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                 + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_misa_base),2);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_misa_extensions),26);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
        bufp->chgCData(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
        bufp->chgIData(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mscratch),32);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
        bufp->chgCData(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
        bufp->chgQData(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
        bufp->chgQData(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
        bufp->chgCData(oldp+108,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
        bufp->chgCData(oldp+111,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952_1));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l952_2));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_lastStageWasWfi));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
        bufp->chgBit(oldp+120,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                        << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1064));
        bufp->chgCData(oldp+122,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1108));
        bufp->chgBit(oldp+125,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake)))));
        bufp->chgBit(oldp+126,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1064) 
                                        << 2U) | ((
                                                   ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                                    & (1U 
                                                       == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                                     & (1U 
                                                        == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))))))));
        bufp->chgBit(oldp+127,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                        << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid)))));
    }
}

void Vsim___024root__trace_chg_0_sub_8(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_0_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1426);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
        bufp->chgBit(oldp+1,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                              & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1144));
        bufp->chgBit(oldp+3,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE))));
        bufp->chgBit(oldp+4,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE))));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
        bufp->chgBit(oldp+6,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                              & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE)))));
        bufp->chgBit(oldp+7,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                    >> 0xdU))));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176));
        bufp->chgSData(oldp+9,((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x14U)),12);
        bufp->chgBit(oldp+10,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU))) 
                               || (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU))))));
        bufp->chgBit(oldp+11,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0xcU)))));
        bufp->chgSData(oldp+12,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
        bufp->chgSData(oldp+13,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
        bufp->chgIData(oldp+14,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
        bufp->chgIData(oldp+15,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
        __Vtemp_2[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp_2[1U] = (((- (IData)((1U & (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
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
        bufp->chgWData(oldp+18,(__Vtemp_6),66);
        bufp->chgBit(oldp+21,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid))));
        bufp->chgQData(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
        bufp->chgWData(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
        bufp->chgCData(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
        bufp->chgBit(oldp+33,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        bufp->chgBit(oldp+34,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
        bufp->chgBit(oldp+36,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        bufp->chgIData(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
        bufp->chgBit(oldp+39,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
        bufp->chgQData(oldp+40,((((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U])) 
                                  << 1U) | (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                                       >> 0x1fU))))))),33);
        bufp->chgQData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
        bufp->chgIData(oldp+44,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                >> 0x20U)))
                                  ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator[0U] 
                                      << 1U) | (1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1 
                                                           >> 0x1fU))))
                                  : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
        bufp->chgIData(oldp+45,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                  << 1U) | (1U & (~ (IData)(
                                                            (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                             >> 0x20U)))))),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
        bufp->chgBit(oldp+47,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
        bufp->chgBit(oldp+48,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3857));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3858));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3859));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3860));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_769));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_832));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2816));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2944));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2818));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_2946));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3072));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3200));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3074));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3202));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
        bufp->chgBit(oldp+73,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1176)))));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
        bufp->chgQData(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ENV_CTRL_string),40);
        bufp->chgWData(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
        bufp->chgQData(oldp+80,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                  ? 0x584f525f31ULL
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                      ? 0x4f525f3120ULL
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_BITWISE_CTRL))
                                          ? 0x414e445f31ULL
                                          : 0x3f3f3f3f3fULL)))),40);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC2_CTRL_string),24);
        bufp->chgQData(oldp+83,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                  ? 0x4144445f53554220ULL
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                      ? 0x534c545f534c5455ULL
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_ALU_CTRL))
                                          ? 0x4249545749534520ULL
                                          : 0x3f3f3f3f3f3f3f3fULL)))),64);
        bufp->chgWData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        bufp->chgQData(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_ENV_CTRL_string),40);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_ENV_CTRL_string),40);
        bufp->chgQData(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_ENV_CTRL_string),40);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BRANCH_CTRL_string),32);
        bufp->chgWData(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        bufp->chgWData(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC2_CTRL_string),24);
        bufp->chgWData(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
        bufp->chgQData(oldp+105,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                   ? 0x4144445f53554220ULL
                                   : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                       ? 0x534c545f534c5455ULL
                                       : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                           ? 0x4249545749534520ULL
                                           : 0x3f3f3f3f3f3f3f3fULL)))),64);
        bufp->chgQData(oldp+107,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                   ? 0x584f525f31ULL
                                   : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                       ? 0x4f525f3120ULL
                                       : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                           ? 0x414e445f31ULL
                                           : 0x3f3f3f3f3fULL)))),40);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_BRANCH_CTRL_string),32);
        bufp->chgWData(oldp+110,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL_string),24);
        bufp->chgWData(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        bufp->chgWData(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL_string),32);
        bufp->chgQData(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL_string),40);
        bufp->chgQData(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL_string),40);
        bufp->chgQData(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL_string),40);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
        bufp->chgIData(oldp+129,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
        bufp->chgCData(oldp+132,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
        bufp->chgBit(oldp+133,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                         >> 7U)))));
        bufp->chgBit(oldp+134,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
        bufp->chgBit(oldp+137,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
        bufp->chgCData(oldp+139,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
        bufp->chgBit(oldp+140,((1U & ((~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                          >> 7U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))));
        bufp->chgCData(oldp+141,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                            ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                               >> 5U)
                                            : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                      >> 7U))));
        bufp->chgIData(oldp+143,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+144,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                             >> 2U)) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
        bufp->chgBit(oldp+145,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
        bufp->chgBit(oldp+146,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                      >> 1U))));
        bufp->chgIData(oldp+148,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                              >> 2U))),20);
        bufp->chgBit(oldp+149,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
        bufp->chgCData(oldp+159,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
        bufp->chgCData(oldp+162,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
        bufp->chgIData(oldp+165,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
        bufp->chgBit(oldp+166,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
        bufp->chgCData(oldp+168,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
    }
}
