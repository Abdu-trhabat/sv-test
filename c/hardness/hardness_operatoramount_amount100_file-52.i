// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch52Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 128.1;
signed short int var_1_2 = 256;
unsigned char var_1_3 = 2;
float var_1_5 = 31.4;
float var_1_6 = 32.5;
float var_1_7 = 9.6;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 60712;
unsigned short int var_1_13 = 58826;
double var_1_14 = 999999999.5;
unsigned char var_1_17 = 10;
unsigned long int var_1_18 = 32;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 200;
unsigned char var_1_22 = 5;
float var_1_23 = 128.25;
float var_1_24 = 5.5;
double var_1_25 = 15.75;
float var_1_26 = 255.025;
double var_1_27 = 15.8;
double var_1_28 = 15.25;
double var_1_29 = 999999999.5;
unsigned short int var_1_30 = 10;
unsigned short int var_1_31 = 1000;
unsigned char last_1_var_1_8 = 1;
unsigned char last_1_var_1_20 = 25;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_20 <= (var_1_21 - var_1_3)) {
  if (last_1_var_1_8) {
   var_1_30 = ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)));
  } else {
   var_1_30 = ((((var_1_12) < (var_1_2)) ? (var_1_12) : (var_1_2)));
  }
 } else {
  var_1_30 = ((((var_1_22) > (last_1_var_1_20)) ? (var_1_22) : (last_1_var_1_20)));
 }
 signed long int stepLocal_1 = -2 / -10000000;
 if (stepLocal_1 != ((var_1_3 + var_1_30) + var_1_2)) {
  var_1_8 = (var_1_9 || var_1_10);
 }
 if (! ((- var_1_30) <= var_1_3)) {
  var_1_20 = ((var_1_21 - var_1_3) - var_1_22);
 }
 signed long int stepLocal_0 = 10;
 if (((var_1_2 >> var_1_3) | var_1_30) >= stepLocal_0) {
  var_1_1 = (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7);
 } else {
  var_1_1 = ((((var_1_5 + var_1_7) < 0 ) ? -(var_1_5 + var_1_7) : (var_1_5 + var_1_7)));
 }
 if (! (! var_1_8)) {
  var_1_11 = ((var_1_3 + 128) + var_1_2);
 } else {
  var_1_11 = ((((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))) - var_1_3) - var_1_2);
 }
 if (! var_1_10) {
  var_1_23 = (((((256.5f - var_1_24)) > (var_1_6)) ? ((256.5f - var_1_24)) : (var_1_6)));
 }
 var_1_27 = (var_1_6 + var_1_7);
 if (var_1_24 <= var_1_1) {
  var_1_28 = ((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_6) < 0 ) ? -(((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_6) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_6)));
 } else {
  var_1_28 = (var_1_24 - var_1_29);
 }
 if (! var_1_8) {
  if (var_1_5 <= (-0.5f * var_1_27)) {
   var_1_17 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
  } else {
   var_1_17 = 32;
  }
 } else {
  var_1_17 = 50;
 }
 unsigned char stepLocal_2 = var_1_8;
 if (! var_1_10) {
  if ((var_1_3 > (128 - 4)) && stepLocal_2) {
   var_1_18 = var_1_13;
  } else {
   var_1_18 = var_1_30;
  }
 } else {
  var_1_18 = var_1_17;
 }
 unsigned char stepLocal_3 = var_1_10;
 if (stepLocal_3 || (! var_1_8)) {
  if (! (var_1_2 > var_1_17)) {
   if ((var_1_24 - var_1_26) <= var_1_7) {
    var_1_25 = 7.5;
   }
  } else {
   var_1_25 = var_1_5;
  }
 } else {
  var_1_25 = var_1_24;
 }
 if (256 >= var_1_30) {
  if (var_1_8) {
   if (var_1_18 < var_1_2) {
    var_1_31 = var_1_22;
   }
  }
 }
 if ((var_1_25 / 24.5) <= var_1_25) {
  if (var_1_8) {
   var_1_14 = (var_1_5 + var_1_6);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 14);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 49150);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 49150);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 190);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 return (((((((((((((((var_1_2 >> var_1_3) | var_1_30) >= 10) ? (var_1_1 == ((float) (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7))) : (var_1_1 == ((float) ((((var_1_5 + var_1_7) < 0 ) ? -(var_1_5 + var_1_7) : (var_1_5 + var_1_7)))))) && (((-2 / -10000000) != ((var_1_3 + var_1_30) + var_1_2)) ? (var_1_8 == ((unsigned char) (var_1_9 || var_1_10))) : 1)) && ((! (! var_1_8)) ? (var_1_11 == ((unsigned short int) ((var_1_3 + 128) + var_1_2))) : (var_1_11 == ((unsigned short int) ((((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))) - var_1_3) - var_1_2))))) && (((var_1_25 / 24.5) <= var_1_25) ? (var_1_8 ? (var_1_14 == ((double) (var_1_5 + var_1_6))) : 1) : 1)) && ((! var_1_8) ? ((var_1_5 <= (-0.5f * var_1_27)) ? (var_1_17 == ((unsigned char) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : (var_1_17 == ((unsigned char) 32))) : (var_1_17 == ((unsigned char) 50)))) && ((! var_1_10) ? (((var_1_3 > (128 - 4)) && var_1_8) ? (var_1_18 == ((unsigned long int) var_1_13)) : (var_1_18 == ((unsigned long int) var_1_30))) : (var_1_18 == ((unsigned long int) var_1_17)))) && ((! ((- var_1_30) <= var_1_3)) ? (var_1_20 == ((unsigned char) ((var_1_21 - var_1_3) - var_1_22))) : 1)) && ((! var_1_10) ? (var_1_23 == ((float) (((((256.5f - var_1_24)) > (var_1_6)) ? ((256.5f - var_1_24)) : (var_1_6))))) : 1)) && ((var_1_10 || (! var_1_8)) ? ((! (var_1_2 > var_1_17)) ? (((var_1_24 - var_1_26) <= var_1_7) ? (var_1_25 == ((double) 7.5)) : 1) : (var_1_25 == ((double) var_1_5))) : (var_1_25 == ((double) var_1_24)))) && (var_1_27 == ((double) (var_1_6 + var_1_7)))) && ((var_1_24 <= var_1_1) ? (var_1_28 == ((double) ((((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_6) < 0 ) ? -(((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_6) : (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_6))))) : (var_1_28 == ((double) (var_1_24 - var_1_29))))) && ((last_1_var_1_20 <= (var_1_21 - var_1_3)) ? (last_1_var_1_8 ? (var_1_30 == ((unsigned short int) ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))))) : (var_1_30 == ((unsigned short int) ((((var_1_12) < (var_1_2)) ? (var_1_12) : (var_1_2)))))) : (var_1_30 == ((unsigned short int) ((((var_1_22) > (last_1_var_1_20)) ? (var_1_22) : (last_1_var_1_20))))))) && ((256 >= var_1_30) ? (var_1_8 ? ((var_1_18 < var_1_2) ? (var_1_31 == ((unsigned short int) var_1_22)) : 1) : 1) : 1)
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
