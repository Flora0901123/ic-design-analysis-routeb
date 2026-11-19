// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____0(Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (3U == (3U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__delivered_r) 
                                        | ((~ ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                                << 4U) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                                  >> 0x0000001cU))) 
                                           | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__ready_in_w)))));
}

void Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____1(Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready) 
                           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests));
}
