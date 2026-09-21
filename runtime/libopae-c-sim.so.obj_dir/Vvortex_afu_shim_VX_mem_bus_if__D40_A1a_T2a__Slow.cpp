// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a___ctor_var_reset(Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a* vlSelf);

Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a::Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a() = default;
Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a::~Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a() = default;

void Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a::ctor(Vvortex_afu_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a___ctor_var_reset(this);
}

void Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
