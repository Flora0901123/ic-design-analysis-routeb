// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

extern const VlUnpacked<CData/*0:0*/, 16> Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0;

void Vrtlsim_shim___024root___nba_sequent__TOP__9(Vrtlsim_shim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___nba_sequent__TOP__9\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__ready_out_t;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__ready_out_t = 0;
    IData/*29:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_dest;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_dest = 0;
    CData/*0:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n = 0;
    CData/*0:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n = 0;
    QData/*63:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs = 0;
    QData/*63:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_262;
    __VdfgRegularize_h6e95ff9d_0_262 = 0;
    SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_263;
    __VdfgRegularize_h6e95ff9d_0_263 = 0;
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<20>/*639:0*/ __Vtemp_28;
    VlWide<20>/*639:0*/ __Vtemp_30;
    VlWide<39>/*1247:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<5>/*159:0*/ __Vtemp_47;
    VlWide<9>/*287:0*/ __Vtemp_48;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_LoShift_3;
    CData/*0:0*/ __VExpandSel_Aligned_3;
    IData/*31:0*/ __VExpandSel_HiShift_3;
    IData/*31:0*/ __VExpandSel_HiMask_3;
    IData/*31:0*/ __VExpandSel_WordIdx_4;
    IData/*31:0*/ __VExpandSel_LoShift_4;
    CData/*0:0*/ __VExpandSel_Aligned_4;
    IData/*31:0*/ __VExpandSel_HiShift_4;
    IData/*31:0*/ __VExpandSel_HiMask_4;
    IData/*31:0*/ __VExpandSel_WordIdx_5;
    IData/*31:0*/ __VExpandSel_LoShift_5;
    CData/*0:0*/ __VExpandSel_Aligned_5;
    IData/*31:0*/ __VExpandSel_HiShift_5;
    IData/*31:0*/ __VExpandSel_HiMask_5;
    IData/*31:0*/ __VExpandSel_WordIdx_7;
    IData/*31:0*/ __VExpandSel_LoShift_7;
    CData/*0:0*/ __VExpandSel_Aligned_7;
    IData/*31:0*/ __VExpandSel_HiShift_7;
    IData/*31:0*/ __VExpandSel_HiMask_7;
    IData/*31:0*/ __VExpandSel_WordIdx_8;
    IData/*31:0*/ __VExpandSel_LoShift_8;
    CData/*0:0*/ __VExpandSel_Aligned_8;
    IData/*31:0*/ __VExpandSel_HiShift_8;
    IData/*31:0*/ __VExpandSel_HiMask_8;
    // Body
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__is_trap_entry) {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT____VlemCall_3__from_fullPC 
            = (0x3fffffffU & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[5U] 
                               << 0x00000013U) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[4U] 
                                                  >> 0x0000000dU)));
    } else if ((0x00000020U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U])) {
        vlSelfRef.__Vfunc_from_fullPC__85__pc = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_result;
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT____VlemCall_3__from_fullPC 
            = (vlSelfRef.__Vfunc_from_fullPC__85__pc 
               >> 2U);
    } else {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT____VlemCall_3__from_fullPC 
            = (0x3fffffffU & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                               << 0x00000019U) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                  >> 7U)));
    }
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_dest 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT____VlemCall_3__from_fullPC;
    if ((0x0169U >= (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_906))) {
        if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            __Vtemp_4[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
            __Vtemp_4[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
            __Vtemp_4[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
            __Vtemp_4[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
            __Vtemp_4[4U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
            __Vtemp_4[5U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
        } else {
            __Vtemp_4[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            __Vtemp_4[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            __Vtemp_4[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            __Vtemp_4[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            __Vtemp_4[4U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            __Vtemp_4[5U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
        __Vtemp_6[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[0U];
        __Vtemp_6[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[1U];
        __Vtemp_6[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[2U];
        __Vtemp_6[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[3U];
        __Vtemp_6[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[4U];
        __Vtemp_6[5U] = ((__Vtemp_4[0U] << 0x00000015U) 
                         | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.data[5U]);
        __Vtemp_6[6U] = ((__Vtemp_4[0U] >> 0x0000000bU) 
                         | (__Vtemp_4[1U] << 0x00000015U));
        __Vtemp_6[7U] = ((__Vtemp_4[1U] >> 0x0000000bU) 
                         | (__Vtemp_4[2U] << 0x00000015U));
        __Vtemp_6[8U] = ((__Vtemp_4[2U] >> 0x0000000bU) 
                         | (__Vtemp_4[3U] << 0x00000015U));
        __Vtemp_6[9U] = ((__Vtemp_4[3U] >> 0x0000000bU) 
                         | (__Vtemp_4[4U] << 0x00000015U));
        __Vtemp_6[10U] = ((__Vtemp_4[4U] >> 0x0000000bU) 
                          | (__Vtemp_4[5U] << 0x00000015U));
        __Vtemp_6[11U] = (0x000003ffU & (__Vtemp_4[5U] 
                                         >> 0x0000000bU));
        __VExpandSel_WordIdx_1 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_906) 
                                  >> 5U);
        __VExpandSel_LoShift_1 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_906));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        __Vtemp_2[0U] = (((__Vtemp_6[((IData)(1U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_6[__VExpandSel_WordIdx_1] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[1U] = (((__Vtemp_6[((IData)(2U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_6[((IData)(1U) 
                                       + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[2U] = (((__Vtemp_6[((IData)(3U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_6[((IData)(2U) 
                                       + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[3U] = (((__Vtemp_6[((IData)(4U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_6[((IData)(3U) 
                                       + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[4U] = (((__Vtemp_6[((IData)(5U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_6[((IData)(4U) 
                                       + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[5U] = (((((6U <= __VExpandSel_WordIdx_1)
                             ? 0U : __Vtemp_6[((IData)(6U) 
                                               + __VExpandSel_WordIdx_1)]) 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_6[((IData)(5U) 
                                       + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
    } else {
        __Vtemp_2[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand___0[0U];
        __Vtemp_2[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand___0[1U];
        __Vtemp_2[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand___0[2U];
        __Vtemp_2[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand___0[3U];
        __Vtemp_2[4U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand___0[4U];
        __Vtemp_2[5U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand___0[5U];
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U] 
        = __Vtemp_2[4U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U] 
        = ((0x00200000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U]) 
           | (0x001fffffU & __Vtemp_2[5U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U] 
        = ((0x001fffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U]) 
           | (0x003fffffU & ((IData)(Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_907]) 
                             << 0x00000015U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__req_switch__DOT__ready_out_w__BRA__0__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_data__DOT__flush_done 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_data__DOT__flush_pending_r) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_if.done));
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__inuse_regs;
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__writeback_fire) {
        if ((0x04000000U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if.data[4U])) {
            rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs 
                = ((~ (1ULL << (0x0000003fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if.data[4U] 
                                               >> 0x00000012U)))) 
                   & rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs);
        }
    }
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__inuse_regs;
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__writeback_fire) {
        if ((0x04000000U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if.data[4U])) {
            rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs 
                = ((~ (1ULL << (0x0000003fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if.data[4U] 
                                               >> 0x00000012U)))) 
                   & rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs);
        }
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellinp__req_buf__data_in 
        = (((IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                     >> 3U)) << 2U) | (3U & (IData)(
                                                    (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if.data 
                                                     >> 0x00000023U))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs;
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_fire_r) {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCond_1 
            = (0x3fffffffU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_skip_init_r)
                               ? (((0x3bU >= (0x0000003fU 
                                              & ((IData)(0x0000001eU) 
                                                 * (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_id_r))))
                                    ? (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs 
                                               >> (0x0000003fU 
                                                   & ((IData)(0x0000001eU) 
                                                      * (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_id_r)))))
                                    : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____Vxrand___0) 
                                  - (IData)(5U)) : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_PC));
        if ((0x3bU >= (0x0000003fU & ((IData)(0x0000001eU) 
                                      * (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_id_r))))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                = (((~ (0x000000003fffffffULL << (0x0000003fU 
                                                  & ((IData)(0x0000001eU) 
                                                     * (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_id_r))))) 
                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                   | (0x0fffffffffffffffULL & ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCond_1)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000001eU) 
                                                      * (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__cta_dispatcher__DOT__warp_id_r))))));
        }
    }
    if (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__wspawn_valid) 
         & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__is_single_warp))) {
        if (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__wspawn 
              >> 0x0000001eU) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__wspawn_wid))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                = ((0x0fffffffc0000000ULL & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                   | (IData)((IData)((0x3fffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__wspawn))));
        }
        if (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__wspawn 
              >> 0x0000001fU) & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__wspawn_wid)))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                = ((0x000000003fffffffULL & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                   | ((QData)((IData)((0x3fffffffU 
                                       & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__wspawn))) 
                      << 0x0000001eU));
        }
    }
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__split_join__DOT__g_enable__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) {
        if ((1U & (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__split_join__DOT__g_enable__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                           >> 0x00000023U)))) {
            if ((1U & (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__split_join__DOT__g_enable__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                               >> 0x00000022U)))) {
                if ((0x3bU >= (0x0000003fU & ((IData)(0x0000001eU) 
                                              * (1U 
                                                 & (IData)(
                                                           (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__split_join__DOT__g_enable__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                            >> 0x00000024U))))))) {
                    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                        = (((~ (0x000000003fffffffULL 
                                << (0x0000003fU & ((IData)(0x0000001eU) 
                                                   * 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__split_join__DOT__g_enable__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                               >> 0x00000024U))))))) 
                            & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                           | (0x0fffffffffffffffULL 
                              & ((QData)((IData)((0x3fffffffU 
                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__split_join__DOT__g_enable__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free)))) 
                                 << (0x0000003fU & 
                                     ((IData)(0x0000001eU) 
                                      * (1U & (IData)(
                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__split_join__DOT__g_enable__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                       >> 0x00000024U))))))));
                }
            }
        }
    }
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) {
        if ((1U & (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                           >> 5U)))) {
            vlSelfRef.__Vfunc_from_fullPC__176__pc 
                = (0xfffffffcU & (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__mtvec_r 
                                          >> (0x00000020U 
                                              & ((IData)(
                                                         (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                          >> 0x00000025U)) 
                                                 << 5U)))));
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCall_2__from_fullPC 
                = (vlSelfRef.__Vfunc_from_fullPC__176__pc 
                   >> 2U);
            if ((0x3bU >= (0x0000003fU & ((IData)(0x0000001eU) 
                                          * (1U & (IData)(
                                                          (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                           >> 0x00000025U))))))) {
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                    = (((~ (0x000000003fffffffULL << 
                            (0x0000003fU & ((IData)(0x0000001eU) 
                                            * (1U & (IData)(
                                                            (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                             >> 0x00000025U))))))) 
                        & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                       | (0x0fffffffffffffffULL & ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCall_2__from_fullPC)) 
                                                   << 
                                                   (0x0000003fU 
                                                    & ((IData)(0x0000001eU) 
                                                       * 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                                   >> 0x00000025U))))))));
            }
        } else if ((1U & (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                  >> 4U)))) {
            vlSelfRef.__Vfunc_from_fullPC__177__pc 
                = (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__mepc_r 
                           >> (0x00000020U & ((IData)(
                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                       >> 0x00000025U)) 
                                              << 5U))));
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCall_3__from_fullPC 
                = (vlSelfRef.__Vfunc_from_fullPC__177__pc 
                   >> 2U);
            if ((0x3bU >= (0x0000003fU & ((IData)(0x0000001eU) 
                                          * (1U & (IData)(
                                                          (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                           >> 0x00000025U))))))) {
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                    = (((~ (0x000000003fffffffULL << 
                            (0x0000003fU & ((IData)(0x0000001eU) 
                                            * (1U & (IData)(
                                                            (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                             >> 0x00000025U))))))) 
                        & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                       | (0x0fffffffffffffffULL & ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCall_3__from_fullPC)) 
                                                   << 
                                                   (0x0000003fU 
                                                    & ((IData)(0x0000001eU) 
                                                       * 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                                   >> 0x00000025U))))))));
            }
        } else if ((1U & (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                  >> 0x00000024U)))) {
            if ((0x3bU >= (0x0000003fU & ((IData)(0x0000001eU) 
                                          * (1U & (IData)(
                                                          (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                           >> 0x00000025U))))))) {
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                    = (((~ (0x000000003fffffffULL << 
                            (0x0000003fU & ((IData)(0x0000001eU) 
                                            * (1U & (IData)(
                                                            (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                             >> 0x00000025U))))))) 
                        & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                       | (0x0fffffffffffffffULL & ((QData)((IData)(
                                                                   (0x3fffffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                                               >> 6U))))) 
                                                   << 
                                                   (0x0000003fU 
                                                    & ((IData)(0x0000001eU) 
                                                       * 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free 
                                                                   >> 0x00000025U))))))));
            }
        }
    }
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in) {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCall_4__from_fullPC = 1U;
        if ((0x3bU >= (0x0000003fU & ((IData)(0x0000001eU) 
                                      * (1U & (IData)(
                                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if.data 
                                                       >> 0x00000023U))))))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n 
                = (((~ (0x000000003fffffffULL << (0x0000003fU 
                                                  & ((IData)(0x0000001eU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if.data 
                                                                 >> 0x00000023U))))))) 
                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__warp_pcs_n) 
                   | (0x0fffffffffffffffULL & ((QData)((IData)(
                                                               (0x3fffffffU 
                                                                & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if.data) 
                                                                   + vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT____VlemCall_4__from_fullPC)))) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000001eU) 
                                                      * 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if.data 
                                                                  >> 0x00000023U))))))));
        }
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
            << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET__.rsp_valid));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET__.rsp_valid));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel 
        = (0x0000000fU & (((0x000000f0U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                           << 4U)) 
                           | (0x0000000fU & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                             >> 1U))) 
                          >> (4U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET__.rsp_valid)) 
                                    << 2U))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__push 
        = ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
           & ((IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                       >> 1U)) & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET__.rsp_valid)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__push 
        = ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
           & ((~ (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                          >> 1U))) & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET__.rsp_valid)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U] 
        = (3U | ((0xfff00000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U]) 
                 | ((0x000fc000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__reg_ids 
                                    << 8U)) | ((0x00003f00U 
                                                & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__reg_ids 
                                                   >> 4U)) 
                                               | (0x000000fcU 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__reg_ids 
                                                     >> 0x00000010U))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U] 
        = (0x00c00000U | ((0x000fffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[0U]) 
                          | (((0x00001c00U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_regs) 
                                              << 9U)) 
                              | (0x000003f0U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__reg_ids 
                                                << 4U))) 
                             << 0x00000014U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U] 
        = ((0xfffffffeU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U]) 
           | (((0x00001c00U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_regs) 
                               << 9U)) | (0x000003f0U 
                                          & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__reg_ids 
                                             << 4U))) 
              >> 0x0000000cU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U] 
        = ((0xffffffc1U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U]) 
           | ((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_regs) 
                & (0U != (0x0000003fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__reg_ids))) 
               << 5U) | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rd_xregs) 
                          << 3U) | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__wr_xregs) 
                                    << 1U))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U] 
        = ((0x0000003fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                        << 0x0000001fU) | (QData)((IData)(
                                                          (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type) 
                                                            << 0x0000001bU) 
                                                           | vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args))))) 
              << 6U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                      << 0x0000001fU) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type) 
                                                          << 0x0000001bU) 
                                                         | vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args))))) 
            >> 0x0000001aU) | (((IData)((0x0000001fffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[2U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[1U]))))) 
                                << 7U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                                                     << 0x0000001fU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type) 
                                                                        << 0x0000001bU) 
                                                                       | vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args)))) 
                                                   >> 0x00000020U)) 
                                          << 6U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT____Vcellinp__g_bufs__BRA__0__KET____DOT__instr_buf__data_in[3U] 
        = (0x00000fffU & (((0x0000003fU & ((IData)(
                                                   (0x0000001fffffffffULL 
                                                    & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[2U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[1U]))))) 
                                           >> 0x00000019U)) 
                           | ((IData)(((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                                         << 0x0000001fU) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type) 
                                                            << 0x0000001bU) 
                                                           | vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args)))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001aU)) | ((0x00000040U 
                                                   & ((IData)(
                                                              (0x0000001fffffffffULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[2U])) 
                                                                   << 0x00000020U) 
                                                                  | (QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[1U]))))) 
                                                      >> 0x00000019U)) 
                                                  | ((IData)(
                                                             ((0x0000001fffffffffULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[2U])) 
                                                                   << 0x00000020U) 
                                                                  | (QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[1U])))) 
                                                              >> 0x00000020U)) 
                                                     << 7U))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__socket_arb_in_if__BRA__0__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET__.__VdfgRegularize_h6e95ff9d_0_1097) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1103));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1103) 
            << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET__.__VdfgRegularize_h6e95ff9d_0_1097));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET__.__VdfgRegularize_h6e95ff9d_0_1099) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1107));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1107) 
            << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET__.__VdfgRegularize_h6e95ff9d_0_1099));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state;
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done;
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released;
    if ((1U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 3U;
        } else if ((3U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n 
                = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done) 
                   | (5U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)));
            if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n) {
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 4U;
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n = 0U;
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n 
                    = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_mask;
            }
        } else if ((4U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n 
                = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released) 
                   & (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_ready)));
            if ((1U & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n)))) {
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 0U;
            }
        } else if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_mask) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 2U;
        }
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_req_fire 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_ready) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_valid));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_mask 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__1__KET__.__VdfgRegularize_h6e95ff9d_0_1100) 
            << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__.__VdfgRegularize_h6e95ff9d_0_1101));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_enable 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__1__KET__.__VdfgRegularize_h6e95ff9d_0_1100) 
           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__.__VdfgRegularize_h6e95ff9d_0_1101));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__push 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET__.req_ready) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET__.req_valid));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__core_req_fire 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET__.req_valid) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET__.req_ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
           & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET__.__VdfgRegularize_h6e95ff9d_0_1266)));
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__ready_out_t 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1267)) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET__.__VdfgRegularize_h6e95ff9d_0_1266));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_local_ready 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_local_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_lmem_if__BRA__0__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_fire 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET__.req_ready) 
           & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__staging_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET__.ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__staging_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET__.ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__req_ready_out 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET__.req_ready) 
             << 3U) | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET__.req_ready) 
                       << 2U)) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET__.req_ready) 
                                   << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__bar_unit__DOT__is_phase_rdw_hazard 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__bar_unit__DOT__store_waddr) 
            == (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.bar_addr)) 
           & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wctl_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U]);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__bar_unit__DOT__store_phase_rdata_v 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__bar_unit__DOT__store_valids) 
            >> (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.bar_addr)) 
           & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__bar_unit__DOT__barrier_phase_store__DOT__ram
           [vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.bar_addr]);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT____Vcellinp__branch_reg__data_in 
        = (((QData)((IData)(((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                               & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__.ready) 
                                  & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                      >> 6U) & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                                >> 0x00000010U)))) 
                              << 2U) | ((2U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                               >> 0x00000017U)) 
                                        | (1U & (((
                                                   (0x00000010U 
                                                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U])
                                                    ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_result
                                                    : 
                                                   (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_result 
                                                    >> 1U)) 
                                                  ^ 
                                                  (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                   >> 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                    >> 5U))))))) 
            << 0x00000024U) | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__br_dest)) 
                                << 6U) | (QData)((IData)(
                                                         (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__is_trap_entry) 
                                                           << 5U) 
                                                          | ((0x3ffffff0U 
                                                              & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                                  >> 2U) 
                                                                 & (((0x0eU 
                                                                      == 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                                          >> 2U))) 
                                                                     | ((0x0dU 
                                                                         == 
                                                                         (0x0000000fU 
                                                                          & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                                             >> 2U))) 
                                                                        | (0x0cU 
                                                                           == 
                                                                           (0x0000000fU 
                                                                            & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                                               >> 2U))))) 
                                                                    << 4U))) 
                                                             | ((0x0bU 
                                                                 == 
                                                                 (0x0000000fU 
                                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                                     >> 2U)))
                                                                 ? 3U
                                                                 : 0x0bU)))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatcher__DOT__g_buffers__BRA__0__KET____DOT__buffer__DOT__g_ebN__DOT__pop 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatcher__DOT__g_buffers__BRA__0__KET____DOT__buffer__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                 & (((((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatcher__DOT__g_buffers__BRA__0__KET____DOT__buffer__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[12U] 
                        >> 0x0000001fU) ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in)
                        : (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in)) 
                      << 1U) | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_switch__DOT__req_switch__DOT__ready_out_w__BRA__0__KET__)) 
                    >> (2U == (3U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatcher__DOT__g_buffers__BRA__0__KET____DOT__buffer__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[12U] 
                                     >> 0x00000016U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_941 = ((0U 
                                                   != 
                                                   (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs 
                                                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__ibf_regs_mask)) 
                                                  | (0U 
                                                     != 
                                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__ibf_xregs_mask) 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_xregs))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_942 = ((0U 
                                                   != 
                                                   (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs 
                                                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__stg_regs_mask)) 
                                                  | (0U 
                                                     != 
                                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__stg_xregs_mask) 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_xregs))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_952 = ((0U 
                                                   != 
                                                   (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs 
                                                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__ibf_regs_mask)) 
                                                  | (0U 
                                                     != 
                                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__ibf_xregs_mask) 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_xregs))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_953 = ((0U 
                                                   != 
                                                   (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs 
                                                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__stg_regs_mask)) 
                                                  | (0U 
                                                     != 
                                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__stg_xregs_mask) 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_xregs))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests 
        = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__1__KET____DOT__requests) 
            << 1U) | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__1__KET____DOT__requests) 
           | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1244 = (
                                                   (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests)) 
                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__1__KET____DOT__requests));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1243 = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel)) 
                                                   == 
                                                   (7U 
                                                    & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007 = (
                                                   ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT____Vxrand___0) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_lut2__DOT__state)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008 = (
                                                   ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT____Vxrand___0) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_lut2__DOT__state)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mshr_pending_size__DOT__g_size_gt1__DOT__g_wide_step__DOT__size_n 
        = (0x0000001fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mshr_pending_size__DOT__g_size_gt1__DOT__g_wide_step__DOT__size_r) 
                          + VL_EXTENDS_II(5,3, (7U 
                                                & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_req_fire) 
                                                   - (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mshr_dequeue))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[0U] 
        = (IData)((((QData)((IData)((0x000001ffU & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                           [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r])))) 
                    << 0x00000024U) & (- (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U] 
        = ((0xffffe000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U]) 
           | (IData)(((((QData)((IData)((0x000001ffU 
                                         & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                   [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r])))) 
                        << 0x00000024U) & (- (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)))) 
                      >> 0x00000020U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U] 
        = ((0xfe001fffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U]) 
           | ((((0x0000001eU & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                                  ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_265)
                                  : ((- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__fill_mux))))) 
                                     & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                         << 0x0000000dU) 
                                        | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                           >> 0x00000013U)))) 
                                << 1U)) | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux) 
                                           && (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1015))) 
               << 0x00000014U) | (((0x00000070U & (
                                                   ((3U 
                                                     == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_uuid_r) 
                                                     << 2U)
                                                     : 
                                                    (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1014)
                                                       : 
                                                      ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__fill_mux)
                                                        ? 
                                                       ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                           >> 2U))
                                                        : 
                                                       ((6U 
                                                         & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                              >> 0x00000012U))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)))))) 
                                                   << 4U)) 
                                   | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r)) 
                                  << 0x0000000dU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U] 
        = ((0xe1ffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U]) 
           | (0x1e000000U & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                               ? (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                          [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r] 
                                          >> 0x0000002dU))
                               : ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                     >> 0x0000000fU))) 
                             << 0x00000019U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U] 
        = ((0x1fffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U]) 
           | ((IData)((((QData)((IData)((0x00001fffU 
                                         & ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_valid))) 
                                            & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                  >> 2U)))))) 
                        << 0x0000001cU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1011)))) 
              << 0x0000001dU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U] 
        = (((IData)((((QData)((IData)((0x00001fffU 
                                       & ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_valid))) 
                                          & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                              << 0x0000001eU) 
                                             | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                >> 2U)))))) 
                      << 0x0000001cU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1011)))) 
            >> 3U) | ((IData)(((((QData)((IData)((0x00001fffU 
                                                  & ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_valid))) 
                                                     & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                         << 0x0000001eU) 
                                                        | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                           >> 2U)))))) 
                                 << 0x0000001cU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1011))) 
                               >> 0x00000020U)) << 0x0000001dU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0x00003fc0U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U]) 
           | (0x00003fffU & ((IData)(((((QData)((IData)(
                                                        (0x00001fffU 
                                                         & ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_valid))) 
                                                            & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                << 0x0000001eU) 
                                                               | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                  >> 2U)))))) 
                                        << 0x0000001cU) 
                                       | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1011))) 
                                      >> 0x00000020U)) 
                             >> 3U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0x0000003fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U]) 
           | (0x00003fffU & (((((((1U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                  | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_fire) 
                                     | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mem_rsp_fire) 
                                        | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__flush_fire) 
                                           | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_req_fire))))) 
                                 << 3U) | ((1U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__fill_enable) 
                                   << 1U) | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__flush_enable))) 
                              << 0x0000000aU) | ((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_enable) 
                                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1092)) 
                                                      & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_valid))) 
                                                  << 9U) 
                                                 | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_enable) 
                                                     << 8U) 
                                                    | (0x00000040U 
                                                       & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                                                            ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_rw_r)
                                                            : 
                                                           (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                            >> 0x00000011U)) 
                                                          << 6U)))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_uuid_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_uuid_r;
    if ((1U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
        if ((2U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
            if ((3U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
                if ((4U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
                    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_enable) {
                        if ((2U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_mask))) {
                            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_uuid_n = 0U;
                        }
                        if ((1U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_mask))) {
                            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_uuid_n 
                                = (1U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                         >> 3U));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__g_core_bus_out_req__BRA__0__KET____DOT__input_enable 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_enable)) 
                 | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__g_core_bus_out_req__BRA__1__KET____DOT__input_enable 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_enable)) 
                 | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released) 
                    >> 1U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__ibuf_push 
        = ((~ (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[12U] 
               >> 0x0000000dU)) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__core_req_fire));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
           & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__g_missalign__BRA__0__KET____DOT__lsu_req_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
           & (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__ready_out_t));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lane_dispatch__DOT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__ready_out_t)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__pop 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                 & (((~ (0U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__global_mask))) 
                     | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_ready)) 
                    & ((~ (0U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__local_mask))) 
                       | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_local_ready)))));
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n 
        = (1U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                 >> 5U));
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n 
        = (1U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst));
    if ((0x00000020U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))) {
        rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n = 0U;
        rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n = 1U;
        __Vtemp_9[0U] = (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_data_merged__BRA__0__KET____DOT__data_merged);
        __Vtemp_9[1U] = (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_data_merged__BRA__0__KET____DOT__data_merged 
                                 >> 0x00000020U));
        __Vtemp_9[2U] = (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_data_merged__BRA__1__KET____DOT__data_merged);
        __Vtemp_9[3U] = (IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_data_merged__BRA__1__KET____DOT__data_merged 
                                 >> 0x00000020U));
    } else {
        if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_fire) {
            rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n = 0U;
        }
        if ((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
              & (~ (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n))) 
             & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__full_r)))) {
            rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n = 1U;
        }
        __Vtemp_9[0U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                          << 0x0000001cU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                             >> 4U));
        __Vtemp_9[1U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                          << 0x0000001cU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                             >> 4U));
        __Vtemp_9[2U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                          << 0x0000001cU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                             >> 4U));
        __Vtemp_9[3U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                          << 0x0000001cU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                                             >> 4U));
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__inuse_regs_n 
        = rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__wb_inuse_regs;
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__staging_fire) {
        if ((0x00000020U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U])) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__inuse_regs_n 
                = (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__inuse_regs_n 
                   | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__stg_opd_mask[1U])) 
                       << 0x00000020U) | (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__stg_opd_mask[0U]))));
        }
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__inuse_regs_n 
        = rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__wb_inuse_regs;
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__staging_fire) {
        if ((0x00000020U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U])) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__inuse_regs_n 
                = (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__inuse_regs_n 
                   | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__stg_opd_mask[1U])) 
                       << 0x00000020U) | (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__stg_opd_mask[0U]))));
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2390 = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__req_ready_out) 
                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__req_valid_out));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatcher__DOT__g_buffers__BRA__0__KET____DOT__buffer__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_n 
        = (3U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatcher__DOT__g_buffers__BRA__0__KET____DOT__buffer__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                 + (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatcher__DOT__g_buffers__BRA__0__KET____DOT__buffer__DOT__g_ebN__DOT__pop)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_matches 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1243) 
            << 1U) | ((7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel)) 
                      == (7U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                >> 1U))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__valid_out_w__BRA__0__KET__ 
        = (0U != (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007] 
                  & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                      << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__0__KET__.rsp_valid))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__valid_out_w__BRA__1__KET__ 
        = (0U != (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007] 
                  & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                      << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET__.rsp_valid))));
    vlSelfRef.rtlsim_shim__DOT__g_mem_adapter__BRA__1__KET____DOT__mem_data_adapter__DOT__mem_rsp_ready_in_w 
        = (1U & (((2U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_mem_rsp_queue__BRA__1__KET____DOT__mem_rsp_queue__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                         << 1U)) | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                    & Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                                    [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007])) 
                 >> (1U & vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U])));
    __VdfgRegularize_h6e95ff9d_0_262 = (0x000000ffU 
                                        & ((IData)(0x00000045U) 
                                           * Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                           [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1096 = (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                                                   [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007] 
                                                   & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__valid_out_w__BRA__0__KET__ 
        = (0U != (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008] 
                  & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                      << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__0__KET__.req_valid))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__valid_out_w__BRA__1__KET__ 
        = (0U != (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008] 
                  & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                      << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET__.req_valid))));
    __VdfgRegularize_h6e95ff9d_0_263 = (0x000007ffU 
                                        & ((IData)(0x00000270U) 
                                           * Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                           [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1095 = (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                                                   [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008] 
                                                   & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots;
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__ibuf_pop) {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
               | (0x00ffU & ((IData)(1U) << (7U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U]))));
    }
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__ibuf_push) {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_n 
        = (3U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                 + (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__pop)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1276 = (
                                                   (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[10U] 
                                                    >> 2U) 
                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__pop));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1277 = (
                                                   (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[10U] 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__pop));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1278 = (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r[10U] 
                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__lsu_scheduler__DOT__mem_scheduler__DOT__g_req_queue_rw__DOT__req_queue__DOT__g_ebN__DOT__pop));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U] 
        = ((0xfffffff0U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U]) 
           | (0x0000000fU & ((0x00000020U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                              ? ((8U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U]) 
                                 | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))
                              : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U])));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U] 
        = ((0x0000000fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U]) 
           | (__Vtemp_9[0U] << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[1U] 
        = ((__Vtemp_9[0U] >> 0x0000001cU) | (__Vtemp_9[1U] 
                                             << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[2U] 
        = ((__Vtemp_9[1U] >> 0x0000001cU) | (__Vtemp_9[2U] 
                                             << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[3U] 
        = ((__Vtemp_9[2U] >> 0x0000001cU) | (__Vtemp_9[3U] 
                                             << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U] 
        = ((0xfff00000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U]) 
           | ((__Vtemp_9[3U] >> 0x0000001cU) | (0x000ffff0U 
                                                & (((0x00000020U 
                                                     & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                                     ? 
                                                    (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_data_merged__BRA__1__KET____DOT__byteen_merged) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_data_merged__BRA__0__KET____DOT__byteen_merged))
                                                     : 
                                                    ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                                      << 0x0000001cU) 
                                                     | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                                        >> 4U))) 
                                                   << 4U))));
    __Vtemp_11[0U] = (((IData)((0x03ffffffffffffffULL 
                                & ((0x00000020U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                    ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                        << 0x0000003eU) 
                                       | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                           << 0x0000001eU) 
                                          | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U])) 
                                             >> 2U)))
                                    : (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U])) 
                                        << 0x00000032U) 
                                       | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U])) 
                                           << 0x00000012U) 
                                          | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U])) 
                                             >> 0x0000000eU)))))) 
                       << 0x0000001aU) | (0x03ffffffU 
                                          & ((0x00000020U 
                                              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                              ? ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                                    >> 8U))
                                              : ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U] 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                                    >> 0x00000014U)))));
    __Vtemp_11[1U] = (((IData)((0x03ffffffffffffffULL 
                                & ((0x00000020U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                    ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                        << 0x0000003eU) 
                                       | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                           << 0x0000001eU) 
                                          | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U])) 
                                             >> 2U)))
                                    : (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U])) 
                                        << 0x00000032U) 
                                       | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U])) 
                                           << 0x00000012U) 
                                          | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U])) 
                                             >> 0x0000000eU)))))) 
                       >> 6U) | ((IData)(((0x03ffffffffffffffULL 
                                           & ((0x00000020U 
                                               & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                               ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                                   << 0x0000003eU) 
                                                  | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                                      << 0x0000001eU) 
                                                     | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U])) 
                                                        >> 2U)))
                                               : (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U])) 
                                                   << 0x00000032U) 
                                                  | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U])) 
                                                      << 0x00000012U) 
                                                     | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U])) 
                                                        >> 0x0000000eU))))) 
                                          >> 0x00000020U)) 
                                 << 0x0000001aU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U] 
        = ((0x000fffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U]) 
           | (__Vtemp_11[0U] << 0x00000014U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[5U] 
        = ((__Vtemp_11[0U] >> 0x0000000cU) | (__Vtemp_11[1U] 
                                              << 0x00000014U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[6U] 
        = ((__Vtemp_11[1U] >> 0x0000000cU) | (0xfff00000U 
                                              & ((IData)(
                                                         ((0x03ffffffffffffffULL 
                                                           & ((0x00000020U 
                                                               & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                                               ? 
                                                              (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                                                << 0x0000003eU) 
                                                               | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                                                   << 0x0000001eU) 
                                                                  | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U])) 
                                                                     >> 2U)))
                                                               : 
                                                              (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U])) 
                                                                << 0x00000032U) 
                                                               | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U])) 
                                                                   << 0x00000012U) 
                                                                  | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U])) 
                                                                     >> 0x0000000eU))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x0000000eU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[7U] 
        = ((0xffffff00U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[7U]) 
           | ((IData)(((0x03ffffffffffffffULL & ((0x00000020U 
                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                                  ? 
                                                 (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                                   << 0x0000003eU) 
                                                  | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U])) 
                                                      << 0x0000001eU) 
                                                     | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U])) 
                                                        >> 2U)))
                                                  : 
                                                 (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U])) 
                                                   << 0x00000032U) 
                                                  | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U])) 
                                                      << 0x00000012U) 
                                                     | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U])) 
                                                        >> 0x0000000eU))))) 
                       >> 0x00000020U)) >> 0x00000012U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[7U] 
        = ((0xffe000ffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[7U]) 
           | (0x001fff00U & (((0x19U >= (0x0000001fU 
                                         & ((IData)(0x0000000dU) 
                                            * (1U & 
                                               (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197))))))
                               ? (((0U == (0x0000001fU 
                                           & ((IData)(4U) 
                                              + (0x0000001fU 
                                                 & ((IData)(0x0000000dU) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197))))))))
                                    ? 0U : (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free
                                            [(((IData)(0x00000010U) 
                                               + (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197)))))) 
                                              >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x0000001fU 
                                                       & ((IData)(0x0000000dU) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197)))))))))) 
                                  | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free
                                     [(((IData)(4U) 
                                        + (0x0000001fU 
                                           & ((IData)(0x0000000dU) 
                                              * (1U 
                                                 & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197)))))) 
                                       >> 5U)] >> (0x0000001fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x0000001fU 
                                                       & ((IData)(0x0000000dU) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197)))))))))
                               : (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand___1)) 
                             << 8U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[7U] 
        = ((0x001fffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[7U]) 
           | (((0x19U >= (0x0000001fU & ((IData)(0x0000000dU) 
                                         * (1U & (~ 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                   >> 2U))))))
                ? (((0U == (0x0000001fU & ((IData)(0x0000001eU) 
                                           + (0x0000001fU 
                                              & ((IData)(0x0000000dU) 
                                                 * 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                      >> 2U))))))))
                     ? 0U : (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free
                             [(((IData)(0x0000002aU) 
                                + (0x0000001fU & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                       >> 2U)))))) 
                               >> 5U)] << ((IData)(0x00000020U) 
                                           - (0x0000001fU 
                                              & ((IData)(0x0000001eU) 
                                                 + 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                          >> 2U)))))))))) 
                   | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free
                      [(((IData)(0x0000001eU) + (0x0000001fU 
                                                 & ((IData)(0x0000000dU) 
                                                    * 
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                         >> 2U)))))) 
                        >> 5U)] >> (0x0000001fU & ((IData)(0x0000001eU) 
                                                   + 
                                                   (0x0000001fU 
                                                    & ((IData)(0x0000000dU) 
                                                       * 
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                            >> 2U)))))))))
                : (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand___3)) 
              << 0x00000015U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[8U] 
        = ((0xfffffffcU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[8U]) 
           | (3U & (((0x19U >= (0x0000001fU & ((IData)(0x0000000dU) 
                                               * (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                      >> 2U))))))
                      ? (((0U == (0x0000001fU & ((IData)(0x0000001eU) 
                                                 + 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                          >> 2U))))))))
                           ? 0U : (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free
                                   [(((IData)(0x0000002aU) 
                                      + (0x0000001fU 
                                         & ((IData)(0x0000000dU) 
                                            * (1U & 
                                               (~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                   >> 2U)))))) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0000001eU) 
                                                     + 
                                                     (0x0000001fU 
                                                      & ((IData)(0x0000000dU) 
                                                         * 
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                              >> 2U)))))))))) 
                         | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free
                            [(((IData)(0x0000001eU) 
                               + (0x0000001fU & ((IData)(0x0000000dU) 
                                                 * 
                                                 (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                      >> 2U)))))) 
                              >> 5U)] >> (0x0000001fU 
                                          & ((IData)(0x0000001eU) 
                                             + (0x0000001fU 
                                                & ((IData)(0x0000000dU) 
                                                   * 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                        >> 2U)))))))))
                      : (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand___3)) 
                    >> 0x0000000bU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[8U] 
        = ((3U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[8U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256)) 
                        << 0x0000001dU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255)))) 
              << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[9U] 
        = ((0xf0000000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[9U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256)) 
                         << 0x0000001dU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255)))) 
               >> 0x0000001eU) | ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256)) 
                                             << 0x0000001dU) 
                                            | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255))) 
                                           >> 0x00000020U)) 
                                  << 2U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[9U] 
        = ((0x0fffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[9U]) 
           | (((0U != (3U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                             >> 2U))) << 0x0000001fU) 
              | (((0U != (3U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197))) 
                  << 0x0000001eU) | (0x30000000U & 
                                     (((0x00000020U 
                                        & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                        ? ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                            << 2U) 
                                           | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                              >> 0x0000001eU))
                                        : ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                            << 4U) 
                                           | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                              >> 0x0000001cU))) 
                                      << 0x0000001cU)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[10U] 
        = (0x000007ffU & ((((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n) 
                            << 0x0000000aU) | (((0x0000001eU 
                                                 & (((0x00000020U 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                                      ? 
                                                     ((- (IData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__is_last_batch))) 
                                                      | ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__current_pmask)) 
                                                         & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                                                            >> 1U)))
                                                      : 
                                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst) 
                                                      >> 1U)) 
                                                    << 1U)) 
                                                | (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n)) 
                                               << 5U)) 
                          | ((((4U & (((0x00000020U 
                                        & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst))
                                        ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U]
                                        : (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U] 
                                           >> 4U)) 
                                      << 2U)) | (((
                                                   ((~ 
                                                     (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                      >> 8U)) 
                                                    | (~ 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                        >> 2U))) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256 
                                                      == 
                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                                       >> 3U))) 
                                                  << 1U) 
                                                 | ((~ 
                                                     ((~ 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197) 
                                                        >> 2U)) 
                                                      & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                         >> 8U))) 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256 
                                                       == 
                                                       (0x1fffffffU 
                                                        & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                                            << 0x0000001bU) 
                                                           | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                                              >> 5U))))))) 
                              << 2U) | (((((~ (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                               >> 8U)) 
                                           | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197))) 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255 
                                             == (0x1fffffffU 
                                                 & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                                       >> 7U))))) 
                                         << 1U) | (
                                                   (~ 
                                                    ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197)) 
                                                     & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                        >> 8U))) 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255 
                                                      == 
                                                      (0x1fffffffU 
                                                       & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                                           << 0x00000017U) 
                                                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                                             >> 9U)))))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__mask_sel 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w) 
           & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_matches));
    vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSelfRef.rtlsim_shim__DOT__g_mem_adapter__BRA__1__KET____DOT__mem_data_adapter__DOT__mem_rsp_ready_in_w)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__g_passthru__DOT__perf_crsp_stall_per_cycle 
        = (3U & VL_COUNTONES_I(((((~ (IData)(vlSelfRef.rtlsim_shim__DOT__g_mem_adapter__BRA__1__KET____DOT__mem_data_adapter__DOT__mem_rsp_ready_in_w)) 
                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                                 << 1U) | ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__g_mem_adapter__BRA__0__KET____DOT__mem_data_adapter__DOT__mem_rsp_ready_in_w)) 
                                           & (IData)(vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)))));
    if ((0x89U >= (IData)(__VdfgRegularize_h6e95ff9d_0_262))) {
        __Vtemp_17[0U] = (((IData)((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                     [
                                                     (((IData)(0x00000048U) 
                                                       + 
                                                       (0x000001c0U 
                                                        & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                           << 5U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    (0x000001c0U 
                                                     & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                        << 5U)))))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                       << 5U))))))) 
                                    | (((0U == (0x0000001fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                       << 5U)))))
                                         ? 0ULL : ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                                   [
                                                                   (((IData)(0x00000028U) 
                                                                     + 
                                                                     (0x000001c0U 
                                                                      & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                         << 5U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        (0x000001c0U 
                                                         & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                            << 5U))))))) 
                                       | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                          [
                                                          (((IData)(9U) 
                                                            + 
                                                            (0x000001c0U 
                                                             & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                << 5U))) 
                                                           >> 5U)])) 
                                          >> (0x0000001fU 
                                              & ((IData)(9U) 
                                                 + 
                                                 (0x000001c0U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                     << 5U)))))))) 
                           << 5U) | (0x0000001fU & 
                                     (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                      >> 4U)));
        __Vtemp_17[1U] = (((IData)((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                     [
                                                     (((IData)(0x00000048U) 
                                                       + 
                                                       (0x000001c0U 
                                                        & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                           << 5U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    (0x000001c0U 
                                                     & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                        << 5U)))))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                       << 5U))))))) 
                                    | (((0U == (0x0000001fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                       << 5U)))))
                                         ? 0ULL : ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                                   [
                                                                   (((IData)(0x00000028U) 
                                                                     + 
                                                                     (0x000001c0U 
                                                                      & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                         << 5U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        (0x000001c0U 
                                                         & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                            << 5U))))))) 
                                       | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                          [
                                                          (((IData)(9U) 
                                                            + 
                                                            (0x000001c0U 
                                                             & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                << 5U))) 
                                                           >> 5U)])) 
                                          >> (0x0000001fU 
                                              & ((IData)(9U) 
                                                 + 
                                                 (0x000001c0U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                     << 5U)))))))) 
                           >> 0x0000001bU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                                         [
                                                                         (((IData)(0x00000048U) 
                                                                           + 
                                                                           (0x000001c0U 
                                                                            & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                               << 5U))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(9U) 
                                                               + 
                                                               (0x000001c0U 
                                                                & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                   << 5U)))))
                                                           ? 0x00000020U
                                                           : 
                                                          ((IData)(0x00000040U) 
                                                           - 
                                                           (0x0000001fU 
                                                            & ((IData)(9U) 
                                                               + 
                                                               (0x000001c0U 
                                                                & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                   << 5U))))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(9U) 
                                                                 + 
                                                                 (0x000001c0U 
                                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                     << 5U)))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                                             [
                                                                             (((IData)(0x00000028U) 
                                                                               + 
                                                                               (0x000001c0U 
                                                                                & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                                << 5U))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x00000020U) 
                                                              - 
                                                              (0x0000001fU 
                                                               & ((IData)(9U) 
                                                                  + 
                                                                  (0x000001c0U 
                                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                      << 5U))))))) 
                                                           | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                                              [
                                                                              (((IData)(9U) 
                                                                                + 
                                                                                (0x000001c0U 
                                                                                & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                                << 5U))) 
                                                                               >> 5U)])) 
                                                              >> 
                                                              (0x0000001fU 
                                                               & ((IData)(9U) 
                                                                  + 
                                                                  (0x000001c0U 
                                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                      << 5U))))))) 
                                                       >> 0x00000020U)) 
                                              << 5U));
        __Vtemp_17[2U] = ((IData)(((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                     [
                                                     (((IData)(0x00000048U) 
                                                       + 
                                                       (0x000001c0U 
                                                        & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                           << 5U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    (0x000001c0U 
                                                     & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                        << 5U)))))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                       << 5U))))))) 
                                    | (((0U == (0x0000001fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                       << 5U)))))
                                         ? 0ULL : ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                                   [
                                                                   (((IData)(0x00000028U) 
                                                                     + 
                                                                     (0x000001c0U 
                                                                      & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                         << 5U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        (0x000001c0U 
                                                         & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                            << 5U))))))) 
                                       | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r
                                                          [
                                                          (((IData)(9U) 
                                                            + 
                                                            (0x000001c0U 
                                                             & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                << 5U))) 
                                                           >> 5U)])) 
                                          >> (0x0000001fU 
                                              & ((IData)(9U) 
                                                 + 
                                                 (0x000001c0U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                     << 5U))))))) 
                                   >> 0x00000020U)) 
                          >> 0x0000001bU);
        __Vtemp_18[0U] = __Vtemp_17[0U];
        __Vtemp_18[1U] = __Vtemp_17[1U];
        __Vtemp_18[2U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                           << 5U) | __Vtemp_17[2U]);
        __Vtemp_18[3U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                           >> 0x0000001bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                              << 5U));
        __Vtemp_18[4U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                           >> 0x0000001bU) | (0x000003e0U 
                                              & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                                 << 5U)));
        __VExpandSel_WordIdx_3 = ((IData)(__VdfgRegularize_h6e95ff9d_0_262) 
                                  >> 5U);
        __VExpandSel_LoShift_3 = (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_262));
        __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
        if (__VExpandSel_Aligned_3) {
            __VExpandSel_HiShift_3 = 0U;
            __VExpandSel_HiMask_3 = 0U;
        } else {
            __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_3);
            __VExpandSel_HiMask_3 = 0xffffffffU;
        }
        __Vtemp_13[0U] = (((__Vtemp_18[((IData)(1U) 
                                        + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (__Vtemp_18[__VExpandSel_WordIdx_3] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_13[1U] = (((__Vtemp_18[((IData)(2U) 
                                        + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (__Vtemp_18[((IData)(1U) 
                                         + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_13[2U] = (((((2U <= __VExpandSel_WordIdx_3)
                              ? 0U : __Vtemp_18[((IData)(3U) 
                                                 + __VExpandSel_WordIdx_3)]) 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (__Vtemp_18[((IData)(2U) 
                                         + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_25[0U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                     [
                                                     (((IData)(0x00000047U) 
                                                       + 
                                                       (0x000001c0U 
                                                        & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                           << 5U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (0x000001c0U 
                                                     & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                        << 5U)))))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                       << 5U))))))) 
                                    | (((0U == (0x0000001fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                       << 5U)))))
                                         ? 0ULL : ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                                   [
                                                                   (((IData)(0x00000027U) 
                                                                     + 
                                                                     (0x000001c0U 
                                                                      & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                         << 5U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        (0x000001c0U 
                                                         & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                            << 5U))))))) 
                                       | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                          [
                                                          (((IData)(8U) 
                                                            + 
                                                            (0x000001c0U 
                                                             & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                << 5U))) 
                                                           >> 5U)])) 
                                          >> (0x0000001fU 
                                              & ((IData)(8U) 
                                                 + 
                                                 (0x000001c0U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                     << 5U)))))))) 
                           << 5U) | (0x0000001fU & 
                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT____Vcellinp__g_rsp_select__DOT__g_rsp_data_in__BRA__1__KET____DOT__bits_remove__data_in) 
                                      >> 4U)));
        __Vtemp_25[1U] = (((IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                     [
                                                     (((IData)(0x00000047U) 
                                                       + 
                                                       (0x000001c0U 
                                                        & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                           << 5U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (0x000001c0U 
                                                     & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                        << 5U)))))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                       << 5U))))))) 
                                    | (((0U == (0x0000001fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                       << 5U)))))
                                         ? 0ULL : ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                                   [
                                                                   (((IData)(0x00000027U) 
                                                                     + 
                                                                     (0x000001c0U 
                                                                      & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                         << 5U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        (0x000001c0U 
                                                         & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                            << 5U))))))) 
                                       | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                          [
                                                          (((IData)(8U) 
                                                            + 
                                                            (0x000001c0U 
                                                             & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                << 5U))) 
                                                           >> 5U)])) 
                                          >> (0x0000001fU 
                                              & ((IData)(8U) 
                                                 + 
                                                 (0x000001c0U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                     << 5U)))))))) 
                           >> 0x0000001bU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                                         [
                                                                         (((IData)(0x00000047U) 
                                                                           + 
                                                                           (0x000001c0U 
                                                                            & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                               << 5U))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((0U 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0x000001c0U 
                                                                & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                   << 5U)))))
                                                           ? 0x00000020U
                                                           : 
                                                          ((IData)(0x00000040U) 
                                                           - 
                                                           (0x0000001fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0x000001c0U 
                                                                & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                   << 5U))))))) 
                                                        | (((0U 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(8U) 
                                                                 + 
                                                                 (0x000001c0U 
                                                                  & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                     << 5U)))))
                                                             ? 0ULL
                                                             : 
                                                            ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                                             [
                                                                             (((IData)(0x00000027U) 
                                                                               + 
                                                                               (0x000001c0U 
                                                                                & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                                << 5U))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((IData)(0x00000020U) 
                                                              - 
                                                              (0x0000001fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0x000001c0U 
                                                                   & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                      << 5U))))))) 
                                                           | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                                              [
                                                                              (((IData)(8U) 
                                                                                + 
                                                                                (0x000001c0U 
                                                                                & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                                << 5U))) 
                                                                               >> 5U)])) 
                                                              >> 
                                                              (0x0000001fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0x000001c0U 
                                                                   & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                      << 5U))))))) 
                                                       >> 0x00000020U)) 
                                              << 5U));
        __Vtemp_25[2U] = ((IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                     [
                                                     (((IData)(0x00000047U) 
                                                       + 
                                                       (0x000001c0U 
                                                        & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                           << 5U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (0x000001c0U 
                                                     & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                        << 5U)))))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                       << 5U))))))) 
                                    | (((0U == (0x0000001fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0x000001c0U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                       << 5U)))))
                                         ? 0ULL : ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                                   [
                                                                   (((IData)(0x00000027U) 
                                                                     + 
                                                                     (0x000001c0U 
                                                                      & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                         << 5U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        (0x000001c0U 
                                                         & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                            << 5U))))))) 
                                       | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1289
                                                          [
                                                          (((IData)(8U) 
                                                            + 
                                                            (0x000001c0U 
                                                             & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                                << 5U))) 
                                                           >> 5U)])) 
                                          >> (0x0000001fU 
                                              & ((IData)(8U) 
                                                 + 
                                                 (0x000001c0U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__mem_bank_adapter__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U] 
                                                     << 5U))))))) 
                                   >> 0x00000020U)) 
                          >> 0x0000001bU);
        __Vtemp_26[0U] = __Vtemp_25[0U];
        __Vtemp_26[1U] = __Vtemp_25[1U];
        __Vtemp_26[2U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                           << 5U) | __Vtemp_25[2U]);
        __Vtemp_26[3U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                           >> 0x0000001bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                              << 5U));
        __Vtemp_26[4U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                           >> 0x0000001bU) | (0x000003e0U 
                                              & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                                 << 5U)));
        __VExpandSel_WordIdx_4 = ((IData)(__VdfgRegularize_h6e95ff9d_0_262) 
                                  >> 5U);
        __VExpandSel_LoShift_4 = (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_262));
        __VExpandSel_Aligned_4 = (0U == __VExpandSel_LoShift_4);
        if (__VExpandSel_Aligned_4) {
            __VExpandSel_HiShift_4 = 0U;
            __VExpandSel_HiMask_4 = 0U;
        } else {
            __VExpandSel_HiShift_4 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_4);
            __VExpandSel_HiMask_4 = 0xffffffffU;
        }
        __Vtemp_21[0U] = (((__Vtemp_26[((IData)(1U) 
                                        + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (__Vtemp_26[__VExpandSel_WordIdx_4] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_21[1U] = (((__Vtemp_26[((IData)(2U) 
                                        + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (__Vtemp_26[((IData)(1U) 
                                         + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_21[2U] = (((((2U <= __VExpandSel_WordIdx_4)
                              ? 0U : __Vtemp_26[((IData)(3U) 
                                                 + __VExpandSel_WordIdx_4)]) 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (__Vtemp_26[((IData)(2U) 
                                         + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
    } else {
        __Vtemp_13[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vxrand___0[0U];
        __Vtemp_13[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vxrand___0[1U];
        __Vtemp_13[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vxrand___0[2U];
        __Vtemp_21[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vxrand___1[0U];
        __Vtemp_21[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vxrand___1[1U];
        __Vtemp_21[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vxrand___1[2U];
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_13[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_13[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((0x00000020U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U]) 
           | (0x0000001fU & __Vtemp_13[2U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((0x0000001fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U]) 
           | (0x0000003fU & ((IData)(Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007]) 
                             << 5U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_21[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_21[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[2U] 
        = ((0x00000020U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[2U]) 
           | (0x0000001fU & __Vtemp_21[2U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[2U] 
        = ((0x0000001fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[2U]) 
           | (0x0000003fU & ((IData)(Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1007]) 
                             << 5U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (((2U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_mem_rsp_queue__BRA__0__KET____DOT__mem_rsp_queue__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                            << 1U)) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1096))) 
                    >> (1U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1096) 
                    >> 1U)));
    if ((0x04dfU >= (IData)(__VdfgRegularize_h6e95ff9d_0_263))) {
        __VExpandSel_WordIdx_5 = ((IData)(__VdfgRegularize_h6e95ff9d_0_263) 
                                  >> 5U);
        __VExpandSel_LoShift_5 = (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_263));
        __VExpandSel_Aligned_5 = (0U == __VExpandSel_LoShift_5);
        if (__VExpandSel_Aligned_5) {
            __VExpandSel_HiShift_5 = 0U;
            __VExpandSel_HiMask_5 = 0U;
        } else {
            __VExpandSel_HiShift_5 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_5);
            __VExpandSel_HiMask_5 = 0xffffffffU;
        }
        __Vtemp_28[0U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(1U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [__VExpandSel_WordIdx_5] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[1U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(2U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(1U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[2U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(3U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(2U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[3U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(4U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(3U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[4U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(5U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(4U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[5U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(6U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(5U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[6U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(7U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(6U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[7U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(8U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(7U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[8U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(9U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(8U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[9U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                            [((IData)(0x0000000aU) 
                              + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(9U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_28[10U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x0000000bU) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x0000000aU) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[11U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x0000000cU) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x0000000bU) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[12U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x0000000dU) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x0000000cU) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[13U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x0000000eU) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x0000000dU) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[14U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x0000000fU) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x0000000eU) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[15U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x00000010U) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x0000000fU) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[16U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x00000011U) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x00000010U) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[17U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x00000012U) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x00000011U) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[18U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                             [((IData)(0x00000013U) 
                               + __VExpandSel_WordIdx_5)] 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x00000012U) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_28[19U] = (((((0x00000013U <= __VExpandSel_WordIdx_5)
                               ? 0U : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x00000014U) 
                                + __VExpandSel_WordIdx_5)]) 
                             << __VExpandSel_HiShift_5) 
                            & __VExpandSel_HiMask_5) 
                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284
                              [((IData)(0x00000013U) 
                                + __VExpandSel_WordIdx_5)] 
                              >> __VExpandSel_LoShift_5));
        __Vtemp_38[0U] = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_byteen_w) 
                           << 0x00000015U) | ((0x001fff00U 
                                               & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                  << 4U)) 
                                              | ((0x00000078U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                       >> 0x00000019U)))));
        __Vtemp_38[1U] = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_byteen_w) 
                           >> 0x0000000bU) | ((IData)(
                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_byteen_w 
                                                       >> 0x00000020U)) 
                                              << 0x00000015U));
        __Vtemp_38[2U] = (((IData)((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_byteen_w 
                                    >> 0x00000020U)) 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[0U] 
                                              << 0x00000015U));
        __Vtemp_38[3U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[0U] 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[1U] 
                                              << 0x00000015U));
        __Vtemp_38[4U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[1U] 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[2U] 
                                              << 0x00000015U));
        __Vtemp_38[5U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[2U] 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[3U] 
                                              << 0x00000015U));
        __Vtemp_38[6U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[3U] 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[4U] 
                                              << 0x00000015U));
        __Vtemp_38[7U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[4U] 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[5U] 
                                              << 0x00000015U));
        __Vtemp_38[8U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[5U] 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[6U] 
                                              << 0x00000015U));
        __Vtemp_38[9U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[6U] 
                           >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[7U] 
                                              << 0x00000015U));
        __Vtemp_38[10U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[7U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[8U] 
                                               << 0x00000015U));
        __Vtemp_38[11U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[8U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[9U] 
                                               << 0x00000015U));
        __Vtemp_38[12U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[9U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[10U] 
                                               << 0x00000015U));
        __Vtemp_38[13U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[10U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[11U] 
                                               << 0x00000015U));
        __Vtemp_38[14U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[11U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[12U] 
                                               << 0x00000015U));
        __Vtemp_38[15U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[12U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[13U] 
                                               << 0x00000015U));
        __Vtemp_38[16U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[13U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[14U] 
                                               << 0x00000015U));
        __Vtemp_38[17U] = ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[14U] 
                            >> 0x0000000bU) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[15U] 
                                               << 0x00000015U));
        __Vtemp_38[18U] = ((0xffe00000U & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                            << 0x00000019U) 
                                           | (0x01e00000U 
                                              & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                 >> 7U)))) 
                           | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__1__KET____DOT__core_req_nc_arb_data_w[15U] 
                              >> 0x0000000bU));
        __Vtemp_38[19U] = ((((0x001fff00U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                             << 8U)) 
                             | ((0x00000080U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                >> 0x0000000aU)) 
                                | (0x0000000fU & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                  >> 0x0000000dU)))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                                  >> 7U)));
        __Vtemp_38[20U] = (((0x0000ffe0U & ((IData)(
                                                    (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U])) 
                                                      << 0x0000002eU) 
                                                     | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[17U])) 
                                                         << 0x0000000eU) 
                                                        | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U])) 
                                                           >> 0x00000012U)))) 
                                            << 5U)) 
                            | (((0x001fff00U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                << 8U)) 
                                | ((0x00000080U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                   >> 0x0000000aU)) 
                                   | (0x0000000fU & 
                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                       >> 0x0000000dU)))) 
                               >> 0x00000010U)) | (0xffff0000U 
                                                   & ((IData)(
                                                              (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U])) 
                                                                << 0x0000002eU) 
                                                               | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[17U])) 
                                                                   << 0x0000000eU) 
                                                                  | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U])) 
                                                                     >> 0x00000012U)))) 
                                                      << 5U)));
        __Vtemp_38[21U] = ((((IData)((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U])) 
                                       << 0x0000002eU) 
                                      | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[17U])) 
                                          << 0x0000000eU) 
                                         | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U])) 
                                            >> 0x00000012U)))) 
                             >> 0x0000001bU) | (0x0000ffe0U 
                                                & ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U])) 
                                                              << 0x0000002eU) 
                                                             | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[17U])) 
                                                                 << 0x0000000eU) 
                                                                | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U])) 
                                                                   >> 0x00000012U))) 
                                                            >> 0x00000020U)) 
                                                   << 5U))) 
                           | (0xffff0000U & ((IData)(
                                                     ((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U])) 
                                                        << 0x0000002eU) 
                                                       | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[17U])) 
                                                           << 0x0000000eU) 
                                                          | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U])) 
                                                             >> 0x00000012U))) 
                                                      >> 0x00000020U)) 
                                             << 5U)));
        __Vtemp_38[22U] = ((((IData)(((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U])) 
                                        << 0x0000002eU) 
                                       | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[17U])) 
                                           << 0x0000000eU) 
                                          | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U])) 
                                             >> 0x00000012U))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001bU) | (0x0000ffe0U 
                                                & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                                   >> 0x0000000dU))) 
                           | ((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                                << 3U)) 
                                | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                   >> 0x0000001dU)) 
                               | (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                                 << 3U))) 
                              << 0x00000010U));
        __Vtemp_38[23U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[0U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[24U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[1U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[25U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[2U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[26U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[27U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[4U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[28U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[5U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[29U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[6U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[30U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[7U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[31U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[8U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[32U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[9U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[11U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[11U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[33U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[11U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[10U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[11U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[12U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[11U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[12U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[34U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[12U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[11U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[12U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[13U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[12U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[13U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[35U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[13U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[12U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[13U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[14U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[13U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[14U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[36U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[14U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[13U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[14U] 
                                             << 3U))) 
                            >> 0x00000010U) | ((((0x001ffff8U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[15U] 
                                                     << 3U)) 
                                                 | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[14U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffe00000U 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[15U] 
                                                      << 3U))) 
                                               << 0x00000010U));
        __Vtemp_38[37U] = (((((0x001ffff8U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[15U] 
                                              << 3U)) 
                              | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[14U] 
                                 >> 0x0000001dU)) | 
                             (0xffe00000U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[15U] 
                                             << 3U))) 
                            >> 0x00000010U) | (((0x001ffff8U 
                                                 & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U] 
                                                    << 3U)) 
                                                | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[15U] 
                                                   >> 0x0000001dU)) 
                                               << 0x00000010U));
        __Vtemp_38[38U] = (0x00000020U | (((0x0000ffe0U 
                                            & (((0x04000000U 
                                                 & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U] 
                                                    << 8U)) 
                                                | (0x03fffffeU 
                                                   & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[19U] 
                                                       << 0x0000000eU) 
                                                      | (0x00003ffeU 
                                                         & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U] 
                                                            >> 0x00000012U))))) 
                                               << 5U)) 
                                           | (((0x001ffff8U 
                                                & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[16U] 
                                                   << 3U)) 
                                               | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[15U] 
                                                  >> 0x0000001dU)) 
                                              >> 0x00000010U)) 
                                          | (0xffff0000U 
                                             & (((0x04000000U 
                                                  & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U] 
                                                     << 8U)) 
                                                 | (0x03fffffeU 
                                                    & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[19U] 
                                                        << 0x0000000eU) 
                                                       | (0x00003ffeU 
                                                          & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[18U] 
                                                             >> 0x00000012U))))) 
                                                << 5U))));
        __VExpandSel_WordIdx_7 = ((IData)(__VdfgRegularize_h6e95ff9d_0_263) 
                                  >> 5U);
        __VExpandSel_LoShift_7 = (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_263));
        __VExpandSel_Aligned_7 = (0U == __VExpandSel_LoShift_7);
        if (__VExpandSel_Aligned_7) {
            __VExpandSel_HiShift_7 = 0U;
            __VExpandSel_HiMask_7 = 0U;
        } else {
            __VExpandSel_HiShift_7 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_7);
            __VExpandSel_HiMask_7 = 0xffffffffU;
        }
        __Vtemp_30[0U] = (((__Vtemp_38[((IData)(1U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[__VExpandSel_WordIdx_7] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[1U] = (((__Vtemp_38[((IData)(2U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(1U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[2U] = (((__Vtemp_38[((IData)(3U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(2U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[3U] = (((__Vtemp_38[((IData)(4U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(3U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[4U] = (((__Vtemp_38[((IData)(5U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(4U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[5U] = (((__Vtemp_38[((IData)(6U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(5U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[6U] = (((__Vtemp_38[((IData)(7U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(6U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[7U] = (((__Vtemp_38[((IData)(8U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(7U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[8U] = (((__Vtemp_38[((IData)(9U) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(8U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[9U] = (((__Vtemp_38[((IData)(0x0000000aU) 
                                        + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (__Vtemp_38[((IData)(9U) 
                                         + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_30[10U] = (((__Vtemp_38[((IData)(0x0000000bU) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x0000000aU) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[11U] = (((__Vtemp_38[((IData)(0x0000000cU) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x0000000bU) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[12U] = (((__Vtemp_38[((IData)(0x0000000dU) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x0000000cU) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[13U] = (((__Vtemp_38[((IData)(0x0000000eU) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x0000000dU) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[14U] = (((__Vtemp_38[((IData)(0x0000000fU) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x0000000eU) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[15U] = (((__Vtemp_38[((IData)(0x00000010U) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x0000000fU) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[16U] = (((__Vtemp_38[((IData)(0x00000011U) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x00000010U) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[17U] = (((__Vtemp_38[((IData)(0x00000012U) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x00000011U) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[18U] = (((__Vtemp_38[((IData)(0x00000013U) 
                                         + __VExpandSel_WordIdx_7)] 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x00000012U) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
        __Vtemp_30[19U] = (((((0x00000013U <= __VExpandSel_WordIdx_7)
                               ? 0U : __Vtemp_38[((IData)(0x00000014U) 
                                                  + __VExpandSel_WordIdx_7)]) 
                             << __VExpandSel_HiShift_7) 
                            & __VExpandSel_HiMask_7) 
                           | (__Vtemp_38[((IData)(0x00000013U) 
                                          + __VExpandSel_WordIdx_7)] 
                              >> __VExpandSel_LoShift_7));
    } else {
        __Vtemp_28[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[0U];
        __Vtemp_28[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[1U];
        __Vtemp_28[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[2U];
        __Vtemp_28[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[3U];
        __Vtemp_28[4U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[4U];
        __Vtemp_28[5U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[5U];
        __Vtemp_28[6U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[6U];
        __Vtemp_28[7U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[7U];
        __Vtemp_28[8U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[8U];
        __Vtemp_28[9U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[9U];
        __Vtemp_28[10U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[10U];
        __Vtemp_28[11U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[11U];
        __Vtemp_28[12U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[12U];
        __Vtemp_28[13U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[13U];
        __Vtemp_28[14U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[14U];
        __Vtemp_28[15U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[15U];
        __Vtemp_28[16U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[16U];
        __Vtemp_28[17U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[17U];
        __Vtemp_28[18U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[18U];
        __Vtemp_28[19U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___0[19U];
        __Vtemp_30[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[0U];
        __Vtemp_30[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[1U];
        __Vtemp_30[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[2U];
        __Vtemp_30[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[3U];
        __Vtemp_30[4U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[4U];
        __Vtemp_30[5U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[5U];
        __Vtemp_30[6U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[6U];
        __Vtemp_30[7U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[7U];
        __Vtemp_30[8U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[8U];
        __Vtemp_30[9U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[9U];
        __Vtemp_30[10U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[10U];
        __Vtemp_30[11U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[11U];
        __Vtemp_30[12U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[12U];
        __Vtemp_30[13U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[13U];
        __Vtemp_30[14U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[14U];
        __Vtemp_30[15U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[15U];
        __Vtemp_30[16U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[16U];
        __Vtemp_30[17U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[17U];
        __Vtemp_30[18U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[18U];
        __Vtemp_30[19U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vxrand___1[19U];
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_28[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_28[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = __Vtemp_28[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = __Vtemp_28[3U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U] 
        = __Vtemp_28[4U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U] 
        = __Vtemp_28[5U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[6U] 
        = __Vtemp_28[6U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[7U] 
        = __Vtemp_28[7U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[8U] 
        = __Vtemp_28[8U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[9U] 
        = __Vtemp_28[9U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[10U] 
        = __Vtemp_28[10U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[11U] 
        = __Vtemp_28[11U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[12U] 
        = __Vtemp_28[12U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[13U] 
        = __Vtemp_28[13U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[14U] 
        = __Vtemp_28[14U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[15U] 
        = __Vtemp_28[15U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[16U] 
        = __Vtemp_28[16U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[17U] 
        = __Vtemp_28[17U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[18U] 
        = __Vtemp_28[18U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[19U] 
        = (((IData)(Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                    [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008]) 
            << 0x00000010U) | (0x0000ffffU & __Vtemp_28[19U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_30[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_30[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[2U] 
        = __Vtemp_30[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[3U] 
        = __Vtemp_30[3U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[4U] 
        = __Vtemp_30[4U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[5U] 
        = __Vtemp_30[5U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[6U] 
        = __Vtemp_30[6U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[7U] 
        = __Vtemp_30[7U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[8U] 
        = __Vtemp_30[8U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[9U] 
        = __Vtemp_30[9U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[10U] 
        = __Vtemp_30[10U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[11U] 
        = __Vtemp_30[11U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[12U] 
        = __Vtemp_30[12U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[13U] 
        = __Vtemp_30[13U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[14U] 
        = __Vtemp_30[14U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[15U] 
        = __Vtemp_30[15U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[16U] 
        = __Vtemp_30[16U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[17U] 
        = __Vtemp_30[17U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[18U] 
        = __Vtemp_30[18U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[19U] 
        = ((0x00010000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[19U]) 
           | (0x0000ffffU & __Vtemp_30[19U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[19U] 
        = ((0x0000ffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_in[19U]) 
           | (0x0001ffffU & ((IData)(Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                     [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008]) 
                             << 0x00000010U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1095) 
                    >> 1U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__rsp_rem_mask_n 
        = (3U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__mask_sel)) 
                 & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__rsp_rem_mask) 
                    >> (0x0000000fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel) 
                                       << 1U)))));
    if ((0x010fU >= (0x000001ffU & ((IData)(0x00000088U) 
                                    * (1U & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests))))))) {
        __Vtemp_45[0U] = (IData)((((QData)((IData)(
                                                   (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(0x40U) 
                                                          + 
                                                          (0x00000020U 
                                                           & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                               [
                                                               (7U 
                                                                & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                               >> 3U) 
                                                              << 5U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                      [
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x0000007fU 
                                                         & ((IData)(0x40U) 
                                                            + 
                                                            (0x00000020U 
                                                             & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                 [
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                 >> 3U) 
                                                                << 5U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x40U) 
                                                           + 
                                                           (0x00000020U 
                                                            & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                [
                                                                (7U 
                                                                 & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                >> 3U) 
                                                               << 5U))))))) 
                                                    | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                       [
                                                       (3U 
                                                        & (((IData)(0x40U) 
                                                            + 
                                                            (0x00000020U 
                                                             & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                 [
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                 >> 3U) 
                                                                << 5U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((IData)(0x40U) 
                                                           + 
                                                           (0x00000020U 
                                                            & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                [
                                                                (7U 
                                                                 & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                >> 3U) 
                                                               << 5U)))))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x40U) 
                                                           + 
                                                           (0x00000020U 
                                                            & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                [
                                                                (7U 
                                                                 & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                >> 2U) 
                                                               << 5U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                       [
                                                       (((IData)(0x0000001fU) 
                                                         + 
                                                         (0x0000007fU 
                                                          & ((IData)(0x40U) 
                                                             + 
                                                             (0x00000020U 
                                                              & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                  >> 2U) 
                                                                 << 5U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x40U) 
                                                            + 
                                                            (0x00000020U 
                                                             & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                 [
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                 >> 2U) 
                                                                << 5U))))))) 
                                                     | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                        [
                                                        (3U 
                                                         & (((IData)(0x40U) 
                                                             + 
                                                             (0x00000020U 
                                                              & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                  >> 2U) 
                                                                 << 5U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x40U) 
                                                            + 
                                                            (0x00000020U 
                                                             & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                 [
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                 >> 2U) 
                                                                << 5U))))))))));
        __Vtemp_45[1U] = (IData)(((((QData)((IData)(
                                                    (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x40U) 
                                                           + 
                                                           (0x00000020U 
                                                            & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                [
                                                                (7U 
                                                                 & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                >> 3U) 
                                                               << 5U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                       [
                                                       (((IData)(0x0000001fU) 
                                                         + 
                                                         (0x0000007fU 
                                                          & ((IData)(0x40U) 
                                                             + 
                                                             (0x00000020U 
                                                              & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                  >> 3U) 
                                                                 << 5U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x40U) 
                                                            + 
                                                            (0x00000020U 
                                                             & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                 [
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                 >> 3U) 
                                                                << 5U))))))) 
                                                     | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                        [
                                                        (3U 
                                                         & (((IData)(0x40U) 
                                                             + 
                                                             (0x00000020U 
                                                              & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                  >> 3U) 
                                                                 << 5U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x40U) 
                                                            + 
                                                            (0x00000020U 
                                                             & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                 [
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                 >> 3U) 
                                                                << 5U)))))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(0x40U) 
                                                            + 
                                                            (0x00000020U 
                                                             & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                 [
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                 >> 2U) 
                                                                << 5U)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                        [
                                                        (((IData)(0x0000001fU) 
                                                          + 
                                                          (0x0000007fU 
                                                           & ((IData)(0x40U) 
                                                              + 
                                                              (0x00000020U 
                                                               & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                   [
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                   >> 2U) 
                                                                  << 5U))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & ((IData)(0x40U) 
                                                             + 
                                                             (0x00000020U 
                                                              & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                  >> 2U) 
                                                                 << 5U))))))) 
                                                      | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                         [
                                                         (3U 
                                                          & (((IData)(0x40U) 
                                                              + 
                                                              (0x00000020U 
                                                               & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                   [
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                   >> 2U) 
                                                                  << 5U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((IData)(0x40U) 
                                                             + 
                                                             (0x00000020U 
                                                              & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                  >> 2U) 
                                                                 << 5U))))))))) 
                                  >> 0x00000020U));
        __Vtemp_47[4U] = ((__Vtemp_45[1U] >> 0x0000001cU) 
                          | (((((IData)((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__mask_sel) 
                                          >> 1U) & 
                                         (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                          [(7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                          >> 7U))) 
                                << 3U) | ((IData)((
                                                   ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__mask_sel) 
                                                    >> 1U) 
                                                   & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                      >> 6U))) 
                                          << 2U)) | 
                              ((2U & (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                        [(7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                        >> 5U) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__mask_sel)) 
                                      << 1U)) | (1U 
                                                 & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__mask_sel))))) 
                             << 4U));
        __Vtemp_48[0U] = (((IData)((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                     [
                                                     (1U 
                                                      & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                         [
                                                         (7U 
                                                          & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                         >> 1U))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                      [
                                                      (1U 
                                                       & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                       [
                                                       (7U 
                                                        & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))])])))) 
                           << 4U) | ((8U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel)) 
                                     | (7U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                              [(7U 
                                                & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                              >> 8U))));
        __Vtemp_48[1U] = (((IData)((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                     [
                                                     (1U 
                                                      & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                         [
                                                         (7U 
                                                          & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                         >> 1U))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                      [
                                                      (1U 
                                                       & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                       [
                                                       (7U 
                                                        & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))])])))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                                         [
                                                                         (1U 
                                                                          & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                             [
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                                             >> 1U))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                                          [
                                                                          (1U 
                                                                           & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                                           [
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))])]))) 
                                                       >> 0x00000020U)) 
                                              << 4U));
        __Vtemp_48[2U] = ((__Vtemp_45[0U] << 4U) | 
                          ((IData)(((((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                      [
                                                      (1U 
                                                       & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                          [
                                                          (7U 
                                                           & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))] 
                                                          >> 1U))])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__rsp_data_out
                                                       [
                                                       (1U 
                                                        & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__data_table__DOT__ram
                                                        [
                                                        (7U 
                                                         & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel))])]))) 
                                    >> 0x00000020U)) 
                           >> 0x0000001cU));
        __Vtemp_48[3U] = ((__Vtemp_45[0U] >> 0x0000001cU) 
                          | (__Vtemp_45[1U] << 4U));
        __Vtemp_48[4U] = ((((IData)((((QData)((IData)(
                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                       >> 4U))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                        >> 4U))))) 
                            << 0x0000000cU) | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel) 
                                               << 8U)) 
                          | __Vtemp_47[4U]);
        __Vtemp_48[5U] = (((0x000000ffU & ((IData)(
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                      >> 4U))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                       >> 4U))))) 
                                           >> 0x00000014U)) 
                           | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel) 
                              >> 0x00000018U)) | ((0x00000f00U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 4U))) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(
                                                                                (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 4U))))) 
                                                      >> 0x00000014U)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 4U))) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(
                                                                                (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 4U)))) 
                                                              >> 0x00000020U)) 
                                                     << 0x0000000cU)));
        __Vtemp_48[6U] = ((0x000000ffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                      >> 4U))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                       >> 4U)))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000014U)) 
                          | (((IData)((((QData)((IData)(
                                                        (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                         >> 4U))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                          >> 4U))))) 
                              << 0x0000000cU) | (0x00000f00U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 4U))) 
                                                               << 0x00000020U) 
                                                              | (QData)((IData)(
                                                                                (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                                >> 4U)))) 
                                                             >> 0x00000020U)) 
                                                    >> 0x00000014U))));
        __Vtemp_48[7U] = ((0x000000ffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                     >> 4U))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                      >> 4U))))) 
                                          >> 0x00000014U)) 
                          | ((0x00000f00U & ((IData)(
                                                     (((QData)((IData)(
                                                                       (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                        >> 4U))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                         >> 4U))))) 
                                             >> 0x00000014U)) 
                             | ((IData)(((((QData)((IData)(
                                                           (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                            >> 4U))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                             >> 4U)))) 
                                         >> 0x00000020U)) 
                                << 0x0000000cU)));
        __Vtemp_48[8U] = ((0x000000ffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                      >> 4U))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                       >> 4U)))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000014U)) 
                          | ((0x00000f00U & ((IData)(
                                                     ((((QData)((IData)(
                                                                        (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                         >> 4U))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                          >> 4U)))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000014U)) 
                             | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w) 
                                 & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1245) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1246) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1247) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1248)))) 
                                << 0x0000000cU)));
        __VExpandSel_WordIdx_8 = (0x0000000fU & (((IData)(0x00000088U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests)))) 
                                                 >> 5U));
        __VExpandSel_LoShift_8 = (0x0000001fU & ((IData)(0x00000088U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests)))));
        __VExpandSel_Aligned_8 = (0U == __VExpandSel_LoShift_8);
        if (__VExpandSel_Aligned_8) {
            __VExpandSel_HiShift_8 = 0U;
            __VExpandSel_HiMask_8 = 0U;
        } else {
            __VExpandSel_HiShift_8 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_8);
            __VExpandSel_HiMask_8 = 0xffffffffU;
        }
        __Vtemp_41[0U] = (((__Vtemp_48[((IData)(1U) 
                                        + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (__Vtemp_48[__VExpandSel_WordIdx_8] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_41[1U] = (((__Vtemp_48[((IData)(2U) 
                                        + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (__Vtemp_48[((IData)(1U) 
                                         + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_41[2U] = (((__Vtemp_48[((IData)(3U) 
                                        + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (__Vtemp_48[((IData)(2U) 
                                         + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_41[3U] = (((__Vtemp_48[((IData)(4U) 
                                        + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (__Vtemp_48[((IData)(3U) 
                                         + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_41[4U] = (((((4U <= __VExpandSel_WordIdx_8)
                              ? 0U : __Vtemp_48[((IData)(5U) 
                                                 + __VExpandSel_WordIdx_8)]) 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (__Vtemp_48[((IData)(4U) 
                                         + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
    } else {
        __Vtemp_41[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT____Vxrand___0[0U];
        __Vtemp_41[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT____Vxrand___0[1U];
        __Vtemp_41[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT____Vxrand___0[2U];
        __Vtemp_41[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT____Vxrand___0[3U];
        __Vtemp_41[4U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT____Vxrand___0[4U];
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = __Vtemp_41[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_41[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_41[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_41[3U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = ((0x00000300U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]) 
           | (0x000000ffU & __Vtemp_41[4U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = ((0x000000ffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U]) 
           | (0x000003ffU & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                              << 9U) | (0x00000100U 
                                        & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_requests__BRA__0__KET____DOT__requests)) 
                                           << 8U)))));
}

void Vrtlsim_shim___024root___nba_sequent__TOP__10(Vrtlsim_shim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___nba_sequent__TOP__10\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out = 0;
    CData/*1:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out;
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out = 0;
    VlWide<4>/*118:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w;
    VL_ZERO_W(119, rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w);
    VlWide<4>/*118:0*/ rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w;
    VL_ZERO_W(119, rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w);
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_990;
    __VdfgRegularize_h6e95ff9d_0_990 = 0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_992;
    __VdfgRegularize_h6e95ff9d_0_992 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_LoShift_3;
    CData/*0:0*/ __VExpandSel_Aligned_3;
    IData/*31:0*/ __VExpandSel_HiShift_3;
    IData/*31:0*/ __VExpandSel_HiMask_3;
    IData/*31:0*/ __VExpandSel_WordIdx_4;
    IData/*31:0*/ __VExpandSel_LoShift_4;
    CData/*0:0*/ __VExpandSel_Aligned_4;
    IData/*31:0*/ __VExpandSel_HiShift_4;
    IData/*31:0*/ __VExpandSel_HiMask_4;
    // Body
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET__.req_valid) 
            << 1U) | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET__.req_valid));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_passthru__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_out_if__BRA__0__KET__.rsp_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__perf_icache_req_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_out_if__BRA__0__KET__.req_ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_out_if__BRA__0__KET__.req_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET__.req_valid));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET__.req_valid) 
            << 1U) | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_next 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_active) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__1__KET__.ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__ibuffer_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__valid__BRA__0__KET__) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__1__KET__.ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__pop 
        = ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
           & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_active)
                ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_done)
                : (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_hold))) 
              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__1__KET__.ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_next 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_active) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__0__KET__.ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__ibuffer_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__valid__BRA__0__KET__) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__0__KET__.ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__pop 
        = ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
           & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_active)
                ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_done)
                : (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__g_uop__DOT__uop_sequencer__DOT__uop_hold))) 
              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__0__KET__.ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1243) 
                    & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET__.rsp_ready))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((2U | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET__.rsp_ready) 
                           & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_matches))) 
                    >> (1U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_pop 
        = ((~ (0U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__rsp_rem_mask_n))) 
           & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET__.rsp_ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__.rsp_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_rst)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_src_if__BRA__2__KET__.req_ready)));
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (3U & ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_valid))) 
                 & ((IData)(1U) << (1U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                          >> 0x0000001cU)))));
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (3U & ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET__.req_valid))) 
                 & ((IData)(1U) << (1U & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                          >> 0x0000001cU)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w 
        = ((0U != ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__prev_grant) 
                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests)))
            ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__prev_grant)
            : (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w 
        = ((0U != ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__prev_grant) 
                   & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests)))
            ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__prev_grant)
            : (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__in_use_mask 
        = (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__inuse_regs_n 
           & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__ibuffer_fire)
               ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__ibf_regs_mask
               : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__stg_regs_mask));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_n 
        = (3U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                 + (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__pop)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__g_ibuf_cnt__BRA__1__KET____DOT__size_n 
        = (7U & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__g_ibuf_cnt__BRA__1__KET____DOT__size_r) 
                  + ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__schedule_warps)) 
                     & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__schedule_warps) 
                         >> 1U) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in)))) 
                 - (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__pop)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__in_use_mask 
        = (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__inuse_regs_n 
           & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__ibuffer_fire)
               ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__ibf_regs_mask
               : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__stg_regs_mask));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_n 
        = (3U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                 + (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__pop)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__g_ibuf_cnt__BRA__0__KET____DOT__size_n 
        = (7U & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__g_ibuf_cnt__BRA__0__KET____DOT__size_r) 
                  + ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__schedule_warps) 
                     & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in))) 
                 - (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__pop)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots;
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_pop) {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
               | (0x00ffU & ((IData)(1U) << (7U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_pack__DOT__g_pack__DOT__tag_sel)))));
    }
    if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_push) {
        vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_coalescing__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__core_rsp_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__core_rsp_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (((Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                      [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1001] 
                      >> 1U) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready)) 
                    | ((Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                        [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_999] 
                        >> 1U) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_rsp_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1001] 
                  & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready)) 
                 | ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_rsp_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                    | (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                       [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_999] 
                       & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mreq_queue_pop 
        = ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mem_req_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
           & (((Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_997] 
                >> 1U) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready)) 
              | ((Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                  [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_995] 
                  >> 1U) & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mreq_queue_pop 
        = ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mem_req_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
           & ((Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
               [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_997] 
               & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready)) 
              | (Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                 [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_995] 
                 & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268 = ((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                  | (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests 
        = ((2U & (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
           | (1U & ((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests 
        = ((2U & ((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                  << 1U)) | (1U & (IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1225 = (IData)(
                                                          (2U 
                                                           == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)));
    if ((0xa3U >= (0x000000ffU & ((IData)(0x00000052U) 
                                  * (1U & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w))))))) {
        __Vtemp_4[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET__.req_data[0U];
        __Vtemp_4[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET__.req_data[1U];
        __Vtemp_4[2U] = (0x00100000U | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET__.req_data[2U]);
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        __Vtemp_4[5U] = 0U;
        __VExpandSel_WordIdx_1 = (7U & (((IData)(0x00000052U) 
                                         * (1U & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)))) 
                                        >> 5U));
        __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000052U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)))));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        __Vtemp_2[0U] = (((__Vtemp_4[((IData)(1U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_4[__VExpandSel_WordIdx_1] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[1U] = (((__Vtemp_4[((IData)(2U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_4[((IData)(1U) 
                                       + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[2U] = (((((3U <= __VExpandSel_WordIdx_1)
                             ? 0U : __Vtemp_4[((IData)(3U) 
                                               + __VExpandSel_WordIdx_1)]) 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (__Vtemp_4[((IData)(2U) 
                                       + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
    } else {
        __Vtemp_2[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vxrand___0[0U];
        __Vtemp_2[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vxrand___0[1U];
        __Vtemp_2[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vxrand___0[2U];
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((0x00040000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U]) 
           | (0x0003ffffU & __Vtemp_2[2U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((0x0003ffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U]) 
           | (0x00040000U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)) 
                             << 0x00000012U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                    & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w))));
    if ((0xedU >= (0x000000ffU & ((IData)(0x00000077U) 
                                  * (1U & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w))))))) {
        __Vtemp_9[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
        __Vtemp_9[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
        __Vtemp_9[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
        __Vtemp_9[3U] = (0x08000000U | vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]);
        __Vtemp_9[4U] = 0U;
        __Vtemp_9[5U] = 0U;
        __Vtemp_9[6U] = 0U;
        __Vtemp_9[7U] = 0U;
        __VExpandSel_WordIdx_2 = (7U & (((IData)(0x00000077U) 
                                         * (1U & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)))) 
                                        >> 5U));
        __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000077U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)))));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_7[0U] = (((__Vtemp_9[((IData)(1U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (__Vtemp_9[__VExpandSel_WordIdx_2] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_7[1U] = (((__Vtemp_9[((IData)(2U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (__Vtemp_9[((IData)(1U) 
                                       + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_7[2U] = (((__Vtemp_9[((IData)(3U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (__Vtemp_9[((IData)(2U) 
                                       + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_7[3U] = (((((4U <= __VExpandSel_WordIdx_2)
                             ? 0U : __Vtemp_9[((IData)(4U) 
                                               + __VExpandSel_WordIdx_2)]) 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (__Vtemp_9[((IData)(3U) 
                                       + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
    } else {
        __Vtemp_7[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vxrand___0[0U];
        __Vtemp_7[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vxrand___0[1U];
        __Vtemp_7[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vxrand___0[2U];
        __Vtemp_7[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vxrand___0[3U];
    }
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_7[0U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_7[1U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = __Vtemp_7[2U];
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = ((0x00800000U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U]) 
           | (0x007fffffU & __Vtemp_7[3U]));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = ((0x007fffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U]) 
           | (0x00800000U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)) 
                             << 0x00000017U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                    & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1249 = (IData)(
                                                          (2U 
                                                           == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__ibuf_full_n 
        = (((4U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__g_ibuf_cnt__BRA__1__KET____DOT__size_n)) 
            << 1U) | (4U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__scheduler__DOT__g_ibuf_cnt__BRA__0__KET____DOT__size_n)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mem_req_queue__DOT__g_depth_n__DOT__rd_ptr_n 
        = (0x0000000fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mem_req_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                          + (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mreq_queue_pop)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mem_req_queue__DOT__g_depth_n__DOT__rd_ptr_n 
        = (0x0000000fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mem_req_queue__DOT__g_depth_n__DOT__rd_ptr_r) 
                          + (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mreq_queue_pop)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__core_req_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268) 
              >> 1U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_req_fire 
        = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_ready) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_991 = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT____Vxrand___0) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_lut2__DOT__state)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_993 = (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT____Vxrand___0) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_requests) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_lut2__DOT__state)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1225) 
            << 1U) | (1U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1249) 
            << 1U) | (1U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__requests_w)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mshr_pending_size__DOT__g_size_gt1__DOT__g_wide_step__DOT__size_n 
        = (0x0000001fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mshr_pending_size__DOT__g_size_gt1__DOT__g_wide_step__DOT__size_r) 
                          + VL_EXTENDS_II(5,3, (7U 
                                                & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__core_req_fire) 
                                                   - (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mshr_dequeue))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mshr_pending_size__DOT__g_size_gt1__DOT__g_wide_step__DOT__size_n 
        = (0x0000001fU & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mshr_pending_size__DOT__g_size_gt1__DOT__g_wide_step__DOT__size_r) 
                          + VL_EXTENDS_II(5,3, (7U 
                                                & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_req_fire) 
                                                   - (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mshr_dequeue))))));
    __VdfgRegularize_h6e95ff9d_0_990 = (0x000000ffU 
                                        & ((IData)(0x00000077U) 
                                           * Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                           [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_991]));
    __VdfgRegularize_h6e95ff9d_0_992 = (0x000000ffU 
                                        & ((IData)(0x00000077U) 
                                           * Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                                           [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_993]));
    if ((0xedU >= (IData)(__VdfgRegularize_h6e95ff9d_0_990))) {
        __VExpandSel_WordIdx_3 = ((IData)(__VdfgRegularize_h6e95ff9d_0_990) 
                                  >> 5U);
        __VExpandSel_LoShift_3 = (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_990));
        __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
        if (__VExpandSel_Aligned_3) {
            __VExpandSel_HiShift_3 = 0U;
            __VExpandSel_HiMask_3 = 0U;
        } else {
            __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_3);
            __VExpandSel_HiMask_3 = 0xffffffffU;
        }
        __Vtemp_12[0U] = (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                            [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [__VExpandSel_WordIdx_3] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_12[1U] = (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                            [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_12[2U] = (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                            [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_12[3U] = (((((4U <= __VExpandSel_WordIdx_3)
                              ? 0U : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(4U) + __VExpandSel_WordIdx_3)]) 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
    } else {
        __Vtemp_12[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand___0[0U];
        __Vtemp_12[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand___0[1U];
        __Vtemp_12[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand___0[2U];
        __Vtemp_12[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand___0[3U];
    }
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U] 
        = __Vtemp_12[0U];
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U] 
        = __Vtemp_12[1U];
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
        = __Vtemp_12[2U];
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[3U] 
        = (0x007fffffU & __Vtemp_12[3U]);
    if ((0xedU >= (IData)(__VdfgRegularize_h6e95ff9d_0_992))) {
        __VExpandSel_WordIdx_4 = ((IData)(__VdfgRegularize_h6e95ff9d_0_992) 
                                  >> 5U);
        __VExpandSel_LoShift_4 = (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_992));
        __VExpandSel_Aligned_4 = (0U == __VExpandSel_LoShift_4);
        if (__VExpandSel_Aligned_4) {
            __VExpandSel_HiShift_4 = 0U;
            __VExpandSel_HiMask_4 = 0U;
        } else {
            __VExpandSel_HiShift_4 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_4);
            __VExpandSel_HiMask_4 = 0xffffffffU;
        }
        __Vtemp_14[0U] = (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                            [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [__VExpandSel_WordIdx_4] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_14[1U] = (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                            [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_14[2U] = (((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                            [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_14[3U] = (((((4U <= __VExpandSel_WordIdx_4)
                              ? 0U : vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(4U) + __VExpandSel_WordIdx_4)]) 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_data_in
                             [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
    } else {
        __Vtemp_14[0U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand___0[0U];
        __Vtemp_14[1U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand___0[1U];
        __Vtemp_14[2U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand___0[2U];
        __Vtemp_14[3U] = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand___0[3U];
    }
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U] 
        = __Vtemp_14[0U];
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U] 
        = __Vtemp_14[1U];
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
        = __Vtemp_14[2U];
    rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[3U] 
        = (0x007fffffU & __Vtemp_14[3U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_963 = (0x01ffffffU 
                                                  & (((1U 
                                                       == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__state)))
                                                      ? 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__counter))
                                                      : 
                                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                                                       ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_addr_r
                                                       : 
                                                      ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__fill_mux)
                                                        ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__addr_table
                                                       [
                                                       (0x0000000fU 
                                                        & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U])]
                                                        : 
                                                       ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[3U] 
                                                         << 2U) 
                                                        | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                                           >> 0x0000001eU))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_977 = (0x01ffffffU 
                                                  & (((1U 
                                                       == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)))
                                                      ? 
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__counter))
                                                      : 
                                                     ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                                                       ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_addr_r
                                                       : 
                                                      ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__fill_mux)
                                                        ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__addr_table
                                                       [
                                                       (0x0000000fU 
                                                        & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U])]
                                                        : 
                                                       ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[3U] 
                                                         << 2U) 
                                                        | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                                           >> 0x0000001eU))))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_tags__DOT__g_way_decode__BRA__0__KET____DOT__g_dirty__DOT__same_set 
        = ((0x0000001fU & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__reg_s0__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                           >> 2U)) == (0x0000001fU 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_963));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[0U] 
        = (0xfffffff0U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[0U]);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[0U] 
        = ((0x0000000fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[0U]) 
           | ((IData)(((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                        ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                            [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                            << 0x00000031U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                                << 0x00000011U) 
                                               | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                  [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                  >> 0x0000000fU)))
                        : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                            << 0x0000002eU) | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                                << 0x0000000eU) 
                                               | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                  >> 0x00000012U))))) 
              << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[1U] 
        = (((IData)(((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                      ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                          [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                          << 0x00000031U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                              [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                              << 0x00000011U) 
                                             | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                >> 0x0000000fU)))
                      : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                          << 0x0000002eU) | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                              << 0x0000000eU) 
                                             | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                >> 0x00000012U))))) 
            >> 0x0000001cU) | ((IData)((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                                          ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                              [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                                              << 0x00000031U) 
                                             | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                 [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                                 << 0x00000011U) 
                                                | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                   [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                   >> 0x0000000fU)))
                                          : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                                              << 0x0000002eU) 
                                             | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                                 << 0x0000000eU) 
                                                | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                   >> 0x00000012U)))) 
                                        >> 0x00000020U)) 
                               << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xfffffff0U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U]) 
           | ((IData)((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                         ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                             [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                             << 0x00000031U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                 [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                                 << 0x00000011U) 
                                                | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                   [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                   >> 0x0000000fU)))
                         : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                             << 0x0000002eU) | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                                 << 0x0000000eU) 
                                                | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                   >> 0x00000012U)))) 
                       >> 0x00000020U)) >> 0x0000001cU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xffffe00fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U]) 
           | (0x00001ff0U & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                              [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                              & (- (IData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)))) 
                             << 4U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xff801fffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U]) 
           | ((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_966)
                 : Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_991]) 
               << 0x00000016U) | (((0x000001f0U & (
                                                   ((3U 
                                                     == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_uuid_r) 
                                                     << 4U)
                                                     : 
                                                    (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_965)
                                                       : 
                                                      ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__fill_mux)
                                                        ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U]
                                                        : 
                                                       ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U] 
                                                         << 0x00000013U) 
                                                        | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U] 
                                                           >> 0x0000000dU)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__state)))))) 
                                                   << 4U)) 
                                   | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r)) 
                                  << 0x0000000dU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xfc7fffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U]) 
           | (0x03800000U & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                               ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259)
                               : ((- (IData)((1U & 
                                              (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__fill_mux))))) 
                                  & ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                      << 6U) | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                                >> 0x0000001aU)))) 
                             << 0x00000017U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0x03ffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[2U]) 
           | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                ? ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                    [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                    << 0x00000011U) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                       [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                       >> 0x0000000fU))
                : ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                    << 0x0000000eU) | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                       >> 0x00000012U))) 
              << 0x0000001aU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0xfffffffcU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[3U]) 
           | (3U & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                      ? ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                          [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                          << 0x00000011U) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                             [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                             >> 0x0000000fU))
                      : ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                          << 0x0000000eU) | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                             >> 0x00000012U))) 
                    >> 6U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0xe0000003U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[3U]) 
           | (((0x06000000U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__counter) 
                               << 0x00000014U)) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_963) 
              << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0x1fffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[3U]) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268) 
                                 >> 1U)))) & rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U]) 
              << 0x0000001dU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[4U] 
        = ((0x0003fc00U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[4U]) 
           | (0x000003ffU & (((- (IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268) 
                                                >> 1U)))) 
                              & rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U]) 
                             >> 3U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[4U] 
        = ((0x000003ffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__sel_req[4U]) 
           | (0x0003ffffU & (((((((1U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                  | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_fire) 
                                     | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__mem_rsp_fire) 
                                        | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__flush_fire) 
                                           | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__core_req_fire))))) 
                                 << 3U) | ((1U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__fill_enable) 
                                   << 1U) | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__flush_enable))) 
                              << 0x0000000eU) | (((8U 
                                                   & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_enable) 
                                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1221)) 
                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268) 
                                                             >> 1U))) 
                                                      << 3U)) 
                                                  | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_enable) 
                                                      << 2U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__replay_mux)
                                                            ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_rw_r)
                                                            : 
                                                           (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                                            >> 0x0000001dU))))) 
                                                 << 0x0000000aU))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_tags__DOT__g_way_decode__BRA__0__KET____DOT__g_dirty__DOT__same_set 
        = ((0x0000001fU & (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__reg_s0__DOT__g_pipe__DOT__g_partial_reset__DOT__pipe_free[3U] 
                           >> 2U)) == (0x0000001fU 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_977));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[0U] 
        = (0xfffffff0U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[0U]);
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[0U] 
        = ((0x0000000fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[0U]) 
           | ((IData)(((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                        ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                            [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                            << 0x00000031U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                                << 0x00000011U) 
                                               | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                  [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                  >> 0x0000000fU)))
                        : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                            << 0x0000002eU) | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                                << 0x0000000eU) 
                                               | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                  >> 0x00000012U))))) 
              << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[1U] 
        = (((IData)(((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                      ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                          [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                          << 0x00000031U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                              [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                              << 0x00000011U) 
                                             | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                >> 0x0000000fU)))
                      : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                          << 0x0000002eU) | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                              << 0x0000000eU) 
                                             | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                >> 0x00000012U))))) 
            >> 0x0000001cU) | ((IData)((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                                          ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                              [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                                              << 0x00000031U) 
                                             | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                 [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                                 << 0x00000011U) 
                                                | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                   [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                   >> 0x0000000fU)))
                                          : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                                              << 0x0000002eU) 
                                             | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                                 << 0x0000000eU) 
                                                | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                   >> 0x00000012U)))) 
                                        >> 0x00000020U)) 
                               << 4U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xfffffff0U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U]) 
           | ((IData)((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                         ? (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                             [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U])) 
                             << 0x00000031U) | (((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                 [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U])) 
                                                 << 0x00000011U) 
                                                | ((QData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                                                   [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                   >> 0x0000000fU)))
                         : (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U])) 
                             << 0x0000002eU) | (((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[1U])) 
                                                 << 0x0000000eU) 
                                                | ((QData)((IData)(rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U])) 
                                                   >> 0x00000012U)))) 
                       >> 0x00000020U)) >> 0x0000001cU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xffffe00fU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U]) 
           | (0x00001ff0U & ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                              [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                              & (- (IData)((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)))) 
                             << 4U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xff801fffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U]) 
           | ((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_980)
                 : Vrtlsim_shim__ConstPool__TABLE_h5d1bfebb_0
                [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_993]) 
               << 0x00000016U) | (((0x000001f0U & (
                                                   ((3U 
                                                     == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_uuid_r) 
                                                     << 4U)
                                                     : 
                                                    (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_979)
                                                       : 
                                                      ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__fill_mux)
                                                        ? vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_rsp_xbar__DOT__g_fallback__DOT__xbar_switch__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__data_out_t[0U]
                                                        : 
                                                       ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U] 
                                                         << 0x00000013U) 
                                                        | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U] 
                                                           >> 0x0000000dU)))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)))))) 
                                                   << 4U)) 
                                   | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r)) 
                                  << 0x0000000dU)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0xfc7fffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U]) 
           | (0x03800000U & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                               ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261)
                               : ((- (IData)((1U & 
                                              (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__fill_mux))))) 
                                  & ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                      << 6U) | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                                >> 0x0000001aU)))) 
                             << 0x00000017U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U] 
        = ((0x03ffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[2U]) 
           | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                ? ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                    [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                    << 0x00000011U) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                       [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                       >> 0x0000000fU))
                : ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                    << 0x0000000eU) | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                       >> 0x00000012U))) 
              << 0x0000001aU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0xfffffffcU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U]) 
           | (3U & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                      ? ((vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                          [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                          << 0x00000011U) | (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__mshr_store__DOT__ram
                                             [vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                             >> 0x0000000fU))
                      : ((rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                          << 0x0000000eU) | (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                             >> 0x00000012U))) 
                    >> 6U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0xe0000003U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U]) 
           | (((0x06000000U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__counter) 
                               << 0x00000014U)) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_977) 
              << 2U));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U] 
        = ((0x1fffffffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[3U]) 
           | (((- (IData)((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268)))) 
               & rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U]) 
              << 0x0000001dU));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[4U] 
        = ((0x0003fc00U & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[4U]) 
           | (0x000003ffU & (((- (IData)((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268)))) 
                              & rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[0U]) 
                             >> 3U)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[4U] 
        = ((0x000003ffU & vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__sel_req[4U]) 
           | (0x0003ffffU & (((((((1U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                  | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_fire) 
                                     | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mem_rsp_fire) 
                                        | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__flush_fire) 
                                           | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_req_fire))))) 
                                 << 3U) | ((1U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__fill_enable) 
                                   << 1U) | (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__flush_enable))) 
                              << 0x0000000eU) | (((8U 
                                                   & (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_enable) 
                                                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1164)) 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268))) 
                                                      << 3U)) 
                                                  | (((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_enable) 
                                                      << 2U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__replay_mux)
                                                            ? (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_rw_r)
                                                            : 
                                                           (rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__data_out_w[2U] 
                                                            >> 0x0000001dU))))) 
                                                 << 0x0000000aU))));
}

