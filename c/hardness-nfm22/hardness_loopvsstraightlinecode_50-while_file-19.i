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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1950_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -64;
unsigned char var_1_2 = 128;
unsigned char var_1_3 = 64;
signed short int var_1_6 = -16;
unsigned short int var_1_7 = 56838;
unsigned short int var_1_8 = 24612;
signed short int var_1_9 = 20013;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = 50;
unsigned char var_1_15 = 0;
signed short int var_1_19 = 100;
double var_1_21 = 3.5;
signed short int var_1_23 = -128;
float var_1_24 = 10.2;
float var_1_25 = 8.6;
float var_1_26 = 32.7;
float var_1_27 = 16.25;
float var_1_28 = 8.875;
unsigned short int var_1_29 = 256;
unsigned char last_1_var_1_15 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_15) {
  var_1_10 = (var_1_12 || var_1_13);
 }
 if (var_1_10) {
  var_1_24 = ((((var_1_25) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_25) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))));
 } else {
  var_1_24 = ((((var_1_27 - var_1_28) < 0 ) ? -(var_1_27 - var_1_28) : (var_1_27 - var_1_28)));
 }
 if ((- var_1_24) == (var_1_24 + var_1_24)) {
  var_1_15 = var_1_12;
 }
 if (var_1_24 == ((((((((3.3) > (var_1_24)) ? (3.3) : (var_1_24)))) > ((var_1_24 / var_1_21))) ? (((((3.3) > (var_1_24)) ? (3.3) : (var_1_24)))) : ((var_1_24 / var_1_21))))) {
  if (var_1_10) {
   var_1_19 = (var_1_3 + ((((var_1_2) < (var_1_23)) ? (var_1_2) : (var_1_23))));
  } else {
   var_1_19 = (var_1_3 - 8);
  }
 } else {
  var_1_19 = var_1_2;
 }
 if (var_1_24 != var_1_24) {
  var_1_29 = ((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3)));
 }
 signed long int stepLocal_1 = var_1_7 - (var_1_8 - var_1_2);
 if (stepLocal_1 >= var_1_29) {
  var_1_6 = (var_1_3 - (var_1_9 - var_1_2));
 }
 if (var_1_15) {
  var_1_14 = (((((((((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) < 0 ) ? -((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) : ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)))))) < (var_1_9)) ? ((((((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) < 0 ) ? -((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) : ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)))))) : (var_1_9)));
 }
 signed long int stepLocal_0 = var_1_2 - var_1_3;
 if (stepLocal_0 <= ((((var_1_29) > (var_1_6)) ? (var_1_29) : (var_1_6)))) {
  var_1_1 = ((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3)));
 } else {
  var_1_1 = var_1_2;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 127);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65535);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 16383);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -16383);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854765600e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_15 = var_1_15;
}
int property() {
 return (((((((((var_1_2 - var_1_3) <= ((((var_1_29) > (var_1_6)) ? (var_1_29) : (var_1_6)))) ? (var_1_1 == ((signed long int) ((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))))) : (var_1_1 == ((signed long int) var_1_2))) && (((var_1_7 - (var_1_8 - var_1_2)) >= var_1_29) ? (var_1_6 == ((signed short int) (var_1_3 - (var_1_9 - var_1_2)))) : 1)) && (last_1_var_1_15 ? (var_1_10 == ((unsigned char) (var_1_12 || var_1_13))) : 1)) && (var_1_15 ? (var_1_14 == ((signed short int) (((((((((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) < 0 ) ? -((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) : ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)))))) < (var_1_9)) ? ((((((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) < 0 ) ? -((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2))) : ((((var_1_3) > (var_1_2)) ? (var_1_3) : (var_1_2)))))) : (var_1_9))))) : 1)) && (((- var_1_24) == (var_1_24 + var_1_24)) ? (var_1_15 == ((unsigned char) var_1_12)) : 1)) && ((var_1_24 == ((((((((3.3) > (var_1_24)) ? (3.3) : (var_1_24)))) > ((var_1_24 / var_1_21))) ? (((((3.3) > (var_1_24)) ? (3.3) : (var_1_24)))) : ((var_1_24 / var_1_21))))) ? (var_1_10 ? (var_1_19 == ((signed short int) (var_1_3 + ((((var_1_2) < (var_1_23)) ? (var_1_2) : (var_1_23)))))) : (var_1_19 == ((signed short int) (var_1_3 - 8)))) : (var_1_19 == ((signed short int) var_1_2)))) && (var_1_10 ? (var_1_24 == ((float) ((((var_1_25) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_25) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))))) : (var_1_24 == ((float) ((((var_1_27 - var_1_28) < 0 ) ? -(var_1_27 - var_1_28) : (var_1_27 - var_1_28))))))) && ((var_1_24 != var_1_24) ? (var_1_29 == ((unsigned short int) ((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))))) : 1)
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
