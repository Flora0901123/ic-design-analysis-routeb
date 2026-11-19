// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__1__KET____0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rsp_data[0U] = (((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[1U] 
                                << 0x0000001dU) | (0x1ffffff0U 
                                                   & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[0U] 
                                                      >> 3U))) 
                              | (0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                >> 1U)));
    vlSelfRef.rsp_data[1U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[1U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[2U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[1U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[2U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[2U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[3U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[2U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[3U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[3U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[4U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[3U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[4U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[4U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[5U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[4U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[5U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[5U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[6U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[5U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[6U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[6U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[7U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[6U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[7U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[7U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[8U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[7U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[8U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[8U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[9U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[8U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[9U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[9U] 
                                              >> 3U)) 
                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[10U] 
                                  << 0x0000001dU) | 
                                 (0x1ffffff0U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[9U] 
                                                 >> 3U))));
    vlSelfRef.rsp_data[10U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[10U] 
                                               >> 3U)) 
                               | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[11U] 
                                   << 0x0000001dU) 
                                  | (0x1ffffff0U & 
                                     (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[10U] 
                                      >> 3U))));
    vlSelfRef.rsp_data[11U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[11U] 
                                               >> 3U)) 
                               | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[12U] 
                                   << 0x0000001dU) 
                                  | (0x1ffffff0U & 
                                     (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[11U] 
                                      >> 3U))));
    vlSelfRef.rsp_data[12U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[12U] 
                                               >> 3U)) 
                               | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[13U] 
                                   << 0x0000001dU) 
                                  | (0x1ffffff0U & 
                                     (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[12U] 
                                      >> 3U))));
    vlSelfRef.rsp_data[13U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[13U] 
                                               >> 3U)) 
                               | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[14U] 
                                   << 0x0000001dU) 
                                  | (0x1ffffff0U & 
                                     (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[13U] 
                                      >> 3U))));
    vlSelfRef.rsp_data[14U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[14U] 
                                               >> 3U)) 
                               | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[15U] 
                                   << 0x0000001dU) 
                                  | (0x1ffffff0U & 
                                     (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[14U] 
                                      >> 3U))));
    vlSelfRef.rsp_data[15U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[15U] 
                                               >> 3U)) 
                               | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[16U] 
                                   << 0x0000001dU) 
                                  | (0x1ffffff0U & 
                                     (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[15U] 
                                      >> 3U))));
    vlSelfRef.rsp_data[16U] = ((0x0000000fU & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[16U] 
                                               >> 3U)) 
                               | (0x00000010U & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1289[16U] 
                                                 >> 3U)));
}

void Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET____0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rsp_data[0U] = (((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                << 0x0000001cU) | (0x0ffffff0U 
                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                      >> 4U))) 
                              | (0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                >> 1U)));
    vlSelfRef.rsp_data[1U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[2U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[3U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[4U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[5U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[6U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[7U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[8U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[9U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                              >> 4U)) 
                              | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[10U] 
                                  << 0x0000001cU) | 
                                 (0x0ffffff0U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                                                 >> 4U))));
    vlSelfRef.rsp_data[10U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[10U] 
                                               >> 4U)) 
                               | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[11U] 
                                   << 0x0000001cU) 
                                  | (0x0ffffff0U & 
                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[10U] 
                                      >> 4U))));
    vlSelfRef.rsp_data[11U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[11U] 
                                               >> 4U)) 
                               | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[12U] 
                                   << 0x0000001cU) 
                                  | (0x0ffffff0U & 
                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[11U] 
                                      >> 4U))));
    vlSelfRef.rsp_data[12U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[12U] 
                                               >> 4U)) 
                               | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[13U] 
                                   << 0x0000001cU) 
                                  | (0x0ffffff0U & 
                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[12U] 
                                      >> 4U))));
    vlSelfRef.rsp_data[13U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[13U] 
                                               >> 4U)) 
                               | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[14U] 
                                   << 0x0000001cU) 
                                  | (0x0ffffff0U & 
                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[13U] 
                                      >> 4U))));
    vlSelfRef.rsp_data[14U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[14U] 
                                               >> 4U)) 
                               | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[15U] 
                                   << 0x0000001cU) 
                                  | (0x0ffffff0U & 
                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[14U] 
                                      >> 4U))));
    vlSelfRef.rsp_data[15U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[15U] 
                                               >> 4U)) 
                               | ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[16U] 
                                   << 0x0000001cU) 
                                  | (0x0ffffff0U & 
                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[15U] 
                                      >> 4U))));
    vlSelfRef.rsp_data[16U] = ((0x0000000fU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[16U] 
                                               >> 4U)) 
                               | (0x00000010U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[16U] 
                                                 >> 4U)));
}
