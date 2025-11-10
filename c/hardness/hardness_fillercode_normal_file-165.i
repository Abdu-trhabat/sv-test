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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
double var_1_3 = 128.625;
double var_1_4 = 1.4;
double var_1_5 = 2.4;
unsigned long int var_1_6 = 1;
unsigned long int var_1_7 = 64;
signed short int var_1_8 = 16;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 128;
signed short int var_1_11 = -64;
signed short int var_1_12 = 2;
signed short int var_1_13 = 8;
unsigned char var_1_14 = 0;
unsigned short int var_1_15 = 44473;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned short int var_1_19 = 1;
signed char var_1_20 = -128;
unsigned long int var_1_22 = 2551399261;
signed char var_1_23 = -32;
void initially(void) {
}
void step(void) {
 if (var_1_3 <= var_1_4) {
  if (var_1_4 <= ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)))) {
   var_1_1 = (var_1_6 + ((((var_1_7) < (1u)) ? (var_1_7) : (1u))));
  } else {
   var_1_1 = 0u;
  }
 } else {
  var_1_1 = var_1_6;
 }
 if ((var_1_6 / var_1_9) <= 1u) {
  var_1_8 = (var_1_9 + var_1_10);
 } else {
  var_1_8 = ((((var_1_10) > ((var_1_9 + var_1_11))) ? (var_1_10) : ((var_1_9 + var_1_11))));
 }
 if (var_1_3 <= (var_1_4 + var_1_5)) {
  var_1_12 = ((18598 - var_1_13) - var_1_9);
 }
 if (((var_1_15 - var_1_9) * var_1_6) >= var_1_1) {
  if (var_1_9 < (8 + var_1_8)) {
   var_1_14 = (! (var_1_16 || (! var_1_17)));
  } else {
   var_1_14 = (var_1_17 && var_1_18);
  }
 } else {
  var_1_14 = var_1_16;
 }
 unsigned long int stepLocal_0 = var_1_6;
 if (stepLocal_0 < (var_1_15 | var_1_1)) {
  var_1_19 = var_1_13;
 }
 if (var_1_18) {
  if (9.25 >= var_1_3) {
   if ((var_1_6 + (var_1_13 / 4u)) >= (var_1_22 - var_1_15)) {
    var_1_20 = var_1_23;
   }
  }
 } else {
  var_1_20 = var_1_23;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 255);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -16383);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -16383);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65535);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_3 <= var_1_4) ? ((var_1_4 <= ((((var_1_3) < (var_1_5)) ? (var_1_3) : (var_1_5)))) ? (var_1_1 == ((unsigned long int) (var_1_6 + ((((var_1_7) < (1u)) ? (var_1_7) : (1u)))))) : (var_1_1 == ((unsigned long int) 0u))) : (var_1_1 == ((unsigned long int) var_1_6))) && (((var_1_6 / var_1_9) <= 1u) ? (var_1_8 == ((signed short int) (var_1_9 + var_1_10))) : (var_1_8 == ((signed short int) ((((var_1_10) > ((var_1_9 + var_1_11))) ? (var_1_10) : ((var_1_9 + var_1_11)))))))) && ((var_1_3 <= (var_1_4 + var_1_5)) ? (var_1_12 == ((signed short int) ((18598 - var_1_13) - var_1_9))) : 1)) && ((((var_1_15 - var_1_9) * var_1_6) >= var_1_1) ? ((var_1_9 < (8 + var_1_8)) ? (var_1_14 == ((unsigned char) (! (var_1_16 || (! var_1_17))))) : (var_1_14 == ((unsigned char) (var_1_17 && var_1_18)))) : (var_1_14 == ((unsigned char) var_1_16)))) && ((var_1_6 < (var_1_15 | var_1_1)) ? (var_1_19 == ((unsigned short int) var_1_13)) : 1)) && (var_1_18 ? ((9.25 >= var_1_3) ? (((var_1_6 + (var_1_13 / 4u)) >= (var_1_22 - var_1_15)) ? (var_1_20 == ((signed char) var_1_23)) : 1) : 1) : (var_1_20 == ((signed char) var_1_23)))
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
