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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15050_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 0.8;
double var_1_2 = 8.2;
double var_1_3 = 100000000000.5;
double var_1_4 = 63.2;
double var_1_5 = 0.2;
double var_1_6 = 127.5;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed short int var_1_12 = 10;
signed long int var_1_16 = -500;
float var_1_17 = 8.25;
unsigned char var_1_19 = 32;
signed long int var_1_21 = 1148353404;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 8;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 50;
float var_1_27 = 99.6;
unsigned long int var_1_28 = 64;
unsigned long int var_1_29 = 3474601576;
void initially(void) {
}
void step(void) {
 if (var_1_2 < (var_1_3 - var_1_4)) {
  var_1_1 = (var_1_5 + var_1_6);
 }
 if (var_1_8) {
  var_1_7 = (var_1_9 && var_1_10);
 } else {
  var_1_7 = (! var_1_11);
 }
 if (var_1_5 >= ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))) {
  var_1_24 = var_1_22;
 } else {
  var_1_24 = ((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26)));
 }
 if (var_1_7) {
  if (var_1_7) {
   var_1_28 = (var_1_29 - var_1_25);
  }
 }
 if ((var_1_3 / var_1_17) >= ((var_1_1 / 16.69) * var_1_1)) {
  var_1_16 = var_1_28;
 }
 unsigned long int stepLocal_1 = var_1_28;
 if ((- var_1_6) > var_1_3) {
  if (stepLocal_1 > ((var_1_24 * var_1_28) * (var_1_21 - var_1_28))) {
   if (var_1_11) {
    var_1_19 = var_1_22;
   } else {
    var_1_19 = 128;
   }
  } else {
   var_1_19 = var_1_23;
  }
 }
 signed long int stepLocal_0 = (var_1_19 + 200) & var_1_24;
 if (stepLocal_0 != var_1_28) {
  var_1_12 = var_1_24;
 }
 signed short int stepLocal_2 = var_1_12;
 if (stepLocal_2 < (var_1_25 ^ (var_1_24 % 1))) {
  var_1_27 = ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 2147483647);
 assume_abort_if_not(var_1_29 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 < (var_1_3 - var_1_4)) ? (var_1_1 == ((double) (var_1_5 + var_1_6))) : 1) && (var_1_8 ? (var_1_7 == ((unsigned char) (var_1_9 && var_1_10))) : (var_1_7 == ((unsigned char) (! var_1_11))))) && ((((var_1_19 + 200) & var_1_24) != var_1_28) ? (var_1_12 == ((signed short int) var_1_24)) : 1)) && (((var_1_3 / var_1_17) >= ((var_1_1 / 16.69) * var_1_1)) ? (var_1_16 == ((signed long int) var_1_28)) : 1)) && (((- var_1_6) > var_1_3) ? ((var_1_28 > ((var_1_24 * var_1_28) * (var_1_21 - var_1_28))) ? (var_1_11 ? (var_1_19 == ((unsigned char) var_1_22)) : (var_1_19 == ((unsigned char) 128))) : (var_1_19 == ((unsigned char) var_1_23))) : 1)) && ((var_1_5 >= ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))) ? (var_1_24 == ((unsigned char) var_1_22)) : (var_1_24 == ((unsigned char) ((((var_1_25 - var_1_26) < 0 ) ? -(var_1_25 - var_1_26) : (var_1_25 - var_1_26))))))) && ((var_1_12 < (var_1_25 ^ (var_1_24 % 1))) ? (var_1_27 == ((float) ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) : 1)) && (var_1_7 ? (var_1_7 ? (var_1_28 == ((unsigned long int) (var_1_29 - var_1_25))) : 1) : 1)
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
