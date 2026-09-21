// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[0].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[0].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__rd_req_queue_pop__BRA__0__KET__)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__0__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[1].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[1].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__1__KET____DOT__pending_size__decr)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__1__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[2].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[2].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__2__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__2__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__2__KET____DOT__pending_size__decr)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__2__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[3].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[3].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__3__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__3__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__3__KET____DOT__pending_size__decr)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__3__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[4].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[4].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__4__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__4__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__4__KET____DOT__pending_size__decr)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__4__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[5].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[5].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__5__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__5__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__5__KET____DOT__pending_size__decr)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__5__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[6].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[6].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__6__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__6__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__6__KET____DOT__pending_size__decr)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__6__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}

void Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__rd_req_queue__0(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                          Vvortex_afu_shim_VX_fifo_queue__D2b___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__rd_req_queue__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0;
    QData/*42:0*/ __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 0;
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
            if (VL_UNLIKELY(((1U & (~ ((~ ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__rd_req_queue_push) 
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:129: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[7].rd_req_queue: %t: runtime error: incrementing full queue\n",0,
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
                                           & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__rd_req_queue_push)))) 
                                       | (~ (IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r)))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_fifo_queue.sv:130: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.g_req_xbar_data_out[7].rd_req_queue: %t: runtime error: decrementing empty queue\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_fifo_queue.sv", 130, "");
            }
        }
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__rd_req_queue_push) {
        __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = (0x000007ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__7__KET____DOT__out_buf__data_out[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__req_xbar__DOT____Vcellout__g_single_input__DOT__g_out_buf__BRA__7__KET____DOT__out_buf__data_out[0U]))));
        __VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0 
            = vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r;
        __VdlySet__g_depth_n__DOT__dp_ram__DOT__ram__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 0U;
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__full_r = 0U;
        vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__empty_r = 1U;
    } else {
        __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r) 
                              + VL_EXTENDS_II(5,2, (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__g_size_gt2__DOT__delta))));
        vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__wr_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__rd_req_queue_push)));
        vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r = 
            (0x0000001fU & ((IData)(vlSelfRef.__PVT__g_depth_n__DOT__rd_ptr_r) 
                            + (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT____Vcellinp__g_req_xbar_data_out__BRA__7__KET____DOT__pending_size__decr)));
        if (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__avs_adapter__DOT__g_req_xbar_data_out__BRA__7__KET____DOT__rd_req_queue_push) {
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
        vlSelfRef.__PVT__g_depth_n__DOT__dp_ram__DOT__ram[__VdlyDim0__g_depth_n__DOT__dp_ram__DOT__ram__v0] 
            = __VdlyVal__g_depth_n__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelfRef.__PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r 
        = __Vdly__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
}
