// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__13(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__13\n"); );
    // Body
    vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0U;
    if ((0U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                      >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 1U;
    } else if ((1U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 3U;
    } else if ((2U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0xfU;
    }
    vlSelf->__PVT___zz_execute_SRC2_5 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                          ? vlSelf->__PVT__decode_to_execute_RS2
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                              ? (((- (IData)(
                                                             (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U))
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 7U))))
                                                  : vlSelf->__PVT__decode_to_execute_PC)));
    vlSelf->__PVT___zz_execute_SRC1 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                        ? vlSelf->__PVT__decode_to_execute_RS1
                                        : ((2U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                            ? 4U : 
                                           ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                             ? (0xfffff000U 
                                                & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                                             : (0x1fU 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU)))));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__banks_0
            [(0x3ffU & (vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
                        >> 2U))];
    }
    vlSelf->__PVT__CsrPlugin_selfException_payload_code = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_illegalAccess) {
        vlSelf->__PVT__CsrPlugin_selfException_payload_code = 2U;
        vlSelf->__PVT__CsrPlugin_selfException_valid = 0U;
        vlSelf->__PVT__CsrPlugin_selfException_valid = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_selfException_valid = 0U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1144) {
        vlSelf->__PVT__CsrPlugin_selfException_payload_code = 0xbU;
        vlSelf->__PVT__CsrPlugin_selfException_valid = 1U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->IBusCachedPlugin_fetchPc_pcReg = 0U;
    } else if (((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted) 
                & ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready) 
                   | (IData)(vlSelf->__PVT__when_Fetcher_l131)))) {
        vlSelf->IBusCachedPlugin_fetchPc_pcReg = vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc;
    }
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? ((~ vlSelf->__PVT___zz_execute_SRC1) 
                   & vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal)
                : (vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal 
                   | vlSelf->__PVT___zz_execute_SRC1))
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffff000U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (((0x800U & (vlSelf->__PVT___zz_execute_SRC1 
                          >> 9U)) | ((0x400U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0xbU)) 
                                     | (0x200U & (vlSelf->__PVT___zz_execute_SRC1 
                                                  >> 0xdU)))) 
              | (((0x100U & (vlSelf->__PVT___zz_execute_SRC1 
                             >> 0xfU)) | ((0x80U & 
                                           (vlSelf->__PVT___zz_execute_SRC1 
                                            >> 0x11U)) 
                                          | (0x40U 
                                             & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x13U)))) 
                 | (((0x20U & (vlSelf->__PVT___zz_execute_SRC1 
                               >> 0x15U)) | ((0x10U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 0x17U)) 
                                             | (8U 
                                                & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 0x19U)))) 
                    | ((4U & (vlSelf->__PVT___zz_execute_SRC1 
                              >> 0x1bU)) | ((2U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 0x1dU)) 
                                            | (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0x1fU)))))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xff000fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (((0x800000U & (vlSelf->__PVT___zz_execute_SRC1 
                             << 0xfU)) | ((0x400000U 
                                           & (vlSelf->__PVT___zz_execute_SRC1 
                                              << 0xdU)) 
                                          | (0x200000U 
                                             & (vlSelf->__PVT___zz_execute_SRC1 
                                                << 0xbU)))) 
              | (((0x100000U & (vlSelf->__PVT___zz_execute_SRC1 
                                << 9U)) | ((0x80000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 7U)) 
                                           | (0x40000U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 << 5U)))) 
                 | (((0x20000U & (vlSelf->__PVT___zz_execute_SRC1 
                                  << 3U)) | ((0x10000U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 << 1U)) 
                                             | (0x8000U 
                                                & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 1U)))) 
                    | ((0x4000U & (vlSelf->__PVT___zz_execute_SRC1 
                                   >> 3U)) | ((0x2000U 
                                               & (vlSelf->__PVT___zz_execute_SRC1 
                                                  >> 5U)) 
                                              | (0x1000U 
                                                 & (vlSelf->__PVT___zz_execute_SRC1 
                                                    >> 7U))))))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | (((vlSelf->__PVT___zz_execute_SRC1 << 0x1fU) 
               | (0x40000000U & (vlSelf->__PVT___zz_execute_SRC1 
                                 << 0x1dU))) | (((0x20000000U 
                                                  & (vlSelf->__PVT___zz_execute_SRC1 
                                                     << 0x1bU)) 
                                                 | ((0x10000000U 
                                                     & (vlSelf->__PVT___zz_execute_SRC1 
                                                        << 0x19U)) 
                                                    | (0x8000000U 
                                                       & (vlSelf->__PVT___zz_execute_SRC1 
                                                          << 0x17U)))) 
                                                | ((0x4000000U 
                                                    & (vlSelf->__PVT___zz_execute_SRC1 
                                                       << 0x15U)) 
                                                   | ((0x2000000U 
                                                       & (vlSelf->__PVT___zz_execute_SRC1 
                                                          << 0x13U)) 
                                                      | (0x1000000U 
                                                         & (vlSelf->__PVT___zz_execute_SRC1 
                                                            << 0x11U)))))));
    vlSelf->__PVT__execute_BranchPlugin_eq = (vlSelf->__PVT___zz_execute_SRC1 
                                              == vlSelf->__PVT___zz_execute_SRC2_5);
    vlSelf->__PVT__execute_SrcPlugin_addSub = ((vlSelf->__PVT___zz_execute_SRC1 
                                                + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 
                                                   (~ vlSelf->__PVT___zz_execute_SRC2_5)
                                                    : vlSelf->__PVT___zz_execute_SRC2_5)) 
                                               + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                   ? 1U
                                                   : 0U));
    if (vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSelf->__PVT__execute_SrcPlugin_addSub = vlSelf->__PVT___zz_execute_SRC1;
    }
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
        = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSelf->__PVT__execute_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__decode_arbitration_isValid = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)) 
                                                 & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed 
        = ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL))
            ? vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT__dataCache_1__DOT__stage0_mask = 
        (0xfU & ((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask) 
                 << (3U & vlSelf->__PVT__execute_SrcPlugin_addSub)));
    vlSelf->__PVT___zz___05Fzz_execute_REGFILE_WRITE_DATA 
        = (1U & (((vlSelf->__PVT___zz_execute_SRC1 
                   >> 0x1fU) == (vlSelf->__PVT___zz_execute_SRC2_5 
                                 >> 0x1fU)) ? (vlSelf->__PVT__execute_SrcPlugin_addSub 
                                               >> 0x1fU)
                  : ((IData)(vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                      ? (vlSelf->__PVT___zz_execute_SRC2_5 
                         >> 0x1fU) : (vlSelf->__PVT___zz_execute_SRC1 
                                      >> 0x1fU))));
    vlSelf->__PVT__decode_ALU_BITWISE_CTRL = (((0x1000U 
                                                == 
                                                (0x1000U 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               << 1U) 
                                              | (0x2000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT__decode_ALU_CTRL = (((0x4010U == 
                                        (0x4014U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                       << 1U) | (0x2010U 
                                                 == 
                                                 (0x6014U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__14(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__14\n"); );
    // Body
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_70 
        = (0U != (((0x40U == (0x40U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 4U) | (((4U == (4U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                              << 3U) | (((0x4020U == 
                                          (0x4020U 
                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         << 2U) | (
                                                   ((0x10U 
                                                     == 
                                                     (0x30U 
                                                      & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    << 1U) 
                                                   | (0x20U 
                                                      == 
                                                      (0x2000020U 
                                                       & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_7 
        = (0U != (((0x1050U == (0x1050U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 1U) | (0x2050U == (0x2050U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_38 
        = (((0x2000U == (0x2010U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
            << 1U) | (0x1000U == (0x5000U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_84 
        = (((4U == (4U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
            << 4U) | (((0x2010U == (0x2030U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                       << 3U) | (((0x10U == (0x1030U 
                                             & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                  << 2U) | (((0x2020U 
                                              == (0x2002060U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                             << 1U) 
                                            | (0x20U 
                                               == (0x2003020U 
                                                   & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_150 
        = (((0x40U == (0x44U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
            << 2U) | (((0x2010U == (0x2014U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                       << 1U) | (0x40000030U == (0x40000034U 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_98 
        = (0U != (((0x48U == (0x48U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 5U) | (((0x1010U == (0x1010U 
                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                              << 4U) | (((0x2010U == 
                                          (0x2010U 
                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         << 3U) | (
                                                   ((0x10U 
                                                     == 
                                                     (0x50U 
                                                      & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    << 2U) 
                                                   | (((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (0x28U 
                                                          & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))));
    vlSelf->__PVT__decode_ENV_CTRL = (((0x50U == (0x203050U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                       << 1U) | (0x50U 
                                                 == 
                                                 (0x403050U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_17 
        = (0U != (((0x5010U == (0x7034U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 1U) | (0x5020U == (0x2007064U 
                                         & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_20 
        = (0U != (((0x40001010U == (0x40003054U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 2U) | (((0x1010U == (0x7034U 
                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                              << 1U) | (0x1010U == 
                                        (0x2007054U 
                                         & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_116 
        = (((4U == (4U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
            << 1U) | (0x20U == (0x70U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_121 
        = (0U != (((4U == (4U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 1U) | (0U == (0x20U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_157 
        = (0U != (((4U == (0x14U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 1U) | (0x4050U == (0x4050U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_159 
        = (0U != (((4U == (0x44U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 1U) | (0x4050U == (0x4050U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_47 
        = (0U != (((0x20U == (0x34U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                   << 1U) | (0x20U == (0x64U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_136 
        = (((0U == (0x44U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
            << 3U) | (((0U == (0x18U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                       << 2U) | (((0x2000U == (0x6004U 
                                               & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                  << 1U) | (0x1000U 
                                            == (0x5004U 
                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))));
    vlSelf->__PVT__when_HazardSimplePlugin_l51_1 = 
        ((0x1fU & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0x14U)));
    vlSelf->__PVT__when_HazardSimplePlugin_l51_2 = 
        ((0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0x14U)));
    vlSelf->__PVT__when_HazardSimplePlugin_l48_1 = 
        ((0x1fU & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0xfU)));
    vlSelf->__PVT__when_HazardSimplePlugin_l48_2 = 
        ((0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0xfU)));
    vlSelf->__VdfgTmp_h4f476a68__0 = (0U != (((0x48U 
                                               == (0x48U 
                                                   & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                              << 1U) 
                                             | (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
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
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted 
        = (1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_flush 
        = ((IData)(vlSelf->__PVT__decode_arbitration_isValid) 
           & (0x1008U == (0x5048U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code 
        = ((((0U == (((0x17U == (0x5fU & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                      << 0x14U) | (((0x6fU == (0x7fU 
                                               & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                    << 0x13U) | (((3U 
                                                   == 
                                                   (0x106fU 
                                                    & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                  << 0x12U) 
                                                 | (((0x1073U 
                                                      == 
                                                      (0x107fU 
                                                       & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                     << 0x11U) 
                                                    | (((0x2073U 
                                                         == 
                                                         (0x207fU 
                                                          & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        << 0x10U) 
                                                       | (((0x4063U 
                                                            == 
                                                            (0x407fU 
                                                             & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                           << 0xfU) 
                                                          | (((0x2013U 
                                                               == 
                                                               (0x207fU 
                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                              << 0xeU) 
                                                             | (((0x23U 
                                                                  == 
                                                                  (0x603fU 
                                                                   & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 << 0xdU) 
                                                                | (((3U 
                                                                     == 
                                                                     (0x207fU 
                                                                      & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    << 0xcU) 
                                                                   | (((3U 
                                                                        == 
                                                                        (0x505fU 
                                                                         & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                       << 0xbU) 
                                                                      | (((0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                          << 0xaU) 
                                                                         | (((0xfU 
                                                                              == 
                                                                              (0x607fU 
                                                                               & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                             << 9U) 
                                                                            | (((0x33U 
                                                                                == 
                                                                                (0xfc00007fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 8U) 
                                                                               | (((0x500fU 
                                                                                == 
                                                                                (0x1f0707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 7U) 
                                                                                | (((0x5013U 
                                                                                == 
                                                                                (0xbc00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 6U) 
                                                                                | (((0x1013U 
                                                                                == 
                                                                                (0xfc00307fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 5U) 
                                                                                | (((0x5033U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 4U) 
                                                                                | (((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 3U) 
                                                                                | (((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 2U) 
                                                                                | (((0x10500073U 
                                                                                == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                << 1U) 
                                                                                | (0x73U 
                                                                                == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))) 
             & (IData)(vlSelf->__PVT__decode_arbitration_isValid)) 
            << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h2de89816_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h5ea12b80_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__17(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__17\n"); );
    // Init
    CData/*5:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*6:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
    vlSelf->__PVT__dBusWishbone_SEL = ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                        ? (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                        : 0xfU);
    vlSelf->__PVT__iBusWishbone_STB = 0U;
    vlSelf->__PVT__iBusWishbone_CYC = 0U;
    if (vlSelf->__PVT__when_InstructionCache_l239) {
        vlSelf->__PVT__iBusWishbone_STB = 1U;
        vlSelf->__PVT__iBusWishbone_CYC = 1U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid = 0U;
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = 0U;
    } else {
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid 
                = ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid) 
                   | (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_valid));
        }
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_valid) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = 0U;
        }
    }
    __Vtableidx65 = (((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051) 
                      << 6U) | ((0x20U & ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__memCmdSent)) 
                                          << 5U)) | 
                                (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr) 
                                  << 4U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__PVT__dataCache_1__DOT__memCmdSent) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid)))))));
    vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = Vsim__ConstPool__TABLE_h2de89816_0
        [__Vtableidx65];
    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)))) {
                    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 1U;
                }
            }
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
    }
    __Vtableidx63 = (((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051) 
                      << 5U) | ((0x10U & (((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                           | (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid))) 
                                          << 4U)) | 
                                (((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989) 
                                  << 3U) | ((4U & (
                                                   ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)
                                                     ? 
                                                    (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid))
                                                     : (IData)(vlSelf->__PVT___zz_dBus_rsp_valid)) 
                                                   << 2U)) 
                                            | (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess) 
                                                << 1U) 
                                               | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid))))));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt 
        = Vsim__ConstPool__TABLE_h5ea12b80_0[__Vtableidx63];
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         | (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid))) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_haltItself = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt))) {
        vlSelf->__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l816 
        = (1U & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
                 & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze))));
    vlSelf->__PVT__writeBack_arbitration_isFiring = 
        ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
         & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
            & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_removeIt))));
    vlSelf->__PVT__memory_arbitration_isStuck = ((IData)(vlSelf->__PVT__memory_arbitration_haltItself) 
                                                 | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself));
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isFiring;
    vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid 
        = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSelf->__PVT__writeBack_arbitration_isFiring));
    vlSelf->__PVT__memory_arbitration_isMoving = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
                                                     & (~ (IData)(vlSelf->__PVT__memory_arbitration_removeIt))));
    vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l656 
        = ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
           & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid));
    vlSelf->__VdfgTmp_h017d330c__0 = ((IData)(vlSelf->__PVT__memory_arbitration_isStuck) 
                                      | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself));
    vlSelf->lastStageRegFileWrite_valid = vlSelf->__PVT__HazardSimplePlugin_writeBackWrites_valid;
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_valid = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext 
        = (((0x21U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value)) 
            & (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))
            ? 0U : (0x3fU & ((IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value) 
                             + (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSelf->__PVT__memory_DivPlugin_div_counter_willClear) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l656) {
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 1U;
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload 
            = (0x7fU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload 
            = (0x3ffU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 1U;
    }
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(vlSelf->__PVT__execute_arbitration_haltItself) 
                                                  | ((IData)(vlSelf->__PVT__execute_arbitration_haltByOther) 
                                                     | (IData)(vlSelf->__VdfgTmp_h017d330c__0)));
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem 
        = ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid));
    vlSelf->__PVT__execute_arbitration_isMoving = (1U 
                                                   & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                                                      & (~ (IData)(vlSelf->__PVT__execute_arbitration_removeIt))));
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = 
        ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
         & (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
             & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
            & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE)));
    vlSelf->__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
           | ((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
              | (IData)(vlSelf->__VdfgTmp_h017d330c__0)));
    vlSelf->__PVT__decode_arbitration_isMoving = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                                                     & (~ (IData)(vlSelf->__PVT__decode_arbitration_removeIt))));
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = 
        ((IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)
          ? vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
          : vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt))));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush = 
        ((IData)(vlSelf->__PVT__decode_arbitration_removeIt) 
         | (((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
             & (IData)(vlSelf->__PVT__decode_arbitration_flushNext)) 
            | (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch)));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready 
            = (1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
    } else {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready = 0U;
    }
    vlSelf->__PVT__when_Fetcher_l131 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction) 
                                        | (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_fire 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_ready));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_comb__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_comb__TOP__sim__VexRiscv__0\n"); );
    // Body
    vlSelf->__PVT___zz_dBus_cmd_ready_2 = ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_dbus_ack) 
                                           & (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready 
        = ((IData)(vlSelf->__PVT___zz_dBus_cmd_ready_2) 
           & ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
              | (IData)(vlSelf->__PVT___zz_dBus_cmd_ready_4)));
    if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready = 1U;
    }
}
