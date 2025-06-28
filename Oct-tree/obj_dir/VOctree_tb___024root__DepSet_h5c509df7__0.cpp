// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOctree_tb.h for the primary calling header

#include "VOctree_tb__pch.h"
#include "VOctree_tb___024root.h"

VL_ATTR_COLD void VOctree_tb___024root___eval_initial__TOP(VOctree_tb___024root* vlSelf);
VlCoroutine VOctree_tb___024root___eval_initial__TOP__Vtiming__0(VOctree_tb___024root* vlSelf);
VlCoroutine VOctree_tb___024root___eval_initial__TOP__Vtiming__1(VOctree_tb___024root* vlSelf);

void VOctree_tb___024root___eval_initial(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_initial\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VOctree_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VOctree_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VOctree_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__clk__0 
        = vlSelfRef.Octree_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__rst_n__0 
        = vlSelfRef.Octree_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready__0 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__search_done__0 
        = vlSelfRef.Octree_tb__DOT__search_done;
}

VL_INLINE_OPT VlCoroutine VOctree_tb___024root___eval_initial__TOP__Vtiming__0(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Octree_tb__DOT__clk = 0U;
    vlSelfRef.Octree_tb__DOT__rst_n = 0U;
    vlSelfRef.Octree_tb__DOT__pos_encode = 0U;
    vlSelfRef.Octree_tb__DOT__feature_in = 0ULL;
    vlSelfRef.Octree_tb__DOT__ctrl = 0U;
    vlSelfRef.Octree_tb__DOT__tree_num = 1U;
    vlSelfRef.Octree_tb__DOT__cam_pos = 0ULL;
    vlSelfRef.Octree_tb__DOT__dist_max = 0U;
    vlSelfRef.Octree_tb__DOT__s = 0U;
    vlSelfRef.Octree_tb__DOT__in_valid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "sim/Octree_tb.sv", 
                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Octree_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "sim/Octree_tb.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Octree_tb__DOT__ctrl = 1U;
    while ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready)))) {
        co_await vlSelfRef.__VtrigSched_hcde10a95__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( Octree_tb.u_Octree.searcher_inst.u_tree_search.out_ready)", 
                                                             "sim/Octree_tb.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "sim/Octree_tb.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Octree_tb__DOT__out_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "sim/Octree_tb.sv", 
                                         133);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Octree_tb__DOT__out_valid = 0U;
    while ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__search_done)))) {
        co_await vlSelfRef.__VtrigSched_h0659bcd1__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( Octree_tb.search_done)", 
                                                             "sim/Octree_tb.sv", 
                                                             136);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("Feature Out: %x\n",0,64,((5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))
                                            ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q
                                            : 0ULL));
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "sim/Octree_tb.sv", 
                                         160);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("sim/Octree_tb.sv", 161, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VOctree_tb___024root___eval_initial__TOP__Vtiming__1(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/Octree_tb.sv", 
                                             105);
        vlSelfRef.Octree_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__clk)));
    }
}

void VOctree_tb___024root___act_comb__TOP__0(VOctree_tb___024root* vlSelf);

