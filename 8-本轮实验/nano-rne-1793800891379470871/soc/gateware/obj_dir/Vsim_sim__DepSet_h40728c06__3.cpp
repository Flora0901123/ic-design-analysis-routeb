// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h0f86d765_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h753ac85b_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__37(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__37\n"); );
    // Init
    CData/*7:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    vlSelf->__PVT__builder_litedramwishbone2native0_next_state 
        = Vsim__ConstPool__TABLE_h0f86d765_0[vlSelf->__Vtableidx69];
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
}

VL_INLINE_OPT void Vsim_sim___nba_comb__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_comb__TOP__sim__0\n"); );
    // Body
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
    vlSelf->__PVT__build_soc_coursesimsoc_interrupt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interrupt 
        = ((0xfffffff8U & vlSelf->__PVT__build_soc_coursesimsoc_interrupt) 
           | ((((IData)(vlSelf->__PVT__build_soc_enable_storage) 
                & (IData)(vlSelf->__PVT__build_soc_pending_status)) 
               << 2U) | ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_storage) 
                           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_status)) 
                          << 1U) | (1U & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_status) 
                                           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_storage)) 
                                          | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_status) 
                                              & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_storage)) 
                                             >> 1U))))));
    vlSelf->__PVT__builder_shared_ack = ((((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack) 
                                             | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack)) 
                                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack)) 
                                           | (IData)(vlSelf->__PVT__build_soc_uncached_wb_ack)) 
                                          | (3U == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))) 
                                         | (IData)(vlSelf->__PVT__builder_interface0_ack));
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_shared_dat_r = 0xffffffffU;
        vlSelf->__PVT__builder_shared_ack = 1U;
    }
    if ((1U == (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2) 
                 << 2U) | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1) 
                            << 1U) | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = 0xffffU;
    } else if ((2U == (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2) 
                        << 2U) | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1) 
                                   << 1U) | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we;
    } else if ((4U == (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2) 
                        << 2U) | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1) 
                                   << 1U) | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] 
            = vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] 
            = vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] 
            = vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] 
            = vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we 
            = vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q;
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) {
        vlSelf->__PVT__builder_rhs_self20 = vlSelf->__VdfgExtracted_h34e003a0__0;
        vlSelf->__PVT__builder_rhs_self21 = vlSelf->__PVT__build_soc_coursesimsoc_interface_we;
        vlSelf->__PVT__builder_rhs_self22 = ((IData)(
                                                     ((0U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_payload_addr)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                            & (0U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                             & (0U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid));
    } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) {
        vlSelf->__PVT__builder_rhs_self20 = ((0x3ffe00U 
                                              & (vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                 >> 2U)) 
                                             | (0x1ffU 
                                                & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr));
        vlSelf->__PVT__builder_rhs_self21 = vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we;
        vlSelf->__PVT__builder_rhs_self22 = ((IData)(
                                                     ((0U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                            & (1U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                              & (1U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                             & (1U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid));
    } else {
        vlSelf->__PVT__builder_rhs_self20 = vlSelf->__VdfgExtracted_h2195c0f1__0;
        vlSelf->__PVT__builder_rhs_self21 = (3U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
        vlSelf->__PVT__builder_rhs_self22 = ((IData)(
                                                     ((0U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                            & (2U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                             & (2U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_cmd_valid));
    }
    if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) {
        vlSelf->__PVT__builder_rhs_self23 = vlSelf->__VdfgExtracted_h34e003a0__0;
        vlSelf->__PVT__builder_rhs_self24 = vlSelf->__PVT__build_soc_coursesimsoc_interface_we;
        vlSelf->__PVT__builder_rhs_self25 = ((IData)(
                                                     ((0x200U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_payload_addr)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                            & (0U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                             & (0U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid));
    } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))) {
        vlSelf->__PVT__builder_rhs_self23 = ((0x3ffe00U 
                                              & (vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                 >> 2U)) 
                                             | (0x1ffU 
                                                & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr));
        vlSelf->__PVT__builder_rhs_self24 = vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we;
        vlSelf->__PVT__builder_rhs_self25 = ((IData)(
                                                     ((0x200U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                            & (1U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                              & (1U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                             & (1U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid));
    } else {
        vlSelf->__PVT__builder_rhs_self23 = vlSelf->__VdfgExtracted_h2195c0f1__0;
        vlSelf->__PVT__builder_rhs_self24 = (3U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
        vlSelf->__PVT__builder_rhs_self25 = ((IData)(
                                                     ((0x2000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                            & (2U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                             & (2U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_cmd_valid));
    }
    if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))) {
        vlSelf->__PVT__builder_rhs_self26 = vlSelf->__VdfgExtracted_h34e003a0__0;
        vlSelf->__PVT__builder_rhs_self27 = vlSelf->__PVT__build_soc_coursesimsoc_interface_we;
    } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))) {
        vlSelf->__PVT__builder_rhs_self26 = ((0x3ffe00U 
                                              & (vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                 >> 2U)) 
                                             | (0x1ffU 
                                                & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr));
        vlSelf->__PVT__builder_rhs_self27 = vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we;
    } else {
        vlSelf->__PVT__builder_rhs_self26 = vlSelf->__VdfgExtracted_h2195c0f1__0;
        vlSelf->__PVT__builder_rhs_self27 = (3U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
    }
    if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))) {
        vlSelf->__PVT__builder_rhs_self29 = vlSelf->__VdfgExtracted_h34e003a0__0;
        vlSelf->__PVT__builder_rhs_self30 = vlSelf->__PVT__build_soc_coursesimsoc_interface_we;
    } else if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))) {
        vlSelf->__PVT__builder_rhs_self29 = ((0x3ffe00U 
                                              & (vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                 >> 2U)) 
                                             | (0x1ffU 
                                                & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr));
        vlSelf->__PVT__builder_rhs_self30 = vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we;
    } else {
        vlSelf->__PVT__builder_rhs_self29 = vlSelf->__VdfgExtracted_h2195c0f1__0;
        vlSelf->__PVT__builder_rhs_self30 = (3U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
    }
}

VL_INLINE_OPT void Vsim_sim___nba_comb__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_comb__TOP__sim__1\n"); );
    // Body
    vlSelf->__PVT__builder_rhs_self28 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))
                                          ? ((IData)(
                                                     ((0x400U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_payload_addr)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                            & (0U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                             & (0U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))
                                              ? ((IData)(
                                                         ((0x400U 
                                                           == 
                                                           (0x600U 
                                                            & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                          & (~ 
                                                             ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                                & (1U 
                                                                   == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                               | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                                  & (1U 
                                                                     == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)))) 
                                                              | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                                 & (1U 
                                                                    == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                                 & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid))
                                              : ((IData)(
                                                         ((0x4000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                          & (~ 
                                                             ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                               | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)))) 
                                                              | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))))))) 
                                                 & (IData)(vlSelf->__PVT__build_soc_cmd_valid))));
    vlSelf->__PVT__builder_rhs_self31 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))
                                          ? ((IData)(
                                                     ((0x600U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_payload_addr)) 
                                                      & (~ 
                                                         ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                            & (0U 
                                                               == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)))) 
                                                          | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                             & (0U 
                                                                == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))))))) 
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))
                                              ? ((IData)(
                                                         ((0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                          & (~ 
                                                             ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                                & (1U 
                                                                   == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                               | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                                  & (1U 
                                                                     == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)))) 
                                                              | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                                 & (1U 
                                                                    == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))))))) 
                                                 & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid))
                                              : ((IData)(
                                                         ((0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                          & (~ 
                                                             ((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) 
                                                               | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)))) 
                                                              | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))))))) 
                                                 & (IData)(vlSelf->__PVT__build_soc_cmd_valid))));
    vlSelf->__VdfgTmp_ha6fffd31__0 = (IData)(((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h7bc186f3__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4afca32__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h79c562c2__0))))));
    vlSelf->__VdfgTmp_h32050d13__0 = (IData)(((0x4000U 
                                               == (0x6000U 
                                                   & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h7bc186f3__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4afca32__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h612a0bff__0))))));
    vlSelf->__VdfgTmp_h30f8d590__0 = (IData)(((0U == 
                                               (0x6000U 
                                                & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_he4afca32__0) 
                                                  | (IData)(vlSelf->__VdfgTmp_h180b642d__0)))));
    vlSelf->__VdfgTmp_hb4d28647__0 = (IData)(((0x2000U 
                                               == (0x6000U 
                                                   & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h7bc186f3__0) 
                                                  | (IData)(vlSelf->__VdfgTmp_h180b642d__0)))));
    vlSelf->__PVT__build_soc_coursesimsoc_ibus_ack 
        = ((~ (IData)(vlSelf->__PVT__builder_grant)) 
           & (IData)(vlSelf->__PVT__builder_shared_ack));
    vlSelf->__PVT__build_soc_coursesimsoc_dbus_ack 
        = ((IData)(vlSelf->__PVT__builder_grant) & (IData)(vlSelf->__PVT__builder_shared_ack));
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask 
            = (0xffffU & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we)));
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask = 0U;
    }
    vlSelf->__PVT__builder_litedramcore_roundrobin3_request 
        = ((((IData)(vlSelf->__VdfgTmp_ha6fffd31__0) 
             & (IData)(vlSelf->__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelf->__VdfgTmp_hee7cfa21__0) 
                        & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelf->__VdfgTmp_hca1fd5df__0) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelf->__PVT__builder_litedramcore_roundrobin2_request 
        = ((((IData)(vlSelf->__VdfgTmp_h32050d13__0) 
             & (IData)(vlSelf->__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelf->__VdfgTmp_hd46bfa9e__0) 
                        & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelf->__VdfgTmp_h2ddda157__0) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))));
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
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write0)))));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write1)))));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write2)))));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we 
            = (0xffffU & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask)) 
                          & (- (IData)((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bank_write3)))));
    }
}
