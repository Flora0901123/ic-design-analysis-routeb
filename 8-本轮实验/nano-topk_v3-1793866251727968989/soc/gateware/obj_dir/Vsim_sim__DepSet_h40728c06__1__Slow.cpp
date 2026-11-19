// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__10(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__10\n"); );
    // Body
    vlSelf->__VdfgTmp_hb4d28647__0 = (IData)(((0x2000U 
                                               == (0x6000U 
                                                   & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h7bc186f3__0) 
                                                  | (IData)(vlSelf->__VdfgTmp_h180b642d__0)))));
    vlSelf->__VdfgTmp_hd8d6a76f__0 = ((~ ((IData)(vlSelf->__VdfgTmp_he557e9b8__0) 
                                          | (IData)(vlSelf->__VdfgTmp_hd2f370df__0))) 
                                      & (0U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
    vlSelf->__VdfgTmp_hdc6a83f0__0 = ((~ ((IData)(vlSelf->__VdfgTmp_h7b69a6f5__0) 
                                          | (IData)(vlSelf->__VdfgTmp_hd2f370df__0))) 
                                      & (1U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
    vlSelf->__PVT__builder_litedramcore_roundrobin2_request 
        = ((((IData)(vlSelf->__VdfgTmp_h32050d13__0) 
             & (IData)(vlSelf->__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelf->__VdfgTmp_hd46bfa9e__0) 
                        & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelf->__VdfgTmp_h2ddda157__0) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelf->__VdfgTmp_hf9a94d1e__0 = (IData)(((0U == 
                                               (0x600U 
                                                & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_he4a3dacf__0) 
                                                  | (IData)(vlSelf->__VdfgTmp_h1f2ade1a__0)))));
    vlSelf->__VdfgTmp_h03a3b0c1__0 = (IData)(((0x200U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h783d9b3e__0) 
                                                  | (IData)(vlSelf->__VdfgTmp_h1f2ade1a__0)))));
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n;
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n;
    }
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we;
    } else {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we;
    }
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we;
    } else {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_read_available 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read) 
            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid)) 
              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read) 
                  & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid)) 
                 | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_write_available 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write) 
            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid)) 
              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write) 
                  & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid)) 
                 | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((0xeU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid) 
              & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read)) 
                 & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((0xdU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid) 
               & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read)) 
                  & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write)))) 
              << 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((0xbU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid) 
               & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read)) 
                  & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write)))) 
              << 2U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((7U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid) 
               & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read)) 
                  & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write)))) 
              << 3U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((0xeU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid) 
              & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd) 
                  & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas))) 
                         & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we)))) 
                     | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read) 
                     == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                    & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write) 
                       == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((0xdU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid) 
               & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras) 
                           & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas))) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we)))) 
                      | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read) 
                      == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write) 
                        == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
              << 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((0xbU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid) 
               & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras) 
                           & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas))) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we)))) 
                      | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read) 
                      == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write) 
                        == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
              << 2U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((7U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid) 
               & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras) 
                           & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas))) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we)))) 
                      | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read) 
                      == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write) 
                        == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
              << 3U));
    vlSelf->__PVT__builder_self1 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                     ? 0U : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelf->__PVT__builder_rhs_self15)
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                  ? (IData)(vlSelf->__PVT__builder_rhs_self15)
                                                  : (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a))));
}

extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h0f86d765_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vsim__ConstPool__TABLE_hc65de3ab_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h3ed00fe9_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h4974beee_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__11(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__11\n"); );
    // Init
    CData/*0:0*/ __VdfgExtracted_he2aae220__0;
    __VdfgExtracted_he2aae220__0 = 0;
    CData/*0:0*/ __VdfgExtracted_ha3cbd6f4__0;
    __VdfgExtracted_ha3cbd6f4__0 = 0;
    SData/*9:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*7:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*5:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*5:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    // Body
    if (vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave) {
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[3U];
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelf->__PVT__builder_rhs_self1;
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelf->__PVT__builder_rhs_self1;
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelf->__PVT__builder_rhs_self1;
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelf->__PVT__builder_rhs_self1;
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished 
        = ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part) 
           & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
              >> 3U));
    vlSelf->__PVT__builder_shared_dat_r = (((((((- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__builder_slave_sel_r)))) 
                                                & vlSelf->__PVT__rom_dat0) 
                                               | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                                 >> 1U)))) 
                                                  & vlSelf->__PVT__sram
                                                  [vlSelf->__PVT__sram_adr0])) 
                                              | ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                                >> 2U)))) 
                                                 & vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_dat_r)) 
                                             | ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                               >> 3U)))) 
                                                & vlSelf->__PVT__build_soc_uncached_wb_dat_r)) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                              >> 4U)))) 
                                               & vlSelf->__PVT__build_soc_wb_dat_r)) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                             >> 5U)))) 
                                              & vlSelf->__PVT__builder_interface0_dat_r));
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_shared_dat_r = 0xffffffffU;
    }
    vlSelf->__PVT__build_soc_cmd_ready = (((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
                                           & ((IData)(vlSelf->__VdfgTmp_h30f8d590__0) 
                                              & (8U 
                                                 != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                                          | (((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                                              & ((IData)(vlSelf->__VdfgTmp_hb4d28647__0) 
                                                 & (8U 
                                                    != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                             | (((2U 
                                                  == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h32050d13__0) 
                                                    & (8U 
                                                       != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                                | ((2U 
                                                    == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
                                                   & ((IData)(vlSelf->__VdfgTmp_ha6fffd31__0) 
                                                      & (8U 
                                                         != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))))));
    vlSelf->__Vtableidx69 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_we) 
                              << 7U) | (((((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
                                           & ((IData)(vlSelf->__VdfgTmp_hd8d6a76f__0) 
                                              & (8U 
                                                 != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                                          | (((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                                              & ((IData)(vlSelf->__VdfgTmp_hdc6a83f0__0) 
                                                 & (8U 
                                                    != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                             | (((0U 
                                                  == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
                                                 & ((IData)(vlSelf->__VdfgTmp_h2ddda157__0) 
                                                    & (8U 
                                                       != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                                | ((0U 
                                                    == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
                                                   & ((IData)(vlSelf->__VdfgTmp_hca1fd5df__0) 
                                                      & (8U 
                                                         != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level))))))) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid4) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid) 
                                                             << 2U) 
                                                            | (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state)))))));
    vlSelf->__PVT__builder_litedramwishbone2native0_next_state 
        = Vsim__ConstPool__TABLE_h0f86d765_0[vlSelf->__Vtableidx69];
    vlSelf->__PVT__builder_litedramcore_roundrobin0_request 
        = ((((IData)(vlSelf->__VdfgTmp_h30f8d590__0) 
             & (IData)(vlSelf->__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelf->__VdfgTmp_hf9a94d1e__0) 
                        & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelf->__VdfgTmp_hd8d6a76f__0) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelf->__PVT__builder_litedramcore_roundrobin1_request 
        = ((((IData)(vlSelf->__VdfgTmp_hb4d28647__0) 
             & (IData)(vlSelf->__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelf->__VdfgTmp_h03a3b0c1__0) 
                        & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelf->__VdfgTmp_hdc6a83f0__0) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    __VdfgExtracted_he2aae220__0 = ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)) 
                                       & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)));
    __VdfgExtracted_ha3cbd6f4__0 = ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)) 
                                       & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)));
    __Vtableidx54 = ((0x200U & (((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_write_available)) 
                                 | (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1))) 
                                << 9U)) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_read_available) 
                                            << 8U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_last) 
                                               << 7U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt) 
                                                      & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt) 
                                                         & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt) 
                                                            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt)))) 
                                                     << 5U) 
                                                    | ((0x10U 
                                                        & (((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_read_available)) 
                                                            | (0U 
                                                               == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0))) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_write_available) 
                                                           << 3U) 
                                                          | (IData)(vlSelf->__PVT__builder_litedramcore_multiplexer_state))))))));
    vlSelf->__PVT__builder_litedramcore_multiplexer_next_state 
        = Vsim__ConstPool__TABLE_hc65de3ab_0[__Vtableidx54];
    __Vtableidx71 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids) 
                      << 2U) | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant));
    vlSelf->__PVT__builder_rhs_self8 = Vsim__ConstPool__TABLE_h3ed00fe9_0
        [__Vtableidx71];
    __Vtableidx72 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids) 
                      << 2U) | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant));
    vlSelf->__PVT__builder_rhs_self14 = Vsim__ConstPool__TABLE_h3ed00fe9_0
        [__Vtableidx72];
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate = 0U;
    if (__VdfgExtracted_he2aae220__0) {
        vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge 
            = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n)));
        vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read = 0U;
    if (__VdfgExtracted_ha3cbd6f4__0) {
        vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write 
            = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n)));
        vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we = 0U;
    if (vlSelf->__PVT__builder_rhs_self8) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas 
            = vlSelf->__PVT__builder_t_self0;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras 
            = vlSelf->__PVT__builder_t_self1;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we 
            = vlSelf->__PVT__builder_t_self2;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we = 0U;
    if (vlSelf->__PVT__builder_rhs_self14) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas 
            = vlSelf->__PVT__builder_t_self3;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras 
            = vlSelf->__PVT__builder_t_self4;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we 
            = vlSelf->__PVT__builder_t_self5;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_precharges0 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelf->__PVT__build_soc_coursesimsoc_precharges1 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelf->__PVT__build_soc_coursesimsoc_precharges2 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelf->__PVT__build_soc_coursesimsoc_precharges3 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelf->__PVT__build_soc_coursesimsoc_activates0 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate;
    vlSelf->__PVT__build_soc_coursesimsoc_activates1 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate;
    vlSelf->__PVT__build_soc_coursesimsoc_activates2 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate;
    vlSelf->__PVT__build_soc_coursesimsoc_activates3 
        = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate;
    vlSelf->__PVT__build_soc_coursesimsoc_writes0 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelf->__PVT__build_soc_coursesimsoc_writes1 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelf->__PVT__build_soc_coursesimsoc_writes2 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelf->__PVT__build_soc_coursesimsoc_writes3 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelf->__PVT__build_soc_coursesimsoc_reads0 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read;
    vlSelf->__PVT__build_soc_coursesimsoc_reads1 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read;
    vlSelf->__PVT__build_soc_coursesimsoc_reads2 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read;
    vlSelf->__PVT__build_soc_coursesimsoc_reads3 = vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read;
    __Vtableidx61 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we) 
                                 << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__builder_litedramcore_multiplexer_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready 
        = Vsim__ConstPool__TABLE_h4974beee_0[__Vtableidx61];
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_precharge = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_precharges0) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_precharge 
            = (1U & ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
                     | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_precharge = 0U;
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__12(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__12\n"); );
    // Body
    if (vlSelf->__PVT__build_soc_coursesimsoc_precharges1) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_precharge 
            = (1U & ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
                     | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_precharge = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_precharges2) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_precharge 
            = (1U & ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
                     | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_precharge = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_precharges3) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_precharge 
            = (1U & ((3U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
                     | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate_row = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_activates0) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate 
            = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate_row 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_activates1) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate_row 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address;
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate 
            = (1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate_row = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_activates2) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate 
            = (2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate_row 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate_row = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_activates3) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate 
            = (3U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate_row 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col0 = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_writes0) {
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write0 
            = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col0 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col1 = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_writes1) {
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write1 
            = (1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col1 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col2 = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_writes2) {
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write2 
            = (2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col2 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write3 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col3 = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_writes3) {
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write3 
            = (3U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col3 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_reads0) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_col 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read 
            = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_reads1) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_col 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read 
            = (1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_reads2) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_col 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read 
            = (2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_reads3) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_col 
            = (0x1ffU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read 
            = (3U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
    }
    vlSelf->__VdfgTmp_h6f2610d2__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready) 
                                      & (IData)(vlSelf->__PVT__builder_rhs_self14));
    vlSelf->__PVT__builder_self5 = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                    && ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                         ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                            & (IData)(vlSelf->__PVT__builder_rhs_self17))
                                         : ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                            && (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__builder_rhs_self17)))));
    vlSelf->__PVT__builder_self6 = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                    && ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                         ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                            & (IData)(vlSelf->__PVT__builder_rhs_self18))
                                         : ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                            && (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__builder_rhs_self18)))));
    vlSelf->__PVT__builder_self2 = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                    && ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                         ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas))
                                         : ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                             ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas))
                                             : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas)))));
    vlSelf->__PVT__builder_self3 = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                    && ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                         ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras))
                                         : ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                             ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras))
                                             : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras)))));
    vlSelf->__PVT__builder_self4 = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                    && ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                         ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we))
                                         : ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                             ? (((IData)(vlSelf->__PVT__builder_rhs_self14) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we))
                                             : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready)) 
                                                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 0U;
    if ((((IData)(vlSelf->__PVT__builder_rhs_self14) 
          & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 0U;
    if ((((IData)(vlSelf->__PVT__builder_rhs_self14) 
          & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 0U;
    if ((((IData)(vlSelf->__PVT__builder_rhs_self14) 
          & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 0U;
    if ((((IData)(vlSelf->__PVT__builder_rhs_self14) 
          & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (3U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write0)))));
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h6c91539b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h5f08642a_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__13(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__13\n"); );
    // Init
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write1)))));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col1)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_col)));
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write2)))));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col2)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_col)));
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write3)))));
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col3)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_col)));
        }
    }
    vlSelf->__VdfgTmp_h0bc4cdaf__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                                      & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid));
    vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine0_state;
    if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))) {
        if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 4U;
                } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) {
                    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) {
                        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) {
                            if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge))) {
                                vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 2U;
                            }
                        } else {
                            vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 1U;
                        }
                    } else {
                        vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
                    }
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))) {
        if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))) {
        if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) {
                vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 5U;
            }
        }
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 4U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) {
                if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                     & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge))) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 2U;
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 1U;
            }
        } else {
            vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
        }
    }
    __Vtableidx11 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready 
        = Vsim__ConstPool__TABLE_h6c91539b_0[__Vtableidx11];
    __Vtableidx12 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h5f08642a_0[__Vtableidx12];
    vlSelf->__VdfgTmp_hf3ab4187__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                                      & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid));
    vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine1_state;
    if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))) {
        if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 4U;
                } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) {
                    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) {
                        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) {
                            if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge))) {
                                vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 2U;
                            }
                        } else {
                            vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 1U;
                        }
                    } else {
                        vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
                    }
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))) {
        if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))) {
        if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) {
                vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 5U;
            }
        }
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 4U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) {
                if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                     & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge))) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 2U;
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 1U;
            }
        } else {
            vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
        }
    }
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__14(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__14\n"); );
    // Init
    SData/*8:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    SData/*8:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    SData/*8:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    SData/*8:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    SData/*8:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    SData/*8:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    __Vtableidx22 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready 
        = Vsim__ConstPool__TABLE_h6c91539b_0[__Vtableidx22];
    __Vtableidx23 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h5f08642a_0[__Vtableidx23];
    vlSelf->__VdfgTmp_hf611e082__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                                      & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid));
    vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine2_state;
    if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))) {
        if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 4U;
                } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) {
                    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) {
                        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) {
                            if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge))) {
                                vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 2U;
                            }
                        } else {
                            vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 1U;
                        }
                    } else {
                        vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
                    }
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))) {
        if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))) {
        if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) {
                vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 5U;
            }
        }
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 4U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) {
                if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                     & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge))) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 2U;
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 1U;
            }
        } else {
            vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
        }
    }
    __Vtableidx32 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready 
        = Vsim__ConstPool__TABLE_h6c91539b_0[__Vtableidx32];
    __Vtableidx33 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h5f08642a_0[__Vtableidx33];
    vlSelf->__VdfgTmp_h5a540cc0__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                      & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid));
    vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine3_state;
    if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))) {
        if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 4U;
                } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) {
                    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) {
                        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) {
                            if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge))) {
                                vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 2U;
                            }
                        } else {
                            vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 1U;
                        }
                    } else {
                        vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
                    }
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))) {
        if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready))) {
            vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))) {
        if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) {
                vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 5U;
            }
        }
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 4U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) {
                if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                     & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge))) {
                    vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 2U;
                }
            } else {
                vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 1U;
            }
        } else {
            vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
        }
    }
    __Vtableidx41 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready 
        = Vsim__ConstPool__TABLE_h6c91539b_0[__Vtableidx41];
    __Vtableidx42 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                      << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                 << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state)))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h5f08642a_0[__Vtableidx42];
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] 
                = vlSelf->__PVT__mem_1[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][0U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] 
                = vlSelf->__PVT__mem_1[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][1U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] 
                = vlSelf->__PVT__mem_1[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][2U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] 
                = vlSelf->__PVT__mem_1[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][3U];
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] 
                = vlSelf->__PVT__mem_2[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][0U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] 
                = vlSelf->__PVT__mem_2[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][1U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] 
                = vlSelf->__PVT__mem_2[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][2U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] 
                = vlSelf->__PVT__mem_2[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][3U];
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] 
                = vlSelf->__PVT__mem_3[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][0U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] 
                = vlSelf->__PVT__mem_3[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][1U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] 
                = vlSelf->__PVT__mem_3[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][2U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] 
                = vlSelf->__PVT__mem_3[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][3U];
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] 
                = vlSelf->__PVT__mem_4[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][0U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] 
                = vlSelf->__PVT__mem_4[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][1U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] 
                = vlSelf->__PVT__mem_4[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][2U];
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] 
                = vlSelf->__PVT__mem_4[vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][3U];
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_h0bc4cdaf__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_hf3ab4187__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_hf611e082__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_h5a540cc0__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
              | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
              | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
              | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
              | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h98fe9907_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h83c2b63e_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h753ac85b_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__16(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__16\n"); );
    // Init
    CData/*7:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*3:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*4:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*7:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = 0U;
    __Vtableidx63 = (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                      << 3U) | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                 << 2U) | (IData)(vlSelf->__PVT__builder_litedramcore_state)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2 
        = Vsim__ConstPool__TABLE_h98fe9907_0[__Vtableidx63];
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            if ((3U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
                if (vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready) {
                    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 1U;
                    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 1U;
                    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 
                        = (0x3ffffffU & (vlSelf->__PVT__builder_rhs_self0 
                                         - (IData)(0x800000U)));
                    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 
                        = vlSelf->__PVT__builder_rhs_self5;
                }
            }
        }
        if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd)))) {
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 
                    = (1U & (~ (IData)(vlSelf->__PVT__builder_rhs_self5)));
                if (vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid) {
                    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 
                        = (0xfU & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel) 
                                   | ((IData)(1U) << 
                                      (3U & vlSelf->__PVT__builder_rhs_self0))));
                }
            }
        } else if ((3U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            if (vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready) {
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 
                    = (1U & (~ (IData)(vlSelf->__PVT__builder_rhs_self5)));
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 
                    = (0xfU & ((IData)(1U) << (3U & vlSelf->__PVT__builder_rhs_self0)));
            }
        }
    }
    __Vtableidx64 = (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                      << 4U) | (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                 << 3U) | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_state))));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3 
        = Vsim__ConstPool__TABLE_h83c2b63e_0[__Vtableidx64];
    __Vtableidx70 = (((IData)(vlSelf->__PVT__builder_rhs_self5) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                                 << 6U) | (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid) 
                                               << 4U) 
                                              | (((3U 
                                                   != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state)))))));
    vlSelf->__PVT__builder_litedramwishbone2native1_next_state 
        = Vsim__ConstPool__TABLE_h0f86d765_0[__Vtableidx70];
    __Vtableidx62 = (((IData)(vlSelf->__PVT__builder_rhs_self5) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                                 << 6U) | ((((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) 
                                             | (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished)) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                                                  << 3U) 
                                                 | (((((1U 
                                                        == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
                                                       & ((IData)(vlSelf->__VdfgTmp_hf9a94d1e__0) 
                                                          & (8U 
                                                             != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                                                      | (((1U 
                                                           == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                                                          & ((IData)(vlSelf->__VdfgTmp_h03a3b0c1__0) 
                                                             & (8U 
                                                                != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                                         | (((1U 
                                                              == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
                                                             & ((IData)(vlSelf->__VdfgTmp_hd46bfa9e__0) 
                                                                & (8U 
                                                                   != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
                                                               & ((IData)(vlSelf->__VdfgTmp_hee7cfa21__0) 
                                                                  & (8U 
                                                                     != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level))))))) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_state)))))));
    vlSelf->__PVT__builder_litedramcore_next_state 
        = Vsim__ConstPool__TABLE_h753ac85b_0[__Vtableidx62];
    vlSelf->__PVT__build_soc_coursesimsoc_ibus_ack 
        = ((~ (IData)(vlSelf->__PVT__builder_grant)) 
           & (IData)(vlSelf->__PVT__builder_shared_ack));
    vlSelf->__PVT__build_soc_coursesimsoc_dbus_ack 
        = ((IData)(vlSelf->__PVT__builder_grant) & (IData)(vlSelf->__PVT__builder_shared_ack));
}

VL_ATTR_COLD void Vsim_sim___ctor_var_reset_0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ctor_var_reset_0\n"); );
    // Body
    vlSelf->serial_sink_data = VL_RAND_RESET_I(8);
    vlSelf->serial_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->serial_source_data = VL_RAND_RESET_I(8);
    vlSelf->serial_source_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sim_trace = VL_RAND_RESET_I(1);
    vlSelf->sys_clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_accel_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_aborted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_activates0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_activates1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_activates2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_activates3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col0 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col1 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col2 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col3 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_col = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = VL_RAND_RESET_I(16);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_col = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = VL_RAND_RESET_I(16);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_col = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = VL_RAND_RESET_I(16);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_col = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = VL_RAND_RESET_I(16);
    vlSelf->__PVT__build_soc_coursesimsoc_bus_errors = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_bus_errors_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w);
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_we = VL_RAND_RESET_I(16);
    vlSelf->__PVT__build_soc_coursesimsoc_dbus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_ibus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_int_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_interrupt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3);
    vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_payload_addr = VL_RAND_RESET_I(24);
    vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_ram_we = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_reads0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_reads1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_reads2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_reads3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_reset_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_reset_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_scratch_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_scratch_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_storage = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r = VL_RAND_RESET_I(25);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r = VL_RAND_RESET_I(25);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r = VL_RAND_RESET_I(25);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r = VL_RAND_RESET_I(25);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage = VL_RAND_RESET_I(8);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = VL_RAND_RESET_I(16);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_act_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address = VL_RAND_RESET_I(13);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cke = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_odt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask = VL_RAND_RESET_I(16);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_count = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_re = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_read_available = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_count = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_wait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_count = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_re = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_write_available = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_soc_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_tag_di_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r = VL_RAND_RESET_I(22);
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_en_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_en_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_load_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_load_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_status = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_status = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value_status = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_status = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_status = VL_RAND_RESET_I(2);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_txempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_txfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_coursesimsoc_word_clr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_word_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_writes0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_writes1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_writes2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_coursesimsoc_writes3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_capture_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_capture_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_capture_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_bytes_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_count = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_snapshot = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_bytes_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_count = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_increment = VL_RAND_RESET_I(5);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_snapshot = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_bytes_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_count = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_snapshot = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__build_soc_cpu_traffic_reset_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_cpu_traffic_reset_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_csr_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_enable_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_mem_req_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_mem_req_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_mem_rsp_data);
    vlSelf->__PVT__build_soc_pending_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_pending_status = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_status_status = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr = VL_RAND_RESET_I(26);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = VL_RAND_RESET_I(26);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk = VL_RAND_RESET_I(4);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume = VL_RAND_RESET_I(2);
}
