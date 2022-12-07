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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed long int var_1_11 = -10;
signed short int var_1_12 = 16;
signed short int var_1_14 = 0;
double var_1_16 = 7.3;
double var_1_17 = 0.2;
float var_1_18 = 3.5;
float var_1_19 = 128.2;
float var_1_20 = 5.8;
signed char var_1_21 = 16;
unsigned char var_1_22 = 1;
signed long int var_1_23 = -128;
unsigned short int var_1_24 = 128;
float var_1_26 = 31.25;
float var_1_27 = 0.6;
float var_1_28 = 127.2;
float var_1_29 = 128.18;
float var_1_30 = 31.8;
unsigned char var_1_31 = 25;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 2;
unsigned char var_1_35 = 128;
unsigned char last_1_var_1_1 = 1;
signed short int last_1_var_1_14 = 0;
signed long int last_1_var_1_23 = -128;
unsigned char last_1_var_1_31 = 25;
void initially(void) {
}
void step(void) {
 if ((-16 * last_1_var_1_23) > (((((last_1_var_1_23) < (last_1_var_1_23)) ? (last_1_var_1_23) : (last_1_var_1_23))) / var_1_11)) {
  var_1_10 = ((((last_1_var_1_14) < (last_1_var_1_23)) ? (last_1_var_1_14) : (last_1_var_1_23)));
 } else {
  var_1_10 = (last_1_var_1_31 - last_1_var_1_31);
 }
 signed long int stepLocal_8 = last_1_var_1_14;
 unsigned char stepLocal_7 = last_1_var_1_14 <= (last_1_var_1_14 * var_1_12);
 if (stepLocal_7 && last_1_var_1_1) {
  if (last_1_var_1_31 <= stepLocal_8) {
   if ((- var_1_19) >= var_1_17) {
    var_1_31 = (128 - ((((100) < ((var_1_33 + var_1_34))) ? (100) : ((var_1_33 + var_1_34)))));
   } else {
    var_1_31 = (var_1_35 - 5);
   }
  } else {
   var_1_31 = var_1_33;
  }
 } else {
  var_1_31 = var_1_33;
 }
 var_1_14 = (-2 + (last_1_var_1_31 + last_1_var_1_31));
 unsigned char stepLocal_1 = var_1_31;
 if (stepLocal_1 == (-128 * var_1_31)) {
  var_1_16 = (((((0.875 + (var_1_17 + 64.4))) > (1.0000000000000005E15)) ? ((0.875 + (var_1_17 + 64.4))) : (1.0000000000000005E15)));
 } else {
  var_1_16 = var_1_17;
 }
 if (var_1_8) {
  var_1_26 = (var_1_19 + ((var_1_27 + var_1_28) + var_1_17));
 } else {
  var_1_26 = ((((var_1_17) < ((var_1_29 - var_1_30))) ? (var_1_17) : ((var_1_29 - var_1_30))));
 }
 signed short int stepLocal_6 = var_1_10;
 if (stepLocal_6 >= ((((var_1_11) < ((var_1_31 * var_1_14))) ? (var_1_11) : ((var_1_31 * var_1_14))))) {
  var_1_24 = ((((var_1_31) < (var_1_31)) ? (var_1_31) : (var_1_31)));
 } else {
  var_1_24 = var_1_31;
 }
 signed long int stepLocal_5 = 25 * var_1_14;
 if (! (var_1_31 <= var_1_10)) {
  if (var_1_10 >= stepLocal_5) {
   var_1_23 = ((((var_1_24) < (var_1_10)) ? (var_1_24) : (var_1_10)));
  } else {
   var_1_23 = ((var_1_10 + var_1_14) + var_1_24);
  }
 }
 unsigned char stepLocal_0 = ((((var_1_24) < (var_1_14)) ? (var_1_24) : (var_1_14))) > var_1_31;
 if (((var_1_31 | var_1_24) <= var_1_31) || stepLocal_0) {
  var_1_1 = ((! 1) && var_1_8);
 } else {
  var_1_1 = var_1_9;
 }
 unsigned char stepLocal_2 = var_1_31;
 if (((var_1_24 + -16) * var_1_23) >= stepLocal_2) {
  var_1_18 = (64.9f + var_1_19);
 } else {
  var_1_18 = var_1_17;
 }
 signed long int stepLocal_3 = var_1_14 % var_1_21;
 if (stepLocal_3 >= (var_1_31 & var_1_24)) {
  var_1_20 = ((((((((63.5f + var_1_17) < 0 ) ? -(63.5f + var_1_17) : (63.5f + var_1_17)))) < (var_1_19)) ? (((((63.5f + var_1_17) < 0 ) ? -(63.5f + var_1_17) : (63.5f + var_1_17)))) : (var_1_19)));
 } else {
  var_1_20 = var_1_19;
 }
 unsigned long int stepLocal_4 = ~ (var_1_31 * 128u);
 if (! (var_1_10 <= var_1_23)) {
  if (var_1_1) {
   if (stepLocal_4 == var_1_23) {
    var_1_22 = (! var_1_9);
   }
  } else {
   var_1_22 = var_1_9;
  }
 } else {
  var_1_22 = var_1_9;
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 assume_abort_if_not(var_1_11 != 0);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -128);
 assume_abort_if_not(var_1_21 <= 127);
 assume_abort_if_not(var_1_21 != 0);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -115292.1504606845700e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 1152921.504606845700e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -115292.1504606845700e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 1152921.504606845700e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 64);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_31 = var_1_31;
}
int property() {
 return (((((((((((((var_1_31 | var_1_24) <= var_1_31) || (((((var_1_24) < (var_1_14)) ? (var_1_24) : (var_1_14))) > var_1_31)) ? (var_1_1 == ((unsigned char) ((! 1) && var_1_8))) : (var_1_1 == ((unsigned char) var_1_9))) && (((-16 * last_1_var_1_23) > (((((last_1_var_1_23) < (last_1_var_1_23)) ? (last_1_var_1_23) : (last_1_var_1_23))) / var_1_11)) ? (var_1_10 == ((signed short int) ((((last_1_var_1_14) < (last_1_var_1_23)) ? (last_1_var_1_14) : (last_1_var_1_23))))) : (var_1_10 == ((signed short int) (last_1_var_1_31 - last_1_var_1_31))))) && (var_1_14 == ((signed short int) (-2 + (last_1_var_1_31 + last_1_var_1_31))))) && ((var_1_31 == (-128 * var_1_31)) ? (var_1_16 == ((double) (((((0.875 + (var_1_17 + 64.4))) > (1.0000000000000005E15)) ? ((0.875 + (var_1_17 + 64.4))) : (1.0000000000000005E15))))) : (var_1_16 == ((double) var_1_17)))) && ((((var_1_24 + -16) * var_1_23) >= var_1_31) ? (var_1_18 == ((float) (64.9f + var_1_19))) : (var_1_18 == ((float) var_1_17)))) && (((var_1_14 % var_1_21) >= (var_1_31 & var_1_24)) ? (var_1_20 == ((float) ((((((((63.5f + var_1_17) < 0 ) ? -(63.5f + var_1_17) : (63.5f + var_1_17)))) < (var_1_19)) ? (((((63.5f + var_1_17) < 0 ) ? -(63.5f + var_1_17) : (63.5f + var_1_17)))) : (var_1_19))))) : (var_1_20 == ((float) var_1_19)))) && ((! (var_1_10 <= var_1_23)) ? (var_1_1 ? (((~ (var_1_31 * 128u)) == var_1_23) ? (var_1_22 == ((unsigned char) (! var_1_9))) : 1) : (var_1_22 == ((unsigned char) var_1_9))) : (var_1_22 == ((unsigned char) var_1_9)))) && ((! (var_1_31 <= var_1_10)) ? ((var_1_10 >= (25 * var_1_14)) ? (var_1_23 == ((signed long int) ((((var_1_24) < (var_1_10)) ? (var_1_24) : (var_1_10))))) : (var_1_23 == ((signed long int) ((var_1_10 + var_1_14) + var_1_24)))) : 1)) && ((var_1_10 >= ((((var_1_11) < ((var_1_31 * var_1_14))) ? (var_1_11) : ((var_1_31 * var_1_14))))) ? (var_1_24 == ((unsigned short int) ((((var_1_31) < (var_1_31)) ? (var_1_31) : (var_1_31))))) : (var_1_24 == ((unsigned short int) var_1_31)))) && (var_1_8 ? (var_1_26 == ((float) (var_1_19 + ((var_1_27 + var_1_28) + var_1_17)))) : (var_1_26 == ((float) ((((var_1_17) < ((var_1_29 - var_1_30))) ? (var_1_17) : ((var_1_29 - var_1_30)))))))) && (((last_1_var_1_14 <= (last_1_var_1_14 * var_1_12)) && last_1_var_1_1) ? ((last_1_var_1_31 <= last_1_var_1_14) ? (((- var_1_19) >= var_1_17) ? (var_1_31 == ((unsigned char) (128 - ((((100) < ((var_1_33 + var_1_34))) ? (100) : ((var_1_33 + var_1_34))))))) : (var_1_31 == ((unsigned char) (var_1_35 - 5)))) : (var_1_31 == ((unsigned char) var_1_33))) : (var_1_31 == ((unsigned char) var_1_33)))
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
