// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_RESULT_IF__TZ55_H_
#define VERILATED_VRTLSIM_SHIM_VX_RESULT_IF__TZ55_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_result_if__Tz55 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ready;
    VlWide<6>/*180:0*/ data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_result_if__Tz55();
    ~Vrtlsim_shim_VX_result_if__Tz55();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_result_if__Tz55);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
