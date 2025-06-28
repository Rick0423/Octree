// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOctree_tb.h for the primary calling header

#include "VOctree_tb__pch.h"
#include "VOctree_tb__Syms.h"
#include "VOctree_tb___024root.h"

VL_ATTR_COLD void VOctree_tb___024root___eval_initial__TOP(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_initial__TOP\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x655f7462U;
    __Vtemp_1[2U] = 0x63747265U;
    __Vtemp_1[3U] = 0x74732f4fU;
    __Vtemp_1[4U] = 0x75747075U;
    __Vtemp_1[5U] = 0x2e2f6fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 64, 20280, 0, std::string{"sram.txt"}
                 ,  &(vlSelfRef.Octree_tb__DOT__u_sram__DOT__memory)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOctree_tb___024root___dump_triggers__stl(VOctree_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VOctree_tb___024root___eval_triggers__stl(VOctree_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root___eval_triggers__stl\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VOctree_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
