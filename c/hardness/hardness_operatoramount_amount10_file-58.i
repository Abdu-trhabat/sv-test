// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1;
unsigned char var_1_2 = 1;
unsigned long int var_1_3 = 10;
unsigned long int var_1_4 = 1;
signed short int var_1_5 = 10;
signed short int var_1_6 = 128;
signed short int var_1_7 = 0;
signed short int var_1_8 = 50;
signed short int var_1_9 = 25;
signed short int var_1_10 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((((var_1_3 + var_1_4) < 0 ) ? -(var_1_3 + var_1_4) : (var_1_3 + var_1_4)));
 }
 var_1_5 = ((((((var_1_6) > (16)) ? (var_1_6) : (16))) - (var_1_7 + var_1_8)) + (var_1_9 - var_1_10));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 8192);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 8191);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return (var_1_2 ? (var_1_1 == ((unsigned long int) ((((var_1_3 + var_1_4) < 0 ) ? -(var_1_3 + var_1_4) : (var_1_3 + var_1_4))))) : 1) && (var_1_5 == ((signed short int) ((((((var_1_6) > (16)) ? (var_1_6) : (16))) - (var_1_7 + var_1_8)) + (var_1_9 - var_1_10))))
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
