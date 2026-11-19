// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__N4_D4_T4_H_
#define VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__N4_D4_T4_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_ready;
    CData/*0:0*/ rsp_ready;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4();
    ~Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
