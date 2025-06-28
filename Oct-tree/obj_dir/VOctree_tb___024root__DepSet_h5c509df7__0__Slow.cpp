// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOctree_tb.h for the primary calling header

#include "VOctree_tb__pch.h"
#include "VOctree_tb___024root.h"

VL_ATTR_COLD void VOctree_tb___024root___eval_static__TOP(VOctree_tb___024root* vlSelf);
VL_ATTR_COLD void VOctree_tb___024root____Vm_traceActivitySetAll(VOctree_tb___024root* vlSelf);

VL_ATTR_COLD void VOctree_tb___024root___eval_static(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_static\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VOctree_tb___024root___eval_static__TOP(vlSelf);
    VOctree_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VOctree_tb___024root___eval_static__TOP(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_static__TOP\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_temp = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr = 0U;
}

VL_ATTR_COLD void VOctree_tb___024root___eval_final(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_final\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__stl(VOctree_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VOctree_tb___024root___eval_phase__stl(VOctree_tb___024root* vlSelf);

VL_ATTR_COLD void VOctree_tb___024root___eval_settle(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_settle\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VOctree_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/Octree_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VOctree_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__stl(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___dump_triggers__stl\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VOctree_tb___024root___stl_sequent__TOP__0(VOctree_tb___024root* vlSelf);

VL_ATTR_COLD void VOctree_tb___024root___eval_stl(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_stl\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VOctree_tb___024root___stl_sequent__TOP__0(vlSelf);
        VOctree_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlWide<10>/*319:0*/ VOctree_tb__ConstPool__CONST_hcc7efbb3_0;

VL_ATTR_COLD void VOctree_tb___024root___stl_sequent__TOP__0(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___stl_sequent__TOP__0\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 0U;
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 0U;
    if ((1U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk5__DOT__a = 5U;
        }
        if ((2U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk6__DOT__a = 5U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n)))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk7__DOT__i = 8U;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level 
        = (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                 >> 0xfU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level 
        = (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                 >> 0xfU));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__dist_max))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_s_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__s))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr) 
           == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_full 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr) 
           == ((0x20U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr) 
                             >> 5U)) << 5U)) | (0x1fU 
                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr) 
           == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_full 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr) 
           == ((0x20U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr) 
                             >> 5U)) << 5U)) | (0x1fU 
                                                & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready 
        = ((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                  >> 3U)) && ((1U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                                     >> 2U)) && ((1U 
                                                  & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))))));
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
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 1U;
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
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk8__DOT__i = 8U;
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
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active 
        = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready)
            ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg)
            : 0U);
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
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 0xeU : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp 
                    = (0x10U & ((~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2) 
                                    >> 0xfU)) << 4U));
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 0xdU : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 1U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = 0U;
            }
            if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 0xcU : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 0xbU : 0U);
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
            }
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 1U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                    ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 0xaU : 0U) : ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                         ? 9U : 0U));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
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
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                        ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                            ? 8U : 0U) : ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                           ? 7U : 0U));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x = 0U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 6U : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 5U : 0U);
            }
        } else {
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = 1U;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                        ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                            ? 4U : 0U) : ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                           ? 3U : 0U));
                if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
                    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                        ? 2U : 0U);
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = 0U;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state 
                    = ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod)
                        ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                            ? 1U : 0U) : 0U);
            }
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x = 0U;
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = 0U;
    }
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
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q 
        = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
            ? 0ULL : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                       ? vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg
                       : 0ULL));
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
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
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr 
            = ((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))
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
                                    : 0ULL))))) : 0ULL);
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr = 0ULL;
    }
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D 
        = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
            ? 0ULL : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
                       ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D
                       : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
                           ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D
                           : 0ULL)));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q 
        = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
            ? 0ULL : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                       ? 0ULL : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                  ? vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg
                                  : 0ULL)));
    if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q = 0ULL;
    } else if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q 
            = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q = 0ULL;
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q 
            = ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater))
                ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q
                : 0ULL);
    }
    if (vlSelfRef.Octree_tb__DOT__rst_n) {
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
    } else {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid = 0U;
    }
    if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk4__DOT__a = 5U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__unnamedblk9__DOT__i = 5U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num 
            = (0xfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg));
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level 
            = (7U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first)
                      ? 0U : ((IData)(1U) + (7U & (IData)(
                                                          (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg 
                                                           >> 0x2bU))))));
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
    } else {
        if ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num 
                = (0xfU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg));
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level 
                = (7U & ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first)
                          ? 0U : (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                >> 0x2bU)))));
            if ((0U == (7U & (IData)((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                      >> 0x2bU))))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0 
                    = (QData)((IData)(((0x17U >= (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt))))
                                        ? (7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                        : 0U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0U] 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                    = (QData)((IData)((7U & (IData)(
                                                    (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
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
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                        : 0U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1U] 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                    = (QData)((IData)((7U & (IData)(
                                                    (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
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
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                        : 0U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2U] 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                    = (QData)((IData)((7U & (IData)(
                                                    (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
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
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                        : 0U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3U] 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                    = (QData)((IData)((7U & (IData)(
                                                    (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
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
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt)))))
                                        : 0U)));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 
                    = (QData)((IData)((7U & (IData)(
                                                    (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg 
                                                     >> 0x1cU)))));
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1;
            }
        } else {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num = 0U;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level 
                = (7U & 0U);
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0U] = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1U] = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2U] = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3U] = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4U] = 0ULL;
        }
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num = 0U;
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
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_for_sram 
        = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address 
           >> 2U);
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
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
        = (0xffff000000000000ULL & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos);
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
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A 
        = ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
            ? ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                ? 0ULL : ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                           ? ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                               ? (0x1f4ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U))
                               : (0x1f4ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U)))
                           : ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                               ? 0ULL : (0x1f5ULL + 
                                         VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U)))))
            : ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                ? ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                        ? (0x1f5ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U))
                        : (0x1f5ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U)))
                    : ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                        ? (0x1f5ULL + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U))
                        : 0ULL)) : ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                                     ? ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                                         ? 0ULL : (0x1f4ULL 
                                                   + 
                                                   VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U)))
                                     : ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
                                         ? (0x1f4ULL 
                                            + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count)), 1U))
                                         : 0ULL))));
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
    if ((8U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
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
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                    = ((0xffff0000U & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]) 
                       | (0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q)));
            }
        } else if ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
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
        }
    } else if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state)))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_temp 
                = (0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U]);
        }
    }
}

