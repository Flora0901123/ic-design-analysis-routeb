// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D40_T5_H_
#define VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D40_T5_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_mem_bus_if__D40_T5 final {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<17>/*516:0*/ rsp_data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_mem_bus_if__D40_T5();
    ~Vrtlsim_shim_VX_mem_bus_if__D40_T5();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_mem_bus_if__D40_T5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
