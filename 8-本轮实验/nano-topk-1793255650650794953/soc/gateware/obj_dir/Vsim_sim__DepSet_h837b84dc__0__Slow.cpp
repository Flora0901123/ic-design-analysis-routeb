// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__4(Vsim_sim* vlSelf);

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim\n"); );
    // Body
    Vsim_sim___eval_static__TOP__sim__4(vlSelf);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 1U;
    vlSelf->__PVT__builder_rhs_self6 = 0U;
    vlSelf->__PVT__builder_rhs_self7 = 0U;
    vlSelf->__PVT__builder_rhs_self8 = 0U;
    vlSelf->__PVT__builder_rhs_self9 = 0U;
    vlSelf->__PVT__builder_self0 = 0U;
    vlSelf->__PVT__builder_self1 = 0U;
    vlSelf->__PVT__builder_self2 = 0U;
    vlSelf->__PVT__builder_self3 = 0U;
    vlSelf->__PVT__builder_self4 = 0U;
    vlSelf->__PVT__builder_self5 = 0U;
    vlSelf->__PVT__builder_self6 = 0U;
    vlSelf->__PVT__builder_shared_ack = 0U;
    vlSelf->__PVT__builder_shared_dat_r = 0U;
    vlSelf->__PVT__builder_slave_sel = 0U;
    vlSelf->__PVT__builder_slave_sel_r = 0U;
    vlSelf->__PVT__builder_t_self0 = 0U;
    vlSelf->__PVT__builder_t_self1 = 0U;
    vlSelf->__PVT__builder_t_self2 = 0U;
    vlSelf->__PVT__builder_t_self3 = 0U;
    vlSelf->__PVT__builder_t_self4 = 0U;
    vlSelf->__PVT__builder_t_self5 = 0U;
    vlSelf->__PVT__builder_wishbone2csr_next_state = 0U;
    vlSelf->__PVT__builder_wishbone2csr_state = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__0(Vsim_sim* vlSelf);
VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__1(Vsim_sim* vlSelf);

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__2(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__2\n"); );
    // Body
    Vsim_sim___eval_static__TOP__sim__0(vlSelf);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 1U;
    Vsim_sim___eval_static__TOP__sim__1(vlSelf);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_first = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_last = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_first = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_last = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_last = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_act_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cke = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_odt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_o = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1 = 0x30dU;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_soc_rst = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_tag_di_dirty = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_en_re = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__3(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__3\n"); );
    // Body
    Vsim_sim___eval_static__TOP__sim__2(vlSelf);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_en_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_enable_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_load_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_load_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_r = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_status = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_reload_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_status = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_update_value_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value_status = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_clear = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_pending = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_trigger_d = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_enable_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_r = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_status = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_pending = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_trigger_d = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxempty_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxfull_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_status = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_clear = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_pending = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_trigger_d = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_txempty_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_txfull_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_dat_r = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_word_clr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_word_inc = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_writes0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_writes1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_writes2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_writes3 = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_capture_q = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_capture_re = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_capture_storage = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_bytes_re = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_count = 0ULL;
    vlSelf->__PVT__build_soc_cpu_traffic_dbus_snapshot = 0ULL;
    vlSelf->__PVT__build_soc_cpu_traffic_dma_bytes_re = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_dma_count = 0ULL;
    vlSelf->__PVT__build_soc_cpu_traffic_dma_increment = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_dma_snapshot = 0ULL;
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_bytes_re = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_count = 0ULL;
    vlSelf->__PVT__build_soc_cpu_traffic_ibus_snapshot = 0ULL;
    vlSelf->__PVT__build_soc_cpu_traffic_reset_re = 0U;
    vlSelf->__PVT__build_soc_cpu_traffic_reset_storage = 0U;
    vlSelf->__PVT__build_soc_enable_re = 0U;
    vlSelf->__PVT__build_soc_enable_storage = 0U;
    vlSelf->__PVT__build_soc_pending_r = 0U;
    vlSelf->__PVT__build_soc_pending_re = 0U;
    vlSelf->__PVT__build_soc_pending_status = 0U;
    vlSelf->__PVT__build_soc_status_re = 0U;
    vlSelf->__PVT__build_soc_status_status = 0U;
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted = 0U;
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value = 0U;
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce = 0U;
    vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk = 1U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_lock = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_read_unlocked = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3 = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_first = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_last = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[0U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[1U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[2U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[3U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk = 1U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_valid_token_count = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[0U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[1U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[2U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[3U] = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_sel = 0U;
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_payload_data = 0U;
    vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr = 0U;
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_wb_ack = 0U;
    vlSelf->__PVT__build_soc_uncached_wb_dat_r = 0U;
    vlSelf->__PVT__build_soc_uptime_cycles = 0ULL;
    vlSelf->__PVT__build_soc_uptime_cycles_re = 0U;
    vlSelf->__PVT__build_soc_uptime_cycles_status = 0ULL;
    vlSelf->__PVT__build_soc_uptime_latch_re = 0U;
    vlSelf->__PVT__build_soc_uptime_latch_storage = 0U;
    vlSelf->__PVT__builder_count = 0xf4240U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__4(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__4\n"); );
    // Body
    Vsim_sim___eval_static__TOP__sim__3(vlSelf);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 1U;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 1U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_sel_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    vlSelf->__PVT__builder_error = 0U;
    vlSelf->__PVT__builder_fullmemorywe_next_state = 0U;
    vlSelf->__PVT__builder_fullmemorywe_state = 0U;
    vlSelf->__PVT__builder_grant = 0U;
    vlSelf->__PVT__builder_interface0_ack = 0U;
    vlSelf->__PVT__builder_interface0_dat_r = 0U;
    vlSelf->__PVT__builder_interface1_adr = 0U;
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 0U;
    vlSelf->__PVT__builder_interface1_dat_w = 0U;
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 = 0U;
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 0U;
    vlSelf->__PVT__builder_interface1_re = 0U;
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 0U;
    vlSelf->__PVT__builder_interface1_we = 0U;
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine0_state = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine1_state = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine2_state = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
    vlSelf->__PVT__builder_litedramcore_bankmachine3_state = 0U;
    vlSelf->__PVT__builder_litedramcore_multiplexer_next_state = 0U;
    vlSelf->__PVT__builder_litedramcore_multiplexer_state = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid0 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid1 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid10 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid11 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid12 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid13 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid14 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid2 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid3 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid4 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid5 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid6 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid7 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid8 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid9 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1 = 0U;
    vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2 = 0U;
    vlSelf->__PVT__builder_litedramcore_next_state = 0U;
    vlSelf->__PVT__builder_litedramcore_refresher_next_state = 0U;
    vlSelf->__PVT__builder_litedramcore_refresher_state = 0U;
    vlSelf->__PVT__builder_litedramcore_roundrobin0_grant = 0U;
    vlSelf->__PVT__builder_litedramcore_roundrobin1_grant = 0U;
    vlSelf->__PVT__builder_litedramcore_roundrobin2_grant = 0U;
    vlSelf->__PVT__builder_litedramcore_roundrobin3_grant = 0U;
    vlSelf->__PVT__builder_litedramcore_state = 0U;
    vlSelf->__PVT__builder_litedramwishbone2native0_next_state = 0U;
    vlSelf->__PVT__builder_litedramwishbone2native0_state = 0U;
    vlSelf->__PVT__builder_litedramwishbone2native1_next_state = 0U;
    vlSelf->__PVT__builder_litedramwishbone2native1_state = 0U;
    vlSelf->__PVT__builder_rhs_self0 = 0U;
    vlSelf->__PVT__builder_rhs_self1 = 0U;
    vlSelf->__PVT__builder_rhs_self10 = 0U;
    vlSelf->__PVT__builder_rhs_self11 = 0U;
    vlSelf->__PVT__builder_rhs_self12 = 0U;
    vlSelf->__PVT__builder_rhs_self13 = 0U;
    vlSelf->__PVT__builder_rhs_self14 = 0U;
    vlSelf->__PVT__builder_rhs_self15 = 0U;
    vlSelf->__PVT__builder_rhs_self16 = 0U;
    vlSelf->__PVT__builder_rhs_self17 = 0U;
    vlSelf->__PVT__builder_rhs_self18 = 0U;
    vlSelf->__PVT__builder_rhs_self19 = 0U;
    vlSelf->__PVT__builder_rhs_self2 = 0U;
    vlSelf->__PVT__builder_rhs_self20 = 0U;
    vlSelf->__PVT__builder_rhs_self21 = 0U;
    vlSelf->__PVT__builder_rhs_self22 = 0U;
    vlSelf->__PVT__builder_rhs_self23 = 0U;
    vlSelf->__PVT__builder_rhs_self24 = 0U;
    vlSelf->__PVT__builder_rhs_self25 = 0U;
    vlSelf->__PVT__builder_rhs_self26 = 0U;
    vlSelf->__PVT__builder_rhs_self27 = 0U;
    vlSelf->__PVT__builder_rhs_self28 = 0U;
    vlSelf->__PVT__builder_rhs_self29 = 0U;
    vlSelf->__PVT__builder_rhs_self3 = 0U;
    vlSelf->__PVT__builder_rhs_self30 = 0U;
    vlSelf->__PVT__builder_rhs_self31 = 0U;
    vlSelf->__PVT__builder_rhs_self4 = 0U;
    vlSelf->__PVT__builder_rhs_self5 = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h14e0e0b9_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h115ff64d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_hbf1c8db9_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__0\n"); );
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
    vlSelf->__PVT__builder_error = 0U;
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_error = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_reset_n 
        = ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (1U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage) 
                     >> 3U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_produce;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_wrport_adr 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_produce;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_produce;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[0U] 
        = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[0U];
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[1U] 
        = ((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
            << 0x1cU) | (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U] 
                         >> 4U));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[2U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
                                      << 0x14U) | (
                                                   vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                                   >> 0xcU)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                                  << 0x18U) 
                                                 | (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                    >> 8U))))));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_data[3U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U] 
                                       << 0x14U) | 
                                      (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                       >> 0xcU)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U] 
                                                     >> 8U))))) 
                   >> 0x20U));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_source_payload_we 
        = ((0xf000U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[4U]) 
           | ((0xf00U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[3U]) 
              | ((0xf0U & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[2U]) 
                 | (0xfU & vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_payload_data[1U]))));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_wrport_adr 
        = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_produce;
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 1U;
        }
    }
    vlSelf->__PVT__build_soc_status_status = vlSelf->__PVT__accelerator_shell__DOT__irq_q;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_status_status 
        = (0U == vlSelf->__PVT__build_soc_coursesimsoc_timer_value);
    vlSelf->__PVT__builder_rhs_self10 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                                    ? 2U
                                                    : 3U)));
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx0 
        = (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level));
    vlSelf->__Vcellinp__litex_wishbone_csr_bridge__rst_ni 
        = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_int_rst)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time0 
        = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time0));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_max_time1 
        = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_time1));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_wait 
        = (0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_i 
        = (0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_sink_ready 
        = (3U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_last 
        = (3U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_sink_ready 
        = (3U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level));
    vlSelf->__PVT__builder_done = (0U == vlSelf->__PVT__builder_count);
    vlSelf->__PVT__build_soc_accel_cmd_valid = vlSelf->__PVT__accelerator_shell__DOT__pending_q;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_re) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_r))) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_clear = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_re) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_r))) {
        vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_clear = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_rddata_valid 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read3;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid = 0U;
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata_valid 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read3;
    }
    vlSelf->__PVT__build_soc_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_pending_re) 
         & (IData)(vlSelf->__PVT__build_soc_pending_r))) {
        vlSelf->__PVT__build_soc_clear = 1U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_status 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable) 
            << 1U) | (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)));
    vlSelf->__PVT__build_soc_mem_req_ready = ((~ (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)));
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
    vlSelf->__PVT__build_soc_csr_req_ready = (1U & 
                                              ((~ (IData)(vlSelf->__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q)) 
                                               | (2U 
                                                  == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
    vlSelf->__PVT__accelerator_shell__DOT__busy = ((IData)(vlSelf->__PVT__accelerator_shell__DOT__inflight_q) 
                                                   | (IData)(vlSelf->__PVT__accelerator_shell__DOT__pending_q));
    __Vtableidx56 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en0 
        = Vsim__ConstPool__TABLE_h14e0e0b9_0[__Vtableidx56];
    __Vtableidx58 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_en1 
        = Vsim__ConstPool__TABLE_h115ff64d_0[__Vtableidx58];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke 
        = (1U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt 
        = (1U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 2U));
    vlSelf->__PVT__build_soc_mem_req_addr = (vlSelf->__PVT__litex_descriptor_engine__DOT__address_q 
                                             + ((IData)(vlSelf->__PVT__litex_descriptor_engine__DOT__beat_q) 
                                                << 4U));
    vlSelf->__PVT__builder_rhs_self16 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                    ? 2U
                                                    : 3U)));
    vlSelf->__PVT__build_soc_coursesimsoc_soc_rst = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_reset_re) {
        vlSelf->__PVT__build_soc_coursesimsoc_soc_rst 
            = (1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_reset_storage));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_readable)) 
              | (IData)(vlSymsp->TOP.serial_source_ready)));
    __Vtableidx14 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx14];
    __Vtableidx25 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx25];
    __Vtableidx35 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx35];
    __Vtableidx44 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx44];
    vlSelf->__PVT__build_soc_pending_status = vlSelf->__PVT__accelerator_shell__DOT__irq_q;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_pending_status 
        = vlSelf->__PVT__build_soc_coursesimsoc_timer_zero_pending;
    vlSelf->__VdfgExtracted_he19d56dc__0 = (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h7816d9de_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h7483c1fa_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_he9cb56c3_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vsim__ConstPool__TABLE_h3e1e8770_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__2(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__2\n"); );
    // Init
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
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
    CData/*2:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    vlSelf->__VdfgExtracted_h1c96d12e__0 = (IData)(
                                                   (0xa09U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c92721d__0 = (IData)(
                                                   (0xa0aU 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafe004f8__0 = (IData)(
                                                   (0xc00U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafe563fb__0 = (IData)(
                                                   (0xc01U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafe5590a__0 = (IData)(
                                                   (0xc02U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafe4bde5__0 = (IData)(
                                                   (0xc03U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafe4b36c__0 = (IData)(
                                                   (0xc04U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafea0884__0 = (IData)(
                                                   (0xc05U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafe986fd__0 = (IData)(
                                                   (0xc06U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hafe4eda2__0 = (IData)(
                                                   (0xc07U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_status 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_pending) 
            << 1U) | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_pending));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_re) 
         & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_r) 
            >> 1U))) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear = 1U;
    }
    vlSelf->__PVT__builder_rhs_self1 = ((IData)(vlSelf->__PVT__builder_grant)
                                         ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data
                                         : 0U);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] = 0U;
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U];
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
        = ((2U >= (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume))
            ? vlSelf->__PVT__storage_7[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_consume]
            : 0ULL);
    __Vtableidx13 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx13];
    __Vtableidx24 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx24];
    __Vtableidx34 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx34];
    __Vtableidx43 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_refresh_gnt 
        = Vsim__ConstPool__TABLE_h7816d9de_0[__Vtableidx43];
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->__PVT__builder_csr_bankarray_sel_r) {
        vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r 
            = ((0x10U >= (IData)(vlSelf->__PVT__mem_adr0))
                ? vlSelf->__PVT__mem[vlSelf->__PVT__mem_adr0]
                : 0U);
    }
    vlSelf->__VdfgExtracted_h2195c0f1__0 = ((0x3ffe00U 
                                             & (vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                >> 6U)) 
                                            | (0x1ffU 
                                               & (vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                  >> 4U)));
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we 
            = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we;
    }
    if ((2U >= (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume))) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][0U];
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][1U];
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][2U];
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U] 
            = vlSelf->__PVT__storage_6[vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_consume][3U];
    } else {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U] = 0U;
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U] = 0U;
    }
    vlSelf->__PVT__builder_interface0_ack = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_interface0_ack = 1U;
        }
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                     << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx4];
    __Vtableidx15 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx15];
    __Vtableidx38 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx38];
    __Vtableidx47 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                      << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel 
        = Vsim__ConstPool__TABLE_hbf1c8db9_0[__Vtableidx47];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we 
        = ((1U == (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2) 
                    << 2U) | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1) 
                               << 1U) | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))))
            ? 0xffffU : ((2U == (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2) 
                                  << 2U) | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1) 
                                             << 1U) 
                                            | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))))
                          ? (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we)
                          : ((4U == (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready2) 
                                      << 2U) | (((IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))))
                              ? (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q)
                              : 0U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
        = vlSelf->__PVT__storage_2[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
        = vlSelf->__PVT__storage_3[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
        = vlSelf->__PVT__storage_4[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_consume];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
        = vlSelf->__PVT__storage_5[vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_consume];
    __Vtableidx3 = vlSelf->__PVT__builder_litedramcore_bankmachine0_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx3];
    __Vtableidx27 = vlSelf->__PVT__builder_litedramcore_bankmachine1_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx27];
    __Vtableidx37 = vlSelf->__PVT__builder_litedramcore_bankmachine2_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx37];
    __Vtableidx46 = vlSelf->__PVT__builder_litedramcore_bankmachine3_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close 
        = Vsim__ConstPool__TABLE_h7483c1fa_0[__Vtableidx46];
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid)) 
                 | (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready1)));
    __Vtableidx60 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready 
        = Vsim__ConstPool__TABLE_he9cb56c3_0[__Vtableidx60];
    vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing = 1U;
    }
    __Vtableidx55 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0 
        = Vsim__ConstPool__TABLE_h3e1e8770_0[__Vtableidx55];
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__data_mem_grain7
                                    [vlSelf->__PVT__data_mem_grain7_adr0])) 
                    << 0x38U) | (((QData)((IData)(vlSelf->__PVT__data_mem_grain6
                                                  [vlSelf->__PVT__data_mem_grain6_adr0])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->__PVT__data_mem_grain5
                                                                [vlSelf->__PVT__data_mem_grain5_adr0])) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->__PVT__data_mem_grain4
                                                                   [vlSelf->__PVT__data_mem_grain4_adr0])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->__PVT__data_mem_grain3
                                                                      [vlSelf->__PVT__data_mem_grain3_adr0] 
                                                                      << 0x18U) 
                                                                     | ((vlSelf->__PVT__data_mem_grain2
                                                                         [vlSelf->__PVT__data_mem_grain2_adr0] 
                                                                         << 0x10U) 
                                                                        | ((vlSelf->__PVT__data_mem_grain1
                                                                            [vlSelf->__PVT__data_mem_grain1_adr0] 
                                                                            << 8U) 
                                                                           | vlSelf->__PVT__data_mem_grain0
                                                                           [vlSelf->__PVT__data_mem_grain0_adr0]))))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[1U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__data_mem_grain7
                                     [vlSelf->__PVT__data_mem_grain7_adr0])) 
                     << 0x38U) | (((QData)((IData)(
                                                   vlSelf->__PVT__data_mem_grain6
                                                   [vlSelf->__PVT__data_mem_grain6_adr0])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__data_mem_grain5
                                                                 [vlSelf->__PVT__data_mem_grain5_adr0])) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__data_mem_grain4
                                                                    [vlSelf->__PVT__data_mem_grain4_adr0])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->__PVT__data_mem_grain3
                                                                       [vlSelf->__PVT__data_mem_grain3_adr0] 
                                                                       << 0x18U) 
                                                                      | ((vlSelf->__PVT__data_mem_grain2
                                                                          [vlSelf->__PVT__data_mem_grain2_adr0] 
                                                                          << 0x10U) 
                                                                         | ((vlSelf->__PVT__data_mem_grain1
                                                                             [vlSelf->__PVT__data_mem_grain1_adr0] 
                                                                             << 8U) 
                                                                            | vlSelf->__PVT__data_mem_grain0
                                                                            [vlSelf->__PVT__data_mem_grain0_adr0]))))))))) 
                   >> 0x20U));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[2U] 
        = ((vlSelf->__PVT__data_mem_grain11[vlSelf->__PVT__data_mem_grain11_adr0] 
            << 0x18U) | ((vlSelf->__PVT__data_mem_grain10
                          [vlSelf->__PVT__data_mem_grain10_adr0] 
                          << 0x10U) | ((vlSelf->__PVT__data_mem_grain9
                                        [vlSelf->__PVT__data_mem_grain9_adr0] 
                                        << 8U) | vlSelf->__PVT__data_mem_grain8
                                       [vlSelf->__PVT__data_mem_grain8_adr0])));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[3U] 
        = ((vlSelf->__PVT__data_mem_grain15[vlSelf->__PVT__data_mem_grain15_adr0] 
            << 0x18U) | ((vlSelf->__PVT__data_mem_grain14
                          [vlSelf->__PVT__data_mem_grain14_adr0] 
                          << 0x10U) | ((vlSelf->__PVT__data_mem_grain13
                                        [vlSelf->__PVT__data_mem_grain13_adr0] 
                                        << 8U) | vlSelf->__PVT__data_mem_grain12
                                       [vlSelf->__PVT__data_mem_grain12_adr0])));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hb0aef77e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_he88ec13e_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__3(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__3\n"); );
    // Init
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*5:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*5:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*5:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*5:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*2:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing = 1U;
    }
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_cmd_valid = ((1U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                          | ((3U == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q)) 
                                             | (5U 
                                                == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_address;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_bank;
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_address 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_storage;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_bank 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_storage;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_interface_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_we = 1U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        } else if ((3U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_we = 0U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = 1U;
            vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = 1U;
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            if ((3U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel 
                    = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel;
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 1U;
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we 
                    = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we;
            }
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid = 1U;
        vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
            = (0xffffffU & (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                            >> 2U));
    }
    vlSelf->__PVT__builder_rhs_self5 = ((IData)(vlSelf->__PVT__builder_grant) 
                                        && (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
        = vlSelf->__PVT__tag_mem[vlSelf->__PVT__tag_mem_adr0];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid));
    vlSelf->__PVT__builder_rhs_self0 = (0x3fffffffU 
                                        & ((IData)(vlSelf->__PVT__builder_grant)
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
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates 
        = vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready;
    __Vtableidx57 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads 
        = Vsim__ConstPool__TABLE_h14e0e0b9_0[__Vtableidx57];
    __Vtableidx59 = vlSelf->__PVT__builder_litedramcore_multiplexer_state;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes 
        = Vsim__ConstPool__TABLE_h115ff64d_0[__Vtableidx59];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx8];
    __Vtableidx19 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx19];
    __Vtableidx29 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx29];
    __Vtableidx51 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_hb0aef77e_0[__Vtableidx51];
    vlSelf->__VdfgExtracted_h79d1452b__0 = (IData)(
                                                   (0x802U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    __Vtableidx6 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx6];
    __Vtableidx17 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx17];
    __Vtableidx40 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx40];
    __Vtableidx49 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_he88ec13e_0[__Vtableidx49];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done0 
        = ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count)) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done1));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cke 
        = ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_odt 
        = ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt));
    vlSelf->__PVT__student_mini_native_dma_bridge__DOT__invalid_request 
        = (IData)((0x40000000U != (0xf000000fU & vlSelf->__PVT__build_soc_mem_req_addr)));
    vlSelf->__Vcellinp__VexRiscv__reset = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_int_rst) 
                                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_soc_rst)) 
                                           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_reset_storage) 
                                              >> 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vsim__ConstPool__TABLE_h6d3e899e_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__15(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__15\n"); );
    // Init
    CData/*0:0*/ __VdfgExtracted_h47e9c76d__0;
    __VdfgExtracted_h47e9c76d__0 = 0;
    CData/*0:0*/ __VdfgExtracted_hf43c3f12__0;
    __VdfgExtracted_hf43c3f12__0 = 0;
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    // Body
    if (vlSelf->__PVT__builder_grant) {
        vlSelf->__PVT__builder_rhs_self6 = ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                             ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                                 ? 7U
                                                 : 2U)
                                             : 0U);
        vlSelf->__PVT__builder_rhs_self2 = vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_SEL;
        vlSelf->__PVT__builder_rhs_self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSelf->__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
    } else {
        vlSelf->__PVT__builder_rhs_self6 = ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                             ? 7U : 2U);
        vlSelf->__PVT__builder_rhs_self2 = 0xfU;
        vlSelf->__PVT__builder_rhs_self4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
        vlSelf->__PVT__builder_rhs_self3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
    }
    vlSelf->__PVT__builder_request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                       << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    __VdfgExtracted_h47e9c76d__0 = ((IData)(vlSelf->__PVT__builder_rhs_self4) 
                                    & (IData)(vlSelf->__PVT__builder_rhs_self5));
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc 
        = ((IData)(vlSelf->__PVT__builder_rhs_self3) 
           & ((IData)(vlSelf->__PVT__builder_slave_sel) 
              >> 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_cyc 
        = ((IData)(vlSelf->__PVT__builder_rhs_self3) 
           & ((IData)(vlSelf->__PVT__builder_slave_sel) 
              >> 2U));
    __VdfgExtracted_hf43c3f12__0 = (((IData)(vlSelf->__PVT__builder_rhs_self3) 
                                     & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                        >> 5U)) & (IData)(vlSelf->__PVT__builder_rhs_self4));
    vlSelf->__PVT__build_soc_uncached_wb_cyc = ((IData)(vlSelf->__PVT__builder_rhs_self3) 
                                                & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                                   >> 3U));
    vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid 
        = __VdfgExtracted_h47e9c76d__0;
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_is_ongoing)))) {
        vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid = 0U;
    }
    vlSelf->__VdfgTmp_he06a0c02__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_cyc) 
                                      & (IData)(__VdfgExtracted_h47e9c76d__0));
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_we = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave) {
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_we = 0xffffU;
    } else if (((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_cyc) 
                  & (IData)(vlSelf->__PVT__builder_rhs_self4)) 
                 & (IData)(vlSelf->__PVT__builder_rhs_self5)) 
                & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack))) {
        vlSelf->__PVT__build_soc_coursesimsoc_data_port_we 
            = ((((- (IData)((3U == (3U & vlSelf->__PVT__builder_rhs_self0)))) 
                 & (IData)(vlSelf->__PVT__builder_rhs_self2)) 
                << 0xcU) | ((((- (IData)((2U == (3U 
                                                 & vlSelf->__PVT__builder_rhs_self0)))) 
                              & (IData)(vlSelf->__PVT__builder_rhs_self2)) 
                             << 8U) | ((((- (IData)(
                                                    (1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__builder_rhs_self0)))) 
                                         & (IData)(vlSelf->__PVT__builder_rhs_self2)) 
                                        << 4U) | ((- (IData)(
                                                             (0U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->__PVT__builder_rhs_self0)))) 
                                                  & (IData)(vlSelf->__PVT__builder_rhs_self2)))));
    }
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
    vlSelf->__PVT__builder_wishbone2csr_next_state 
        = vlSelf->__PVT__builder_wishbone2csr_state;
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 0U;
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 0U;
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 0U;
    vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
    vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
    vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        vlSelf->__PVT__builder_wishbone2csr_next_state = 2U;
        vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
        vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
        vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
        vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 = 0U;
        vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 = 0U;
        vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 = 0U;
    } else {
        if ((2U == (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_wishbone2csr_next_state = 0U;
        } else if (__VdfgExtracted_hf43c3f12__0) {
            vlSelf->__PVT__builder_wishbone2csr_next_state = 1U;
        }
        if ((2U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            if (__VdfgExtracted_hf43c3f12__0) {
                vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value_ce1 = 1U;
                vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value_ce2 = 1U;
                vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value_ce3 = 1U;
                vlSelf->__PVT__builder_interface1_adr_wishbone2csr_next_value1 
                    = (0x3fffU & vlSelf->__PVT__builder_rhs_self0);
                vlSelf->__PVT__builder_interface1_re_wishbone2csr_next_value2 
                    = ((~ (IData)(vlSelf->__PVT__builder_rhs_self5)) 
                       & (0U != (IData)(vlSelf->__PVT__builder_rhs_self2)));
                vlSelf->__PVT__builder_interface1_we_wishbone2csr_next_value3 
                    = ((IData)(vlSelf->__PVT__builder_rhs_self5) 
                       & (0U != (IData)(vlSelf->__PVT__builder_rhs_self2)));
            }
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
            vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_valid 
                = ((IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc) 
                   & (IData)(vlSelf->__PVT__builder_rhs_self4));
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd 
        = (1U & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed) 
                 | (((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                     != (IData)(vlSelf->__PVT__builder_rhs_self5)) 
                    | ((0xfU == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel)) 
                       | ((~ (IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc)) 
                          | (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last))))));
    vlSelf->__PVT__build_soc_uncached_wb_ack = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value 
            = (1U & ((~ (IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc)) 
                     | (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted)));
        if (((IData)(vlSelf->__PVT__build_soc_uncached_port_new_port_wdata_valid) 
             & (3U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)))) {
            vlSelf->__PVT__build_soc_uncached_wb_ack 
                = ((IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted)));
        }
    } else {
        vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value 
            = (1U & ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state)) 
                     && (1U & ((~ (IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc)) 
                               | (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted)))));
        if ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
            if (vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid) {
                vlSelf->__PVT__build_soc_uncached_wb_ack 
                    = ((IData)(vlSelf->__PVT__build_soc_uncached_wb_cyc) 
                       & (~ (IData)(vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted)));
            }
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_ram_we = 
        ((0xfffffff8U & (((IData)(vlSelf->__VdfgTmp_he06a0c02__0) 
                          << 3U) & (IData)(vlSelf->__PVT__builder_rhs_self2))) 
         | ((0xfffffffcU & (((IData)(vlSelf->__VdfgTmp_he06a0c02__0) 
                             << 2U) & (IData)(vlSelf->__PVT__builder_rhs_self2))) 
            | (3U & ((- (IData)((IData)(vlSelf->__VdfgTmp_he06a0c02__0))) 
                     & (IData)(vlSelf->__PVT__builder_rhs_self2)))));
    vlSelf->__PVT__build_soc_uncached_port_new_port_cmd_ready = 0U;
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
    vlSelf->__PVT__builder_shared_ack = ((((((IData)(vlSelf->__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack) 
                                             | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack)) 
                                            | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack)) 
                                           | (IData)(vlSelf->__PVT__build_soc_uncached_wb_ack)) 
                                          | (3U == (IData)(vlSelf->__PVT__litex_wishbone_csr_bridge__DOT__state_q))) 
                                         | (IData)(vlSelf->__PVT__builder_interface0_ack));
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_shared_ack = 1U;
    }
}
