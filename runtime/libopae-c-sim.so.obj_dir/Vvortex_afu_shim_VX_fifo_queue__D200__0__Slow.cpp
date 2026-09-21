// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

VL_ATTR_COLD void Vvortex_afu_shim_VX_fifo_queue__D200___ctor_var_reset(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___ctor_var_reset\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649745423432011937ull);
    vlSelf->pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10750680354736310321ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->data_in, __VscopeHash, 10574596302020702150ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->data_out, __VscopeHash, 11675680895196038875ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->__PVT__alm_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5684393459036659170ull);
    vlSelf->__PVT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->__PVT__alm_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7209072648503991804ull);
    vlSelf->__PVT__size = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7387879788838415890ull);
    vlSelf->__PVT__g_depth_n__DOT__rd_ptr_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 97769346151497893ull);
    vlSelf->__PVT__g_depth_n__DOT__wr_ptr_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 260583819669915817ull);
    vlSelf->__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1957360947163659945ull);
    vlSelf->__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4679613189418581711ull);
    vlSelf->__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14475302101929474721ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__Vi0], __VscopeHash, 257520981575873908ull);
    }
}
