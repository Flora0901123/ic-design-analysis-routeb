// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h27d45af0_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__24(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    // Body
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_write)
            ? (0x1ffU & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address))
            : 0U);
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_dfiphasemodel_read) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads0 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads1 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads2 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads3 = 1U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read 
            = (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read 
            = (1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read 
            = (2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read 
            = (3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_bank));
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col 
            = (0x1ffU & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_address));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads0 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads1 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads2 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_reads3 = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col = 0U;
    }
    __Vtableidx61 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready) 
                         << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_multiplexer_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready 
        = Vsim__ConstPool__TABLE_h27d45af0_0[__Vtableidx61];
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_activate_row 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_activate_row 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_activate_row 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_activate_row;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col1 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col2 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col3 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_col 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_col 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_col 
        = vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr = 0U;
    vlSelfRef.__VdfgRegularize_h8134e6f5_0_0 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__builder_rhs_self14));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (0U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 0U;
    if ((((IData)(vlSelfRef.__PVT__builder_rhs_self14) 
          & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_ready)) 
         & (3U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_grant)))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready = 1U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] 
                = vlSelfRef.__PVT__mem_1[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_adr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] 
                = vlSelfRef.__PVT__mem_2[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_adr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] 
                = vlSelfRef.__PVT__mem_3[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_adr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] = 0U;
    vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                            | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write_col0)));
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & VL_SHIFTL_III(23,23,32, (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_row), 9U)) 
                                | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_read_col)));
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][0U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][1U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][2U];
            vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U] 
                = vlSelfRef.__PVT__mem_4[vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_read_port_adr][3U];
        }
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_adr = 0U;
    }
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
           & (IData)(vlSelfRef.__PVT__builder_rhs_self18));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_17 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__builder_rhs_self17));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_14 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_cas));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_15 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_ras));
    vlSelfRef.__VdfgRegularize_h92b32a33_0_16 = ((IData)(vlSelfRef.__VdfgRegularize_h8134e6f5_0_0) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_choose_req_cmd_payload_we));
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_3 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine0_next_state = 3U;
        }
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__25(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_2 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine1_next_state = 3U;
        }
    }
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_1 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine2_next_state = 3U;
        }
    }
    vlSelfRef.__VdfgRegularize_h1fae57f4_0_0 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid));
    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state 
        = vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state;
    if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
        if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 4U;
                } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) {
                    if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) {
                        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) {
                            if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge))) {
                                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 2U;
                            }
                        } else {
                            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
                    }
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid)))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
        if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready) {
                if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 6U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
                    & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready))) {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state))) {
        if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready))) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 5U;
            }
        }
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) {
        vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 4U;
    } else if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) {
        if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) {
            if (vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) {
                if (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                     & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_auto_precharge))) {
                    vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 2U;
                }
            } else {
                vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 1U;
            }
        } else {
            vlSelfRef.__PVT__builder_litedramcore_bankmachine3_next_state = 3U;
        }
    }
    vlSelfRef.__PVT__builder_self6 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                             && (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_twtrcon_valid))));
    vlSelfRef.__PVT__builder_self5 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_17)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                             && (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_17))));
    vlSelfRef.__PVT__builder_self2 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_14)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_14)
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_18) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_cas)))));
    vlSelfRef.__PVT__builder_self3 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_15)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_15)
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_18) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_ras)))));
    vlSelfRef.__PVT__builder_self4 = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0)) 
                                      & ((1U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                          ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_16)
                                          : ((2U == (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_steerer0))
                                              ? (IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_16)
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h92b32a33_0_18) 
                                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_payload_we)))));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_3) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_2) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_1) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_valid 
        = ((IData)(vlSelfRef.__VdfgRegularize_h1fae57f4_0_0) 
           & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__27(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__27\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q 
        = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q;
    vlSelfRef.__Vdly__accelerator_shell__DOT__pending_q 
        = vlSelfRef.__PVT__accelerator_shell__DOT__pending_q;
    vlSelfRef.__Vdly__litex_descriptor_engine__DOT__state_q 
        = vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q;
    vlSelfRef.__Vdly__litex_descriptor_engine__DOT__outstanding_q 
        = vlSelfRef.__PVT__litex_descriptor_engine__DOT__outstanding_q;
    vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__write_q 
        = vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q;
    vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__addr_q 
        = vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q;
    vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q 
        = vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q;
    vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__state_q 
        = vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q;
    vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q 
        = vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q;
    if (vlSelfRef.__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        if (((IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q) 
             & (2U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)))) {
            vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q = 0U;
        } else if ((((1U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)) 
                     & (IData)(vlSelfRef.__PVT__build_soc_mem_req_ready)) 
                    & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__invalid_request))) {
            vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__accelerator_shell__DOT__start_raw) 
             & (~ (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__busy)))) {
            vlSelfRef.__Vdly__accelerator_shell__DOT__pending_q = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__accelerator_shell__DOT__pending_q) 
             & (0U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)))) {
            vlSelfRef.__Vdly__accelerator_shell__DOT__pending_q = 0U;
            vlSelfRef.__PVT__accelerator_shell__DOT__inflight_q = 1U;
        }
        if ((2U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
                vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 0U;
            } else if (vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q) {
                vlSelfRef.__PVT__build_soc_wb_dat_r 
                    = vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q;
                vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
            if (vlSelfRef.__PVT__build_soc_csr_req_ready) {
                vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 2U;
            }
        } else if (((IData)(vlSelfRef.__PVT__builder_rhs_self3) 
                    & (0x38000000U == (0x3ffffc00U 
                                       & vlSelfRef.__PVT__builder_rhs_self0)))) {
            vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__write_q 
                = vlSelfRef.__PVT__builder_rhs_self5;
            vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__addr_q 
                = (0xfcU & (vlSelfRef.__PVT__builder_rhs_self0 
                            << 2U));
            vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q 
                = vlSelfRef.__PVT__builder_rhs_self1;
            vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 1U;
        }
        if ((8U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 0U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                    if (((~ (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q)) 
                         & (2U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)))) {
                        vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 0U;
                    }
                } else if (vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid14) {
                    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] 
                        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] 
                        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] 
                        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                    vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] 
                        = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
                    vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                if (vlSelfRef.__PVT__build_soc_cmd_ready) {
                    vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 6U;
                }
            } else if (vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready2) {
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] = 0U;
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] = 0U;
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] = 0U;
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] = 0U;
                vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
                if (vlSelfRef.__PVT__build_soc_cmd_ready) {
                    vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 4U;
                }
            } else if (vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid14) {
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[0U];
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[1U];
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[2U];
                vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] 
                    = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_slave_p0_rddata[3U];
                vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q))) {
            if (vlSelfRef.__PVT__build_soc_cmd_ready) {
                vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 2U;
            }
        } else if (((1U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q)) 
                    & ((~ (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__invalid_request)) 
                       & (~ (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__error_pending_q))))) {
            vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q = 0U;
            vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                = vlSelfRef.__PVT__build_soc_mem_req_addr;
            vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[0U] = 0U;
            vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[1U] = 0U;
            vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[2U] = 0U;
            vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[3U] = 0U;
            vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q = 0U;
            vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 1U;
        }
        if ((2U == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q))) {
            vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q = 0U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & (IData)(vlSelfRef.__PVT__build_soc_csr_req_ready))) {
            vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q = 1U;
            vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q 
                = ((0x80U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                    ? 0xbad0add0U : ((0x40U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                      ? 0xbad0add0U
                                      : ((0x20U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                          ? 0xbad0add0U
                                          : ((0x10U 
                                              & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? 0xbad0add0U
                                                   : (IData)(
                                                             (vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__cycles_snapshot_q 
                                                              >> 0x20U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__cycles_q)
                                                   : (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__status_q)))
                                              : ((8U 
                                                  & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? 0U
                                                   : vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))
                                                   ? (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__opcode_cfg)
                                                   : 
                                                  (((IData)(vlSelfRef.__PVT__accelerator_shell__DOT__irq_q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__busy))))))));
        }
        if (((1U == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & ((IData)(vlSelfRef.__PVT__build_soc_csr_req_ready) 
                & ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                   & (IData)((((0xcU == (0xfcU & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) 
                               & vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q) 
                              & ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                  ? 0xfU : 0U))))))) {
            vlSelfRef.__PVT__accelerator_shell__DOT__irq_q = 0U;
        }
        if ((4U == (IData)(vlSelfRef.__PVT__litex_descriptor_engine__DOT__state_q))) {
            vlSelfRef.__PVT__accelerator_shell__DOT__inflight_q = 0U;
            vlSelfRef.__PVT__accelerator_shell__DOT__irq_q = 1U;
        }
    } else {
        vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__error_pending_q = 0U;
        vlSelfRef.__Vdly__accelerator_shell__DOT__pending_q = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__inflight_q = 0U;
        vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__state_q = 0U;
        vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__write_q = 0U;
        vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__addr_q = 0U;
        vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q = 0U;
        vlSelfRef.__PVT__build_soc_wb_dat_r = 0U;
        vlSelfRef.__Vdly__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__write_q = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[0U] = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[1U] = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[2U] = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wdata_q[3U] = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[0U] = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[1U] = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[2U] = 0U;
        vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__rdata_q[3U] = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_data_q = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__irq_q = 0U;
    }
    vlSelfRef.__VdfgExtracted_h7410dd27__0 = ((0x3ffe00U 
                                               & (vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                  >> 6U)) 
                                              | (0x1ffU 
                                                 & (vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q 
                                                    >> 4U)));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__29(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__29\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__Vcellinp__litex_wishbone_csr_bridge__rst_ni) {
        vlSelfRef.__PVT__accelerator_shell__DOT__start_raw = 0U;
        if (((1U == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
             & (IData)(vlSelfRef.__PVT__build_soc_csr_req_ready))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                              >> 2U)))) {
                                    if (vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q) {
                                        if (((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 1U : 0U)) {
                                            vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xffU 
                                                      & vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                        if (((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 2U : 0U)) {
                                            vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xff00U 
                                                      & vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                        if (((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 4U : 0U)) {
                                            vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xff0000U 
                                                      & vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                        if (((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 8U : 0U)) {
                                            vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg 
                                                = (
                                                   (0xffffffU 
                                                    & vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg) 
                                                   | (0xff000000U 
                                                      & vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q));
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q) 
                                              >> 2U)))) {
                                    if ((((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q) 
                                          & ((IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q)
                                              ? 0xfU
                                              : 0U)) 
                                         & vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q)) {
                                        vlSelfRef.__PVT__accelerator_shell__DOT__start_raw = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__accelerator_shell__DOT__desc_cfg = 0U;
        vlSelfRef.__PVT__accelerator_shell__DOT__start_raw = 0U;
    }
    vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__write_q 
        = vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__write_q;
    vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__wdata_q 
        = vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__wdata_q;
    vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__addr_q 
        = vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__addr_q;
    vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q 
        = vlSelfRef.__Vdly__litex_wishbone_csr_bridge__DOT__state_q;
    vlSelfRef.__PVT__build_soc_csr_req_ready = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__accelerator_shell__DOT__u_csr__DOT__rsp_valid_q)) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vsim__ConstPool__TABLE_h1510fe44_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_hf584dcad_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h778d8ab6_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__31(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__31\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*4:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*7:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
    vlSelfRef.__PVT__build_soc_uncached_dram_bridge_aborted_litedramwishbone2native1_next_value 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_dram_bridge_is_ongoing)
            ? (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_15)
            : ((2U == (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state)) 
               & (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_15)));
    vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready = 0U;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid13 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid12;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 = 0U;
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 = 0U;
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
    }
    __Vtableidx63 = (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                      << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                 << 2U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_state)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value_ce2 
        = Vsim__ConstPool__TABLE_h1510fe44_0[__Vtableidx63];
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 = 0U;
    if ((1U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
        if ((2U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if ((3U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
                if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) {
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value_ce0 = 1U;
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value_ce1 = 1U;
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_addr_litedramcore_next_value0 
                        = (0x3ffffffU & (vlSelfRef.__PVT__builder_rhs_self0 
                                         - (IData)(0x800000U)));
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we_litedramcore_next_value1 
                        = vlSelfRef.__PVT__builder_rhs_self5;
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd)))) {
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__builder_rhs_self5)));
                if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) {
                    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 
                        = (0xfU & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel) 
                                   | ((IData)(1U) << 
                                      (3U & vlSelfRef.__PVT__builder_rhs_self0))));
                }
            }
        } else if ((3U != (IData)(vlSelfRef.__PVT__builder_litedramcore_state))) {
            if (vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) {
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_last_litedramcore_next_value2 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__builder_rhs_self5)));
                vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value3 
                    = (0xfU & ((IData)(1U) << (3U & vlSelfRef.__PVT__builder_rhs_self0)));
            }
        }
    }
    __Vtableidx64 = (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                 << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__builder_litedramcore_state))));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_sel_litedramcore_next_value_ce3 
        = Vsim__ConstPool__TABLE_hf584dcad_0[__Vtableidx64];
    __Vtableidx70 = (((((IData)(vlSelfRef.__PVT__builder_rhs_self5) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                                  << 6U)) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_valid) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_rdata_valid) 
                                                << 4U))) 
                     | (((3U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)) 
                         << 3U) | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_wdata_valid) 
                                    << 2U) | (IData)(vlSelfRef.__PVT__builder_litedramwishbone2native1_state))));
    vlSelfRef.__PVT__builder_litedramwishbone2native1_next_state 
        = Vsim__ConstPool__TABLE_h778d8ab6_0[__Vtableidx70];
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid12 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid11;
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid11 
        = vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid10;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid13 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid12 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid11 = 0U;
    }
    vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready0 
        = (((((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready)) 
             | ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready))) 
            | ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready))) 
           | ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready)));
    vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1 
        = (((((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready)) 
             | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready))) 
            | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready))) 
           | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready)));
    vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready2 
        = (((((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready)) 
             | ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready))) 
            | ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready))) 
           | ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready)));
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid0 
        = (((((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid)) 
             | ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid))) 
            | ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid))) 
           | ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid)));
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid5 
        = (((((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid)) 
             | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid))) 
            | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid))) 
           | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid)));
    vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid10 
        = (((((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid)) 
             | ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid))) 
            | ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
               & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid))) 
           | ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
              & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid)));
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__builder_rhs_self22) 
                  | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_lock))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))) {
            if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))) {
            if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant = 2U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant = 1U;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__builder_rhs_self25) 
                  | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_lock))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))) {
            if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))) {
            if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant = 2U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant = 1U;
            }
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_ha1e8967d_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h8cf9c1e6_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__32(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__32\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    SData/*8:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    SData/*8:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    SData/*8:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    SData/*8:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    SData/*8:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__builder_rhs_self28) 
                  | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_lock))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))) {
            if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))) {
            if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant = 2U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant = 1U;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__builder_rhs_self31) 
                  | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock))))) {
        if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))) {
            if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))) {
            if ((4U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant = 2U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))) {
            if ((1U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request))) {
                vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant = 1U;
            }
        }
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant = 0U;
        vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant = 0U;
        vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant = 0U;
        vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready0 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready2 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid0 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid5 = 0U;
        vlSelfRef.__PVT__builder_litedramcore_new_master_rdata_valid10 = 0U;
    }
    __Vtableidx11 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[__Vtableidx11];
    __Vtableidx22 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[__Vtableidx22];
    __Vtableidx32 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[__Vtableidx32];
    vlSelfRef.__Vtableidx41 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                                  << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                               << 6U))) 
                                | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                                    << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                              << 4U))) 
                               | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                   << 3U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready 
        = Vsim__ConstPool__TABLE_ha1e8967d_0[vlSelfRef.__Vtableidx41];
    __Vtableidx12 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine0_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx12];
    __Vtableidx23 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine1_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx23];
    __Vtableidx33 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine2_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx33];
    __Vtableidx42 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_ready) 
                        << 8U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                   << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit) 
                                             << 6U))) 
                      | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened) 
                          << 5U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid) 
                                    << 4U))) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_cmd_valid) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__builder_litedramcore_bankmachine3_state)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid 
        = Vsim__ConstPool__TABLE_h8cf9c1e6_0[__Vtableidx42];
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
    vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant 
        = vlSelfRef.__Vdly__builder_litedramcore_roundrobin0_grant;
    vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant 
        = vlSelfRef.__Vdly__builder_litedramcore_roundrobin1_grant;
    vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant 
        = vlSelfRef.__Vdly__builder_litedramcore_roundrobin2_grant;
    vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant 
        = vlSelfRef.__Vdly__builder_litedramcore_roundrobin3_grant;
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready 
        = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_rdata_valid) 
           | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_wdata_ready));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_valid)) 
                 | (IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1)));
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
    vlSelfRef.__VdfgRegularize_h787163e4_0_8 = (((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready2) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready1) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__builder_litedramcore_new_master_wdata_ready0)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst = 0U;
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
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsim__ConstPool__TABLE_h5bf05c75_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_h5551a46c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h99df455e_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vsim__ConstPool__TABLE_h5120d3ab_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h65dc8184_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__33(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__33\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*5:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    CData/*4:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*2:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h32427ced_0_7 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_22 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelfRef.__VdfgRegularize_h32427ced_0_16 = ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_lock) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)));
    vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level)) 
           & ((~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
              | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_strobe_all)) 
                 | (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_sink_ready)));
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
    __Vtableidx65 = (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_cyc) 
                        & (IData)(vlSelfRef.__PVT__builder_rhs_self3)) 
                       << 5U) | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_interface_ack) 
                                  << 4U) | ((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_tag_do_dirty) 
                                            << 3U))) 
                     | (((IData)(vlSelfRef.__VdfgExtracted_h9204c5e2__0) 
                         << 2U) | (IData)(vlSelfRef.__PVT__builder_fullmemorywe_state)));
    vlSelfRef.__PVT__builder_fullmemorywe_next_state 
        = Vsim__ConstPool__TABLE_h5120d3ab_0[__Vtableidx65];
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
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready = 0U;
    if (vlSelfRef.__VdfgExtracted_h4523c57b__0) {
        if (vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid) {
            vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready 
                = vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready;
        }
    }
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid) 
           & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_ready));
    vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we = 0U;
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_write_from_slave) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_dat_r[3U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we = 0xffffU;
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[0U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[1U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[2U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
        vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_w[3U] 
            = vlSelfRef.__PVT__builder_rhs_self1;
        if (((((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_cyc) 
               & (IData)(vlSelfRef.__PVT__builder_rhs_self3)) 
              & (IData)(vlSelfRef.__PVT__builder_rhs_self5)) 
             & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack))) {
            vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_we 
                = (((((- (IData)((3U == (3U & vlSelfRef.__PVT__builder_rhs_self0)))) 
                      & (IData)(vlSelfRef.__PVT__builder_rhs_self2)) 
                     << 0xcU) | (((- (IData)((2U == 
                                              (3U & vlSelfRef.__PVT__builder_rhs_self0)))) 
                                  & (IData)(vlSelfRef.__PVT__builder_rhs_self2)) 
                                 << 8U)) | ((((- (IData)(
                                                         (1U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.__PVT__builder_rhs_self0)))) 
                                              & (IData)(vlSelfRef.__PVT__builder_rhs_self2)) 
                                             << 4U) 
                                            | ((- (IData)(
                                                          (0U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.__PVT__builder_rhs_self0)))) 
                                               & (IData)(vlSelfRef.__PVT__builder_rhs_self2))));
        }
    }
    vlSelfRef.__Vcellinp__litex_wishbone_csr_bridge__rst_ni 
        = (1U & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_int_rst)));
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
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_do_read 
        = ((0U != (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level)) 
           & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_source_ready));
    vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished 
        = ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_load_part) 
           & ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk) 
              >> 3U));
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
    vlSelfRef.__PVT__builder_litedramwishbone2native0_next_state 
        = Vsim__ConstPool__TABLE_h778d8ab6_0[vlSelfRef.__Vtableidx69];
    __Vtableidx62 = (((((IData)(vlSelfRef.__PVT__builder_rhs_self5) 
                        << 7U) | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_new_port_cmd_ready) 
                                  << 6U)) | ((((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_finished) 
                                               | (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_finished)) 
                                              << 5U) 
                                             | ((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_next_cmd) 
                                                << 4U))) 
                     | (((IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_we) 
                         << 3U) | (((((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant)) 
                                      & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_41) 
                                         & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level)))) 
                                     | (((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant)) 
                                         & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_37) 
                                            & (8U != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level)))) 
                                        | (((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant)) 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_34) 
                                               & (8U 
                                                  != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level)))) 
                                           | ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant)) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_32) 
                                                 & (8U 
                                                    != (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level))))))) 
                                    << 2U) | (IData)(vlSelfRef.__PVT__builder_litedramcore_state))));
    vlSelfRef.__PVT__builder_litedramcore_next_state 
        = Vsim__ConstPool__TABLE_h65dc8184_0[__Vtableidx62];
}

VL_INLINE_OPT void Vsim_sim___nba_comb__TOP__sim__0(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_comb__TOP__sim__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__builder_shared_dat_r = ((IData)(vlSelfRef.__PVT__builder_error)
                                              ? 0xffffffffU
                                              : (((
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.__PVT__builder_slave_sel_r)))) 
                                                   & vlSelfRef.__PVT__rom_dat0) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                    >> 1U)))) 
                                                     & vlSelfRef.__PVT__sram
                                                     [vlSelfRef.__PVT__sram_adr0])) 
                                                 | ((((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                     >> 2U)))) 
                                                      & vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_dat_r) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                       >> 3U)))) 
                                                        & vlSelfRef.__PVT__build_soc_uncached_wb_dat_r)) 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                       >> 4U)))) 
                                                        & vlSelfRef.__PVT__build_soc_wb_dat_r) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.__PVT__builder_slave_sel_r) 
                                                                         >> 5U)))) 
                                                          & vlSelfRef.__PVT__builder_interface0_dat_r)))));
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
    vlSelfRef.__VdfgRegularize_h787163e4_0_50 = (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack) 
                                                  | (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack)) 
                                                 | (((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_wb_sdram_ack) 
                                                     | (IData)(vlSelfRef.__PVT__build_soc_uncached_wb_ack)) 
                                                    | ((3U 
                                                        == (IData)(vlSelfRef.__PVT__litex_wishbone_csr_bridge__DOT__state_q)) 
                                                       | (IData)(vlSelfRef.__PVT__builder_interface0_ack))));
    if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))) {
        vlSelfRef.__PVT__builder_rhs_self20 = vlSelfRef.__VdfgExtracted_h31a84d38__0;
        vlSelfRef.__PVT__builder_rhs_self21 = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we;
        vlSelfRef.__PVT__builder_rhs_self22 = ((0U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_18) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_36))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin0_grant))) {
        vlSelfRef.__PVT__builder_rhs_self20 = vlSelfRef.__VdfgRegularize_h787163e4_0_16;
        vlSelfRef.__PVT__builder_rhs_self21 = vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we;
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
        vlSelfRef.__PVT__builder_rhs_self21 = (3U == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
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
    if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))) {
        vlSelfRef.__PVT__builder_rhs_self23 = vlSelfRef.__VdfgExtracted_h31a84d38__0;
        vlSelfRef.__PVT__builder_rhs_self24 = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we;
        vlSelfRef.__PVT__builder_rhs_self25 = ((1U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_36))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin1_grant))) {
        vlSelfRef.__PVT__builder_rhs_self23 = vlSelfRef.__VdfgRegularize_h787163e4_0_16;
        vlSelfRef.__PVT__builder_rhs_self24 = vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we;
        vlSelfRef.__PVT__builder_rhs_self25 = (IData)(
                                                      (((0x200U 
                                                         == 
                                                         (0x600U 
                                                          & vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_addr)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_24) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_38)))));
    } else {
        vlSelfRef.__PVT__builder_rhs_self23 = vlSelfRef.__VdfgExtracted_h7410dd27__0;
        vlSelfRef.__PVT__builder_rhs_self24 = (3U == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
        vlSelfRef.__PVT__builder_rhs_self25 = (IData)(
                                                      (((0x2000U 
                                                         == 
                                                         (0x6000U 
                                                          & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                        & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                           | (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_45)))));
    }
    if ((0U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))) {
        vlSelfRef.__PVT__builder_rhs_self26 = vlSelfRef.__VdfgExtracted_h31a84d38__0;
        vlSelfRef.__PVT__builder_rhs_self27 = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we;
        vlSelfRef.__PVT__builder_rhs_self28 = ((2U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_32))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin2_grant))) {
        vlSelfRef.__PVT__builder_rhs_self26 = vlSelfRef.__VdfgRegularize_h787163e4_0_16;
        vlSelfRef.__PVT__builder_rhs_self27 = vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we;
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
        vlSelfRef.__PVT__builder_rhs_self27 = (3U == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
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
        vlSelfRef.__PVT__builder_rhs_self30 = vlSelfRef.__PVT__build_soc_coursesimsoc_interface_we;
        vlSelfRef.__PVT__builder_rhs_self31 = ((3U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_40)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_26) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_34))) 
                                                  & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__builder_litedramcore_roundrobin3_grant))) {
        vlSelfRef.__PVT__builder_rhs_self29 = vlSelfRef.__VdfgRegularize_h787163e4_0_16;
        vlSelfRef.__PVT__builder_rhs_self30 = vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_payload_we;
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
        vlSelfRef.__PVT__builder_rhs_self30 = (3U == (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__state_q));
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
    vlSelfRef.__VdfgRegularize_h787163e4_0_12 = ((2U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))
                                                  ? (IData)(vlSelfRef.__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_buffer_pipe_valid_source_payload_we)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))
                                                   ? (IData)(vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__wstrb_q)
                                                   : 0U));
    if ((1U == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_data_port_dat_r[3U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we = 0xffffU;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_8))) {
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
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata_we 
            = vlSelfRef.__VdfgRegularize_h787163e4_0_12;
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask 
            = (0xffffU & (~ (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_12)));
    }
    vlSelfRef.__VdfgRegularize_h32427ced_0_42 = (IData)(
                                                        ((0x6000U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelfRef.__PVT__student_mini_native_dma_bridge__DOT__u_native__DOT__addr_q)) 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_8) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_30)))));
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
    vlSelfRef.__PVT__builder_shared_ack = ((IData)(vlSelfRef.__PVT__builder_error) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h787163e4_0_50));
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_interface_wdata[3U];
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U];
    }
    vlSelfRef.__PVT__builder_litedramcore_roundrobin3_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_42) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_32) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_31) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid))));
}

VL_INLINE_OPT void Vsim_sim___nba_comb__TOP__sim__1(Vsim_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_comb__TOP__sim__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__builder_litedramcore_roundrobin2_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_43) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_34) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_33) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelfRef.__PVT__builder_litedramcore_roundrobin0_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_46) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_41) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_39) 
                                 & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_port_cmd_valid))));
    vlSelfRef.__PVT__builder_litedramcore_roundrobin1_request 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_44) 
             & (IData)(vlSelfRef.__PVT__build_soc_cmd_valid)) 
            << 2U) | ((((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_37) 
                        & (IData)(vlSelfRef.__PVT__build_soc_uncached_port_port_cmd_valid)) 
                       << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h32427ced_0_35) 
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
    if ((1U & (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask;
        vlSelfRef.__VdfgRegularize_ha955a8f3_0_0 = 
            (0xffffU & (~ (IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_dfi_p0_wrdata_mask)));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata_mask = 0U;
        vlSelfRef.__VdfgRegularize_ha955a8f3_0_0 = 0xffffU;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write3))));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_dat_w[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel3_write_port_we = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write2))));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_dat_w[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel2_write_port_we = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write1))));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_dat_w[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel1_write_port_we = 0U;
    }
    if (vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_active) {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[0U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[1U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[2U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] 
            = vlSelfRef.__PVT__build_soc_coursesimsoc_sdram_master_p0_wrdata[3U];
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha955a8f3_0_0) 
               & (- (IData)((IData)(vlSelfRef.__PVT__build_soc_coursesimsoc_bank_write0))));
    } else {
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[0U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[1U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[2U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_dat_w[3U] = 0U;
        vlSelfRef.__PVT__build_soc_coursesimsoc_bankmodel0_write_port_we = 0U;
    }
}
