// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__1(Vsim_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 1U) & (IData)(vlSelfRef.__PVT__dataCache_1__DOT___zz_1))) {
        vlSelfRef.__VdlyVal__dataCache_1__DOT__ways_0_data_symbol1__v0 
            = (0xffU & (vlSelfRef.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
                        >> 8U));
        vlSelfRef.__VdlyDim0__dataCache_1__DOT__ways_0_data_symbol1__v0 
            = vlSelfRef.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelfRef.__VdlySet__dataCache_1__DOT__ways_0_data_symbol1__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 3U) & (IData)(vlSelfRef.__PVT__dataCache_1__DOT___zz_1))) {
        vlSelfRef.__VdlyVal__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = (vlSelfRef.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
               >> 0x18U);
        vlSelfRef.__VdlyDim0__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = vlSelfRef.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelfRef.__VdlySet__dataCache_1__DOT__ways_0_data_symbol3__v0 = 1U;
    }
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__Vdly__IBusCachedPlugin_rspCounter 
            = vlSelfRef.__PVT___zz_IBusCachedPlugin_rspCounter;
        vlSelfRef.__Vdly__IBusCachedPlugin_rspCounter = 0U;
        vlSelfRef.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0U;
        vlSelfRef.__Vdly___zz_iBusWishbone_ADR = 0U;
        vlSelfRef.__Vdly___zz_dBus_cmd_ready = 0U;
        vlSelfRef.__Vdly__DBusCachedPlugin_rspCounter 
            = vlSelfRef.__PVT___zz_DBusCachedPlugin_rspCounter;
        vlSelfRef.__Vdly__DBusCachedPlugin_rspCounter = 0U;
        vlSelfRef.__Vdly__CsrPlugin_mstatus_MIE = 0U;
        vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
        vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
    } else {
        if (vlSelfRef.__PVT___zz_iBus_rsp_valid) {
            vlSelfRef.__Vdly__IBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSelfRef.__PVT__IBusCachedPlugin_rspCounter);
            vlSelfRef.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex)));
        }
        if (vlSelfRef.__PVT__iBusWishbone_CYC) {
            if (vlSelfRef.__PVT__iBusWishbone_ACK) {
                vlSelfRef.__Vdly___zz_iBusWishbone_ADR 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT___zz_iBusWishbone_ADR)));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
             & (IData)(vlSelfRef.__PVT___zz_dBus_cmd_ready_2))) {
            vlSelfRef.__Vdly___zz_dBus_cmd_ready = 
                (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT___zz_dBus_cmd_ready)));
            if (vlSelfRef.__PVT___zz_dBus_cmd_ready_4) {
                vlSelfRef.__Vdly___zz_dBus_cmd_ready = 0U;
            }
        }
        if (vlSelfRef.__PVT___zz_dBus_rsp_valid) {
            vlSelfRef.__Vdly__DBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSelfRef.__PVT__DBusCachedPlugin_rspCounter);
        }
        if (vlSelfRef.__PVT__when_CsrPlugin_l1019) {
            if ((3U == (IData)(vlSelfRef.__PVT__CsrPlugin_targetPrivilege))) {
                vlSelfRef.__Vdly__CsrPlugin_mstatus_MIE = 0U;
            }
        }
        if (vlSelfRef.__PVT__when_CsrPlugin_l1064) {
            if ((3U == (3U & (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelfRef.__Vdly__CsrPlugin_mstatus_MIE 
                    = vlSelfRef.__PVT__CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSelfRef.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelfRef.__PVT__execute_CsrPlugin_writeEnable) {
                vlSelfRef.__Vdly__CsrPlugin_mstatus_MIE 
                    = (1U & (vlSelfRef.__PVT__CsrPlugin_csrMapping_writeDataSignal 
                             >> 3U));
            }
        }
        if (vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_correction) {
            vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_correctionReg = 1U;
        }
        if (vlSelfRef.__PVT__when_Fetcher_l131) {
            vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_output_fire) {
            vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
            vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_inc = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_isValid)) 
             & (IData)(vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_output_ready))) {
            vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (vlSelfRef.__PVT__IBusCachedPlugin_cache_io_flush) {
            vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
        }
        if (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
            vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 0U;
        }
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                   >> 7U)) | (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire)))) {
        vlSelfRef.__VdlyVal__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = ((0x3ffffcU & (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                             >> 0xaU)) | (((IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                                 >> 7U))));
        vlSelfRef.__VdlyDim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = (0x7fU & ((0x80U & (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                         ? (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                            >> 5U) : (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
        vlSelfRef.__VdlySet__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 1U;
    }
    if (vlSelfRef.__PVT___zz_iBus_rsp_valid) {
        vlSelfRef.__VdlyVal__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = vlSelfRef.__PVT__iBusWishbone_DAT_MISO_regNext;
        vlSelfRef.__VdlyDim0__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = ((0x3f8U & (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                          >> 2U)) | (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
        vlSelfRef.__VdlySet__IBusCachedPlugin_cache__DOT__banks_0__v0 = 1U;
    }
    vlSelfRef.__PVT__CsrPlugin_mcycle = (1ULL + vlSelfRef.__PVT__CsrPlugin_mcycle);
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_2816) {
        if (vlSelfRef.__PVT__execute_CsrPlugin_writeEnable) {
            vlSelfRef.__PVT__CsrPlugin_mcycle = ((0xffffffff00000000ULL 
                                                  & vlSelfRef.__PVT__CsrPlugin_mcycle) 
                                                 | (IData)((IData)(vlSelfRef.__PVT__CsrPlugin_csrMapping_writeDataSignal)));
        }
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_2944) {
        if (vlSelfRef.__PVT__execute_CsrPlugin_writeEnable) {
            vlSelfRef.__PVT__CsrPlugin_mcycle = ((0xffffffffULL 
                                                  & vlSelfRef.__PVT__CsrPlugin_mcycle) 
                                                 | ((QData)((IData)(vlSelfRef.__PVT__CsrPlugin_csrMapping_writeDataSignal)) 
                                                    << 0x20U));
        }
    }
    if (vlSelfRef.lastStageIsFiring) {
        vlSelfRef.__PVT__CsrPlugin_minstret = (1ULL 
                                               + vlSelfRef.__PVT__CsrPlugin_minstret);
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_2818) {
        if (vlSelfRef.__PVT__execute_CsrPlugin_writeEnable) {
            vlSelfRef.__PVT__CsrPlugin_minstret = (
                                                   (0xffffffff00000000ULL 
                                                    & vlSelfRef.__PVT__CsrPlugin_minstret) 
                                                   | (IData)((IData)(vlSelfRef.__PVT__CsrPlugin_csrMapping_writeDataSignal)));
        }
    }
    if (vlSelfRef.__PVT__execute_CsrPlugin_csr_2946) {
        if (vlSelfRef.__PVT__execute_CsrPlugin_writeEnable) {
            vlSelfRef.__PVT__CsrPlugin_minstret = (
                                                   (0xffffffffULL 
                                                    & vlSelfRef.__PVT__CsrPlugin_minstret) 
                                                   | ((QData)((IData)(vlSelfRef.__PVT__CsrPlugin_csrMapping_writeDataSignal)) 
                                                      << 0x20U));
        }
    }
    vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address 
        = vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address;
    vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error 
        = vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error;
    vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid 
        = vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteCmd_valid;
    vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way 
        = vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way;
    vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address 
        = vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address;
    vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid 
        = vlSelfRef.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid;
    if (vlSelfRef.__PVT__dataCache_1__DOT__when_DataCache_l816) {
        vlSelfRef.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = 1U;
        vlSelfRef.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation 
            = vlSelfRef.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation;
        vlSelfRef.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
            = vlSelfRef.__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    }
    vlSelfRef.__PVT___zz_RegFilePlugin_regFile_port0 
        = vlSelfRef.RegFilePlugin_regFile[(0x1fU & 
                                           (vlSelfRef.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                            >> 0xfU))];
    vlSelfRef.__PVT___zz_RegFilePlugin_regFile_port1 
        = vlSelfRef.RegFilePlugin_regFile[(0x1fU & 
                                           (vlSelfRef.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                            >> 0x14U))];
    if (vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate) {
        vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = 1U;
        vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = 1U;
        vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation 
            = vlSelfRef.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation;
        vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess 
            = (vlSelfRef.IBusCachedPlugin_fetchPc_pcReg 
               >> 0x1fU);
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_valid)))) {
        vlSelfRef.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
            = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342 
        = (1U & ((IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                 >> 7U));
    if (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
        vlSelfRef.__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = 0U;
    }
    vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data 
        = vlSelfRef.__PVT___zz_decode_RS2_2;
    vlSelfRef.__PVT___zz_7 = vlSelfRef.__PVT__reset;
    vlSelfRef.__PVT__HazardSimplePlugin_writeBackBuffer_valid 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__reset))) 
           && (IData)(vlSelfRef.__PVT__HazardSimplePlugin_writeBackWrites_valid));
    if (vlSelfRef.__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSelfRef.__PVT___zz_when_CsrPlugin_l952) {
            vlSelfRef.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelfRef.__PVT___zz_when_CsrPlugin_l952_1) {
            vlSelfRef.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelfRef.__PVT___zz_when_CsrPlugin_l952_2) {
            vlSelfRef.__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
    }
    vlSelfRef.__PVT__CsrPlugin_mip_MTIP = 0U;
    vlSelfRef.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__reset))) 
           && ((IData)(vlSelfRef.__PVT__decode_arbitration_isStuck) 
               && (IData)(vlSelfRef.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)));
    vlSelfRef.__PVT__externalInterruptArray_regNext 
        = vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_interrupt;
    vlSelfRef.__PVT__execute_CsrPlugin_wfiWake = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__reset))) 
                                                  && (0U 
                                                      != 
                                                      (((IData)(vlSelfRef.__PVT___zz_when_CsrPlugin_l952_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.__PVT___zz_when_CsrPlugin_l952_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT___zz_when_CsrPlugin_l952)))));
    vlSelfRef.__PVT__CsrPlugin_mip_MEIP = (0U != vlSelfRef.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1);
    if ((1U & (~ (IData)(vlSelfRef.__PVT__execute_arbitration_isStuck)))) {
        vlSelfRef.__PVT__decode_to_execute_ALU_BITWISE_CTRL 
            = (3U & (vlSelfRef.__VdfgRegularize_h1463825b_0_32 
                     >> 0x12U));
        vlSelfRef.__PVT__decode_to_execute_ALU_CTRL 
            = (3U & ((IData)(vlSelfRef.__VdfgRegularize_h1463825b_0_34) 
                     >> 6U));
        vlSelfRef.__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
            = vlSelfRef.__PVT__decode_SRC_LESS_UNSIGNED;
        vlSelfRef.__PVT__decode_to_execute_SRC_USE_SUB_LESS 
            = vlSelfRef.__PVT__decode_SRC_USE_SUB_LESS;
        vlSelfRef.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE 
            = vlSelfRef.__PVT__decode_BYPASSABLE_EXECUTE_STAGE;
        vlSelfRef.__PVT__decode_to_execute_IS_CSR = vlSelfRef.__PVT__decode_IS_CSR;
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__memory_arbitration_isStuckByOthers)))) {
        vlSelfRef.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address 
            = (0xfffffU & (vlSelfRef.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                           >> 2U));
        vlSelfRef.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid 
            = (1U & vlSelfRef.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0);
        vlSelfRef.__PVT__memory_to_writeBack_MUL_HH 
            = vlSelfRef.__PVT__execute_to_memory_MUL_HH;
    }
    vlSelfRef.__PVT__dBusWishbone_DAT_MISO_regNext 
        = vlSymsp->TOP__sim.__PVT__builder_shared_dat_r;
}

