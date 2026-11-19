// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VRTLSIM_SHIM__DPI_H_
#define VERILATED_VRTLSIM_SHIM__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/dpi/dpi_util.vh:30:30
    extern void dpi_assert(int inst, svLogic cond, int delay);
    // DPI import at /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/rtl/core/VX_alu_muldiv.sv:225:34
    extern void dpi_idiv(svLogic enable, svLogic is_signed, int a, int b, int* quotient, int* remainder);
    // DPI import at /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/rtl/core/VX_alu_muldiv.sv:58:34
    extern void dpi_imul(svLogic enable, svLogic is_signed_a, svLogic is_signed_b, int a, int b, int* resultl, int* resulth);
    // DPI import at /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/rtl/core/VX_alu_muldiv.sv:226:34
    extern void dpi_ldiv(svLogic enable, svLogic is_signed, long long a, long long b, long long* quotient, long long* remainder);
    // DPI import at /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/rtl/core/VX_alu_muldiv.sv:59:34
    extern void dpi_lmul(svLogic enable, svLogic is_signed_a, svLogic is_signed_b, long long a, long long b, long long* resultl, long long* resulth);
    // DPI import at /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/dpi/dpi_util.vh:29:29
    extern int dpi_register();
    // DPI import at /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/dpi/dpi_util.vh:32:30
    extern void dpi_trace(int level, const char* format);

#ifdef __cplusplus
}
#endif

#endif  // guard
