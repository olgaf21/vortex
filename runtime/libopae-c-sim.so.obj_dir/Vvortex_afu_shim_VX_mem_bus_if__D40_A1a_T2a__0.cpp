// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__cci_vx_mem_arb_in_if__BRA__1__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__cci_vx_mem_arb_in_if__BRA__1__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__mem_arb__DOT__req_ready_out) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_1));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
