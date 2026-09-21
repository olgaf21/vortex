// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__0__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__0__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[0U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[0].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[0U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[0].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[0U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[0U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[0U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[0U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[0U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[0U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[0U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[0U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[0U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[0U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[0U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[0U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[0U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[0U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[0U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[0U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[0U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[0U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[0U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[0U])))));
        if (vlSymsp->TOP.avs_readdatavalid[0U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__1__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__1__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[1U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[1].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[1U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[1].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[1U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[1U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[1U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[1U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[1U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[1U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[1U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[1U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[1U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[1U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[1U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[1U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[1U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[1U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[1U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[1U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[1U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[1U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[1U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[1U])))));
        if (vlSymsp->TOP.avs_readdatavalid[1U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__2__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__2__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[2U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[2].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[2U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[2].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[2U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[2U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[2U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[2U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[2U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[2U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[2U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[2U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[2U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[2U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[2U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[2U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[2U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[2U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[2U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[2U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[2U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[2U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[2U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[2U])))));
        if (vlSymsp->TOP.avs_readdatavalid[2U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__3__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__3__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[3U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[3].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[3U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[3].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[3U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[3U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[3U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[3U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[3U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[3U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[3U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[3U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[3U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[3U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[3U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[3U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[3U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[3U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[3U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[3U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[3U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[3U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[3U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[3U])))));
        if (vlSymsp->TOP.avs_readdatavalid[3U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__4__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__4__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[4U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[4].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[4U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[4].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[4U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[4U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[4U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[4U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[4U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[4U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[4U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[4U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[4U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[4U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[4U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[4U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[4U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[4U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[4U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[4U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[4U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[4U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[4U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[4U])))));
        if (vlSymsp->TOP.avs_readdatavalid[4U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__5__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__5__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[5U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[5].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[5U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[5].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[5U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[5U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[5U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[5U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[5U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[5U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[5U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[5U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[5U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[5U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[5U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[5U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[5U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[5U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[5U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[5U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[5U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[5U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[5U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[5U])))));
        if (vlSymsp->TOP.avs_readdatavalid[5U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__6__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__6__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[6U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[6].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[6U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[6].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[6U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[6U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[6U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[6U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[6U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[6U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[6U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[6U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[6U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[6U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[6U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[6U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[6U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[6U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[6U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[6U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[6U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[6U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[6U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[6U])))));
        if (vlSymsp->TOP.avs_readdatavalid[6U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__7__KET____DOT__rsp_queue__0(Vvortex_afu_shim_VX_fifo_queue__D200* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D200___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_rsp_xbar_data_in__BRA__7__KET____DOT__rsp_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    VlWide<16>/*511:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0);
    CData/*4:0*/ __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
    // Body
    __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (vlSymsp->TOP.avs_readdatavalid[7U] 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[7].rsp_queue: %t: runtime error: incrementing full queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 129, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr) 
                                           & (~ vlSymsp->TOP.avs_readdatavalid[7U]))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_rsp_xbar_data_in[7].rsp_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.avs_readdatavalid[7U]) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSymsp->TOP.avs_readdata[7U][0U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSymsp->TOP.avs_readdata[7U][1U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSymsp->TOP.avs_readdata[7U][2U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSymsp->TOP.avs_readdata[7U][3U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSymsp->TOP.avs_readdata[7U][4U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSymsp->TOP.avs_readdata[7U][5U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSymsp->TOP.avs_readdata[7U][6U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSymsp->TOP.avs_readdata[7U][7U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSymsp->TOP.avs_readdata[7U][8U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSymsp->TOP.avs_readdata[7U][9U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U] 
            = vlSymsp->TOP.avs_readdata[7U][10U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U] 
            = vlSymsp->TOP.avs_readdata[7U][11U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U] 
            = vlSymsp->TOP.avs_readdata[7U][12U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U] 
            = vlSymsp->TOP.avs_readdata[7U][13U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U] 
            = vlSymsp->TOP.avs_readdata[7U][14U];
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U] 
            = vlSymsp->TOP.avs_readdata[7U][15U];
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr)));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + vlSymsp->TOP.avs_readdatavalid[7U]));
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, 
                                              ((((~ vlSymsp->TOP.avs_readdatavalid[7U]) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr) 
                                                  ^ vlSymsp->TOP.avs_readdatavalid[7U])))));
        if (vlSymsp->TOP.avs_readdatavalid[7U]) {
            if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr)))) {
                if ((0x1fU == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 1U;
                }
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 0U;
            }
        } else if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr) {
            vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r))) {
                vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
            }
        }
    }
    if (__VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0) {
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][0U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][1U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][2U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][3U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][4U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][5U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][6U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][7U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][8U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][9U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][10U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[10U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][11U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[11U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][12U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[12U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][13U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[13U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][14U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[14U];
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0][15U] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0[15U];
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}
