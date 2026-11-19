// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim_VexRiscv.h"

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_1(Vsim_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset_1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1051 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18309024479330715077ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10380708027241804809ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 843968388551059701ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17461591642217729490ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_value = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6434832350872798799ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13927668128005576642ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15835089606902673378ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16043176656790849018ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_killReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2979842577831988618ull);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5882693207531442083ull);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 791514551659499193ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_tags[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1496947967002838568ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 118662737165963126ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4672113670029164530ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11385075142690398710ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12117403254416502552ull);
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14751115278605657548ull);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17994393498983642924ull);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 228911718855363074ull);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5991428940826502669ull);
    vlSelf->dataCache_1__DOT____VdfgRegularize_h4c3f712f_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15499434690796779075ull);
    vlSelf->__Vdly__IBusCachedPlugin_rspCounter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17583555634548939323ull);
    vlSelf->__Vdly___zz_dBus_cmd_ready = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13573757867825136533ull);
    vlSelf->__Vdly__DBusCachedPlugin_rspCounter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1642865769509331677ull);
    vlSelf->__Vdly___zz_iBusWishbone_ADR = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3493390080420454076ull);
    vlSelf->__Vdly__CsrPlugin_mstatus_MIE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18135893772401243036ull);
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15240623420380068361ull);
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13241526340376875157ull);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14090595012948818322ull);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17446769321907330618ull);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18397168399730840357ull);
    vlSelf->__Vdly__dataCache_1__DOT__loader_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5990814911345360567ull);
    vlSelf->__VdlyVal__RegFilePlugin_regFile__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3957623211695051818ull);
    vlSelf->__VdlyDim0__RegFilePlugin_regFile__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3084040502333740183ull);
    vlSelf->__VdlySet__RegFilePlugin_regFile__v0 = 0;
    vlSelf->__VdlyVal__IBusCachedPlugin_cache__DOT__banks_0__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18269450633766032961ull);
    vlSelf->__VdlyDim0__IBusCachedPlugin_cache__DOT__banks_0__v0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4202199102981472952ull);
    vlSelf->__VdlySet__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    vlSelf->__VdlyVal__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17457909257425033476ull);
    vlSelf->__VdlyDim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3811726833289273462ull);
    vlSelf->__VdlySet__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    vlSelf->__VdlyVal__dataCache_1__DOT__ways_0_tags__v0 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5811650217557142880ull);
    vlSelf->__VdlyDim0__dataCache_1__DOT__ways_0_tags__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17900002978629523758ull);
    vlSelf->__VdlySet__dataCache_1__DOT__ways_0_tags__v0 = 0;
    vlSelf->__VdlyVal__dataCache_1__DOT__ways_0_data_symbol2__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17133033910215178933ull);
    vlSelf->__VdlyDim0__dataCache_1__DOT__ways_0_data_symbol2__v0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12509451006115895702ull);
    vlSelf->__VdlySet__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    vlSelf->__VdlyVal__dataCache_1__DOT__ways_0_data_symbol0__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17978341733733695950ull);
    vlSelf->__VdlyDim0__dataCache_1__DOT__ways_0_data_symbol0__v0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10301413319686830083ull);
    vlSelf->__VdlySet__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    vlSelf->__VdlyVal__dataCache_1__DOT__ways_0_data_symbol1__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 345513109110822901ull);
    vlSelf->__VdlyDim0__dataCache_1__DOT__ways_0_data_symbol1__v0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5139025180793177959ull);
    vlSelf->__VdlySet__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    vlSelf->__VdlyVal__dataCache_1__DOT__ways_0_data_symbol3__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 176392154940159140ull);
    vlSelf->__VdlyDim0__dataCache_1__DOT__ways_0_data_symbol3__v0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9585716651219540506ull);
    vlSelf->__VdlySet__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
}

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_0(Vsim_VexRiscv* vlSelf);

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset(Vsim_VexRiscv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim_VexRiscv___ctor_var_reset_0(vlSelf);
    Vsim_VexRiscv___ctor_var_reset_1(vlSelf);
}
