// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D8_T5_H_
#define VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D8_T5_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_mem_bus_if__D8_T5 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_valid;
    CData/*0:0*/ req_ready;
    CData/*0:0*/ rsp_valid;
    CData/*0:0*/ rsp_ready;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_961;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1097;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1099;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1100;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1101;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_mem_bus_if__D8_T5();
    ~Vrtlsim_shim_VX_mem_bus_if__D8_T5();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_mem_bus_if__D8_T5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
