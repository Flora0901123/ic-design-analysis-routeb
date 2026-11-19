// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_KMU_BUS_IF_H_
#define VERILATED_VRTLSIM_SHIM_VX_KMU_BUS_IF_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_kmu_bus_if final {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<11>/*336:0*/ data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_kmu_bus_if();
    ~Vrtlsim_shim_VX_kmu_bus_if();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_kmu_bus_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
