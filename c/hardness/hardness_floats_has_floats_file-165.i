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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = -8.0;
float var_1_5 = 500.0;
float var_1_6 = 1.0;
float var_1_7 = 5.0;
signed char var_1_8 = -4;
signed long int var_1_9 = 0;
signed long int var_1_10 = 32;
signed char var_1_11 = 0;
signed char var_1_12 = -1;
signed char var_1_13 = -10;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 50;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 64;
unsigned long int var_1_21 = 16;
unsigned long int last_1_var_1_21 = 16;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = last_1_var_1_21;
 if ((last_1_var_1_21 ^ (last_1_var_1_21 / -2)) <= stepLocal_0) {
  if ((var_1_5 - var_1_6) <= -4.0f) {
   var_1_1 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = var_1_7;
 }
 unsigned char stepLocal_2 = var_1_15;
 if ((var_1_1 >= var_1_5) || stepLocal_2) {
  var_1_14 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 } else {
  var_1_14 = ((var_1_18 + var_1_19) + var_1_20);
 }
 if (var_1_14 > var_1_9) {
  var_1_21 = ((var_1_20 + var_1_19) + var_1_18);
 }
 unsigned long int stepLocal_1 = var_1_21;
 if ((var_1_9 - var_1_10) <= stepLocal_1) {
  var_1_8 = (((((var_1_11 + var_1_12)) < (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13)));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 return (((((last_1_var_1_21 ^ (last_1_var_1_21 / -2)) <= last_1_var_1_21) ? (((var_1_5 - var_1_6) <= -4.0f) ? (var_1_1 == ((float) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : (var_1_1 == ((float) var_1_7))) : (var_1_1 == ((float) var_1_7))) && (((var_1_9 - var_1_10) <= var_1_21) ? (var_1_8 == ((signed char) (((((var_1_11 + var_1_12)) < (var_1_13)) ? ((var_1_11 + var_1_12)) : (var_1_13))))) : 1)) && (((var_1_1 >= var_1_5) || var_1_15) ? (var_1_14 == ((unsigned char) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_14 == ((unsigned char) ((var_1_18 + var_1_19) + var_1_20))))) && ((var_1_14 > var_1_9) ? (var_1_21 == ((unsigned long int) ((var_1_20 + var_1_19) + var_1_18))) : 1)
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