void VOctree_tb___024root___eval_act(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_act\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1cULL & vlSelfRef.__VactTriggered.word(0U))) {
        VOctree_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlWide<10>/*319:0*/ VOctree_tb__ConstPool__CONST_hcc7efbb3_0;

VL_INLINE_OPT void VOctree_tb___024root___act_comb__TOP__0(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___act_comb__TOP__0\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk7__DOT__i = 8U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__dist_max))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_s_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__s))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre));
    vlSelfRef.Octree_tb__DOT__mem_sram_GWEN = ((0U 
                                                == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg)) 
                                               || ((1U 
                                                    == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                                    ? 
                                                   ((1U 
                                                     & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n))) 
                                                    || ((0U 
                                                         == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                                        || ((1U 
                                                             != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                                            || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_GWEN))))
                                                    : 
                                                   ((2U 
                                                     != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg)) 
                                                    || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_GWEN))));
    vlSelfRef.Octree_tb__DOT__mem_sram_CEN = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg)) 
                                              || ((1U 
                                                   == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                                   ? 
                                                  ((1U 
                                                    & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n))) 
                                                   || ((0U 
                                                        == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                                        ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN)
                                                        : 
                                                       ((1U 
                                                         != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                                        || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN))))
                                                   : 
                                                  ((2U 
                                                    != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg)) 
                                                   || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_CEN))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
        = (0xffff000000000000ULL & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos);
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk8__DOT__i = 8U;
        if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                    ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q
                    : 0ULL);
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q = 0ULL;
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data 
            = (0xffffU & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q 
                                  >> (0x3fU & ((VL_SHIFTL_III(6,32,32, 
                                                              ((3U 
                                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address)) 
                                                               - (IData)(1U)), 4U) 
                                                - (IData)(1U)) 
                                               - (IData)(0xfU))))));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid 
            = (0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid 
            = (0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data 
            = (0xffffU & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q 
                                  >> (0x3fU & ((VL_SHIFTL_III(6,32,32, 
                                                              ((3U 
                                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address)) 
                                                               - (IData)(1U)), 4U) 
                                                - (IData)(1U)) 
                                               - (IData)(0xfU))))));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid 
            = (0U == ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data) 
                      & (~ VL_SHIFTL_IIQ(16,16,64, (IData)(1U), 
                                         VL_SHIFTL_QQI(64,64,32, 
                                                       ((4U 
                                                         >= 
                                                         (7U 
                                                          & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                             >> 0xfU)))
                                                         ? 
                                                        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                                                        [
                                                        (7U 
                                                         & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                            >> 0xfU))]
                                                         : 0ULL), 1U)))));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid 
            = (0U == ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data) 
                      & (~ VL_SHIFTL_IIQ(16,16,64, (IData)(1U), 
                                         (1ULL + VL_SHIFTL_QQI(64,64,32, 
                                                               ((4U 
                                                                 >= 
                                                                 (7U 
                                                                  & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                     >> 0xfU)))
                                                                 ? 
                                                                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                                                                [
                                                                (7U 
                                                                 & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                    >> 0xfU))]
                                                                 : 0ULL), 1U))))));
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q = 0ULL;
    }
    if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                    = ((0xffff000000000000ULL & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos) 
                       | ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                           ? (((QData)((IData)((((IData)(
                                                         (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                          >> 0x10U)) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                              >> 0x20U)))))) 
                               << 0x10U) | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                       >> 0x30U))))))
                           : (((QData)((IData)((((IData)(
                                                         (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                          >> 0x10U)) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & (IData)(
                                                             (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                              >> 0x20U)))))) 
                               << 0x10U) | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                       >> 0x30U))))))));
            }
        }
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_temp = 0U;
    if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                = ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                             ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                 ? 0xeU : 0U) : ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                                  ? 0xdU
                                                  : 0U)));
            if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                        = ((0xffff0000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]) 
                           | (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 0xcU : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                    = ((0xffff0000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]) 
                       | (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 0xbU : 0U);
            }
        } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                    ? 0xaU : 0U);
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                = ((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]) 
                   | ((IData)((((QData)((IData)((((IData)(
                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                           >> 0x10U)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                               >> 0x20U)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                        >> 0x30U))))))) 
                      << 0x10U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                = (((IData)((((QData)((IData)((((IData)(
                                                        (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                         >> 0x10U)) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & (IData)(
                                                            (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                             >> 0x20U)))))) 
                              << 0x10U) | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                      >> 0x30U))))))) 
                    >> 0x10U) | ((IData)(((((QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                       >> 0x10U)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                           >> 0x20U)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                         >> 0x30U)))))) 
                                          >> 0x20U)) 
                                 << 0x10U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] 
                = (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q));
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                    ? 9U : 0U);
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                = ((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]) 
                   | ((IData)((((QData)((IData)((((IData)(
                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                           >> 0x10U)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                               >> 0x20U)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                        >> 0x30U))))))) 
                      << 0x10U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                = (((IData)((((QData)((IData)((((IData)(
                                                        (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                         >> 0x10U)) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & (IData)(
                                                            (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                             >> 0x20U)))))) 
                              << 0x10U) | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                      >> 0x30U))))))) 
                    >> 0x10U) | ((IData)(((((QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                       >> 0x10U)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & (IData)(
                                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                           >> 0x20U)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                         >> 0x30U)))))) 
                                          >> 0x20U)) 
                                 << 0x10U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] 
                = (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q));
        }
    } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 8U : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                    = ((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]) 
                       | ((IData)((((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                               >> 0x10U)) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & (IData)(
                                                                  (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                   >> 0x20U)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                            >> 0x30U))))))) 
                          << 0x10U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                    = (((IData)((((QData)((IData)((
                                                   ((IData)(
                                                            (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                             >> 0x10U)) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & (IData)(
                                                                (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                 >> 0x20U)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                          >> 0x30U))))))) 
                        >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                           >> 0x10U)) 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                               >> 0x20U)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                             >> 0x30U)))))) 
                                              >> 0x20U)) 
                                     << 0x10U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] 
                    = (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 7U : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                    = ((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]) 
                       | ((IData)((((QData)((IData)(
                                                    (((IData)(
                                                              (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                               >> 0x10U)) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & (IData)(
                                                                  (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                   >> 0x20U)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                            >> 0x30U))))))) 
                          << 0x10U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                    = (((IData)((((QData)((IData)((
                                                   ((IData)(
                                                            (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                             >> 0x10U)) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & (IData)(
                                                                (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                 >> 0x20U)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                          >> 0x30U))))))) 
                        >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                           >> 0x10U)) 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                               >> 0x20U)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                                                                             >> 0x30U)))))) 
                                              >> 0x20U)) 
                                     << 0x10U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] 
                    = (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q));
            }
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                    ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 6U : 0U) : ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                       ? 5U : 0U));
        }
    } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
            = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                    ? 4U : 0U) : ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                   ? 3U : 0U));
        if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_temp 
                = (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]);
        }
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
            = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                    ? 2U : 0U) : ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod)
                                   ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                       ? 1U : 0U) : 0U));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr 
        = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
            ? ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))
                ? ((0U == (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                 >> 0xfU))) ? (1ULL 
                                               + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                               [0U])
                    : ((1U == (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                     >> 0xfU))) ? (1ULL 
                                                   + 
                                                   (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                    [0U] 
                                                    + 
                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                  (1ULL 
                                                                   + 
                                                                   vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                                   [1U]), 3U)))
                        : ((2U == (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                         >> 0xfU)))
                            ? (0x48ULL + (((1ULL + 
                                            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                            [0U]) ^ 
                                           (0x2880e3ULL 
                                            * (1ULL 
                                               + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                               [1U]))) 
                                          ^ (0xc5279ULL 
                                             * (1ULL 
                                                + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                [2U]))))
                            : ((3U == (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                             >> 0xfU)))
                                ? (0x48ULL + ((((1ULL 
                                                 + 
                                                 vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                 [0U]) 
                                                ^ (0x2880e3ULL 
                                                   * 
                                                   (1ULL 
                                                    + 
                                                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                    [1U]))) 
                                               ^ (0xc5279ULL 
                                                  * 
                                                  (1ULL 
                                                   + 
                                                   vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                   [2U]))) 
                                              ^ (0x3b0349ULL 
                                                 * 
                                                 (1ULL 
                                                  + 
                                                  vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                  [3U]))))
                                : ((4U == (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                 >> 0xfU)))
                                    ? (0x48ULL + ((
                                                   (((1ULL 
                                                      + 
                                                      vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                      [0U]) 
                                                     ^ 
                                                     (0x2880e3ULL 
                                                      * 
                                                      (1ULL 
                                                       + 
                                                       vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                       [1U]))) 
                                                    ^ 
                                                    (0xc5279ULL 
                                                     * 
                                                     (1ULL 
                                                      + 
                                                      vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                      [2U]))) 
                                                   ^ 
                                                   (0x3b0349ULL 
                                                    * 
                                                    (1ULL 
                                                     + 
                                                     vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                     [3U]))) 
                                                  ^ 
                                                  (0x200a07ULL 
                                                   * 
                                                   (1ULL 
                                                    + 
                                                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                    [4U]))))
                                    : 0ULL))))) : 0ULL)
            : 0ULL);
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_A 
        = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
            ? 0ULL : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
                       ? ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))
                           ? ((QData)((IData)((0x7ffU 
                                               & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr)))) 
                              + (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt)))
                           : vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_for_sram)
                       : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
                           ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A
                           : 0ULL)));
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 0x19U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0xfffff8U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 0x16U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0xffffc7U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0) 
                  << 3U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 0x13U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0xfffe3fU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0) 
                  << 6U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 0x10U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0xfff1ffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0) 
                  << 9U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 0xdU)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0xff8fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0) 
                  << 0xcU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 0xaU)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0xfc7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0) 
                  << 0xfU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 7U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0xe3ffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0) 
                  << 0x12U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                             >> 4U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
            = ((0x1fffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0) 
                  << 0x15U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 0x19U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0xfffff8U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 0x16U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0xffffc7U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0) 
                  << 3U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 0x13U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0xfffe3fU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0) 
                  << 6U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 0x10U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0xfff1ffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0) 
                  << 9U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 0xdU)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0xff8fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0) 
                  << 0xcU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 0xaU)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0xfc7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0) 
                  << 0xfU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 7U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0xe3ffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0) 
                  << 0x12U));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 
            = (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                             >> 4U)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
            = ((0x1fffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice) 
               | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0) 
                  << 0x15U));
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice = 0U;
    }
    if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        if ((0U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                                 >> 0x28U)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1;
        }
        if ((1U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                                 >> 0x25U)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1;
        }
        if ((2U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                                 >> 0x22U)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1;
        }
        if ((3U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                                 >> 0x1fU)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1;
        }
        if ((4U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                                 >> 0x1cU)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1;
        }
    } else if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        if ((0U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                 >> 0x28U)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1;
        }
        if ((1U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                 >> 0x25U)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1;
        }
        if ((2U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                 >> 0x22U)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1;
        }
        if ((3U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                 >> 0x1fU)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1;
        }
        if ((4U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                  >> 0x2bU))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0 
                = (QData)((IData)(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                    ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                    : 0U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                = (QData)((IData)((7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                 >> 0x1cU)))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1;
        }
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0U] = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1U] = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2U] = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3U] = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] = 0ULL;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__hash_addr 
        = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
            ? ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))
                ? ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))
                    ? (1ULL + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                       [0U]) : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))
                                 ? (1ULL + (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                            [0U] + 
                                            VL_SHIFTL_QQI(64,64,32, 
                                                          (1ULL 
                                                           + 
                                                           vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                           [1U]), 3U)))
                                 : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))
                                     ? (0x48ULL + (
                                                   ((1ULL 
                                                     + 
                                                     vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                     [0U]) 
                                                    ^ 
                                                    (0x2880e3ULL 
                                                     * 
                                                     (1ULL 
                                                      + 
                                                      vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                      [1U]))) 
                                                   ^ 
                                                   (0xc5279ULL 
                                                    * 
                                                    (1ULL 
                                                     + 
                                                     vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                     [2U]))))
                                     : ((3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))
                                         ? (0x48ULL 
                                            + ((((1ULL 
                                                  + 
                                                  vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                  [0U]) 
                                                 ^ 
                                                 (0x2880e3ULL 
                                                  * 
                                                  (1ULL 
                                                   + 
                                                   vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                   [1U]))) 
                                                ^ (0xc5279ULL 
                                                   * 
                                                   (1ULL 
                                                    + 
                                                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                    [2U]))) 
                                               ^ (0x3b0349ULL 
                                                  * 
                                                  (1ULL 
                                                   + 
                                                   vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                   [3U]))))
                                         : ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))
                                             ? (0x48ULL 
                                                + (
                                                   ((((1ULL 
                                                       + 
                                                       vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                       [0U]) 
                                                      ^ 
                                                      (0x2880e3ULL 
                                                       * 
                                                       (1ULL 
                                                        + 
                                                        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                        [1U]))) 
                                                     ^ 
                                                     (0xc5279ULL 
                                                      * 
                                                      (1ULL 
                                                       + 
                                                       vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                       [2U]))) 
                                                    ^ 
                                                    (0x3b0349ULL 
                                                     * 
                                                     (1ULL 
                                                      + 
                                                      vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                      [3U]))) 
                                                   ^ 
                                                   (0x200a07ULL 
                                                    * 
                                                    (1ULL 
                                                     + 
                                                     vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                     [4U]))))
                                             : 0ULL)))))
                : 0ULL) : 0ULL);
    if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ = 0ULL;
        if ((0U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + (0x24aULL * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                      [0U]));
        }
        if ((1U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                   [1U], VL_SHIFTL_III(32,32,32, 
                                                       ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                                        - (IData)(1U)), 1U)));
        }
        if ((2U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                   [2U], VL_SHIFTL_III(32,32,32, 
                                                       ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                                        - (IData)(2U)), 1U)));
        }
        if ((3U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                   [3U], VL_SHIFTL_III(32,32,32, 
                                                       ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                                        - (IData)(3U)), 1U)));
        }
        if ((4U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                   [4U], VL_SHIFTL_III(32,32,32, 
                                                       ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                                        - (IData)(4U)), 1U)));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
               + ((0x13fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U)))
                   ? (((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                       (((IData)(0x3fU) 
                                         + (0x1ffU 
                                            & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U))) 
                                        >> 5U)])) << 
                       ((0U == (0x1fU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U)))
                         ? 0x20U : ((IData)(0x40U) 
                                    - (0x1fU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U))))) 
                      | (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U)))
                           ? 0ULL : ((QData)((IData)(
                                                     VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U))) 
                                                      >> 5U)])) 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U))))) 
                         | ((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                            (0xfU & 
                                             (VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U) 
                                              >> 5U))])) 
                            >> (0x1fU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level), 6U)))))
                   : 0ULL));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address 
               >> 2U);
    } else if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram 
            = (0x18fULL + ((9ULL * (QData)((IData)(
                                                   (0x7ffU 
                                                    & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__hash_addr))))) 
                           + (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt))));
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram = 0ULL;
    }
    vlSelfRef.Octree_tb__DOT__mem_sram_A = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                             ? 0ULL
                                             : ((1U 
                                                 == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                                 ? 
                                                ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                                   ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                                    ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram
                                                    : 0ULL))
                                                  : 0ULL)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                                  ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_A
                                                  : 0ULL)));
}

