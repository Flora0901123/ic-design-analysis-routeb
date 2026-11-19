// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__0(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_clear = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_aborted = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_activates0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_activates1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_activates2 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_activates3 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write2 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write3 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col2 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col3 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_col = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_col = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_col = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bus_errors_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_activate = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interrupt = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_is_ongoing = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read2 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read3 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data1[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data2[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_new_banks_read_data3[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_port_wdata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges2 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_precharges3 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_ram_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_reads0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_reads1 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_reads2 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_reads3 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_reset_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_reset_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_scratch_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_scratch_storage = 0x12345678U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_address_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_re = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_baddress_storage = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_consume = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_first = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_last = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_produce = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_refresh_gnt = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_wrport_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_consume = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_first = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_last = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_produce = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_refresh_gnt = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_static__TOP__sim__1(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_static__TOP__sim__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel = 0U;
}

VL_ATTR_COLD void Vsim_sim___eval_initial__TOP__sim(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___eval_initial__TOP__sim\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vtemp_1[0U] = 0x696e6974U;
    __Vtemp_1[1U] = 0x726f6d2eU;
    __Vtemp_1[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.__PVT__rom), 0, ~0ULL);
    __Vtemp_2[0U] = 0x696e6974U;
    __Vtemp_2[1U] = 0x72616d2eU;
    __Vtemp_2[2U] = 0x696d5f73U;
    __Vtemp_2[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.__PVT__sram), 0, ~0ULL);
    __Vtemp_3[0U] = 0x696e6974U;
    __Vtemp_3[1U] = 0x6d656d2eU;
    __Vtemp_3[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 17, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelfRef.__PVT__mem), 0, ~0ULL);
    __Vtemp_4[0U] = 0x696e6974U;
    __Vtemp_4[1U] = 0x6d5f312eU;
    __Vtemp_4[2U] = 0x6d5f6d65U;
    __Vtemp_4[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_4)
                 ,  &(vlSelfRef.__PVT__mem_1), 0, ~0ULL);
    __Vtemp_5[0U] = 0x696e6974U;
    __Vtemp_5[1U] = 0x6d5f322eU;
    __Vtemp_5[2U] = 0x6d5f6d65U;
    __Vtemp_5[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_5)
                 ,  &(vlSelfRef.__PVT__mem_2), 0, ~0ULL);
    __Vtemp_6[0U] = 0x696e6974U;
    __Vtemp_6[1U] = 0x6d5f332eU;
    __Vtemp_6[2U] = 0x6d5f6d65U;
    __Vtemp_6[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_6)
                 ,  &(vlSelfRef.__PVT__mem_3), 0, ~0ULL);
    __Vtemp_7[0U] = 0x696e6974U;
    __Vtemp_7[1U] = 0x6d5f342eU;
    __Vtemp_7[2U] = 0x6d5f6d65U;
    __Vtemp_7[3U] = 0x7369U;
    VL_READMEM_N(true, 128, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_7)
                 ,  &(vlSelfRef.__PVT__mem_4), 0, ~0ULL);
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata[3U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_ext_dfi_p0_rddata_valid = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_act_n = 1U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_aborted_litedramwishbone2native0_next_value_ce = 1U;
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value_ce = 1U;
    vlSelfRef.__PVT__build_soc_cpu_traffic_dma_increment = 0x10U;
    vlSelfRef.__PVT__builder_rhs_self7 = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h1f6686ad_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h2351faa6_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__3(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    vlSelfRef.__Vtableidx51 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                                << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                           << 4U) | 
                                          (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd 
        = Vsim__ConstPool__TABLE_h1f6686ad_0[vlSelfRef.__Vtableidx51];
    vlSelfRef.__VdfgExtracted_hd4a8a02a__0 = (IData)(
                                                     (0x802U 
                                                      == (IData)(vlSelfRef.__PVT__builder_interface1_adr)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready;
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready) 
                     << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                                << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx6];
    __Vtableidx17 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx17];
    __Vtableidx40 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx40];
    __Vtableidx49 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras 
        = Vsim__ConstPool__TABLE_h2351faa6_0[__Vtableidx49];
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row) 
           == (0x1fffU & (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done0 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_done1));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_cke 
        = ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_odt 
        = ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt));
    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__invalid_request 
        = (IData)((0x40000000U != (0xf000000fU & vlSelfRef.__PVT__build_soc_mem_req_addr)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re));
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
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef687232__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_reset0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hef687232__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_he461509c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__builder_csr_bankarray_csrbank1_capture0_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_he461509c__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
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
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__4(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_clear)));
    vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[3U] = 0U;
    vlSelfRef.__PVT__builder_interface0_dat_r = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_wishbone2csr_state))) {
            vlSelfRef.__PVT__builder_interface1_dat_w_wishbone2csr_next_value0 
                = vlSelfRef.__PVT__builder_rhs_self1;
        }
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
    vlSelfRef.__PVT__builder_self0 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                ? (IData)(vlSelfRef.__PVT__builder_rhs_self16)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                    ? (IData)(vlSelfRef.__PVT__builder_rhs_self16)
                                                    : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ba))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_refresher_state))) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_ready) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 1U;
        }
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all)) 
                 | (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready)));
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
    vlSelfRef.__VdfgRegularize_h787163e4_0_12 = ((2U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))
                                                  ? (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))
                                                   ? (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q)
                                                   : 0U));
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
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid 
        = (0U != ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk_valid 
        = (0U != ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel) 
                  & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_chunk)));
    vlSelfRef.__VdfgRegularize_h787163e4_0_14 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc)) 
                                                    | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_aborted)));
    vlSelfRef.__VdfgExtracted_h4523c57b__0 = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we) 
                                              & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_source_ready 
        = ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we)) 
           & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelfRef.__PVT__build_soc_coursesimsoc_port_wdata_valid 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_is_ongoing) 
           & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
            if (vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid4) {
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[0U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[1U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[2U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[3U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
            }
        }
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid 
                = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_stb));
        }
    }
    if (vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid) {
        vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we;
        vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr 
            = (0xffffffU & (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                            >> 2U));
    } else {
        vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we = 0U;
        vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr = 0U;
    }
    vlSelfRef.__VdfgRegularize_h32427ced_0_8 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_26 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_24 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_3 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_18 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_12 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_5 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_20 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_14 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_7 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)));
}

