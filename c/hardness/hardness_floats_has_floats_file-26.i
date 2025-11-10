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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
double var_1_2 = 8.0;
double var_1_3 = 200.0;
double var_1_4 = 32.0;
unsigned char var_1_5 = 1;
signed short int var_1_6 = 10000;
signed short int var_1_7 = 10000;
signed short int var_1_8 = 256;
signed short int var_1_9 = 5;
signed long int var_1_10 = 10;
unsigned short int var_1_11 = 32;
unsigned short int var_1_12 = 54672;
double var_1_13 = -100.0;
double var_1_14 = 64.0;
signed long int last_1_var_1_10 = 10;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_5;
 if (var_1_2 > (((((var_1_3 / -5.0)) < (var_1_4)) ? ((var_1_3 / -5.0)) : (var_1_4)))) {
  if (stepLocal_0 || (var_1_3 <= var_1_2)) {
   var_1_1 = (((var_1_6 + var_1_7) - 10) - (var_1_8 + var_1_9));
  } else {
   var_1_1 = (var_1_9 - var_1_8);
  }
 } else {
  var_1_1 = var_1_6;
 }
 signed short int stepLocal_1 = var_1_7;
 if (stepLocal_1 >= (var_1_9 % -5)) {
  if (var_1_2 >= var_1_3) {
   var_1_10 = last_1_var_1_10;
  }
 }
 if (var_1_5 && (var_1_2 == (var_1_4 * var_1_3))) {
  var_1_11 = ((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9)));
 } else {
  var_1_11 = (var_1_12 - var_1_8);
 }
 var_1_13 = var_1_14;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 8191);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return ((((var_1_2 > (((((var_1_3 / -5.0)) < (var_1_4)) ? ((var_1_3 / -5.0)) : (var_1_4)))) ? ((var_1_5 || (var_1_3 <= var_1_2)) ? (var_1_1 == ((signed short int) (((var_1_6 + var_1_7) - 10) - (var_1_8 + var_1_9)))) : (var_1_1 == ((signed short int) (var_1_9 - var_1_8)))) : (var_1_1 == ((signed short int) var_1_6))) && ((var_1_7 >= (var_1_9 % -5)) ? ((var_1_2 >= var_1_3) ? (var_1_10 == ((signed long int) last_1_var_1_10)) : 1) : 1)) && ((var_1_5 && (var_1_2 == (var_1_4 * var_1_3))) ? (var_1_11 == ((unsigned short int) ((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9))))) : (var_1_11 == ((unsigned short int) (var_1_12 - var_1_8))))) && (var_1_13 == ((double) var_1_14))
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
