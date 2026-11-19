// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

extern const VlUnpacked<QData/*39:0*/, 4> Vsim__ConstPool__TABLE_hbd3667b0_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_h957f924c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h8d24d1d2_0;

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__2(Vsim_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*1:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*6:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*6:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    vlSelfRef.__PVT__execute_SRC1 = ((0U == (IData)(vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL))
                                      ? vlSelfRef.__PVT__decode_to_execute_RS1
                                      : ((2U == (IData)(vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL))
                                          ? 4U : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.__PVT__decode_to_execute_INSTRUCTION)
                                                   : 
                                                  (0x1fU 
                                                   & (vlSelfRef.__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0xfU)))));
    vlSelfRef.__PVT__when_CsrPlugin_l1064 = ((IData)(vlSelfRef.__PVT__writeBack_arbitration_isValid) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__memory_to_writeBack_ENV_CTRL)));
    vlSelfRef.__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSelfRef.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSelfRef.__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSelfRef.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
    vlSelfRef.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((~ (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)) 
           & (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    vlSelfRef.IBusCachedPlugin_cache__DOT____VdfgRegularize_h7c702150_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)) 
                 | (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception)));
    vlSelfRef.__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((~ (IData)(vlSelfRef.__PVT__dataCache_1__DOT__stageB_wayInvalidate)) 
           & (IData)(vlSelfRef.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
    vlSelfRef.__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSelfRef.__PVT__memory_to_writeBack_MEMORY_ENABLE) 
           & (IData)(vlSelfRef.__PVT__writeBack_arbitration_isValid));
    vlSelfRef.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((~ (IData)(vlSelfRef.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)) 
           & (IData)(vlSelfRef.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    vlSelfRef.__PVT__reset = (((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_int_rst) 
                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_soc_rst)) 
                              | ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reset_storage) 
                                 >> 1U));
    __Vtableidx5 = vlSelfRef.__PVT__decode_ENV_CTRL;
    vlSelfRef.__PVT__decode_ENV_CTRL_string = Vsim__ConstPool__TABLE_hbd3667b0_0
        [__Vtableidx5];
    vlSelfRef.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
        = (0x1ffffffffULL & (vlSelfRef.__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
                             - (QData)((IData)(vlSelfRef.__PVT__memory_DivPlugin_rs2))));
    vlSelfRef.CsrPlugin_inWfi = 0U;
    vlSelfRef.__PVT__dataCache_1__DOT__loader_counter_valueNext 
        = (7U & ((IData)(vlSelfRef.__PVT__dataCache_1__DOT__loader_counter_value) 
                 + (IData)(vlSelfRef.__PVT__dataCache_1__DOT__loader_counter_willIncrement)));
    vlSelfRef.__PVT__dataCache_1__DOT__loader_counter_willOverflow 
        = ((7U == (IData)(vlSelfRef.__PVT__dataCache_1__DOT__loader_counter_value)) 
           & (IData)(vlSelfRef.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    vlSelfRef.__PVT__CsrPlugin_csrMapping_readDataSignal 
        = (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3264)
             ? 0x2001000U : 0U) | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3857)
                                     ? 0xbU : 0U) | 
                                   (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3858)
                                      ? 0x16U : 0U) 
                                    | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3859)
                                         ? 0x21U : 0U) 
                                       | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_769)
                                            ? (((IData)(vlSelfRef.__PVT__CsrPlugin_misa_base) 
                                                << 0x1eU) 
                                               | vlSelfRef.__PVT__CsrPlugin_misa_extensions)
                                            : 0U) | 
                                          (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_768)
                                             ? (((IData)(vlSelfRef.__PVT__CsrPlugin_mstatus_MPP) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelfRef.__PVT__CsrPlugin_mstatus_MPIE) 
                                                    << 7U) 
                                                   | ((IData)(vlSelfRef.__PVT__CsrPlugin_mstatus_MIE) 
                                                      << 3U)))
                                             : 0U) 
                                           | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_836)
                                                ? (
                                                   ((IData)(vlSelfRef.__PVT__CsrPlugin_mip_MEIP) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelfRef.__PVT__CsrPlugin_mip_MTIP) 
                                                       << 7U) 
                                                      | ((IData)(vlSelfRef.__PVT__CsrPlugin_mip_MSIP) 
                                                         << 3U)))
                                                : 0U) 
                                              | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_772)
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__CsrPlugin_mie_MEIE) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelfRef.__PVT__CsrPlugin_mie_MTIE) 
                                                       << 7U) 
                                                      | ((IData)(vlSelfRef.__PVT__CsrPlugin_mie_MSIE) 
                                                         << 3U)))
                                                   : 0U) 
                                                 | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_773)
                                                      ? 
                                                     ((vlSelfRef.__PVT__CsrPlugin_mtvec_base 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__CsrPlugin_mtvec_mode))
                                                      : 0U) 
                                                    | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_833)
                                                         ? vlSelfRef.__PVT__CsrPlugin_mepc
                                                         : 0U) 
                                                       | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_832)
                                                            ? vlSelfRef.__PVT__CsrPlugin_mscratch
                                                            : 0U) 
                                                          | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_834)
                                                               ? 
                                                              (((IData)(vlSelfRef.__PVT__CsrPlugin_mcause_interrupt) 
                                                                << 0x1fU) 
                                                               | (IData)(vlSelfRef.__PVT__CsrPlugin_mcause_exceptionCode))
                                                               : 0U) 
                                                             | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_835)
                                                                  ? vlSelfRef.__PVT__CsrPlugin_mtval
                                                                  : 0U) 
                                                                | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_2816)
                                                                     ? (IData)(vlSelfRef.__PVT__CsrPlugin_mcycle)
                                                                     : 0U) 
                                                                   | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_2944)
                                                                        ? (IData)(
                                                                                (vlSelfRef.__PVT__CsrPlugin_mcycle 
                                                                                >> 0x20U))
                                                                        : 0U) 
                                                                      | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_2818)
                                                                           ? (IData)(vlSelfRef.__PVT__CsrPlugin_minstret)
                                                                           : 0U) 
                                                                         | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_2946)
                                                                              ? (IData)(
                                                                                (vlSelfRef.__PVT__CsrPlugin_minstret 
                                                                                >> 0x20U))
                                                                              : 0U) 
                                                                            | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3072)
                                                                                 ? (IData)(vlSelfRef.__PVT__CsrPlugin_mcycle)
                                                                                 : 0U) 
                                                                               | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3200)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__CsrPlugin_mcycle 
                                                                                >> 0x20U))
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3074)
                                                                                 ? (IData)(vlSelfRef.__PVT__CsrPlugin_minstret)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3202)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.__PVT__CsrPlugin_minstret 
                                                                                >> 0x20U))
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_3008)
                                                                                 ? vlSelfRef.__PVT___zz_CsrPlugin_csrMapping_readDataInit
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelfRef.__PVT__execute_CsrPlugin_csr_4032)
                                                                                 ? vlSelfRef.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1
                                                                                 : 0U)))))))))))))))))))))));
    vlSelfRef.__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelfRef.__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) {
        vlSelfRef.__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSelfRef.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelfRef.__PVT__memory_arbitration_flushNext = 1U;
    }
    __Vtableidx21 = (3U & ((IData)(vlSelfRef.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_156) 
                           >> 1U));
    vlSelfRef.__PVT__decode_SRC1_CTRL_string[0U] = 
        Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx21][0U];
    vlSelfRef.__PVT__decode_SRC1_CTRL_string[1U] = 
        Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx21][1U];
    vlSelfRef.__PVT__decode_SRC1_CTRL_string[2U] = 
        Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx21][2U];
    __Vtableidx62 = ((((0x40U & ((~ (IData)(vlSelfRef.__PVT__decode_RS2_USE)) 
                                 << 6U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l51_2) 
                                            << 5U)) 
                      | ((0x10U & ((~ (IData)(vlSelfRef.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                   << 4U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_2) 
                                              << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l51_1) 
                         << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                          << 1U)) | (IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_1))));
    vlSelfRef.__PVT__HazardSimplePlugin_src1Hazard 
        = Vsim__ConstPool__TABLE_h8d24d1d2_0[__Vtableidx62];
    vlSelfRef.__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSelfRef.__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT___zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL)) 
                    || (3U == (IData)(vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    vlSelfRef.__PVT__memory_arbitration_haltItself = 0U;
    if (vlSelfRef.__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__memory_DivPlugin_div_done)))) {
            vlSelfRef.__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
            vlSelfRef.__PVT__memory_arbitration_haltItself = 1U;
        }
        vlSelfRef.__PVT___zz_decode_RS2_1 = vlSelfRef.__PVT__memory_DivPlugin_div_result;
    }
    __Vtableidx61 = ((((0x40U & ((~ (IData)(vlSelfRef.__PVT__decode_RS1_USE)) 
                                 << 6U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l48_2) 
                                            << 5U)) 
                      | ((0x10U & ((~ (IData)(vlSelfRef.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                   << 4U)) | ((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_2) 
                                              << 3U))) 
                     | (((IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l48_1) 
                         << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                          << 1U)) | (IData)(vlSelfRef.__PVT__when_HazardSimplePlugin_l45_1))));
    vlSelfRef.__PVT__HazardSimplePlugin_src0Hazard 
        = Vsim__ConstPool__TABLE_h8d24d1d2_0[__Vtableidx61];
    vlSelfRef.__VdfgRegularize_h1463825b_0_34 = (((
                                                   ((0x4010U 
                                                     == 
                                                     (0x4014U 
                                                      & vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    << 7U) 
                                                   | ((0x2010U 
                                                       == 
                                                       (0x6014U 
                                                        & vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                      << 6U)) 
                                                  | (((IData)(vlSelfRef.__PVT__decode_RS1_USE) 
                                                      << 5U) 
                                                     | ((0U 
                                                         == 
                                                         (0x58U 
                                                          & vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        << 4U))) 
                                                 | (((IData)(vlSelfRef.__PVT__decode_SRC_USE_SUB_LESS) 
                                                     << 3U) 
                                                    | (IData)(vlSelfRef.__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_156)));
    vlSelfRef.__PVT__execute_arbitration_haltItself = 0U;
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                   >> 7U)) | ((~ (IData)(vlSelfRef.__PVT__dataCache_1_io_cpu_flush_ready)) 
                              & (IData)(vlSelfRef.__PVT__dataCache_1_io_cpu_flush_valid))))) {
        vlSelfRef.__PVT__execute_arbitration_haltItself = 1U;
    }
    if (vlSelfRef.__PVT__when_CsrPlugin_l1108) {
        vlSelfRef.CsrPlugin_inWfi = 1U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__execute_CsrPlugin_wfiWake)))) {
            vlSelfRef.__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    if (vlSelfRef.__PVT__when_CsrPlugin_l1176) {
        if ((0U != (((IData)(vlSelfRef.__PVT__writeBack_arbitration_isValid) 
                     << 1U) | (IData)(vlSelfRef.__PVT__memory_arbitration_isValid)))) {
            vlSelfRef.__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSelfRef.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_3264) {
        if (vlSelfRef.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelfRef.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_3857) {
        if (vlSelfRef.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelfRef.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_3858) {
        if (vlSelfRef.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelfRef.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_3859) {
        if (vlSelfRef.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelfRef.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_3860) {
        if (vlSelfRef.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelfRef.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_769) {
        vlSelfRef.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
}