extern const VlUnpacked<CData/*1:0*/, 32> Vsim__ConstPool__TABLE_h27b2e0d7_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__5(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h32427ced_0_22 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_16 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelfRef.__PVT__builder_slave_sel = ((((0xf000U 
                                             == (0xffffU 
                                                 & (vlSelfRef.__PVT__builder_rhs_self0 
                                                    >> 0xeU))) 
                                            << 5U) 
                                           | (((0xe0000U 
                                                == 
                                                (0xfffffU 
                                                 & (vlSelfRef.__PVT__builder_rhs_self0 
                                                    >> 0xaU))) 
                                               << 4U) 
                                              | ((0x71U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelfRef.__PVT__builder_rhs_self0 
                                                      >> 0x17U))) 
                                                 << 3U))) 
                                          | (((4U == 
                                               (0xfU 
                                                & (vlSelfRef.__PVT__builder_rhs_self0 
                                                   >> 0x1aU))) 
                                              << 2U) 
                                             | (((0x8000U 
                                                  == 
                                                  (0x7ffffU 
                                                   & (vlSelfRef.__PVT__builder_rhs_self0 
                                                      >> 0xbU))) 
                                                 << 1U) 
                                                | (0U 
                                                   == 
                                                   (0x7fffU 
                                                    & (vlSelfRef.__PVT__builder_rhs_self0 
                                                       >> 0xfU))))));
    vlSelfRef.__VdfgExtracted_h31a84d38__0 = ((0x3ffe00U 
                                               & (vlSelfRef.__PVT__tag_mem
                                                  [vlSelfRef.__PVT__tag_mem_adr0] 
                                                  << 7U)) 
                                              | (0x1ffU 
                                                 & (vlSelfRef.__PVT__builder_rhs_self0 
                                                    >> 2U)));
    vlSelfRef.__VdfgExtracted_h9204c5e2__0 = ((0x1fffffU 
                                               & vlSelfRef.__PVT__tag_mem
                                               [vlSelfRef.__PVT__tag_mem_adr0]) 
                                              == (0x7ffffU 
                                                  & (vlSelfRef.__PVT__builder_rhs_self0 
                                                     >> 0xbU)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_addr_changed 
        = ((0xffffffU & (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr 
                         >> 2U)) != (0xffffffU & ((vlSelfRef.__PVT__builder_rhs_self0 
                                                   - (IData)(0x800000U)) 
                                                  >> 2U)));
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_we 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8a02a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_command_issue_re 
        = ((IData)(vlSelfRef.__VdfgExtracted_hd4a8a02a__0) 
           & (IData)(vlSelfRef.__PVT__builder_interface1_we));
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start1 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_count) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_sequencer_start0));
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_col_n_addr_sel)
                       ? (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_col_n_addr_sel)
                       ? (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr))));
    if ((1U == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = 0xffffU;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask = 0U;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we 
            = vlSelfRef.__VdfgRegularize_h787163e4_0_12;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask 
            = (0xffffU & (~ (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_12)));
    }
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
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready = 0U;
    if (vlSelfRef.__VdfgExtracted_h4523c57b__0) {
        if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid) {
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we 
                = (0xfU & (IData)((vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                   >> 0x20U)));
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data 
                = (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r);
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready 
                = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready;
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
    vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_wdata_valid) 
             & (IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready0))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack 
                = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_aborted)));
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))) {
        if (vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid4) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack 
                = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_cyc) 
                   & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_aborted)));
        }
    }
    vlSelfRef.__PVT__builder_rhs_self21 = ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))
                                            ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we)
                                            : ((1U 
                                                == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))
                                                ? (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                                : (3U 
                                                   == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelfRef.__PVT__builder_rhs_self24 = ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))
                                            ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we)
                                            : ((1U 
                                                == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))
                                                ? (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                                : (3U 
                                                   == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelfRef.__PVT__builder_rhs_self27 = ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))
                                            ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we)
                                            : ((1U 
                                                == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))
                                                ? (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                                : (3U 
                                                   == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h5ccf91e0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_hf6780eaa_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h557079d2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h69ce9a5a_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h2f46f5f3_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__6(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__6\n"); );
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
    vlSelfRef.__PVT__builder_rhs_self30 = ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))
                                            ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we)
                                            : ((1U 
                                                == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))
                                                ? (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we)
                                                : (3U 
                                                   == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))));
    vlSelfRef.__VdfgRegularize_h787163e4_0_16 = ((0x3ffe00U 
                                                  & (vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr 
                                                     >> 2U)) 
                                                 | (0x1ffU 
                                                    & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr));
    vlSelfRef.__VdfgRegularize_h787163e4_0_30 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_3) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_5));
    vlSelfRef.__VdfgRegularize_h787163e4_0_34 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_18) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_20));
    vlSelfRef.__VdfgRegularize_h787163e4_0_33 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_12) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_14));
    vlSelfRef.__VdfgRegularize_h787163e4_0_29 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_3) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_7));
    vlSelfRef.__VdfgRegularize_h32427ced_0_45 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_5) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_7));
    vlSelfRef.__VdfgRegularize_h787163e4_0_32 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_18) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_22));
    vlSelfRef.__VdfgRegularize_h32427ced_0_36 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_20) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_22));
    vlSelfRef.__VdfgRegularize_h787163e4_0_31 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_12) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_16));
    vlSelfRef.__VdfgRegularize_h32427ced_0_38 = ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_14) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_16));
    vlSelfRef.__PVT__build_soc_coursesimsoc_tag_di_dirty = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack = 0U;
    if ((1U == (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
        if (vlSelfRef.__VdfgExtracted_h9204c5e2__0) {
            if (vlSelfRef.__PVT__builder_rhs_self5) {
                vlSelfRef.__PVT__build_soc_coursesimsoc_tag_di_dirty = 1U;
            }
            vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack = 1U;
        }
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
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h5bf05c75_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h5551a46c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h99df455e_0;

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__7(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    CData/*5:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    CData/*4:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*2:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
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
    vlSelfRef.__PVT__builder_rhs_self9 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                           ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a)
                                           : ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                               ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a)
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))
                                                   ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a)
                                                   : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a))));
    vlSelfRef.__PVT__builder_rhs_self15 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                            ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a)
                                            : ((1U 
                                                == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))
                                                    ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_a)
                                                    : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_a))));
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask;
        vlSelfRef.__VdfgRegularize_ha955a8f3_0_0 = 
            (0xffffU & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask)));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask = 0U;
        vlSelfRef.__VdfgRegularize_ha955a8f3_0_0 = 0xffffU;
    }
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
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
        = (((QData)((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)) 
           & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid) 
           & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
    vlSelfRef.__PVT__build_soc_uncached_wb_dat_r = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))) {
            if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid) {
                vlSelfRef.__PVT__build_soc_uncached_wb_dat_r 
                    = vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_payload_data;
            }
        }
    }
    __Vtableidx68 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 2U) | (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state));
    vlSelfRef.__PVT__build_soc_coursesimsoc_word_inc 
        = Vsim__ConstPool__TABLE_h5bf05c75_0[__Vtableidx68];
    __Vtableidx67 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_tag_do_dirty) 
                                 << 3U) | (((IData)(vlSelfRef.__VdfgExtracted_h9204c5e2__0) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_word_clr 
        = Vsim__ConstPool__TABLE_h5551a46c_0[__Vtableidx67];
    __Vtableidx66 = ((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_tag_do_dirty) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__builder_rhs_self5) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__VdfgExtracted_h9204c5e2__0) 
                         << 2U) | (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_tag_port_we 
        = Vsim__ConstPool__TABLE_h99df455e_0[__Vtableidx66];
    vlSelfRef.__PVT__build_soc_coursesimsoc_write_from_slave = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
            if ((3U == (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack) {
                    vlSelfRef.__PVT__build_soc_coursesimsoc_write_from_slave = 1U;
                }
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))) {
        vlSelfRef.__PVT__builder_rhs_self20 = vlSelfRef.__VdfgExtracted_h31a84d38__0;
        vlSelfRef.__PVT__builder_rhs_self22 = ((0U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_18) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_36))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))) {
        vlSelfRef.__PVT__builder_rhs_self20 = vlSelfRef.__VdfgRegularize_h787163e4_0_16;
        vlSelfRef.__PVT__builder_rhs_self22 = (IData)(
                                                      (((0U 
                                                         == 
                                                         (0x600U 
                                                          & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_12) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_38)))));
    } else {
        vlSelfRef.__PVT__builder_rhs_self20 = vlSelfRef.__VdfgExtracted_h7410dd27__0;
        vlSelfRef.__PVT__builder_rhs_self22 = (IData)(
                                                      (((0U 
                                                         == 
                                                         (0x6000U 
                                                          & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_3) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_45)))));
    }
    vlSelfRef.__PVT__builder_rhs_self23 = ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))
                                            ? vlSelfRef.__VdfgExtracted_h31a84d38__0
                                            : ((1U 
                                                == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))
                                                ? vlSelfRef.__VdfgRegularize_h787163e4_0_16
                                                : vlSelfRef.__VdfgExtracted_h7410dd27__0));
    if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))) {
        vlSelfRef.__PVT__builder_rhs_self26 = vlSelfRef.__VdfgExtracted_h31a84d38__0;
        vlSelfRef.__PVT__builder_rhs_self28 = ((2U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_32))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))) {
        vlSelfRef.__PVT__builder_rhs_self26 = vlSelfRef.__VdfgRegularize_h787163e4_0_16;
        vlSelfRef.__PVT__builder_rhs_self28 = (IData)(
                                                      (((0x400U 
                                                         == 
                                                         (0x600U 
                                                          & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_24) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_31)))));
    } else {
        vlSelfRef.__PVT__builder_rhs_self26 = vlSelfRef.__VdfgExtracted_h7410dd27__0;
        vlSelfRef.__PVT__builder_rhs_self28 = (IData)(
                                                      (((0x4000U 
                                                         == 
                                                         (0x6000U 
                                                          & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_29)))));
    }
    if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))) {
        vlSelfRef.__PVT__builder_rhs_self29 = vlSelfRef.__VdfgExtracted_h31a84d38__0;
        vlSelfRef.__PVT__builder_rhs_self31 = ((3U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_34))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))) {
        vlSelfRef.__PVT__builder_rhs_self29 = vlSelfRef.__VdfgRegularize_h787163e4_0_16;
        vlSelfRef.__PVT__builder_rhs_self31 = (IData)(
                                                      (((0x600U 
                                                         == 
                                                         (0x600U 
                                                          & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_24) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_33)))));
    } else {
        vlSelfRef.__PVT__builder_rhs_self29 = vlSelfRef.__VdfgExtracted_h7410dd27__0;
        vlSelfRef.__PVT__builder_rhs_self31 = (IData)(
                                                      (((0x6000U 
                                                         == 
                                                         (0x6000U 
                                                          & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_30)))));
    }
    vlSelfRef.__VdfgRegularize_h32427ced_0_42 = (IData)(
                                                        ((0x6000U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_30)))));
    vlSelfRef.__VdfgRegularize_h32427ced_0_31 = ((~ 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_34))) 
                                                 & (3U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_32 = (IData)(
                                                        ((0x600U 
                                                          == 
                                                          (0x600U 
                                                           & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_24) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_33)))));
    vlSelfRef.__VdfgRegularize_h32427ced_0_43 = (IData)(
                                                        ((0x4000U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_29)))));
    vlSelfRef.__VdfgRegularize_h32427ced_0_46 = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_3) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_45)))));
    vlSelfRef.__VdfgRegularize_h32427ced_0_44 = (IData)(
                                                        ((0x2000U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_45)))));
    vlSelfRef.__VdfgRegularize_h32427ced_0_33 = ((~ 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_32))) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_39 = ((~ 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_18) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_36))) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_35 = ((~ 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_36))) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_34 = (IData)(
                                                        ((0x400U 
                                                          == 
                                                          (0x600U 
                                                           & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_24) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_31)))));
}

VL_ATTR_COLD void Vsim_sim___stl_sequent__TOP__sim__8(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___stl_sequent__TOP__sim__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__builder_rhs_self25 = ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))
                                            ? ((1U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_36))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)))
                                            : ((1U 
                                                == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))
                                                ? (IData)(
                                                          (((0x200U 
                                                             == 
                                                             (0x600U 
                                                              & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                            & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_24) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_38)))))
                                                : (IData)(
                                                          (((0x2000U 
                                                             == 
                                                             (0x6000U 
                                                              & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                            & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_45)))))));
    vlSelfRef.__VdfgRegularize_h32427ced_0_41 = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x600U 
                                                           & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_12) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_38)))));
    vlSelfRef.__VdfgRegularize_h32427ced_0_37 = (IData)(
                                                        ((0x200U 
                                                          == 
                                                          (0x600U 
                                                           & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_24) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_38)))));
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
    if ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self2 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we;
    } else if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self2 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we;
    } else if ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self2 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we;
    } else {
        vlSelfRef.__PVT__builder_rhs_self11 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self12 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self0 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self2 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we;
    }
    if ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self5 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we;
    } else if ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self5 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we;
    } else if ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self5 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we;
    } else {
        vlSelfRef.__PVT__builder_rhs_self17 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelfRef.__PVT__builder_rhs_self18 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelfRef.__PVT__builder_t_self3 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
        vlSelfRef.__PVT__builder_t_self5 = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we;
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
    vlSelfRef.__VdfgRegularize_h92b32a33_0_3 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we))))));
    vlSelfRef.__PVT__builder_self1 = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                ? (IData)(vlSelfRef.__PVT__builder_rhs_self15)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                                    ? (IData)(vlSelfRef.__PVT__builder_rhs_self15)
                                                    : (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_a))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r 
        = ((0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r))
            ? vlSelfRef.__VdfgRegularize_h787163e4_0_45
            : ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r))
                ? (IData)((vlSelfRef.__VdfgRegularize_h787163e4_0_46 
                           >> 0x20U)) : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_adr_offset_r))
                                          ? vlSelfRef.__VdfgRegularize_h787163e4_0_47[2U]
                                          : vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[3U])));
    if ((1U == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[3U];
    } else if ((2U == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] 
            = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_data[3U];
    } else if ((4U == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] 
            = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] = 0U;
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part) 
           & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
              >> 3U));
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_write_from_slave) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
    }
    vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_42) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_32) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_31) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelfRef.__PVT__build_soc_cmd_ready = (((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_46) 
                                                & (8U 
                                                   != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                                            | (((2U 
                                                 == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_44) 
                                                   & (8U 
                                                      != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                               | (((2U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_43) 
                                                      & (8U 
                                                         != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                                  | ((2U 
                                                      == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_42) 
                                                        & (8U 
                                                           != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)))))));
    vlSelfRef.__Vtableidx69 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we) 
                                  << 7U) | ((((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_39) 
                                                 & (8U 
                                                    != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                                             | (((0U 
                                                  == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_35) 
                                                    & (8U 
                                                       != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                                | (((0U 
                                                     == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_33) 
                                                       & (8U 
                                                          != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                                   | ((0U 
                                                       == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_31) 
                                                         & (8U 
                                                            != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level))))))) 
                                            << 6U)) 
                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid) 
                                    << 5U) | ((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid4) 
                                              << 4U))) 
                               | (((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready0) 
                                   << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_wdata_valid) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native0_state))));
}
