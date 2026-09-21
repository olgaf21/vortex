// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D40_T5___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET____0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[0U] = 
        (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_byteen_w) 
          << 9U) | ((0x000001fcU & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__req_arb__DOT____Vcellout__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[0U] 
                                    << 2U)) | ((2U 
                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__req_arb__DOT____Vcellout__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[10U] 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__req_arb__DOT____Vcellout__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[9U] 
                                                     >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[1U] = 
        (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_byteen_w) 
          >> 0x00000017U) | ((IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_byteen_w 
                                      >> 0x00000020U)) 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[2U] = 
        (((IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_byteen_w 
                   >> 0x00000020U)) >> 0x00000017U) 
         | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[0U] 
            << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[3U] = 
        ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[0U] 
          >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[1U] 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[4U] = 
        ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[1U] 
          >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[2U] 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[5U] = 
        ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[2U] 
          >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[3U] 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[6U] = 
        ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[3U] 
          >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[4U] 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[7U] = 
        ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[4U] 
          >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[5U] 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[8U] = 
        ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[5U] 
          >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[6U] 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[9U] = 
        ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[6U] 
          >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[7U] 
                             << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[10U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[7U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[8U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[11U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[8U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[9U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[12U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[9U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[10U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[13U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[10U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[11U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[14U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[11U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[12U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[15U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[12U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[13U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[16U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[13U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[14U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[17U] 
        = ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[14U] 
            >> 0x00000017U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[15U] 
                               << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[18U] 
        = ((((0x78000000U & (vlSelfRef.req_data[0U] 
                             << 0x0000001bU)) | (0x07ffffffU 
                                                 & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__req_arb__DOT____Vcellout__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[10U] 
                                                     << 0x00000018U) 
                                                    | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__req_arb__DOT____Vcellout__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[9U] 
                                                       >> 8U)))) 
            << 9U) | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_mem_bus_out_nc__BRA__0__KET____DOT__core_req_nc_arb_data_w[15U] 
                      >> 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[19U] 
        = ((0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[19U]) 
           | (((0x78000000U & (vlSelfRef.req_data[0U] 
                               << 0x0000001bU)) | (0x07ffffffU 
                                                   & ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__req_arb__DOT____Vcellout__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[10U] 
                                                       << 0x00000018U) 
                                                      | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__req_arb__DOT____Vcellout__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_out[9U] 
                                                         >> 8U)))) 
              >> 0x00000017U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[19U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[19U]) 
           | (0xfffffe00U & (vlSelfRef.req_data[0U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[20U] 
        = (((0x000001e0U & (vlSelfRef.req_data[1U] 
                            << 5U)) | (vlSelfRef.req_data[0U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[1U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[21U] 
        = (((0x000001e0U & (vlSelfRef.req_data[2U] 
                            << 5U)) | (vlSelfRef.req_data[1U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[2U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[22U] 
        = (((0x000001e0U & (vlSelfRef.req_data[3U] 
                            << 5U)) | (vlSelfRef.req_data[2U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[3U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[23U] 
        = (((0x000001e0U & (vlSelfRef.req_data[4U] 
                            << 5U)) | (vlSelfRef.req_data[3U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[4U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[24U] 
        = (((0x000001e0U & (vlSelfRef.req_data[5U] 
                            << 5U)) | (vlSelfRef.req_data[4U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[5U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[25U] 
        = (((0x000001e0U & (vlSelfRef.req_data[6U] 
                            << 5U)) | (vlSelfRef.req_data[5U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[6U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[26U] 
        = (((0x000001e0U & (vlSelfRef.req_data[7U] 
                            << 5U)) | (vlSelfRef.req_data[6U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[7U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[27U] 
        = (((0x000001e0U & (vlSelfRef.req_data[8U] 
                            << 5U)) | (vlSelfRef.req_data[7U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[8U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[28U] 
        = (((0x000001e0U & (vlSelfRef.req_data[9U] 
                            << 5U)) | (vlSelfRef.req_data[8U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[9U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[29U] 
        = (((0x000001e0U & (vlSelfRef.req_data[10U] 
                            << 5U)) | (vlSelfRef.req_data[9U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[10U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[30U] 
        = (((0x000001e0U & (vlSelfRef.req_data[11U] 
                            << 5U)) | (vlSelfRef.req_data[10U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[11U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[31U] 
        = (((0x000001e0U & (vlSelfRef.req_data[12U] 
                            << 5U)) | (vlSelfRef.req_data[11U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[12U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[32U] 
        = (((0x000001e0U & (vlSelfRef.req_data[13U] 
                            << 5U)) | (vlSelfRef.req_data[12U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[13U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[33U] 
        = (((0x000001e0U & (vlSelfRef.req_data[14U] 
                            << 5U)) | (vlSelfRef.req_data[13U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[14U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[34U] 
        = (((0x000001e0U & (vlSelfRef.req_data[15U] 
                            << 5U)) | (vlSelfRef.req_data[14U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[15U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[35U] 
        = (((0x000001e0U & (vlSelfRef.req_data[16U] 
                            << 5U)) | (vlSelfRef.req_data[15U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[16U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[36U] 
        = (((0x000001e0U & (vlSelfRef.req_data[17U] 
                            << 5U)) | (vlSelfRef.req_data[16U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[17U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[37U] 
        = (((0x000001e0U & (vlSelfRef.req_data[18U] 
                            << 5U)) | (vlSelfRef.req_data[17U] 
                                       >> 0x0000001bU)) 
           | (0xfffffe00U & (vlSelfRef.req_data[18U] 
                             << 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50[38U] 
        = (0x000000ffU & ((0x000001e0U & (vlSelfRef.req_data[19U] 
                                          << 5U)) | 
                          (vlSelfRef.req_data[18U] 
                           >> 0x0000001bU)));
}

std::string VL_TO_STRING(const Vrtlsim_shim_VX_mem_bus_if__D40_T5* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D40_T5::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