void VOctree_tb___024root___nba_sequent__TOP__0(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___nba_comb__TOP__0(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___nba_sequent__TOP__1(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___nba_comb__TOP__1(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___nba_comb__TOP__2(VOctree_tb___024root* vlSelf);

void VOctree_tb___024root___eval_nba(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_nba\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VOctree_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x1cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VOctree_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VOctree_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VOctree_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x1dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VOctree_tb___024root___nba_comb__TOP__2(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> VOctree_tb__ConstPool__TABLE_h5064543d_0;
extern const VlUnpacked<CData/*2:0*/, 256> VOctree_tb__ConstPool__TABLE_hdd09587c_0;
extern const VlUnpacked<CData/*1:0*/, 64> VOctree_tb__ConstPool__TABLE_hc6335217_0;
extern const VlUnpacked<CData/*0:0*/, 64> VOctree_tb__ConstPool__TABLE_hb6e257b8_0;
extern const VlUnpacked<CData/*1:0*/, 64> VOctree_tb__ConstPool__TABLE_ha17cfe93_0;
extern const VlWide<18>/*575:0*/ VOctree_tb__ConstPool__CONST_h026f187a_0;
extern const VlUnpacked<CData/*4:0*/, 256> VOctree_tb__ConstPool__TABLE_h08d1b380_0;
extern const VlUnpacked<CData/*1:0*/, 256> VOctree_tb__ConstPool__TABLE_hfc5b8649_0;
extern const VlUnpacked<CData/*0:0*/, 256> VOctree_tb__ConstPool__TABLE_hdd43615a_0;
extern const VlUnpacked<CData/*0:0*/, 256> VOctree_tb__ConstPool__TABLE_h4f2812b1_0;
extern const VlUnpacked<CData/*0:0*/, 256> VOctree_tb__ConstPool__TABLE_hc9206498_0;
extern const VlUnpacked<CData/*1:0*/, 256> VOctree_tb__ConstPool__TABLE_hd32eb115_0;

VL_INLINE_OPT void VOctree_tb___024root___nba_sequent__TOP__0(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___nba_sequent__TOP__0\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg = 0;
    CData/*0:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg = 0;
    CData/*3:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt = 0;
    CData/*1:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state = 0;
    CData/*0:0*/ __Vdly__Octree_tb__DOT__search_done;
    __Vdly__Octree_tb__DOT__search_done = 0;
    CData/*0:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done = 0;
    CData/*1:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state = 0;
    CData/*2:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 0;
    CData/*3:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt = 0;
    CData/*3:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt = 0;
    CData/*0:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done = 0;
    CData/*5:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr = 0;
    CData/*5:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr = 0;
    CData/*2:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer = 0;
    CData/*3:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt = 0;
    CData/*3:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0;
    CData/*2:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 0;
    CData/*1:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 0;
    CData/*3:0*/ __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = 0;
    QData/*45:0*/ __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0;
    __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0;
    __VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0;
    __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0 = 0;
    QData/*45:0*/ __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0;
    __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0;
    __VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0;
    __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0 = 0;
    QData/*63:0*/ __VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v0;
    __VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v0 = 0;
    SData/*14:0*/ __VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v0;
    __VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v0 = 0;
    QData/*63:0*/ __VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v1;
    __VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v1 = 0;
    SData/*14:0*/ __VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v1;
    __VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v1 = 0;
    // Body
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state;
    __Vdly__Octree_tb__DOT__search_done = vlSelfRef.Octree_tb__DOT__search_done;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr;
    __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0 = 0U;
    __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0 = 0U;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done;
    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state;
    if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hold_input_data__DOT__unnamedblk1__DOT__i = 9U;
    }
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__mem_sram_CEN)))) {
            if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__mem_sram_GWEN)))) {
                vlSelfRef.Octree_tb__DOT__u_sram__DOT____Vlvbound_heeb58653__0 
                    = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                        ? 0ULL : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                   ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                       ? ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                           ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_D
                                           : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                               ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_D
                                               : 0ULL))
                                       : 0ULL) : ((2U 
                                                   == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                                   ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D
                                                   : 0ULL)));
                if ((0x4f37U >= (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__mem_sram_A)))) {
                    __VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v0 
                        = vlSelfRef.Octree_tb__DOT__u_sram__DOT____Vlvbound_heeb58653__0;
                    __VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v0 
                        = (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__mem_sram_A));
                    vlSelfRef.__VdlyCommitQueueOctree_tb__DOT__u_sram__DOT__memory.enqueue(__VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v0, (IData)(__VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v0));
                }
            }
        }
    } else {
        vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4f38U, vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.Octree_tb__DOT__u_sram__DOT____Vlvbound_hf20472cc__0 = 0ULL;
            if (VL_LIKELY(((0x4f37U >= (0x7fffU & vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v1 
                    = vlSelfRef.Octree_tb__DOT__u_sram__DOT____Vlvbound_hf20472cc__0;
                __VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v1 
                    = (0x7fffU & vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueueOctree_tb__DOT__u_sram__DOT__memory.enqueue(__VdlyVal__Octree_tb__DOT__u_sram__DOT__memory__v1, (IData)(__VdlyDim0__Octree_tb__DOT__u_sram__DOT__memory__v1));
            }
            vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i);
        }
    }
    __Vtableidx3 = (((((IData)(vlSelfRef.Octree_tb__DOT__del_done) 
                       << 7U) | ((IData)(vlSelfRef.Octree_tb__DOT__add_done) 
                                 << 6U)) | (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg) 
                                               << 4U))) 
                    | (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater) 
                        << 1U) | (IData)(vlSelfRef.Octree_tb__DOT__rst_n)));
    if (VOctree_tb__ConstPool__TABLE_h5064543d_0[__Vtableidx3]) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater 
            = VOctree_tb__ConstPool__TABLE_hdd09587c_0
            [__Vtableidx3];
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start) 
                      << 5U) | (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done) 
                                 << 4U) | ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__outing_done) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state) 
                        << 1U) | (IData)(vlSelfRef.Octree_tb__DOT__rst_n)));
    if ((1U & VOctree_tb__ConstPool__TABLE_hc6335217_0
         [__Vtableidx2])) {
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done 
            = VOctree_tb__ConstPool__TABLE_hb6e257b8_0
            [__Vtableidx2];
    }
    if ((2U & VOctree_tb__ConstPool__TABLE_hc6335217_0
         [__Vtableidx2])) {
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state 
            = VOctree_tb__ConstPool__TABLE_ha17cfe93_0
            [__Vtableidx2];
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_GWEN = 1U;
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__get_intersted_data__DOT__unnamedblk1__DOT__i = 8U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0xfeU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (1U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                    >> (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0xfdU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (2U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                     >> (0x3fU & ((IData)(2U) 
                                                  + 
                                                  VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                            << 1U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0xfbU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (4U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                     >> (0x3fU & ((IData)(4U) 
                                                  + 
                                                  VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                            << 2U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0xf7U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (8U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                     >> (0x3fU & ((IData)(6U) 
                                                  + 
                                                  VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                            << 3U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0xefU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (0x10U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(8U) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 4U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0xdfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (0x20U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(0xaU) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 5U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0xbfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (0x40U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(0xcU) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 6U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data 
                = ((0x7fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data)) 
                   | (0x80U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(0xeU) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 7U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0xfeU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (1U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                    >> (0x3fU & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U)))))));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0xfdU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (2U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                     >> (0x3fU & ((IData)(3U) 
                                                  + 
                                                  VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                            << 1U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0xfbU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (4U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                     >> (0x3fU & ((IData)(5U) 
                                                  + 
                                                  VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                            << 2U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0xf7U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (8U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                     >> (0x3fU & ((IData)(7U) 
                                                  + 
                                                  VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                            << 3U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0xefU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (0x10U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(9U) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 4U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0xdfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (0x20U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(0xbU) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 5U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0xbfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (0x40U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(0xdU) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 6U)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data 
                = ((0x7fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data)) 
                   | (0x80U & ((IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                                        >> (0x3fU & 
                                            ((IData)(0xfU) 
                                             + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested), 4U))))) 
                               << 7U)));
        }
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en) 
             & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty)))) {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                = ((0x1bU >= (0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr)))
                    ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem
                   [(0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr))]
                    : 0ULL);
        }
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en) 
             & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty)))) {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                = ((0x1bU >= (0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr)))
                    ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem
                   [(0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr))]
                    : 0ULL);
        }
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wr_en) 
             & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_full)))) {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT____Vlvbound_h8b8116e7__0 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wdata;
            if ((0x1bU >= (0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr)))) {
                __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT____Vlvbound_h8b8116e7__0;
                __VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0 
                    = (0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr));
                __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0 = 1U;
            }
        }
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wr_en) 
             & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_full)))) {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT____Vlvbound_h8b8116e7__0 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wdata;
            if ((0x1bU >= (0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr)))) {
                __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT____Vlvbound_h8b8116e7__0;
                __VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0 
                    = (0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr));
                __VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0 = 1U;
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr 
            = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr 
            = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr;
        if ((((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state)) 
              & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty)) 
             & (0U == ((((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid) 
                         + (1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN)))) 
                        + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid)) 
                       + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wr_en))))) {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done = 1U;
        } else if ((1U & (~ (((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state)) 
                              & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty)) 
                             & (0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state)))))) {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__mem_sram_CEN)))) {
            if (vlSelfRef.Octree_tb__DOT__mem_sram_GWEN) {
                vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg 
                    = ((0x4f37U >= (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__mem_sram_A)))
                        ? vlSelfRef.Octree_tb__DOT__u_sram__DOT__memory
                       [(0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__mem_sram_A))]
                        : 0ULL);
            }
        }
    } else {
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr 
            = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr 
            = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done = 0U;
        vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data = 0U;
    }
    vlSelfRef.__VdlyCommitQueueOctree_tb__DOT__u_sram__DOT__memory.commit(vlSelfRef.Octree_tb__DOT__u_sram__DOT__memory);
    if (__VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[__VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0] 
            = __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem__v0;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr;
    if (__VdlySet__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[__VdlyDim0__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0] 
            = __VdlyVal__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem__v0;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_D = 0ULL;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wr_en 
        = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n) 
           && (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid) 
                & (1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) 
               && ((0U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_count)) 
                   & ((4U >= (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                    >> 0xfU))) && (1U 
                                                   & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active) 
                                                      >> 
                                                      (7U 
                                                       & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                                          >> 0xfU))))))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_full 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr) 
           == ((0x20U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr) 
                             >> 5U)) << 5U)) | (0x1fU 
                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_full 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr) 
           == ((0x20U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr) 
                             >> 5U)) << 5U)) | (0x1fU 
                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr))));
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid) 
             & (1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state)))) {
            if (((0U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_count)) 
                 & ((4U >= (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                  >> 0xfU))) && (1U 
                                                 & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active) 
                                                    >> 
                                                    (7U 
                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                                        >> 0xfU))))))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wdata 
                    = (((QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode)) 
                        << 0x1cU) | (QData)((IData)(
                                                    ((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_count)))));
            }
        }
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wdata = 0ULL;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j = 0U;
    if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 0U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 1U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 2U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 3U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 4U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 5U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 6U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = 7U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_count 
        = (0xfU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j);
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid) 
             & (1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state)))) {
            if (((0U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_count)) 
                 & ((4U >= (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                  >> 0xfU))) && (1U 
                                                 & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active) 
                                                    >> 
                                                    (7U 
                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                                        >> 0xfU))))))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wdata 
                    = (((QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode)) 
                        << 0x1cU) | (QData)((IData)(
                                                    ((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_count)))));
            }
        }
        if ((1U & (~ (((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state)) 
                       & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty)) 
                      & (0U == ((((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid) 
                                  + (1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN)))) 
                                 + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid)) 
                                + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wr_en))))))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__outing_done 
                = (((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state)) 
                    & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty)) 
                   & (0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state)));
        }
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wdata = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__outing_done = 0U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wr_en 
        = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n) 
           && (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid) 
                & (1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) 
               && ((0U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_count)) 
                   & ((4U >= (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                    >> 0xfU))) && (1U 
                                                   & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active) 
                                                      >> 
                                                      (7U 
                                                       & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
                                                          >> 0xfU))))))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o = 0U;
    if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 0U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 1U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 2U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 3U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 4U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 5U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 6U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = 7U;
        if ((0x17U >= (0x1fU & ((IData)(3U) * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(3U) 
                                                 * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))) 
                    & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos) 
                   | (0xffffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0) 
                                   << (0x1fU & ((IData)(3U) 
                                                * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o)))));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o 
            = ((IData)(1U) + vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_count 
        = (0xfU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o);
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state;
    if ((1U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk5__DOT__a = 5U;
        }
        if ((2U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk6__DOT__a = 5U;
        }
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid 
        = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid 
        = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n) 
           && (1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN 
        = ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n))) 
           || ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start))) 
               && (1U & (~ ((((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en) 
                              | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en)) 
                             | ((3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state)) 
                                & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt) 
                                   != ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num) 
                                       - (IData)(1U))))) 
                            | ((5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state)) 
                               & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt) 
                                   != ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num) 
                                       - (IData)(1U))) 
                                  | (9U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt)))))))));
    if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk4__DOT__a = 5U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__unnamedblk9__DOT__i = 5U;
    }
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested 
            = (3U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_posencode;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_posencode 
            = ((((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                 << 0xfU) | ((0x7000U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                 [0U]) 
                                         << 0xcU)) 
                             | (0xe00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                                  [1U]) 
                                          << 9U)))) 
               | ((0x1c0U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                     [2U]) << 6U)) 
                  | ((0x38U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                       [3U]) << 3U)) 
                     | (7U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                     [4U])))));
        if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))) {
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))) {
                if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))) {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 0U;
                } else {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 3U;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))) {
                if ((((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt) 
                      == ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num) 
                          - (IData)(1U))) & (9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt)))) {
                    if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty) {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 2U;
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt = 0U;
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt = 0U;
                    } else {
                        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en = 1U;
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt = 0U;
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt = 0U;
                    }
                } else {
                    if ((9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt))) {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)));
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt = 1U;
                    } else {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt)));
                    }
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en = 0U;
                }
            } else if (vlSelfRef.Octree_tb__DOT__out_valid) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 2U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))) {
            if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))) {
                if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt) 
                     == ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num) 
                         - (IData)(1U)))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 0U;
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 1U;
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt = 0U;
                } else {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 0U;
                }
            } else if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en = 1U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 5U;
            }
        } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))) {
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 4U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 0U;
            } else if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 1U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 6U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first = 0U;
            }
        } else {
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 1U;
            }
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first = 1U;
        }
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_posencode = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first = 1U;
    }
    if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num 
            = (0xfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level 
            = (7U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first)
                      ? 0U : ((IData)(1U) + (7U & (IData)(
                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                                           >> 0x2bU))))));
    } else {
        if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num 
                = (0xfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level 
                = (7U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first)
                          ? 0U : (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                >> 0x2bU)))));
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level 
                = (7U & 0U);
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num = 0U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr) 
           == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr) 
           == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt;
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select = 0U;
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod = 0U;
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__search_start_reg) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state))) {
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state = 2U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state))) {
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start = 1U;
                if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt) 
                     == ((IData)(vlSelfRef.Octree_tb__DOT__tree_num) 
                         - (IData)(1U)))) {
                    __Vdly__Octree_tb__DOT__search_done = 1U;
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state = 0U;
                } else {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt)));
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state = 1U;
                }
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start = 0U;
            }
        } else {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select = 0U;
            __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod = 0U;
        }
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod = 0U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state;
    __Vtableidx1 = ((((IData)(vlSelfRef.Octree_tb__DOT__ctrl) 
                      << 6U) | (((IData)(vlSelfRef.Octree_tb__DOT__search_done) 
                                 << 5U) | ((IData)(vlSelfRef.Octree_tb__DOT__add_done) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.Octree_tb__DOT__del_done) 
                        << 3U) | (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__state) 
                                   << 1U) | (IData)(vlSelfRef.Octree_tb__DOT__rst_n))));
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state))) {
            if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state))) {
                vlSelfRef.Octree_tb__DOT__del_done = 1U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 0U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN = 1U;
            } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt))) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN = 1U;
            } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D 
                    = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q 
                       & (~ VL_SHIFTL_QQQ(64,64,64, 1ULL, 
                                          (VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address)))), 4U) 
                                           + VL_SHIFTL_QQI(64,64,32, 
                                                           ((4U 
                                                             >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level))
                                                             ? 
                                                            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                                                            [vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level]
                                                             : 0ULL), 1U)))));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN = 0U;
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid) {
                    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level))) {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 3U;
                    } else {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 2U;
                        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                            = ((0x38000U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level) 
                                             - (IData)(1U)) 
                                            << 0xfU)) 
                               | (0x7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__reg_pos));
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = 0U;
                    }
                } else {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state))) {
            if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt))) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN = 1U;
            } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D 
                    = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q 
                       & (~ VL_SHIFTL_QQQ(64,64,64, 1ULL, 
                                          (1ULL + (
                                                   VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address)))), 4U) 
                                                   + 
                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                 ((4U 
                                                                   >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level))
                                                                   ? 
                                                                  vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                                                                  [vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level]
                                                                   : 0ULL), 1U))))));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN = 0U;
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid) {
                    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level))) {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 3U;
                    } else {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 2U;
                        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                            = ((0x38000U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level) 
                                             - (IData)(1U)) 
                                            << 0xfU)) 
                               | (0x7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__reg_pos));
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = 0U;
                    }
                } else {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 3U;
                }
            }
        } else {
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 1U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                    = vlSelfRef.Octree_tb__DOT__pos_encode;
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN = 1U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN = 1U;
            vlSelfRef.Octree_tb__DOT__del_done = 0U;
            __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = 0U;
        }
        if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))) {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = 1U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = 1U;
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 2U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                    = vlSelfRef.Octree_tb__DOT__pos_encode;
            }
        } else if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))) {
            if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt))) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = 1U;
            } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt))) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D 
                    = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q 
                       | VL_SHIFTL_QQQ(64,64,64, 1ULL, 
                                       (1ULL + (VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address)))), 4U) 
                                                + VL_SHIFTL_QQI(64,64,32, 
                                                                ((4U 
                                                                  >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level))
                                                                  ? 
                                                                 vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                                 [vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level]
                                                                  : 0ULL), 1U)))));
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid) {
                    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level))) {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 4U;
                    } else {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 3U;
                        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                            = ((0x38000U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level) 
                                             - (IData)(1U)) 
                                            << 0xfU)) 
                               | (0x7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos));
                    }
                } else {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 4U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))) {
            if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt))) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = 1U;
            } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt))) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D 
                    = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q 
                       | VL_SHIFTL_QQQ(64,64,64, 1ULL, 
                                       (VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address)))), 4U) 
                                        + VL_SHIFTL_QQI(64,64,32, 
                                                        ((4U 
                                                          >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level))
                                                          ? 
                                                         vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                                                         [vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level]
                                                          : 0ULL), 1U))));
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid) {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0U;
                    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level))) {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 4U;
                    } else {
                        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 3U;
                        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                            = ((0x38000U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level) 
                                             - (IData)(1U)) 
                                            << 0xfU)) 
                               | (0x7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos));
                    }
                } else {
                    __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 4U;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos;
                }
            }
        } else if ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))) {
            if ((9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt))) {
                vlSelfRef.Octree_tb__DOT__add_done = 1U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 0U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = 1U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D 
                    = ((0x23fU >= (0x3ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U)))
                        ? (((QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[
                                            (((IData)(0x3fU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U))))) 
                           | (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U))))) 
                              | ((QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[
                                                 (0x1fU 
                                                  & (VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U) 
                                                     >> 5U))])) 
                                 >> (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt), 6U)))))
                        : 0ULL);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = 0U;
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt)));
            }
        } else {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 0U;
            __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0U;
            vlSelfRef.Octree_tb__DOT__add_done = 0U;
        }
        if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__reg_pos 
                = vlSelfRef.Octree_tb__DOT__pos_encode;
        }
        if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer))) {
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos 
                    = vlSelfRef.Octree_tb__DOT__pos_encode;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0U] 
                    = (IData)(vlSelfRef.Octree_tb__DOT__feature_in);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[1U] 
                    = (IData)((vlSelfRef.Octree_tb__DOT__feature_in 
                               >> 0x20U));
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt = 1U;
            } else {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer))) {
            if ((9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt))) {
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT____Vlvbound_hd80ebf1d__0 
                    = vlSelfRef.Octree_tb__DOT__feature_in;
                if ((0x23fU >= (0x3ffU & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt), 6U)))) {
                    VL_ASSIGNSEL_WQ(576,64,(0x3ffU 
                                            & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt), 6U)), vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT____Vlvbound_hd80ebf1d__0);
                }
                __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt)));
            }
        } else {
            __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer = 0U;
        }
    } else {
        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = 0U;
        vlSelfRef.Octree_tb__DOT__del_done = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__reg_pos = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[1U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[1U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[2U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[2U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[3U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[3U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[4U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[4U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[5U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[5U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[6U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[6U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[7U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[7U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[8U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[8U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[9U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[9U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0xaU] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0xaU];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0xbU] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0xbU];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0xcU] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0xcU];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0xdU] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0xdU];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0xeU] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0xeU];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0xfU] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0xfU];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0x10U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0x10U];
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in[0x11U] 
            = VOctree_tb__ConstPool__CONST_h026f187a_0[0x11U];
        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer = 0U;
        __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt = 0U;
    }
    if ((1U & VOctree_tb__ConstPool__TABLE_h08d1b380_0
         [__Vtableidx1])) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__state 
            = VOctree_tb__ConstPool__TABLE_hfc5b8649_0
            [__Vtableidx1];
    }
    if ((2U & VOctree_tb__ConstPool__TABLE_h08d1b380_0
         [__Vtableidx1])) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__search_start_reg 
            = VOctree_tb__ConstPool__TABLE_hdd43615a_0
            [__Vtableidx1];
    }
    if ((4U & VOctree_tb__ConstPool__TABLE_h08d1b380_0
         [__Vtableidx1])) {
        __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg 
            = VOctree_tb__ConstPool__TABLE_h4f2812b1_0
            [__Vtableidx1];
    }
    if ((8U & VOctree_tb__ConstPool__TABLE_h08d1b380_0
         [__Vtableidx1])) {
        __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg 
            = VOctree_tb__ConstPool__TABLE_hc9206498_0
            [__Vtableidx1];
    }
    if ((0x10U & VOctree_tb__ConstPool__TABLE_h08d1b380_0
         [__Vtableidx1])) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg 
            = VOctree_tb__ConstPool__TABLE_hd32eb115_0
            [__Vtableidx1];
    }
    vlSelfRef.Octree_tb__DOT__search_done = __Vdly__Octree_tb__DOT__search_done;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q = 0ULL;
    } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q 
            = vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q = 0ULL;
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q 
            = ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                ? vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg
                : 0ULL);
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D = 0ULL;
    } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D;
    } else {
        if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D;
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D = 0ULL;
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q = 0ULL;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level 
        = (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                 >> 0xfU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[0U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                 >> 0xcU))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[1U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                 >> 9U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[2U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                 >> 6U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[3U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                 >> 3U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[4U] 
        = (QData)((IData)((7U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_GWEN 
        = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater)) 
           || ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
                ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN)
                : ((2U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater)) 
                   || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_CEN 
        = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater)) 
           || ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
                ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN)
                : ((2U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater)) 
                   || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level 
        = (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                 >> 0xfU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[0U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                 >> 0xcU))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[1U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                 >> 9U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[2U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                 >> 6U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[3U] 
        = (QData)((IData)((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                 >> 3U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[4U] 
        = (QData)((IData)((7U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ = 0ULL;
    if ((0U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
               + (0x24aULL * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                  [0U]));
    }
    if ((1U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                               [1U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(1U)))));
    }
    if ((2U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                               [2U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(2U)))));
    }
    if ((3U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                               [3U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(3U)))));
    }
    if ((4U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset
                               [4U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(4U)))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address 
        = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ 
           + ((0x13fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                 (7U 
                                                  & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                     >> 0xfU)), 6U)))
               ? (((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                   (((IData)(0x3fU) 
                                     + (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                   >> 0xfU)), 6U))) 
                                    >> 5U)])) << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                        >> 0xfU)), 6U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                        >> 0xfU)), 6U))))) 
                  | (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (7U 
                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                        >> 0xfU)), 6U)))
                       ? 0ULL : ((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                        >> 0xfU)), 6U))) 
                                                  >> 5U)])) 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                              (7U 
                                                               & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                  >> 0xfU)), 6U))))) 
                     | ((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                        (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                                   >> 0xfU)), 6U) 
                                                 >> 5U))])) 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (7U 
                                                   & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                                      >> 0xfU)), 6U)))))
               : 0ULL));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram 
        = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address 
           >> 2U);
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg 
        = __Vdly__Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ = 0ULL;
    if ((0U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
               + (0x24aULL * vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                  [0U]));
    }
    if ((1U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                               [1U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(1U)))));
    }
    if ((2U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                               [2U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(2U)))));
    }
    if ((3U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                               [3U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(3U)))));
    }
    if ((4U < (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                     >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset
                               [4U], ((IData)(3U) * 
                                      ((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                              >> 0xfU)) 
                                       - (IData)(4U)))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address 
        = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ 
           + ((0x13fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                 (7U 
                                                  & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                     >> 0xfU)), 6U)))
               ? (((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                   (((IData)(0x3fU) 
                                     + (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                                   >> 0xfU)), 6U))) 
                                    >> 5U)])) << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                                        >> 0xfU)), 6U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                                        >> 0xfU)), 6U))))) 
                  | (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                    (7U 
                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                        >> 0xfU)), 6U)))
                       ? 0ULL : ((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    (7U 
                                                                     & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                                        >> 0xfU)), 6U))) 
                                                  >> 5U)])) 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                              (7U 
                                                               & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                                  >> 0xfU)), 6U))))) 
                     | ((QData)((IData)(VOctree_tb__ConstPool__CONST_hcc7efbb3_0[
                                        (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                                   >> 0xfU)), 6U) 
                                                 >> 5U))])) 
                        >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                  (7U 
                                                   & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                                      >> 0xfU)), 6U)))))
               : 0ULL));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_for_sram 
        = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address 
           >> 2U);
}