void Vrtlsim_shim___024root___nba_sequent__TOP__11(Vrtlsim_shim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___nba_sequent__TOP__11\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET__.rsp_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET__.rsp_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET__.rsp_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET__.rsp_ready)));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_flush_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__g_core_bus_out_req__BRA__0__KET____DOT__input_enable) 
                       & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_ready)) 
                      << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1095))) 
                    >> (1U & (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_req_nc_sel)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (((((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__g_core_bus_out_req__BRA__1__KET____DOT__input_enable) 
                       & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET__.req_ready)) 
                      << 1U) | ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                & Vrtlsim_shim__ConstPool__TABLE_haa26c0ff_0
                                [vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1008])) 
                    >> (1U & ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_req_nc_sel) 
                              >> 1U)))));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_ready 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET__.req_ready) 
            << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_ready));
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state;
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done;
    vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n 
        = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released;
    if ((1U != (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 3U;
        } else if ((3U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n 
                = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done) 
                   | (((5U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__cache_flush__DOT__state)) 
                       << 1U) | (5U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__cache_flush__DOT__state))));
            if ((3U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n))) {
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 4U;
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_done_n = 0U;
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n 
                    = vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_mask;
            }
        } else if ((4U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state))) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n 
                = ((IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released) 
                   & (~ (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_ready)));
            if ((0U == (IData)(vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__lock_released_n))) {
                vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 0U;
            }
        } else if (vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__flush_req_enable) {
            vlSelfRef.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__state_n = 2U;
        }
    }
}

