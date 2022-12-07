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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 20453;
signed short int var_1_10 = -5;
unsigned char var_1_12 = 5;
unsigned short int var_1_13 = 63501;
unsigned char var_1_14 = 1;
float var_1_15 = 16.25;
float var_1_16 = 5.13;
float var_1_17 = 99999999.25;
signed char var_1_18 = 0;
signed char var_1_19 = -4;
signed char var_1_20 = 16;
signed char var_1_21 = -100;
float var_1_22 = 31.4;
float var_1_23 = 16.432;
float var_1_24 = 9999.5;
unsigned long int var_1_26 = 100000000;
unsigned short int var_1_27 = 50;
float var_1_28 = 255.5;
unsigned short int var_1_29 = 16;
unsigned short int var_1_30 = 21823;
float var_1_31 = 3.325;
signed long int var_1_33 = 8;
signed short int var_1_35 = -1;
signed short int var_1_36 = 32549;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 0;
unsigned char last_1_var_1_12 = 5;
unsigned long int last_1_var_1_26 = 100000000;
signed short int last_1_var_1_35 = -1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_5 = last_1_var_1_12 | last_1_var_1_35;
 if (var_1_16 >= (var_1_17 / var_1_28)) {
  var_1_27 = (last_1_var_1_26 + var_1_14);
 } else {
  if (stepLocal_5 < var_1_7) {
   var_1_27 = last_1_var_1_12;
  }
 }
 signed long int stepLocal_2 = 4 + var_1_13;
 if ((16 / -5) >= stepLocal_2) {
  var_1_18 = ((((var_1_19) > (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))))) ? (var_1_19) : (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))))));
 }
 var_1_40 = var_1_14;
 var_1_10 = (var_1_40 - var_1_40);
 unsigned char stepLocal_1 = var_1_40;
 if (stepLocal_1 >= 4) {
  if (! ((var_1_13 - var_1_40) <= 64)) {
   var_1_12 = var_1_14;
  } else {
   var_1_12 = var_1_14;
  }
 }
 if (var_1_8 <= var_1_40) {
  var_1_15 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
 }
 unsigned short int stepLocal_4 = var_1_8;
 if (stepLocal_4 >= var_1_40) {
  var_1_26 = var_1_7;
 }
 unsigned long int stepLocal_0 = var_1_26;
 if (stepLocal_0 <= 32) {
  if (var_1_15 < var_1_15) {
   var_1_1 = (var_1_26 + var_1_12);
  }
 } else {
  var_1_1 = ((var_1_12 + (var_1_7 - var_1_26)) + (var_1_8 - var_1_12));
 }
 if (var_1_24 < var_1_16) {
  var_1_33 = (var_1_30 + ((var_1_1 + var_1_27) - 10));
 }
 unsigned short int stepLocal_10 = var_1_8;
 if (var_1_15 > (var_1_23 / var_1_28)) {
  if ((((((var_1_33 | var_1_14)) > (var_1_36)) ? ((var_1_33 | var_1_14)) : (var_1_36))) <= stepLocal_10) {
   var_1_41 = 0;
  } else {
   var_1_41 = 0;
  }
 } else {
  var_1_41 = var_1_38;
 }
 signed short int stepLocal_9 = var_1_36;
 if (stepLocal_9 <= var_1_30) {
  var_1_37 = ((! var_1_41) && var_1_38);
 } else {
  var_1_37 = (var_1_41 || var_1_39);
 }
 if (var_1_37) {
  var_1_29 = ((((16) > ((var_1_12 + var_1_7))) ? (16) : ((var_1_12 + var_1_7))));
 } else {
  var_1_29 = ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + var_1_30) - var_1_40);
 }
 unsigned char stepLocal_8 = var_1_37;
 unsigned short int stepLocal_7 = var_1_13;
 signed long int stepLocal_6 = - var_1_40;
 if ((var_1_40 / var_1_8) <= stepLocal_7) {
  if (var_1_14 == stepLocal_6) {
   if (var_1_37 || stepLocal_8) {
    var_1_31 = var_1_24;
   }
  } else {
   var_1_31 = var_1_17;
  }
 } else {
  var_1_31 = var_1_16;
 }
 if (var_1_37) {
  var_1_35 = (var_1_12 - (var_1_36 - var_1_12));
 }
 signed long int stepLocal_3 = (var_1_7 * var_1_12) * (var_1_29 * var_1_12);
 if (stepLocal_3 == (((((var_1_21) > (var_1_20)) ? (var_1_21) : (var_1_20))) + var_1_35)) {
  var_1_22 = (var_1_23 + var_1_24);
 } else {
  if (var_1_41) {
   var_1_22 = var_1_17;
  } else {
   var_1_22 = var_1_24;
  }
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65535);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -127);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -127);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 assume_abort_if_not(var_1_28 != 0.0F);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 16384);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 16383);
 assume_abort_if_not(var_1_36 <= 32766);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_35 = var_1_35;
}
int property() {
 return (((((((((((((((var_1_26 <= 32) ? ((var_1_15 < var_1_15) ? (var_1_1 == ((unsigned short int) (var_1_26 + var_1_12))) : 1) : (var_1_1 == ((unsigned short int) ((var_1_12 + (var_1_7 - var_1_26)) + (var_1_8 - var_1_12))))) && (var_1_10 == ((signed short int) (var_1_40 - var_1_40)))) && ((var_1_40 >= 4) ? ((! ((var_1_13 - var_1_40) <= 64)) ? (var_1_12 == ((unsigned char) var_1_14)) : (var_1_12 == ((unsigned char) var_1_14))) : 1)) && ((var_1_8 <= var_1_40) ? (var_1_15 == ((float) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : 1)) && (((16 / -5) >= (4 + var_1_13)) ? (var_1_18 == ((signed char) ((((var_1_19) > (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))))) ? (var_1_19) : (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21)))))))) : 1)) && ((((var_1_7 * var_1_12) * (var_1_29 * var_1_12)) == (((((var_1_21) > (var_1_20)) ? (var_1_21) : (var_1_20))) + var_1_35)) ? (var_1_22 == ((float) (var_1_23 + var_1_24))) : (var_1_41 ? (var_1_22 == ((float) var_1_17)) : (var_1_22 == ((float) var_1_24))))) && ((var_1_8 >= var_1_40) ? (var_1_26 == ((unsigned long int) var_1_7)) : 1)) && ((var_1_16 >= (var_1_17 / var_1_28)) ? (var_1_27 == ((unsigned short int) (last_1_var_1_26 + var_1_14))) : (((last_1_var_1_12 | last_1_var_1_35) < var_1_7) ? (var_1_27 == ((unsigned short int) last_1_var_1_12)) : 1))) && (var_1_37 ? (var_1_29 == ((unsigned short int) ((((16) > ((var_1_12 + var_1_7))) ? (16) : ((var_1_12 + var_1_7)))))) : (var_1_29 == ((unsigned short int) ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + var_1_30) - var_1_40))))) && (((var_1_40 / var_1_8) <= var_1_13) ? ((var_1_14 == (- var_1_40)) ? ((var_1_37 || var_1_37) ? (var_1_31 == ((float) var_1_24)) : 1) : (var_1_31 == ((float) var_1_17))) : (var_1_31 == ((float) var_1_16)))) && ((var_1_24 < var_1_16) ? (var_1_33 == ((signed long int) (var_1_30 + ((var_1_1 + var_1_27) - 10)))) : 1)) && (var_1_37 ? (var_1_35 == ((signed short int) (var_1_12 - (var_1_36 - var_1_12)))) : 1)) && ((var_1_36 <= var_1_30) ? (var_1_37 == ((unsigned char) ((! var_1_41) && var_1_38))) : (var_1_37 == ((unsigned char) (var_1_41 || var_1_39))))) && (var_1_40 == ((unsigned char) var_1_14))) && ((var_1_15 > (var_1_23 / var_1_28)) ? (((((((var_1_33 | var_1_14)) > (var_1_36)) ? ((var_1_33 | var_1_14)) : (var_1_36))) <= var_1_8) ? (var_1_41 == ((unsigned char) 0)) : (var_1_41 == ((unsigned char) 0))) : (var_1_41 == ((unsigned char) var_1_38)))
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
