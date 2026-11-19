// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

extern "C" void dpi_trace(int level, const char* format);

void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_trace_TOP____024unit(IData/*31:0*/ level, const std::string &format) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrtlsim_shim___024unit____Vdpiimwrap_dpi_trace_TOP____024unit\n"); );
    // Body
    int level__Vcvt;
    level__Vcvt = level;
    const char* format__Vcvt;
    format__Vcvt = format.c_str();
    dpi_trace(level__Vcvt, format__Vcvt);
}
