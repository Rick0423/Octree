// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOctree_tb.h for the primary calling header

#include "VOctree_tb__pch.h"
#include "VOctree_tb___024root.h"

extern const VlWide<10>/*319:0*/ VOctree_tb__ConstPool__CONST_hcc7efbb3_0;

VL_INLINE_OPT void VOctree_tb___024root___nba_comb__TOP__1(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___nba_comb__TOP__1\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                                                            || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_GWEN))))
                                                    : 
                                                   ((2U 
                                                     != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg)) 
                                                    || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_GWEN))));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_CEN 
        = ((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n))) 
           || ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN)
                : ((1U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                   || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_CEN))));
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
        if ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_D 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_D;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q = 0ULL;
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q 
                = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q;
        } else {
            if ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_D 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_D;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q 
                    = vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q;
            } else {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_D = 0ULL;
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q = 0ULL;
            }
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
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_D = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr = 0ULL;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid = 0U;
        vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid = 0U;
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
                                   [1U], ((IData)(3U) 
                                          * ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                             - (IData)(1U)))));
        }
        if ((2U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                   [2U], ((IData)(3U) 
                                          * ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                             - (IData)(2U)))));
        }
        if ((3U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                   [3U], ((IData)(3U) 
                                          * ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                             - (IData)(3U)))));
        }
        if ((4U < (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level))) {
            vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                = (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_ 
                   + VL_SHIFTL_QQI(64,64,32, vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset
                                   [4U], ((IData)(3U) 
                                          * ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level) 
                                             - (IData)(4U)))));
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
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos = 0ULL;
    if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))) {
                vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                    = ((1U & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state))
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
                                                                    >> 0x30U)))))));
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
    vlSelfRef.Octree_tb__DOT__mem_sram_CEN = ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg)) 
                                              || ((1U 
                                                   == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                                   ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_CEN)
                                                   : 
                                                  ((2U 
                                                    != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg)) 
                                                   || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_CEN))));
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

VL_INLINE_OPT void VOctree_tb___024root___nba_comb__TOP__2(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___nba_comb__TOP__2\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__dist_max))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre));
    vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_s_temp 
        = ((0x8000U & (IData)(vlSelfRef.Octree_tb__DOT__s))
            ? 0x7c01U : (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre));
}

void VOctree_tb___024root___timing_commit(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___timing_commit\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbdc227dd__0.commit(
                                                   "@( Octree_tb.out_ready)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0659bcd1__0.commit(
                                                   "@( Octree_tb.search_done)");
    }
}

void VOctree_tb___024root___timing_resume(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___timing_resume\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbdc227dd__0.resume(
                                                   "@( Octree_tb.out_ready)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0659bcd1__0.resume(
                                                   "@( Octree_tb.search_done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VOctree_tb___024root___eval_triggers__act(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___eval_act(VOctree_tb___024root* vlSelf);

bool VOctree_tb___024root___eval_phase__act(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_phase__act\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VOctree_tb___024root___eval_triggers__act(vlSelf);
    VOctree_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VOctree_tb___024root___timing_resume(vlSelf);
        VOctree_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VOctree_tb___024root___eval_nba(VOctree_tb___024root* vlSelf);

bool VOctree_tb___024root___eval_phase__nba(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_phase__nba\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VOctree_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__nba(VOctree_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__act(VOctree_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VOctree_tb___024root___eval(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VOctree_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/Octree_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VOctree_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/Octree_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VOctree_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VOctree_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VOctree_tb___024root___eval_debug_assertions(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_debug_assertions\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
