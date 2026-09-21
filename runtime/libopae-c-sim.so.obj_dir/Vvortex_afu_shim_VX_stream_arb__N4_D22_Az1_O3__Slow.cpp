// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3___ctor_var_reset(Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3* vlSelf);

Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3::Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3() = default;
Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3::~Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3() = default;

void Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3::ctor(Vvortex_afu_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3___ctor_var_reset(this);
}

void Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvortex_afu_shim_VX_stream_arb__N4_D22_Az1_O3::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
