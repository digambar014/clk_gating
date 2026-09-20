// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff_tb.h for the primary calling header

#include "verilated.h"

#include "Vff_tb__Syms.h"
#include "Vff_tb__Syms.h"
#include "Vff_tb___024root.h"

void Vff_tb___024root___ctor_var_reset(Vff_tb___024root* vlSelf);

Vff_tb___024root::Vff_tb___024root(Vff_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vff_tb___024root___ctor_var_reset(this);
}

void Vff_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vff_tb___024root::~Vff_tb___024root() {
}
