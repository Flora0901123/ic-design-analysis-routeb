// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__8(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__8\n"); );
    // Init
    CData/*3:0*/ __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1;
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 = 0;
    // Body
    vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                   << 3U) | (((IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) 
                              << 2U) | (((IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) 
                                         << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid)))));
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
    vlSelf->__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
           | ((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
              | (IData)(vlSelf->__VdfgTmp_h017d330c__0)));
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((~ ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
               - (IData)(1U))) & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 0U;
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSelf->__PVT__decode_arbitration_isMoving = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                                                     & (~ (IData)(vlSelf->__PVT__decode_arbitration_removeIt))));
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = 
        ((IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)
          ? vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
          : vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush = 
        ((IData)(vlSelf->__PVT__decode_arbitration_removeIt) 
         | (((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
             & (IData)(vlSelf->__PVT__decode_arbitration_flushNext)) 
            | (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch)));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt))));
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = (((IData)((0U != (0xcU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready 
            = (1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
    } else {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready = 0U;
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
    vlSelf->__PVT__when_Fetcher_l131 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction) 
                                        | (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_fire 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready));
}

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset_0\n"); );
    // Body
    vlSelf->__PVT__externalResetVector = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timerInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__softwareInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__externalInterruptArray = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iBusWishbone_CYC = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_STB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_ACK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_WE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_ADR = VL_RAND_RESET_I(30);
    vlSelf->__PVT__iBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iBusWishbone_SEL = VL_RAND_RESET_I(4);
    vlSelf->__PVT__iBusWishbone_ERR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_CTI = VL_RAND_RESET_I(3);
    vlSelf->__PVT__iBusWishbone_BTE = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dBusWishbone_CYC = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_STB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_ACK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_WE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_ADR = VL_RAND_RESET_I(30);
    vlSelf->__PVT__dBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dBusWishbone_SEL = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dBusWishbone_ERR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_CTI = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dBusWishbone_BTE = VL_RAND_RESET_I(2);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SW = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SI = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PW = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PI = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_FM = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1_io_cpu_flush_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_flush_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_redo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted = VL_RAND_RESET_I(8);
    vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_38 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_47 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_70 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_84 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_98 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_116 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_121 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_136 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_150 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_157 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_159 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outRemainder_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_memory_DivPlugin_rs2_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_ENV_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_SHIFT_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_SRC2_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_ALU_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_SRC1_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_decode_RS2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_RS2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_RS1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_RS2_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_decode_RS2_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_arbitration_haltByOther = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_isFlushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_isMoving = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_haltItself = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_haltByOther = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isStuck = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isFlushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isMoving = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_haltItself = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isStuck = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isFlushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isMoving = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_haltItself = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_flushIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_isFiring = VL_RAND_RESET_I(1);
    vlSelf->lastStageInstruction = VL_RAND_RESET_I(32);
    vlSelf->lastStagePc = VL_RAND_RESET_I(32);
    vlSelf->lastStageIsValid = VL_RAND_RESET_I(1);
    vlSelf->lastStageIsFiring = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBus_rsp_payload_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal = VL_RAND_RESET_I(32);
    vlSelf->CsrPlugin_inWfi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_selfException_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_selfException_payload_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload = VL_RAND_RESET_I(4);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready = VL_RAND_RESET_I(1);
    vlSelf->IBusCachedPlugin_fetchPc_pcReg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_Fetcher_l131 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l239 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l244 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l250 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l256 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_uncached = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->lastStageRegFileWrite_valid = VL_RAND_RESET_I(1);
    vlSelf->lastStageRegFileWrite_payload_address = VL_RAND_RESET_I(5);
    vlSelf->lastStageRegFileWrite_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_execute_SRC1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_execute_SRC2_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_SrcPlugin_addSub = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_RS2_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__HazardSimplePlugin_src0Hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_src1Hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address = VL_RAND_RESET_I(5);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_HazardSimplePlugin_l45 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l48_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l51_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l45_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l48_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l51_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l45_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_BranchPlugin_eq = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_BranchPlugin_branch_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_misa_base = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_misa_extensions = VL_RAND_RESET_I(26);
    vlSelf->__PVT__CsrPlugin_mtvec_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_mtvec_base = VL_RAND_RESET_I(30);
    vlSelf->__PVT__CsrPlugin_mepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mstatus_MPP = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_mip_MEIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mip_MTIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mip_MSIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MEIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MTIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MSIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mscratch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mcause_interrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mcause_exceptionCode = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_mtval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__CsrPlugin_minstret = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___zz_when_CsrPlugin_l952 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_CsrPlugin_l952_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_CsrPlugin_l952_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_interrupt_valid = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_interrupt_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_lastStageWasWfi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l985 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_interruptJump = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_hadException = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_targetPrivilege = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_trapCause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_xtvec_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_xtvec_base = VL_RAND_RESET_I(30);
    vlSelf->__PVT__when_CsrPlugin_l1019 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l1064 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_wfiWake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l1108 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_illegalAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l1144 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_CsrPlugin_l1176 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_MulPlugin_aHigh = VL_RAND_RESET_I(17);
    vlSelf->__PVT__execute_MulPlugin_bHigh = VL_RAND_RESET_I(17);
    vlSelf->__PVT__memory_DivPlugin_rs1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__memory_DivPlugin_rs2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__memory_DivPlugin_accumulator);
    vlSelf->__PVT__memory_DivPlugin_div_needRevert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext = VL_RAND_RESET_I(6);
    vlSelf->__PVT__memory_DivPlugin_div_counter_value = VL_RAND_RESET_I(6);
    vlSelf->__PVT__memory_DivPlugin_div_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_MulDivIterativePlugin_l128 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_outNumerator = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_memory_DivPlugin_div_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__externalInterruptArray_regNext = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ALU_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SRC2_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_WR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_WR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_WR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_IS_CSR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ENV_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__execute_to_memory_ENV_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memory_to_writeBack_ENV_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_IS_MUL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_IS_MUL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_IS_MUL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_IS_DIV = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_IS_DIV = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_RS1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_RS2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_STORE_DATA_RF = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_BRANCH_DO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_BRANCH_CALC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_MUL_LL = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_MUL_LH = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__execute_to_memory_MUL_HL = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__execute_to_memory_MUL_HH = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__memory_to_writeBack_MUL_HH = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__memory_to_writeBack_MUL_LOW = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__execute_CsrPlugin_csr_3264 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3857 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3858 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3859 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3860 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_769 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_768 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_836 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_772 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_773 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_833 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_832 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_834 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_835 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_2816 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_2944 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_2818 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_2946 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3072 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3200 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3074 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3202 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3008 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_4032 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_15 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_16 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_17 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_18 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_19 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_20 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_21 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_22 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_24 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_iBusWishbone_ADR = VL_RAND_RESET_I(3);
    vlSelf->__PVT__when_InstructionCache_l239 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_iBus_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_dBus_cmd_ready = VL_RAND_RESET_I(3);
    vlSelf->__PVT___zz_dBus_cmd_ready_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_dBus_cmd_ready_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_dBus_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_ENV_CTRL_string = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(72, vlSelf->__PVT__decode_SHIFT_CTRL_string);
    vlSelf->__PVT__decode_SRC2_CTRL_string = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(96, vlSelf->__PVT__decode_SRC1_CTRL_string);
    vlSelf->__PVT__memory_ENV_CTRL_string = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__execute_ENV_CTRL_string = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__writeBack_ENV_CTRL_string = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__execute_BRANCH_CTRL_string = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, vlSelf->__PVT__memory_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72, vlSelf->__PVT__execute_SHIFT_CTRL_string);
    vlSelf->__PVT__execute_SRC2_CTRL_string = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(96, vlSelf->__PVT__execute_SRC1_CTRL_string);
    vlSelf->__PVT__decode_BRANCH_CTRL_string = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string);
    vlSelf->__PVT__decode_to_execute_SRC2_CTRL_string = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72, vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string);
    vlSelf->__PVT__decode_to_execute_BRANCH_CTRL_string = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_ENV_CTRL_string = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__execute_to_memory_ENV_CTRL_string = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__memory_to_writeBack_ENV_CTRL_string = VL_RAND_RESET_Q(40);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RegFilePlugin_regFile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgTmp_h4f476a68__0 = 0;
    vlSelf->__VdfgTmp_he4444737__0 = 0;
    vlSelf->__VdfgTmp_h017d330c__0 = 0;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 = VL_RAND_RESET_I(22);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__banks_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }
    vlSelf->IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0 = 0;
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 = VL_RAND_RESET_I(22);
    vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_1(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset_1\n"); );
    // Body
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload = VL_RAND_RESET_I(10);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = VL_RAND_RESET_I(10);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l637 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l656 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__memCmdSent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stage0_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_size = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_totalyConsistent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageA_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageA_wayInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_size = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_totalyConsistent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l816 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_value = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_killReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1075 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1103 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 = VL_RAND_RESET_I(8);
    vlSelf->dataCache_1__DOT____VdfgTmp_ha666bb4c__0 = 0;
    vlSelf->__Vdlyvdim0__RegFilePlugin_regFile__v0 = 0;
    vlSelf->__Vdlyvval__RegFilePlugin_regFile__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0 = 0;
    vlSelf->__Vdly__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly___zz_dBus_cmd_ready = VL_RAND_RESET_I(3);
    vlSelf->__Vdly___zz_iBusWishbone_ADR = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset\n"); );
    // Body
    Vsim_VexRiscv___ctor_var_reset_0(vlSelf);
    Vsim_VexRiscv___ctor_var_reset_1(vlSelf);
}