VL_INLINE_OPT void VOctree_tb___024root___nba_comb__TOP__0(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___nba_comb__TOP__0\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk8__DOT__i = 8U;
    }
    if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk7__DOT__i = 8U;
    }
}

VL_INLINE_OPT void VOctree_tb___024root___nba_sequent__TOP__1(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___nba_sequent__TOP__1\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    CData/*0:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_hcbd0cadb__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_hcbd0cadb__0 = 0;
    SData/*10:0*/ Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_h87d5bfa5__0;
    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_h87d5bfa5__0 = 0;
    // Body
    if ((0U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionB = 0x400U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready)
            ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp)
            : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg 
        = ((0xfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg)) 
           | (0x10U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new)
                         ? ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp) 
                            >> 4U) : ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg) 
                                      >> 4U)) << 4U)));
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_temp = 0U;
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__sign 
            = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp) 
                     >> 0xfU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
            = (0x3fU & ((IData)(0x3fU) + (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp) 
                                                   >> 0xaU))));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
            = (0x3fffffU & VL_SHIFTL_III(22,22,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionA), 0xaU));
        if ((0x200000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 1U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent))));
        } else if ((0x100000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 2U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)));
        } else if ((0x80000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 3U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(1U)));
        } else if ((0x40000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 4U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(2U)));
        } else if ((0x20000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 5U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(3U)));
        } else if ((0x10000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 6U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(4U)));
        } else if ((0x8000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 7U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(5U)));
        } else if ((0x4000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 8U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(6U)));
        } else if ((0x2000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 9U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(7U)));
        } else if ((1U & (~ (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                             >> 0xcU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction, 0xaU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent)) 
                            - (IData)(8U)));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_temp 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__mantissa))));
    }
    if (((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp)) 
         | (0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp = 0U;
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__sign = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
            = (0x3fU & (((0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp) 
                                   >> 0xaU)) + (0x1fU 
                                                & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp) 
                                                   >> 0xaU))) 
                        - (IData)(0xfU)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionA) 
                            * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 1U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent))));
        } else if ((0x100000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 2U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)));
        } else if ((0x80000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 3U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(1U)));
        } else if ((0x40000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 4U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(2U)));
        } else if ((0x20000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 5U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(3U)));
        } else if ((0x10000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 6U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(4U)));
        } else if ((0x8000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 7U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(5U)));
        } else if ((0x4000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 8U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(6U)));
        } else if ((0x2000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 9U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(7U)));
        } else if ((1U & (~ (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                             >> 0xcU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction, 0xaU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent)) 
                            - (IData)(8U)));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__mantissa))));
    }
    if (((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp)) 
         | (0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp = 0U;
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__sign = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
            = (0x3fU & (((0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp) 
                                   >> 0xaU)) + (0x1fU 
                                                & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp) 
                                                   >> 0xaU))) 
                        - (IData)(0xfU)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionA) 
                            * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 1U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent))));
        } else if ((0x100000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 2U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)));
        } else if ((0x80000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 3U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(1U)));
        } else if ((0x40000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 4U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(2U)));
        } else if ((0x20000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 5U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(3U)));
        } else if ((0x10000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 6U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(4U)));
        } else if ((0x8000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 7U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(5U)));
        } else if ((0x4000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 8U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(6U)));
        } else if ((0x2000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 9U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(7U)));
        } else if ((1U & (~ (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                             >> 0xcU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction, 0xaU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent)) 
                            - (IData)(8U)));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__mantissa))));
    }
    if (((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp)) 
         | (0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp = 0U;
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__sign = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
            = (0x3fU & (((0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp) 
                                   >> 0xaU)) + (0x1fU 
                                                & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp) 
                                                   >> 0xaU))) 
                        - (IData)(0xfU)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionA 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionB 
            = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp)));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
            = (0x3fffffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionA) 
                            * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionB)));
        if ((0x200000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 1U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent))));
        } else if ((0x100000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 2U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)));
        } else if ((0x80000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 3U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(1U)));
        } else if ((0x40000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 4U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(2U)));
        } else if ((0x20000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 5U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(3U)));
        } else if ((0x10000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 6U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(4U)));
        } else if ((0x8000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 7U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(5U)));
        } else if ((0x4000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 8U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(6U)));
        } else if ((0x2000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction)) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 9U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(7U)));
        } else if ((1U & (~ (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                             >> 0xcU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                = (0x3fffffU & VL_SHIFTL_III(22,22,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction, 0xaU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent 
                = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent)) 
                            - (IData)(8U)));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__mantissa 
            = (0x3ffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction 
                         >> 0xcU));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus 
        = ((0x8000U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_temp) 
                           >> 0xfU)) << 0xfU)) | (0x7fffU 
                                                  & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_temp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus 
        = ((0x8000U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_s_temp) 
                           >> 0xfU)) << 0xfU)) | (0x7fffU 
                                                  & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_s_temp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus = 0xbc00U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB = 0xfU;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB = 0x400U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus = 0xc000U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB = 0x10U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB = 0x400U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus = 0xc200U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB = 0x10U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB = 0x600U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus = 0xc400U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB = 0x11U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB = 0x400U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus = 0xc500U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB = 0x11U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB = 0x500U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2 = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus 
        = ((0x8000U & ((~ (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                   >> 0xfU))) << 0xfU)) 
           | (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA 
        = (0x1fU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0x2aU)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                       >> 0x20U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA;
    if ((0U == (0xffffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                   >> 0x20U))))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp 
            = (0xffffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                  >> 0x20U)));
    } else if ((((0x7fffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                     >> 0x20U))) == 
                 (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus))) 
                & ((IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0x2fU)) ^ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus) 
                                          >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA;
        }
        if (((1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0x2fU))) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus) 
                                                  >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__sign 
                = (1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                 >> 0x2fU)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                               >> 0x2fU)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus 
        = ((0x8000U & ((~ (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                   >> 0x1fU))) << 0xfU)) 
           | (0x7fffU & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                 >> 0x10U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA 
        = (0x1fU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0x1aU)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                       >> 0x10U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA;
    if ((0U == (0xffffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                   >> 0x10U))))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp 
            = (0xffffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                  >> 0x10U)));
    } else if ((((0x7fffU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                     >> 0x10U))) == 
                 (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus))) 
                & ((IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0x1fU)) ^ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus) 
                                          >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA;
        }
        if (((1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0x1fU))) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus) 
                                                  >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__sign 
                = (1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                 >> 0x1fU)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                               >> 0x1fU)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus 
        = ((0x8000U & ((~ (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                   >> 0x2fU))) << 0xfU)) 
           | (0x7fffU & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                 >> 0x20U))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA 
        = (0x1fU & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0xaU)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__cam_pos)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA;
    if ((0U == (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__cam_pos)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp 
            = (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__cam_pos));
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__cam_pos)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus))) 
                & ((IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0xfU)) ^ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus) 
                                         >> 0xfU)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA;
        }
        if (((1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                            >> 0xfU))) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus) 
                                                 >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__sign 
                = (1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                                 >> 0xfU)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((1U & (IData)((vlSelfRef.Octree_tb__DOT__cam_pos 
                               >> 0xfU)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB 
        = (0x1fU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB 
        = (0x400U | (0x3ffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB 
        = (0x1fU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                    >> 0x1aU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB 
        = (0x400U | (0x3ffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                               >> 0x10U)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB 
        = (0x1fU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB 
        = (0x400U | (0x3ffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U]));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB 
        = (0x1fU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                    >> 0x1aU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB 
        = (0x400U | (0x3ffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                               >> 0x10U)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB 
        = (0x1fU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB 
        = (0x400U | (0x3ffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U]));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1 
            = (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]);
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
               >> 0x10U);
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1 
            = (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U]);
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1 
            = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
               >> 0x10U);
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1 
            = (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U]);
    } else {
        if ((0U == (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2;
        } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)) 
                     == (0x7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U])) 
                    & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU) ^ (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                                    >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1 = 0U;
        } else {
            if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB) 
                 > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB;
            } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA) 
                        > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA;
            }
            if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU)) == (1U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                                            >> 0xfU)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA) 
                              + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__sign 
                    = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                             >> 0xfU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA) 
                                 + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB)));
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout) {
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_hcbd0cadb__0 
                        = (1U & (VL_SHIFTR_III(12,12,32, 
                                               (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout) 
                                                 << 0xbU) 
                                                | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction)), 1U) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent))));
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_h87d5bfa5__0 
                        = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout) 
                            << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction) 
                                                  >> 1U)));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_hcbd0cadb__0;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT____Vconcswap_1_h87d5bfa5__0;
                }
            } else {
                if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB)));
                }
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__sign = 1U;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__sign = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 1U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 2U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 3U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 4U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 5U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 6U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 7U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 8U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 9U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction), 0xaU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1 
                = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent))
                    ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__sign) 
                             << 0xfU) | ((0x7c00U & 
                                          ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent) 
                                           << 0xaU)) 
                                         | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__mantissa))));
        }
        if ((0U == (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                    >> 0x10U))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2;
        } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)) 
                     == (0x7fffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                                    >> 0x10U))) & (
                                                   ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                                                    >> 0x1fU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1 = 0U;
        } else {
            if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB) 
                 > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB;
            } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA) 
                        > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA;
            }
            if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU)) == (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                                      >> 0x1fU))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA) 
                              + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__sign 
                    = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                             >> 0xfU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA) 
                                 + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB)));
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout) {
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_hcbd0cadb__0 
                        = (1U & (VL_SHIFTR_III(12,12,32, 
                                               (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout) 
                                                 << 0xbU) 
                                                | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction)), 1U) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent))));
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_h87d5bfa5__0 
                        = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout) 
                            << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction) 
                                                  >> 1U)));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_hcbd0cadb__0;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT____Vconcswap_1_h87d5bfa5__0;
                }
            } else {
                if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB)));
                }
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__sign = 1U;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__sign = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 1U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 2U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 3U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 4U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 5U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 6U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 7U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 8U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 9U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction), 0xaU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1 
                = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent))
                    ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__sign) 
                             << 0xfU) | ((0x7c00U & 
                                          ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent) 
                                           << 0xaU)) 
                                         | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__mantissa))));
        }
        if ((0U == (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U]))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2;
        } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)) 
                     == (0x7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U])) 
                    & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU) ^ (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                                    >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1 = 0U;
        } else {
            if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB) 
                 > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB;
            } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA) 
                        > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA;
            }
            if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU)) == (1U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                                            >> 0xfU)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA) 
                              + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__sign 
                    = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                             >> 0xfU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA) 
                                 + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB)));
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout) {
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_hcbd0cadb__0 
                        = (1U & (VL_SHIFTR_III(12,12,32, 
                                               (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout) 
                                                 << 0xbU) 
                                                | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction)), 1U) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent))));
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_h87d5bfa5__0 
                        = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout) 
                            << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction) 
                                                  >> 1U)));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_hcbd0cadb__0;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT____Vconcswap_1_h87d5bfa5__0;
                }
            } else {
                if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB)));
                }
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__sign = 1U;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__sign = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 1U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 2U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 3U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 4U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 5U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 6U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 7U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 8U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 9U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction), 0xaU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1 
                = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent))
                    ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__sign) 
                             << 0xfU) | ((0x7c00U & 
                                          ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent) 
                                           << 0xaU)) 
                                         | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__mantissa))));
        }
        if ((0U == (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                    >> 0x10U))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2;
        } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)) 
                     == (0x7fffU & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                                    >> 0x10U))) & (
                                                   ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                                                    >> 0x1fU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1 = 0U;
        } else {
            if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB) 
                 > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB;
            } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA) 
                        > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA;
            }
            if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU)) == (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                                      >> 0x1fU))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA) 
                              + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__sign 
                    = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                             >> 0xfU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA) 
                                 + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB)));
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout) {
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_hcbd0cadb__0 
                        = (1U & (VL_SHIFTR_III(12,12,32, 
                                               (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout) 
                                                 << 0xbU) 
                                                | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction)), 1U) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent))));
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_h87d5bfa5__0 
                        = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout) 
                            << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction) 
                                                  >> 1U)));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_hcbd0cadb__0;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT____Vconcswap_1_h87d5bfa5__0;
                }
            } else {
                if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB)));
                }
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__sign = 1U;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__sign = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 1U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 2U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 3U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 4U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 5U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 6U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 7U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 8U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 9U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction), 0xaU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1 
                = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent))
                    ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__sign) 
                             << 0xfU) | ((0x7c00U & 
                                          ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent) 
                                           << 0xaU)) 
                                         | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__mantissa))));
        }
        if ((0U == (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U]))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2;
        } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2)) 
                     == (0x7fffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U])) 
                    & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU) ^ (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] 
                                    >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1 = 0U;
        } else {
            if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB) 
                 > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB;
            } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA) 
                        > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__shiftAmount 
                    = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA) 
                                - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB) 
                                 >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__shiftAmount)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA;
            }
            if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                        >> 0xfU)) == (1U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U] 
                                            >> 0xfU)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA) 
                              + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__sign 
                    = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2) 
                             >> 0xfU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA) 
                                 + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB)));
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout) {
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_hcbd0cadb__0 
                        = (1U & (VL_SHIFTR_III(12,12,32, 
                                               (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout) 
                                                 << 0xbU) 
                                                | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction)), 1U) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent))));
                    Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_h87d5bfa5__0 
                        = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout) 
                            << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction) 
                                                  >> 1U)));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_hcbd0cadb__0;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT____Vconcswap_1_h87d5bfa5__0;
                }
            } else {
                if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout 
                        = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA) 
                                  - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB)) 
                                 >> 0xbU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA) 
                                     - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB)));
                }
                if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__sign = 1U;
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction)));
                } else {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__sign = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 1U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(1U)));
                } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 2U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(2U)));
                } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 3U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(3U)));
                } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 4U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(4U)));
                } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 5U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(5U)));
                } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 6U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(6U)));
                } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 7U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(7U)));
                } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 8U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(8U)));
                } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 9U));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(9U)));
                } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction 
                        = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction), 0xaU));
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent 
                        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent)) 
                                    - (IData)(0xaU)));
                }
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__mantissa 
                = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1 
                = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent))
                    ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__sign) 
                             << 0xfU) | ((0x7c00U & 
                                          ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent) 
                                           << 0xaU)) 
                                         | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__mantissa))));
        }
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus = 0xbc00U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB = 0xfU;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB = 0x400U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus = 0xbc00U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB = 0xfU;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB = 0x400U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus = 0xbc00U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB = 0xfU;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB = 0x400U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB 
        = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub) 
                    >> 0xaU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB 
        = (0x400U | (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA;
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub;
    } else if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int;
    } else if ((((0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int)) 
                 == (0x7fffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub))) 
                & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int) 
                    ^ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub)) 
                   >> 0xfU))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre = 0U;
    } else {
        if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB) 
             > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB;
        } else if (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA) 
                    > (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__shiftAmount 
                = (0x1fU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA) 
                            - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB) 
                             >> (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__shiftAmount)));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA;
        }
        if (((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub) 
                                        >> 0xfU)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout 
                = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA) 
                          + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB)) 
                         >> 0xbU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__sign 
                = (1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int) 
                         >> 0xfU));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA) 
                             + (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB)));
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout) {
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0 
                    = (1U & (VL_SHIFTR_III(12,12,32, 
                                           (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout) 
                                             << 0xbU) 
                                            | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction)), 1U) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & ((IData)(1U) + VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent))));
                Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0 
                    = (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction) 
                                              >> 1U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_hcbd0cadb__0;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT____Vconcswap_1_h87d5bfa5__0;
            }
        } else {
            if ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout 
                    = (1U & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA) 
                              - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB)) 
                             >> 0xbU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA) 
                                 - (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB)));
            }
            if (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__sign = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & (- (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction)));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__sign = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction) 
                      >> 0xaU)))) {
            if ((0x200U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 1U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(1U)));
            } else if ((0x100U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 2U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(2U)));
            } else if ((0x80U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 3U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(3U)));
            } else if ((0x40U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 4U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(4U)));
            } else if ((0x20U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 5U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(5U)));
            } else if ((0x10U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 6U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(6U)));
            } else if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 7U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(7U)));
            } else if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 8U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(8U)));
            } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 9U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(9U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction 
                    = (0x7ffU & VL_SHIFTL_III(11,11,32, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction), 0xaU));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent 
                    = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent)) 
                                - (IData)(0xaU)));
            }
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__mantissa 
            = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre 
            = ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent))
                ? 0U : (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__sign) 
                         << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent) 
                                                 << 0xaU)) 
                                     | (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__mantissa))));
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state 
        = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp 
        = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__dist_max));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp 
        = (((((((((0x16U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                  | ((0x17U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                     && (0x45U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))) 
                 | ((0x46U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                    && (0x75U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))) 
                | ((0x76U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                   && (0xa8U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))) 
               | ((0xa9U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                  && (0xdcU >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))) 
              | ((0xddU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                 && (0x113U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))) 
             | ((0x114U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                && (0x14dU >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))) 
            | ((0x14eU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
               && (0x189U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp))))
            ? ((0x16U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp))
                ? 0x3c00U : (((0x17U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                              && (0x45U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                              ? 0x3c40U : (((0x46U 
                                             <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                            && (0x75U 
                                                >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                            ? 0x3c80U
                                            : (((0x76U 
                                                 <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                && (0xa8U 
                                                    >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                ? 0x3cc0U
                                                : (
                                                   ((0xa9U 
                                                     <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                    && (0xdcU 
                                                        >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                    ? 0x3d00U
                                                    : 
                                                   (((0xddU 
                                                      <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                     && (0x113U 
                                                         >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                     ? 0x3d40U
                                                     : 
                                                    (((0x114U 
                                                       <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                      && (0x14dU 
                                                          >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                      ? 0x3d80U
                                                      : 0x3dc0U)))))))
            : (((0x18aU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                && (0x1c8U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                ? 0x3e00U : (((0x1c9U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                              && (0x209U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                              ? 0x3e40U : (((0x20aU 
                                             <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                            && (0x24eU 
                                                >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                            ? 0x3e80U
                                            : (((0x24fU 
                                                 <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                && (0x296U 
                                                    >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                ? 0x3ec0U
                                                : (
                                                   ((0x297U 
                                                     <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                    && (0x2e0U 
                                                        >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                    ? 0x3f00U
                                                    : 
                                                   (((0x2e1U 
                                                      <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                     && (0x32eU 
                                                         >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                     ? 0x3f40U
                                                     : 
                                                    (((0x32fU 
                                                       <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)) 
                                                      && (0x380U 
                                                          >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp)))
                                                      ? 0x3f80U
                                                      : 0x3fc0U))))))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp 
        = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp 
        = (((((((((0x16U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                  | ((0x17U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                     && (0x45U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))) 
                 | ((0x46U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                    && (0x75U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))) 
                | ((0x76U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                   && (0xa8U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))) 
               | ((0xa9U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                  && (0xdcU >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))) 
              | ((0xddU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                 && (0x113U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))) 
             | ((0x114U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                && (0x14dU >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))) 
            | ((0x14eU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
               && (0x189U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp))))
            ? ((0x16U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp))
                ? 0x3c00U : (((0x17U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                              && (0x45U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                              ? 0x3c40U : (((0x46U 
                                             <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                            && (0x75U 
                                                >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                            ? 0x3c80U
                                            : (((0x76U 
                                                 <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                && (0xa8U 
                                                    >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                ? 0x3cc0U
                                                : (
                                                   ((0xa9U 
                                                     <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                    && (0xdcU 
                                                        >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                    ? 0x3d00U
                                                    : 
                                                   (((0xddU 
                                                      <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                     && (0x113U 
                                                         >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                     ? 0x3d40U
                                                     : 
                                                    (((0x114U 
                                                       <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                      && (0x14dU 
                                                          >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                      ? 0x3d80U
                                                      : 0x3dc0U)))))))
            : (((0x18aU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                && (0x1c8U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                ? 0x3e00U : (((0x1c9U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                              && (0x209U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                              ? 0x3e40U : (((0x20aU 
                                             <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                            && (0x24eU 
                                                >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                            ? 0x3e80U
                                            : (((0x24fU 
                                                 <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                && (0x296U 
                                                    >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                ? 0x3ec0U
                                                : (
                                                   ((0x297U 
                                                     <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                    && (0x2e0U 
                                                        >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                    ? 0x3f00U
                                                    : 
                                                   (((0x2e1U 
                                                      <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                     && (0x32eU 
                                                         >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                     ? 0x3f40U
                                                     : 
                                                    (((0x32fU 
                                                       <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)) 
                                                      && (0x380U 
                                                          >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp)))
                                                      ? 0x3f80U
                                                      : 0x3fc0U))))))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp 
        = (0x3ffU & (IData)(vlSelfRef.Octree_tb__DOT__s));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp 
        = (((((((((0x16U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                  | ((0x17U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                     && (0x45U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))) 
                 | ((0x46U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                    && (0x75U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))) 
                | ((0x76U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                   && (0xa8U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))) 
               | ((0xa9U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                  && (0xdcU >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))) 
              | ((0xddU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                 && (0x113U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))) 
             | ((0x114U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                && (0x14dU >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))) 
            | ((0x14eU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
               && (0x189U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp))))
            ? ((0x16U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp))
                ? 0x3c00U : (((0x17U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                              && (0x45U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                              ? 0x3c40U : (((0x46U 
                                             <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                            && (0x75U 
                                                >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                            ? 0x3c80U
                                            : (((0x76U 
                                                 <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                && (0xa8U 
                                                    >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                ? 0x3cc0U
                                                : (
                                                   ((0xa9U 
                                                     <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                    && (0xdcU 
                                                        >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                    ? 0x3d00U
                                                    : 
                                                   (((0xddU 
                                                      <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                     && (0x113U 
                                                         >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                     ? 0x3d40U
                                                     : 
                                                    (((0x114U 
                                                       <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                      && (0x14dU 
                                                          >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                      ? 0x3d80U
                                                      : 0x3dc0U)))))))
            : (((0x18aU <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                && (0x1c8U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                ? 0x3e00U : (((0x1c9U <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                              && (0x209U >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                              ? 0x3e40U : (((0x20aU 
                                             <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                            && (0x24eU 
                                                >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                            ? 0x3e80U
                                            : (((0x24fU 
                                                 <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                && (0x296U 
                                                    >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                ? 0x3ec0U
                                                : (
                                                   ((0x297U 
                                                     <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                    && (0x2e0U 
                                                        >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                    ? 0x3f00U
                                                    : 
                                                   (((0x2e1U 
                                                      <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                     && (0x32eU 
                                                         >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                     ? 0x3f40U
                                                     : 
                                                    (((0x32fU 
                                                       <= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)) 
                                                      && (0x380U 
                                                          >= (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp)))
                                                      ? 0x3f80U
                                                      : 0x3fc0U))))))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid 
        = (0x1fU & (((IData)(vlSelfRef.Octree_tb__DOT__dist_max) 
                     >> 0xaU) - (IData)(0xfU)));
    if (((((((((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid)) 
               | (1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
              | (2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
             | (3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
            | (4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
           | (5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
          | (6U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
         | (7U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int 
            = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                ? 0U : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                         ? 0x3c00U : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                       ? 0x4000U : 
                                      ((3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                        ? 0x4200U : 
                                       ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                         ? 0x4400U : 
                                        ((5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                          ? 0x4500U
                                          : ((6U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                              ? 0x4600U
                                              : 0x4700U)))))));
    } else if (((((((((8U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid)) 
                      | (9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
                     | (0xaU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
                    | (0xbU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
                   | (0xcU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
                  | (0xdU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
                 | (0xeU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) 
                | (0xfU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int 
            = ((8U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                ? 0x4800U : ((9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                              ? 0x4880U : ((0xaU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                            ? 0x4900U
                                            : ((0xbU 
                                                == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                                ? 0x4980U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                                    ? 0x4a00U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                                     ? 0x4a80U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))
                                                      ? 0x4b00U
                                                      : 0x4b80U)))))));
    } else if ((0x10U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int = 0x4c00U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid 
        = (0x1fU & (((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2) 
                     >> 0xaU) - (IData)(0xfU)));
    if (((((((((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid)) 
               | (1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
              | (2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
             | (3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
            | (4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
           | (5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
          | (6U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
         | (7U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int 
            = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                ? 0U : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                         ? 0x3c00U : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                       ? 0x4000U : 
                                      ((3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                        ? 0x4200U : 
                                       ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                         ? 0x4400U : 
                                        ((5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                          ? 0x4500U
                                          : ((6U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                              ? 0x4600U
                                              : 0x4700U)))))));
    } else if (((((((((8U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid)) 
                      | (9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
                     | (0xaU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
                    | (0xbU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
                   | (0xcU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
                  | (0xdU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
                 | (0xeU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) 
                | (0xfU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int 
            = ((8U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                ? 0x4800U : ((9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                              ? 0x4880U : ((0xaU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                            ? 0x4900U
                                            : ((0xbU 
                                                == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                                ? 0x4980U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                                    ? 0x4a00U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                                     ? 0x4a80U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))
                                                      ? 0x4b00U
                                                      : 0x4b80U)))))));
    } else if ((0x10U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int = 0x4c00U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid 
        = (0x1fU & (((IData)(vlSelfRef.Octree_tb__DOT__s) 
                     >> 0xaU) - (IData)(0xfU)));
    if (((((((((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid)) 
               | (1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
              | (2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
             | (3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
            | (4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
           | (5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
          | (6U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
         | (7U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int 
            = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                ? 0U : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                         ? 0x3c00U : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                       ? 0x4000U : 
                                      ((3U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                        ? 0x4200U : 
                                       ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                         ? 0x4400U : 
                                        ((5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                          ? 0x4500U
                                          : ((6U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                              ? 0x4600U
                                              : 0x4700U)))))));
    } else if (((((((((8U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid)) 
                      | (9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
                     | (0xaU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
                    | (0xbU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
                   | (0xcU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
                  | (0xdU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
                 | (0xeU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) 
                | (0xfU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int 
            = ((8U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                ? 0x4800U : ((9U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                              ? 0x4880U : ((0xaU == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                            ? 0x4900U
                                            : ((0xbU 
                                                == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                                ? 0x4980U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                                    ? 0x4a00U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                                     ? 0x4a80U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))
                                                      ? 0x4b00U
                                                      : 0x4b80U)))))));
    } else if ((0x10U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int = 0x4c00U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 1U;
    if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 0U;
                }
            }
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp 
                    = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                        ? (0x10U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2) 
                                        >> 0xfU)) << 4U))
                        : 0U);
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A = 0ULL;
        } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 1U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 0U;
            }
            if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
                    = (0x1f4ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp 
                    = ((0x13U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp)) 
                       | ((8U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2) 
                                     >> 0xfU)) << 3U)) 
                          | (4U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2) 
                                       >> 0xfU)) << 2U))));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp 
                    = ((0x1cU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp)) 
                       | ((2U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2) 
                                     >> 0xfU)) << 1U)) 
                          | (1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2) 
                                      >> 0xfU)))));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp 
                    = (0xfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
                    = (0x1f4ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U));
            }
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 1U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
                = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                    ? 0ULL : (0x1f5ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U)));
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
            }
        }
    } else {
        if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 1U;
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
                    = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                        ? (0x1f5ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U))
                        : (0x1f5ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
                    = (0x1f5ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A = 0ULL;
            }
        } else {
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 1U;
                if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
                }
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
                    = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                        ? 0ULL : (0x1f4ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U)));
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
                    = (0x1f4ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A = 0ULL;
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x = 0U;
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready 
        = ((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                  >> 3U)) && ((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                                     >> 2U)) && ((1U 
                                                  & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready)
            ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg)
            : 0U);
}
