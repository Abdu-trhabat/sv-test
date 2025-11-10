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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11125_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 255.8;
float var_1_2 = 50.5;
double var_1_4 = 64.15;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 16;
signed long int var_1_8 = 1;
unsigned char var_1_9 = 10;
signed long int var_1_10 = -4;
signed long int var_1_11 = 16;
signed long int var_1_12 = 1;
signed long int var_1_13 = 100000;
float var_1_14 = 64.5;
signed char var_1_15 = 8;
signed char var_1_16 = 1;
signed short int var_1_17 = -10;
double last_1_var_1_1 = 255.8;
signed long int last_1_var_1_10 = -4;
void initially(void) {
}
void step(void) {
 if ((- 16) <= last_1_var_1_10) {
  var_1_7 = var_1_9;
 }
 unsigned char stepLocal_1 = var_1_8 <= var_1_7;
 if (((31.4 * var_1_4) >= 4.4) || stepLocal_1) {
  if (var_1_6) {
   var_1_10 = ((var_1_7 - var_1_9) + ((var_1_11 + var_1_12) + var_1_13));
  }
 }
 unsigned char stepLocal_0 = var_1_6;
 if (var_1_2 < last_1_var_1_1) {
  var_1_1 = ((((1.25) < (var_1_4)) ? (1.25) : (var_1_4)));
 } else {
  if (var_1_5 || stepLocal_0) {
   var_1_1 = var_1_4;
  }
 }
 var_1_14 = var_1_4;
 var_1_15 = var_1_16;
 var_1_17 = var_1_16;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -268435455);
 assume_abort_if_not(var_1_11 <= 268435456);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -268435455);
 assume_abort_if_not(var_1_12 <= 268435456);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -536870911);
 assume_abort_if_not(var_1_13 <= 536870911);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return ((((((var_1_2 < last_1_var_1_1) ? (var_1_1 == ((double) ((((1.25) < (var_1_4)) ? (1.25) : (var_1_4))))) : ((var_1_5 || var_1_6) ? (var_1_1 == ((double) var_1_4)) : 1)) && (((- 16) <= last_1_var_1_10) ? (var_1_7 == ((unsigned char) var_1_9)) : 1)) && ((((31.4 * var_1_4) >= 4.4) || (var_1_8 <= var_1_7)) ? (var_1_6 ? (var_1_10 == ((signed long int) ((var_1_7 - var_1_9) + ((var_1_11 + var_1_12) + var_1_13)))) : 1) : 1)) && (var_1_14 == ((float) var_1_4))) && (var_1_15 == ((signed char) var_1_16))) && (var_1_17 == ((signed short int) var_1_16))
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
