// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_kmu_bus_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_kmu_bus_if__BRA__0__KET____0(Vrtlsim_shim_VX_kmu_bus_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_kmu_bus_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_kmu_bus_if__BRA__0__KET____0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[0U] = ((0xf0000000U & vlSelfRef.data[0U]) 
                          | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_block_dim) 
                              << 0x00000010U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_block_size) 
                                                  << 0x0000000cU) 
                                                 | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_warp_step) 
                                                     << 3U) 
                                                    | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__cluster_size_r) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__is_first_r))))));
    vlSelfRef.data[0U] = ((0x0fffffffU & vlSelfRef.data[0U]) 
                          | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__block_idx_r[0U] 
                             << 0x0000001cU));
    vlSelfRef.data[1U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__block_idx_r[0U] 
                           >> 4U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__block_idx_r[1U] 
                                     << 0x0000001cU));
    vlSelfRef.data[2U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__block_idx_r[1U] 
                           >> 4U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__block_idx_r[2U] 
                                     << 0x0000001cU));
    vlSelfRef.data[3U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__block_idx_r[2U] 
                           >> 4U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_grid_dim[0U] 
                                     << 0x0000001cU));
    vlSelfRef.data[4U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_grid_dim[0U] 
                           >> 4U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_grid_dim[1U] 
                                     << 0x0000001cU));
    vlSelfRef.data[5U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_grid_dim[1U] 
                           >> 4U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_grid_dim[2U] 
                                     << 0x0000001cU));
    vlSelfRef.data[6U] = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_grid_dim[2U] 
                           >> 4U) | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__aligned_lmem_size_r) 
                                     << 0x0000001dU));
    vlSelfRef.data[7U] = ((0xfffff000U & vlSelfRef.data[7U]) 
                          | (0x0fffffffU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__aligned_lmem_size_r) 
                                            >> 3U)));
    vlSelfRef.data[7U] = ((0x00000fffU & vlSelfRef.data[7U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_param)) 
                                       << 8U) | (QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__ctx_id_r)))) 
                             << 0x0000000cU));
    vlSelfRef.data[8U] = (((IData)((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_param)) 
                                     << 8U) | (QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__ctx_id_r)))) 
                           >> 0x00000014U) | (((0xffffff00U 
                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_entry 
                                                   << 6U)) 
                                               | (IData)(
                                                         ((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_param)) 
                                                            << 8U) 
                                                           | (QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__ctx_id_r))) 
                                                          >> 0x00000020U))) 
                                              << 0x0000000cU));
    vlSelfRef.data[9U] = ((((0xffffff00U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_entry 
                                            << 6U)) 
                            | (IData)(((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_param)) 
                                         << 8U) | (QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__ctx_id_r))) 
                                       >> 0x00000020U))) 
                           >> 0x00000014U) | (((0xffffffc0U 
                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_PC 
                                                   << 4U)) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_entry 
                                                  >> 0x0000001aU)) 
                                              << 0x0000000cU));
    vlSelfRef.data[10U] = ((0x00010000U & vlSelfRef.data[10U]) 
                           | (0x0001ffffU & ((((0xffffffc0U 
                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_PC 
                                                   << 4U)) 
                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_entry 
                                                  >> 0x0000001aU)) 
                                              >> 0x00000014U) 
                                             | (0x0000f000U 
                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__kmu__DOT__dcr_PC 
                                                   >> 0x00000010U)))));
    vlSelfRef.data[10U] = (0x0000ffffU & vlSelfRef.data[10U]);
}