void Vrtlsim_shim___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtlsim_shim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vrtlsim_shim___024root___eval_phase__act(Vrtlsim_shim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___eval_phase__act\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtlsim_shim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vrtlsim_shim___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vrtlsim_shim___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vrtlsim_shim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vrtlsim_shim___024root___nba_sequent__TOP__0(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__1(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__2(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__3(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__4(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__5(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__6(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__7(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim___024root___nba_sequent__TOP__8(Vrtlsim_shim___024root* vlSelf);
void Vrtlsim_shim_VX_result_if__Tz55___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET____0(Vrtlsim_shim_VX_result_if__Tz55* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_dcr_flush_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_icache_if__0(Vrtlsim_shim_VX_dcr_flush_if* vlSelf);
void Vrtlsim_shim_VX_dcr_flush_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_if__0(Vrtlsim_shim_VX_dcr_flush_if* vlSelf);
void Vrtlsim_shim_VX_writeback_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if__0(Vrtlsim_shim_VX_writeback_if* vlSelf);
void Vrtlsim_shim_VX_schedule_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if__0(Vrtlsim_shim_VX_schedule_if* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T2* vlSelf);
void Vrtlsim_shim_VX_fetch_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if__0(Vrtlsim_shim_VX_fetch_if* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D40_T9___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__socket_arb_in_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T9* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T3* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_lsu_sched_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET____0(Vrtlsim_shim_VX_lsu_sched_if* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T5* vlSelf);
void Vrtlsim_shim_VX_dcr_flush_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_dcache_if__0(Vrtlsim_shim_VX_dcr_flush_if* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_kmu_bus_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_kmu_bus_if__BRA__0__KET____0(Vrtlsim_shim_VX_kmu_bus_if* vlSelf);
void Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_lmem_if__BRA__0__KET____0(Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4* vlSelf);
void Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____0(Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4* vlSelf);
void Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____0(Vrtlsim_shim_VX_ibuffer_if* vlSelf);
void Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____0(Vrtlsim_shim_VX_ibuffer_if* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_warp_ctl_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if__0(Vrtlsim_shim_VX_warp_ctl_if* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T2* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_out_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D4_T3* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T4* vlSelf);
void Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__1__KET____0(Vrtlsim_shim_VX_ibuffer_if* vlSelf);
void Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__0__KET____0(Vrtlsim_shim_VX_ibuffer_if* vlSelf);
void Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____1(Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4* vlSelf);
void Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_lmem_if__BRA__0__KET____1(Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____1(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D40_T8___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_src_if__BRA__2__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T8* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET____0(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET____1(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET____1(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET____1(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET____1(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____1(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET____1(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);
void Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET____2(Vrtlsim_shim_VX_mem_bus_if__D8_T5* vlSelf);

bool Vrtlsim_shim___024root___eval_phase__nba(Vrtlsim_shim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___eval_phase__nba\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrtlsim_shim___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vrtlsim_shim___024root___nba_sequent__TOP__0(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__1(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__2(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__3(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__4(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__5(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__6(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__7(vlSelf);
                Vrtlsim_shim___024root___nba_sequent__TOP__8(vlSelf);
                Vrtlsim_shim_VX_result_if__Tz55___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__0__KET__));
                Vrtlsim_shim_VX_dcr_flush_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_icache_if__0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_icache_if));
                Vrtlsim_shim_VX_dcr_flush_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_if__0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_if));
                Vrtlsim_shim_VX_writeback_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if__0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if));
                Vrtlsim_shim_VX_schedule_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if__0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if));
                Vrtlsim_shim_VX_mem_bus_if__D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_icache_if__BRA__0__KET__));
                Vrtlsim_shim_VX_fetch_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if__0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if));
                Vrtlsim_shim_VX_mem_bus_if__D40_T9___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__socket_arb_in_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__socket_arb_in_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__1__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__1__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__));
                Vrtlsim_shim_VX_lsu_sched_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__g_lsu_scheduler__BRA__0__KET____DOT__sched_client_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__1__KET__));
                Vrtlsim_shim_VX_dcr_flush_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_dcache_if__0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__dcr_flush_dcache_if));
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET__));
                Vrtlsim_shim_VX_kmu_bus_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_kmu_bus_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_kmu_bus_if__BRA__0__KET__));
                Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_lmem_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_lmem_if__BRA__0__KET__));
                Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET__));
                Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET__));
                Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET__));
                Vrtlsim_shim_VX_warp_ctl_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if__0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if));
                Vrtlsim_shim___024root___nba_sequent__TOP__9(vlSelf);
                Vrtlsim_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_out_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__icache_dcr_flush__DOT__dcache_arb_out_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__g_dcache_bus_if__BRA__0__KET____DOT__g_flush_port__DOT__dcr_flush__DOT__dcache_arb_in_if__BRA__1__KET__));
                Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__1__KET__));
                Vrtlsim_shim_VX_ibuffer_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__0__KET__));
                Vrtlsim_shim_VX_lsu_mem_if__N2_D8_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__dcache_coalesced_if__BRA__0__KET__));
                Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_lmem_if__BRA__0__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_lmem_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D40_T8___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_src_if__BRA__2__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_src_if__BRA__2__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET____0((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET__));
                Vrtlsim_shim___024root___nba_sequent__TOP__10(vlSelf);
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__3__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__2__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__1__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D4_T4___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_block_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__));
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET____1((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET__));
                Vrtlsim_shim___024root___nba_sequent__TOP__11(vlSelf);
                Vrtlsim_shim_VX_mem_bus_if__D8_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET____2((&vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__1__KET__));
            }
        }
        Vrtlsim_shim___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtlsim_shim___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vrtlsim_shim___024root___eval_phase__ico(Vrtlsim_shim___024root* vlSelf);

