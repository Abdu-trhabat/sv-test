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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch18PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -1;
float var_1_3 = 32.4;
float var_1_4 = 5.5;
float var_1_5 = 255.475;
unsigned char var_1_7 = 0;
signed char var_1_8 = -5;
signed char var_1_9 = 2;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 16;
float var_1_12 = 10000000.8;
float var_1_13 = 127.7;
float var_1_14 = 199.2;
float var_1_15 = 999999.5;
signed long int var_1_16 = -8;
signed short int var_1_18 = -8;
double var_1_19 = 5.4;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed char var_1_22 = 1;
signed long int var_1_23 = -16;
signed long int var_1_24 = 256;
signed short int var_1_25 = 32;
signed long int var_1_26 = -100000;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 5;
unsigned long int var_1_30 = 4;
unsigned long int var_1_31 = 256;
unsigned long int var_1_32 = 100;
unsigned char var_1_33 = 8;
unsigned long int var_1_34 = 3779729773;
unsigned short int var_1_35 = 128;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 256;
unsigned char var_1_39 = 1;
double var_1_40 = 8.25;
double var_1_41 = 31.875;
unsigned char var_1_42 = 0;
signed long int var_1_43 = 4;
signed short int var_1_44 = -25;
signed char var_1_45 = 25;
unsigned short int var_1_46 = 64;
signed short int var_1_47 = 1;
signed char last_1_var_1_1 = -1;
unsigned char last_1_var_1_10 = 16;
signed long int last_1_var_1_16 = -8;
void initially(void) {
}
void step(void) {
 var_1_20 = var_1_21;
 if (var_1_23 > ((var_1_24 >> var_1_25) * var_1_26)) {
  var_1_22 = var_1_25;
 }
 if ((-128 >> 10u) >= var_1_22) {
  if (var_1_22 >= (var_1_24 + var_1_25)) {
   var_1_27 = (var_1_21 || var_1_28);
  }
 }
 if (64 >= (10 * var_1_22)) {
  if (var_1_25 <= (var_1_22 >> var_1_30)) {
   var_1_29 = var_1_25;
  } else {
   var_1_29 = (var_1_30 + (var_1_25 + var_1_31));
  }
 }
 if ((var_1_22 > var_1_23) && (var_1_30 <= var_1_26)) {
  if ((var_1_26 / var_1_33) == var_1_24) {
   if (var_1_20 && var_1_21) {
    var_1_32 = (var_1_34 - var_1_31);
   }
  }
 } else {
  if (var_1_22 >= var_1_25) {
   if (var_1_21 || var_1_27) {
    var_1_32 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
   } else {
    if (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < var_1_31) {
     var_1_32 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
    }
   }
  } else {
   var_1_32 = var_1_34;
  }
 }
 if (var_1_34 < var_1_26) {
  if (var_1_24 <= ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) {
   var_1_36 = (((var_1_23 > var_1_26) || (var_1_30 > var_1_24)) && var_1_21);
  } else {
   var_1_36 = (! var_1_37);
  }
 }
 if ((10 + ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) <= var_1_23) {
  var_1_38 = ((((16) < 0 ) ? -(16) : (16)));
 }
 if (var_1_40 >= ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) {
  var_1_39 = (var_1_42 && var_1_37);
 }
 if (var_1_35 == (var_1_30 % var_1_33)) {
  if (var_1_40 >= var_1_41) {
   var_1_43 = ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) > ((100 - var_1_35))) ? (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : ((100 - var_1_35))));
  } else {
   var_1_43 = var_1_25;
  }
 } else {
  var_1_43 = 4;
 }
 if (var_1_29 > (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) % var_1_33)) {
  var_1_44 = (((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) < 0 ) ? -((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) : ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))));
 }
 var_1_45 = (((((var_1_30) < (var_1_25)) ? (var_1_30) : (var_1_25))) - 1);
 var_1_46 = var_1_30;
 if (var_1_22 > var_1_44) {
  var_1_47 = (((((((-10) < 0 ) ? -(-10) : (-10))) < 0 ) ? -((((-10) < 0 ) ? -(-10) : (-10))) : ((((-10) < 0 ) ? -(-10) : (-10)))));
 } else {
  if (-4 <= (var_1_23 + var_1_25)) {
   var_1_47 = var_1_33;
  } else {
   var_1_47 = var_1_25;
  }
 }
 signed long int stepLocal_0 = last_1_var_1_16;
 if (var_1_9 < stepLocal_0) {
  if ((var_1_4 - var_1_5) > var_1_3) {
   var_1_10 = 8;
  }
 } else {
  var_1_10 = var_1_11;
 }
 if (var_1_7) {
  var_1_16 = var_1_8;
 } else {
  var_1_16 = (var_1_11 - ((((var_1_10 - var_1_10) < 0 ) ? -(var_1_10 - var_1_10) : (var_1_10 - var_1_10))));
 }
 signed long int stepLocal_2 = last_1_var_1_10;
 if (! (last_1_var_1_1 > last_1_var_1_10)) {
  var_1_19 = ((((var_1_13) > ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14))))) ? (var_1_13) : ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14))))));
 } else {
  if (stepLocal_2 > var_1_9) {
   var_1_19 = var_1_15;
  }
 }
 if (var_1_5 <= (var_1_19 / var_1_3)) {
  var_1_12 = ((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15))));
 } else {
  var_1_12 = var_1_14;
 }
 if ((var_1_12 / var_1_3) > ((var_1_4 - var_1_5) * var_1_19)) {
  if (var_1_7) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = var_1_9;
  }
 } else {
  var_1_1 = var_1_8;
 }
 signed char stepLocal_1 = var_1_1;
 if (stepLocal_1 >= (var_1_16 + var_1_10)) {
  if (var_1_5 < 999.5f) {
   if (var_1_7) {
    var_1_18 = (var_1_16 + var_1_16);
   } else {
    var_1_18 = var_1_8;
   }
  } else {
   var_1_18 = var_1_9;
  }
 } else {
  var_1_18 = var_1_8;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 8);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1073741823);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 255);
 assume_abort_if_not(var_1_33 != 0);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65535);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_16 = var_1_16;
}
int property() {
 return (((((((var_1_12 / var_1_3) > ((var_1_4 - var_1_5) * var_1_19)) ? (var_1_7 ? (var_1_1 == ((signed char) var_1_8)) : (var_1_1 == ((signed char) var_1_9))) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_9 < last_1_var_1_16) ? (((var_1_4 - var_1_5) > var_1_3) ? (var_1_10 == ((unsigned char) 8)) : 1) : (var_1_10 == ((unsigned char) var_1_11)))) && ((var_1_5 <= (var_1_19 / var_1_3)) ? (var_1_12 == ((float) ((((var_1_13) > ((var_1_14 + var_1_15))) ? (var_1_13) : ((var_1_14 + var_1_15)))))) : (var_1_12 == ((float) var_1_14)))) && (var_1_7 ? (var_1_16 == ((signed long int) var_1_8)) : (var_1_16 == ((signed long int) (var_1_11 - ((((var_1_10 - var_1_10) < 0 ) ? -(var_1_10 - var_1_10) : (var_1_10 - var_1_10)))))))) && ((var_1_1 >= (var_1_16 + var_1_10)) ? ((var_1_5 < 999.5f) ? (var_1_7 ? (var_1_18 == ((signed short int) (var_1_16 + var_1_16))) : (var_1_18 == ((signed short int) var_1_8))) : (var_1_18 == ((signed short int) var_1_9))) : (var_1_18 == ((signed short int) var_1_8)))) && ((! (last_1_var_1_1 > last_1_var_1_10)) ? (var_1_19 == ((double) ((((var_1_13) > ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14))))) ? (var_1_13) : ((((((0.05 + var_1_15)) < (var_1_14)) ? ((0.05 + var_1_15)) : (var_1_14)))))))) : ((last_1_var_1_10 > var_1_9) ? (var_1_19 == ((double) var_1_15)) : 1))
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
