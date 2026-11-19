// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_fetch_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if__0(Vrtlsim_shim_VX_fetch_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_fetch_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[0U] = (IData)((((QData)((IData)(
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                               >> 5U))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                     >> 3U)))));
    vlSelfRef.data[1U] = (((IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                    >> 1U)) << 0x0000001eU) 
                          | (IData)(((((QData)((IData)(
                                                       (0x3fffffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                                   >> 5U))))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                         >> 3U)))) 
                                     >> 0x00000020U)));
    vlSelfRef.data[2U] = ((0x0000001cU & vlSelfRef.data[2U]) 
                          | (3U & ((IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                            >> 1U)) 
                                   >> 2U)));
    vlSelfRef.data[2U] = ((3U & vlSelfRef.data[2U]) 
                          | (0x0000001fU & (((6U & 
                                              ((IData)(
                                                       (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                        >> 1U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata))) 
                                            << 2U)));
}
