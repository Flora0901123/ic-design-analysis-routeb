// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__11(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__11\n"); );
    // Body
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 0U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 1U;
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 0U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 1U;
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 0U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 1U;
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 0U;
    } else if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 1U;
    }
    vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    if ((4U == (0x1fU & ((IData)(vlSelf->__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr))))) {
            vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                    ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)
                    : ((1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                        ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_storage)
                        : ((2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                            ? 0U : ((3U == (0x1ffU 
                                            & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                                     ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_address_storage)
                                     : ((4U == (0x1ffU 
                                                & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                                         ? (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_baddress_storage)
                                         : ((5U == 
                                             (0x1ffU 
                                              & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                                             ? vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[3U]
                                             : ((6U 
                                                 == 
                                                 (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                                                 ? 
                                                vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[2U]
                                                 : 
                                                vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[1U])))))));
        } else if ((8U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelf->__PVT__build_soc_coursesimsoc_sdram_wrdata_storage[0U];
        } else if ((9U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[3U];
        } else if ((0xaU == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[2U];
        } else if ((0xbU == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[1U];
        } else if ((0xcU == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = vlSelf->__PVT__build_soc_coursesimsoc_sdram_rddata_status[0U];
        }
    }
    vlSelf->__PVT__builder_litedramcore_bankmachine1_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine1_next_state;
    vlSelf->__PVT__builder_litedramcore_bankmachine0_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine0_next_state;
    vlSelf->__PVT__builder_litedramcore_bankmachine2_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine2_next_state;
    vlSelf->__PVT__builder_litedramcore_bankmachine3_state 
        = vlSelf->__PVT__builder_litedramcore_bankmachine3_next_state;
    vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((1U == (0x1fU & ((IData)(vlSelf->__PVT__builder_interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr))))) {
            vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                    ? (IData)(vlSelf->__PVT__build_soc_cpu_traffic_reset_storage)
                    : ((1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                        ? (IData)(vlSelf->__PVT__build_soc_cpu_traffic_capture_storage)
                        : ((2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                            ? (IData)((vlSelf->__PVT__build_soc_cpu_traffic_ibus_snapshot 
                                       >> 0x20U)) : 
                           ((3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                             ? (IData)(vlSelf->__PVT__build_soc_cpu_traffic_ibus_snapshot)
                             : ((4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                                 ? (IData)((vlSelf->__PVT__build_soc_cpu_traffic_dbus_snapshot 
                                            >> 0x20U))
                                 : ((5U == (0x1ffU 
                                            & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                                     ? (IData)(vlSelf->__PVT__build_soc_cpu_traffic_dbus_snapshot)
                                     : ((6U == (0x1ffU 
                                                & (IData)(vlSelf->__PVT__builder_interface1_adr)))
                                         ? (IData)(
                                                   (vlSelf->__PVT__build_soc_cpu_traffic_dma_snapshot 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->__PVT__build_soc_cpu_traffic_dma_snapshot))))))));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_close)))) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_open) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row 
                = (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_close)))) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_open) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row 
                = (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_close)))) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_open) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row 
                = (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_close)))) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_open) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row 
                = (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                              >> 9U));
        }
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_opened = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_opened = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_opened = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_opened = 0U;
        vlSelf->__PVT__builder_litedramcore_bankmachine1_state = 0U;
        vlSelf->__PVT__builder_litedramcore_bankmachine0_state = 0U;
        vlSelf->__PVT__builder_litedramcore_bankmachine2_state = 0U;
        vlSelf->__PVT__builder_litedramcore_bankmachine3_state = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__12(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__12\n"); );
    // Body
    vlSelf->__PVT__builder_litedramcore_refresher_state 
        = vlSelf->__PVT__builder_litedramcore_refresher_next_state;
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__builder_litedramcore_refresher_state = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_twtrcon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_twtrcon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_cmd_grant;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level 
        = vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_level;
    vlSelf->__PVT__build_soc_coursesimsoc_ram_bus_ram_bus_ack 
        = vlSelf->__Vdly__build_soc_coursesimsoc_ram_bus_ram_bus_ack;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last 
        = vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_last;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first 
        = vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_source_first;
    if (vlSelf->__Vdlyvset__data_mem_grain15__v0) {
        vlSelf->__PVT__data_mem_grain15[vlSelf->__Vdlyvdim0__data_mem_grain15__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain15__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain14__v0) {
        vlSelf->__PVT__data_mem_grain14[vlSelf->__Vdlyvdim0__data_mem_grain14__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain14__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain13__v0) {
        vlSelf->__PVT__data_mem_grain13[vlSelf->__Vdlyvdim0__data_mem_grain13__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain13__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain12__v0) {
        vlSelf->__PVT__data_mem_grain12[vlSelf->__Vdlyvdim0__data_mem_grain12__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain12__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain11__v0) {
        vlSelf->__PVT__data_mem_grain11[vlSelf->__Vdlyvdim0__data_mem_grain11__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain11__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain10__v0) {
        vlSelf->__PVT__data_mem_grain10[vlSelf->__Vdlyvdim0__data_mem_grain10__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain10__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain9__v0) {
        vlSelf->__PVT__data_mem_grain9[vlSelf->__Vdlyvdim0__data_mem_grain9__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain9__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain8__v0) {
        vlSelf->__PVT__data_mem_grain8[vlSelf->__Vdlyvdim0__data_mem_grain8__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain8__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain7__v0) {
        vlSelf->__PVT__data_mem_grain7[vlSelf->__Vdlyvdim0__data_mem_grain7__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain7__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain6__v0) {
        vlSelf->__PVT__data_mem_grain6[vlSelf->__Vdlyvdim0__data_mem_grain6__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain6__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain5__v0) {
        vlSelf->__PVT__data_mem_grain5[vlSelf->__Vdlyvdim0__data_mem_grain5__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain5__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain4__v0) {
        vlSelf->__PVT__data_mem_grain4[vlSelf->__Vdlyvdim0__data_mem_grain4__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain4__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain3__v0) {
        vlSelf->__PVT__data_mem_grain3[vlSelf->__Vdlyvdim0__data_mem_grain3__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain3__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain2__v0) {
        vlSelf->__PVT__data_mem_grain2[vlSelf->__Vdlyvdim0__data_mem_grain2__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain2__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain1__v0) {
        vlSelf->__PVT__data_mem_grain1[vlSelf->__Vdlyvdim0__data_mem_grain1__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain1__v0;
    }
    if (vlSelf->__Vdlyvset__data_mem_grain0__v0) {
        vlSelf->__PVT__data_mem_grain0[vlSelf->__Vdlyvdim0__data_mem_grain0__v0] 
            = vlSelf->__Vdlyvval__data_mem_grain0__v0;
    }
    if (vlSelf->__Vdlyvset__sram__v0) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v0))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v0))));
    }
    if (vlSelf->__Vdlyvset__sram__v1) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v1))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v1))));
    }
    if (vlSelf->__Vdlyvset__sram__v2) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v2))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v2))));
    }
    if (vlSelf->__Vdlyvset__sram__v3) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v3))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v3))));
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_tccdcon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_tccdcon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_tccdcon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack 
        = vlSelf->__Vdly__build_soc_coursesimsoc_coursesimsoc_ram_bus_ack;
    if (vlSelf->__Vdlyvset__tag_mem__v0) {
        vlSelf->__PVT__tag_mem[vlSelf->__Vdlyvdim0__tag_mem__v0] 
            = vlSelf->__Vdlyvval__tag_mem__v0;
    }
    if (vlSelf->__Vdlyvset__mem_4__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v0), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v0], vlSelf->__Vdlyvval__mem_4__v0);
    }
    if (vlSelf->__Vdlyvset__mem_4__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v1), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v1], vlSelf->__Vdlyvval__mem_4__v1);
    }
    if (vlSelf->__Vdlyvset__mem_4__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v2), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v2], vlSelf->__Vdlyvval__mem_4__v2);
    }
    if (vlSelf->__Vdlyvset__mem_4__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v3), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v3], vlSelf->__Vdlyvval__mem_4__v3);
    }
    if (vlSelf->__Vdlyvset__mem_4__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v4), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v4], vlSelf->__Vdlyvval__mem_4__v4);
    }
    if (vlSelf->__Vdlyvset__mem_4__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v5), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v5], vlSelf->__Vdlyvval__mem_4__v5);
    }
    if (vlSelf->__Vdlyvset__mem_4__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v6), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v6], vlSelf->__Vdlyvval__mem_4__v6);
    }
    if (vlSelf->__Vdlyvset__mem_4__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v7), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v7], vlSelf->__Vdlyvval__mem_4__v7);
    }
    if (vlSelf->__Vdlyvset__mem_4__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v8), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v8], vlSelf->__Vdlyvval__mem_4__v8);
    }
    if (vlSelf->__Vdlyvset__mem_4__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v9), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v9], vlSelf->__Vdlyvval__mem_4__v9);
    }
    if (vlSelf->__Vdlyvset__mem_4__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v10), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v10], vlSelf->__Vdlyvval__mem_4__v10);
    }
    if (vlSelf->__Vdlyvset__mem_4__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v11), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v11], vlSelf->__Vdlyvval__mem_4__v11);
    }
    if (vlSelf->__Vdlyvset__mem_4__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v12), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v12], vlSelf->__Vdlyvval__mem_4__v12);
    }
    if (vlSelf->__Vdlyvset__mem_4__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v13), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v13], vlSelf->__Vdlyvval__mem_4__v13);
    }
    if (vlSelf->__Vdlyvset__mem_4__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v14), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v14], vlSelf->__Vdlyvval__mem_4__v14);
    }
    if (vlSelf->__Vdlyvset__mem_4__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_4__v15), 
                        vlSelf->__PVT__mem_4[vlSelf->__Vdlyvdim0__mem_4__v15], vlSelf->__Vdlyvval__mem_4__v15);
    }
    if (vlSelf->__Vdlyvset__mem_3__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v0), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v0], vlSelf->__Vdlyvval__mem_3__v0);
    }
    if (vlSelf->__Vdlyvset__mem_3__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v1), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v1], vlSelf->__Vdlyvval__mem_3__v1);
    }
    if (vlSelf->__Vdlyvset__mem_3__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v2), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v2], vlSelf->__Vdlyvval__mem_3__v2);
    }
    if (vlSelf->__Vdlyvset__mem_3__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v3), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v3], vlSelf->__Vdlyvval__mem_3__v3);
    }
    if (vlSelf->__Vdlyvset__mem_3__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v4), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v4], vlSelf->__Vdlyvval__mem_3__v4);
    }
    if (vlSelf->__Vdlyvset__mem_3__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v5), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v5], vlSelf->__Vdlyvval__mem_3__v5);
    }
    if (vlSelf->__Vdlyvset__mem_3__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v6), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v6], vlSelf->__Vdlyvval__mem_3__v6);
    }
    if (vlSelf->__Vdlyvset__mem_3__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v7), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v7], vlSelf->__Vdlyvval__mem_3__v7);
    }
    if (vlSelf->__Vdlyvset__mem_3__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v8), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v8], vlSelf->__Vdlyvval__mem_3__v8);
    }
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__13(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__13\n"); );
    // Body
    if (vlSelf->__Vdlyvset__mem_3__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v9), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v9], vlSelf->__Vdlyvval__mem_3__v9);
    }
    if (vlSelf->__Vdlyvset__mem_3__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v10), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v10], vlSelf->__Vdlyvval__mem_3__v10);
    }
    if (vlSelf->__Vdlyvset__mem_3__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v11), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v11], vlSelf->__Vdlyvval__mem_3__v11);
    }
    if (vlSelf->__Vdlyvset__mem_3__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v12), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v12], vlSelf->__Vdlyvval__mem_3__v12);
    }
    if (vlSelf->__Vdlyvset__mem_3__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v13), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v13], vlSelf->__Vdlyvval__mem_3__v13);
    }
    if (vlSelf->__Vdlyvset__mem_3__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v14), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v14], vlSelf->__Vdlyvval__mem_3__v14);
    }
    if (vlSelf->__Vdlyvset__mem_3__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_3__v15), 
                        vlSelf->__PVT__mem_3[vlSelf->__Vdlyvdim0__mem_3__v15], vlSelf->__Vdlyvval__mem_3__v15);
    }
    if (vlSelf->__Vdlyvset__mem_2__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v0), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v0], vlSelf->__Vdlyvval__mem_2__v0);
    }
    if (vlSelf->__Vdlyvset__mem_2__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v1), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v1], vlSelf->__Vdlyvval__mem_2__v1);
    }
    if (vlSelf->__Vdlyvset__mem_2__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v2), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v2], vlSelf->__Vdlyvval__mem_2__v2);
    }
    if (vlSelf->__Vdlyvset__mem_2__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v3), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v3], vlSelf->__Vdlyvval__mem_2__v3);
    }
    if (vlSelf->__Vdlyvset__mem_2__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v4), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v4], vlSelf->__Vdlyvval__mem_2__v4);
    }
    if (vlSelf->__Vdlyvset__mem_2__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v5), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v5], vlSelf->__Vdlyvval__mem_2__v5);
    }
    if (vlSelf->__Vdlyvset__mem_2__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v6), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v6], vlSelf->__Vdlyvval__mem_2__v6);
    }
    if (vlSelf->__Vdlyvset__mem_2__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v7), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v7], vlSelf->__Vdlyvval__mem_2__v7);
    }
    if (vlSelf->__Vdlyvset__mem_2__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v8), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v8], vlSelf->__Vdlyvval__mem_2__v8);
    }
    if (vlSelf->__Vdlyvset__mem_2__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v9), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v9], vlSelf->__Vdlyvval__mem_2__v9);
    }
    if (vlSelf->__Vdlyvset__mem_2__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v10), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v10], vlSelf->__Vdlyvval__mem_2__v10);
    }
    if (vlSelf->__Vdlyvset__mem_2__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v11), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v11], vlSelf->__Vdlyvval__mem_2__v11);
    }
    if (vlSelf->__Vdlyvset__mem_2__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v12), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v12], vlSelf->__Vdlyvval__mem_2__v12);
    }
    if (vlSelf->__Vdlyvset__mem_2__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v13), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v13], vlSelf->__Vdlyvval__mem_2__v13);
    }
    if (vlSelf->__Vdlyvset__mem_2__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v14), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v14], vlSelf->__Vdlyvval__mem_2__v14);
    }
    if (vlSelf->__Vdlyvset__mem_2__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_2__v15), 
                        vlSelf->__PVT__mem_2[vlSelf->__Vdlyvdim0__mem_2__v15], vlSelf->__Vdlyvval__mem_2__v15);
    }
    if (vlSelf->__Vdlyvset__mem_1__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v0), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v0], vlSelf->__Vdlyvval__mem_1__v0);
    }
    if (vlSelf->__Vdlyvset__mem_1__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v1), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v1], vlSelf->__Vdlyvval__mem_1__v1);
    }
    if (vlSelf->__Vdlyvset__mem_1__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v2), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v2], vlSelf->__Vdlyvval__mem_1__v2);
    }
    if (vlSelf->__Vdlyvset__mem_1__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v3), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v3], vlSelf->__Vdlyvval__mem_1__v3);
    }
    if (vlSelf->__Vdlyvset__mem_1__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v4), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v4], vlSelf->__Vdlyvval__mem_1__v4);
    }
    if (vlSelf->__Vdlyvset__mem_1__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v5), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v5], vlSelf->__Vdlyvval__mem_1__v5);
    }
    if (vlSelf->__Vdlyvset__mem_1__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v6), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v6], vlSelf->__Vdlyvval__mem_1__v6);
    }
    if (vlSelf->__Vdlyvset__mem_1__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v7), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v7], vlSelf->__Vdlyvval__mem_1__v7);
    }
    if (vlSelf->__Vdlyvset__mem_1__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v8), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v8], vlSelf->__Vdlyvval__mem_1__v8);
    }
    if (vlSelf->__Vdlyvset__mem_1__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v9), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v9], vlSelf->__Vdlyvval__mem_1__v9);
    }
    if (vlSelf->__Vdlyvset__mem_1__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v10), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v10], vlSelf->__Vdlyvval__mem_1__v10);
    }
    if (vlSelf->__Vdlyvset__mem_1__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v11), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v11], vlSelf->__Vdlyvval__mem_1__v11);
    }
    if (vlSelf->__Vdlyvset__mem_1__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v12), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v12], vlSelf->__Vdlyvval__mem_1__v12);
    }
    if (vlSelf->__Vdlyvset__mem_1__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v13), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v13], vlSelf->__Vdlyvval__mem_1__v13);
    }
    if (vlSelf->__Vdlyvset__mem_1__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v14), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v14], vlSelf->__Vdlyvval__mem_1__v14);
    }
    if (vlSelf->__Vdlyvset__mem_1__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(vlSelf->__Vdlyvlsb__mem_1__v15), 
                        vlSelf->__PVT__mem_1[vlSelf->__Vdlyvdim0__mem_1__v15], vlSelf->__Vdlyvval__mem_1__v15);
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_trrdcon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_trrdcon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_trrdcon_ready;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level 
        = vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_rdata_fifo_level;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_choose_req_grant;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trccon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trccon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trccon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trccon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_trascon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_trascon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_trascon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_trascon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine0_twtpcon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine1_twtpcon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine3_twtpcon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_bankmachine2_twtpcon_ready;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_count;
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__14(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__14\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_consume 
        = vlSelf->__Vdly__build_soc_coursesimsoc_uart_tx_fifo_consume;
    if (vlSelf->__Vdlyvset__storage__v0) {
        vlSelf->__PVT__storage[vlSelf->__Vdlyvdim0__storage__v0] 
            = vlSelf->__Vdlyvval__storage__v0;
    }
    if (vlSelf->__Vdlyvset__storage_7__v0) {
        vlSelf->__PVT__storage_7[vlSelf->__Vdlyvdim0__storage_7__v0] 
            = vlSelf->__Vdlyvval__storage_7__v0;
    }
    if (vlSelf->__Vdlyvset__storage_6__v0) {
        vlSelf->__PVT__storage_6[vlSelf->__Vdlyvdim0__storage_6__v0][0U] 
            = vlSelf->__Vdlyvval__storage_6__v0[0U];
        vlSelf->__PVT__storage_6[vlSelf->__Vdlyvdim0__storage_6__v0][1U] 
            = vlSelf->__Vdlyvval__storage_6__v0[1U];
        vlSelf->__PVT__storage_6[vlSelf->__Vdlyvdim0__storage_6__v0][2U] 
            = vlSelf->__Vdlyvval__storage_6__v0[2U];
        vlSelf->__PVT__storage_6[vlSelf->__Vdlyvdim0__storage_6__v0][3U] 
            = vlSelf->__Vdlyvval__storage_6__v0[3U];
        vlSelf->__PVT__storage_6[vlSelf->__Vdlyvdim0__storage_6__v0][4U] 
            = vlSelf->__Vdlyvval__storage_6__v0[4U];
    }
    if (vlSelf->__Vdlyvset__storage_5__v0) {
        vlSelf->__PVT__storage_5[vlSelf->__Vdlyvdim0__storage_5__v0] 
            = vlSelf->__Vdlyvval__storage_5__v0;
    }
    if (vlSelf->__Vdlyvset__storage_4__v0) {
        vlSelf->__PVT__storage_4[vlSelf->__Vdlyvdim0__storage_4__v0] 
            = vlSelf->__Vdlyvval__storage_4__v0;
    }
    if (vlSelf->__Vdlyvset__storage_3__v0) {
        vlSelf->__PVT__storage_3[vlSelf->__Vdlyvdim0__storage_3__v0] 
            = vlSelf->__Vdlyvval__storage_3__v0;
    }
    if (vlSelf->__Vdlyvset__storage_2__v0) {
        vlSelf->__PVT__storage_2[vlSelf->__Vdlyvdim0__storage_2__v0] 
            = vlSelf->__Vdlyvval__storage_2__v0;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_postponer_count 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_postponer_count;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_timer_count1 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_timer_count1;
    vlSelf->__PVT__build_soc_coursesimsoc_bus_errors 
        = vlSelf->__Vdly__build_soc_coursesimsoc_bus_errors;
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0 
        = vlSelf->__Vdly__build_soc_coursesimsoc_uart_rx_fifo_level0;
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__18(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__18\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid)) 
               | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_ready)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid 
            = (0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_first 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
                     >> 0x17U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_last 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
                     >> 0x18U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we 
            = (1U & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r);
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_rdport_dat_r 
                            >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid)) 
               | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_ready)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid 
            = (0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_first 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
                     >> 0x17U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_last 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
                     >> 0x18U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we 
            = (1U & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r);
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_rdport_dat_r 
                            >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid)) 
               | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_ready)))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid 
            = (0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_first 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
                     >> 0x17U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_last 
            = (1U & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
                     >> 0x18U));
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we 
            = (1U & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r);
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
            = (0x3fffffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_rdport_dat_r 
                            >> 1U));
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_valid = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_we = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_valid = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_we = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_valid = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_we = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_valid = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_we = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_trigger 
        = vlSelf->__Vdly__build_soc_coursesimsoc_sdram_sequencer_trigger;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_source_payload_data 
        = ((0U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
            ? vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[0U]
            : ((1U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
                ? vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[1U]
                : ((2U == (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_mux))
                    ? vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[2U]
                    : vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_rdata_converter_converter_sink_payload_data[3U])));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0 
        = vlSelf->__Vdly__build_soc_coursesimsoc_uart_tx_fifo_level0;
    vlSelf->__PVT__build_soc_coursesimsoc_wb_sdram_dat_r 
        = ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r))
            ? vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[0U]
            : ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r))
                ? vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[1U]
                : ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_adr_offset_r))
                    ? vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[2U]
                    : vlSelf->__PVT__build_soc_coursesimsoc_data_port_dat_r[3U])));
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
    vlSelf->__PVT__builder_interface0_dat_r = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
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
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 0U;
    if ((1U == (IData)(vlSelf->__PVT__builder_litedramcore_refresher_state))) {
        if (vlSelf->__PVT__build_soc_coursesimsoc_sdram_cmd_ready) {
            vlSelf->__PVT__build_soc_coursesimsoc_sdram_sequencer_start0 = 1U;
        }
    }
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_consume 
        = vlSelf->__Vdly__build_soc_coursesimsoc_uart_rx_fifo_consume;
    if (vlSelf->__Vdlyvset__storage_1__v0) {
        vlSelf->__PVT__storage_1[vlSelf->__Vdlyvdim0__storage_1__v0] 
            = vlSelf->__Vdlyvval__storage_1__v0;
    }
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux 
        = vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_demux;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk 
        = vlSelf->__Vdly__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
            if ((3U == (IData)(vlSelf->__PVT__builder_litedramcore_state))) {
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_sel 
                    = vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_sel;
                vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid = 1U;
            }
        }
    }
    vlSelf->__PVT__build_soc_uptime_cycles = vlSelf->__Vdly__build_soc_uptime_cycles;
    vlSelf->__PVT__build_soc_coursesimsoc_timer_value 
        = vlSelf->__Vdly__build_soc_coursesimsoc_timer_value;
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__20(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__20\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke 
        = (1U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt 
        = (1U & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage) 
                 >> 2U));
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
    vlSelf->__VdfgExtracted_he19d56dc__0 = (IData)(
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
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
}

