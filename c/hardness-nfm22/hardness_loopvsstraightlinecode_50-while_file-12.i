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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1250_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 1967984875;
float var_1_10 = 256.625;
float var_1_11 = 24.5;
float var_1_12 = 999999.25;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
double var_1_15 = 127.3;
float var_1_16 = 15.8;
double var_1_17 = -0.4;
unsigned long int var_1_18 = 8;
unsigned long int var_1_19 = 2366774301;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 5;
signed char var_1_22 = 0;
signed char var_1_23 = 2;
unsigned char last_1_var_1_1 = 5;
unsigned long int last_1_var_1_18 = 8;
signed char last_1_var_1_22 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = var_1_9 >= last_1_var_1_22;
 signed long int stepLocal_1 = last_1_var_1_1;
 if (stepLocal_1 > last_1_var_1_18) {
  var_1_18 = ((((var_1_9) < ((var_1_19 - var_1_6))) ? (var_1_9) : ((var_1_19 - var_1_6))));
 } else {
  if (var_1_20 || stepLocal_2) {
   var_1_18 = var_1_6;
  } else {
   var_1_18 = var_1_7;
  }
 }
 if (last_1_var_1_1 > (var_1_18 * var_1_18)) {
  var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
 } else {
  var_1_1 = ((((var_1_7) < ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))) ? (var_1_7) : ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))));
 }
 var_1_21 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 unsigned char stepLocal_0 = var_1_6;
 if ((- var_1_18) > stepLocal_0) {
  var_1_8 = ((var_1_9 - var_1_21) - var_1_5);
 }
 signed long int stepLocal_3 = var_1_8;
 if (var_1_18 == stepLocal_3) {
  if (! var_1_20) {
   var_1_22 = ((((var_1_6) > ((5 - var_1_7))) ? (var_1_6) : ((5 - var_1_7))));
  } else {
   var_1_22 = (var_1_7 + var_1_23);
  }
 }
 if (var_1_8 != ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) {
  var_1_10 = ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)));
 } else {
  if (var_1_13 || var_1_14) {
   var_1_10 = var_1_11;
  }
 }
 if ((var_1_12 / var_1_16) >= var_1_10) {
  var_1_15 = (var_1_17 + 255.5);
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 64);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1073741822);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((((last_1_var_1_1 > (var_1_18 * var_1_18)) ? (var_1_1 == ((unsigned char) (var_1_5 - (var_1_6 + var_1_7)))) : (var_1_1 == ((unsigned char) ((((var_1_7) < ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))) ? (var_1_7) : ((((((16) < 0 ) ? -(16) : (16))) + var_1_6))))))) && (((- var_1_18) > var_1_6) ? (var_1_8 == ((signed long int) ((var_1_9 - var_1_21) - var_1_5))) : 1)) && ((var_1_8 != ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5)))) ? (var_1_10 == ((float) ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))) : ((var_1_13 || var_1_14) ? (var_1_10 == ((float) var_1_11)) : 1))) && (((var_1_12 / var_1_16) >= var_1_10) ? (var_1_15 == ((double) (var_1_17 + 255.5))) : 1)) && ((last_1_var_1_1 > last_1_var_1_18) ? (var_1_18 == ((unsigned long int) ((((var_1_9) < ((var_1_19 - var_1_6))) ? (var_1_9) : ((var_1_19 - var_1_6)))))) : ((var_1_20 || (var_1_9 >= last_1_var_1_22)) ? (var_1_18 == ((unsigned long int) var_1_6)) : (var_1_18 == ((unsigned long int) var_1_7))))) && (var_1_21 == ((signed short int) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) && ((var_1_18 == var_1_8) ? ((! var_1_20) ? (var_1_22 == ((signed char) ((((var_1_6) > ((5 - var_1_7))) ? (var_1_6) : ((5 - var_1_7)))))) : (var_1_22 == ((signed char) (var_1_7 + var_1_23)))) : 1)
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
