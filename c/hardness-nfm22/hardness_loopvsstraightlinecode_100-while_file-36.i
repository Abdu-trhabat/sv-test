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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = -0.5;
unsigned char var_1_2 = 0;
float var_1_4 = 32.5;
float var_1_5 = 10.25;
float var_1_6 = 15.2;
unsigned short int var_1_7 = 1;
unsigned short int var_1_10 = 1;
signed short int var_1_12 = 8;
signed short int var_1_13 = -16;
unsigned long int var_1_16 = 0;
unsigned long int var_1_17 = 1790089366;
unsigned long int var_1_18 = 1816612959;
unsigned long int var_1_19 = 2;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 32;
unsigned short int var_1_22 = 256;
unsigned short int var_1_23 = 21380;
signed char var_1_25 = 8;
signed char var_1_26 = 0;
signed char var_1_27 = 32;
signed char var_1_28 = 32;
double var_1_29 = 99999999.2;
double var_1_31 = 64.25;
double var_1_32 = 100.6;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 4;
unsigned long int last_1_var_1_16 = 0;
unsigned long int last_1_var_1_19 = 2;
unsigned char last_1_var_1_20 = 32;
signed char last_1_var_1_25 = 8;
unsigned char last_1_var_1_33 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_33) {
  if (last_1_var_1_33) {
   var_1_7 = (((((last_1_var_1_20 + last_1_var_1_20)) > (last_1_var_1_20)) ? ((last_1_var_1_20 + last_1_var_1_20)) : (last_1_var_1_20)));
  } else {
   if (((last_1_var_1_20 + last_1_var_1_25) / var_1_12) <= last_1_var_1_20) {
    var_1_7 = last_1_var_1_20;
   }
  }
 }
 if (var_1_6 == (- (99.4f * var_1_4))) {
  var_1_25 = (((((var_1_26 + var_1_27)) < (var_1_28)) ? ((var_1_26 + var_1_27)) : (var_1_28)));
 } else {
  if ((last_1_var_1_20 ^ last_1_var_1_19) < last_1_var_1_20) {
   var_1_25 = var_1_27;
  } else {
   var_1_25 = var_1_26;
  }
 }
 unsigned long int stepLocal_3 = last_1_var_1_16 * (var_1_10 & last_1_var_1_25);
 if (last_1_var_1_33) {
  if (stepLocal_3 > last_1_var_1_20) {
   if (last_1_var_1_33) {
    var_1_20 = var_1_21;
   } else {
    var_1_20 = var_1_21;
   }
  }
 } else {
  var_1_20 = 100;
 }
 signed char stepLocal_2 = var_1_25;
 unsigned short int stepLocal_1 = var_1_7;
 if (stepLocal_2 <= last_1_var_1_16) {
  var_1_16 = ((((((((3808567585u) < 0 ) ? -(3808567585u) : (3808567585u))) < 0 ) ? -((((3808567585u) < 0 ) ? -(3808567585u) : (3808567585u))) : ((((3808567585u) < 0 ) ? -(3808567585u) : (3808567585u))))) - var_1_20);
 } else {
  if (last_1_var_1_16 == stepLocal_1) {
   var_1_16 = (((var_1_17 + var_1_18) - last_1_var_1_16) - var_1_20);
  }
 }
 unsigned long int stepLocal_5 = var_1_16;
 if (var_1_18 >= stepLocal_5) {
  if ((- var_1_6) <= var_1_4) {
   var_1_29 = ((((var_1_5) > ((var_1_6 - var_1_4))) ? (var_1_5) : ((var_1_6 - var_1_4))));
  } else {
   var_1_29 = (1.0000000000002E12 + ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) > (var_1_32)) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (var_1_32))));
  }
 } else {
  var_1_29 = var_1_6;
 }
 var_1_35 = var_1_7;
 if ((var_1_20 - var_1_20) == ((((var_1_20) < ((var_1_20 >> var_1_12))) ? (var_1_20) : ((var_1_20 >> var_1_12))))) {
  var_1_13 = 8;
 } else {
  var_1_13 = ((((var_1_25) > (var_1_25)) ? (var_1_25) : (var_1_25)));
 }
 if (var_1_13 >= var_1_18) {
  var_1_19 = ((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20)));
 }
 signed short int stepLocal_6 = var_1_13;
 if ((var_1_20 ^ var_1_23) > stepLocal_6) {
  if (! (var_1_18 == (var_1_20 + var_1_7))) {
   var_1_33 = var_1_34;
  }
 } else {
  if (var_1_2) {
   var_1_33 = 0;
  } else {
   var_1_33 = var_1_34;
  }
 }
 unsigned long int stepLocal_0 = var_1_19;
 if (var_1_33) {
  if ((-5 + 64) < stepLocal_0) {
   var_1_1 = (((((var_1_4 - var_1_5)) > ((var_1_6 - 5.4f))) ? ((var_1_4 - var_1_5)) : ((var_1_6 - 5.4f))));
  } else {
   var_1_1 = var_1_6;
  }
 } else {
  var_1_1 = var_1_6;
 }
 unsigned char stepLocal_4 = var_1_20;
 if (stepLocal_4 < var_1_20) {
  var_1_22 = ((((((var_1_16 + 16) + (var_1_23 - var_1_21))) < (var_1_20)) ? (((var_1_16 + 16) + (var_1_23 - var_1_21))) : (var_1_20)));
 } else {
  if (var_1_33) {
   var_1_22 = var_1_20;
  } else {
   var_1_22 = 2;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32768);
 assume_abort_if_not(var_1_12 <= 32767);
 assume_abort_if_not(var_1_12 != 0);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 1610612735);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 1610612735);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 16383);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -63);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -127);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
}
void updateLastVariables() {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_33 = var_1_33;
}
int property() {
 return ((((((((((var_1_33 ? (((-5 + 64) < var_1_19) ? (var_1_1 == ((float) (((((var_1_4 - var_1_5)) > ((var_1_6 - 5.4f))) ? ((var_1_4 - var_1_5)) : ((var_1_6 - 5.4f)))))) : (var_1_1 == ((float) var_1_6))) : (var_1_1 == ((float) var_1_6))) && (last_1_var_1_33 ? (last_1_var_1_33 ? (var_1_7 == ((unsigned short int) (((((last_1_var_1_20 + last_1_var_1_20)) > (last_1_var_1_20)) ? ((last_1_var_1_20 + last_1_var_1_20)) : (last_1_var_1_20))))) : ((((last_1_var_1_20 + last_1_var_1_25) / var_1_12) <= last_1_var_1_20) ? (var_1_7 == ((unsigned short int) last_1_var_1_20)) : 1)) : 1)) && (((var_1_20 - var_1_20) == ((((var_1_20) < ((var_1_20 >> var_1_12))) ? (var_1_20) : ((var_1_20 >> var_1_12))))) ? (var_1_13 == ((signed short int) 8)) : (var_1_13 == ((signed short int) ((((var_1_25) > (var_1_25)) ? (var_1_25) : (var_1_25))))))) && ((var_1_25 <= last_1_var_1_16) ? (var_1_16 == ((unsigned long int) ((((((((3808567585u) < 0 ) ? -(3808567585u) : (3808567585u))) < 0 ) ? -((((3808567585u) < 0 ) ? -(3808567585u) : (3808567585u))) : ((((3808567585u) < 0 ) ? -(3808567585u) : (3808567585u))))) - var_1_20))) : ((last_1_var_1_16 == var_1_7) ? (var_1_16 == ((unsigned long int) (((var_1_17 + var_1_18) - last_1_var_1_16) - var_1_20))) : 1))) && ((var_1_13 >= var_1_18) ? (var_1_19 == ((unsigned long int) ((((var_1_17) < (var_1_20)) ? (var_1_17) : (var_1_20))))) : 1)) && (last_1_var_1_33 ? (((last_1_var_1_16 * (var_1_10 & last_1_var_1_25)) > last_1_var_1_20) ? (last_1_var_1_33 ? (var_1_20 == ((unsigned char) var_1_21)) : (var_1_20 == ((unsigned char) var_1_21))) : 1) : (var_1_20 == ((unsigned char) 100)))) && ((var_1_20 < var_1_20) ? (var_1_22 == ((unsigned short int) ((((((var_1_16 + 16) + (var_1_23 - var_1_21))) < (var_1_20)) ? (((var_1_16 + 16) + (var_1_23 - var_1_21))) : (var_1_20))))) : (var_1_33 ? (var_1_22 == ((unsigned short int) var_1_20)) : (var_1_22 == ((unsigned short int) 2))))) && ((var_1_6 == (- (99.4f * var_1_4))) ? (var_1_25 == ((signed char) (((((var_1_26 + var_1_27)) < (var_1_28)) ? ((var_1_26 + var_1_27)) : (var_1_28))))) : (((last_1_var_1_20 ^ last_1_var_1_19) < last_1_var_1_20) ? (var_1_25 == ((signed char) var_1_27)) : (var_1_25 == ((signed char) var_1_26))))) && ((var_1_18 >= var_1_16) ? (((- var_1_6) <= var_1_4) ? (var_1_29 == ((double) ((((var_1_5) > ((var_1_6 - var_1_4))) ? (var_1_5) : ((var_1_6 - var_1_4)))))) : (var_1_29 == ((double) (1.0000000000002E12 + ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) > (var_1_32)) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (var_1_32))))))) : (var_1_29 == ((double) var_1_6)))) && (((var_1_20 ^ var_1_23) > var_1_13) ? ((! (var_1_18 == (var_1_20 + var_1_7))) ? (var_1_33 == ((unsigned char) var_1_34)) : 1) : (var_1_2 ? (var_1_33 == ((unsigned char) 0)) : (var_1_33 == ((unsigned char) var_1_34))))) && (var_1_35 == ((unsigned short int) var_1_7))
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