void Vrtlsim_shim___024root___eval(Vrtlsim_shim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___eval\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vrtlsim_shim___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/Camellia/Desktop/\351\233\206\346\210\220\347\224\265\350\267\257\350\256\276\350\256\241\344\270\216\345\210\206\346\236\220-RouteB\344\272\244\344\273\230/9-GPU\345\244\215\347\216\260/vortex/sim/rtlsim/rtlsim_shim.sv", 16, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vrtlsim_shim___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrtlsim_shim___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/Camellia/Desktop/\351\233\206\346\210\220\347\224\265\350\267\257\350\256\276\350\256\241\344\270\216\345\210\206\346\236\220-RouteB\344\272\244\344\273\230/9-GPU\345\244\215\347\216\260/vortex/sim/rtlsim/rtlsim_shim.sv", 16, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrtlsim_shim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/c/Users/Camellia/Desktop/\351\233\206\346\210\220\347\224\265\350\267\257\350\256\276\350\256\241\344\270\216\345\210\206\346\236\220-RouteB\344\272\244\344\273\230/9-GPU\345\244\215\347\216\260/vortex/sim/rtlsim/rtlsim_shim.sv", 16, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vrtlsim_shim___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vrtlsim_shim___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vrtlsim_shim___024root___eval_debug_assertions(Vrtlsim_shim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___eval_debug_assertions\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.dcr_req_valid & 0xfeU)))) {
        Verilated::overWidthError("dcr_req_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.dcr_req_rw & 0xfeU)))) {
        Verilated::overWidthError("dcr_req_rw");
    }
    if (VL_UNLIKELY(((vlSelfRef.dcr_req_addr & 0xf000U)))) {
        Verilated::overWidthError("dcr_req_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");
    }
}
#endif  // VL_DEBUG
