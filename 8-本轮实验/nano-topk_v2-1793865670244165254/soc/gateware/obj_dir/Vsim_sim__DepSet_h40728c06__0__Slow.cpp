// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__0\n"); );
    // Body
    vlSelf->__PVT__build_soc_clear = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_aborted = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_activates0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_activates1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_activates2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_activates3 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write3 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bank_write_col3 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_activate_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_activate_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_active = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_activate_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_active = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_activate_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_active = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_col = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bus_errors = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bus_errors_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_data_port_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_activate = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_dfiphasemodel_write = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_int_rst = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_ack = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_stb = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interrupt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read3 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data2[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_precharges0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_precharges1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_precharges2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_precharges3 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_ram_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_reads0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_reads1 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_reads2 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_reads3 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_reset_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_reset_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_scratch_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_scratch_storage = 0x12345678U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_re = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_storage = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_first = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_last = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_first = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_last = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__1\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_initial__TOP__sim(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_initial__TOP__sim\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[3U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata_valid = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_act_n = 1U;
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce = 1U;
    vlSelf->__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce = 1U;
    vlSelf->__PVT__build_soc_cpu_traffic_dma_increment = 0x10U;
    vlSelf->__PVT__builder_rhs_self7 = 0U;
    __Vtemp_1[0U] = 0x696e6974U;
    __Vtemp_1[1U] = 0x726f6d2eU;
    __Vtemp_1[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 11525, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->__PVT__rom), 0, ~0ULL);
    __Vtemp_2[0U] = 0x696e6974U;
    __Vtemp_2[1U] = 0x72616d2eU;
    __Vtemp_2[2U] = 0x696d5f73U;
    __Vtemp_2[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelf->__PVT__sram), 0, ~0ULL);
    __Vtemp_3[0U] = 0x696e6974U;
    __Vtemp_3[1U] = 0x6d656d2eU;
    __Vtemp_3[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 17, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelf->__PVT__mem), 0, ~0ULL);
    __Vtemp_4[0U] = 0x696e6974U;
    __Vtemp_4[1U] = 0x6d5f312eU;
    __Vtemp_4[2U] = 0x6d5f6d65U;
    __Vtemp_4[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_4)
                 ,  &(vlSelf->__PVT__mem_1), 0, ~0ULL);
    __Vtemp_5[0U] = 0x696e6974U;
    __Vtemp_5[1U] = 0x6d5f322eU;
    __Vtemp_5[2U] = 0x6d5f6d65U;
    __Vtemp_5[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_5)
                 ,  &(vlSelf->__PVT__mem_2), 0, ~0ULL);
    __Vtemp_6[0U] = 0x696e6974U;
    __Vtemp_6[1U] = 0x6d5f332eU;
    __Vtemp_6[2U] = 0x6d5f6d65U;
    __Vtemp_6[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_6)
                 ,  &(vlSelf->__PVT__mem_3), 0, ~0ULL);
    __Vtemp_7[0U] = 0x696e6974U;
    __Vtemp_7[1U] = 0x6d5f342eU;
    __Vtemp_7[2U] = 0x6d5f6d65U;
    __Vtemp_7[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_7)
                 ,  &(vlSelf->__PVT__mem_4), 0, ~0ULL);
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__1\n"); );
    // Body
    vlSelf->__VdfgExtracted_he19ff509__0 = (IData)(
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_he19f9b58__0 = (IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hec394a1d__0 = (IData)(
                                                   (0x200U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_heca0f60c__0 = (IData)(
                                                   (0x201U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_heca0e5bb__0 = (IData)(
                                                   (0x202U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hec9f996a__0 = (IData)(
                                                   (0x203U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_heca00499__0 = (IData)(
                                                   (0x204U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hec9f65d1__0 = (IData)(
                                                   (0x205U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hec9ed7c2__0 = (IData)(
                                                   (0x206U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hec9f80f3__0 = (IData)(
                                                   (0x207U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hf88e377d__0 = (IData)(
                                                   (0x400U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hf893fbb0__0 = (IData)(
                                                   (0x401U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_hf894ea1f__0 = (IData)(
                                                   (0x402U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79ee99d7__0 = (IData)(
                                                   (0x800U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d1751a__0 = (IData)(
                                                   (0x801U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d615bc__0 = (IData)(
                                                   (0x803U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d16455__0 = (IData)(
                                                   (0x804U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d0d50d__0 = (IData)(
                                                   (0x805U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d32434__0 = (IData)(
                                                   (0x806U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79cfde83__0 = (IData)(
                                                   (0x807U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d0c492__0 = (IData)(
                                                   (0x808U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d0810f__0 = (IData)(
                                                   (0x809U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79cfce9e__0 = (IData)(
                                                   (0x80aU 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d0a369__0 = (IData)(
                                                   (0x80bU 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h79d0f300__0 = (IData)(
                                                   (0x80cU 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c6c8806__0 = (IData)(
                                                   (0xa00U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c919d77__0 = (IData)(
                                                   (0xa01U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c91cea8__0 = (IData)(
                                                   (0xa02U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c9248c9__0 = (IData)(
                                                   (0xa03U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c91ed7a__0 = (IData)(
                                                   (0xa04U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c967e42__0 = (IData)(
                                                   (0xa05U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c972eb1__0 = (IData)(
                                                   (0xa06U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c922350__0 = (IData)(
                                                   (0xa07U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    vlSelf->__VdfgExtracted_h1c974e3f__0 = (IData)(
                                                   (0xa08U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__4(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__4\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_we = 0U;
    if (vlSelf->__VdfgExtracted_he19d56dc__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_status_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_we = 0U;
    if (vlSelf->__VdfgExtracted_he19ff509__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_pending_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re = 0U;
    if (vlSelf->__VdfgExtracted_he19f9b58__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_ev_enable0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = 0U;
    if (vlSelf->__VdfgExtracted_hec394a1d__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_re = 0U;
    if (vlSelf->__VdfgExtracted_heca0f60c__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we = 0U;
    if (vlSelf->__VdfgExtracted_heca0e5bb__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes1_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we = 0U;
    if (vlSelf->__VdfgExtracted_hec9f996a__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_ibus_bytes0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re = 0U;
    if (vlSelf->__VdfgExtracted_heca00499__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes1_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re = 0U;
    if (vlSelf->__VdfgExtracted_hec9f65d1__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dbus_bytes0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we = 0U;
    if (vlSelf->__VdfgExtracted_hec9ed7c2__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes1_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we = 0U;
    if (vlSelf->__VdfgExtracted_hec9f80f3__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_dma_bytes0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_re = 0U;
    if (vlSelf->__VdfgExtracted_hf88e377d__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_reset0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_we = 0U;
    if (vlSelf->__VdfgExtracted_hf893fbb0__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_scratch0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_re = 0U;
    if (vlSelf->__VdfgExtracted_hf894ea1f__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_bus_errors_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we = 0U;
    if (vlSelf->__VdfgExtracted_h79ee99d7__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_control0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d1751a__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_command0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d615bc__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_address0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we = 0U;
    if (vlSelf->__VdfgExtracted_h79d16455__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_baddress0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d0d50d__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata3_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we = 0U;
    if (vlSelf->__VdfgExtracted_h79d32434__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata2_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we = 0U;
    if (vlSelf->__VdfgExtracted_h79cfde83__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata1_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d0c492__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_wrdata0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we = 0U;
    if (vlSelf->__VdfgExtracted_h79d0810f__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata3_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we = 0U;
    if (vlSelf->__VdfgExtracted_h79cfce9e__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata2_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d0a369__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata1_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d0f300__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_dfii_pi0_rddata0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c6c8806__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_load0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c919d77__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_reload0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_re = 0U;
    if (vlSelf->__VdfgExtracted_h1c91cea8__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_en0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c9248c9__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_update_value0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_re = 0U;
    if (vlSelf->__VdfgExtracted_h1c91ed7a__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c967e42__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__5(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__5\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_re = 0U;
    if (vlSelf->__VdfgExtracted_h1c967e42__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c972eb1__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_pending_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c922350__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_enable0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re = 0U;
    if (vlSelf->__VdfgExtracted_h1c974e3f__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_latch0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c96d12e__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles1_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we = 0U;
    if (vlSelf->__VdfgExtracted_h1c92721d__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_uptime_cycles0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_re = 0U;
    if (vlSelf->__VdfgExtracted_hafe004f8__0) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rxtx_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_we = 0U;
    if (vlSelf->__VdfgExtracted_hafe563fb__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_txfull_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_we = 0U;
    if (vlSelf->__VdfgExtracted_hafe5590a__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxempty_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_re = 0U;
    if (vlSelf->__VdfgExtracted_hafe4bde5__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_status_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_re = 0U;
    if (vlSelf->__VdfgExtracted_hafe4b36c__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_pending_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we = 0U;
    if (vlSelf->__VdfgExtracted_hafea0884__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_re 
            = vlSelf->__PVT__builder_interface1_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_ev_enable0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_re = 0U;
    if (vlSelf->__VdfgExtracted_hafe986fd__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_txempty_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_re = 0U;
    if (vlSelf->__VdfgExtracted_hafe4eda2__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank5_rxfull_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
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
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)) 
              | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear)));
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[3U] = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
            if (vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid4) {
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[0U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[1U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[2U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                vlSelf->__PVT__build_soc_coursesimsoc_interface_dat_r[3U] 
                    = vlSelf->__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
            }
        }
    }
    vlSelf->__PVT__builder_interface0_dat_r = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 
                = vlSelf->__PVT__builder_rhs_self1;
        }
        if ((2U == (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_interface0_dat_r 
                = (vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                   | (vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                      | (vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                         | (vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                            | (vlSelf->__PVT__builder_csr_bankarray_interface4_bank_bus_dat_r 
                               | (vlSelf->__PVT__builder_csr_bankarray_interface5_bank_bus_dat_r 
                                  | vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r))))));
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data 
        = ((0U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
            ? vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U]
            : ((1U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
                ? vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U]
                : ((2U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
                    ? vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U]
                    : vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U])));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask 
        = ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))
            ? (0xffffU & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we)))
            : 0U);
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge = 0U;
    if (((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
                         >> 0xaU)) != (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge 
                = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close)));
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge = 0U;
    if (((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_rdport_dat_r 
                         >> 0xaU)) != (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge 
                = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close)));
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge = 0U;
    if (((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
                         >> 0xaU)) != (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge 
                = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close)));
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge = 0U;
    if (((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
         & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
                         >> 0xaU)) != (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                                                  >> 9U)))) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge 
                = (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close)));
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all)) 
                 | (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready)));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_refresher_state))) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 1U;
        }
    }
    vlSelf->__PVT__builder_self0 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                     ? 0U : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelf->__PVT__builder_rhs_self16)
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                  ? (IData)(vlSelf->__PVT__builder_rhs_self16)
                                                  : (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba))));
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_dat_r 
        = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r))
            ? vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[0U]
            : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r))
                ? vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[1U]
                : ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r))
                    ? vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[2U]
                    : vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[3U])));
}

extern const VlUnpacked<CData/*1:0*/, 32> Vsim__ConstPool__TABLE_hae650ddc_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__6(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__6\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] = 0U;
    }
    vlSelf->__PVT__builder_rhs_self21 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))
                                          ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_we)
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))
                                              ? (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                              : (3U 
                                                 == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelf->__PVT__builder_rhs_self24 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))
                                          ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_we)
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))
                                              ? (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                              : (3U 
                                                 == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelf->__PVT__builder_rhs_self27 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))
                                          ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_we)
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))
                                              ? (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                              : (3U 
                                                 == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelf->__PVT__builder_rhs_self30 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))
                                          ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_we)
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))
                                              ? (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                              : (3U 
                                                 == (IData)(vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid 
        = (0U != ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid 
        = (0U != ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk)));
    vlSelf->__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value 
        = (1U & ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))
                  ? ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc)) 
                     | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_aborted))
                  : ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state)) 
                     && (1U & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc)) 
                               | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_aborted))))));
    vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_stb) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_we));
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_is_ongoing)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
            vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid 
                = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_stb));
        }
    }
    vlSelf->__VdfgExtracted_h15f8c1a4__0 = ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we) 
                                            & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelf->__VdfgExtracted_h8adf8caf__0 = ((~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we)) 
                                            & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelf->__VdfgTmp_he4afca32__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelf->__VdfgTmp_he557e9b8__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelf->__VdfgTmp_he4a3dacf__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelf->__VdfgTmp_h7bc186f3__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelf->__VdfgTmp_h7b69a6f5__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelf->__VdfgTmp_h783d9b3e__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelf->__VdfgTmp_h79c562c2__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelf->__VdfgTmp_h792c8008__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelf->__VdfgTmp_h79d17063__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelf->__VdfgTmp_h612a0bff__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                      & (2U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelf->__VdfgTmp_h61a22bf5__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                      & (0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelf->__VdfgTmp_h613e3806__0 = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                      & (1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelf->__VdfgExtracted_h34e003a0__0 = ((0x3ffe00U 
                                             & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                                << 7U)) 
                                            | (0x1ffU 
                                               & (vlSelf->__PVT__builder_rhs_self0 
                                                  >> 2U)));
    vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_payload_addr 
        = ((0xfffe00U & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                         << 9U)) | (0x1ffU & (vlSelf->__PVT__builder_rhs_self0 
                                              >> 2U)));
    vlSelf->__VdfgExtracted_h9f6f40cd__0 = ((0x1fffffU 
                                             & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r) 
                                            == (0x7ffffU 
                                                & (vlSelf->__PVT__builder_rhs_self0 
                                                   >> 0xbU)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed 
        = ((0xffffffU & (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                         >> 2U)) != (0xffffffU & ((vlSelf->__PVT__builder_rhs_self0 
                                                   - (IData)(0x800000U)) 
                                                  >> 2U)));
    vlSelf->__PVT__builder_slave_sel = ((((0xf000U 
                                           == (0xffffU 
                                               & (vlSelf->__PVT__builder_rhs_self0 
                                                  >> 0xeU))) 
                                          << 5U) | 
                                         ((0xe0000U 
                                           == (0xfffffU 
                                               & (vlSelf->__PVT__builder_rhs_self0 
                                                  >> 0xaU))) 
                                          << 4U)) | 
                                        ((((0x71U == 
                                            (0x7fU 
                                             & (vlSelf->__PVT__builder_rhs_self0 
                                                >> 0x17U))) 
                                           << 3U) | 
                                          ((4U == (0xfU 
                                                   & (vlSelf->__PVT__builder_rhs_self0 
                                                      >> 0x1aU))) 
                                           << 2U)) 
                                         | (((0x8000U 
                                              == (0x7ffffU 
                                                  & (vlSelf->__PVT__builder_rhs_self0 
                                                     >> 0xbU))) 
                                             << 1U) 
                                            | (0U == 
                                               (0x7fffU 
                                                & (vlSelf->__PVT__builder_rhs_self0 
                                                   >> 0xfU))))));
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras;
    } else {
        vlSelf->__PVT__builder_rhs_self13 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self1 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras;
    }
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras;
    } else {
        vlSelf->__PVT__builder_rhs_self19 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd;
        vlSelf->__PVT__builder_t_self4 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d1452b__0) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_req_o) 
                     << 4U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done0) 
                                << 3U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready) 
                                           << 2U) | (IData)(vlSelf->__PVT__builder_litedramcore_refresher_state))));
    vlSelf->__PVT__builder_litedramcore_refresher_next_state 
        = Vsim__ConstPool__TABLE_hae650ddc_0[__Vtableidx1];
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_last = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramcore_refresher_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_refresher_state))) {
            if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done0) {
                vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_last = 1U;
            }
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_refresher_state))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 1U;
    } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramcore_refresher_state))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 1U;
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_done0) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__7(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__7\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel)
                       ? (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel)
                       ? (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel)
                       ? (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel)
                       ? (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start1 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count) 
           | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0));
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U];
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U];
    }
    vlSelf->__PVT__build_soc_coursesimsoc_interface_ack = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_wdata_valid) 
             & (IData)(vlSelf->__PVT__builder_litedramcore_new_master_wdata_ready0))) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_ack 
                = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_aborted)));
        }
    } else if ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native0_state))) {
        if (vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid4) {
            vlSelf->__PVT__build_soc_coursesimsoc_interface_ack 
                = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_aborted)));
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid = 0U;
    if (vlSelf->__VdfgExtracted_h15f8c1a4__0) {
        if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid) {
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we 
                = (0xfU & (IData)((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                   >> 0x20U)));
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data 
                = (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r);
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready 
                = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready;
        }
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid 
            = ((1U & (~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid))) 
               || (0U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)));
    }
    vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_payload_data = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready = 0U;
    vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid = 0U;
    if (vlSelf->__VdfgExtracted_h8adf8caf__0) {
        if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid) {
            vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_payload_data 
                = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data;
            vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid 
                = (0U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level));
        }
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready = 1U;
    }
    vlSelf->__VdfgTmp_ha6fffd31__0 = (IData)(((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h7bc186f3__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4afca32__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h79c562c2__0))))));
    vlSelf->__VdfgTmp_hca1fd5df__0 = ((~ ((IData)(vlSelf->__VdfgTmp_h7b69a6f5__0) 
                                          | ((IData)(vlSelf->__VdfgTmp_he557e9b8__0) 
                                             | (IData)(vlSelf->__VdfgTmp_h792c8008__0)))) 
                                      & (3U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
    vlSelf->__VdfgTmp_hee7cfa21__0 = (IData)(((0x600U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h783d9b3e__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4a3dacf__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h79d17063__0))))));
    vlSelf->__VdfgTmp_h32050d13__0 = (IData)(((0x4000U 
                                               == (0x6000U 
                                                   & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h7bc186f3__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4afca32__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h612a0bff__0))))));
    vlSelf->__VdfgTmp_h180b642d__0 = ((IData)(vlSelf->__VdfgTmp_h79c562c2__0) 
                                      | (IData)(vlSelf->__VdfgTmp_h612a0bff__0));
    vlSelf->__VdfgTmp_h2ddda157__0 = ((~ ((IData)(vlSelf->__VdfgTmp_h7b69a6f5__0) 
                                          | ((IData)(vlSelf->__VdfgTmp_he557e9b8__0) 
                                             | (IData)(vlSelf->__VdfgTmp_h61a22bf5__0)))) 
                                      & (2U == (3U 
                                                & vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r)));
    vlSelf->__VdfgTmp_hd2f370df__0 = ((IData)(vlSelf->__VdfgTmp_h792c8008__0) 
                                      | (IData)(vlSelf->__VdfgTmp_h61a22bf5__0));
    vlSelf->__VdfgTmp_hd46bfa9e__0 = (IData)(((0x400U 
                                               == (0x600U 
                                                   & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_h783d9b3e__0) 
                                                  | ((IData)(vlSelf->__VdfgTmp_he4a3dacf__0) 
                                                     | (IData)(vlSelf->__VdfgTmp_h613e3806__0))))));
    vlSelf->__VdfgTmp_h1f2ade1a__0 = ((IData)(vlSelf->__VdfgTmp_h79d17063__0) 
                                      | (IData)(vlSelf->__VdfgTmp_h613e3806__0));
    if ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin0_grant))) {
        vlSelf->__PVT__builder_rhs_self20 = vlSelf->__VdfgExtracted_h34e003a0__0;
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
    vlSelf->__PVT__builder_rhs_self23 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))
                                          ? vlSelf->__VdfgExtracted_h34e003a0__0
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))
                                              ? ((0x3ffe00U 
                                                  & (vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                     >> 2U)) 
                                                 | (0x1ffU 
                                                    & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr))
                                              : vlSelf->__VdfgExtracted_h2195c0f1__0));
    vlSelf->__PVT__builder_rhs_self26 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))
                                          ? vlSelf->__VdfgExtracted_h34e003a0__0
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin2_grant))
                                              ? ((0x3ffe00U 
                                                  & (vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                     >> 2U)) 
                                                 | (0x1ffU 
                                                    & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr))
                                              : vlSelf->__VdfgExtracted_h2195c0f1__0));
    vlSelf->__PVT__builder_rhs_self29 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))
                                          ? vlSelf->__VdfgExtracted_h34e003a0__0
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin3_grant))
                                              ? ((0x3ffe00U 
                                                  & (vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                     >> 2U)) 
                                                 | (0x1ffU 
                                                    & vlSelf->__PVT__build_soc_uncached_port_port_cmd_payload_addr))
                                              : vlSelf->__VdfgExtracted_h2195c0f1__0));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h5577355c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h932ddeb8_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__8(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__8\n"); );
    // Init
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*7:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*7:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelf->__PVT__builder_rhs_self25 = ((0U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))
                                          ? ((IData)(
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
                                             & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))
                                          : ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_roundrobin1_grant))
                                              ? ((IData)(
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
                                                 & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid))
                                              : ((IData)(
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
                                                 & (IData)(vlSelf->__PVT__build_soc_cmd_valid))));
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
    vlSelf->__PVT__build_soc_coursesimsoc_tag_di_dirty = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
        if (vlSelf->__VdfgExtracted_h9f6f40cd__0) {
            if (vlSelf->__PVT__builder_rhs_self5) {
                vlSelf->__PVT__build_soc_coursesimsoc_tag_di_dirty = 1U;
            }
            vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_ack = 1U;
        }
    }
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_en;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_rddata_en;
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_en 
            = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re) 
               & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                  >> 4U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_rddata_en 
            = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re) 
               & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                  >> 5U));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n 
        = ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re))) 
           || (1U & (~ ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                        >> 1U))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n 
        = ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re))) 
           || (1U & (~ ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                        >> 2U))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n 
        = ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re))) 
           || ((1U & (~ ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                         >> 6U))) && ((1U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                                             >> 7U)) 
                                      || (1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n 
        = ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re))) 
           || (1U & (~ ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage) 
                        >> 3U))));
    __Vtableidx9 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                     << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                           << 5U) | 
                                          (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                            << 4U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                               << 3U) 
                                              | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5577355c_0[__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                 << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_h932ddeb8_0[__Vtableidx10];
    __Vtableidx20 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                 << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5577355c_0[__Vtableidx20];
    __Vtableidx21 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                 << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_h932ddeb8_0[__Vtableidx21];
    __Vtableidx30 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                 << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5577355c_0[__Vtableidx30];
    vlSelf->__Vtableidx31 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                              << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))))));
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h3f81c38b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hf6e9bf49_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h776dd74f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h57dc1e83_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h7c9cd53b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_he4e36a3c_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__9(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__9\n"); );
    // Init
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    SData/*9:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    SData/*9:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    SData/*9:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    SData/*9:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*6:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    SData/*9:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*6:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    SData/*9:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    CData/*7:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    CData/*5:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    CData/*4:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*2:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_h932ddeb8_0[vlSelf->__Vtableidx31];
    __Vtableidx52 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                      << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                 << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read 
        = Vsim__ConstPool__TABLE_h5577355c_0[__Vtableidx52];
    vlSelf->__Vtableidx53 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                              << 7U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write 
        = Vsim__ConstPool__TABLE_h932ddeb8_0[vlSelf->__Vtableidx53];
    __Vtableidx2 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 7U) | 
                                          (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid 
        = Vsim__ConstPool__TABLE_h3f81c38b_0[__Vtableidx2];
    __Vtableidx26 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 7U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                               << 6U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid 
        = Vsim__ConstPool__TABLE_h3f81c38b_0[__Vtableidx26];
    __Vtableidx36 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 7U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                               << 6U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid 
        = Vsim__ConstPool__TABLE_h3f81c38b_0[__Vtableidx36];
    __Vtableidx45 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 7U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                               << 6U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid 
        = Vsim__ConstPool__TABLE_h3f81c38b_0[__Vtableidx45];
    __Vtableidx5 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                     << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                            << 3U) 
                                           | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_hf6e9bf49_0[__Vtableidx5];
    __Vtableidx16 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                      << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                 << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                            << 4U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                               << 3U) 
                                              | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_hf6e9bf49_0[__Vtableidx16];
    __Vtableidx39 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                      << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                 << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                            << 4U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                               << 3U) 
                                              | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_hf6e9bf49_0[__Vtableidx39];
    __Vtableidx48 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                      << 6U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                 << 5U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                            << 4U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                               << 3U) 
                                              | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas 
        = Vsim__ConstPool__TABLE_hf6e9bf49_0[__Vtableidx48];
    __Vtableidx7 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                           << 7U) | 
                                          (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine0_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h776dd74f_0[__Vtableidx7];
    __Vtableidx18 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                            << 7U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                               << 6U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine1_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h776dd74f_0[__Vtableidx18];
    __Vtableidx28 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                            << 7U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                               << 6U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine2_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h776dd74f_0[__Vtableidx28];
    __Vtableidx50 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 9U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 8U) | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                            << 7U) 
                                           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                               << 6U) 
                                              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->__PVT__builder_litedramcore_bankmachine3_state))))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we 
        = Vsim__ConstPool__TABLE_h776dd74f_0[__Vtableidx50];
    vlSelf->__PVT__builder_rhs_self9 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                         ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a)
                                         : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                             ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a)
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                                 ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a)
                                                 : (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a))));
    vlSelf->__PVT__builder_rhs_self15 = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                          ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a)
                                          : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                              ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a)
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                  ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a)
                                                  : (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a))));
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    }
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] = 0U;
    if (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
    }
    __Vtableidx68 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 2U) | (IData)(vlSelf->__PVT__builder_fullmemorywe_state));
    vlSelf->__PVT__build_soc_coursesimsoc_word_inc 
        = Vsim__ConstPool__TABLE_h57dc1e83_0[__Vtableidx68];
    __Vtableidx67 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 4U) | ((8U & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                       >> 0x12U)) | 
                                (((IData)(vlSelf->__VdfgExtracted_h9f6f40cd__0) 
                                  << 2U) | (IData)(vlSelf->__PVT__builder_fullmemorywe_state))));
    vlSelf->__PVT__build_soc_coursesimsoc_word_clr 
        = Vsim__ConstPool__TABLE_h7c9cd53b_0[__Vtableidx67];
    __Vtableidx66 = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 5U) | ((0x10U & (vlSelf->__PVT__build_soc_coursesimsoc_tag_port_dat_r 
                                          >> 0x11U)) 
                                | (((IData)(vlSelf->__PVT__builder_rhs_self5) 
                                    << 3U) | (((IData)(vlSelf->__VdfgExtracted_h9f6f40cd__0) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__builder_fullmemorywe_state)))));
    vlSelf->__PVT__build_soc_coursesimsoc_tag_port_we 
        = Vsim__ConstPool__TABLE_he4e36a3c_0[__Vtableidx66];
    vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
            if ((3U == (IData)(vlSelf->__PVT__builder_fullmemorywe_state))) {
                if (vlSelf->__PVT__build_soc_coursesimsoc_interface_ack) {
                    vlSelf->__PVT__build_soc_coursesimsoc_write_from_slave = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
        = (((QData)((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we)) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)) 
           & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part 
        = ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid) 
           & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)) 
           & ((3U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux)) 
              & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished = 0U;
    if (vlSelf->__VdfgExtracted_h8adf8caf__0) {
        vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished 
            = (((0U != (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level)) 
                & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready)) 
               & ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk) 
                  >> 3U));
    }
    vlSelf->__PVT__build_soc_uncached_wb_dat_r = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
        if ((2U == (IData)(vlSelf->__PVT__builder_litedramwishbone2native1_state))) {
            if (vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_valid) {
                vlSelf->__PVT__build_soc_uncached_wb_dat_r 
                    = vlSelf->__PVT__build_soc_uncached_port_new_port_rdata_payload_data;
            }
        }
    }
    vlSelf->__PVT__builder_litedramcore_roundrobin3_request 
        = ((((IData)(vlSelf->__VdfgTmp_ha6fffd31__0) 
             & (IData)(vlSelf->__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelf->__VdfgTmp_hee7cfa21__0) 
                        & (IData)(vlSelf->__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelf->__VdfgTmp_hca1fd5df__0) 
                                 & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelf->__VdfgTmp_h30f8d590__0 = (IData)(((0U == 
                                               (0x6000U 
                                                & vlSelf->__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                              & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_he4afca32__0) 
                                                  | (IData)(vlSelf->__VdfgTmp_h180b642d__0)))));
}
