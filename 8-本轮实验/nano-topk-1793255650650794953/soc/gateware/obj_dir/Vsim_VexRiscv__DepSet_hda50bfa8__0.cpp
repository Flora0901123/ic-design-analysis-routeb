// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"

VL_INLINE_OPT void Vsim_VexRiscv___ico_sequent__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ico_sequent__TOP__sim__VexRiscv__0\n"); );
    // Init
    CData/*3:0*/ __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1;
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 = 0;
    // Body
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
    vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->CsrPlugin_interrupt_code;
    vlSelf->__PVT__CsrPlugin_targetPrivilege = vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege;
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                 << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                            << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
        vlSelf->__PVT__CsrPlugin_targetPrivilege = 3U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->__PVT__CsrPlugin_xtvec_mode = 0U;
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_mode = vlSelf->__PVT__CsrPlugin_mtvec_mode;
        vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__PVT__CsrPlugin_mtvec_base;
    }
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_done));
    vlSelf->__PVT__when_CsrPlugin_l1019 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = 0U;
    vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
    vlSelf->__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1019) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSelf->__PVT__CsrPlugin_xtvec_base 
               << 2U);
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1064) {
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
        }
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload 
        = (((IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
            << 3U) | (((IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) 
                       << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid))));
    vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                   << 3U) | (((IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) 
                              << 2U) | (((IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) 
                                         << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid)))));
    if (vlSelf->__PVT__when_CsrPlugin_l1064) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__memory_arbitration_isFlushed = ((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                                                   | (0U 
                                                      != 
                                                      ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                                                       << 1U)));
    vlSelf->__PVT__execute_arbitration_isFlushed = 
        ((0U != (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                  << 1U) | (IData)(vlSelf->__PVT__memory_arbitration_flushNext))) 
         | (0U != ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                   << 2U)));
    vlSelf->__PVT__decode_arbitration_isFlushed = (
                                                   (0U 
                                                    != 
                                                    (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->__PVT__memory_arbitration_flushNext) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->__PVT__execute_arbitration_flushNext)))) 
                                                   | (0U 
                                                      != 
                                                      ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                                                       << 3U)));
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((~ ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
               - (IData)(1U))) & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 0U;
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSelf->__PVT__memory_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    }
    if (vlSelf->__PVT__memory_arbitration_isFlushed) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSelf->__PVT__decode_arbitration_removeIt = 0U;
    if ((0U != (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    }
    if (vlSelf->__PVT__decode_arbitration_isFlushed) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = (((IData)((0U != (0xcU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))));
    if (vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSelf->__PVT__when_Fetcher_l131 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction) 
                                        | (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
    vlSelf->__PVT__memory_arbitration_isMoving = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
                                                     & (~ (IData)(vlSelf->__PVT__memory_arbitration_removeIt))));
    vlSelf->__PVT__execute_arbitration_isMoving = (1U 
                                                   & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                                                      & (~ (IData)(vlSelf->__PVT__execute_arbitration_removeIt))));
    vlSelf->__PVT__when_CsrPlugin_l985 = (1U & ((~ (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_active)) 
                                                | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    vlSelf->__PVT__decode_arbitration_isMoving = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                                                     & (~ (IData)(vlSelf->__PVT__decode_arbitration_removeIt))));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush = 
        ((IData)(vlSelf->__PVT__decode_arbitration_removeIt) 
         | (((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
             & (IData)(vlSelf->__PVT__decode_arbitration_flushNext)) 
            | (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch)));
    vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                 << 3U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                            << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                       << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1019) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1064) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc) 
                                                   << 2U));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = ((0U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                ? vlSelf->__PVT__memory_to_writeBack_PC
                : ((1U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                    ? vlSelf->__PVT__CsrPlugin_jumpInterface_payload
                    : ((2U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                        ? vlSelf->__PVT__execute_to_memory_BRANCH_CALC
                        : vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload)));
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (0xfffffffcU 
                                                  & vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_fire 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__0\n"); );
    // Body
    vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0U;
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
        = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    vlSelf->__Vdly__IBusCachedPlugin_rspCounter = vlSelf->__PVT__IBusCachedPlugin_rspCounter;
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0U;
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0U;
    vlSelf->__Vdly___zz_iBusWishbone_ADR = vlSelf->__PVT___zz_iBusWishbone_ADR;
    vlSelf->__Vdly___zz_dBus_cmd_ready = vlSelf->__PVT___zz_dBus_cmd_ready;
    vlSelf->__Vdly__DBusCachedPlugin_rspCounter = vlSelf->__PVT__DBusCachedPlugin_rspCounter;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start;
    vlSelf->__Vdly__dataCache_1__DOT__loader_error 
        = vlSelf->__PVT__dataCache_1__DOT__loader_error;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter;
    vlSelf->__Vdly__CsrPlugin_mstatus_MPIE = vlSelf->__PVT__CsrPlugin_mstatus_MPIE;
    if (vlSelf->__PVT___zz_1) {
        vlSelf->__Vdlyvval__RegFilePlugin_regFile__v0 
            = vlSelf->lastStageRegFileWrite_payload_data;
        vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
        vlSelf->__Vdlyvdim0__RegFilePlugin_regFile__v0 
            = vlSelf->lastStageRegFileWrite_payload_address;
    }
    if (vlSelf->__PVT__dataCache_1__DOT___zz_2) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0 
            = ((vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
                << 2U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error) 
                           << 1U) | (IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid)));
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0 
            = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address;
    }
    if ((((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 3U) & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_1))) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = (vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
               >> 0x18U);
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__12(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__12\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    vlSelf->__PVT___zz_decode_RS2_2 = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        vlSelf->__PVT___zz_decode_RS2_2 = ((0U == (3U 
                                                   & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? (((- (IData)(
                                                           ((~ 
                                                             (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                              >> 0xeU)) 
                                                            & ((IData)(vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted) 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (IData)(vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                    >> 0xcU)))
                                                ? (
                                                   ((- (IData)(
                                                               ((~ 
                                                                 (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                                  >> 0xeU)) 
                                                                & ((IData)(vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2) 
                                                                   >> 7U)))) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->__VdfgTmp_he4444737__0))
                                                : (
                                                   (0xffff0000U 
                                                    & vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data) 
                                                   | (IData)(vlSelf->__VdfgTmp_he4444737__0))));
    }
    if (((IData)(vlSelf->__PVT__memory_to_writeBack_IS_MUL) 
         & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid))) {
        __Vtemp_2[0U] = (IData)(vlSelf->__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp_2[1U] = (((- (IData)((1U & (IData)(
                                                   (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                    >> 0x33U))))) 
                          << 0x14U) | (IData)((vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                               >> 0x20U)));
        __Vtemp_2[2U] = (3U & ((- (IData)((1U & (IData)(
                                                        (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                         >> 0x33U))))) 
                               >> 0xcU));
        __Vtemp_3[0U] = (IData)(vlSelf->__PVT__memory_to_writeBack_MUL_HH);
        __Vtemp_3[1U] = (IData)((vlSelf->__PVT__memory_to_writeBack_MUL_HH 
                                 >> 0x20U));
        __Vtemp_3[2U] = 0U;
        VL_SHIFTL_WWI(66,66,32, __Vtemp_4, __Vtemp_3, 0x20U);
        VL_ADD_W(3, __Vtemp_5, __Vtemp_2, __Vtemp_4);
        vlSelf->__PVT___zz_decode_RS2_2 = ((0U == (3U 
                                                   & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? (IData)(vlSelf->__PVT__memory_to_writeBack_MUL_LOW)
                                            : __Vtemp_5[1U]);
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_2 = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_2 = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l637 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid));
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
        = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 0U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 1U;
    } else {
        vlSelf->__PVT__writeBack_arbitration_removeIt = 0U;
    }
    if (vlSelf->__PVT__writeBack_arbitration_flushIt) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 1U;
    }
    vlSelf->__PVT__memory_arbitration_isFlushed = ((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                                                   | (0U 
                                                      != 
                                                      ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                                                       << 1U)));
    vlSelf->__PVT__execute_arbitration_isFlushed = 
        ((0U != (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                  << 1U) | (IData)(vlSelf->__PVT__memory_arbitration_flushNext))) 
         | (0U != ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                   << 2U)));
    vlSelf->CsrPlugin_inWfi = 0U;
    vlSelf->__PVT__execute_arbitration_haltItself = 0U;
    if ((((~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_ready)) 
          & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_valid)) 
         | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt))) {
        vlSelf->__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1108) {
        vlSelf->CsrPlugin_inWfi = 1U;
        if ((1U & (~ (IData)(vlSelf->__PVT__execute_CsrPlugin_wfiWake)))) {
            vlSelf->__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1176) {
        if ((0U != (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                     << 1U) | (IData)(vlSelf->__PVT__memory_arbitration_isValid)))) {
            vlSelf->__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3857) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3858) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3859) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3860) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_769) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_832) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2816) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2944) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2818) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2946) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3072) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3200) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3074) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3202) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__when_CsrPlugin_l1176)))) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l244) {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    } else {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l256) {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError;
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 = 1U;
    }
    vlSelf->lastStageRegFileWrite_payload_data = vlSelf->__PVT___zz_decode_RS2_2;
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_payload_data = 0U;
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l637) {
        vlSelf->__PVT__dataCache_1__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__memory_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    }
    if (vlSelf->__PVT__memory_arbitration_isFlushed) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSelf->__PVT___zz_memory_DivPlugin_rs2_2 = ((vlSelf->__PVT__decode_to_execute_RS2 
                                                  >> 0x1fU) 
                                                 & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED));
    vlSelf->__PVT__execute_MulPlugin_aHigh = ((0x10000U 
                                               & ((((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0xcU))) 
                                                    || (2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                            >> 0xcU)))) 
                                                   << 0x10U) 
                                                  & (vlSelf->__PVT__decode_to_execute_RS1 
                                                     >> 0xfU))) 
                                              | (vlSelf->__PVT__decode_to_execute_RS1 
                                                 >> 0x10U));
    vlSelf->__PVT__execute_MulPlugin_bHigh = (((IData)(
                                                       ((0x1000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSelf->__PVT__decode_to_execute_INSTRUCTION)) 
                                                        & (vlSelf->__PVT__decode_to_execute_RS2 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__decode_to_execute_RS2 
                                                 >> 0x10U));
    if ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))) {
        vlSelf->__PVT__execute_BranchPlugin_branch_src2 
            = (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                >> 0x14U));
    } else {
        vlSelf->__PVT__execute_BranchPlugin_branch_src2 
            = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                ? (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x1fU))) << 0x15U) 
                   | ((0x100000U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                    >> 0xbU)) | ((0xff000U 
                                                  & vlSelf->__PVT__decode_to_execute_INSTRUCTION) 
                                                 | ((0x800U 
                                                     & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0x14U))))))
                : (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x1fU))) << 0xdU) 
                   | ((0x1000U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                  >> 0x13U)) | ((0x800U 
                                                 & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 7U)))))));
        if (vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
            vlSelf->__PVT__execute_BranchPlugin_branch_src2 = 4U;
        }
    }
}

