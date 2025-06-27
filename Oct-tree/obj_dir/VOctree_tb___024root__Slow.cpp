// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOctree_tb.h for the primary calling header

#include "VOctree_tb__pch.h"
#include "VOctree_tb__Syms.h"
#include "VOctree_tb___024root.h"

// Parameter definitions for VOctree_tb___024root
constexpr VlUnpacked<IData/*31:0*/, 5> VOctree_tb___024root::Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__PRIMES;
constexpr VlUnpacked<IData/*31:0*/, 5> VOctree_tb___024root::Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__PRIMES;


void VOctree_tb___024root___ctor_var_reset(VOctree_tb___024root* vlSelf);

VOctree_tb___024root::VOctree_tb___024root(VOctree_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VOctree_tb___024root___ctor_var_reset(this);
}

void VOctree_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VOctree_tb___024root::~VOctree_tb___024root() {
}
