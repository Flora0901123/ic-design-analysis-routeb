// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__4(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim___024root____Vm_traceActivitySetAll(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim_sim___eval_static__TOP__sim__4(vlSelf);
    Vsim___024root____Vm_traceActivitySetAll((&vlSymsp->TOP));
    vlSelfRef.__PVT__builder_rhs_self6 = 0U;
    vlSelfRef.__PVT__builder_rhs_self7 = 0U;
    vlSelfRef.__PVT__builder_rhs_self8 = 0U;
    vlSelfRef.__PVT__builder_rhs_self9 = 0U;
    vlSelfRef.__PVT__builder_self0 = 0U;
    vlSelfRef.__PVT__builder_self1 = 0U;
    vlSelfRef.__PVT__builder_self2 = 0U;
    vlSelfRef.__PVT__builder_self3 = 0U;
    vlSelfRef.__PVT__builder_self4 = 0U;
    vlSelfRef.__PVT__builder_self5 = 0U;
    vlSelfRef.__PVT__builder_self6 = 0U;
    vlSelfRef.__PVT__builder_shared_ack = 0U;
    vlSelfRef.__PVT__builder_shared_dat_r = 0U;
    vlSelfRef.__PVT__builder_slave_sel = 0U;
    vlSelfRef.__PVT__builder_slave_sel_r = 0U;
    vlSelfRef.__PVT__builder_t_self0 = 0U;
    vlSelfRef.__PVT__builder_t_self1 = 0U;
    vlSelfRef.__PVT__builder_t_self2 = 0U;
    vlSelfRef.__PVT__builder_t_self3 = 0U;
    vlSelfRef.__PVT__builder_t_self4 = 0U;
    vlSelfRef.__PVT__builder_t_self5 = 0U;
    vlSelfRef.__PVT__builder_wishbone2csr_next_state = 0U;
    vlSelfRef.__PVT__builder_wishbone2csr_state = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__0(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__1(Vsim_sim* vlSelf);

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__2(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim_sim___eval_static__TOP__sim__0(vlSelf);
    Vsim___024root____Vm_traceActivitySetAll((&vlSymsp->TOP));
    Vsim_sim___eval_static__TOP__sim__1(vlSelf);
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_first = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_last = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_first = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_last = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_valids = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_last = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_act_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cke = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_odt = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_o = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1 = 0x30dU;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_soc_rst = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_tag_di_dirty = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_tag_port_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_re = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__3(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim_sim___eval_static__TOP__sim__2(vlSelf);
    Vsim___024root____Vm_traceActivitySetAll((&vlSymsp->TOP));
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_en_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_load_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_r = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_status = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_reload_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_status = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_update_value_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value_status = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_clear = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_trigger_d = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_r = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_status = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_clear = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_pending = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_trigger_d = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxempty_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxfull_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxtx_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rxtx_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_status_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_status_status = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_clear = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_pending = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_trigger_d = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_txempty_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_txfull_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_word_clr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_word_inc = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_write_from_slave = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes2 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_writes3 = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_capture_q = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_capture_re = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_capture_storage = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_bytes_re = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_count = 0ULL;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dbus_snapshot = 0ULL;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dma_bytes_re = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dma_count = 0ULL;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dma_increment = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dma_snapshot = 0ULL;
    vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_bytes_re = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_count = 0ULL;
    vlSelfRef.__PVT__build_soc_cpu_traffic_ibus_snapshot = 0ULL;
    vlSelfRef.__PVT__build_soc_cpu_traffic_reset_re = 0U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_reset_storage = 0U;
    vlSelfRef.__PVT__build_soc_enable_re = 0U;
    vlSelfRef.__PVT__build_soc_enable_storage = 0U;
    vlSelfRef.__PVT__build_soc_pending_r = 0U;
    vlSelfRef.__PVT__build_soc_pending_re = 0U;
    vlSelfRef.__PVT__build_soc_pending_status = 0U;
    vlSelfRef.__PVT__build_soc_status_re = 0U;
    vlSelfRef.__PVT__build_soc_status_status = 0U;
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted = 0U;
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value = 0U;
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce = 0U;
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_is_ongoing = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk = 1U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_first = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_last = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk = 1U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_payload_data = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_uncached_wb_ack = 0U;
    vlSelfRef.__PVT__build_soc_uncached_wb_dat_r = 0U;
    vlSelfRef.__PVT__build_soc_uptime_cycles = 0ULL;
    vlSelfRef.__PVT__build_soc_uptime_cycles_re = 0U;
    vlSelfRef.__PVT__build_soc_uptime_cycles_status = 0ULL;
    vlSelfRef.__PVT__build_soc_uptime_latch_re = 0U;
    vlSelfRef.__PVT__build_soc_uptime_latch_storage = 0U;
    vlSelfRef.__PVT__builder_count = 0xf4240U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_pending_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_pending_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_status_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank0_ev_status_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__4(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim_sim___eval_static__TOP__sim__3(vlSelf);
    Vsim___024root____Vm_traceActivitySetAll((&vlSymsp->TOP));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_bus_errors_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_bus_errors_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_reset0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_reset0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_scratch0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank2_scratch0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_en0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_en0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_pending_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_pending_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_status_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_ev_status_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_load0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_load0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_reload0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_reload0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_update_value0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_update_value0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_value_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank4_value_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_pending_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_pending_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_status_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_ev_status_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxempty_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxempty_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxfull_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_rxfull_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txempty_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txempty_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txfull_re = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank5_txfull_we = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_sel_r = 0U;
    vlSelfRef.__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    vlSelfRef.__PVT__builder_error = 0U;
    vlSelfRef.__PVT__builder_fullmemorywe_next_state = 0U;
    vlSelfRef.__PVT__builder_fullmemorywe_state = 0U;
    vlSelfRef.__PVT__builder_grant = 0U;
    vlSelfRef.__PVT__builder_interface0_ack = 0U;
    vlSelfRef.__PVT__builder_interface0_dat_r = 0U;
    vlSelfRef.__PVT__builder_interface1_adr = 0U;
    vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
    vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 0U;
    vlSelfRef.__PVT__builder_interface1_dat_w = 0U;
    vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 = 0U;
    vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 0U;
    vlSelfRef.__PVT__builder_interface1_re = 0U;
    vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
    vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 0U;
    vlSelfRef.__PVT__builder_interface1_we = 0U;
    vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_multiplexer_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_multiplexer_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid0 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid1 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid10 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid11 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid12 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid13 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid14 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid2 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid3 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid4 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid5 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid6 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid7 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid8 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid9 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready0 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready2 = 0U;
    vlSelfRef.__PVT__builder_litedramcore_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_refresher_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_refresher_state = 0U;
    vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant = 0U;
    vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant = 0U;
    vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant = 0U;
    vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant = 0U;
    vlSelfRef.__PVT__builder_litedramcore_state = 0U;
    vlSelfRef.__PVT__builder_litedramwishbone2native0_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramwishbone2native0_state = 0U;
    vlSelfRef.__PVT__builder_litedramwishbone2native1_next_state = 0U;
    vlSelfRef.__PVT__builder_litedramwishbone2native1_state = 0U;
    vlSelfRef.__PVT__builder_rhs_self0 = 0U;
    vlSelfRef.__PVT__builder_rhs_self1 = 0U;
    vlSelfRef.__PVT__builder_rhs_self10 = 0U;
    vlSelfRef.__PVT__builder_rhs_self11 = 0U;
    vlSelfRef.__PVT__builder_rhs_self12 = 0U;
    vlSelfRef.__PVT__builder_rhs_self13 = 0U;
    vlSelfRef.__PVT__builder_rhs_self14 = 0U;
    vlSelfRef.__PVT__builder_rhs_self15 = 0U;
    vlSelfRef.__PVT__builder_rhs_self16 = 0U;
    vlSelfRef.__PVT__builder_rhs_self17 = 0U;
    vlSelfRef.__PVT__builder_rhs_self18 = 0U;
    vlSelfRef.__PVT__builder_rhs_self19 = 0U;
    vlSelfRef.__PVT__builder_rhs_self2 = 0U;
    vlSelfRef.__PVT__builder_rhs_self20 = 0U;
    vlSelfRef.__PVT__builder_rhs_self21 = 0U;
    vlSelfRef.__PVT__builder_rhs_self22 = 0U;
    vlSelfRef.__PVT__builder_rhs_self23 = 0U;
    vlSelfRef.__PVT__builder_rhs_self24 = 0U;
    vlSelfRef.__PVT__builder_rhs_self25 = 0U;
    vlSelfRef.__PVT__builder_rhs_self26 = 0U;
    vlSelfRef.__PVT__builder_rhs_self27 = 0U;
    vlSelfRef.__PVT__builder_rhs_self28 = 0U;
    vlSelfRef.__PVT__builder_rhs_self29 = 0U;
    vlSelfRef.__PVT__builder_rhs_self3 = 0U;
    vlSelfRef.__PVT__builder_rhs_self30 = 0U;
    vlSelfRef.__PVT__builder_rhs_self31 = 0U;
    vlSelfRef.__PVT__builder_rhs_self4 = 0U;
    vlSelfRef.__PVT__builder_rhs_self5 = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h85140e42_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h25847427_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_hd2aee074_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*3:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*3:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*3:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*2:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*2:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
    vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 1U;
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n 
        = ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage) 
                     >> 3U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_ready 
        = (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx0 
        = (0x10U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_sink_ready 
        = (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last 
        = (3U == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_sink_ready 
        = (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level));
    vlSelfRef.__PVT__build_soc_status_status = vlSelfRef.__PVT__accelerator_shell__DOT__irq_q;
    vlSelfRef.__PVT__build_soc_pending_status = vlSelfRef.__PVT__accelerator_shell__DOT__irq_q;
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_status 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending;
    vlSelfRef.__PVT__builder_rhs_self10 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                              ? 2U : 3U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_max_time0 
        = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time0));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_max_time1 
        = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_time1));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[0U] 
        = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[1U] 
        = (IData)((((QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                      << 0x18U) | (
                                                   vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                   >> 8U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                  << 0x1cU) 
                                                 | (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                                                    >> 4U))))));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[2U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                       << 0x18U) | 
                                      (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                       >> 8U)))) << 0x20U) 
                    | (QData)((IData)(((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                        << 0x1cU) | 
                                       (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                                        >> 4U))))) 
                   >> 0x20U));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[3U] 
        = ((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
            << 0x14U) | (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                         >> 0xcU));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we 
        = (((0xf000U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U]) 
            | (0xf00U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U])) 
           | ((0xf0U & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
              | (0xfU & vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U])));
    vlSelfRef.__Vcellinp__litex_wishbone_csr_bridge__rst_ni 
        = (1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_status_status 
        = (0U == vlSelfRef.__PVT__build_soc_coursesimsoc_timer_value);
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_wait 
        = (0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_postponer_req_i 
        = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read3;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] = 0U;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_clear 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_re) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_r));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read3));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_status_status 
        = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable) 
            << 1U) | (0x10U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)));
    vlSelfRef.__PVT__build_soc_mem_req_ready = ((~ (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)));
    if (vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q) {
        vlSelfRef.__PVT__build_soc_mem_rsp_data[0U] = 0U;
        vlSelfRef.__PVT__build_soc_mem_rsp_data[1U] = 0U;
        vlSelfRef.__PVT__build_soc_mem_rsp_data[2U] = 0U;
        vlSelfRef.__PVT__build_soc_mem_rsp_data[3U] = 0U;
    } else {
        vlSelfRef.__PVT__build_soc_mem_rsp_data[0U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U];
        vlSelfRef.__PVT__build_soc_mem_rsp_data[1U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U];
        vlSelfRef.__PVT__build_soc_mem_rsp_data[2U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U];
        vlSelfRef.__PVT__build_soc_mem_rsp_data[3U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U];
    }
    vlSelfRef.__PVT__build_soc_csr_req_ready = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q)) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_status 
        = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_pending) 
            << 1U) | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_pending));
    vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_clear 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_r) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_pending_re));
    vlSelfRef.__PVT__build_soc_clear = ((IData)(vlSelfRef.__PVT__build_soc_pending_r) 
                                        & (IData)(vlSelfRef.__PVT__build_soc_pending_re));
    vlSelfRef.__PVT__accelerator_shell__DOT__busy = 
        ((IData)(vlSelfRef.__PVT__accelerator_shell__DOT__inflight_q) 
         | (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__pending_q));
    __Vtableidx56 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en0 
        = Vsim__ConstPool__TABLE_h85140e42_0[__Vtableidx56];
    __Vtableidx58 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_en1 
        = Vsim__ConstPool__TABLE_h25847427_0[__Vtableidx58];
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke 
        = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 1U));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt 
        = (1U & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 2U));
    vlSelfRef.__PVT__build_soc_mem_req_addr = (vlSelfRef.__PVT__litex_descriptor_engine__DOT__address_q 
                                               + ((IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__beat_q) 
                                                  << 4U));
    vlSelfRef.__PVT__builder_rhs_self16 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                              ? 2U : 3U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)) 
              | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_interrupt 
        = ((((IData)(vlSelfRef.__PVT__accelerator_shell__DOT__irq_q) 
             & (IData)(vlSelfRef.__PVT__build_soc_enable_storage)) 
            << 2U) | ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_enable_storage) 
                        & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_timer_zero_pending)) 
                       << 1U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_pending) 
                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_storage)) 
                                 | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_pending) 
                                    & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_enable_storage) 
                                       >> 1U)))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_soc_rst 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_reset_re) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_reset_storage));
    __Vtableidx14 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx14];
    __Vtableidx25 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx25];
    __Vtableidx35 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx35];
    __Vtableidx44 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx44];
    vlSelfRef.__VdfgExtracted_h25346117__0 = (IData)(
                                                     (0U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h24fc13b9__0 = (IData)(
                                                     (1U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h2533be31__0 = (IData)(
                                                     (2U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef687232__0 = (IData)(
                                                     (0x200U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_he461509c__0 = (IData)(
                                                     (0x201U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef761210__0 = (IData)(
                                                     (0x202U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_he461317e__0 = (IData)(
                                                     (0x203U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_he460bdc9__0 = (IData)(
                                                     (0x204U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef6d69c2__0 = (IData)(
                                                     (0x205U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__1(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgExtracted_hef75d414__0 = (IData)(
                                                     (0x206U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hef6b8ce0__0 = (IData)(
                                                     (0x207U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h3fb6d6f0__0 = (IData)(
                                                     (0x400U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h3fa7b93a__0 = (IData)(
                                                     (0x401U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_h3fb673d2__0 = (IData)(
                                                     (0x402U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a80050__0 = (IData)(
                                                     (0x800U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5cbde46__0 = (IData)(
                                                     (0x801U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5cbbe0c__0 = (IData)(
                                                     (0x803U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5cf6e57__0 = (IData)(
                                                     (0x804U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a8f9c0__0 = (IData)(
                                                     (0x805U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a8e03e__0 = (IData)(
                                                     (0x806U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4a906da__0 = (IData)(
                                                     (0x807U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4aa8d69__0 = (IData)(
                                                     (0x808U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd5d3f333__0 = (IData)(
                                                     (0x809U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__VdfgExtracted_hd4aad40b__0 = (IData)(
                                                     (0x80aU 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_clear 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_re) 
           & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_pending_r) 
              >> 1U));
    vlSelfRef.__PVT__builder_rhs_self1 = ((IData)(vlSelfRef.__PVT__builder_grant)
                                           ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data
                                           : 0U);
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
        = ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))
            ? vlSelfRef.__PVT__storage_7[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume]
            : 0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_he06485ad_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vsim__ConstPool__TABLE_hb3efc88a_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h0d0ea857_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h940dac24_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h1f6686ad_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__2(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*5:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*5:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*3:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*2:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*3:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*3:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*2:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*3:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*2:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*2:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*2:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    __Vtableidx13 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx13];
    __Vtableidx24 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx24];
    __Vtableidx34 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx34];
    __Vtableidx43 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt 
        = Vsim__ConstPool__TABLE_he06485ad_0[__Vtableidx43];
    vlSelfRef.__PVT__builder_csr_bankarray_sram_bus_dat_r 
        = ((IData)(vlSelfRef.__PVT__builder_csr_bankarray_sel_r)
            ? ((0x10U >= (IData)(vlSelfRef.__PVT__mem_adr0))
                ? vlSelfRef.__PVT__mem[vlSelfRef.__PVT__mem_adr0]
                : 0U) : 0U);
    vlSelfRef.__VdfgExtracted_h7410dd27__0 = ((0x3ffe00U 
                                               & (vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                  >> 6U)) 
                                              | (0x1ffU 
                                                 & (vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                    >> 4U)));
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                     << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx4];
    __Vtableidx15 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx15];
    __Vtableidx38 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx38];
    __Vtableidx47 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hd2aee074_0[__Vtableidx47];
    if ((2U >= (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))) {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[0U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][0U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[1U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][1U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[2U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][2U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[3U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][3U];
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U] 
            = vlSelfRef.__PVT__storage_6[vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][4U];
    } else {
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[0U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[1U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[2U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[3U] = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_rdport_dat_r[4U] = 0U;
    }
    vlSelfRef.__PVT__builder_interface0_ack = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_interface0_ack = 1U;
        }
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_tag_do_dirty 
        = (1U & (vlSelfRef.__PVT__tag_mem[vlSelfRef.__PVT__tag_mem_adr0] 
                 >> 0x15U));
    vlSelfRef.__PVT__builder_error = (0U == vlSelfRef.__PVT__builder_count);
    __Vtableidx55 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0 
        = Vsim__ConstPool__TABLE_hb3efc88a_0[__Vtableidx55];
    __Vtableidx60 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_ready 
        = Vsim__ConstPool__TABLE_h0d0ea857_0[__Vtableidx60];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid)) 
                 | (IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1)));
    __Vtableidx3 = vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx3];
    __Vtableidx27 = vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx27];
    __Vtableidx37 = vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx37];
    __Vtableidx46 = vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close 
        = Vsim__ConstPool__TABLE_h940dac24_0[__Vtableidx46];
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_is_ongoing 
        = (1U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state));
    vlSelfRef.__PVT__build_soc_cmd_valid = ((1U == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                            | ((3U 
                                                == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                               | (5U 
                                                  == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_is_ongoing 
        = (1U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state));
    vlSelfRef.__VdfgRegularize_h787163e4_0_8 = (((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready2) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready0)));
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_storage;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_storage;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we = 0U;
    vlSelfRef.__VdfgRegularize_h787163e4_0_45 = (((
                                                   vlSelfRef.__PVT__data_mem_grain3
                                                   [vlSelfRef.__PVT__data_mem_grain3_adr0] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.__PVT__data_mem_grain2
                                                     [vlSelfRef.__PVT__data_mem_grain2_adr0] 
                                                     << 0x10U)) 
                                                 | ((vlSelfRef.__PVT__data_mem_grain1
                                                     [vlSelfRef.__PVT__data_mem_grain1_adr0] 
                                                     << 8U) 
                                                    | vlSelfRef.__PVT__data_mem_grain0
                                                    [vlSelfRef.__PVT__data_mem_grain0_adr0]));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 0U;
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
    vlSelfRef.__VdfgRegularize_h32427ced_0_40 = (3U 
                                                 & vlSelfRef.__PVT__tag_mem
                                                 [vlSelfRef.__PVT__tag_mem_adr0]);
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we = 1U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we = 0U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        }
    }
    vlSelfRef.__PVT__builder_rhs_self5 = ((IData)(vlSelfRef.__PVT__builder_grant) 
                                          & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
    vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid 
        = (1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid));
    vlSelfRef.__PVT__builder_rhs_self0 = (0x3fffffffU 
                                          & ((IData)(vlSelfRef.__PVT__builder_grant)
                                              ? (((5U 
                                                   == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                   ? 
                                                  ((0xffffffe0U 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                   | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                                      << 2U))
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                                 >> 2U)
                                              : ((0x3ffffff8U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                     >> 2U)) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))));
    __Vtableidx57 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads 
        = Vsim__ConstPool__TABLE_h85140e42_0[__Vtableidx57];
    __Vtableidx59 = vlSelfRef.__PVT__builder_litedramcore_multiplexer_state;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes 
        = Vsim__ConstPool__TABLE_h25847427_0[__Vtableidx59];
    __Vtableidx8 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[__Vtableidx8];
    __Vtableidx19 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[__Vtableidx19];
    __Vtableidx29 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[__Vtableidx29];
}

extern const VlUnpacked<CData/*1:0*/, 64> Vsim__ConstPool__TABLE_h5120d3ab_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__13(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgExtracted_h0545c670__0;
    __VdfgExtracted_h0545c670__0 = 0;
    CData/*0:0*/ __VdfgExtracted_h9c9f4e1d__0;
    __VdfgExtracted_h9c9f4e1d__0 = 0;
    CData/*0:0*/ __VdfgRegularize_h32427ced_0_30;
    __VdfgRegularize_h32427ced_0_30 = 0;
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
    if (vlSelfRef.__PVT__builder_grant) {
        vlSelfRef.__PVT__builder_rhs_self6 = ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                               ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                                   ? 7U
                                                   : 2U)
                                               : 0U);
        vlSelfRef.__PVT__builder_rhs_self2 = vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL;
        vlSelfRef.__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
    } else {
        vlSelfRef.__PVT__builder_rhs_self6 = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                               ? 7U
                                               : 2U);
        vlSelfRef.__PVT__builder_rhs_self2 = 0xfU;
        vlSelfRef.__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
    }
    vlSelfRef.__PVT__builder_request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                         << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSelfRef.__PVT__builder_rhs_self4 = vlSelfRef.__PVT__builder_rhs_self3;
    vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
           & (0x4000000U == (0x3ffff800U & vlSelfRef.__PVT__builder_rhs_self0)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_cyc 
        = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
           & (0x10000000U == (0x3c000000U & vlSelfRef.__PVT__builder_rhs_self0)));
    __VdfgExtracted_h9c9f4e1d__0 = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
                                    & (0x3c000000U 
                                       == (0x3fffc000U 
                                           & vlSelfRef.__PVT__builder_rhs_self0)));
    __VdfgExtracted_h0545c670__0 = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
                                    & (IData)(vlSelfRef.__PVT__builder_rhs_self5));
    vlSelfRef.__PVT__build_soc_uncached_wb_cyc = ((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
                                                  & (0x38800000U 
                                                     == 
                                                     (0x3f800000U 
                                                      & vlSelfRef.__PVT__builder_rhs_self0)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_write_from_slave) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we = 0xffffU;
    } else if (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_cyc) 
                  & (IData)(vlSelfRef.__PVT__builder_rhs_self3)) 
                 & (IData)(vlSelfRef.__PVT__builder_rhs_self5)) 
                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we 
            = (((((- (IData)((3U == (3U & vlSelfRef.__PVT__builder_rhs_self0)))) 
                  & (IData)(vlSelfRef.__PVT__builder_rhs_self2)) 
                 << 0xcU) | (((- (IData)((2U == (3U 
                                                 & vlSelfRef.__PVT__builder_rhs_self0)))) 
                              & (IData)(vlSelfRef.__PVT__builder_rhs_self2)) 
                             << 8U)) | ((((- (IData)(
                                                     (1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.__PVT__builder_rhs_self0)))) 
                                          & (IData)(vlSelfRef.__PVT__builder_rhs_self2)) 
                                         << 4U) | (
                                                   (- (IData)(
                                                              (0U 
                                                               == 
                                                               (3U 
                                                                & vlSelfRef.__PVT__builder_rhs_self0)))) 
                                                   & (IData)(vlSelfRef.__PVT__builder_rhs_self2))));
    }
    __Vtableidx65 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_cyc) 
                        & (IData)(vlSelfRef.__PVT__builder_rhs_self3)) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_tag_do_dirty) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__VdfgExtracted_h9204c5e2__0) 
                         << 2U) | (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state)));
    vlSelfRef.__PVT__builder_fullmemorywe_next_state 
        = Vsim__ConstPool__TABLE_h5120d3ab_0[__Vtableidx65];
    vlSelfRef.__PVT__builder_wishbone2csr_next_state 
        = vlSelfRef.__PVT__builder_wishbone2csr_state;
    vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 0U;
    vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 0U;
    vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 0U;
    vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
    vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
    vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        vlSelfRef.__PVT__builder_wishbone2csr_next_state = 2U;
        vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
        vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
        vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
        vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
        vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
        vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_wishbone2csr_next_state = 0U;
        } else if (__VdfgExtracted_h9c9f4e1d__0) {
            vlSelfRef.__PVT__builder_wishbone2csr_next_state = 1U;
        }
        if ((2U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            if (__VdfgExtracted_h9c9f4e1d__0) {
                vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
                vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
                vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
                vlSelfRef.__PVT__builder_interface1_adr_wishbone2csr_next_value1 
                    = (0x3fffU & vlSelfRef.__PVT__builder_rhs_self0);
                vlSelfRef.__PVT__builder_interface1_re_wishbone2csr_next_value2 
                    = ((~ (IData)(vlSelfRef.__PVT__builder_rhs_self5)) 
                       & (0U != (IData)(vlSelfRef.__PVT__builder_rhs_self2)));
                vlSelfRef.__PVT__builder_interface1_we_wishbone2csr_next_value3 
                    = ((IData)(vlSelfRef.__PVT__builder_rhs_self5) 
                       & (0U != (IData)(vlSelfRef.__PVT__builder_rhs_self2)));
            }
        }
    }
    __VdfgRegularize_h32427ced_0_30 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc) 
                                       & (IData)(__VdfgExtracted_h0545c670__0));
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_is_ongoing) 
           & (IData)(__VdfgExtracted_h0545c670__0));
    vlSelfRef.__VdfgRegularize_h787163e4_0_15 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc)) 
                                                    | (IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted)));
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
            vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid 
                = ((IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc) 
                   & (IData)(vlSelfRef.__PVT__builder_rhs_self3));
        }
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd 
        = (1U & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed) 
                 | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                     != (IData)(vlSelfRef.__PVT__builder_rhs_self5)) 
                    | ((0xfU == (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel)) 
                       | ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc)) 
                          | (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last))))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_ram_we 
        = ((0xfffffff8U & (((IData)(__VdfgRegularize_h32427ced_0_30) 
                            << 3U) & (IData)(vlSelfRef.__PVT__builder_rhs_self2))) 
           | ((0xfffffffcU & (((IData)(__VdfgRegularize_h32427ced_0_30) 
                               << 2U) & (IData)(vlSelfRef.__PVT__builder_rhs_self2))) 
              | (3U & ((- (IData)((IData)(__VdfgRegularize_h32427ced_0_30))) 
                       & (IData)(vlSelfRef.__PVT__builder_rhs_self2)))));
    vlSelfRef.__PVT__build_soc_uncached_wb_ack = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
             & (3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))) {
            vlSelfRef.__PVT__build_soc_uncached_wb_ack 
                = ((IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc) 
                   & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted)));
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid) {
            vlSelfRef.__PVT__build_soc_uncached_wb_ack 
                = ((IData)(vlSelfRef.__PVT__build_soc_uncached_wb_cyc) 
                   & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted)));
        }
    }
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_is_ongoing)
            ? (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_15)
            : ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state)) 
               & (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_15)));
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready = 0U;
    vlSelfRef.__VdfgRegularize_h787163e4_0_50 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack) 
                                                  | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack)) 
                                                 | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack) 
                                                     | (IData)(vlSelfRef.__PVT__build_soc_uncached_wb_ack)) 
                                                    | ((3U 
                                                        == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
                                                       | (IData)(vlSelfRef.__PVT__builder_interface0_ack))));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd)))) {
                vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready 
                    = vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid;
            }
        } else if ((3U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready 
                = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                   & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock)));
        }
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if ((3U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
                if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) {
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 1U;
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 1U;
                }
            }
        }
    }
}
