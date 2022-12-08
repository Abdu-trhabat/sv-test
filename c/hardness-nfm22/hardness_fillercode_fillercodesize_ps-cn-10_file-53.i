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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch53PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 10;
float var_1_10 = 99.5;
float var_1_11 = 5.6;
float var_1_12 = 255.5;
float var_1_13 = 31.25;
signed short int var_1_14 = 32;
unsigned long int var_1_15 = 16;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 50;
unsigned char var_1_19 = 50;
signed char var_1_20 = 1;
signed char var_1_21 = -10;
float var_1_22 = 0.5;
signed char var_1_23 = 100;
signed short int var_1_24 = 2;
signed short int var_1_25 = 5;
unsigned short int var_1_26 = 500;
unsigned char var_1_27 = 1;
signed short int var_1_28 = -32;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
signed long int var_1_31 = -2;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 1;
unsigned char last_1_var_1_1 = 0;
unsigned long int last_1_var_1_9 = 10;
signed short int last_1_var_1_14 = 32;
unsigned char last_1_var_1_16 = 1;
signed char last_1_var_1_20 = 1;
void initially(void) {
}
void step(void) {
 var_1_24 = var_1_25;
 if (var_1_27) {
  if (var_1_24 <= (var_1_25 % var_1_28)) {
   var_1_26 = 0;
  }
 }
 var_1_29 = var_1_30;
 var_1_31 = var_1_24;
 var_1_32 = var_1_33;
 var_1_34 = var_1_30;
 unsigned char stepLocal_1 = last_1_var_1_14 > (last_1_var_1_16 - last_1_var_1_16);
 signed long int stepLocal_0 = last_1_var_1_20 * last_1_var_1_20;
 if (stepLocal_0 == last_1_var_1_14) {
  if (stepLocal_1 && last_1_var_1_1) {
   var_1_1 = var_1_8;
  }
 }
 unsigned long int stepLocal_6 = ((((var_1_15) > (last_1_var_1_9)) ? (var_1_15) : (last_1_var_1_9))) / var_1_17;
 if (stepLocal_6 <= (256u << last_1_var_1_16)) {
  var_1_16 = ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19)));
 }
 unsigned char stepLocal_5 = var_1_16 != var_1_16;
 unsigned char stepLocal_4 = var_1_8;
 if ((! var_1_1) || stepLocal_4) {
  var_1_10 = (((((var_1_11 + var_1_12)) < (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? ((var_1_11 + var_1_12)) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))));
 } else {
  if ((var_1_11 < var_1_12) || stepLocal_5) {
   var_1_10 = var_1_13;
  } else {
   var_1_10 = var_1_12;
  }
 }
 var_1_20 = var_1_21;
 var_1_22 = var_1_12;
 var_1_23 = var_1_21;
 if (var_1_1) {
  var_1_14 = ((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16)));
 } else {
  if (((var_1_16 / var_1_15) & var_1_16) >= var_1_20) {
   var_1_14 = var_1_16;
  } else {
   var_1_14 = -128;
  }
 }
 unsigned char stepLocal_3 = var_1_20 != var_1_14;
 signed long int stepLocal_2 = (((var_1_16) < (0)) ? (var_1_16) : (0));
 if ((var_1_1 || (var_1_16 <= var_1_14)) || stepLocal_3) {
  if (stepLocal_2 <= (-5 + var_1_16)) {
   var_1_9 = var_1_16;
  }
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 4294967295);
 assume_abort_if_not(var_1_15 != 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 255);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -127);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32767);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32768);
 assume_abort_if_not(var_1_28 <= 32767);
 assume_abort_if_not(var_1_28 != 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((((last_1_var_1_20 * last_1_var_1_20) == last_1_var_1_14) ? (((last_1_var_1_14 > (last_1_var_1_16 - last_1_var_1_16)) && last_1_var_1_1) ? (var_1_1 == ((unsigned char) var_1_8)) : 1) : 1) && (((var_1_1 || (var_1_16 <= var_1_14)) || (var_1_20 != var_1_14)) ? ((((((var_1_16) < (0)) ? (var_1_16) : (0))) <= (-5 + var_1_16)) ? (var_1_9 == ((unsigned long int) var_1_16)) : 1) : 1)) && (((! var_1_1) || var_1_8) ? (var_1_10 == ((float) (((((var_1_11 + var_1_12)) < (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? ((var_1_11 + var_1_12)) : (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))))) : (((var_1_11 < var_1_12) || (var_1_16 != var_1_16)) ? (var_1_10 == ((float) var_1_13)) : (var_1_10 == ((float) var_1_12))))) && (var_1_1 ? (var_1_14 == ((signed short int) ((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16))))) : ((((var_1_16 / var_1_15) & var_1_16) >= var_1_20) ? (var_1_14 == ((signed short int) var_1_16)) : (var_1_14 == ((signed short int) -128))))) && (((((((var_1_15) > (last_1_var_1_9)) ? (var_1_15) : (last_1_var_1_9))) / var_1_17) <= (256u << last_1_var_1_16)) ? (var_1_16 == ((unsigned char) ((((var_1_18) > (var_1_19)) ? (var_1_18) : (var_1_19))))) : 1)) && (var_1_20 == ((signed char) var_1_21))) && (var_1_22 == ((float) var_1_12))) && (var_1_23 == ((signed char) var_1_21))
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