extern const VlUnpacked<VlWide<3>/*71:0*/, 4> Vsim__ConstPool__TABLE_hef978607_0;
extern const VlUnpacked<IData/*23:0*/, 4> Vsim__ConstPool__TABLE_hc6edd28f_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_h957f924c_0;

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*1:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*1:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*1:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*1:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*1:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    if (vlSelfRef.__PVT__reset) {
        vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        vlSelfRef.__PVT__CsrPlugin_mstatus_MPIE = 0U;
        vlSelfRef.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        vlSelfRef.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
    } else {
        if (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        }
        if (vlSelfRef.__PVT__when_CsrPlugin_l1019) {
            if ((3U == (IData)(vlSelfRef.__PVT__CsrPlugin_targetPrivilege))) {
                vlSelfRef.__PVT__CsrPlugin_mstatus_MPIE 
                    = vlSelfRef.__PVT__CsrPlugin_mstatus_MIE;
            }
        }
        if (vlSelfRef.__PVT__when_CsrPlugin_l1064) {
            if ((3U == (3U & (vlSelfRef.__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelfRef.__PVT__CsrPlugin_mstatus_MPIE = 1U;
            }
        }
        if (vlSelfRef.__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelfRef.__PVT__execute_CsrPlugin_writeEnable) {
                vlSelfRef.__PVT__CsrPlugin_mstatus_MPIE 
                    = (1U & (vlSelfRef.__PVT__CsrPlugin_csrMapping_writeDataSignal 
                             >> 7U));
            }
        }
        if (vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelfRef.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__memory_arbitration_isStuck)))) {
            vlSelfRef.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 
                = vlSelfRef.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2;
        }
        if (vlSelfRef.__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelfRef.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
        if (vlSelfRef.__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__memory_arbitration_isStuck)))) {
                vlSelfRef.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSelfRef.__PVT__CsrPlugin_pipelineLiberator_pcValids_0;
            }
        }
        if (vlSelfRef.__PVT__when_CsrPlugin_l985) {
            vlSelfRef.__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        }
    }
    vlSelfRef.__PVT__iBusWishbone_DAT_MISO_regNext 
        = vlSymsp->TOP__sim.__PVT__builder_shared_dat_r;
    vlSelfRef.__PVT___zz_iBus_rsp_valid = ((1U & (~ (IData)(vlSelfRef.__PVT__reset))) 
                                           && ((IData)(vlSelfRef.__PVT__iBusWishbone_CYC) 
                                               & (IData)(vlSelfRef.__PVT__iBusWishbone_ACK)));
    if (vlSelfRef.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid) {
        vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
            = vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress;
    }
    vlSelfRef.__PVT___zz_dBus_rsp_valid = ((1U & (~ (IData)(vlSelfRef.__PVT__reset))) 
                                           && (((IData)(vlSelfRef.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                                & (~ (IData)(vlSelfRef.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr))) 
                                               & (IData)(vlSelfRef.__PVT__dBusWishbone_ACK)));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__execute_arbitration_isStuck)))) {
        vlSelfRef.__PVT__execute_CsrPlugin_csr_2816 
            = (0xb00U == (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U));
        vlSelfRef.__PVT__execute_CsrPlugin_csr_2944 
            = (0xb80U == (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U));
        vlSelfRef.__PVT__execute_CsrPlugin_csr_2818 
            = (0xb02U == (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U));
        vlSelfRef.__PVT__execute_CsrPlugin_csr_2946 
            = (0xb82U == (vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U));
        vlSelfRef.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE 
            = vlSelfRef.__PVT__decode_BYPASSABLE_MEMORY_STAGE;
        vlSelfRef.__PVT__decode_to_execute_SHIFT_CTRL 
            = (3U & (vlSelfRef.__VdfgRegularize_h1463825b_0_31 
                     >> 0x15U));
    }
    vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_valid 
        = (1U & ((IData)(vlSelfRef.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                 >> 7U));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__memory_arbitration_isStuck)))) {
        vlSelfRef.__PVT__execute_to_memory_MUL_HH = 
            (0x3ffffffffULL & VL_MULS_QQQ(34, (0x3ffffffffULL 
                                               & VL_EXTENDS_QI(34,17, vlSelfRef.__PVT__execute_MulPlugin_aHigh)), 
                                          (0x3ffffffffULL 
                                           & VL_EXTENDS_QI(34,17, vlSelfRef.__PVT__execute_MulPlugin_bHigh))));
        vlSelfRef.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent 
            = vlSelfRef.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY;
    }
    __Vtableidx33 = vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelfRef.__PVT__memory_SHIFT_CTRL_string[0U] = 
        Vsim__ConstPool__TABLE_hef978607_0[__Vtableidx33][0U];
    vlSelfRef.__PVT__memory_SHIFT_CTRL_string[1U] = 
        Vsim__ConstPool__TABLE_hef978607_0[__Vtableidx33][1U];
    vlSelfRef.__PVT__memory_SHIFT_CTRL_string[2U] = 
        Vsim__ConstPool__TABLE_hef978607_0[__Vtableidx33][2U];
    __Vtableidx56 = vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_hef978607_0[__Vtableidx56][0U];
    vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_hef978607_0[__Vtableidx56][1U];
    vlSelfRef.__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_hef978607_0[__Vtableidx56][2U];
    __Vtableidx37 = vlSelfRef.__PVT__decode_to_execute_SRC2_CTRL;
    vlSelfRef.__PVT__execute_SRC2_CTRL_string = Vsim__ConstPool__TABLE_hc6edd28f_0
        [__Vtableidx37];
    __Vtableidx54 = vlSelfRef.__PVT__decode_to_execute_SRC2_CTRL;
    vlSelfRef.__PVT__decode_to_execute_SRC2_CTRL_string 
        = Vsim__ConstPool__TABLE_hc6edd28f_0[__Vtableidx54];
    __Vtableidx39 = vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL;
    vlSelfRef.__PVT__execute_SRC1_CTRL_string[0U] = 
        Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx39][0U];
    vlSelfRef.__PVT__execute_SRC1_CTRL_string[1U] = 
        Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx39][1U];
    vlSelfRef.__PVT__execute_SRC1_CTRL_string[2U] = 
        Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx39][2U];
    __Vtableidx53 = vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL;
    vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx53][0U];
    vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx53][1U];
    vlSelfRef.__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_h957f924c_0[__Vtableidx53][2U];
    vlSelfRef.__PVT___zz_decode_RS2_3 = ((((((vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 0x1fU) 
                                             | (0x40000000U 
                                                & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0x1dU))) 
                                            | ((0x20000000U 
                                                & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0x1bU)) 
                                               | (0x10000000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0x19U)))) 
                                           | (((0x8000000U 
                                                & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0x17U)) 
                                               | (0x4000000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0x15U))) 
                                              | ((0x2000000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0x13U)) 
                                                 | (0x1000000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 0x11U))))) 
                                          | ((((0x800000U 
                                                & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0xfU)) 
                                               | (0x400000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0xdU))) 
                                              | ((0x200000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 0xbU)) 
                                                 | (0x100000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 9U)))) 
                                             | (((0x80000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     << 7U)) 
                                                 | (0x40000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 5U))) 
                                                | ((0x20000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       << 3U)) 
                                                   | (0x10000U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         << 1U)))))) 
                                         | (((((0x8000U 
                                                & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 1U)) 
                                               | (0x4000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 3U))) 
                                              | ((0x2000U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 5U)) 
                                                 | (0x1000U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 7U)))) 
                                             | (((0x800U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 9U)) 
                                                 | (0x400U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0xbU))) 
                                                | ((0x200U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0xdU)) 
                                                   | (0x100U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0xfU))))) 
                                            | ((((0x80U 
                                                  & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                     >> 0x11U)) 
                                                 | (0x40U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x13U))) 
                                                | ((0x20U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x15U)) 
                                                   | (0x10U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x17U)))) 
                                               | (((8U 
                                                    & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                       >> 0x19U)) 
                                                   | (4U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x1bU))) 
                                                  | ((2U 
                                                      & (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                         >> 0x1dU)) 
                                                     | (vlSelfRef.__PVT__execute_to_memory_SHIFT_RIGHT 
                                                        >> 0x1fU))))));
    if (vlSelfRef.__PVT__dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid) {
        vlSelfRef.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 
            = vlSelfRef.__PVT__dataCache_1__DOT__ways_0_data_symbol3
            [vlSelfRef.__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelfRef.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 
            = vlSelfRef.__PVT__dataCache_1__DOT__ways_0_data_symbol2
            [vlSelfRef.__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelfRef.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 
            = vlSelfRef.__PVT__dataCache_1__DOT__ways_0_data_symbol1
            [vlSelfRef.__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelfRef.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read 
            = vlSelfRef.__PVT__dataCache_1__DOT__ways_0_data_symbol0
            [vlSelfRef.__PVT__dataCache_1__DOT__dataReadCmd_payload];
    }
    vlSelfRef.__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
        = (((QData)((IData)(vlSelfRef.__PVT__memory_DivPlugin_accumulator[0U])) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.__PVT__memory_DivPlugin_rs1 
                                                    >> 0x1fU))))));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__17(Vsim_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_sequent__TOP__sim__VexRiscv__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reset = (((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_int_rst) 
                               | (IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_soc_rst)) 
                              | ((IData)(vlSymsp->TOP__sim.__PVT__build_soc_coursesimsoc_reset_storage) 
                                 >> 1U));
}

VL_INLINE_OPT void Vsim_VexRiscv___nba_comb__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___nba_comb__TOP__sim__VexRiscv__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__iBusWishbone_ACK = ((~ (IData)(vlSymsp->TOP__sim.__PVT__builder_grant)) 
                                         & (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
    vlSelfRef.__PVT__dBusWishbone_ACK = ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant) 
                                         & (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
    vlSelfRef.__PVT___zz_dBus_cmd_ready_2 = ((IData)(vlSelfRef.__PVT__dBusWishbone_ACK) 
                                             & (IData)(vlSelfRef.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
    vlSelfRef.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)) 
                 | ((IData)(vlSelfRef.__PVT___zz_dBus_cmd_ready_2) 
                    & ((IData)(vlSelfRef.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                       | (IData)(vlSelfRef.__PVT___zz_dBus_cmd_ready_4)))));
}
