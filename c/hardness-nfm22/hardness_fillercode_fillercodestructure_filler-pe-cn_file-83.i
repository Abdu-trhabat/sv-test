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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -25;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1230640054;
signed long int var_1_6 = 1508873667;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
float var_1_16 = 10000000000000.375;
float var_1_17 = 16.4;
float var_1_18 = 8.5;
float var_1_19 = 64.75;
unsigned char var_1_20 = 16;
signed char var_1_22 = 0;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 10;
signed long int var_1_26 = 2;
signed long int var_1_27 = -25;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
signed short int var_1_30 = -256;
signed short int var_1_31 = 2;
double var_1_32 = 256.5;
double var_1_33 = 64.55;
signed short int var_1_34 = -2;
signed short int var_1_36 = -50;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 32;
float var_1_40 = 0.8;
float var_1_41 = 0.4;
float var_1_42 = 127.175;
float var_1_43 = 5.5;
signed short int var_1_44 = 1;
signed long int var_1_45 = 4;
float var_1_46 = 1000000000000.375;
void initially(void) {
}
void step(void) {
 var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));
 var_1_16 = (var_1_17 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))));
 if ((3886175339u - var_1_20) <= (var_1_9 / var_1_3)) {
  if (var_1_10 > var_1_7) {
   var_1_23 = ((((var_1_20) < ((var_1_8 - var_1_9))) ? (var_1_20) : ((var_1_8 - var_1_9))));
  } else {
   var_1_23 = (((((var_1_20) > (64)) ? (var_1_20) : (64))) + var_1_11);
  }
 } else {
  var_1_23 = var_1_20;
 }
 if (var_1_2) {
  var_1_1 = ((var_1_3 - var_1_7) - var_1_7);
 } else {
  var_1_1 = (((((var_1_3) > ((var_1_6 - var_1_7))) ? (var_1_3) : ((var_1_6 - var_1_7)))) - var_1_7);
 }
 signed long int stepLocal_1 = var_1_9 % (var_1_8 - var_1_20);
 signed long int stepLocal_0 = var_1_7 ^ var_1_10;
 if (stepLocal_1 > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) {
  if ((var_1_3 ^ var_1_23) <= stepLocal_0) {
   var_1_19 = var_1_17;
  }
 }
 if ((var_1_11 % var_1_20) < var_1_1) {
  var_1_22 = ((((10) > (var_1_10)) ? (10) : (var_1_10)));
 }
 if (((((var_1_16) > (var_1_16)) ? (var_1_16) : (var_1_16))) <= (- (var_1_19 / 4.9f))) {
  var_1_12 = 31.5f;
 }
 if ((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) >= (var_1_26 % var_1_27)) || var_1_28) {
  var_1_24 = ((((var_1_29 - 8) < 0 ) ? -(var_1_29 - 8) : (var_1_29 - 8)));
 } else {
  var_1_24 = var_1_29;
 }
 var_1_30 = var_1_29;
 if (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < var_1_33) {
  if (var_1_28) {
   var_1_31 = var_1_29;
  }
 }
 if (1 >= var_1_27) {
  if (var_1_29 > ((var_1_27 & var_1_31) & var_1_30)) {
   var_1_34 = var_1_24;
  }
 }
 if (var_1_26 <= (var_1_24 & var_1_34)) {
  var_1_36 = var_1_29;
 }
 if (var_1_34 >= ((((32) > (var_1_29)) ? (32) : (var_1_29)))) {
  var_1_37 = (var_1_29 - (var_1_38 - var_1_39));
 } else {
  var_1_37 = var_1_39;
 }
 if (var_1_28) {
  var_1_40 = ((((var_1_41) > ((var_1_42 + var_1_43))) ? (var_1_41) : ((var_1_42 + var_1_43))));
 }
 if (var_1_43 != var_1_40) {
  if (var_1_24 >= var_1_36) {
   var_1_44 = (((((var_1_37 + var_1_24)) > (((((var_1_39) < (var_1_25)) ? (var_1_39) : (var_1_25))))) ? ((var_1_37 + var_1_24)) : (((((var_1_39) < (var_1_25)) ? (var_1_39) : (var_1_25))))));
  }
 }
 if (var_1_28) {
  var_1_45 = (((((var_1_39 + var_1_38)) < (var_1_30)) ? ((var_1_39 + var_1_38)) : (var_1_30)));
 }
 var_1_46 = var_1_42;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 1073741822);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 1073741822);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 190);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 126);
 assume_abort_if_not(var_1_20 != 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 255);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 assume_abort_if_not(var_1_27 != 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
}
void updateLastVariables() {
}
int property() {
 return ((((((var_1_2 ? (var_1_1 == ((signed long int) ((var_1_3 - var_1_7) - var_1_7))) : (var_1_1 == ((signed long int) (((((var_1_3) > ((var_1_6 - var_1_7))) ? (var_1_3) : ((var_1_6 - var_1_7)))) - var_1_7)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((((((var_1_16) > (var_1_16)) ? (var_1_16) : (var_1_16))) <= (- (var_1_19 / 4.9f))) ? (var_1_12 == ((float) 31.5f)) : 1)) && (var_1_16 == ((float) (var_1_17 + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) && (((var_1_9 % (var_1_8 - var_1_20)) > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) ? (((var_1_3 ^ var_1_23) <= (var_1_7 ^ var_1_10)) ? (var_1_19 == ((float) var_1_17)) : 1) : 1)) && (((var_1_11 % var_1_20) < var_1_1) ? (var_1_22 == ((signed char) ((((10) > (var_1_10)) ? (10) : (var_1_10))))) : 1)) && (((3886175339u - var_1_20) <= (var_1_9 / var_1_3)) ? ((var_1_10 > var_1_7) ? (var_1_23 == ((unsigned char) ((((var_1_20) < ((var_1_8 - var_1_9))) ? (var_1_20) : ((var_1_8 - var_1_9)))))) : (var_1_23 == ((unsigned char) (((((var_1_20) > (64)) ? (var_1_20) : (64))) + var_1_11)))) : (var_1_23 == ((unsigned char) var_1_20)))
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
