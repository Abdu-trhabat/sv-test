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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch68normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 32;
float var_1_2 = 64.5;
float var_1_3 = 16.8;
signed long int var_1_8 = 10;
unsigned char var_1_9 = 0;
double var_1_10 = 25.5;
double var_1_11 = 9999999999999.729;
double var_1_12 = 999.8;
signed short int var_1_13 = -25;
signed short int var_1_14 = -64;
signed short int var_1_15 = 0;
signed short int var_1_16 = -8;
signed long int var_1_17 = 5;
unsigned long int var_1_18 = 0;
unsigned long int var_1_19 = 8;
float var_1_20 = 32.375;
signed long int var_1_21 = -10;
signed short int last_1_var_1_13 = -25;
signed long int last_1_var_1_17 = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = var_1_8 + last_1_var_1_17;
 if (var_1_9) {
  if (last_1_var_1_13 <= stepLocal_2) {
   var_1_13 = ((var_1_14 + var_1_15) + var_1_16);
  } else {
   var_1_13 = var_1_15;
  }
 } else {
  var_1_13 = var_1_15;
 }
 var_1_17 = (var_1_13 + var_1_14);
 var_1_18 = var_1_19;
 var_1_20 = var_1_12;
 var_1_21 = var_1_17;
 signed long int stepLocal_1 = var_1_17;
 if (stepLocal_1 != var_1_21) {
  var_1_10 = (var_1_11 - var_1_12);
 }
 unsigned long int stepLocal_0 = var_1_18 + var_1_21;
 if ((var_1_2 - var_1_3) >= var_1_10) {
  if (stepLocal_0 >= (var_1_13 / var_1_8)) {
   var_1_1 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
  }
 } else {
  if (var_1_9) {
   var_1_1 = ((((var_1_21) > (var_1_18)) ? (var_1_21) : (var_1_18)));
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -8191);
 assume_abort_if_not(var_1_14 <= 8192);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -8191);
 assume_abort_if_not(var_1_15 <= 8191);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -16383);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_17 = var_1_17;
}
int property() {
 return ((((((((var_1_2 - var_1_3) >= var_1_10) ? (((var_1_18 + var_1_21) >= (var_1_13 / var_1_8)) ? (var_1_1 == ((signed long int) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) : 1) : (var_1_9 ? (var_1_1 == ((signed long int) ((((var_1_21) > (var_1_18)) ? (var_1_21) : (var_1_18))))) : 1)) && ((var_1_17 != var_1_21) ? (var_1_10 == ((double) (var_1_11 - var_1_12))) : 1)) && (var_1_9 ? ((last_1_var_1_13 <= (var_1_8 + last_1_var_1_17)) ? (var_1_13 == ((signed short int) ((var_1_14 + var_1_15) + var_1_16))) : (var_1_13 == ((signed short int) var_1_15))) : (var_1_13 == ((signed short int) var_1_15)))) && (var_1_17 == ((signed long int) (var_1_13 + var_1_14)))) && (var_1_18 == ((unsigned long int) var_1_19))) && (var_1_20 == ((float) var_1_12))) && (var_1_21 == ((signed long int) var_1_17))
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
