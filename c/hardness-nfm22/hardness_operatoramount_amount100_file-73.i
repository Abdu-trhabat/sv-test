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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 32;
unsigned long int var_1_4 = 1982060228;
signed char var_1_7 = 50;
double var_1_10 = 31.8;
double var_1_11 = 10.5;
signed char var_1_12 = -2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
signed char var_1_15 = -25;
signed char var_1_16 = 64;
signed char var_1_17 = 2;
signed char var_1_18 = 64;
float var_1_19 = 5.9;
float var_1_21 = 32.5;
float var_1_22 = 0.75;
unsigned char var_1_23 = 10;
unsigned char var_1_25 = 8;
float var_1_26 = 10000000000.5;
double var_1_27 = 128.5;
double var_1_28 = 999999.6;
unsigned long int var_1_29 = 50;
unsigned long int var_1_30 = 2916734667;
unsigned long int var_1_31 = 50;
unsigned long int var_1_32 = 32;
double var_1_33 = 32.4;
double var_1_34 = 999999999.25;
double var_1_35 = 1.75;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 25;
unsigned char var_1_39 = 5;
unsigned char var_1_40 = 100;
unsigned char var_1_41 = 10;
unsigned long int var_1_42 = 16;
unsigned long int var_1_43 = 1000000000;
unsigned long int var_1_44 = 1000000000;
double var_1_45 = 127.6;
void initially(void) {
}
void step(void) {
 var_1_36 = (! var_1_37);
 var_1_45 = var_1_21;
 if ((! var_1_36) && var_1_36) {
  var_1_19 = (var_1_21 + var_1_22);
 }
 if ((((((var_1_10) < (1.0000000000002E12)) ? (var_1_10) : (1.0000000000002E12))) >= var_1_22) && var_1_36) {
  var_1_25 = ((((var_1_16) > (2)) ? (var_1_16) : (2)));
 }
 if (var_1_36 || var_1_36) {
  var_1_29 = (var_1_30 - var_1_25);
 }
 if (var_1_36) {
  if (! var_1_36) {
   var_1_33 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
  } else {
   var_1_33 = ((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35)));
  }
 }
 if (var_1_37) {
  var_1_42 = ((var_1_4 + (var_1_43 + var_1_44)) - var_1_25);
 } else {
  var_1_42 = ((1634918646u - var_1_16) + var_1_40);
 }
 unsigned long int stepLocal_1 = var_1_42;
 unsigned char stepLocal_0 = var_1_25;
 if ((var_1_25 / ((((var_1_16) > (var_1_4)) ? (var_1_16) : (var_1_4)))) <= stepLocal_1) {
  if (stepLocal_0 < var_1_18) {
   var_1_23 = var_1_17;
  } else {
   var_1_23 = var_1_16;
  }
 } else {
  var_1_23 = var_1_18;
 }
 if (! (var_1_18 > var_1_23)) {
  if (var_1_36) {
   var_1_26 = ((((var_1_22) > (var_1_21)) ? (var_1_22) : (var_1_21)));
  }
 } else {
  if (var_1_36) {
   var_1_26 = var_1_22;
  }
 }
 signed char stepLocal_3 = var_1_15;
 signed long int stepLocal_2 = (((var_1_17) < ((~ var_1_25))) ? (var_1_17) : ((~ var_1_25)));
 if (var_1_26 > var_1_10) {
  if (stepLocal_3 != var_1_14) {
   if (stepLocal_2 <= var_1_29) {
    var_1_27 = var_1_22;
   }
  }
 } else {
  var_1_27 = (((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) + var_1_28);
 }
 signed long int stepLocal_4 = 10 - var_1_23;
 if (stepLocal_4 <= var_1_16) {
  var_1_31 = ((((var_1_4) > ((var_1_30 - var_1_25))) ? (var_1_4) : ((var_1_30 - var_1_25))));
 } else {
  if (var_1_36) {
   var_1_31 = var_1_23;
  } else {
   var_1_31 = var_1_23;
  }
 }
 if (var_1_36) {
  var_1_32 = (var_1_23 + var_1_16);
 }
 unsigned long int stepLocal_5 = var_1_42;
 if (var_1_12 > stepLocal_5) {
  var_1_38 = ((var_1_17 + (var_1_39 + 1)) + (var_1_40 - var_1_41));
 }
 if (var_1_36) {
  var_1_1 = (var_1_25 + ((var_1_4 - var_1_23) - var_1_38));
 }
 if (((((((((var_1_26) < (var_1_45)) ? (var_1_26) : (var_1_45)))) < (-0.6)) ? (((((var_1_26) < (var_1_45)) ? (var_1_26) : (var_1_45)))) : (-0.6))) == (var_1_10 - var_1_11)) {
  var_1_7 = (((((4 + var_1_12)) > (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) ? ((4 + var_1_12)) : (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))));
 } else {
  var_1_7 = ((var_1_16 - var_1_17) - var_1_18);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1610612735);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 62);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 2147483647);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 32);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 63);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 536870912);
 assume_abort_if_not(var_1_43 <= 1073741824);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 536870912);
 assume_abort_if_not(var_1_44 <= 1073741823);
}
void updateLastVariables() {
}
int property() {
 return ((((((((((((((var_1_36 ? (var_1_1 == ((unsigned long int) (var_1_25 + ((var_1_4 - var_1_23) - var_1_38)))) : 1) && ((((((((((var_1_26) < (var_1_45)) ? (var_1_26) : (var_1_45)))) < (-0.6)) ? (((((var_1_26) < (var_1_45)) ? (var_1_26) : (var_1_45)))) : (-0.6))) == (var_1_10 - var_1_11)) ? (var_1_7 == ((signed char) (((((4 + var_1_12)) > (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) ? ((4 + var_1_12)) : (((((var_1_13) < ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))))))))) : (var_1_7 == ((signed char) ((var_1_16 - var_1_17) - var_1_18))))) && (((! var_1_36) && var_1_36) ? (var_1_19 == ((float) (var_1_21 + var_1_22))) : 1)) && (((var_1_25 / ((((var_1_16) > (var_1_4)) ? (var_1_16) : (var_1_4)))) <= var_1_42) ? ((var_1_25 < var_1_18) ? (var_1_23 == ((unsigned char) var_1_17)) : (var_1_23 == ((unsigned char) var_1_16))) : (var_1_23 == ((unsigned char) var_1_18)))) && (((((((var_1_10) < (1.0000000000002E12)) ? (var_1_10) : (1.0000000000002E12))) >= var_1_22) && var_1_36) ? (var_1_25 == ((unsigned char) ((((var_1_16) > (2)) ? (var_1_16) : (2))))) : 1)) && ((! (var_1_18 > var_1_23)) ? (var_1_36 ? (var_1_26 == ((float) ((((var_1_22) > (var_1_21)) ? (var_1_22) : (var_1_21))))) : 1) : (var_1_36 ? (var_1_26 == ((float) var_1_22)) : 1))) && ((var_1_26 > var_1_10) ? ((var_1_15 != var_1_14) ? ((((((var_1_17) < ((~ var_1_25))) ? (var_1_17) : ((~ var_1_25)))) <= var_1_29) ? (var_1_27 == ((double) var_1_22)) : 1) : 1) : (var_1_27 == ((double) (((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21))) + var_1_28))))) && ((var_1_36 || var_1_36) ? (var_1_29 == ((unsigned long int) (var_1_30 - var_1_25))) : 1)) && (((10 - var_1_23) <= var_1_16) ? (var_1_31 == ((unsigned long int) ((((var_1_4) > ((var_1_30 - var_1_25))) ? (var_1_4) : ((var_1_30 - var_1_25)))))) : (var_1_36 ? (var_1_31 == ((unsigned long int) var_1_23)) : (var_1_31 == ((unsigned long int) var_1_23))))) && (var_1_36 ? (var_1_32 == ((unsigned long int) (var_1_23 + var_1_16))) : 1)) && (var_1_36 ? ((! var_1_36) ? (var_1_33 == ((double) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))) : (var_1_33 == ((double) ((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35)))))) : 1)) && (var_1_36 == ((unsigned char) (! var_1_37)))) && ((var_1_12 > var_1_42) ? (var_1_38 == ((unsigned char) ((var_1_17 + (var_1_39 + 1)) + (var_1_40 - var_1_41)))) : 1)) && (var_1_37 ? (var_1_42 == ((unsigned long int) ((var_1_4 + (var_1_43 + var_1_44)) - var_1_25))) : (var_1_42 == ((unsigned long int) ((1634918646u - var_1_16) + var_1_40))))) && (var_1_45 == ((double) var_1_21))
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
