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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 0;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
signed char var_1_8 = 1;
signed char var_1_9 = 32;
signed char var_1_10 = 5;
signed char var_1_11 = 2;
signed char var_1_12 = -100;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed short int var_1_15 = 256;
float var_1_16 = 15.918;
float var_1_17 = 0.6;
float var_1_18 = 100000000.75;
float var_1_19 = 16.5;
float var_1_20 = 8.75;
unsigned short int var_1_22 = 10;
float var_1_23 = -0.6;
float var_1_24 = 25.75;
float var_1_25 = 127.75;
signed short int var_1_26 = -5;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
signed short int var_1_30 = -8;
signed long int var_1_31 = -8;
unsigned char var_1_32 = 0;
float last_1_var_1_16 = 15.918;
unsigned char last_1_var_1_27 = 1;
signed short int last_1_var_1_30 = -8;
void initially(void) {
}
void step(void) {
 if (10u <= (var_1_7 << var_1_6)) {
  if (last_1_var_1_27) {
   var_1_13 = (last_1_var_1_27 && var_1_14);
  } else {
   var_1_13 = (! var_1_14);
  }
 }
 signed long int stepLocal_0 = -100000 >> var_1_8;
 if (stepLocal_0 < var_1_9) {
  var_1_15 = ((4 - var_1_11) + (-1 + last_1_var_1_30));
 } else {
  if (last_1_var_1_27) {
   var_1_15 = var_1_6;
  } else {
   var_1_15 = var_1_10;
  }
 }
 signed long int stepLocal_2 = var_1_6 >> var_1_15;
 if (stepLocal_2 >= var_1_8) {
  var_1_23 = (var_1_24 - var_1_25);
 }
 if (var_1_13) {
  var_1_22 = ((((var_1_10) > (var_1_9)) ? (var_1_10) : (var_1_9)));
 } else {
  var_1_22 = ((var_1_7 + 8) + var_1_9);
 }
 var_1_31 = var_1_8;
 var_1_32 = 0;
 if (var_1_13) {
  if (var_1_32) {
   var_1_20 = (((((var_1_17 + var_1_18)) > (var_1_19)) ? ((var_1_17 + var_1_18)) : (var_1_19)));
  }
 }
 signed char stepLocal_3 = var_1_11;
 if (stepLocal_3 < (var_1_10 >> var_1_12)) {
  var_1_26 = (var_1_9 + var_1_7);
 } else {
  if (var_1_20 != var_1_23) {
   var_1_26 = ((((var_1_10) < (var_1_7)) ? (var_1_10) : (var_1_7)));
  } else {
   var_1_26 = var_1_9;
  }
 }
 unsigned char stepLocal_1 = var_1_13;
 if (((8 * var_1_15) > var_1_6) || stepLocal_1) {
  if (last_1_var_1_16 < var_1_20) {
   var_1_16 = ((((((var_1_17 + var_1_18) + 4.5f)) < (((((256.25f) < (var_1_19)) ? (256.25f) : (var_1_19))))) ? (((var_1_17 + var_1_18) + 4.5f)) : (((((256.25f) < (var_1_19)) ? (256.25f) : (var_1_19))))));
  }
 } else {
  var_1_16 = var_1_19;
 }
 signed char stepLocal_5 = var_1_9;
 if (stepLocal_5 < var_1_15) {
  var_1_30 = (var_1_10 - ((((var_1_9) > (var_1_11)) ? (var_1_9) : (var_1_11))));
 } else {
  if ((var_1_16 / 1.5) < 8.725) {
   if (var_1_20 != (((((- var_1_20)) < (var_1_16)) ? ((- var_1_20)) : (var_1_16)))) {
    var_1_30 = (var_1_8 + 128);
   }
  }
 }
 if (! (var_1_32 || (var_1_16 > var_1_23))) {
  if (var_1_32) {
   if (var_1_13) {
    var_1_1 = (((((var_1_6 - var_1_7) + var_1_8) < 0 ) ? -((var_1_6 - var_1_7) + var_1_8) : ((var_1_6 - var_1_7) + var_1_8)));
   } else {
    var_1_1 = (((((var_1_7 - var_1_6)) < (((var_1_9 + var_1_10) - var_1_11))) ? ((var_1_7 - var_1_6)) : (((var_1_9 + var_1_10) - var_1_11))));
   }
  } else {
   var_1_1 = var_1_12;
  }
 } else {
  var_1_1 = var_1_10;
 }
 signed long int stepLocal_4 = var_1_26 & var_1_11;
 if (var_1_10 > stepLocal_4) {
  var_1_27 = (var_1_28 && (! (! var_1_29)));
 } else {
  if (! var_1_13) {
   var_1_27 = var_1_29;
  } else {
   var_1_27 = var_1_14;
  }
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -63);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
}
void updateLastVariables() {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_30 = var_1_30;
}
int property() {
 return ((((((((((((! (var_1_32 || (var_1_16 > var_1_23))) ? (var_1_32 ? (var_1_13 ? (var_1_1 == ((signed char) (((((var_1_6 - var_1_7) + var_1_8) < 0 ) ? -((var_1_6 - var_1_7) + var_1_8) : ((var_1_6 - var_1_7) + var_1_8))))) : (var_1_1 == ((signed char) (((((var_1_7 - var_1_6)) < (((var_1_9 + var_1_10) - var_1_11))) ? ((var_1_7 - var_1_6)) : (((var_1_9 + var_1_10) - var_1_11))))))) : (var_1_1 == ((signed char) var_1_12))) : (var_1_1 == ((signed char) var_1_10))) && ((10u <= (var_1_7 << var_1_6)) ? (last_1_var_1_27 ? (var_1_13 == ((unsigned char) (last_1_var_1_27 && var_1_14))) : (var_1_13 == ((unsigned char) (! var_1_14)))) : 1)) && (((-100000 >> var_1_8) < var_1_9) ? (var_1_15 == ((signed short int) ((4 - var_1_11) + (-1 + last_1_var_1_30)))) : (last_1_var_1_27 ? (var_1_15 == ((signed short int) var_1_6)) : (var_1_15 == ((signed short int) var_1_10))))) && ((((8 * var_1_15) > var_1_6) || var_1_13) ? ((last_1_var_1_16 < var_1_20) ? (var_1_16 == ((float) ((((((var_1_17 + var_1_18) + 4.5f)) < (((((256.25f) < (var_1_19)) ? (256.25f) : (var_1_19))))) ? (((var_1_17 + var_1_18) + 4.5f)) : (((((256.25f) < (var_1_19)) ? (256.25f) : (var_1_19)))))))) : 1) : (var_1_16 == ((float) var_1_19)))) && (var_1_13 ? (var_1_32 ? (var_1_20 == ((float) (((((var_1_17 + var_1_18)) > (var_1_19)) ? ((var_1_17 + var_1_18)) : (var_1_19))))) : 1) : 1)) && (var_1_13 ? (var_1_22 == ((unsigned short int) ((((var_1_10) > (var_1_9)) ? (var_1_10) : (var_1_9))))) : (var_1_22 == ((unsigned short int) ((var_1_7 + 8) + var_1_9))))) && (((var_1_6 >> var_1_15) >= var_1_8) ? (var_1_23 == ((float) (var_1_24 - var_1_25))) : 1)) && ((var_1_11 < (var_1_10 >> var_1_12)) ? (var_1_26 == ((signed short int) (var_1_9 + var_1_7))) : ((var_1_20 != var_1_23) ? (var_1_26 == ((signed short int) ((((var_1_10) < (var_1_7)) ? (var_1_10) : (var_1_7))))) : (var_1_26 == ((signed short int) var_1_9))))) && ((var_1_10 > (var_1_26 & var_1_11)) ? (var_1_27 == ((unsigned char) (var_1_28 && (! (! var_1_29))))) : ((! var_1_13) ? (var_1_27 == ((unsigned char) var_1_29)) : (var_1_27 == ((unsigned char) var_1_14))))) && ((var_1_9 < var_1_15) ? (var_1_30 == ((signed short int) (var_1_10 - ((((var_1_9) > (var_1_11)) ? (var_1_9) : (var_1_11)))))) : (((var_1_16 / 1.5) < 8.725) ? ((var_1_20 != (((((- var_1_20)) < (var_1_16)) ? ((- var_1_20)) : (var_1_16)))) ? (var_1_30 == ((signed short int) (var_1_8 + 128))) : 1) : 1))) && (var_1_31 == ((signed long int) var_1_8))) && (var_1_32 == ((unsigned char) 0))
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
