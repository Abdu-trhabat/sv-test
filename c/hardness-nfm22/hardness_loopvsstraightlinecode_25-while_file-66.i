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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6625_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
unsigned short int var_1_4 = 4;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_9 = 38382;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 100;
double var_1_13 = 5.9;
float var_1_15 = 9.375;
double var_1_16 = 64.75;
double var_1_17 = 99.5;
float var_1_18 = 0.75;
unsigned char last_1_var_1_10 = 0;
double last_1_var_1_13 = 5.9;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_10 <= last_1_var_1_10) {
  var_1_1 = (last_1_var_1_10 + ((last_1_var_1_10 + last_1_var_1_10) + (var_1_7 - last_1_var_1_10)));
 } else {
  var_1_1 = (var_1_9 - var_1_7);
 }
 if (var_1_11) {
  if (((var_1_4 % var_1_9) * var_1_1) >= var_1_7) {
   var_1_10 = var_1_12;
  }
 }
 if ((last_1_var_1_13 + var_1_15) < 16.75f) {
  var_1_13 = ((((((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) < (var_1_17)) ? (((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) : (var_1_17)));
 } else {
  if ((var_1_17 / var_1_18) <= 49.6) {
   var_1_13 = var_1_17;
  } else {
   var_1_13 = var_1_16;
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_13 = var_1_13;
}
int property() {
 return (((last_1_var_1_10 <= last_1_var_1_10) ? (var_1_1 == ((unsigned short int) (last_1_var_1_10 + ((last_1_var_1_10 + last_1_var_1_10) + (var_1_7 - last_1_var_1_10))))) : (var_1_1 == ((unsigned short int) (var_1_9 - var_1_7)))) && (var_1_11 ? ((((var_1_4 % var_1_9) * var_1_1) >= var_1_7) ? (var_1_10 == ((unsigned char) var_1_12)) : 1) : 1)) && (((last_1_var_1_13 + var_1_15) < 16.75f) ? (var_1_13 == ((double) ((((((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) < (var_1_17)) ? (((((2.625) > (var_1_16)) ? (2.625) : (var_1_16)))) : (var_1_17))))) : (((var_1_17 / var_1_18) <= 49.6) ? (var_1_13 == ((double) var_1_17)) : (var_1_13 == ((double) var_1_16))))
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
