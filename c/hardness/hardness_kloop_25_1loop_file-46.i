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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4625_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
double var_1_2 = 31.75;
signed char var_1_4 = -8;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 16;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 5;
unsigned long int var_1_11 = 0;
unsigned long int var_1_12 = 3298179858;
unsigned long int var_1_13 = 3433151466;
void initially(void) {
}
void step(void) {
 if (! var_1_6) {
  var_1_11 = (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - var_1_9);
 }
 signed long int stepLocal_2 = 2;
 if (stepLocal_2 != var_1_11) {
  var_1_8 = (((((128) > ((200 - var_1_9))) ? (128) : ((200 - var_1_9)))) - var_1_10);
 } else {
  var_1_8 = var_1_9;
 }
 signed long int stepLocal_1 = (((var_1_4) < (var_1_8)) ? (var_1_4) : (var_1_8));
 signed long int stepLocal_0 = var_1_8 / var_1_4;
 if ((- var_1_2) >= 16.75) {
  if (stepLocal_0 >= var_1_11) {
   if (stepLocal_1 > -32) {
    var_1_1 = 0;
   } else {
    var_1_1 = var_1_6;
   }
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_6;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((- var_1_2) >= 16.75) ? (((var_1_8 / var_1_4) >= var_1_11) ? ((((((var_1_4) < (var_1_8)) ? (var_1_4) : (var_1_8))) > -32) ? (var_1_1 == ((unsigned char) 0)) : (var_1_1 == ((unsigned char) var_1_6))) : (var_1_1 == ((unsigned char) var_1_7))) : (var_1_1 == ((unsigned char) var_1_6))) && ((2 != var_1_11) ? (var_1_8 == ((unsigned char) (((((128) > ((200 - var_1_9))) ? (128) : ((200 - var_1_9)))) - var_1_10))) : (var_1_8 == ((unsigned char) var_1_9)))) && ((! var_1_6) ? (var_1_11 == ((unsigned long int) (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - var_1_9))) : 1)
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