VL_ATTR_COLD void VOctree_tb___024root___eval_triggers__stl(VOctree_tb___024root* vlSelf);

VL_ATTR_COLD bool VOctree_tb___024root___eval_phase__stl(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_phase__stl\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VOctree_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VOctree_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__act(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___dump_triggers__act\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Octree_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge Octree_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( Octree_tb.u_Octree.searcher_inst.u_tree_search.out_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( Octree_tb.search_done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__nba(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___dump_triggers__nba\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Octree_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge Octree_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( Octree_tb.u_Octree.searcher_inst.u_tree_search.out_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( Octree_tb.search_done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VOctree_tb___024root____Vm_traceActivitySetAll(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root____Vm_traceActivitySetAll\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void VOctree_tb___024root___ctor_var_reset(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___ctor_var_reset\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->Octree_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__pos_encode = VL_RAND_RESET_I(18);
    vlSelf->Octree_tb__DOT__feature_in = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__ctrl = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__tree_num = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__cam_pos = VL_RAND_RESET_Q(48);
    vlSelf->Octree_tb__DOT__dist_max = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__s = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__mem_sram_CEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__mem_sram_A = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__mem_sram_GWEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__search_done = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__del_done = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__add_done = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_sram_CEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_sram_A = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_sram_D = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_sram_Q = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_sram_GWEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__search_start_reg = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_D = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__current_tree_count = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_pow2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__i_to_fp16_cut = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_3 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_4 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_5 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_6 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_7 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer_8 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__int_layer = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__te = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_s_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2 = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_temp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_sub = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_sub = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_sub = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction = VL_RAND_RESET_I(22);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__mantissa = VL_RAND_RESET_I(10);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction = VL_RAND_RESET_I(11);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_A = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_D = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_GWEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state = VL_RAND_RESET_I(3);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__outing_done = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode = VL_RAND_RESET_I(18);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data = VL_RAND_RESET_I(8);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data = VL_RAND_RESET_I(8);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos = VL_RAND_RESET_I(24);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_count = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos = VL_RAND_RESET_I(24);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_count = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset_level_valid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wr_en = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_full = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wdata = VL_RAND_RESET_Q(46);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wr_en = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_full = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wdata = VL_RAND_RESET_Q(46);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_posencode = VL_RAND_RESET_I(18);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice = VL_RAND_RESET_I(24);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice = VL_RAND_RESET_I(24);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__hash_addr = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__get_intersted_data__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk4__DOT__a = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk5__DOT__a = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk6__DOT__a = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h83fb95d5__0 = VL_RAND_RESET_I(3);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h90a88610__0 = VL_RAND_RESET_I(3);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__0 = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h4fc733af__1 = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__0 = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_hddaaacd0__1 = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h6a9457ca__0 = VL_RAND_RESET_I(3);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT____Vlvbound_h86d240a8__0 = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg = VL_RAND_RESET_Q(46);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT____Vlvbound_h8b8116e7__0 = VL_RAND_RESET_Q(46);
    for (int __Vi0 = 0; __Vi0 < 28; ++__Vi0) {
        vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg = VL_RAND_RESET_Q(46);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT____Vlvbound_h8b8116e7__0 = VL_RAND_RESET_Q(46);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater = VL_RAND_RESET_I(3);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer = VL_RAND_RESET_I(3);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state = VL_RAND_RESET_I(3);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_cnt = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos = VL_RAND_RESET_I(18);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(576, vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__level = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_ = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_for_sram = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hold_input_data__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT____Vlvbound_hd80ebf1d__0 = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state = VL_RAND_RESET_I(2);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__reg_pos = VL_RAND_RESET_I(18);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate = VL_RAND_RESET_I(18);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt = VL_RAND_RESET_I(4);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data = VL_RAND_RESET_I(16);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__level = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_ = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid = VL_RAND_RESET_I(1);
    vlSelf->Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 20280; ++__Vi0) {
        vlSelf->Octree_tb__DOT__u_sram__DOT__memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->Octree_tb__DOT__u_sram__DOT____Vlvbound_heeb58653__0 = VL_RAND_RESET_Q(64);
    vlSelf->Octree_tb__DOT__u_sram__DOT____Vlvbound_hf20472cc__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__Octree_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Octree_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Octree_tb__DOT__search_done__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