extern const VlUnpacked<QData/*39:0*/, 4> Vsim__ConstPool__TABLE_h82842568_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h9e379ad3_0;
extern const VlUnpacked<VlWide<3>/*71:0*/, 4> Vsim__ConstPool__TABLE_hcb73f343_0;
extern const VlUnpacked<IData/*23:0*/, 4> Vsim__ConstPool__TABLE_h445ffbe1_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_had01290b_0;
extern const VlUnpacked<IData/*31:0*/, 4> Vsim__ConstPool__TABLE_h08f62071_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__15(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__15\n"); );
    // Init
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*1:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*1:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*1:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*1:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*6:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*6:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT__decode_arbitration_isValid));
    vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1 
        = ((0U != (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
           && ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
               || ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                   || (1U & ((0U == (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU)))
                              ? (IData)(vlSelf->__PVT__execute_BranchPlugin_eq)
                              : ((1U == (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0xcU)))
                                  ? (~ (IData)(vlSelf->__PVT__execute_BranchPlugin_eq))
                                  : ((5U == (5U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))
                                      ? (~ (IData)(vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA))
                                      : (IData)(vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA))))))));
    vlSelf->__PVT___zz_decode_RS2 = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                      ? ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? (vlSelf->__PVT___zz_execute_SRC1 
                                             & vlSelf->__PVT___zz_execute_SRC2_5)
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? (vlSelf->__PVT___zz_execute_SRC1 
                                                 | vlSelf->__PVT___zz_execute_SRC2_5)
                                              : (vlSelf->__PVT___zz_execute_SRC1 
                                                 ^ vlSelf->__PVT___zz_execute_SRC2_5)))
                                      : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                          ? (IData)(vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA)
                                          : vlSelf->__PVT__execute_SrcPlugin_addSub));
    if (vlSelf->__PVT__when_CsrPlugin_l1176) {
        vlSelf->__PVT___zz_decode_RS2 = vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal;
    }
    if (vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__banks_0[vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0] 
            = vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0;
    }
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_98;
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    __Vtableidx5 = vlSelf->__PVT__decode_ENV_CTRL;
    vlSelf->__PVT__decode_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx5];
    vlSelf->__PVT__decode_SHIFT_CTRL = (((IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_17) 
                                         << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_20));
    vlSelf->__PVT__decode_SRC2_CTRL = (((0U != (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_116)) 
                                        << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_121));
    vlSelf->__PVT__decode_SRC1_CTRL = (((IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_157) 
                                        << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_159));
    __Vtableidx62 = ((0x40U & ((~ (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_47)) 
                               << 6U)) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_2) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src1Hazard = 
        Vsim__ConstPool__TABLE_h9e379ad3_0[__Vtableidx62];
    __Vtableidx61 = (((0U == (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_136)) 
                      << 6U) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_2) 
                                 << 5U) | ((0x10U & 
                                            ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l45_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src0Hazard = 
        Vsim__ConstPool__TABLE_h9e379ad3_0[__Vtableidx61];
    vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL 
        = (((IData)(vlSelf->__VdfgTmp_h4f476a68__0) 
            << 1U) | (0x40U == (0x58U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                  >> 7U)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_flush) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = ((~ ((IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
               - (IData)(1U))) & (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code));
    vlSelf->__PVT__decode_arbitration_removeIt = 0U;
    if ((0U != (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    }
    if (vlSelf->__PVT__decode_arbitration_isFlushed) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port1;
    if (vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U)))) {
            vlSelf->__PVT__decode_RS2 = vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))) {
            vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l51_1) {
                vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2_1;
            }
        }
    }
    vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port0;
    if (vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xfU)))) {
            vlSelf->__PVT__decode_RS1 = vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))) {
            vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l48_1) {
                vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l51_2) {
                vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2;
            }
            if (vlSelf->__PVT__when_HazardSimplePlugin_l48_2) {
                vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2;
            }
        }
    }
    __Vtableidx13 = vlSelf->__PVT__decode_SHIFT_CTRL;
    vlSelf->__PVT__decode_SHIFT_CTRL_string[0U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx13][0U];
    vlSelf->__PVT__decode_SHIFT_CTRL_string[1U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx13][1U];
    vlSelf->__PVT__decode_SHIFT_CTRL_string[2U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx13][2U];
    __Vtableidx17 = vlSelf->__PVT__decode_SRC2_CTRL;
    vlSelf->__PVT__decode_SRC2_CTRL_string = Vsim__ConstPool__TABLE_h445ffbe1_0
        [__Vtableidx17];
    __Vtableidx21 = vlSelf->__PVT__decode_SRC1_CTRL;
    vlSelf->__PVT__decode_SRC1_CTRL_string[0U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx21][0U];
    vlSelf->__PVT__decode_SRC1_CTRL_string[1U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx21][1U];
    vlSelf->__PVT__decode_SRC1_CTRL_string[2U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx21][2U];
    vlSelf->__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__decode_arbitration_isValid) 
         & ((IData)(vlSelf->__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(vlSelf->__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((0U != (((IData)(vlSelf->__PVT__when_CsrPlugin_l1064) 
                 << 2U) | ((((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
                             & (1U == (IData)(vlSelf->__PVT__execute_to_memory_ENV_CTRL))) 
                            << 1U) | ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                      & (1U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL))))))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    __Vtableidx46 = vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL;
    vlSelf->__PVT__decode_BRANCH_CTRL_string = Vsim__ConstPool__TABLE_h08f62071_0
        [__Vtableidx46];
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload 
        = (vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
           + ((2U == (IData)(vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL))
               ? (((- (IData)((vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                               >> 0x1fU))) << 0x15U) 
                  | ((0x100000U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                   >> 0xbU)) | ((0xff000U 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                         >> 0x14U))))))
               : (((- (IData)((vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                               >> 0x1fU))) << 0xdU) 
                  | ((0x1000U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                 >> 0x13U)) | ((0x800U 
                                                & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 7U))))))));
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch 
        = ((2U == (IData)(vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL)) 
           | ((1U == (IData)(vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL)) 
              & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                 >> 0x1fU)));
    if ((1U & ((2U == (IData)(vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL))
                ? (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                   >> 0x15U) : (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                >> 8U)))) {
        vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = 0U;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__16(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__16\n"); );
    // Init
    CData/*3:0*/ __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1;
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 = 0;
    // Body
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSelf->__PVT__when_CsrPlugin_l985 = (1U & ((~ (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_active)) 
                                                | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                 << 3U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                            << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                       << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1019) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1064) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
        = ((IData)(vlSelf->__PVT__decode_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
        = ((IData)(4U) + vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload);
    vlSelf->__PVT__decode_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid) {
        vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
            = vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload;
        vlSelf->__PVT__decode_arbitration_flushNext = 1U;
    }
    if ((0U != (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        vlSelf->__PVT__decode_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload 
        = (((IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
            << 3U) | (((IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) 
                       << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid))));
    vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                   << 3U) | (((IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) 
                              << 2U) | (((IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) 
                                         << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid)))));
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((~ ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
               - (IData)(1U))) & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 0U;
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = (((IData)((0U != (0xcU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc) 
                                                   << 2U));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = ((0U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                ? vlSelf->__PVT__memory_to_writeBack_PC
                : ((1U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                    ? vlSelf->__PVT__CsrPlugin_jumpInterface_payload
                    : ((2U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                        ? vlSelf->__PVT__execute_to_memory_BRANCH_CALC
                        : vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload)));
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (0xfffffffcU 
                                                  & vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc);
}
