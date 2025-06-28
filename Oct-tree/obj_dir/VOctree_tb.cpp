// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VOctree_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VOctree_tb::VOctree_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VOctree_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VOctree_tb::VOctree_tb(const char* _vcname__)
    : VOctree_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VOctree_tb::~VOctree_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VOctree_tb___024root___eval_debug_assertions(VOctree_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VOctree_tb___024root___eval_static(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___eval_initial(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___eval_settle(VOctree_tb___024root* vlSelf);
void VOctree_tb___024root___eval(VOctree_tb___024root* vlSelf);

void VOctree_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VOctree_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VOctree_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VOctree_tb___024root___eval_static(&(vlSymsp->TOP));
        VOctree_tb___024root___eval_initial(&(vlSymsp->TOP));
        VOctree_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VOctree_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VOctree_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VOctree_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VOctree_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VOctree_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VOctree_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VOctree_tb___024root___eval_final(VOctree_tb___024root* vlSelf);

VL_ATTR_COLD void VOctree_tb::final() {
    VOctree_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VOctree_tb::hierName() const { return vlSymsp->name(); }
const char* VOctree_tb::modelName() const { return "VOctree_tb"; }
unsigned VOctree_tb::threads() const { return 1; }
void VOctree_tb::prepareClone() const { contextp()->prepareClone(); }
void VOctree_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VOctree_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VOctree_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void VOctree_tb___024root__trace_init_top(VOctree_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VOctree_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOctree_tb___024root*>(voidSelf);
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VOctree_tb___024root__trace_decl_types(tracep);
    VOctree_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VOctree_tb___024root__trace_register(VOctree_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VOctree_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VOctree_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VOctree_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
