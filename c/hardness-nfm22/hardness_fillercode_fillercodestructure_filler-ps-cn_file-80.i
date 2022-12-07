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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
double var_1_2 = 24.25;
double var_1_3 = 128.5;
double var_1_4 = 4.5;
double var_1_5 = 49.5;
signed short int var_1_9 = -25;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 128.375;
unsigned short int var_1_14 = 0;
float var_1_15 = 0.0;
float var_1_16 = 4.87;
float var_1_17 = 8.875;
signed short int var_1_18 = -128;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 16;
unsigned long int var_1_23 = 4200661734;
float var_1_24 = 9999999999.375;
unsigned short int var_1_25 = 0;
unsigned short int var_1_26 = 10;
float var_1_27 = 128.75;
double var_1_28 = 9.25;
double var_1_29 = 0.0;
double var_1_30 = 127.6;
double var_1_31 = 64.75;
unsigned long int var_1_32 = 128;
unsigned char var_1_33 = 1;
unsigned long int var_1_34 = 1089279310;
unsigned long int var_1_35 = 1307137784;
unsigned long int var_1_36 = 1417807175;
unsigned long int var_1_37 = 256;
unsigned long int var_1_38 = 2;
unsigned long int var_1_39 = 2676616107;
unsigned short int var_1_40 = 5;
unsigned short int var_1_41 = 200;
unsigned short int var_1_42 = 16;
unsigned short int var_1_43 = 8;
unsigned char var_1_44 = 5;
unsigned char var_1_45 = 4;
unsigned char var_1_46 = 16;
unsigned char last_1_var_1_10 = 200;
void initially(void) {
}
void step(void) {
 if ((var_1_25 & var_1_26) >= -2) {
  var_1_24 = var_1_27;
 }
 var_1_28 = ((8.18603254193775E18 - (var_1_29 - var_1_30)) - var_1_31);
 if (var_1_33) {
  var_1_32 = ((var_1_34 + ((((var_1_35) < (var_1_36)) ? (var_1_35) : (var_1_36)))) - ((var_1_26 + var_1_25) + ((((1000000000u) < (var_1_37)) ? (1000000000u) : (var_1_37)))));
 }
 if ((var_1_35 | var_1_32) > var_1_26) {
  if (var_1_29 <= ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) {
   var_1_38 = ((((var_1_25) < ((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) - var_1_36))) ? (var_1_25) : ((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) - var_1_36))));
  } else {
   if (var_1_39 > ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) {
    var_1_38 = var_1_39;
   } else {
    var_1_38 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
   }
  }
 }
 if ((((((var_1_30 * var_1_24)) < (var_1_29)) ? ((var_1_30 * var_1_24)) : (var_1_29))) >= (- var_1_27)) {
  if (var_1_35 > var_1_34) {
   var_1_40 = (8 + ((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))));
  } else {
   var_1_40 = var_1_43;
  }
 }
 if (-32 < (var_1_42 & var_1_41)) {
  var_1_44 = ((((var_1_45) < ((var_1_46 + 10))) ? (var_1_45) : ((var_1_46 + 10))));
 } else {
  var_1_44 = 10;
 }
 signed long int stepLocal_0 = last_1_var_1_10;
 if (stepLocal_0 >= last_1_var_1_10) {
  var_1_9 = (-256 + last_1_var_1_10);
 } else {
  var_1_9 = (last_1_var_1_10 + last_1_var_1_10);
 }
 signed short int stepLocal_1 = var_1_9;
 if (stepLocal_1 > 0) {
  var_1_19 = ((var_1_5 >= (- var_1_15)) && (var_1_11 && (var_1_20 && var_1_21)));
 }
 if (var_1_19) {
  var_1_10 = ((((0) < (var_1_12)) ? (0) : (var_1_12)));
 } else {
  if (! (var_1_5 > (255.9 / var_1_13))) {
   var_1_10 = var_1_12;
  }
 }
 if (((var_1_2 - var_1_3) * var_1_4) < var_1_5) {
  var_1_1 = ((((-8) < ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10)))))) ? (-8) : ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10)))))));
 } else {
  var_1_1 = var_1_10;
 }
 if ((var_1_17 <= (- var_1_16)) && var_1_19) {
  var_1_18 = var_1_10;
 }
 if (var_1_19) {
  var_1_22 = (var_1_9 + var_1_10);
 } else {
  var_1_22 = (((((var_1_23 - var_1_9)) < (var_1_10)) ? ((var_1_23 - var_1_9)) : (var_1_10)));
 }
 if (! var_1_19) {
  if (((var_1_15 - var_1_16) - var_1_17) <= var_1_13) {
   var_1_14 = var_1_18;
  } else {
   var_1_14 = var_1_18;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 4611686.018427387900e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427387900e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 65535);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65535);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 2305843.009213691390e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 1073741823);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 1073741824);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 1073741824);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1073741823);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 2147483647);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 65534);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 254);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 127);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
}
int property() {
 return (((((((((var_1_2 - var_1_3) * var_1_4) < var_1_5) ? (var_1_1 == ((signed short int) ((((-8) < ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10)))))) ? (-8) : ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))))))))) : (var_1_1 == ((signed short int) var_1_10))) && ((last_1_var_1_10 >= last_1_var_1_10) ? (var_1_9 == ((signed short int) (-256 + last_1_var_1_10))) : (var_1_9 == ((signed short int) (last_1_var_1_10 + last_1_var_1_10))))) && (var_1_19 ? (var_1_10 == ((unsigned char) ((((0) < (var_1_12)) ? (0) : (var_1_12))))) : ((! (var_1_5 > (255.9 / var_1_13))) ? (var_1_10 == ((unsigned char) var_1_12)) : 1))) && ((! var_1_19) ? ((((var_1_15 - var_1_16) - var_1_17) <= var_1_13) ? (var_1_14 == ((unsigned short int) var_1_18)) : (var_1_14 == ((unsigned short int) var_1_18))) : 1)) && (((var_1_17 <= (- var_1_16)) && var_1_19) ? (var_1_18 == ((signed short int) var_1_10)) : 1)) && ((var_1_9 > 0) ? (var_1_19 == ((unsigned char) ((var_1_5 >= (- var_1_15)) && (var_1_11 && (var_1_20 && var_1_21))))) : 1)) && (var_1_19 ? (var_1_22 == ((unsigned long int) (var_1_9 + var_1_10))) : (var_1_22 == ((unsigned long int) (((((var_1_23 - var_1_9)) < (var_1_10)) ? ((var_1_23 - var_1_9)) : (var_1_10))))))
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
