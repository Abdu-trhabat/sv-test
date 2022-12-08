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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 8.8;
double var_1_6 = 127.5;
double var_1_7 = 2.6;
double var_1_8 = 4.5;
signed short int var_1_9 = -128;
signed short int var_1_10 = 16;
signed short int var_1_11 = 4;
signed short int var_1_12 = 100;
signed short int var_1_13 = 64;
signed short int var_1_14 = 2;
signed long int var_1_15 = 5;
signed char var_1_17 = -2;
signed char var_1_18 = -4;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
unsigned long int var_1_21 = 25;
unsigned long int var_1_22 = 3797799060;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = 24644;
signed char var_1_29 = 1;
signed char var_1_30 = -1;
unsigned char var_1_31 = 0;
signed long int var_1_32 = -2;
double var_1_39 = 2.45;
double var_1_40 = 63.5;
unsigned short int var_1_41 = 200;
unsigned short int var_1_42 = 1;
unsigned short int var_1_43 = 28186;
unsigned short int var_1_44 = 10;
signed char var_1_45 = 10;
signed char var_1_46 = 10;
signed short int var_1_47 = 4;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 200;
unsigned char var_1_55 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_1 > var_1_1) {
  if ((var_1_1 * ((((var_1_1) > (var_1_1)) ? (var_1_1) : (var_1_1)))) < ((((var_1_1) < (32.55f)) ? (var_1_1) : (32.55f)))) {
   if (var_1_1 > 24.443f) {
    var_1_32 = var_1_9;
   }
  }
 } else {
  var_1_32 = ((((32) < 0 ) ? -(32) : (32)));
 }
 if (var_1_21 < 4) {
  var_1_39 = (var_1_40 + 9.625);
 }
 if (var_1_1 >= 127.5f) {
  if ((var_1_27 >> var_1_27) < ((((-1) < 0 ) ? -(-1) : (-1)))) {
   var_1_41 = (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) + (var_1_43 - (2 + var_1_44)));
  } else {
   var_1_41 = var_1_42;
  }
 } else {
  var_1_41 = var_1_42;
 }
 var_1_45 = var_1_46;
 if (var_1_23) {
  var_1_47 = (var_1_46 + ((((var_1_27) > (var_1_44)) ? (var_1_27) : (var_1_44))));
 }
 if (var_1_1 < (((((var_1_40 / 15.175f)) > ((- var_1_1))) ? ((var_1_40 / 15.175f)) : ((- var_1_1))))) {
  var_1_49 = (! var_1_50);
 } else {
  if (var_1_50) {
   var_1_49 = (var_1_31 || (var_1_31 || var_1_52));
  }
 }
 if (var_1_40 <= var_1_1) {
  var_1_53 = (var_1_54 - ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))));
 }
 var_1_9 = (((((var_1_10 - var_1_11)) < (((var_1_12 + var_1_13) - var_1_14))) ? ((var_1_10 - var_1_11)) : (((var_1_12 + var_1_13) - var_1_14))));
 var_1_17 = (var_1_18 + (var_1_19 - var_1_20));
 var_1_29 = (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - var_1_20);
 var_1_31 = var_1_26;
 if (var_1_17 <= (var_1_17 * (var_1_29 * var_1_29))) {
  if (var_1_29 > var_1_29) {
   var_1_1 = (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) + var_1_8);
  } else {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_31) {
  var_1_23 = (var_1_24 && var_1_25);
 } else {
  var_1_23 = (var_1_24 && (var_1_25 && var_1_26));
 }
 if ((- ((((var_1_1) < (var_1_8)) ? (var_1_1) : (var_1_8)))) >= -0.875) {
  if (var_1_31) {
   var_1_27 = (var_1_19 - var_1_12);
  } else {
   var_1_27 = (var_1_13 - (var_1_28 - (var_1_20 + var_1_19)));
  }
 } else {
  var_1_27 = ((((var_1_29) < (var_1_28)) ? (var_1_29) : (var_1_28)));
 }
 if (var_1_23) {
  var_1_15 = (var_1_14 - var_1_13);
 }
 if (var_1_23) {
  var_1_21 = ((var_1_22 - (1000000000u - var_1_13)) - var_1_14);
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 3221225470);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= 16383);
 assume_abort_if_not(var_1_28 <= 32766);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -126);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 16383);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 8191);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 127);
}
void updateLastVariables() {
}
int property() {
 return (((((((((var_1_17 <= (var_1_17 * (var_1_29 * var_1_29))) ? ((var_1_29 > var_1_29) ? (var_1_1 == ((double) (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) + var_1_8))) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_7))) && (var_1_9 == ((signed short int) (((((var_1_10 - var_1_11)) < (((var_1_12 + var_1_13) - var_1_14))) ? ((var_1_10 - var_1_11)) : (((var_1_12 + var_1_13) - var_1_14))))))) && (var_1_23 ? (var_1_15 == ((signed long int) (var_1_14 - var_1_13))) : 1)) && (var_1_17 == ((signed char) (var_1_18 + (var_1_19 - var_1_20))))) && (var_1_23 ? (var_1_21 == ((unsigned long int) ((var_1_22 - (1000000000u - var_1_13)) - var_1_14))) : 1)) && (var_1_31 ? (var_1_23 == ((unsigned char) (var_1_24 && var_1_25))) : (var_1_23 == ((unsigned char) (var_1_24 && (var_1_25 && var_1_26)))))) && (((- ((((var_1_1) < (var_1_8)) ? (var_1_1) : (var_1_8)))) >= -0.875) ? (var_1_31 ? (var_1_27 == ((signed short int) (var_1_19 - var_1_12))) : (var_1_27 == ((signed short int) (var_1_13 - (var_1_28 - (var_1_20 + var_1_19)))))) : (var_1_27 == ((signed short int) ((((var_1_29) < (var_1_28)) ? (var_1_29) : (var_1_28))))))) && (var_1_29 == ((signed char) (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - var_1_20)))) && (var_1_31 == ((unsigned char) var_1_26))
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
