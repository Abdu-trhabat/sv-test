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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 47136;
unsigned short int var_1_4 = 10;
unsigned long int var_1_6 = 1660677957;
unsigned long int var_1_7 = 128;
float var_1_9 = 9.4;
float var_1_12 = 16.2;
float var_1_13 = 127.9;
float var_1_14 = 15.5;
unsigned long int var_1_15 = 100;
signed char var_1_16 = 64;
float var_1_17 = 9.7;
signed char var_1_18 = -64;
signed char var_1_19 = -4;
unsigned short int var_1_20 = 64;
unsigned short int var_1_21 = 1;
signed char var_1_22 = 2;
unsigned long int var_1_23 = 8;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
float last_1_var_1_9 = 9.4;
float last_1_var_1_14 = 15.5;
unsigned long int last_1_var_1_15 = 100;
unsigned short int last_1_var_1_20 = 64;
unsigned long int last_1_var_1_23 = 8;
unsigned char last_1_var_1_24 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_14 >= (var_1_13 * last_1_var_1_9)) {
  if (var_1_2) {
   var_1_24 = var_1_25;
  } else {
   var_1_24 = (var_1_25 || var_1_26);
  }
 } else {
  if (var_1_25) {
   var_1_24 = (var_1_26 && var_1_27);
  } else {
   if (last_1_var_1_15 == last_1_var_1_20) {
    var_1_24 = var_1_28;
   }
  }
 }
 unsigned long int stepLocal_0 = var_1_6 * last_1_var_1_23;
 if (last_1_var_1_24) {
  if (stepLocal_0 < var_1_7) {
   var_1_20 = (var_1_4 + var_1_21);
  } else {
   var_1_20 = var_1_4;
  }
 } else {
  var_1_20 = var_1_21;
 }
 if (last_1_var_1_15 >= (var_1_6 | ((((64u) < 0 ) ? -(64u) : (64u))))) {
  if ((8 + 5) < var_1_6) {
   var_1_14 = var_1_13;
  } else {
   var_1_14 = var_1_13;
  }
 } else {
  var_1_14 = var_1_12;
 }
 if (var_1_24 && (var_1_20 < (3349670375u - var_1_4))) {
  if (var_1_3 > var_1_4) {
   var_1_15 = (4063422496u - 64u);
  } else {
   var_1_15 = var_1_20;
  }
 } else {
  var_1_15 = var_1_20;
 }
 if ((256.2 * var_1_14) < var_1_14) {
  if (var_1_24) {
   var_1_9 = (var_1_12 + var_1_13);
  }
 }
 unsigned short int stepLocal_3 = var_1_21;
 if (var_1_14 < (9999.6f + var_1_12)) {
  var_1_23 = var_1_20;
 } else {
  if (var_1_14 <= (- (- var_1_14))) {
   if (stepLocal_3 != (- (last_1_var_1_23 & var_1_20))) {
    var_1_23 = var_1_20;
   } else {
    var_1_23 = var_1_20;
   }
  } else {
   var_1_23 = var_1_3;
  }
 }
 if (var_1_24 && ((var_1_3 - var_1_4) <= var_1_23)) {
  var_1_1 = ((((((var_1_3 + var_1_4)) > ((var_1_6 - var_1_20))) ? ((var_1_3 + var_1_4)) : ((var_1_6 - var_1_20)))) + var_1_20);
 } else {
  var_1_1 = var_1_4;
 }
 if (var_1_13 >= var_1_14) {
  if (((- var_1_9) * (var_1_14 * var_1_13)) < var_1_12) {
   if ((- var_1_14) <= (((((var_1_9) > (4.375f)) ? (var_1_9) : (4.375f))) * (var_1_9 / var_1_17))) {
    var_1_16 = ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)));
   } else {
    var_1_16 = 1;
   }
  }
 }
 signed char stepLocal_2 = var_1_19;
 unsigned long int stepLocal_1 = var_1_6;
 if (var_1_12 <= var_1_14) {
  var_1_22 = var_1_19;
 } else {
  if ((((((var_1_3 * var_1_16)) < (var_1_20)) ? ((var_1_3 * var_1_16)) : (var_1_20))) > stepLocal_1) {
   if (stepLocal_2 <= var_1_6) {
    var_1_22 = var_1_18;
   } else {
    var_1_22 = var_1_19;
   }
  } else {
   var_1_22 = var_1_18;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
}
int property() {
 return (((((((((var_1_24 && ((var_1_3 - var_1_4) <= var_1_23)) ? (var_1_1 == ((unsigned long int) ((((((var_1_3 + var_1_4)) > ((var_1_6 - var_1_20))) ? ((var_1_3 + var_1_4)) : ((var_1_6 - var_1_20)))) + var_1_20))) : (var_1_1 == ((unsigned long int) var_1_4))) && (((256.2 * var_1_14) < var_1_14) ? (var_1_24 ? (var_1_9 == ((float) (var_1_12 + var_1_13))) : 1) : 1)) && ((last_1_var_1_15 >= (var_1_6 | ((((64u) < 0 ) ? -(64u) : (64u))))) ? (((8 + 5) < var_1_6) ? (var_1_14 == ((float) var_1_13)) : (var_1_14 == ((float) var_1_13))) : (var_1_14 == ((float) var_1_12)))) && ((var_1_24 && (var_1_20 < (3349670375u - var_1_4))) ? ((var_1_3 > var_1_4) ? (var_1_15 == ((unsigned long int) (4063422496u - 64u))) : (var_1_15 == ((unsigned long int) var_1_20))) : (var_1_15 == ((unsigned long int) var_1_20)))) && ((var_1_13 >= var_1_14) ? ((((- var_1_9) * (var_1_14 * var_1_13)) < var_1_12) ? (((- var_1_14) <= (((((var_1_9) > (4.375f)) ? (var_1_9) : (4.375f))) * (var_1_9 / var_1_17))) ? (var_1_16 == ((signed char) ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) : (var_1_16 == ((signed char) 1))) : 1) : 1)) && (last_1_var_1_24 ? (((var_1_6 * last_1_var_1_23) < var_1_7) ? (var_1_20 == ((unsigned short int) (var_1_4 + var_1_21))) : (var_1_20 == ((unsigned short int) var_1_4))) : (var_1_20 == ((unsigned short int) var_1_21)))) && ((var_1_12 <= var_1_14) ? (var_1_22 == ((signed char) var_1_19)) : (((((((var_1_3 * var_1_16)) < (var_1_20)) ? ((var_1_3 * var_1_16)) : (var_1_20))) > var_1_6) ? ((var_1_19 <= var_1_6) ? (var_1_22 == ((signed char) var_1_18)) : (var_1_22 == ((signed char) var_1_19))) : (var_1_22 == ((signed char) var_1_18))))) && ((var_1_14 < (9999.6f + var_1_12)) ? (var_1_23 == ((unsigned long int) var_1_20)) : ((var_1_14 <= (- (- var_1_14))) ? ((var_1_21 != (- (last_1_var_1_23 & var_1_20))) ? (var_1_23 == ((unsigned long int) var_1_20)) : (var_1_23 == ((unsigned long int) var_1_20))) : (var_1_23 == ((unsigned long int) var_1_3))))) && ((last_1_var_1_14 >= (var_1_13 * last_1_var_1_9)) ? (var_1_2 ? (var_1_24 == ((unsigned char) var_1_25)) : (var_1_24 == ((unsigned char) (var_1_25 || var_1_26)))) : (var_1_25 ? (var_1_24 == ((unsigned char) (var_1_26 && var_1_27))) : ((last_1_var_1_15 == last_1_var_1_20) ? (var_1_24 == ((unsigned char) var_1_28)) : 1)))
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
