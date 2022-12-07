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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch35Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_6 = -4;
unsigned short int var_1_7 = 50;
signed short int var_1_9 = 128;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned short int var_1_14 = 2;
unsigned short int var_1_15 = 1;
signed long int var_1_17 = 128;
float var_1_18 = 25.75;
unsigned char var_1_20 = 25;
float var_1_21 = 15.125;
unsigned char var_1_22 = 4;
unsigned long int var_1_23 = 2;
unsigned long int var_1_24 = 50;
unsigned long int var_1_25 = 5;
unsigned char var_1_26 = 64;
unsigned char var_1_27 = 128;
float var_1_28 = 10.85;
float var_1_29 = 99999.35;
float var_1_30 = 100.5;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned short int var_1_33 = 16;
unsigned short int var_1_34 = 18230;
double var_1_35 = 10.625;
unsigned short int last_1_var_1_7 = 50;
signed short int last_1_var_1_9 = 128;
signed long int last_1_var_1_17 = 128;
unsigned char last_1_var_1_22 = 4;
unsigned long int last_1_var_1_25 = 5;
unsigned char last_1_var_1_26 = 64;
float last_1_var_1_28 = 10.85;
unsigned short int last_1_var_1_33 = 16;
double last_1_var_1_35 = 10.625;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_35 < last_1_var_1_28) {
  if ((128 + ((((last_1_var_1_26) > (4)) ? (last_1_var_1_26) : (4)))) <= ((((last_1_var_1_22) < (2)) ? (last_1_var_1_22) : (2)))) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = 10;
  }
 } else {
  var_1_1 = var_1_6;
 }
 signed long int stepLocal_1 = last_1_var_1_7 >> (var_1_14 + var_1_15);
 unsigned char stepLocal_0 = ((((last_1_var_1_33) > (last_1_var_1_33)) ? (last_1_var_1_33) : (last_1_var_1_33))) != last_1_var_1_9;
 if (var_1_13 || stepLocal_0) {
  if (stepLocal_1 >= (last_1_var_1_22 + last_1_var_1_33)) {
   if (var_1_13) {
    var_1_12 = 2;
   }
  }
 }
 unsigned long int stepLocal_2 = (last_1_var_1_17 + last_1_var_1_17) / (var_1_23 + var_1_24);
 if (stepLocal_2 >= var_1_14) {
  var_1_22 = (200 - var_1_15);
 }
 if (last_1_var_1_25 >= last_1_var_1_17) {
  var_1_7 = ((((last_1_var_1_17) < (last_1_var_1_22)) ? (last_1_var_1_17) : (last_1_var_1_22)));
 }
 unsigned char stepLocal_3 = var_1_20;
 if (stepLocal_3 != var_1_23) {
  if (! var_1_13) {
   var_1_26 = (var_1_27 - var_1_14);
  } else {
   var_1_26 = var_1_27;
  }
 } else {
  var_1_26 = 2;
 }
 var_1_35 = var_1_30;
 if (var_1_13) {
  var_1_28 = ((((var_1_21) > ((var_1_29 + var_1_30))) ? (var_1_21) : ((var_1_29 + var_1_30))));
 } else {
  if (var_1_31) {
   if (! ((var_1_1 > var_1_12) || var_1_32)) {
    var_1_28 = var_1_30;
   } else {
    var_1_28 = var_1_29;
   }
  } else {
   var_1_28 = 2.25f;
  }
 }
 if (128 >= (var_1_26 / var_1_27)) {
  var_1_33 = ((((((18346) < 0 ) ? -(18346) : (18346))) + ((((28846) < (var_1_34)) ? (28846) : (var_1_34)))) - ((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) < (var_1_12)) ? (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) : (var_1_12))));
 } else {
  var_1_33 = (16 + last_1_var_1_33);
 }
 var_1_9 = ((var_1_7 + var_1_7) + ((((var_1_6) < ((var_1_22 + var_1_1))) ? (var_1_6) : ((var_1_22 + var_1_1)))));
 if (var_1_13) {
  var_1_17 = ((var_1_12 + (var_1_6 + var_1_26)) + (var_1_15 - var_1_7));
 }
 if ((var_1_35 * var_1_35) >= var_1_28) {
  if ((- (16 % var_1_20)) >= (((((var_1_12) > (var_1_7)) ? (var_1_12) : (var_1_7))) ^ var_1_1)) {
   var_1_18 = var_1_21;
  } else {
   var_1_18 = var_1_21;
  }
 } else {
  var_1_18 = var_1_21;
 }
 if (var_1_18 > 1.75) {
  if ((var_1_1 <= (~ last_1_var_1_25)) && var_1_13) {
   if (var_1_13 && (var_1_26 < var_1_33)) {
    var_1_25 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
   } else {
    var_1_25 = var_1_24;
   }
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 9);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 8);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 255);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 2147483648);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 16384);
 assume_abort_if_not(var_1_34 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_35 = var_1_35;
}
int property() {
 return ((((((((((((last_1_var_1_35 < last_1_var_1_28) ? (((128 + ((((last_1_var_1_26) > (4)) ? (last_1_var_1_26) : (4)))) <= ((((last_1_var_1_22) < (2)) ? (last_1_var_1_22) : (2)))) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) 10))) : (var_1_1 == ((signed char) var_1_6))) && ((last_1_var_1_25 >= last_1_var_1_17) ? (var_1_7 == ((unsigned short int) ((((last_1_var_1_17) < (last_1_var_1_22)) ? (last_1_var_1_17) : (last_1_var_1_22))))) : 1)) && (var_1_9 == ((signed short int) ((var_1_7 + var_1_7) + ((((var_1_6) < ((var_1_22 + var_1_1))) ? (var_1_6) : ((var_1_22 + var_1_1)))))))) && ((var_1_13 || (((((last_1_var_1_33) > (last_1_var_1_33)) ? (last_1_var_1_33) : (last_1_var_1_33))) != last_1_var_1_9)) ? (((last_1_var_1_7 >> (var_1_14 + var_1_15)) >= (last_1_var_1_22 + last_1_var_1_33)) ? (var_1_13 ? (var_1_12 == ((unsigned char) 2)) : 1) : 1) : 1)) && (var_1_13 ? (var_1_17 == ((signed long int) ((var_1_12 + (var_1_6 + var_1_26)) + (var_1_15 - var_1_7)))) : 1)) && (((var_1_35 * var_1_35) >= var_1_28) ? (((- (16 % var_1_20)) >= (((((var_1_12) > (var_1_7)) ? (var_1_12) : (var_1_7))) ^ var_1_1)) ? (var_1_18 == ((float) var_1_21)) : (var_1_18 == ((float) var_1_21))) : (var_1_18 == ((float) var_1_21)))) && ((((last_1_var_1_17 + last_1_var_1_17) / (var_1_23 + var_1_24)) >= var_1_14) ? (var_1_22 == ((unsigned char) (200 - var_1_15))) : 1)) && ((var_1_18 > 1.75) ? (((var_1_1 <= (~ last_1_var_1_25)) && var_1_13) ? ((var_1_13 && (var_1_26 < var_1_33)) ? (var_1_25 == ((unsigned long int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : (var_1_25 == ((unsigned long int) var_1_24))) : 1) : 1)) && ((var_1_20 != var_1_23) ? ((! var_1_13) ? (var_1_26 == ((unsigned char) (var_1_27 - var_1_14))) : (var_1_26 == ((unsigned char) var_1_27))) : (var_1_26 == ((unsigned char) 2)))) && (var_1_13 ? (var_1_28 == ((float) ((((var_1_21) > ((var_1_29 + var_1_30))) ? (var_1_21) : ((var_1_29 + var_1_30)))))) : (var_1_31 ? ((! ((var_1_1 > var_1_12) || var_1_32)) ? (var_1_28 == ((float) var_1_30)) : (var_1_28 == ((float) var_1_29))) : (var_1_28 == ((float) 2.25f))))) && ((128 >= (var_1_26 / var_1_27)) ? (var_1_33 == ((unsigned short int) ((((((18346) < 0 ) ? -(18346) : (18346))) + ((((28846) < (var_1_34)) ? (28846) : (var_1_34)))) - ((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) < (var_1_12)) ? (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) : (var_1_12)))))) : (var_1_33 == ((unsigned short int) (16 + last_1_var_1_33))))) && (var_1_35 == ((double) var_1_30))
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
