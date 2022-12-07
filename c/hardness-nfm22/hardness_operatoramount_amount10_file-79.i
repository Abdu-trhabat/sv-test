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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 3.375;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 4257803242;
unsigned long int var_1_4 = 16;
unsigned long int var_1_5 = 256;
double var_1_6 = 7.375;
double var_1_7 = 9.9;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = var_1_5;
 unsigned long int stepLocal_0 = ((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5));
 if (stepLocal_0 <= 50u) {
  if (var_1_2) {
   if (var_1_3 > stepLocal_1) {
    var_1_1 = (var_1_6 + var_1_7);
   }
  }
 } else {
  var_1_1 = var_1_7;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 2147483647);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return ((((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))) <= 50u) ? (var_1_2 ? ((var_1_3 > var_1_5) ? (var_1_1 == ((double) (var_1_6 + var_1_7))) : 1) : 1) : (var_1_1 == ((double) var_1_7))
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
