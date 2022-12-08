// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch14Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 16.75;
double var_1_5 = 2.05;
double var_1_6 = 9.375;
double var_1_7 = 64.4;
double var_1_8 = 10000.25;
signed short int var_1_9 = -2;
signed short int var_1_10 = 0;
unsigned short int var_1_11 = 4;
unsigned short int var_1_12 = 128;
void initially(void) {
}
void step(void) {
 var_1_8 = var_1_5;
 var_1_9 = var_1_10;
 var_1_11 = var_1_12;
 signed short int stepLocal_0 = var_1_9;
 if (stepLocal_0 <= (var_1_11 + ((((50) > (var_1_9)) ? (50) : (var_1_9))))) {
  var_1_1 = ((var_1_5 + var_1_6) + var_1_7);
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -230584.3009213691390e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691390e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
}
void updateLastVariables() {
}
int property() {
 return ((((var_1_9 <= (var_1_11 + ((((50) > (var_1_9)) ? (50) : (var_1_9))))) ? (var_1_1 == ((double) ((var_1_5 + var_1_6) + var_1_7))) : 1) && (var_1_8 == ((double) var_1_5))) && (var_1_9 == ((signed short int) var_1_10))) && (var_1_11 == ((unsigned short int) var_1_12))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
