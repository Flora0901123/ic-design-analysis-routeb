// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__12(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem_3__v3) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v3][0U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v3][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v3) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v4) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v4][1U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v4][1U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_3__v4));
    }
    if (vlSelfRef.__VdlySet__mem_3__v5) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v5][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v6) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v6][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v6) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v7) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v7][1U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v7][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v7) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v8) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v8][2U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v8][2U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_3__v8));
    }
    if (vlSelfRef.__VdlySet__mem_3__v9) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v9][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v9) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v10) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v10][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v10) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v11) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v11][2U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v11][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v11) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v12) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v12][3U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v12][3U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_3__v12));
    }
    if (vlSelfRef.__VdlySet__mem_3__v13) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v13][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v13) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v14) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_3
                [vlSelfRef.__VdlyDim0__mem_3__v14][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v14) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_3__v15) {
        vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v15][3U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_3[vlSelfRef.__VdlyDim0__mem_3__v15][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_3__v15) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v0) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v0][0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v0][0U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_4__v0));
    }
    if (vlSelfRef.__VdlySet__mem_4__v1) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v1][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v2) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v2][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v3) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v3][0U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v3][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v3) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v4) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v4][1U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v4][1U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_4__v4));
    }
    if (vlSelfRef.__VdlySet__mem_4__v5) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v5][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v6) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v6][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v6) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v7) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v7][1U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v7][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v7) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v8) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v8][2U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v8][2U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_4__v8));
    }
    if (vlSelfRef.__VdlySet__mem_4__v9) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v9][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v9) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v10) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v10][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v10) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v11) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v11][2U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v11][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v11) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v12) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v12][3U] 
            = ((0xffffff00U & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v12][3U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem_4__v12));
    }
    if (vlSelfRef.__VdlySet__mem_4__v13) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v13][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v13) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v14) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.__PVT__mem_4
                [vlSelfRef.__VdlyDim0__mem_4__v14][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v14) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem_4__v15) {
        vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v15][3U] 
            = ((0xffffffU & vlSelfRef.__PVT__mem_4[vlSelfRef.__VdlyDim0__mem_4__v15][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem_4__v15) 
                  << 0x18U));
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_trrdcon_ready;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level 
        = vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_count;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_consume;
    if (vlSelfRef.__VdlySet__storage__v0) {
        vlSelfRef.__PVT__storage[vlSelfRef.__VdlyDim0__storage__v0] 
            = vlSelfRef.__VdlyVal__storage__v0;
    }
    if (vlSelfRef.__VdlySet__storage_7__v0) {
        vlSelfRef.__PVT__storage_7[vlSelfRef.__VdlyDim0__storage_7__v0] 
            = vlSelfRef.__VdlyVal__storage_7__v0;
    }
    if (vlSelfRef.__VdlySet__storage_6__v0) {
        vlSelfRef.__PVT__storage_6[vlSelfRef.__VdlyDim0__storage_6__v0][0U] 
            = vlSelfRef.__VdlyVal__storage_6__v0[0U];
        vlSelfRef.__PVT__storage_6[vlSelfRef.__VdlyDim0__storage_6__v0][1U] 
            = vlSelfRef.__VdlyVal__storage_6__v0[1U];
        vlSelfRef.__PVT__storage_6[vlSelfRef.__VdlyDim0__storage_6__v0][2U] 
            = vlSelfRef.__VdlyVal__storage_6__v0[2U];
        vlSelfRef.__PVT__storage_6[vlSelfRef.__VdlyDim0__storage_6__v0][3U] 
            = vlSelfRef.__VdlyVal__storage_6__v0[3U];
        vlSelfRef.__PVT__storage_6[vlSelfRef.__VdlyDim0__storage_6__v0][4U] 
            = vlSelfRef.__VdlyVal__storage_6__v0[4U];
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h1f6686ad_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h2351faa6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_hd2aee074_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_he06485ad_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h940dac24_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__16(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*5:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*5:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*3:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*5:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*3:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*3:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*2:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*3:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[vlSelfRef.__Vtableidx51];
    __Vtableidx49 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx49];
    __Vtableidx35 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx35];
    __Vtableidx34 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx34];
    __Vtableidx38 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx38];
    __Vtableidx37 = vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx37];
    __Vtableidx29 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[__Vtableidx29];
    __Vtableidx40 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx40];
    __Vtableidx25 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx25];
    __Vtableidx24 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx24];
    __Vtableidx15 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx15];
    __Vtableidx27 = vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx27];
    __Vtableidx19 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[__Vtableidx19];
    __Vtableidx17 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx17];
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
               | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid 
            = (0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_first 
            = (1U & (vlSelfRef.__PVT__storage_2[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume] 
                     >> 0x17U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_last 
            = (1U & (vlSelfRef.__PVT__storage_2[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume] 
                     >> 0x18U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we 
            = (1U & vlSelfRef.__PVT__storage_2[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume]);
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelfRef.__PVT__storage_2
                            [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume] 
                            >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
               | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid 
            = (0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_first 
            = (1U & (vlSelfRef.__PVT__storage_3[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume] 
                     >> 0x17U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_last 
            = (1U & (vlSelfRef.__PVT__storage_3[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume] 
                     >> 0x18U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we 
            = (1U & vlSelfRef.__PVT__storage_3[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume]);
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelfRef.__PVT__storage_3
                            [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume] 
                            >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
               | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid 
            = (0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_first 
            = (1U & (vlSelfRef.__PVT__storage_5[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume] 
                     >> 0x17U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_last 
            = (1U & (vlSelfRef.__PVT__storage_5[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume] 
                     >> 0x18U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we 
            = (1U & vlSelfRef.__PVT__storage_5[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume]);
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelfRef.__PVT__storage_5
                            [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume] 
                            >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
               | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid 
            = (0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_first 
            = (1U & (vlSelfRef.__PVT__storage_4[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume] 
                     >> 0x17U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_last 
            = (1U & (vlSelfRef.__PVT__storage_4[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume] 
                     >> 0x18U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we 
            = (1U & vlSelfRef.__PVT__storage_4[vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume]);
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelfRef.__PVT__storage_4
                            [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume] 
                            >> 1U));
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U] 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[0U];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U] 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[1U];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U] 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[2U];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U] 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[3U];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data 
        = ((0U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
            ? vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[0U]
            : ((1U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
                ? vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[1U]
                : ((2U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
                    ? vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[2U]
                    : vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[3U])));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0;
    vlSelfRef.__VdfgRegularize_h787163e4_0_46 = (((QData)((IData)(
                                                                  (((vlSelfRef.__PVT__data_mem_grain7
                                                                     [vlSelfRef.__PVT__data_mem_grain7_adr0] 
                                                                     << 0x18U) 
                                                                    | (vlSelfRef.__PVT__data_mem_grain6
                                                                       [vlSelfRef.__PVT__data_mem_grain6_adr0] 
                                                                       << 0x10U)) 
                                                                   | ((vlSelfRef.__PVT__data_mem_grain5
                                                                       [vlSelfRef.__PVT__data_mem_grain5_adr0] 
                                                                       << 8U) 
                                                                      | vlSelfRef.__PVT__data_mem_grain4
                                                                      [vlSelfRef.__PVT__data_mem_grain4_adr0])))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_45)));
    vlSelfRef.__VdfgRegularize_h787163e4_0_14 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc)) 
                                                    | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_aborted)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_port_wdata_valid 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_is_ongoing) 
           & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid 
                = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb));
        }
    }
    vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)
            ? (0xffffffU & (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                            >> 2U)) : 0U);
    vlSelfRef.__PVT__builder_interface0_dat_r = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_interface0_dat_r 
                = (vlSelfRef.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                   | (vlSelfRef.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                      | (vlSelfRef.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                         | (vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                            | (vlSelfRef.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                               | (vlSelfRef.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r 
                                  | vlSelfRef.__PVT__builder_csr_bankarray_sram_bus_dat_r))))));
        }
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__17(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_refresher_state))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_ready) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 1U;
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_uart_rx_fifo_consume;
    if (vlSelfRef.__VdlySet__storage_1__v0) {
        vlSelfRef.__PVT__storage_1[vlSelfRef.__VdlyDim0__storage_1__v0] 
            = vlSelfRef.__VdlyVal__storage_1__v0;
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux 
        = vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk 
        = vlSelfRef.__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 0U;
    vlSelfRef.__PVT__build_soc_uptime_cycles = vlSelfRef.__Vdly__build_soc_uptime_cycles;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_clear 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_r) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_timer_value;
    vlSelfRef.__PVT__build_soc_cpu_traffic_capture_q 
        = vlSelfRef.__Vdly__build_soc_cpu_traffic_capture_q;
    vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_count 
        = vlSelfRef.__Vdly__build_soc_cpu_traffic_ibus_count;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_count 
        = vlSelfRef.__Vdly__build_soc_cpu_traffic_dbus_count;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dma_count 
        = vlSelfRef.__Vdly__build_soc_cpu_traffic_dma_count;
    if ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self13 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self1 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras;
    } else if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self13 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self1 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras;
    } else if ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self13 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self1 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras;
    } else {
        vlSelfRef.__PVT__builder_rhs_self13 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self1 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras;
    }
    if ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self19 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self4 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras;
    } else if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self19 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self4 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras;
    } else if ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self19 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self4 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras;
    } else {
        vlSelfRef.__PVT__builder_rhs_self19 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd;
        vlSelfRef.__PVT__builder_t_self4 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_consume;
    if (vlSelfRef.__VdlySet__storage_2__v0) {
        vlSelfRef.__PVT__storage_2[vlSelfRef.__VdlyDim0__storage_2__v0] 
            = vlSelfRef.__VdlyVal__storage_2__v0;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_level;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_consume;
    if (vlSelfRef.__VdlySet__storage_3__v0) {
        vlSelfRef.__PVT__storage_3[vlSelfRef.__VdlyDim0__storage_3__v0] 
            = vlSelfRef.__VdlyVal__storage_3__v0;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_level;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_consume;
    if (vlSelfRef.__VdlySet__storage_5__v0) {
        vlSelfRef.__PVT__storage_5[vlSelfRef.__VdlyDim0__storage_5__v0] 
            = vlSelfRef.__VdlyVal__storage_5__v0;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_level;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_consume;
    if (vlSelfRef.__VdlySet__storage_4__v0) {
        vlSelfRef.__PVT__storage_4[vlSelfRef.__VdlyDim0__storage_4__v0] 
            = vlSelfRef.__VdlyVal__storage_4__v0;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level 
        = vlSelfRef.__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_level;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid8 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid7;
    vlSelfRef.__PVT__builder_self0 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                ? (IData)(vlSelfRef.__PVT__builder_rhs_self16)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                    ? (IData)(vlSelfRef.__PVT__builder_rhs_self16)
                                                    : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done0 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx0 
        = (0x10U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0));
    vlSelfRef.__VdfgRegularize_h787163e4_0_47[0U] = (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_46);
    vlSelfRef.__VdfgRegularize_h787163e4_0_47[1U] = (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h787163e4_0_46 
                                                             >> 0x20U));
    vlSelfRef.__VdfgRegularize_h787163e4_0_47[2U] = 
        (((vlSelfRef.__PVT__data_mem_grain11[vlSelfRef.__PVT__data_mem_grain11_adr0] 
           << 0x18U) | (vlSelfRef.__PVT__data_mem_grain10
                        [vlSelfRef.__PVT__data_mem_grain10_adr0] 
                        << 0x10U)) | ((vlSelfRef.__PVT__data_mem_grain9
                                       [vlSelfRef.__PVT__data_mem_grain9_adr0] 
                                       << 8U) | vlSelfRef.__PVT__data_mem_grain8
                                      [vlSelfRef.__PVT__data_mem_grain8_adr0]));
    vlSelfRef.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_is_ongoing)
            ? (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_14)
            : ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state)) 
               & (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_14)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U] 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read1 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read0;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 1U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_clear) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid8 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read1 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 0U;
    }
    vlSelfRef.__VdfgRegularize_h787163e4_0_16 = ((0x3ffe00U 
                                                  & (vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                     >> 2U)) 
                                                 | (0x1ffU 
                                                    & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr));
    vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid) 
           & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if ((3U == (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel 
                    = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel;
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 1U;
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we 
                    = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we;
            }
        }
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vsim__ConstPool__TABLE_h27b2e0d7_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__19(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__VdfgExtracted_hd5d64fd1__0 = (IData)(
                                                     (0x80bU 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5d6a382__0 = (IData)(
                                                     (0x80cU 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bbcf513__0 = (IData)(
                                                     (0xa00U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bd466f9__0 = (IData)(
                                                     (0xa01U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bc21175__0 = (IData)(
                                                     (0xa02U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bd46d67__0 = (IData)(
                                                     (0xa03U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bd7170a__0 = (IData)(
                                                     (0xa04U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bbd0441__0 = (IData)(
                                                     (0xa05U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bbed35f__0 = (IData)(
                                                     (0xa06U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bbd244f__0 = (IData)(
                                                     (0xa07U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bbd7572__0 = (IData)(
                                                     (0xa08U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2c2baf8c__0 = (IData)(
                                                     (0xa09U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2bbc9400__0 = (IData)(
                                                     (0xa0aU 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4ea134b4__0 = (IData)(
                                                     (0xc00U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4ea9d67e__0 = (IData)(
                                                     (0xc01U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4ea15592__0 = (IData)(
                                                     (0xc02U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4ea9b8e0__0 = (IData)(
                                                     (0xc03U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4eb468ab__0 = (IData)(
                                                     (0xc04U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4ea26e04__0 = (IData)(
                                                     (0xc05U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4ea31b86__0 = (IData)(
                                                     (0xc06U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h4ea08e22__0 = (IData)(
                                                     (0xc07U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a8a02a__0 = (IData)(
                                                     (0x802U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_re) {
        vlSelfRef.__PVT__build_soc_cpu_traffic_capture_storage 
            = (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_re) {
        vlSelfRef.__PVT__build_soc_cpu_traffic_reset_storage 
            = (1U & vlSelfRef.__PVT__builder_interface1_dat_w);
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_cpu_traffic_capture_storage = 0U;
        vlSelfRef.__PVT__build_soc_cpu_traffic_reset_storage = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge = 0U;
    if (((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelfRef.__PVT__storage_2
                         [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume] 
                         >> 0xaU)) != (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge 
                = (1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close)));
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge = 0U;
    if (((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelfRef.__PVT__storage_3
                         [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume] 
                         >> 0xaU)) != (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge 
                = (1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close)));
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge = 0U;
    if (((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelfRef.__PVT__storage_5
                         [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume] 
                         >> 0xaU)) != (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge 
                = (1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close)));
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge = 0U;
    if (((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
         & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelfRef.__PVT__storage_4
                         [vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume] 
                         >> 0xaU)) != (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge 
                = (1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close)));
        }
    }
    __Vtableidx1 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_o) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done0) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_ready) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_refresher_state))));
    vlSelfRef.__PVT__builder_litedramcore_refresher_next_state 
        = Vsim__ConstPool__TABLE_h27b2e0d7_0[__Vtableidx1];
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_last = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramcore_refresher_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_refresher_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done0) {
                vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_last = 1U;
            }
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_refresher_state))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_refresher_state))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 1U;
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done0) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 0U;
        }
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__20(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[0U] 
        = vlSelfRef.__VdfgRegularize_h787163e4_0_47[0U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[1U] 
        = vlSelfRef.__VdfgRegularize_h787163e4_0_47[1U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[2U] 
        = vlSelfRef.__VdfgRegularize_h787163e4_0_47[2U];
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[3U] 
        = (((vlSelfRef.__PVT__data_mem_grain15[vlSelfRef.__PVT__data_mem_grain15_adr0] 
             << 0x18U) | (vlSelfRef.__PVT__data_mem_grain14
                          [vlSelfRef.__PVT__data_mem_grain14_adr0] 
                          << 0x10U)) | ((vlSelfRef.__PVT__data_mem_grain13
                                         [vlSelfRef.__PVT__data_mem_grain13_adr0] 
                                         << 8U) | vlSelfRef.__PVT__data_mem_grain12
                                        [vlSelfRef.__PVT__data_mem_grain12_adr0]));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_clear 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_re) 
           & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_r) 
              >> 1U));
    vlSelfRef.__VdfgExtracted_h4523c57b__0 = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we) 
                                              & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we)) 
           & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_status 
        = (0U == vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value);
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cke 
        = ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_odt 
        = ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_status_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h25346117__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_status_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h25346117__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_pending_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h24fc13b9__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_pending_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h24fc13b9__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2533be31__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2533be31__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef687232__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_he461509c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef761210__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef761210__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_he461317e__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_he461317e__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_he460bdc9__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_he460bdc9__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef6d69c2__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef6d69c2__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef75d414__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef75d414__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef6b8ce0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef6b8ce0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_reset0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h3fb6d6f0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_reset0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h3fb6d6f0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_scratch0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h3fa7b93a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_scratch0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h3fa7b93a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_bus_errors_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h3fb673d2__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_bus_errors_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h3fb673d2__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a80050__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a80050__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5cbde46__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5cbde46__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5cbbe0c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5cbbe0c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5cf6e57__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5cf6e57__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8f9c0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8f9c0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8e03e__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8e03e__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a906da__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a906da__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4aa8d69__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4aa8d69__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5d3f333__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5d3f333__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4aad40b__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4aad40b__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5d64fd1__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5d64fd1__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5d6a382__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd5d6a382__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_load0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbcf513__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_load0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbcf513__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_reload0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bd466f9__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_reload0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bd466f9__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_en0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bc21175__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_en0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bc21175__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_update_value0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bd46d67__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_update_value0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bd46d67__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_value_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bd7170a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_value_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bd7170a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_status_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbd0441__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_status_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbd0441__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_pending_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbed35f__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_pending_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbed35f__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbd244f__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbd244f__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbd7572__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbd7572__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2c2baf8c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2c2baf8c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbc9400__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h2bbc9400__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxtx_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea134b4__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxtx_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea134b4__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txfull_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea9d67e__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txfull_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea9d67e__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxempty_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea15592__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxempty_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea15592__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_status_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea9b8e0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_status_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea9b8e0__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h5ccf91e0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_hf6780eaa_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h557079d2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h69ce9a5a_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h2f46f5f3_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__21(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*7:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    SData/*9:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*7:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*7:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    SData/*9:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*6:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    SData/*9:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*6:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*7:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    CData/*7:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    // Body
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_pending_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4eb468ab__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_pending_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4eb468ab__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea26e04__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea26e04__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txempty_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea31b86__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txempty_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea31b86__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxfull_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea08e22__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxfull_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_h4ea08e22__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8a02a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8a02a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_he461509c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef687232__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel)
                       ? (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel)
                       ? (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel)
                       ? (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel)
                       ? (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr))));
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid7 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid6;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid7 = 0U;
    }
    vlSelfRef.__VdfgRegularize_h92b32a33_0_18 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_ready) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid));
    __Vtableidx9 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                       << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                 << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                               << 4U))) 
                    | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                        << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5ccf91e0_0[__Vtableidx9];
    __Vtableidx10 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_hf6780eaa_0[__Vtableidx10];
    __Vtableidx20 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5ccf91e0_0[__Vtableidx20];
    __Vtableidx21 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_hf6780eaa_0[__Vtableidx21];
    __Vtableidx30 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5ccf91e0_0[__Vtableidx30];
    __Vtableidx31 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_hf6780eaa_0[__Vtableidx31];
    __Vtableidx52 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5ccf91e0_0[__Vtableidx52];
    __Vtableidx53 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_hf6780eaa_0[__Vtableidx53];
    __Vtableidx2 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                       << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                  << 8U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                            << 7U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                         << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                   << 5U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid 
        = Vsim__ConstPool__TABLE_h557079d2_0[__Vtableidx2];
    __Vtableidx26 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                        << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                   << 8U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                             << 7U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                          << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                    << 5U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid 
        = Vsim__ConstPool__TABLE_h557079d2_0[__Vtableidx26];
    __Vtableidx36 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                        << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                   << 8U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                             << 7U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                          << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                    << 5U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid 
        = Vsim__ConstPool__TABLE_h557079d2_0[__Vtableidx36];
    __Vtableidx45 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                        << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                   << 8U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                             << 7U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                          << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                    << 5U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid 
        = Vsim__ConstPool__TABLE_h557079d2_0[__Vtableidx45];
    __Vtableidx5 = ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                      << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                << 5U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_h69ce9a5a_0[__Vtableidx5];
    __Vtableidx16 = ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                       << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                 << 5U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_h69ce9a5a_0[__Vtableidx16];
    __Vtableidx39 = ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                       << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                 << 5U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_h69ce9a5a_0[__Vtableidx39];
    __Vtableidx48 = ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                       << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                 << 5U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_h69ce9a5a_0[__Vtableidx48];
    __Vtableidx7 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                       << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                  << 8U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                            << 7U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                         << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                   << 5U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                   << 3U) 
                                                  | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h2f46f5f3_0[__Vtableidx7];
    vlSelfRef.__Vtableidx18 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                                  << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                             << 8U) 
                                            | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                               << 7U))) 
                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                    << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                              << 5U))) 
                               | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                   << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h2f46f5f3_0[vlSelfRef.__Vtableidx18];
    vlSelfRef.__Vtableidx28 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                                  << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                             << 8U) 
                                            | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                               << 7U))) 
                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                    << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                              << 5U))) 
                               | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                   << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__22(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h2f46f5f3_0[vlSelfRef.__Vtableidx28];
    __Vtableidx50 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                        << 9U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                   << 8U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                             << 7U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                          << 6U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                    << 5U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h2f46f5f3_0[__Vtableidx50];
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r 
        = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r))
            ? vlSelfRef.__VdfgRegularize_h787163e4_0_45
            : ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r))
                ? (IData)((vlSelfRef.__VdfgRegularize_h787163e4_0_46 
                           >> 0x20U)) : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r))
                                          ? vlSelfRef.__VdfgRegularize_h787163e4_0_47[2U]
                                          : vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[3U])));
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U] 
        = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] 
           | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] 
              | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] 
                 | vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U])));
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U] 
        = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] 
           | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] 
              | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] 
                 | vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U])));
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U] 
        = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] 
           | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] 
              | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] 
                 | vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U])));
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U] 
        = (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] 
           | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] 
              | (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] 
                 | vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U])));
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read0 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read) 
           | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read) 
              | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read) 
                 | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_status_status 
        = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable) 
            << 1U) | (0x10U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_clear)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data = 0U;
    if (vlSelfRef.__VdfgExtracted_h4523c57b__0) {
        if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid) {
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we 
                = (0xfU & (IData)((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                   >> 0x20U)));
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data 
                = (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r);
        }
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid 
            = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid)) 
                     | (0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level))));
    } else {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid = 0U;
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)) 
           & ((3U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)) 
              & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready)));
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_payload_data = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished 
        = (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready) 
            & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk) 
               >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)));
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid = 0U;
    if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready) {
        if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid) {
            vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_payload_data 
                = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data;
            vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid 
                = (0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level));
        }
    }
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid1 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid0;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read0 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid1 = 0U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en 
            = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re) 
               & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                  >> 4U));
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en 
            = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re) 
               & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                  >> 5U));
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                       >> 1U))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                       >> 2U))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                        >> 6U)) & (IData)((1U != (0x81U 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage)))))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                       >> 3U))));
    if (vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0) {
        vlSelfRef.__PVT__builder_interface1_dat_w = vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0;
    }
    if ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self9 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
    } else if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self9 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
    } else if ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self9 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
    } else {
        vlSelfRef.__PVT__builder_rhs_self9 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
    }
    if ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self15 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
    } else if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self15 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
    } else if ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self15 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
    } else {
        vlSelfRef.__PVT__builder_rhs_self15 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a;
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_read_available 
        = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read) 
            & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid)) 
           | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid)) 
              | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read) 
                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid)) 
                 | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid)))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_write_available 
        = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write) 
            & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid)) 
           | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid)) 
              | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write) 
                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid)) 
                 | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid)))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid) 
              & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read)) 
                 & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write)))) 
             << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid) 
                        & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read)) 
                           & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write)))) 
                       << 2U)) | ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid) 
                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read)) 
                                       & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write)))) 
                                   << 1U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid) 
                                             & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read)) 
                                                & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write))))));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_0 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we))))));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_1 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we))))));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_2 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we))))));
}

extern const VlUnpacked<CData/*2:0*/, 1024> Vsim__ConstPool__TABLE_habaf632a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h7c327a20_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__23(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__23\n"); );
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
    vlSelfRef.__PVT__builder_t_self2 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                         ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we)
                                         : ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                             ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we)
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                                 ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we)
                                                 : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we))));
    vlSelfRef.__PVT__builder_t_self5 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                         ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we)
                                         : ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                             ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we)
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                 ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we)
                                                 : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we))));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_3 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we))))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
        = (((QData)((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data)));
    vlSelfRef.__PVT__build_soc_uncached_wb_dat_r = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
            if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid) {
                vlSelfRef.__PVT__build_soc_uncached_wb_dat_r 
                    = vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_payload_data;
            }
        }
    }
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n;
    }
    vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 1U;
        }
    }
    vlSelfRef.__PVT__builder_self1 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                ? (IData)(vlSelfRef.__PVT__builder_rhs_self15)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                    ? (IData)(vlSelfRef.__PVT__builder_rhs_self15)
                                                    : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a))));
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid6 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid5;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid6 = 0U;
    }
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
    __VdfgExtracted_h1302f6c9__0 = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)) 
                                       & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)));
    __VdfgExtracted_h226fc71a__0 = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n)) 
                                       & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n)));
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
           & (IData)(vlSelfRef.__PVT__builder_t_self3));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
           & (IData)(vlSelfRef.__PVT__builder_t_self4));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
           & (IData)(vlSelfRef.__PVT__builder_t_self5));
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes0 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes1 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes2 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes3 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write0 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write) 
           & (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write1 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write) 
           & (1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write2 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write) 
           & (2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write3 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write) 
           & (3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank)));
}
