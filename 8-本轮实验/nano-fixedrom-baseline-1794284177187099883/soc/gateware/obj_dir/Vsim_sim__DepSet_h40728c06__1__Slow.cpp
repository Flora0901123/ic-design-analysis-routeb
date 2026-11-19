// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h778d8ab6_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vsim__ConstPool__TABLE_habaf632a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h7c327a20_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__9(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgExtracted_h1302f6c9__0;
    __VdfgExtracted_h1302f6c9__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h226fc71a__0;
    __VdfgExtracted_h226fc71a__0 = 0;
    SData/*9:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*5:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*5:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    // Body
    vlSelfRef.__PVT__builder_litedramwishbone2native0_next_state 
        = Vsim__ConstPool__TABLE_h778d8ab6_0[vlSelfRef.__Vtableidx69];
    vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_43) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_34) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_33) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_46) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_41) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_39) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_44) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_37) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_35) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    __VdfgExtracted_h1302f6c9__0 = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)) 
                                       & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)));
    __VdfgExtracted_h226fc71a__0 = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)) 
                                       & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)));
    __Vtableidx54 = ((((0x200U & (((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_write_available)) 
                                   | (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1))) 
                                  << 9U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_read_available) 
                                              << 8U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_last) 
                                                << 7U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready) 
                          << 6U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt) 
                                     & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt) 
                                        & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt) 
                                           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt)))) 
                                    << 5U))) | ((0x10U 
                                                 & (((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_read_available)) 
                                                     | (0U 
                                                        == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0))) 
                                                    << 4U)) 
                                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_write_available) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.__PVT__builder_litedramcore_multiplexer_state))));
    vlSelfRef.__PVT__builder_litedramcore_multiplexer_next_state 
        = Vsim__ConstPool__TABLE_habaf632a_0[__Vtableidx54];
    __Vtableidx71 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids) 
                      << 2U) | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant));
    vlSelfRef.__PVT__builder_rhs_self8 = Vsim__ConstPool__TABLE_h7c327a20_0
        [__Vtableidx71];
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid) 
              & (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd) 
                  & ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_3) 
                     | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                 | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read) 
                     == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                    & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write) 
                       == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
             << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid) 
                        & (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_2) 
                               | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                           | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read) 
                               == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                              & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write) 
                                 == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
                       << 2U)) | ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid) 
                                    & (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd) 
                                        & ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_1) 
                                           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                                       | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read) 
                                           == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                                          & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write) 
                                             == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
                                   << 1U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid) 
                                             & (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_0) 
                                                    | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read) 
                                                    == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                                                   & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write) 
                                                      == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes)))))));
    vlSelfRef.__PVT__builder_shared_dat_r = ((IData)(vlSelfRef.__PVT__builder_error)
                                              ? 0xffffffffU
                                              : (((
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__builder_slave_sel_r)))) 
                                                   & vlSelfRef.__PVT__rom_dat0) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                    >> 1U)))) 
                                                     & vlSelfRef.__PVT__sram
                                                     [vlSelfRef.__PVT__sram_adr0])) 
                                                 | ((((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                     >> 2U)))) 
                                                      & vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                       >> 3U)))) 
                                                        & vlSelfRef.__PVT__build_soc_uncached_wb_dat_r)) 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                       >> 4U)))) 
                                                        & vlSelfRef.__PVT__build_soc_wb_dat_r) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                         >> 5U)))) 
                                                          & vlSelfRef.__PVT__builder_interface0_dat_r)))));
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U];
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n)) 
           & (IData)(__VdfgExtracted_h1302f6c9__0));
    vlSelfRef.__PVT__build_soc_coursesimsoc_activates0 
        = ((IData)(__VdfgExtracted_h1302f6c9__0) & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n));
    vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n)) 
           & (IData)(__VdfgExtracted_h226fc71a__0));
    vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_read 
        = ((IData)(__VdfgExtracted_h226fc71a__0) & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self8) 
           & (IData)(vlSelfRef.__PVT__builder_t_self0));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self8) 
           & (IData)(vlSelfRef.__PVT__builder_t_self1));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self8) 
           & (IData)(vlSelfRef.__PVT__builder_t_self2));
    __Vtableidx72 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids) 
                      << 2U) | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant));
    vlSelfRef.__PVT__builder_rhs_self14 = Vsim__ConstPool__TABLE_h7c327a20_0
        [__Vtableidx72];
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges0 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges1 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges2 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges3 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_precharge 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge) 
           & ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
              | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                 >> 0xaU)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_precharge 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge) 
           & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
              | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                 >> 0xaU)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_precharge 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge) 
           & ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
              | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                 >> 0xaU)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_precharge 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge) 
           & ((3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)) 
              | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address) 
                 >> 0xaU)));
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_activates0) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_activate = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_activates1 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_activates2 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_activates3 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate 
            = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate 
            = (1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate 
            = (2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate 
            = (3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_activate = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_activates1 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_activates2 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_activates3 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes0 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes1 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes2 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes3 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write0 
            = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write1 
            = (1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write2 
            = (2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write3 
            = (3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0 
            = (0x1ffU & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes0 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes1 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes2 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_writes3 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write0 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write1 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write2 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write3 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0 = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_read) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads0 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads1 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads2 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads3 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read 
            = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read 
            = (1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read 
            = (2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read 
            = (3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col 
            = (0x1ffU & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads0 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads1 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads2 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads3 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h27d45af0_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__10(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
           & (IData)(vlSelfRef.__PVT__builder_t_self3));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
           & (IData)(vlSelfRef.__PVT__builder_t_self4));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
           & (IData)(vlSelfRef.__PVT__builder_t_self5));
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate_row 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate_row 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate_row 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col1 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col2 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col3 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_col 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_col 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_col 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = 0U;
    __Vtableidx61 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_multiplexer_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready 
        = Vsim__ConstPool__TABLE_h27d45af0_0[__Vtableidx61];
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write0))));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write1))));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write2))));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write3))));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = 0U;
    }
    vlSelfRef.__VdfgRegularize_h8134e6f5_0_0 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__builder_rhs_self14));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
           & (IData)(vlSelfRef.__PVT__builder_rhs_self18));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_17 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__builder_rhs_self17));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_14 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_15 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_16 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we));
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_3 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_ha1e8967d_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h8cf9c1e6_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__11(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    // Body
    __Vtableidx11 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[__Vtableidx11];
    __Vtableidx12 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx12];
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_2 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
        }
    }
    __Vtableidx22 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[__Vtableidx22];
    __Vtableidx23 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx23];
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_1 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
        }
    }
    __Vtableidx32 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[__Vtableidx32];
    __Vtableidx33 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx33];
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_0 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
        }
    }
    vlSelfRef.__Vtableidx41 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                  << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                               << 6U))) 
                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                    << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                              << 4U))) 
                               | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                   << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state)));
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__12(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[vlSelfRef.__Vtableidx41];
    __Vtableidx42 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx42];
    vlSelfRef.__PVT__builder_self6 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                             && (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid))));
    vlSelfRef.__PVT__builder_self5 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_17)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                             && (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_17))));
    vlSelfRef.__PVT__builder_self2 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_14)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_14)
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_18) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas)))));
    vlSelfRef.__PVT__builder_self3 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_15)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_15)
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_18) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras)))));
    vlSelfRef.__PVT__builder_self4 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_16)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_16)
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_18) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we)))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_3) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_2) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_1) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_0) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h1510fe44_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_hf584dcad_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h65dc8184_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__14(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = 0U;
    __Vtableidx63 = (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                      << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                 << 2U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_state)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2 
        = Vsim__ConstPool__TABLE_h1510fe44_0[__Vtableidx63];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if ((3U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
                if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) {
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 
                        = (0x3ffffffU & (vlSelfRef.__PVT__builder_rhs_self0 
                                         - (IData)(0x800000U)));
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 
                        = vlSelfRef.__PVT__builder_rhs_self5;
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd)))) {
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__builder_rhs_self5)));
                if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) {
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 
                        = (0xfU & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel) 
                                   | ((IData)(1U) << 
                                      (3U & vlSelfRef.__PVT__builder_rhs_self0))));
                }
            }
        } else if ((3U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) {
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__builder_rhs_self5)));
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 
                    = (0xfU & ((IData)(1U) << (3U & vlSelfRef.__PVT__builder_rhs_self0)));
            }
        }
    }
    __Vtableidx64 = (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                 << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_state))));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3 
        = Vsim__ConstPool__TABLE_hf584dcad_0[__Vtableidx64];
    __Vtableidx70 = (((((IData)(vlSelfRef.__PVT__builder_rhs_self5) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid) 
                                                << 4U))) 
                     | (((3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)) 
                         << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
                                    << 2U) | (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))));
    vlSelfRef.__PVT__builder_litedramwishbone2native1_next_state 
        = Vsim__ConstPool__TABLE_h778d8ab6_0[__Vtableidx70];
    __Vtableidx62 = (((((IData)(vlSelfRef.__PVT__builder_rhs_self5) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                                  << 6U)) | ((((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) 
                                               | (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished)) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                         << 3U) | (((((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
                                      & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_41) 
                                         & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                                     | (((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                         & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_37) 
                                            & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                        | (((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_34) 
                                               & (8U 
                                                  != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                           | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_32) 
                                                 & (8U 
                                                    != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level))))))) 
                                    << 2U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_state))));
    vlSelfRef.__PVT__builder_litedramcore_next_state 
        = Vsim__ConstPool__TABLE_h65dc8184_0[__Vtableidx62];
    vlSelfRef.__PVT__builder_shared_ack = ((IData)(vlSelfRef.__PVT__builder_error) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_50));
}

VL_ATTR_COLD void Vsim_sim___ctor_var_reset_0(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ctor_var_reset_0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->serial_sink_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9573462725403686387ull);
    vlSelf->serial_sink_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3758950120267853273ull);
    vlSelf->serial_sink_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13511602996822676087ull);
    vlSelf->serial_source_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17344215306608104219ull);
    vlSelf->serial_source_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9973345444914751179ull);
    vlSelf->serial_source_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18327467128597415915ull);
    vlSelf->__PVT__sim_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16134794833742535666ull);
    vlSelf->sys_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7302336598091101382ull);
    vlSelf->__PVT__build_soc_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1094527935132920105ull);
    vlSelf->__PVT__build_soc_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 726810835967766382ull);
    vlSelf->__PVT__build_soc_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17958409790148608813ull);
    vlSelf->__PVT__build_soc_coursesimsoc_aborted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2566095158895757834ull);
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18411101323099641330ull);
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13056695828418196244ull);
    vlSelf->__PVT__build_soc_coursesimsoc_activates0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15775506647206058856ull);
    vlSelf->__PVT__build_soc_coursesimsoc_activates1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11458179019539198882ull);
    vlSelf->__PVT__build_soc_coursesimsoc_activates2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10721780455618097612ull);
    vlSelf->__PVT__build_soc_coursesimsoc_activates3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8888292256638611902ull);
    vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11082075674029806017ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10946761860712518654ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8167989277420055485ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7824534954507856609ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1854566902899580612ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6895450241776207505ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9886253969397222567ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17293086292043756986ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col3 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16150895712987838691ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13558560760396135222ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11539445205762167967ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11344224213394860497ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 95153957364275358ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1728878677269719998ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_col = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5455180315817556305ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data, __VscopeHash, 10101216373485218557ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17706788216088246560ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13544366078910995876ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3009090853493173230ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w, __VscopeHash, 6808476214735638341ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5753298042383518805ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3475041664884908255ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18348664672659935309ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16658317025119423643ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15456193210618598672ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215473811776598750ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_col = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14298773873078248663ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data, __VscopeHash, 5445521649724938346ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15411146572910449913ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11760954075961240744ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12232418974779337976ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w, __VscopeHash, 16825984667753928124ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14604702983626279117ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195978969067816525ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10723154040650700123ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2556375569006150164ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 846902927045677678ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15837265777953371196ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_col = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7090968089298344487ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data, __VscopeHash, 7436815740873899068ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7840257916665419831ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14513769564492578543ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11630663344339840235ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w, __VscopeHash, 11883248921990502033ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14240649257886782916ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7188185205369990185ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7102841998217090214ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8253388986372539569ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6097047739018602085ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14146589235351129775ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_col = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15315226964982081180ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data, __VscopeHash, 14954972299842306530ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17730797690392772642ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10907579495302834573ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1156470746450273124ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w, __VscopeHash, 15812314091308541983ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17395366789569259710ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bus_errors = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 978813926351372825ull);
    vlSelf->__PVT__build_soc_coursesimsoc_bus_errors_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5035834980389359317ull);
    vlSelf->__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17294474178140384954ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r, __VscopeHash, 4658600352979268224ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w, __VscopeHash, 17065653688872069298ull);
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1941490425837824909ull);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2140315568687645772ull);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1654132137565245000ull);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11026964601821528573ull);
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9498785372474067551ull);
    vlSelf->__PVT__build_soc_coursesimsoc_int_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16028509804589158404ull);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 981777416945745596ull);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15742661641589581440ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r, __VscopeHash, 1563568033462720006ull);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5237807488662174630ull);
    vlSelf->__PVT__build_soc_coursesimsoc_interface_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 779986951542057348ull);
    vlSelf->__PVT__build_soc_coursesimsoc_interrupt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3410481812166117936ull);
    vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7996546439375167328ull);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13045240056579723038ull);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13843437415813618704ull);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5207352823233025569ull);
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16986074665046288272ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0, __VscopeHash, 8317146531958199568ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1, __VscopeHash, 15028560545698004293ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2, __VscopeHash, 1127046834460533161ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3, __VscopeHash, 9786906347329074267ull);
    vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3466793824219996186ull);
    vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15391122365895574200ull);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6816144127925839581ull);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17985887202884030764ull);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 432643434885094742ull);
    vlSelf->__PVT__build_soc_coursesimsoc_precharges3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10568917042094038395ull);
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9222969208572470966ull);
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15667923712697351078ull);
    vlSelf->__PVT__build_soc_coursesimsoc_ram_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6666425352396098165ull);
    vlSelf->__PVT__build_soc_coursesimsoc_reads0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16361672638745713912ull);
    vlSelf->__PVT__build_soc_coursesimsoc_reads1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13269572280355604057ull);
    vlSelf->__PVT__build_soc_coursesimsoc_reads2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15435240123961713004ull);
    vlSelf->__PVT__build_soc_coursesimsoc_reads3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7644076882197308774ull);
    vlSelf->__PVT__build_soc_coursesimsoc_reset_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8423443655720257030ull);
    vlSelf->__PVT__build_soc_coursesimsoc_reset_storage = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17815966415392925531ull);
    vlSelf->__PVT__build_soc_coursesimsoc_scratch_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12872231966839731555ull);
    vlSelf->__PVT__build_soc_coursesimsoc_scratch_storage = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17646712352040162074ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12372802305914882625ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_storage = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9734583786700122811ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17665556363856693081ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_storage = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1793585840683883029ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17137690360311392437ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7794413290549272616ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5406817565263803429ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14156208228257155515ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11483147122057683728ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9963749012901636508ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8469109917973701606ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6903267006341386079ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4324635327544925990ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562527757274526118ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 484284525125826364ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18333376755952322776ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17601757335460680949ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5630027009899711253ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16355221234785453967ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12269215444900884854ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14041941452603587907ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9723393149196724512ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 984751977497880776ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4205755031251911380ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3701885990334009104ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9474935712889225585ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10467974835706874973ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 22441765871773918ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13677735024974894175ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5650879693032250970ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6653954082324611427ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2067916008410099580ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16016093302663090803ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8511784375176846156ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9603666838891026383ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9899101137732409110ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4873756061462000521ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5539727128856939345ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11021981034661049465ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4995091800921343259ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17953387194356175413ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12969014452280221233ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10817348346150858802ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9205747029641125694ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5293423270637505299ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15800827988598407025ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2904724462684015057ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15366565177487268115ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349541838107167885ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 961057969575344430ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908053158518008175ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3449236606971511890ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2583933065126062638ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6542423745811064459ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10244451414661397985ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7959150100643448711ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6745660457554617536ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14059514050532748732ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12432159328718637085ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635305288908515916ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6619418557065972626ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12781438322154393288ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2348404350407197403ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3840201057584875237ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18262866137011259877ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10539830422409475973ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16713064531740253312ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17831232422687929770ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2821205257017111630ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16080375167156275228ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12103232012821334235ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18419696816849477803ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6063237063148745553ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5597539779686116765ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2156796623607976950ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3378598985853452115ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16819520834877761332ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13648119557156717719ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3272331768863930209ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12694734232767406396ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2004233498075167609ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4235002290464933052ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9257609863853117537ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5459998511486067280ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11685993476160349812ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11484047518389928368ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4080316179884969890ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9459277586185251456ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14417175888670492897ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11511971337453006572ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15099829391889460841ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15526250528221186499ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16477173193162084427ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12687521545596403420ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4871188124498218754ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16604228109139090831ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6839909356694349036ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4340548636483699033ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17584436230709669086ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10264195475731054849ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14424783333651376956ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7902474741569544682ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8342875064339238167ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8933574890444055406ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2602501721903899968ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8885230302728816691ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7946143445190707082ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4496933232980525102ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16820617061585703968ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2648723291434406502ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372870322724232146ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14120302034324181162ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12270356781040781543ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16260973905078459136ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9843342029750923264ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10126778777566700153ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6170696941470343761ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11718016752888460532ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15907699088323636978ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16528667134725756872ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5272798463493472562ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17060484861839739201ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17148132894648641479ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13074121828710792298ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7910021162158264847ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4417204184673417954ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17912625005120372917ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10906583342618958841ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7101426347380285491ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 679227156274448832ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1382500982594180288ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3282871198547746757ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3250693142105190129ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 365854154887005624ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3001092210850819937ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13402568634858564845ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10222082678974418516ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9281687536021854207ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11991312579991384520ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3584982465040816012ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11745870602297039735ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5449439339067135366ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531056183890257006ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2758098544546201655ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7758421653833459658ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15063882289370442339ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7992188008625889857ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4127551619655985297ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17092600829229103612ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16628611976783300660ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6251775946873621791ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16428300801896928312ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7816086534264208048ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8314825937541594087ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16217131844714649703ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1521647046074123914ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4800351698004503684ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4820921125001495338ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15451898137179417765ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12230210784803290136ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13740793106475817894ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4268014448788999381ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18205852692405288534ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3059946400609021207ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15266510368855709272ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11824313648428807515ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14767059029443954150ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4198343221251795267ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16309721253899343556ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5453088658937527899ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2693519074429671047ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6797380078356603795ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6008364640398852942ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11385211741742968036ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5998822399401628194ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7115842285297476544ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3730030384816698667ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7052769151658709952ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1157458084395288010ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11893840643531651767ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9662171406599605401ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12193768343162025520ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18364341862465169337ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1139975981444832358ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2535282264639420340ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3921970304175862255ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14843967156105505605ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1881877927403954936ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5689736647049064154ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18329545578810374865ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17271048449083827912ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata, __VscopeHash, 10643013786223272362ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9242784316095837491ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8467738230305119981ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10327344079843052856ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10911481496943670349ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12138795032649335733ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17729318731115343341ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16420633013931774394ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15746182119431557345ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3856728982738701947ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4887515919838256124ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13799821060549318940ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13530095433488867272ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13110528411626337306ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata, __VscopeHash, 5883458547400448079ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14071046385700238991ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata, __VscopeHash, 9124652718385811207ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4238765849162208094ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_act_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16481367142962398110ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2756344134443929446ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16633328344333707675ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6827945906880123012ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cke = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17958935034887216281ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 798347236080380020ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_odt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11636837044108852492ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14671847648943201344ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17512400531285100276ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18256519566681765111ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 405376037306435212ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata, __VscopeHash, 4856102481439102479ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18374527057175598773ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14227990601444896316ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2637129144420485322ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13943783690387003686ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 271901400074194749ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3284470194021380159ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10560701736954109634ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10705753924381336792ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status, __VscopeHash, 7851293092028020121ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14731172225964372112ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_read_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18330992376633365237ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7054554060279758229ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12431720548589959588ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4796559830423381777ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9040320845314717637ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1534659199701466146ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15838667228488172897ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata, __VscopeHash, 263282485635344726ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18236752940147652243ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12246185769788542387ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3602780872032261334ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1839723662605677671ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5747728186238903754ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8901883359305796850ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9160826958176015487ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13339121114590333544ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12112175799427986315ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15016955430826707907ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4156835652642437842ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12506931631442181786ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16309502078450955732ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 614270071984153012ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14405271539028144212ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage, __VscopeHash, 5242902137100814647ull);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_write_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7101326689447456013ull);
    vlSelf->__PVT__build_soc_coursesimsoc_soc_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5644632772519855532ull);
    vlSelf->__PVT__build_soc_coursesimsoc_tag_di_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16812674175235299515ull);
    vlSelf->__PVT__build_soc_coursesimsoc_tag_do_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3663401805450195866ull);
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12548656326559592586ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_en_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16475294410216461832ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_en_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18281160630539436225ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10329280410425625211ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15707496226061158942ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_load_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16829031866300174077ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_load_storage = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5442402322929146635ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5687149795992822288ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16795372037231074019ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1661919443413413374ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12890225530447161743ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_storage = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9304488529218935644ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341953226355407509ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3202615543449168282ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13698780528793638218ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5032562547312778353ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 829164391485269789ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10543854393271753770ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value_status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12621768250587834722ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11779714005965069675ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8210314034234419677ull);
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_trigger_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7273265005864967164ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5962078743176179358ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_storage = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14162876798338404419ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15950265563005311338ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4952877601176037696ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_status = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15746197149520666800ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12323653958850942600ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4672842419342323544ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9992035800092847191ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2473422538404986730ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11575053532409377776ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14837152284422435182ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4748594937979294163ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17119719040335143663ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6062455736759029002ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_trigger_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6454155911083946756ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxempty_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8319535596591058439ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxfull_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9084558750807357722ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5451100003921610549ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10404116273315938650ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 506820745085353983ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_status = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16404631660897533998ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15575606487253416003ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4374970416755699239ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16326609170024277341ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13003565109428936550ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5799236107659032156ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4176868631546594193ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10305301759429176985ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12416727848752449504ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10043369147577175521ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5589508118874356470ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_trigger_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7517939892484210723ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_txempty_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15177085384948011759ull);
    vlSelf->__PVT__build_soc_coursesimsoc_uart_txfull_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9490257702352084760ull);
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1807702633428499326ull);
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12530310224960002908ull);
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13577725894061050097ull);
    vlSelf->__PVT__build_soc_coursesimsoc_word_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14032198674287160644ull);
    vlSelf->__PVT__build_soc_coursesimsoc_word_inc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17333949554898373263ull);
    vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12561392741769795995ull);
    vlSelf->__PVT__build_soc_coursesimsoc_writes0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14403702571158878312ull);
    vlSelf->__PVT__build_soc_coursesimsoc_writes1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11930872343882428902ull);
    vlSelf->__PVT__build_soc_coursesimsoc_writes2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15764559394153238522ull);
    vlSelf->__PVT__build_soc_coursesimsoc_writes3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3662977280898880237ull);
    vlSelf->__PVT__build_soc_cpu_traffic_capture_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5174424268504757970ull);
    vlSelf->__PVT__build_soc_cpu_traffic_capture_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16320974355492410963ull);
    vlSelf->__PVT__build_soc_cpu_traffic_capture_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15725386942254420399ull);
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_bytes_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17807633795893588278ull);
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_count = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17893019851405218531ull);
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_snapshot = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1583477948548065873ull);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_bytes_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17789921059793302085ull);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_count = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2901469627905142537ull);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_increment = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9631699251480753692ull);
    vlSelf->__PVT__build_soc_cpu_traffic_dma_snapshot = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17124943474117056809ull);
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_bytes_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17924108051291075421ull);
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_count = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8775982467768324996ull);
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_snapshot = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9732064036569546213ull);
    vlSelf->__PVT__build_soc_cpu_traffic_reset_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2712312710268286091ull);
    vlSelf->__PVT__build_soc_cpu_traffic_reset_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16600768507157101985ull);
    vlSelf->__PVT__build_soc_csr_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2434601639175582018ull);
    vlSelf->__PVT__build_soc_enable_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 613332164029120740ull);
    vlSelf->__PVT__build_soc_enable_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5343398412820434077ull);
    vlSelf->__PVT__build_soc_mem_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7392782435360240454ull);
    vlSelf->__PVT__build_soc_mem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 114088811194811083ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_mem_rsp_data, __VscopeHash, 14671159728359759580ull);
    vlSelf->__PVT__build_soc_pending_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17100883236223576702ull);
    vlSelf->__PVT__build_soc_pending_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11451938240339857731ull);
    vlSelf->__PVT__build_soc_pending_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734260347288277698ull);
    vlSelf->__PVT__build_soc_status_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2402416447289103023ull);
    vlSelf->__PVT__build_soc_status_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7177046122454180597ull);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16002400911818177860ull);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4707930733130031848ull);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11686576149012558019ull);
    vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11296948700887095491ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2004881331489755663ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4733608570918136094ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5986735335017440856ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10247128569532275774ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6077504948723094853ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8352964481609973950ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16927693276678421116ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13931787740456331415ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8374374874652283082ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3336865839800557182ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7060460635310175954ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1716417167486621670ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030856834275585474ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9332973228480358477ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15395866728886506436ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15199778662784518831ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3326174959112868407ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12889299252016215838ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data, __VscopeHash, 4479599577603649990ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6205969024185321008ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7246922016245119310ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2409901894556377792ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 824793462770051268ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10780945452010843237ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15762478036141853769ull);
    VL_SCOPED_RAND_RESET_W(130, vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r, __VscopeHash, 17932977410640434394ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_sink_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10945203564000905581ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 246830937854712513ull);
}

VL_ATTR_COLD void Vsim_sim___ctor_var_reset_1(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ctor_var_reset_1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12737629349736349912ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17645466594216579829ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1550879109402884476ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10770358732252743776ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 72787671648556184ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16617213004372127880ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2355619263166021811ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2629783927853209336ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14126804704670420880ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data, __VscopeHash, 13434219568232972539ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8574471086257665573ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8921675741863200315ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14640867616214449664ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17277665322053009699ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11770210311142872022ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13147101438637371737ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 322919972530039372ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841020835775499743ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6038210119894146657ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12857086711086890422ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data, __VscopeHash, 8800628957367888469ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13518827567391054130ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8368003583944419263ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2556586723100397444ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8653179882607846676ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14743484663593676576ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data, __VscopeHash, 10344439673235985802ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13034069114993573379ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11227128440776337126ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14781052764444721599ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14875344132277796944ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11478089102677432854ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 6124990171484247432ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_sink_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10471322968841829564ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16570784924251632364ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 969383762385507893ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 235088372605471820ull);
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2888824018538014565ull);
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7615894653862932496ull);
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5345295386728388255ull);
    vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_payload_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1357776922045641876ull);
    vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10673578884316132019ull);
    vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3936530508449740632ull);
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16347296468061426842ull);
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11734670209271993148ull);
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6735781067413110530ull);
    vlSelf->__PVT__build_soc_uncached_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8517275503191335358ull);
    vlSelf->__PVT__build_soc_uncached_wb_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11689931779046889295ull);
    vlSelf->__PVT__build_soc_uncached_wb_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15921329536541964601ull);
    vlSelf->__PVT__build_soc_uptime_cycles = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14131406989017880308ull);
    vlSelf->__PVT__build_soc_uptime_cycles_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1934261906826319160ull);
    vlSelf->__PVT__build_soc_uptime_cycles_status = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10125448746891280001ull);
    vlSelf->__PVT__build_soc_uptime_latch_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11743473756774197208ull);
    vlSelf->__PVT__build_soc_uptime_latch_storage = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12763889305529869729ull);
    vlSelf->__PVT__build_soc_wb_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8511375354439858835ull);
    vlSelf->__PVT__builder_count = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3308591803627691345ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18240069471133350407ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11847276014566078096ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17806039564523484895ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2593769782305325766ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7818119738851826539ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1309478308779809000ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4494412670049785897ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7941848575067783512ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13736383813744156905ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16088034457750083632ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14642181993134965974ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15651495688839842263ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161883720685346427ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13944754034823969438ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2259875147447285399ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17423752477678574860ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9820555634292382709ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13073717880958520365ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9748650400564400447ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16377515929362080809ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011314309605116026ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13146263952158435363ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1875933050868094254ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8434126088709309773ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12172901823291170903ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9494350948864856583ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10417395407103076348ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 941599897296709595ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12020471675582913707ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15128533853346275773ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13678740516376690217ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8851851042358254569ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7711819922646841132ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3027541083162268270ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17031658868557985198ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17121671976198179077ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13124568231453653724ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15235056769403307939ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7883342731822585998ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7047626631878014101ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3041382309524179151ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7413159004418491013ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18058315677425004650ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14182039043944367009ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15565747395238038686ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3344197569147442727ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14080156565172766538ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7222389166646666790ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5742192242783905515ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14113610005157599144ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10541829326113261445ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3466988413528753798ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 997411701791681948ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11085451734088987439ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17310461215780394767ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16447729399265430795ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4945668242098662478ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5125333955204261798ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4828096318115673251ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9546705517926306976ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15158497326128252969ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5163084659734684298ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9394549918694396807ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3478278319346039654ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16108814059684058369ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9376901671252525631ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12757469686558543043ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4483887447647982873ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5020736094894034779ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2420540532478567499ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 559354105402158120ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3612074430367766045ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11605307170270040314ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17772778221157309464ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3458366317543972988ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14018645407430287367ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17500768620065780556ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906193471669257724ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11996644206689949130ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5513942019279741093ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1270180051068747164ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981923735247684948ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17143819776179709590ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6111645692941688614ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17709224613442139568ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7967093792675880814ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7847943415883298851ull);
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2843425668619211198ull);
    vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 315720574662854240ull);
    vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12444935109804853405ull);
    vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15636562703973087833ull);
    vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11106806157441765825ull);
    vlSelf->__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15293220030160298136ull);
    vlSelf->__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13245223235937315886ull);
    vlSelf->__PVT__builder_csr_bankarray_sel_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13417020351223610766ull);
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 374837978253047581ull);
    vlSelf->__PVT__builder_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17710191395497850961ull);
    vlSelf->__PVT__builder_fullmemorywe_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9002329062070066481ull);
    vlSelf->__PVT__builder_fullmemorywe_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12752171333840187703ull);
    vlSelf->__PVT__builder_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10431760725942944749ull);
    vlSelf->__PVT__builder_interface0_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15170745969166421244ull);
    vlSelf->__PVT__builder_interface0_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16823723321417318901ull);
    vlSelf->__PVT__builder_interface1_adr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18291994232571894654ull);
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13374047069971677341ull);
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17143813271362830093ull);
    vlSelf->__PVT__builder_interface1_dat_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14230768467932568479ull);
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14747361728850841987ull);
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3849654267181545522ull);
    vlSelf->__PVT__builder_interface1_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10488226151036731242ull);
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 875322948101398270ull);
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10175349660287428589ull);
    vlSelf->__PVT__builder_interface1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4350894785398766849ull);
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3985945280309003032ull);
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5237585513236921952ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11901226622869863823ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine0_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7947945005325003176ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12196088327139954918ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine1_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10667784139409496140ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12660990901960556836ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine2_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2896047610928863989ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14446443081325780855ull);
    vlSelf->__PVT__builder_litedramcore_bankmachine3_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11341669301449738747ull);
    vlSelf->__PVT__builder_litedramcore_multiplexer_next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8220192564320320453ull);
    vlSelf->__PVT__builder_litedramcore_multiplexer_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17439132854289997513ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16898293488513549892ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16764551516739598918ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12555840225073344823ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7802775193260805567ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17713086897009675922ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18338558045131866154ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9856230651620467988ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341034373733772208ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2749386382856216001ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907430291263517616ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14348526914161822327ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2046710563812148722ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1359197889020977149ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4781358923314396062ull);
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8970667151025841692ull);
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2482946433184544665ull);
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14484412226307941006ull);
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6128786192452302005ull);
    vlSelf->__PVT__builder_litedramcore_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 223081098847977082ull);
    vlSelf->__PVT__builder_litedramcore_refresher_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11795798831872698357ull);
    vlSelf->__PVT__builder_litedramcore_refresher_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2198504590647722189ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin0_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16313148373421783257ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin0_request = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8963077914434999579ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin1_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5758162482416552934ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin1_request = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1361149852925093017ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin2_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3993752412776404694ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin2_request = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10649290142343328552ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin3_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14297381031479218472ull);
    vlSelf->__PVT__builder_litedramcore_roundrobin3_request = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15066767533697526505ull);
    vlSelf->__PVT__builder_litedramcore_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10156427315738697023ull);
    vlSelf->__PVT__builder_litedramwishbone2native0_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16494588996968867357ull);
    vlSelf->__PVT__builder_litedramwishbone2native0_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1888854610722792965ull);
    vlSelf->__PVT__builder_litedramwishbone2native1_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13394349047842541250ull);
    vlSelf->__PVT__builder_litedramwishbone2native1_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17128707554442554796ull);
    vlSelf->__PVT__builder_request = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5086530194873534903ull);
    vlSelf->__PVT__builder_rhs_self0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 9452075171230462982ull);
    vlSelf->__PVT__builder_rhs_self1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3356886067043499669ull);
    vlSelf->__PVT__builder_rhs_self10 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12205280889923502592ull);
    vlSelf->__PVT__builder_rhs_self11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16023601272248987552ull);
    vlSelf->__PVT__builder_rhs_self12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4162263398817157375ull);
    vlSelf->__PVT__builder_rhs_self13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 684594900592261332ull);
    vlSelf->__PVT__builder_rhs_self14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8855241406536148538ull);
    vlSelf->__PVT__builder_rhs_self15 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4372304335004357910ull);
    vlSelf->__PVT__builder_rhs_self16 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10034853883325041709ull);
    vlSelf->__PVT__builder_rhs_self17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10108314144775519964ull);
    vlSelf->__PVT__builder_rhs_self18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2771836028412709087ull);
    vlSelf->__PVT__builder_rhs_self19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12656682810559543952ull);
    vlSelf->__PVT__builder_rhs_self2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6898550791578738479ull);
    vlSelf->__PVT__builder_rhs_self20 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7261626161644185088ull);
    vlSelf->__PVT__builder_rhs_self21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6943241608247749159ull);
    vlSelf->__PVT__builder_rhs_self22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14675910468820951744ull);
    vlSelf->__PVT__builder_rhs_self23 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5048031612422236807ull);
    vlSelf->__PVT__builder_rhs_self24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2053080409026133489ull);
    vlSelf->__PVT__builder_rhs_self25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1484491815742263073ull);
    vlSelf->__PVT__builder_rhs_self26 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1584103420770790624ull);
    vlSelf->__PVT__builder_rhs_self27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9986456617575563058ull);
    vlSelf->__PVT__builder_rhs_self28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14604425446556572053ull);
    vlSelf->__PVT__builder_rhs_self29 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15378173801574278912ull);
    vlSelf->__PVT__builder_rhs_self3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8698285122250099215ull);
    vlSelf->__PVT__builder_rhs_self30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11614894093218071775ull);
    vlSelf->__PVT__builder_rhs_self31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9014282092910766088ull);
    vlSelf->__PVT__builder_rhs_self4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 984872270034373076ull);
    vlSelf->__PVT__builder_rhs_self5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14600133785357425546ull);
    vlSelf->__PVT__builder_rhs_self6 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12990212412302090436ull);
    vlSelf->__PVT__builder_rhs_self7 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17047012461083984465ull);
    vlSelf->__PVT__builder_rhs_self8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3832010372494532681ull);
    vlSelf->__PVT__builder_rhs_self9 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12378486752754592181ull);
    vlSelf->__PVT__builder_self0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2737253787593715809ull);
    vlSelf->__PVT__builder_self1 = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18095389586147675884ull);
    vlSelf->__PVT__builder_self2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6420912270197513351ull);
    vlSelf->__PVT__builder_self3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16289651811454117356ull);
    vlSelf->__PVT__builder_self4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6355187328365308748ull);
    vlSelf->__PVT__builder_self5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15779991468535280927ull);
    vlSelf->__PVT__builder_self6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12277499594966213393ull);
    vlSelf->__PVT__builder_shared_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15592496013427014622ull);
    vlSelf->__PVT__builder_shared_dat_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2103386629135528419ull);
    vlSelf->__PVT__builder_slave_sel = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 947233014319811886ull);
    vlSelf->__PVT__builder_slave_sel_r = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14638469951942885265ull);
    vlSelf->__PVT__builder_t_self0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5041420769662662134ull);
    vlSelf->__PVT__builder_t_self1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13559402427261565428ull);
    vlSelf->__PVT__builder_t_self2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13860022690272330126ull);
    vlSelf->__PVT__builder_t_self3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6169030493839436872ull);
    vlSelf->__PVT__builder_t_self4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3388925985249483932ull);
    vlSelf->__PVT__builder_t_self5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4023646347416333704ull);
    vlSelf->__PVT__builder_wishbone2csr_next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2568831251668462106ull);
    vlSelf->__PVT__builder_wishbone2csr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10319642428876589976ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->__PVT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1318411374457351833ull);
    }
    vlSelf->__PVT__rom_dat0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18261490102182092130ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__sram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7876200907025440328ull);
    }
    vlSelf->__PVT__sram_adr0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7631859601901898596ull);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4032165174000709208ull);
    }
    vlSelf->__PVT__mem_adr0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13581139293503917481ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__storage[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6967744052328620840ull);
    }
    vlSelf->__PVT__storage_dat0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11008759732800391247ull);
    vlSelf->__PVT__storage_dat1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2691829541705940851ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__storage_1[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15654753350756652249ull);
    }
    vlSelf->__PVT__storage_1_dat0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18238170054545187141ull);
    vlSelf->__PVT__storage_1_dat1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8149492790143177989ull);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__mem_1[__Vi0], __VscopeHash, 9113698254420012223ull);
    }
    vlSelf->__PVT__mem_1_adr0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10538278729777170319ull);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__mem_2[__Vi0], __VscopeHash, 13584612562203411995ull);
    }
    vlSelf->__PVT__mem_2_adr0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 606448660210760724ull);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__mem_3[__Vi0], __VscopeHash, 691798207765454624ull);
    }
    vlSelf->__PVT__mem_3_adr0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15190400324682364880ull);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__mem_4[__Vi0], __VscopeHash, 13884934403669277629ull);
    }
    vlSelf->__PVT__mem_4_adr0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12071842864078536238ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__storage_2[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8314512570075127425ull);
    }
    vlSelf->__PVT__storage_2_dat0 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15386276226164403585ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__storage_3[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13609614500664523707ull);
    }
    vlSelf->__PVT__storage_3_dat0 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5332175366038460583ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__storage_4[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6996378570072859286ull);
    }
    vlSelf->__PVT__storage_4_dat0 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2582836792610443195ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__storage_5[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4841093040490281283ull);
    }
    vlSelf->__PVT__storage_5_dat0 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16908246251633096473ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tag_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 846400817763685717ull);
    }
    vlSelf->__PVT__tag_mem_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10280331120807425167ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(130, vlSelf->__PVT__storage_6[__Vi0], __VscopeHash, 6355668315766888373ull);
    }
    VL_SCOPED_RAND_RESET_W(130, vlSelf->__PVT__storage_6_dat0, __VscopeHash, 6769268938711430824ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__storage_7[__Vi0] = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 17128327992460221326ull);
    }
    vlSelf->__PVT__storage_7_dat0 = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 11876395361632724943ull);
    vlSelf->__Vcellinp__litex_wishbone_csr_bridge__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3002127226847771476ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain0[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3230947553510622218ull);
    }
    vlSelf->__PVT__data_mem_grain0_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8242107078198063330ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain1[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2910890580954616386ull);
    }
    vlSelf->__PVT__data_mem_grain1_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15667926888566322506ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain2[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16232531336961308800ull);
    }
    vlSelf->__PVT__data_mem_grain2_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16768336894922069600ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain3[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1657494088495496444ull);
    }
    vlSelf->__PVT__data_mem_grain3_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 520772540133281826ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain4[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1337437115939459776ull);
    }
    vlSelf->__PVT__data_mem_grain4_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16485306103268557033ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain5[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 907544841452951121ull);
    }
    vlSelf->__PVT__data_mem_grain5_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10885683104178368245ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain6[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6625035860414743458ull);
    }
    vlSelf->__PVT__data_mem_grain6_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2567744656038932640ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain7[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12507279832272336400ull);
    }
    vlSelf->__PVT__data_mem_grain7_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4872168565135226607ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain8[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1544721885193687304ull);
    }
    vlSelf->__PVT__data_mem_grain8_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2885096308530204869ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain9[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4243438908396590462ull);
    }
    vlSelf->__PVT__data_mem_grain9_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4298212240680193881ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain10[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 552620976356515922ull);
    }
    vlSelf->__PVT__data_mem_grain10_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4222747244528991297ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain11[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7829217696004088613ull);
    }
    vlSelf->__PVT__data_mem_grain11_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11955706829561569357ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain12[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6050761491067301195ull);
    }
    vlSelf->__PVT__data_mem_grain12_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1128690375624040755ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain13[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6013703825731521309ull);
    }
    vlSelf->__PVT__data_mem_grain13_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10749641339374298192ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain14[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2311317466448844760ull);
    }
    vlSelf->__PVT__data_mem_grain14_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13797303354085015899ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__data_mem_grain15[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6133284967911826816ull);
    }
    vlSelf->__PVT__data_mem_grain15_adr0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4390535072413100118ull);
    VL_SCOPED_RAND_RESET_W(130, vlSelf->__Vlvbound_h43db630d__0, __VscopeHash, 13550138984023007104ull);
    vlSelf->__Vlvbound_he973b6be__0 = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 13944426289782288251ull);
    vlSelf->__VdfgExtracted_h4523c57b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7646038160015437685ull);
    vlSelf->__VdfgExtracted_h9204c5e2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 934151324661012617ull);
    vlSelf->__VdfgExtracted_h25346117__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14760415307323162578ull);
    vlSelf->__VdfgExtracted_h24fc13b9__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13555453601973468910ull);
    vlSelf->__VdfgExtracted_h2533be31__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12948564481171479463ull);
    vlSelf->__VdfgExtracted_hef687232__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10315894534931645133ull);
    vlSelf->__VdfgExtracted_he461509c__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12922751680533780758ull);
    vlSelf->__VdfgExtracted_hef761210__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18044134238700377305ull);
    vlSelf->__VdfgExtracted_he461317e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10459649717842489309ull);
    vlSelf->__VdfgExtracted_he460bdc9__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2932416777077798056ull);
    vlSelf->__VdfgExtracted_hef6d69c2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5233151737984276829ull);
    vlSelf->__VdfgExtracted_hef75d414__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2967480494603495619ull);
    vlSelf->__VdfgExtracted_hef6b8ce0__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4456764597921790942ull);
    vlSelf->__VdfgExtracted_h3fb6d6f0__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638766511571727073ull);
    vlSelf->__VdfgExtracted_h3fa7b93a__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10862176847608416175ull);
    vlSelf->__VdfgExtracted_h3fb673d2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18079355829396405244ull);
    vlSelf->__VdfgExtracted_hd4a80050__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12561967490787896046ull);
    vlSelf->__VdfgExtracted_hd5cbde46__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13664559341648301614ull);
    vlSelf->__VdfgExtracted_hd4a8a02a__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17975062276966559766ull);
    vlSelf->__VdfgExtracted_hd5cbbe0c__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11227861801487208658ull);
    vlSelf->__VdfgExtracted_hd5cf6e57__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6990240289971444283ull);
    vlSelf->__VdfgExtracted_hd4a8f9c0__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6815742516363378085ull);
    vlSelf->__VdfgExtracted_hd4a8e03e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12986825884985675805ull);
    vlSelf->__VdfgExtracted_hd4a906da__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5306732570646118540ull);
    vlSelf->__VdfgExtracted_hd4aa8d69__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4751443386344130671ull);
    vlSelf->__VdfgExtracted_hd5d3f333__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13966184358173066238ull);
    vlSelf->__VdfgExtracted_hd4aad40b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9379038398359535567ull);
    vlSelf->__VdfgExtracted_hd5d64fd1__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15083310277739488365ull);
    vlSelf->__VdfgExtracted_hd5d6a382__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6372254378349914231ull);
    vlSelf->__VdfgExtracted_h2bbcf513__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15611301791955118940ull);
    vlSelf->__VdfgExtracted_h2bd466f9__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7115309592274087632ull);
    vlSelf->__VdfgExtracted_h2bc21175__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 116688768583073806ull);
    vlSelf->__VdfgExtracted_h2bd46d67__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17754846180060018120ull);
    vlSelf->__VdfgExtracted_h2bd7170a__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13392541005844619106ull);
    vlSelf->__VdfgExtracted_h2bbd0441__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6795699128253225392ull);
    vlSelf->__VdfgExtracted_h2bbed35f__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6700438672674280092ull);
    vlSelf->__VdfgExtracted_h2bbd244f__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3295742694493062539ull);
    vlSelf->__VdfgExtracted_h2bbd7572__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8174731232942492719ull);
    vlSelf->__VdfgExtracted_h2c2baf8c__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17839347494829728909ull);
    vlSelf->__VdfgExtracted_h2bbc9400__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8658735361239044651ull);
    vlSelf->__VdfgExtracted_h4ea134b4__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16046517618623393310ull);
    vlSelf->__VdfgExtracted_h4ea9d67e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1843301621392683562ull);
    vlSelf->__VdfgExtracted_h4ea15592__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10731144991878706373ull);
    vlSelf->__VdfgExtracted_h4ea9b8e0__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12950069747891196618ull);
    vlSelf->__VdfgExtracted_h4eb468ab__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3040409008649537835ull);
    vlSelf->__VdfgExtracted_h4ea26e04__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7913006192393773417ull);
    vlSelf->__VdfgExtracted_h4ea31b86__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2205192299862090800ull);
    vlSelf->__VdfgExtracted_h4ea08e22__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17825589161713464310ull);
    vlSelf->__VdfgExtracted_h31a84d38__0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11292359366193286795ull);
    vlSelf->__VdfgExtracted_h7410dd27__0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 103486420303707037ull);
    vlSelf->__VdfgRegularize_h32427ced_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8100782456259007351ull);
    vlSelf->__VdfgRegularize_h32427ced_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12106202880416879717ull);
    vlSelf->__VdfgRegularize_h32427ced_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5230968223335128713ull);
    vlSelf->__VdfgRegularize_h32427ced_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18373216299156291372ull);
    vlSelf->__VdfgRegularize_h32427ced_0_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5084861114028732043ull);
    vlSelf->__VdfgRegularize_h32427ced_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18041864209195827422ull);
    vlSelf->__VdfgRegularize_h32427ced_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12936546787410039918ull);
    vlSelf->__VdfgRegularize_h32427ced_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8011249036533053454ull);
    vlSelf->__VdfgRegularize_h32427ced_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9265469120269779411ull);
    vlSelf->__VdfgRegularize_h32427ced_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1266479722668822042ull);
    vlSelf->__VdfgRegularize_h32427ced_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11538808921233063412ull);
    vlSelf->__VdfgRegularize_h32427ced_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15488329348804806935ull);
    vlSelf->__VdfgRegularize_h32427ced_0_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12397969337597189833ull);
    vlSelf->__VdfgRegularize_h32427ced_0_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17276331982887261876ull);
    vlSelf->__VdfgRegularize_h32427ced_0_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1149862815727816563ull);
    vlSelf->__VdfgRegularize_h32427ced_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11960532343969732227ull);
    vlSelf->__VdfgRegularize_h32427ced_0_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14546207118616921392ull);
    vlSelf->__VdfgRegularize_h32427ced_0_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1102927710140963699ull);
    vlSelf->__VdfgRegularize_h32427ced_0_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11913597238382876794ull);
    vlSelf->__VdfgRegularize_h32427ced_0_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2369258379029120241ull);
    vlSelf->__VdfgRegularize_h32427ced_0_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11453167402212933286ull);
    vlSelf->__VdfgRegularize_h32427ced_0_40 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1518082749523327724ull);
    vlSelf->__VdfgRegularize_h32427ced_0_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15968371290074375638ull);
    vlSelf->__VdfgRegularize_h32427ced_0_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11790411948087649917ull);
    vlSelf->__VdfgRegularize_h32427ced_0_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1471147643936468721ull);
    vlSelf->__VdfgRegularize_h32427ced_0_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3791422550486607037ull);
    vlSelf->__VdfgRegularize_h32427ced_0_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1010717807766514325ull);
    vlSelf->__VdfgRegularize_h32427ced_0_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17187766853375512180ull);
    vlSelf->__VdfgRegularize_ha955a8f3_0_0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2255684695162918775ull);
    vlSelf->__VdfgRegularize_h1fae57f4_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4129875524247907786ull);
    vlSelf->__VdfgRegularize_h1fae57f4_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5593163026348805526ull);
    vlSelf->__VdfgRegularize_h1fae57f4_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2871365635533337973ull);
    vlSelf->__VdfgRegularize_h1fae57f4_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5548495588321116948ull);
    vlSelf->__VdfgRegularize_h8134e6f5_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11577775798222256608ull);
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 228953338827842041ull);
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__write_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1063564063981732086ull);
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__addr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15500178847242509019ull);
    vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11445758937906053153ull);
    vlSelf->__PVT__accelerator_shell__DOT__start_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3784089936985973949ull);
    vlSelf->__PVT__accelerator_shell__DOT__pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17936429795847651957ull);
    vlSelf->__PVT__accelerator_shell__DOT__inflight_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6542138442226982212ull);
    vlSelf->__PVT__accelerator_shell__DOT__irq_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10710074149047405435ull);
    vlSelf->__PVT__accelerator_shell__DOT__opcode_cfg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13029116692342659543ull);
    vlSelf->__PVT__accelerator_shell__DOT__opcode_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12269106571052158176ull);
    vlSelf->__PVT__accelerator_shell__DOT__desc_cfg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3850778474824535734ull);
    vlSelf->__PVT__accelerator_shell__DOT__desc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10313751622838273521ull);
    vlSelf->__PVT__accelerator_shell__DOT__status_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1764148121412291428ull);
    vlSelf->__PVT__accelerator_shell__DOT__cycles_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3518475725797655578ull);
    vlSelf->__PVT__accelerator_shell__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14331351576786180489ull);
    vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3237833932808657073ull);
    vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1301391912601722120ull);
    vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17088150431833902399ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2423605804968338703ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 885331174611497653ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__opcode_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10283358147998640361ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__address_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13873510050230663980ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__header_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 662379402438048641ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__reserved_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7653361387112902148ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__litex_descriptor_engine__DOT__descriptor_q, __VscopeHash, 2441392984013577662ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__cycles_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 52068706823915655ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__status_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3507685356103636046ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__request_count_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8826390796659099215ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__response_count_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10789935725812678475ull);
    vlSelf->__PVT__litex_descriptor_engine__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2369186581561536902ull);
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__invalid_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17458534466397240214ull);
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12741467172715269469ull);
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9105806667251327637ull);
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6399118960283724417ull);
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16061755650247948267ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q, __VscopeHash, 3930465149796246406ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q, __VscopeHash, 12849521680747096085ull);
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5069082824896088480ull);
    vlSelf->__Vtableidx18 = 0;
    vlSelf->__Vtableidx28 = 0;
    vlSelf->__Vtableidx41 = 0;
    vlSelf->__Vtableidx51 = 0;
    vlSelf->__Vtableidx69 = 0;
    vlSelf->__VdfgRegularize_h787163e4_0_8 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10392250012433939896ull);
    vlSelf->__VdfgRegularize_h787163e4_0_12 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5424376237148568740ull);
    vlSelf->__VdfgRegularize_h787163e4_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2758971269107831717ull);
    vlSelf->__VdfgRegularize_h787163e4_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5209649013024031512ull);
    vlSelf->__VdfgRegularize_h787163e4_0_16 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3838426421941887099ull);
    vlSelf->__VdfgRegularize_h787163e4_0_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15230632732267378384ull);
    vlSelf->__VdfgRegularize_h787163e4_0_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3269749242627578491ull);
    vlSelf->__VdfgRegularize_h787163e4_0_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16515737031249781218ull);
    vlSelf->__VdfgRegularize_h787163e4_0_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17429568951804034995ull);
    vlSelf->__VdfgRegularize_h787163e4_0_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6073796014261879429ull);
    vlSelf->__VdfgRegularize_h787163e4_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7050178944787886637ull);
    vlSelf->__VdfgRegularize_h787163e4_0_45 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18042517688723413748ull);
    vlSelf->__VdfgRegularize_h787163e4_0_46 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7412830876297199554ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->__VdfgRegularize_h787163e4_0_47, __VscopeHash, 3022834289456036361ull);
    vlSelf->__VdfgRegularize_h787163e4_0_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13904835308363696877ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3819744228870868239ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13649948360124775299ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16146031976449933716ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3112721085761806860ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5705758321653131978ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12635793184428214463ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10395076564631188158ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11067892832027487199ull);
    vlSelf->__VdfgRegularize_h92b32a33_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6022878392837874372ull);
    vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11105087046730115602ull);
    vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14981395267314443433ull);
    vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18156087849392426954ull);
    vlSelf->__Vdly__builder_litedramcore_roundrobin0_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 686376764258291316ull);
    vlSelf->__Vdly__builder_litedramcore_roundrobin1_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11307792426981721722ull);
    vlSelf->__Vdly__builder_litedramcore_roundrobin2_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3081374555374486069ull);
    vlSelf->__Vdly__builder_litedramcore_roundrobin3_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15446955036486172640ull);
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7677010473684432420ull);
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6691566145542670878ull);
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_tccdcon_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 618223862033298496ull);
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_tccdcon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2389573951600727445ull);
    vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2967591026990286625ull);
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10066096601787521651ull);
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7191534774972733136ull);
    vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10033114178589446036ull);
}
