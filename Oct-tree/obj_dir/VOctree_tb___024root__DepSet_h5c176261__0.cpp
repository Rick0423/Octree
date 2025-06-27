// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOctree_tb.h for the primary calling header

#include "VOctree_tb__pch.h"
#include "VOctree_tb__Syms.h"
#include "VOctree_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__act(VOctree_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VOctree_tb___024root___eval_triggers__act(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_triggers__act\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.Octree_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.Octree_tb__DOT__out_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__out_ready__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.Octree_tb__DOT__search_done) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__search_done__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__clk__0 
        = vlSelfRef.Octree_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__rst_n__0 
        = vlSelfRef.Octree_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__out_ready__0 
        = vlSelfRef.Octree_tb__DOT__out_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__Octree_tb__DOT__search_done__0 
        = vlSelfRef.Octree_tb__DOT__search_done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VOctree_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
