// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

extern const VlUnpacked<CData/*2:0*/, 1024> Vsim__ConstPool__TABLE_hc65de3ab_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h3ed00fe9_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h4974beee_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__26(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__26\n"); );
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
    vlSelf->__PVT__builder_self1 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                     ? 0U : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelf->__PVT__builder_rhs_self15)
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                  ? (IData)(vlSelf->__PVT__builder_rhs_self15)
                                                  : (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a))));
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid6 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid5;
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid6 = 0U;
    }
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
    __VdfgExtracted_he2aae220__0 = ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)) 
                                       & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)));
    __VdfgExtracted_ha3cbd6f4__0 = ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)) 
                                       & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)));
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
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__27(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__27\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 0U;
    if ((((IData)(vlSelf->__PVT__builder_rhs_self14) 
          & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (3U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_precharge = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_precharges0) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_precharge 
            = (1U & ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
                     | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_precharge = 0U;
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

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__28(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__28\n"); );
    // Body
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
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_h0bc4cdaf__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_hf3ab4187__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_hf611e082__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid 
        = ((IData)(vlSelf->__VdfgTmp_h5a540cc0__0) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open));
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
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
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col1)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_col)));
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
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col2)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_col)));
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
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col3)));
        if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read) {
            vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                                | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_col)));
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
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__30(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__30\n"); );
    // Body
    vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q 
        = vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q;
    vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q 
        = vlSelf->__PVT__litex_descriptor_engine__DOT__state_q;
    vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q 
        = vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q;
    vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__addr_q 
        = vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q;
    vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__write_q 
        = vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q;
    vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__state_q 
        = vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q;
    vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q 
        = vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q;
    if (vlSelf->__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        if (((IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q) 
             & (2U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)))) {
            vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q = 0U;
        } else if ((((1U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)) 
                     & (IData)(vlSelf->__PVT__build_soc_mem_req_ready)) 
                    & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__invalid_request))) {
            vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q = 1U;
        }
        if (((IData)(vlSelf->__PVT__accelerator_shell__DOT__pending_q) 
             & (0U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)))) {
            vlSelf->__PVT__accelerator_shell__DOT__inflight_q = 1U;
        }
        if ((2U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
                vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 0U;
            } else if (vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q) {
                vlSelf->__PVT__build_soc_wb_dat_r = vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q;
                vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 3U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
            if (vlSelf->__PVT__build_soc_csr_req_ready) {
                vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 2U;
            }
        } else if ((((IData)(vlSelf->__PVT__builder_rhs_self3) 
                     & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                        >> 4U)) & (IData)(vlSelf->__PVT__builder_rhs_self4))) {
            vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__write_q 
                = vlSelf->__PVT__builder_rhs_self5;
            vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__addr_q 
                = (0xfcU & (vlSelf->__PVT__builder_rhs_self0 
                            << 2U));
            vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q 
                = vlSelf->__PVT__builder_rhs_self1;
            vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 1U;
        }
        if ((8U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                    if (((~ (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                         & (2U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)))) {
                        vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 0U;
                    }
                } else if (vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid14) {
                    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] 
                        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] 
                        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] 
                        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] 
                        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
                    vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 7U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                if (vlSelf->__PVT__build_soc_cmd_ready) {
                    vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 6U;
                }
            } else if (vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2) {
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] = 0U;
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] = 0U;
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] = 0U;
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] = 0U;
                vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 5U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                if (vlSelf->__PVT__build_soc_cmd_ready) {
                    vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 4U;
                }
            } else if (vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid14) {
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
                vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 7U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            if (vlSelf->__PVT__build_soc_cmd_ready) {
                vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 2U;
            }
        } else if (((1U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)) 
                    & ((~ (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__invalid_request)) 
                       & (~ (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))))) {
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q = 0U;
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                = vlSelf->__PVT__build_soc_mem_req_addr;
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[0U] = 0U;
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[1U] = 0U;
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[2U] = 0U;
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[3U] = 0U;
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q = 0U;
            vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 1U;
        }
        if ((2U == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
            vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q = 0U;
        }
        if (((1U == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & (IData)(vlSelf->__PVT__build_soc_csr_req_ready))) {
            vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q = 1U;
            vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q 
                = ((0x80U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                    ? 0xbad0add0U : ((0x40U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                      ? 0xbad0add0U
                                      : ((0x20U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                          ? 0xbad0add0U
                                          : ((0x10U 
                                              & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                              ? ((8U 
                                                  & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? 0xbad0add0U
                                                   : (IData)(
                                                             (vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q 
                                                              >> 0x20U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? (IData)(vlSelf->__PVT__accelerator_shell__DOT__cycles_q)
                                                   : (IData)(vlSelf->__PVT__accelerator_shell__DOT__status_q)))
                                              : ((8U 
                                                  & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? 0U
                                                   : vlSelf->__PVT__accelerator_shell__DOT__desc_cfg)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? (IData)(vlSelf->__PVT__accelerator_shell__DOT__opcode_cfg)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__accelerator_shell__DOT__irq_q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__accelerator_shell__DOT__busy))))))));
        }
        if (((1U == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & ((IData)(vlSelf->__PVT__build_soc_csr_req_ready) 
                & (((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                    & (0xcU == (0xfcU & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q)))) 
                   & vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q)))) {
            vlSelf->__PVT__accelerator_shell__DOT__irq_q = 0U;
        }
        if ((4U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q))) {
            vlSelf->__PVT__accelerator_shell__DOT__inflight_q = 0U;
            vlSelf->__PVT__accelerator_shell__DOT__irq_q = 1U;
        }
    } else {
        vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__inflight_q = 0U;
        vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 0U;
        vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__write_q = 0U;
        vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__addr_q = 0U;
        vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q = 0U;
        vlSelf->__PVT__build_soc_wb_dat_r = 0U;
        vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[0U] = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[1U] = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[2U] = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[3U] = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] = 0U;
        vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__irq_q = 0U;
    }
    vlSelf->__VdfgExtracted_h2195c0f1__0 = ((0x3ffe00U 
                                             & (vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                >> 6U)) 
                                            | (0x1ffU 
                                               & (vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                  >> 4U)));
}

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__31(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__31\n"); );
    // Body
    if (vlSelf->__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        if (((1U == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & (IData)(vlSelf->__PVT__build_soc_csr_req_ready))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                                    vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q 
                                        = vlSelf->__PVT__accelerator_shell__DOT__cycles_q;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((4U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q))) {
            vlSelf->__PVT__accelerator_shell__DOT__status_q 
                = vlSelf->__PVT__litex_descriptor_engine__DOT__status_q;
            vlSelf->__PVT__accelerator_shell__DOT__cycles_q 
                = vlSelf->__PVT__litex_descriptor_engine__DOT__cycles_q;
        }
        if (((0U != (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)) 
             & (4U != (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)))) {
            vlSelf->__PVT__litex_descriptor_engine__DOT__cycles_q 
                = (1ULL + vlSelf->__PVT__litex_descriptor_engine__DOT__cycles_q);
        }
        if ((4U & (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q))) {
            vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 0U;
        } else if ((2U & (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q))) {
                if ((((1U != (0xffU & vlSelf->__PVT__litex_descriptor_engine__DOT__header_q)) 
                      | ((0xffU & (vlSelf->__PVT__litex_descriptor_engine__DOT__header_q 
                                   >> 8U)) != (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__opcode_q))) 
                     | (0U != vlSelf->__PVT__litex_descriptor_engine__DOT__reserved_q))) {
                    vlSelf->__PVT__litex_descriptor_engine__DOT__status_q = 1U;
                }
                vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 4U;
            } else if (((7U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                        | (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))) {
                vlSelf->__PVT__litex_descriptor_engine__DOT__response_count_q 
                    = ((IData)(1U) + vlSelf->__PVT__litex_descriptor_engine__DOT__response_count_q);
                vlSelf->__PVT__litex_descriptor_engine__DOT__outstanding_q = 0U;
                if (vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q) {
                    vlSelf->__PVT__litex_descriptor_engine__DOT__status_q = 5U;
                    vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 4U;
                } else {
                    VL_ASSIGNSEL_WW(512,128,(0x1ffU 
                                             & VL_SHIFTL_III(9,32,32, (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q), 7U)), vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q, vlSelf->__PVT__build_soc_mem_rsp_data);
                    if ((0U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q))) {
                        vlSelf->__PVT__litex_descriptor_engine__DOT__header_q 
                            = vlSelf->__PVT__build_soc_mem_rsp_data[0U];
                    }
                    if ((3U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q))) {
                        vlSelf->__PVT__litex_descriptor_engine__DOT__reserved_q 
                            = vlSelf->__PVT__build_soc_mem_rsp_data[3U];
                    }
                    if ((3U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q))) {
                        vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 3U;
                    } else {
                        vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q)));
                        vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 1U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q))) {
            if (vlSelf->__PVT__build_soc_mem_req_ready) {
                vlSelf->__PVT__litex_descriptor_engine__DOT__request_count_q 
                    = ((IData)(1U) + vlSelf->__PVT__litex_descriptor_engine__DOT__request_count_q);
                vlSelf->__PVT__litex_descriptor_engine__DOT__outstanding_q = 1U;
                vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 2U;
            }
        } else if (vlSelf->__PVT__accelerator_shell__DOT__pending_q) {
            vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q = 0U;
            vlSelf->__PVT__litex_descriptor_engine__DOT__request_count_q = 0U;
            vlSelf->__PVT__litex_descriptor_engine__DOT__response_count_q = 0U;
            vlSelf->__PVT__litex_descriptor_engine__DOT__opcode_q 
                = vlSelf->__PVT__accelerator_shell__DOT__opcode_q;
            vlSelf->__PVT__litex_descriptor_engine__DOT__address_q 
                = vlSelf->__PVT__accelerator_shell__DOT__desc_q;
            vlSelf->__PVT__litex_descriptor_engine__DOT__header_q = 0U;
            vlSelf->__PVT__litex_descriptor_engine__DOT__reserved_q = 0U;
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xaU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xbU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xcU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xdU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xeU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xfU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0xfU];
            vlSelf->__PVT__litex_descriptor_engine__DOT__cycles_q = 0ULL;
            vlSelf->__PVT__litex_descriptor_engine__DOT__status_q = 0U;
            vlSelf->__PVT__litex_descriptor_engine__DOT__outstanding_q = 0U;
            if ((((0U != (0x3fU & vlSelf->__PVT__accelerator_shell__DOT__desc_q)) 
                  | (0U == (IData)(vlSelf->__PVT__accelerator_shell__DOT__opcode_q))) 
                 | (4U < (IData)(vlSelf->__PVT__accelerator_shell__DOT__opcode_q)))) {
                vlSelf->__PVT__litex_descriptor_engine__DOT__status_q = 1U;
                vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 4U;
            } else {
                vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 1U;
            }
        }
        if (((IData)(vlSelf->__PVT__accelerator_shell__DOT__start_raw) 
             & (~ (IData)(vlSelf->__PVT__accelerator_shell__DOT__busy)))) {
            vlSelf->__PVT__accelerator_shell__DOT__pending_q = 1U;
            vlSelf->__PVT__accelerator_shell__DOT__opcode_q 
                = vlSelf->__PVT__accelerator_shell__DOT__opcode_cfg;
            vlSelf->__PVT__accelerator_shell__DOT__desc_q 
                = vlSelf->__PVT__accelerator_shell__DOT__desc_cfg;
        }
        if (((IData)(vlSelf->__PVT__build_soc_accel_cmd_valid) 
             & (0U == (IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__state_q)))) {
            vlSelf->__PVT__accelerator_shell__DOT__pending_q = 0U;
        }
    } else {
        vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q = 0ULL;
        vlSelf->__PVT__accelerator_shell__DOT__status_q = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__cycles_q = 0ULL;
        vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__request_count_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__response_count_q = 0U;
        vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__opcode_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__address_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__header_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__reserved_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xaU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xbU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xcU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xdU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xeU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q[0xfU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->__PVT__litex_descriptor_engine__DOT__cycles_q = 0ULL;
        vlSelf->__PVT__litex_descriptor_engine__DOT__status_q = 0U;
        vlSelf->__PVT__litex_descriptor_engine__DOT__outstanding_q = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__pending_q = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__opcode_q = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__desc_q = 0U;
    }
    vlSelf->__PVT__build_soc_status_status = vlSelf->__PVT__accelerator_shell__DOT__irq_q;
    vlSelf->__PVT__build_soc_pending_status = vlSelf->__PVT__accelerator_shell__DOT__irq_q;
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q 
        = vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q;
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q 
        = vlSelf->__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q;
    vlSelf->__PVT__build_soc_mem_req_addr = (vlSelf->__PVT__litex_descriptor_engine__DOT__address_q 
                                             + ((IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q) 
                                                << 4U));
    if (vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q) {
        vlSelf->__PVT__build_soc_mem_rsp_data[0U] = 0U;
        vlSelf->__PVT__build_soc_mem_rsp_data[1U] = 0U;
        vlSelf->__PVT__build_soc_mem_rsp_data[2U] = 0U;
        vlSelf->__PVT__build_soc_mem_rsp_data[3U] = 0U;
    } else {
        vlSelf->__PVT__build_soc_mem_rsp_data[0U] = 
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U];
        vlSelf->__PVT__build_soc_mem_rsp_data[1U] = 
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U];
        vlSelf->__PVT__build_soc_mem_rsp_data[2U] = 
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U];
        vlSelf->__PVT__build_soc_mem_rsp_data[3U] = 
            vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U];
    }
    vlSelf->__PVT__build_soc_mem_req_ready = ((~ (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)));
    vlSelf->__PVT__build_soc_cmd_valid = ((1U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                          | ((3U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                             | (5U 
                                                == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__invalid_request 
        = (IData)((0x40000000U != (0xf000000fU & vlSelf->__PVT__build_soc_mem_req_addr)));
    vlSelf->__PVT__litex_descriptor_engine__DOT__state_q 
        = vlSelf->__Vdly__litex_descriptor_engine__DOT__state_q;
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__32(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__32\n"); );
    // Body
    vlSelf->__PVT__build_soc_accel_cmd_valid = vlSelf->__PVT__accelerator_shell__DOT__pending_q;
    vlSelf->__PVT__accelerator_shell__DOT__busy = ((IData)(vlSelf->__PVT__accelerator_shell__DOT__inflight_q) 
                                                   | (IData)(vlSelf->__PVT__accelerator_shell__DOT__pending_q));
    if (vlSelf->__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        vlSelf->__PVT__accelerator_shell__DOT__start_raw = 0U;
        if (((1U == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & (IData)(vlSelf->__PVT__build_soc_csr_req_ready))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                                    if (((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                                         & ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                             ? 0xfU
                                             : 0U))) {
                                        vlSelf->__PVT__accelerator_shell__DOT__opcode_cfg 
                                            = (7U & vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q);
                                    }
                                }
                                if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                              >> 2U)))) {
                                    if ((((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                                          & ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 0xfU
                                              : 0U)) 
                                         & vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q)) {
                                        vlSelf->__PVT__accelerator_shell__DOT__start_raw = 1U;
                                    }
                                }
                            }
                            if ((8U & (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                              >> 2U)))) {
                                    if (vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q) {
                                        if (((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 1U : 0U)) {
                                            vlSelf->__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xffffff00U 
                                                    & vlSelf->__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xffU 
                                                      & vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                        if (((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 2U : 0U)) {
                                            vlSelf->__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xffff00ffU 
                                                    & vlSelf->__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xff00U 
                                                      & vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                        if (((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 4U : 0U)) {
                                            vlSelf->__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xff00ffffU 
                                                    & vlSelf->__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xff0000U 
                                                      & vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                        if (((IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 8U : 0U)) {
                                            vlSelf->__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xffffffU 
                                                    & vlSelf->__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xff000000U 
                                                      & vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT__accelerator_shell__DOT__opcode_cfg = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__desc_cfg = 0U;
        vlSelf->__PVT__accelerator_shell__DOT__start_raw = 0U;
    }
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q 
        = vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__write_q;
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q 
        = vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q;
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q 
        = vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__addr_q;
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q 
        = vlSelf->__Vdly__litex_wishbone_csr_bridge__DOT__state_q;
    vlSelf->__PVT__build_soc_csr_req_ready = (1U & 
                                              ((~ (IData)(vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q)) 
                                               | (2U 
                                                  == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h98fe9907_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h83c2b63e_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h0f86d765_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__34(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__34\n"); );
    // Init
    CData/*3:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*4:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*7:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
    vlSelf->__PVT__build_soc_uncached_wb_ack = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        if (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid) 
             & (3U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))) {
            vlSelf->__PVT__build_soc_uncached_wb_ack 
                = ((IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted)));
        }
    } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        if (vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid) {
            vlSelf->__PVT__build_soc_uncached_wb_ack 
                = ((IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted)));
        }
    }
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid13 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid12;
    vlSelf->__PVT__build_soc_coursesimsoc_ram_we = 
        ((0xfffffff8U & (((IData)(vlSelf->__VdfgTmp_he06a0c02__0) 
                          << 3U) & (IData)(vlSelf->__PVT__builder_rhs_self2))) 
         | ((0xfffffffcU & (((IData)(vlSelf->__VdfgTmp_he06a0c02__0) 
                             << 2U) & (IData)(vlSelf->__PVT__builder_rhs_self2))) 
            | (3U & ((- (IData)((IData)(vlSelf->__VdfgTmp_he06a0c02__0))) 
                     & (IData)(vlSelf->__PVT__builder_rhs_self2)))));
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd)))) {
                vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready 
                    = vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid;
            }
        } else if ((3U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready 
                = ((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock)));
        }
    }
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
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid12 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid11;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid11 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid10;
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid13 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid12 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid11 = 0U;
    }
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0 
        = (((((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready)) 
             | ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready))) 
            | ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready))) 
           | ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready)));
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1 
        = (((((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready)) 
             | ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready))) 
            | ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready))) 
           | ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready)));
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2 
        = (((((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready)) 
             | ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready))) 
            | ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready))) 
           | ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready)));
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid0 
        = (((((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid)) 
             | ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid))) 
            | ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid))) 
           | ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid)));
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid5 
        = (((((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid)) 
             | ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid))) 
            | ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid))) 
           | ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid)));
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid10 
        = (((((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid)) 
             | ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid))) 
            | ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid))) 
           | ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid)));
    if ((1U & (~ ((IData)(vlSelf->__PVT__builder_rhs_self22) 
                  | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock))))) {
        if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) {
            if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = 1U;
            } else if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) {
            if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = 2U;
            } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = 1U;
            }
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h6c91539b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h5f08642a_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__35(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__35\n"); );
    // Init
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
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
    if ((1U & (~ ((IData)(vlSelf->__PVT__builder_rhs_self25) 
                  | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock))))) {
        if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) {
            if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = 1U;
            } else if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) {
            if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = 2U;
            } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = 1U;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__builder_rhs_self28) 
                  | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock))))) {
        if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))) {
            if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = 1U;
            } else if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))) {
            if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = 2U;
            } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = 1U;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__builder_rhs_self31) 
                  | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock))))) {
        if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))) {
            if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = 1U;
            } else if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))) {
            if ((4U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = 2U;
            } else if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = 1U;
            }
        }
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = 0U;
        vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = 0U;
        vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = 0U;
        vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid0 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid5 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid10 = 0U;
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
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid));
    vlSelf->__PVT__builder_litedramcore_roundrobin0_grant 
        = vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant;
    vlSelf->__PVT__builder_litedramcore_roundrobin1_grant 
        = vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant;
    vlSelf->__PVT__builder_litedramcore_roundrobin2_grant 
        = vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant;
    vlSelf->__PVT__builder_litedramcore_roundrobin3_grant 
        = vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1)));
    vlSelf->__PVT__build_soc_coursesimsoc_interface_ack = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid) 
             & (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_ack 
                = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_aborted)));
        }
    } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        if (vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid4) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_ack 
                = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_aborted)));
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h57dc1e83_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h7c9cd53b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_he4e36a3c_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vsim__ConstPool__TABLE_h6d3e899e_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__36(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__36\n"); );
    // Init
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*5:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    CData/*4:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*2:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_int_rst = 0U;
    vlSelf->__VdfgTmp_h7bc186f3__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelf->__VdfgTmp_h7b69a6f5__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelf->__VdfgTmp_h783d9b3e__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelf->__VdfgTmp_he4afca32__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelf->__VdfgTmp_he557e9b8__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelf->__VdfgTmp_he4a3dacf__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelf->__VdfgTmp_h79c562c2__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelf->__VdfgTmp_h792c8008__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelf->__VdfgTmp_h79d17063__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelf->__VdfgTmp_h612a0bff__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelf->__VdfgTmp_h61a22bf5__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelf->__VdfgTmp_h613e3806__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)));
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
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all)) 
                 | (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready)));
    __Vtableidx68 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 2U) | (IData)(vlSelf->__PVT__builder_fullmemorywe_state));
    vlSelf->__PVT__build_soc_coursesimsoc_word_inc 
        = Vsim__ConstPool__TABLE_h57dc1e83_0[__Vtableidx68];
    __Vtableidx67 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 4U) | ((8U & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                       >> 0x12U)) | 
                                (((IData)(vlSelf->__VdfgExtracted_h9f6f40cd__0) 
                                  << 2U) | (IData)(vlSelf->__PVT__builder_fullmemorywe_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_word_clr 
        = Vsim__ConstPool__TABLE_h7c9cd53b_0[__Vtableidx67];
    __Vtableidx66 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 5U) | ((0x10U & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                          >> 0x11U)) 
                                | (((IData)(vlSelf->__PVT__builder_rhs_self5) 
                                    << 3U) | (((IData)(vlSelf->__VdfgExtracted_h9f6f40cd__0) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__builder_fullmemorywe_state)))));
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_we 
        = Vsim__ConstPool__TABLE_he4e36a3c_0[__Vtableidx66];
    __Vtableidx65 = ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_cyc) 
                       & (IData)(vlSelf->__PVT__builder_rhs_self4)) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) 
                                 << 4U) | ((8U & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                                  >> 0x12U)) 
                                           | (((IData)(vlSelf->__VdfgExtracted_h9f6f40cd__0) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__builder_fullmemorywe_state)))));
    vlSelf->__PVT__builder_fullmemorywe_next_state 
        = Vsim__ConstPool__TABLE_h6d3e899e_0[__Vtableidx65];
    vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
            if ((3U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) {
                    vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave = 1U;
                }
            }
        }
    }
    vlSelf->__VdfgTmp_hca1fd5df__0 = ((~ ((IData)(vlSelf->__VdfgTmp_h7b69a6f5__0) 
                                          | ((IData)(vlSelf->__VdfgTmp_he557e9b8__0) 
                                             | (IData)(vlSelf->__VdfgTmp_h792c8008__0)))) 
                                      & (3U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
    vlSelf->__VdfgTmp_hee7cfa21__0 = (IData)(((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h783d9b3e__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4a3dacf__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h79d17063__0))))));
    vlSelf->__VdfgTmp_h180b642d__0 = ((IData)(vlSelf->__VdfgTmp_h79c562c2__0) 
                                      | (IData)(vlSelf->__VdfgTmp_h612a0bff__0));
    vlSelf->__VdfgTmp_h2ddda157__0 = ((~ ((IData)(vlSelf->__VdfgTmp_h7b69a6f5__0) 
                                          | ((IData)(vlSelf->__VdfgTmp_he557e9b8__0) 
                                             | (IData)(vlSelf->__VdfgTmp_h61a22bf5__0)))) 
                                      & (2U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
    vlSelf->__VdfgTmp_hd2f370df__0 = ((IData)(vlSelf->__VdfgTmp_h792c8008__0) 
                                      | (IData)(vlSelf->__VdfgTmp_h61a22bf5__0));
    vlSelf->__VdfgTmp_hd46bfa9e__0 = (IData)(((0x400U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h783d9b3e__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4a3dacf__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h613e3806__0))))));
    vlSelf->__VdfgTmp_h1f2ade1a__0 = ((IData)(vlSelf->__VdfgTmp_h79d17063__0) 
                                      | (IData)(vlSelf->__VdfgTmp_h613e3806__0));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready = 0U;
    if (vlSelf->__VdfgExtracted_h15f8c1a4__0) {
        if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid) {
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready 
                = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready;
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part 
        = ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid) 
           & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_we = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave) {
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_we = 0xffffU;
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelf->__PVT__builder_rhs_self1;
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelf->__PVT__builder_rhs_self1;
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelf->__PVT__builder_rhs_self1;
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelf->__PVT__builder_rhs_self1;
        if (((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_cyc) 
               & (IData)(vlSelf->__PVT__builder_rhs_self4)) 
              & (IData)(vlSelf->__PVT__builder_rhs_self5)) 
             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack))) {
            vlSelf->__PVT__build_soc_coursesimsoc_data_port_we 
                = ((((- (IData)((3U == (3U & vlSelf->__PVT__builder_rhs_self0)))) 
                     & (IData)(vlSelf->__PVT__builder_rhs_self2)) 
                    << 0xcU) | ((((- (IData)((2U == 
                                              (3U & vlSelf->__PVT__builder_rhs_self0)))) 
                                  & (IData)(vlSelf->__PVT__builder_rhs_self2)) 
                                 << 8U) | ((((- (IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & vlSelf->__PVT__builder_rhs_self0)))) 
                                             & (IData)(vlSelf->__PVT__builder_rhs_self2)) 
                                            << 4U) 
                                           | ((- (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & vlSelf->__PVT__builder_rhs_self0)))) 
                                              & (IData)(vlSelf->__PVT__builder_rhs_self2)))));
        }
    }
    vlSelf->__Vcellinp__litex_wishbone_csr_bridge__rst_ni 
        = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_int_rst)));
    vlSelf->__Vcellinp__VexRiscv__reset = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_int_rst) 
                                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_soc_rst)) 
                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_reset_storage) 
                                              >> 1U));
    vlSelf->__VdfgTmp_hd8d6a76f__0 = ((~ ((IData)(vlSelf->__VdfgTmp_he557e9b8__0) 
                                          | (IData)(vlSelf->__VdfgTmp_hd2f370df__0))) 
                                      & (0U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
    vlSelf->__VdfgTmp_hdc6a83f0__0 = ((~ ((IData)(vlSelf->__VdfgTmp_h7b69a6f5__0) 
                                          | (IData)(vlSelf->__VdfgTmp_hd2f370df__0))) 
                                      & (1U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
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
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)) 
           & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished 
        = ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part) 
           & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
              >> 3U));
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
}
