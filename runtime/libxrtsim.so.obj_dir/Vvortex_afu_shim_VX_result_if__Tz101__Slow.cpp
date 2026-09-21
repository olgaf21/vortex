// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_result_if__Tz101___ctor_var_reset(Vvortex_afu_shim_VX_result_if__Tz101* vlSelf);

Vvortex_afu_shim_VX_result_if__Tz101::Vvortex_afu_shim_VX_result_if__Tz101() = default;
Vvortex_afu_shim_VX_result_if__Tz101::~Vvortex_afu_shim_VX_result_if__Tz101() = default;

void Vvortex_afu_shim_VX_result_if__Tz101::ctor(Vvortex_afu_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvortex_afu_shim_VX_result_if__Tz101___ctor_var_reset(this);
}

void Vvortex_afu_shim_VX_result_if__Tz101::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvortex_afu_shim_VX_result_if__Tz101::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
