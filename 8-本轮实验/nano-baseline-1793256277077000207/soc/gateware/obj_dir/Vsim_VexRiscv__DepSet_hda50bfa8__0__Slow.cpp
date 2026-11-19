// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"

VL_ATTR_COLD void Vsim_VexRiscv___eval_static__TOP__sim__VexRiscv(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___eval_static__TOP__sim__VexRiscv\n"); );
    // Body
    vlSelf->__PVT__CsrPlugin_mcycle = 0ULL;
    vlSelf->__PVT__CsrPlugin_minstret = 0ULL;
}

extern const VlUnpacked<QData/*39:0*/, 4> Vsim__ConstPool__TABLE_h82842568_0;
extern const VlUnpacked<IData/*31:0*/, 4> Vsim__ConstPool__TABLE_h08f62071_0;
extern const VlUnpacked<VlWide<3>/*71:0*/, 4> Vsim__ConstPool__TABLE_hcb73f343_0;
extern const VlUnpacked<IData/*23:0*/, 4> Vsim__ConstPool__TABLE_h445ffbe1_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_had01290b_0;

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*1:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*1:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*1:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*1:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*1:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*1:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*1:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*1:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*1:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*1:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*1:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 0U;
    if (vlSelf->__PVT___zz_iBus_rsp_valid) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
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
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1103 
        = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid)));
    vlSelf->dataCache_1__DOT____VdfgTmp_ha666bb4c__0 
        = (1U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                 >> 7U));
    vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_valid 
        = (1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                 >> 7U));
    vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator 
        = (3U & (- (IData)((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator))));
    vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
         | (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))) {
        vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_payload_address = 0U;
    }
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_1 = (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED) 
                                                                   & (vlSelf->__PVT__decode_to_execute_RS1 
                                                                      >> 0x1fU)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__decode_to_execute_RS1)));
    vlSelf->__PVT___zz_memory_DivPlugin_rs2_2 = ((vlSelf->__PVT__decode_to_execute_RS2 
                                                  >> 0x1fU) 
                                                 & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED));
    vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outRemainder_1 
        = ((vlSelf->__PVT__memory_DivPlugin_accumulator[0U] 
            << 1U) | (1U & (IData)((vlSelf->__PVT__memory_DivPlugin_rs1 
                                    >> 0x1fU))));
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
    vlSelf->__PVT___zz_when_CsrPlugin_l952_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                                                & (IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l952 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                                              & (IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP));
    vlSelf->__PVT___zz_when_CsrPlugin_l952_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                                                & (IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP));
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
    vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->CsrPlugin_interrupt_code;
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    }
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_3 = ((IData)(vlSelf->__PVT__decode_to_execute_IS_DIV) 
                                                 & ((vlSelf->__PVT__decode_to_execute_RS1 
                                                     >> 0x1fU) 
                                                    & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED)));
    vlSelf->__PVT___zz_memory_DivPlugin_div_result 
        = ((0x2000U & vlSelf->__PVT__execute_to_memory_INSTRUCTION)
            ? vlSelf->__PVT__memory_DivPlugin_accumulator[0U]
            : (IData)(vlSelf->__PVT__memory_DivPlugin_rs1));
    __Vtableidx25 = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
    vlSelf->__PVT__memory_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx25];
    __Vtableidx27 = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
    vlSelf->__PVT__execute_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx27];
    __Vtableidx29 = vlSelf->__PVT__memory_to_writeBack_ENV_CTRL;
    vlSelf->__PVT__writeBack_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx29];
    __Vtableidx31 = vlSelf->__PVT__decode_to_execute_BRANCH_CTRL;
    vlSelf->__PVT__execute_BRANCH_CTRL_string = Vsim__ConstPool__TABLE_h08f62071_0
        [__Vtableidx31];
    __Vtableidx33 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__memory_SHIFT_CTRL_string[0U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx33][0U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[1U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx33][1U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[2U] = Vsim__ConstPool__TABLE_hcb73f343_0
        [__Vtableidx33][2U];
    __Vtableidx35 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__execute_SHIFT_CTRL_string[0U] = 
        Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx35][0U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[1U] = 
        Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx35][1U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[2U] = 
        Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx35][2U];
    __Vtableidx37 = vlSelf->__PVT__decode_to_execute_SRC2_CTRL;
    vlSelf->__PVT__execute_SRC2_CTRL_string = Vsim__ConstPool__TABLE_h445ffbe1_0
        [__Vtableidx37];
    __Vtableidx39 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__execute_SRC1_CTRL_string[0U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx39][0U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[1U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx39][1U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[2U] = Vsim__ConstPool__TABLE_had01290b_0
        [__Vtableidx39][2U];
    __Vtableidx53 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_had01290b_0[__Vtableidx53][0U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_had01290b_0[__Vtableidx53][1U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_had01290b_0[__Vtableidx53][2U];
    __Vtableidx54 = vlSelf->__PVT__decode_to_execute_SRC2_CTRL;
    vlSelf->__PVT__decode_to_execute_SRC2_CTRL_string 
        = Vsim__ConstPool__TABLE_h445ffbe1_0[__Vtableidx54];
    __Vtableidx55 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx55][0U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx55][1U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx55][2U];
    __Vtableidx56 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx56][0U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx56][1U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_hcb73f343_0[__Vtableidx56][2U];
}

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__1(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__1\n"); );
    // Init
    CData/*1:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*1:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*1:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*1:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    __Vtableidx57 = vlSelf->__PVT__decode_to_execute_BRANCH_CTRL;
    vlSelf->__PVT__decode_to_execute_BRANCH_CTRL_string 
        = Vsim__ConstPool__TABLE_h08f62071_0[__Vtableidx57];
    __Vtableidx58 = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
    vlSelf->__PVT__decode_to_execute_ENV_CTRL_string 
        = Vsim__ConstPool__TABLE_h82842568_0[__Vtableidx58];
    __Vtableidx59 = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
    vlSelf->__PVT__execute_to_memory_ENV_CTRL_string 
        = Vsim__ConstPool__TABLE_h82842568_0[__Vtableidx59];
    __Vtableidx60 = vlSelf->__PVT__memory_to_writeBack_ENV_CTRL;
    vlSelf->__PVT__memory_to_writeBack_ENV_CTRL_string 
        = Vsim__ConstPool__TABLE_h82842568_0[__Vtableidx60];
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 
        = ((~ (((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)) 
                & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2)) 
               | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid))) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
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
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSelf->__PVT___zz_iBus_rsp_valid) {
        if ((7U == (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
        }
    }
    vlSelf->__PVT__decode_ENV_CTRL = (((0x50U == (0x203050U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                       << 1U) | (0x50U 
                                                 == 
                                                 (0x403050U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
        = (0x1ffffffffULL & ((((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_accumulator[0U])) 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__memory_DivPlugin_rs1 
                                                                    >> 0x1fU)))))) 
                             - (QData)((IData)(vlSelf->__PVT__memory_DivPlugin_rs2))));
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
    vlSelf->__PVT___zz_dBus_cmd_ready_4 = ((5U != (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size)) 
                                           | (7U == (IData)(vlSelf->__PVT___zz_dBus_cmd_ready)));
    vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid 
        = ((IData)(vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE) 
           & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__CsrPlugin_targetPrivilege = vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_targetPrivilege = 3U;
    }
    vlSelf->__PVT__dBusWishbone_SEL = ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                        ? (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                        : 0xfU);
    vlSelf->__PVT__when_HazardSimplePlugin_l45 = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                                  & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffff000U 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | (((0x800U 
                                            & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 9U)) 
                                           | ((0x400U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  >> 0xbU)) 
                                              | (0x200U 
                                                 & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    >> 0xdU)))) 
                                          | (((0x100U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  >> 0xfU)) 
                                              | ((0x80U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 0x11U)) 
                                                 | (0x40U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x13U)))) 
                                             | (((0x20U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 0x15U)) 
                                                 | ((0x10U 
                                                     & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                        >> 0x17U)) 
                                                    | (8U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 0x19U)))) 
                                                | ((4U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x1bU)) 
                                                   | ((2U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 0x1dU)) 
                                                      | (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x1fU)))))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xff000fffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | (((0x800000U 
                                            & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                               << 0xfU)) 
                                           | ((0x400000U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 0xdU)) 
                                              | (0x200000U 
                                                 & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 0xbU)))) 
                                          | (((0x100000U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 9U)) 
                                              | ((0x80000U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 7U)) 
                                                 | (0x40000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 5U)))) 
                                             | (((0x20000U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 3U)) 
                                                 | ((0x10000U 
                                                     & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                        << 1U)) 
                                                    | (0x8000U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 1U)))) 
                                                | ((0x4000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 3U)) 
                                                   | ((0x2000U 
                                                       & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                          >> 5U)) 
                                                      | (0x1000U 
                                                         & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                            >> 7U))))))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffffffU & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | (((vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            << 0x1fU) 
                                           | (0x40000000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x1dU))) 
                                          | (((0x20000000U 
                                               & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                  << 0x1bU)) 
                                              | ((0x10000000U 
                                                  & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0x19U)) 
                                                 | (0x8000000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 0x17U)))) 
                                             | ((0x4000000U 
                                                 & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                    << 0x15U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 0x13U)) 
                                                   | (0x1000000U 
                                                      & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         << 0x11U)))))));
    vlSelf->__PVT__execute_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid))) {
        vlSelf->__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
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
}

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__2(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__2\n"); );
    // Body
    vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_flush_valid = 
        ((IData)(vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__dataCache_1_io_cpu_flush_ready = 
        ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone) 
         & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
            >> 7U));
    vlSelf->__PVT__when_CsrPlugin_l1108 = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                           & (2U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x1000U | (0xffffe000U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x2000000U | (0xfc0fffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3857) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = (0xbU | (0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3858) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = (0x16U | (0xffffffe0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3859) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = (0x21U | (0xffffffc0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_11 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_11 
            = vlSelf->__PVT__CsrPlugin_mepc;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_832) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 
            = vlSelf->__PVT__CsrPlugin_mscratch;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_14 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_14 
            = vlSelf->__PVT__CsrPlugin_mtval;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_15 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2816) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_15 
            = (IData)(vlSelf->__PVT__CsrPlugin_mcycle);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_16 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2944) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_16 
            = (IData)((vlSelf->__PVT__CsrPlugin_mcycle 
                       >> 0x20U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_17 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2818) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_17 
            = (IData)(vlSelf->__PVT__CsrPlugin_minstret);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_18 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_2946) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_18 
            = (IData)((vlSelf->__PVT__CsrPlugin_minstret 
                       >> 0x20U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_19 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3072) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_19 
            = (IData)(vlSelf->__PVT__CsrPlugin_mcycle);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_20 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3200) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_20 
            = (IData)((vlSelf->__PVT__CsrPlugin_mcycle 
                       >> 0x20U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_21 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3074) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_21 
            = (IData)(vlSelf->__PVT__CsrPlugin_minstret);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_22 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3202) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_22 
            = (IData)((vlSelf->__PVT__CsrPlugin_minstret 
                       >> 0x20U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 
            = vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_769) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = ((0x3fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_misa_base) 
                  << 0x1eU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = ((0xfc000000U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6) 
               | vlSelf->__PVT__CsrPlugin_misa_extensions);
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
            = ((vlSelf->__PVT__CsrPlugin_mtvec_base 
                << 2U) | (IData)(vlSelf->__PVT__CsrPlugin_mtvec_mode));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 
            = ((0x7fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 
            = ((0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13) 
               | (IData)(vlSelf->__PVT__CsrPlugin_mcause_exceptionCode));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xffffe7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
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
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
        = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit 
           & vlSelf->__PVT__externalInterruptArray_regNext);
    vlSelf->__PVT__when_CsrPlugin_l1144 = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                           & (3U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1075 
        = ((IData)(vlSelf->__PVT___zz_dBus_rsp_valid) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid));
    vlSelf->__VdfgTmp_h4f476a68__0 = (0U != (((0x48U 
                                               == (0x48U 
                                                   & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                              << 1U) 
                                             | (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))));
    vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
              & (vlSelf->__PVT__execute_to_memory_BRANCH_CALC 
                 >> 1U)));
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong 
        = ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
           & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    vlSelf->__PVT__when_HazardSimplePlugin_l45_1 = 
        ((IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID) 
         & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    vlSelf->__PVT__when_HazardSimplePlugin_l45_2 = 
        ((IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
    vlSelf->__PVT__when_MulDivIterativePlugin_l128 
        = ((IData)(vlSelf->__PVT__execute_to_memory_IS_DIV) 
           & (IData)(vlSelf->__PVT__memory_arbitration_isValid));
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                 << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                            << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->__PVT__when_CsrPlugin_l1176 = ((IData)(vlSelf->__PVT__decode_to_execute_IS_CSR) 
                                           & (IData)(vlSelf->__PVT__execute_arbitration_isValid));
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
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h9e379ad3_0;

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__3(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__3\n"); );
    // Init
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*6:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    vlSelf->__PVT__when_CsrPlugin_l1064 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                           & (1U == (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL)));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    vlSelf->IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)) 
                 | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception)));
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE) 
           & (IData)(vlSelf->__PVT__writeBack_arbitration_isValid));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)) 
           & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_98;
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 0U;
    if ((1U & ((~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                   >> 7U)) | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 1U;
    }
    __Vtableidx5 = vlSelf->__PVT__decode_ENV_CTRL;
    vlSelf->__PVT__decode_ENV_CTRL_string = Vsim__ConstPool__TABLE_h82842568_0
        [__Vtableidx5];
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_outNumerator 
        = (((IData)(vlSelf->__PVT__memory_DivPlugin_rs1) 
            << 1U) | (1U & (~ (IData)((vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                       >> 0x20U)))));
    vlSelf->__PVT__decode_SHIFT_CTRL = (((IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_17) 
                                         << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_20));
    vlSelf->__PVT__decode_SRC2_CTRL = (((0U != (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_116)) 
                                        << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_121));
    vlSelf->__PVT__decode_SRC1_CTRL = (((IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_157) 
                                        << 1U) | (IData)(vlSelf->__PVT___zz___05Fzz_decode_IS_RS2_SIGNED_159));
    vlSelf->__PVT__CsrPlugin_xtvec_mode = 0U;
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_mode = vlSelf->__PVT__CsrPlugin_mtvec_mode;
        vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__PVT__CsrPlugin_mtvec_base;
    }
    vlSelf->CsrPlugin_inWfi = 0U;
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_24 = 0U;
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1075) {
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    vlSelf->__PVT___zz_decode_to_execute_BRANCH_CTRL 
        = (((IData)(vlSelf->__VdfgTmp_h4f476a68__0) 
            << 1U) | (0x40U == (0x58U & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)));
    vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
        = vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT;
    vlSelf->__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_decodePrediction_rsp_wasWrong) {
        vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSelf->__PVT__execute_to_memory_BRANCH_CALC;
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
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
    vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT___zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)) 
                    || (3U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
            vlSelf->__PVT__memory_arbitration_haltItself = 1U;
        }
        vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__memory_DivPlugin_div_result;
    }
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_done));
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
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_24 
            = vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1;
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__when_CsrPlugin_l1176)))) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
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
}

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__4(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__4\n"); );
    // Init
    CData/*1:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*1:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*1:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*1:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    // Body
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
    vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted 
        = (0xffU & ((0U == (3U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                     ? vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data
                     : ((1U == (3U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                         ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                            >> 8U) : ((2U == (3U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                       ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                          >> 0x10U)
                                       : (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                          >> 0x18U)))));
    vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2 
        = (0xffU & ((2U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA)
                     ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                        >> 0x18U) : (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                     >> 8U)));
    vlSelf->__PVT__when_InstructionCache_l239 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT___zz_iBusWishbone_ADR)));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
           | (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned));
    vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception) 
              | (((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                  & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                 | ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                    & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr))))));
    vlSelf->__PVT__when_IBusCachedPlugin_l239 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
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
    vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal 
        = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
           | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
              | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
                 | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
                    | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
                       | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
                          | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
                             | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
                                | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
                                   | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_11 
                                      | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_12 
                                         | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_13 
                                            | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_14 
                                               | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_15 
                                                  | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_16 
                                                     | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_17 
                                                        | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_18 
                                                           | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_19 
                                                              | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_20 
                                                                 | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_21 
                                                                    | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_22 
                                                                       | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_23 
                                                                          | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_24))))))))))))))))))))));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext 
        = (7U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value) 
                 + (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement)));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow 
        = ((7U == (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement));
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
    vlSelf->__PVT__when_CsrPlugin_l1019 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
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
    vlSelf->__VdfgTmp_he4444737__0 = (((IData)(vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted_2) 
                                       << 8U) | (IData)(vlSelf->__PVT___zz_writeBack_DBusCachedPlugin_rspShifted));
    vlSelf->__PVT__iBusWishbone_STB = 0U;
    vlSelf->__PVT__iBusWishbone_CYC = 0U;
    if (vlSelf->__PVT__when_InstructionCache_l239) {
        vlSelf->__PVT__iBusWishbone_STB = 1U;
        vlSelf->__PVT__iBusWishbone_CYC = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h4cd77601_0;

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__5\n"); );
    // Init
    CData/*5:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress;
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr;
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_size;
    vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 0U;
    __Vtableidx64 = ((((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext)) 
                       & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid)) 
                      << 5U) | ((((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                  & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling)) 
                                 << 4U) | ((((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                             & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                                & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid))))));
    vlSelf->__PVT__dataCache_1_io_cpu_redo = Vsim__ConstPool__TABLE_h4cd77601_0
        [__Vtableidx64];
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError 
        = ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))) 
           && (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
                & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error)) 
               | ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
                  & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging)))));
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l239) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 1U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? ((~ vlSelf->__PVT___zz_execute_SRC1) 
                   & vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal)
                : (vlSelf->__PVT__CsrPlugin_csrMapping_readDataSignal 
                   | vlSelf->__PVT___zz_execute_SRC1))
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 1U;
    } else {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error 
            = vlSelf->__PVT__dataCache_1__DOT__loader_error;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
            = (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
               >> 0xcU);
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid 
            = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_killReg)));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1019) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSelf->__PVT__CsrPlugin_xtvec_base 
               << 2U);
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1064) {
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
        }
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSelf->__PVT__execute_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_flushNext = 1U;
    }
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
    vlSelf->__PVT___zz_decode_RS2_2 = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989)))) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
                    = (0xffffffe0U & vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address);
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr = 0U;
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size = 5U;
            }
            if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l989) {
                vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 1U;
            }
        }
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
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mask;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = (0x3ffU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits;
    } else {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1075) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0xfU;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = ((0x3f8U & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                          >> 2U)) | (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if (vlSelf->__PVT__dataCache_1_io_cpu_redo) {
            vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 7U : 5U);
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 0xfU : 0xdU);
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 6U : 4U);
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h2de89816_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h5ea12b80_0;

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__6(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__6\n"); );
    // Init
    CData/*5:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*6:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling) 
           | ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError) 
              | ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException) 
                 | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess))));
    vlSelf->__PVT__when_IBusCachedPlugin_l244 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1)) 
                                                    & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                                       & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging) 
                                                          & (IData)(vlSelf->IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
    vlSelf->lastStageRegFileWrite_payload_data = vlSelf->__PVT___zz_decode_RS2_2;
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_payload_data = 0U;
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
    vlSelf->__PVT__writeBack_arbitration_flushIt = 0U;
    vlSelf->__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushIt = 1U;
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_redo) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
        }
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1019) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1064) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
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
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        if (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr) 
             & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits))) {
            vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1075) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
    }
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
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l244) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 = 1U;
    }
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
    vlSelf->__PVT__dataCache_1__DOT___zz_2 = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_2 = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l637 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid));
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
    vlSelf->__PVT__when_IBusCachedPlugin_l250 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2)) 
                                                    & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))));
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
    vlSelf->__PVT__dataCache_1__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l637) {
        vlSelf->__PVT__dataCache_1__DOT___zz_1 = 1U;
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
    vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l239) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    if (vlSelf->__PVT__when_IBusCachedPlugin_l250) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
}

VL_ATTR_COLD void Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__7(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___stl_sequent__TOP__sim__VexRiscv__7\n"); );
    // Body
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2;
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
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)));
    if (vlSelf->__PVT__when_IBusCachedPlugin_l250) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 1U;
    }
    vlSelf->__PVT__when_IBusCachedPlugin_l256 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3)) 
                                                    & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                                       | ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                                          & (IData)(vlSelf->IBusCachedPlugin_cache__DOT____VdfgTmp_h1f1c1467__0)))));
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
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
    vlSelf->__PVT__decode_arbitration_isValid = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)) 
                                                 & (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
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
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT__decode_arbitration_isValid));
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
        = ((IData)(vlSelf->__PVT__decode_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
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
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
        = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if ((0U != (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
    }
    if (vlSelf->__PVT__decode_arbitration_isFlushed) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
    }
    if ((0U != (IData)(vlSelf->__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    if (vlSelf->__PVT__decode_arbitration_isFlushed) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
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
}