extern const VlUnpacked<CData/*1:0*/, 32> Vsim__ConstPool__TABLE_hae650ddc_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__21(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__21\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelf->__VdfgExtracted_h79d1452b__0 = (IData)(
                                                   (0x802U 
                                                    == (IData)(vlSelf->__PVT__builder_interface1_adr)));
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_re) {
        vlSelf->__PVT__build_soc_cpu_traffic_capture_storage 
            = (1U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re) {
        vlSelf->__PVT__build_soc_cpu_traffic_reset_storage 
            = (1U & vlSelf->__PVT__builder_interface1_dat_w);
    }
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__build_soc_cpu_traffic_capture_storage = 0U;
        vlSelf->__PVT__build_soc_cpu_traffic_reset_storage = 0U;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U)));
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
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U)));
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
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U)));
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
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_req_ready 
        = (8U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_level));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row_hit 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_row) 
           == (0x1fffU & (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U)));
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
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear = 0U;
    if (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_re) 
         & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_pending_r) 
            >> 1U))) {
        vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear = 1U;
    }
    vlSelf->__VdfgExtracted_h15f8c1a4__0 = ((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we) 
                                            & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelf->__VdfgExtracted_h8adf8caf__0 = ((~ (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_payload_we)) 
                                            & (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_cmd_buffer_sink_valid));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_syncfifo_re));
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__22(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__22\n"); );
    // Body
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cke 
        = ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cke));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_odt 
        = ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage)) 
           || (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_odt));
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
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = 0U;
    if (vlSelf->__VdfgExtracted_hec394a1d__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we 
            = vlSelf->__PVT__builder_interface1_re;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_we = 0U;
    if (vlSelf->__VdfgExtracted_heca0f60c__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_we 
            = vlSelf->__PVT__builder_interface1_re;
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
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h5577355c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsim__ConstPool__TABLE_h932ddeb8_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__23(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__23\n"); );
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
    CData/*7:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_re = 0U;
    if (vlSelf->__VdfgExtracted_h1c91ed7a__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_value_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_re = 0U;
    if (vlSelf->__VdfgExtracted_h1c967e42__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank4_ev_status_we 
            = vlSelf->__PVT__builder_interface1_re;
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
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_we = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re = 0U;
    if (vlSelf->__VdfgExtracted_h79d1452b__0) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_we 
            = vlSelf->__PVT__builder_interface1_re;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_command_issue_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_re = 0U;
    if (vlSelf->__VdfgExtracted_heca0f60c__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_capture0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = 0U;
    if (vlSelf->__VdfgExtracted_hec394a1d__0) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re 
            = vlSelf->__PVT__builder_interface1_we;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_row_col_n_addr_sel)
                       ? (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_pipe_valid_source_payload_addr))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_row_col_n_addr_sel)
                       ? (vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_pipe_valid_source_payload_addr))));
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
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid7 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid6;
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid7 = 0U;
    }
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
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h3f81c38b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hf6e9bf49_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h776dd74f_0;

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__24(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__24\n"); );
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
    // Body
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
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U] 
        = (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[0U] 
           | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[0U] 
              | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[0U] 
                 | vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[0U])));
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U] 
        = (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[1U] 
           | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[1U] 
              | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[1U] 
                 | vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[1U])));
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U] 
        = (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[2U] 
           | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[2U] 
              | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[2U] 
                 | vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[2U])));
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U] 
        = (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read_data[3U] 
           | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read_data[3U] 
              | (vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read_data[3U] 
                 | vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read_data[3U])));
    vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read0 
        = ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel0_read) 
           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel1_read) 
              | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel2_read) 
                 | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_bankmodel3_read))));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_status_status 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable) 
            << 1U) | (0x10U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_tx_fifo_level0)));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_readable)) 
              | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_clear)));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data = 0U;
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_valid = 0U;
    if (vlSelf->__VdfgExtracted_h15f8c1a4__0) {
        if (vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_chunk_valid) {
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we 
                = (0xfU & (IData)((vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r 
                                   >> 0x20U)));
            vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data 
                = (IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_fifo_rdport_dat_r);
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
    vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid1 
        = vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid0;
    if (vlSelf->__PVT__build_soc_coursesimsoc_int_rst) {
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[0U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[1U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[2U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read_data0[3U] = 0U;
        vlSelf->__PVT__build_soc_coursesimsoc_new_banks_read0 = 0U;
        vlSelf->__PVT__builder_litedramcore_new_master_rdata_valid1 = 0U;
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
    if (vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0) {
        vlSelf->__PVT__builder_interface1_dat_w = vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value0;
    }
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
}

VL_INLINE_OPT void Vsim_sim___nba_sequent__TOP__sim__25(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___nba_sequent__TOP__sim__25\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_grant))) {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we;
    } else {
        vlSelf->__PVT__builder_rhs_self11 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self12 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self0 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self2 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we;
    }
    if ((0U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we;
    } else if ((1U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we;
    } else if ((2U == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_grant))) {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we;
    } else {
        vlSelf->__PVT__builder_rhs_self17 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read;
        vlSelf->__PVT__builder_rhs_self18 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write;
        vlSelf->__PVT__builder_t_self3 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas;
        vlSelf->__PVT__builder_t_self5 = vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we;
    }
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_read_available 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read) 
            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid)) 
              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read) 
                  & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid)) 
                 | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_write_available 
        = (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write) 
            & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write) 
               & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid)) 
              | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write) 
                  & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid)) 
                 | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write) 
                    & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((0xeU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid) 
              & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read)) 
                 & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write)))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((0xdU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid) 
               & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read)) 
                  & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write)))) 
              << 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((0xbU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid) 
               & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read)) 
                  & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write)))) 
              << 2U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids 
        = ((7U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_cmd_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid) 
               & ((~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read)) 
                  & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write)))) 
              << 3U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids = 0U;
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((0xeU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_valid) 
              & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_cmd) 
                  & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_ras) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_cas))) 
                         & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_we)))) 
                     | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                 | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_read) 
                     == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                    & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine0_cmd_payload_is_write) 
                       == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((0xdU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_valid) 
               & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_ras) 
                           & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_cas))) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_we)))) 
                      | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_read) 
                      == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine1_cmd_payload_is_write) 
                        == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
              << 1U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((0xbU & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_valid) 
               & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_ras) 
                           & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_cas))) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_we)))) 
                      | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_read) 
                      == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine2_cmd_payload_is_write) 
                        == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
              << 2U));
    vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids 
        = ((7U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_valids)) 
           | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_valid) 
               & (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_ras) 
                           & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_cas))) 
                          & (~ (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_we)))) 
                      | (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_read) 
                      == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_bankmachine3_cmd_payload_is_write) 
                        == (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_choose_req_want_writes))))) 
              << 3U));
    vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_do_read 
        = ((0U != (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_level0)) 
           & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_uart_rx_fifo_syncfifo_re));
    vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_converter_sink_payload_data 
        = (((QData)((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_we)) 
            << 0x20U) | (QData)((IData)(vlSelf->__PVT__build_soc_uncached_port_litedramnativeportconverter_wdata_converter_sink_payload_data)));
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
    if ((1U & (IData)(vlSelf->__PVT__build_soc_coursesimsoc_sdram_storage))) {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_we_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cas_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_cs_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_dfi_p0_ras_n;
    } else {
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_we_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_we_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cas_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cas_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_cs_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_cs_n;
        vlSelf->__PVT__build_soc_coursesimsoc_sdram_master_p0_ras_n 
            = vlSelf->__PVT__build_soc_coursesimsoc_sdram_csr_dfi_p0_ras_n;
    }
    vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 0U;
    if ((1U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
        if ((2U != (IData)(vlSelf->__PVT__builder_wishbone2csr_state))) {
            vlSelf->__PVT__builder_interface1_dat_w_wishbone2csr_next_value_ce0 = 1U;
        }
    }
}
