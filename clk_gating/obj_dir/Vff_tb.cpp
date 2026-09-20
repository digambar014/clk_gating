// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vff_tb.h"
#include "Vff_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vff_tb::Vff_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vff_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vff_tb::Vff_tb(const char* _vcname__)
    : Vff_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vff_tb::~Vff_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vff_tb___024root___eval_debug_assertions(Vff_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vff_tb___024root___eval_static(Vff_tb___024root* vlSelf);
void Vff_tb___024root___eval_initial(Vff_tb___024root* vlSelf);
void Vff_tb___024root___eval_settle(Vff_tb___024root* vlSelf);
void Vff_tb___024root___eval(Vff_tb___024root* vlSelf);

void Vff_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vff_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vff_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vff_tb___024root___eval_static(&(vlSymsp->TOP));
        Vff_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vff_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vff_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vff_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vff_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vff_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vff_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vff_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vff_tb___024root___eval_final(Vff_tb___024root* vlSelf);

VL_ATTR_COLD void Vff_tb::final() {
    Vff_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vff_tb::hierName() const { return vlSymsp->name(); }
const char* Vff_tb::modelName() const { return "Vff_tb"; }
unsigned Vff_tb::threads() const { return 1; }
void Vff_tb::prepareClone() const { contextp()->prepareClone(); }
void Vff_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vff_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vff_tb___024root__trace_init_top(Vff_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vff_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vff_tb___024root*>(voidSelf);
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vff_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vff_tb___024root__trace_register(Vff_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vff_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vff_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vff_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
