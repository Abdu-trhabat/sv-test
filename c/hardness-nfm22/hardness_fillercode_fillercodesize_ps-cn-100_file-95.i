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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
double var_1_2 = 32.25;
double var_1_3 = 16.5;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
signed char var_1_7 = -5;
unsigned char var_1_8 = 0;
signed char var_1_9 = -10;
signed short int var_1_10 = 64;
unsigned short int var_1_11 = 0;
float var_1_12 = 64.75;
double var_1_13 = 5.4;
float var_1_14 = 5.625;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 4;
unsigned char var_1_17 = 0;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 1622847904;
unsigned long int var_1_20 = 1667052813;
unsigned long int var_1_21 = 8;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 8;
double var_1_26 = 128.2;
unsigned long int var_1_27 = 4281494070;
double var_1_28 = 3.2;
unsigned char var_1_29 = 10;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 2;
unsigned char var_1_32 = 16;
unsigned char var_1_33 = 1;
unsigned short int var_1_34 = 5;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 50;
unsigned char var_1_37 = 5;
signed long int var_1_38 = -2;
signed long int var_1_39 = 0;
signed long int var_1_40 = -5;
unsigned char var_1_41 = 0;
signed short int var_1_42 = 8;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 4;
unsigned short int last_1_var_1_11 = 0;
float last_1_var_1_12 = 64.75;
unsigned long int last_1_var_1_15 = 32;
void initially(void) {
}
void step(void) {
 if (var_1_17) {
  if (16u > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) {
   var_1_16 = ((var_1_19 + var_1_20) - var_1_21);
  } else {
   var_1_16 = var_1_20;
  }
 }
 if (var_1_23) {
  var_1_22 = (! (var_1_17 && var_1_24));
 } else {
  if (var_1_19 <= (~ (var_1_18 % var_1_20))) {
   var_1_22 = (! var_1_24);
  } else {
   var_1_22 = (! var_1_24);
  }
 }
 if (var_1_22) {
  if (var_1_17) {
   var_1_25 = ((((var_1_21) < (((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < (var_1_20)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_20))))) ? (var_1_21) : (((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < (var_1_20)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_20))))));
  }
 } else {
  if (var_1_20 >= ((((~ 10u) < 0 ) ? -(~ 10u) : (~ 10u)))) {
   var_1_25 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
  }
 }
 if (var_1_19 > var_1_18) {
  if ((((((var_1_16 & var_1_18)) < (var_1_25)) ? ((var_1_16 & var_1_18)) : (var_1_25))) >= ((var_1_19 | var_1_20) ^ (var_1_27 - var_1_21))) {
   var_1_26 = var_1_28;
  }
 }
 if (-128 > ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))) {
  var_1_29 = (((((((((var_1_30) < (128)) ? (var_1_30) : (128))) - var_1_31)) > (var_1_32)) ? ((((((var_1_30) < (128)) ? (var_1_30) : (128))) - var_1_31)) : (var_1_32)));
 }
 if ((var_1_30 | var_1_25) >= var_1_29) {
  if (var_1_24) {
   var_1_33 = var_1_32;
  }
 }
 if (var_1_29 >= ((((var_1_21) < (var_1_16)) ? (var_1_21) : (var_1_16)))) {
  var_1_34 = (50 + var_1_31);
 }
 if (var_1_34 >= (32 + var_1_18)) {
  var_1_35 = ((((var_1_31) > ((var_1_36 + var_1_37))) ? (var_1_31) : ((var_1_36 + var_1_37))));
 } else {
  if (var_1_23) {
   var_1_35 = ((((var_1_31) > (var_1_36)) ? (var_1_31) : (var_1_36)));
  } else {
   var_1_35 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
  }
 }
 if (var_1_24) {
  var_1_38 = (var_1_32 - var_1_29);
 } else {
  if (var_1_37 < ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) {
   if (var_1_20 > var_1_35) {
    var_1_38 = (var_1_32 + (var_1_37 - var_1_34));
   } else {
    var_1_38 = (((((((((var_1_34 - var_1_37)) > (var_1_39)) ? ((var_1_34 - var_1_37)) : (var_1_39)))) < (var_1_33)) ? ((((((var_1_34 - var_1_37)) > (var_1_39)) ? ((var_1_34 - var_1_37)) : (var_1_39)))) : (var_1_33)));
   }
  } else {
   var_1_38 = (((((var_1_31) < (var_1_40)) ? (var_1_31) : (var_1_40))) + 128);
  }
 }
 if ((var_1_25 >> ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) <= var_1_29) {
  var_1_41 = (var_1_24 || (var_1_23 && var_1_43));
 } else {
  if (var_1_16 < var_1_25) {
   var_1_41 = 0;
  } else {
   var_1_41 = var_1_24;
  }
 }
 var_1_44 = var_1_33;
 unsigned long int stepLocal_1 = var_1_6 - last_1_var_1_15;
 if (stepLocal_1 < ((last_1_var_1_11 ^ last_1_var_1_15) / ((((-8) > (var_1_5)) ? (-8) : (var_1_5))))) {
  if (last_1_var_1_12 == last_1_var_1_12) {
   var_1_11 = last_1_var_1_15;
  }
 }
 if ((var_1_5 <= var_1_4) && var_1_8) {
  if (var_1_8) {
   var_1_7 = (var_1_6 + ((((5) < (var_1_9)) ? (5) : (var_1_9))));
  } else {
   var_1_7 = ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9)));
  }
 } else {
  if ((-8 * var_1_11) < var_1_4) {
   var_1_7 = 1;
  } else {
   var_1_7 = var_1_9;
  }
 }
 if (128 >= last_1_var_1_15) {
  var_1_15 = (var_1_6 + (var_1_4 + var_1_11));
 } else {
  var_1_15 = var_1_7;
 }
 if (var_1_2 != (var_1_3 / ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) {
  var_1_12 = var_1_14;
 }
 if ((10.8 + var_1_12) <= (- var_1_12)) {
  var_1_1 = (((((1) < (var_1_4)) ? (1) : (var_1_4))) + (var_1_5 - var_1_6));
 }
 unsigned char stepLocal_0 = var_1_4;
 if (-4 >= stepLocal_0) {
  if (var_1_12 == var_1_12) {
   var_1_10 = (var_1_7 + var_1_6);
  } else {
   var_1_10 = var_1_5;
  }
 } else {
  var_1_10 = var_1_4;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -63);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 4294967295);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1073741824);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967295);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 127);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= -2147483647);
 assume_abort_if_not(var_1_39 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -1073741823);
 assume_abort_if_not(var_1_40 <= 1073741823);
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= -33);
 assume_abort_if_not(var_1_42 <= 33);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_15 = var_1_15;
}
int property() {
 return (((((((10.8 + var_1_12) <= (- var_1_12)) ? (var_1_1 == ((unsigned char) (((((1) < (var_1_4)) ? (1) : (var_1_4))) + (var_1_5 - var_1_6)))) : 1) && (((var_1_5 <= var_1_4) && var_1_8) ? (var_1_8 ? (var_1_7 == ((signed char) (var_1_6 + ((((5) < (var_1_9)) ? (5) : (var_1_9)))))) : (var_1_7 == ((signed char) ((((var_1_6) < (var_1_9)) ? (var_1_6) : (var_1_9)))))) : (((-8 * var_1_11) < var_1_4) ? (var_1_7 == ((signed char) 1)) : (var_1_7 == ((signed char) var_1_9))))) && ((-4 >= var_1_4) ? ((var_1_12 == var_1_12) ? (var_1_10 == ((signed short int) (var_1_7 + var_1_6))) : (var_1_10 == ((signed short int) var_1_5))) : (var_1_10 == ((signed short int) var_1_4)))) && (((var_1_6 - last_1_var_1_15) < ((last_1_var_1_11 ^ last_1_var_1_15) / ((((-8) > (var_1_5)) ? (-8) : (var_1_5))))) ? ((last_1_var_1_12 == last_1_var_1_12) ? (var_1_11 == ((unsigned short int) last_1_var_1_15)) : 1) : 1)) && ((var_1_2 != (var_1_3 / ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) ? (var_1_12 == ((float) var_1_14)) : 1)) && ((128 >= last_1_var_1_15) ? (var_1_15 == ((unsigned long int) (var_1_6 + (var_1_4 + var_1_11)))) : (var_1_15 == ((unsigned long int) var_1_7)))
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
