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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 5.5;
float var_1_2 = 10.375;
float var_1_3 = 127.5;
float var_1_4 = 256.2;
signed short int var_1_5 = -8;
signed short int var_1_6 = -1;
signed short int var_1_7 = -25;
signed char var_1_8 = -4;
signed char var_1_9 = 1;
unsigned long int var_1_10 = 128;
signed short int var_1_11 = 25;
signed long int var_1_12 = 1;
unsigned char var_1_13 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_2 <= (- var_1_3)) {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  if (var_1_3 > var_1_2) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = 2.75f;
  }
 }
 if (var_1_1 <= var_1_4) {
  var_1_5 = ((((64) > ((var_1_6 + var_1_7))) ? (64) : ((var_1_6 + var_1_7))));
 } else {
  if (var_1_1 < var_1_4) {
   var_1_5 = var_1_6;
  } else {
   var_1_5 = var_1_7;
  }
 }
 if (var_1_1 < 1.25f) {
  var_1_8 = var_1_9;
 }
 if (var_1_5 >= (var_1_11 >> var_1_12)) {
  if (var_1_13) {
   var_1_10 = var_1_11;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 14);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 <= (- var_1_3)) ? (var_1_1 == ((float) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : ((var_1_3 > var_1_2) ? (var_1_1 == ((float) var_1_4)) : (var_1_1 == ((float) 2.75f)))) && ((var_1_1 <= var_1_4) ? (var_1_5 == ((signed short int) ((((64) > ((var_1_6 + var_1_7))) ? (64) : ((var_1_6 + var_1_7)))))) : ((var_1_1 < var_1_4) ? (var_1_5 == ((signed short int) var_1_6)) : (var_1_5 == ((signed short int) var_1_7))))) && ((var_1_1 < 1.25f) ? (var_1_8 == ((signed char) var_1_9)) : 1)) && ((var_1_5 >= (var_1_11 >> var_1_12)) ? (var_1_13 ? (var_1_10 == ((unsigned long int) var_1_11)) : 1) : 1)
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
