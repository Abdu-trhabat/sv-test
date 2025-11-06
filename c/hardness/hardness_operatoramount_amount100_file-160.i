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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 16;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 5;
signed char var_1_7 = -100;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 56037;
signed char var_1_10 = -5;
float var_1_11 = 3.5;
signed char var_1_12 = 4;
float var_1_13 = 99.25;
float var_1_14 = 15.6;
float var_1_15 = 10.5;
float var_1_16 = 8.5;
float var_1_17 = 499.25;
double var_1_18 = 2.6;
float var_1_19 = 99999999.5;
unsigned short int var_1_20 = 10;
unsigned short int var_1_21 = 19334;
unsigned short int var_1_22 = 50;
double var_1_23 = 50.25;
unsigned char var_1_24 = 25;
unsigned char var_1_25 = 128;
double var_1_26 = 0.5;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 200;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned short int last_1_var_1_22 = 50;
unsigned char last_1_var_1_27 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_27) {
  var_1_24 = ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) < (var_1_12)) ? (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) : (var_1_12)));
 } else {
  var_1_24 = (var_1_25 - 16);
 }
 signed long int stepLocal_7 = ((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28))) - (var_1_6 + var_1_12);
 unsigned short int stepLocal_6 = var_1_9;
 unsigned char stepLocal_5 = var_1_24;
 if (stepLocal_7 < -4) {
  if (stepLocal_5 > -128) {
   if (stepLocal_6 >= var_1_3) {
    var_1_27 = var_1_29;
   } else {
    var_1_27 = var_1_30;
   }
  } else {
   var_1_27 = var_1_29;
  }
 } else {
  var_1_27 = var_1_29;
 }
 if (3.5f <= var_1_14) {
  var_1_20 = (var_1_5 + (var_1_21 - last_1_var_1_22));
 }
 if ((var_1_9 < var_1_21) && (var_1_12 == var_1_3)) {
  var_1_22 = var_1_6;
 } else {
  var_1_22 = (((((((((var_1_20) < (var_1_12)) ? (var_1_20) : (var_1_12)))) < (10)) ? (((((var_1_20) < (var_1_12)) ? (var_1_20) : (var_1_12)))) : (10))) + (var_1_21 - var_1_3));
 }
 if (! var_1_27) {
  var_1_1 = (var_1_3 + var_1_4);
 } else {
  var_1_1 = ((var_1_5 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) + var_1_4);
 }
 signed long int stepLocal_0 = var_1_24 * var_1_4;
 if (var_1_27) {
  if (((5u << var_1_5) + var_1_6) > stepLocal_0) {
   var_1_7 = (var_1_5 - (100 - var_1_6));
  }
 } else {
  var_1_7 = var_1_5;
 }
 unsigned char stepLocal_1 = var_1_5;
 if (((var_1_9 - var_1_4) << var_1_6) > stepLocal_1) {
  var_1_8 = var_1_20;
 } else {
  var_1_8 = var_1_6;
 }
 var_1_10 = var_1_5;
 signed long int stepLocal_2 = var_1_1 + (var_1_9 >> var_1_12);
 if (((~ var_1_5) * var_1_3) < stepLocal_2) {
  var_1_11 = ((((((3.875f + var_1_13) - var_1_14)) > (((var_1_15 - var_1_16) + var_1_17))) ? (((3.875f + var_1_13) - var_1_14)) : (((var_1_15 - var_1_16) + var_1_17))));
 }
 if (var_1_27) {
  var_1_18 = var_1_16;
 }
 signed char stepLocal_3 = var_1_12;
 if (var_1_6 <= stepLocal_3) {
  if (var_1_27) {
   var_1_19 = ((var_1_15 + var_1_16) - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13))));
  } else {
   var_1_19 = var_1_16;
  }
 }
 signed long int stepLocal_4 = 32 / var_1_21;
 if (var_1_8 < stepLocal_4) {
  var_1_23 = (var_1_13 - var_1_16);
 } else {
  if (var_1_19 < (- var_1_15)) {
   var_1_23 = ((((var_1_17) < (((((var_1_14) > (4.6)) ? (var_1_14) : (4.6))))) ? (var_1_17) : (((((var_1_14) > (4.6)) ? (var_1_14) : (4.6))))));
  } else {
   var_1_23 = var_1_14;
  }
 }
 if ((var_1_3 - var_1_21) < -4) {
  var_1_26 = (var_1_17 + ((((16.95) > (var_1_16)) ? (16.95) : (var_1_16))));
 } else {
  var_1_26 = (15.6 + (var_1_15 - var_1_16));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 64);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 15);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 16383);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 127);
 assume_abort_if_not(var_1_28 <= 255);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_22 = var_1_22;
 last_1_var_1_27 = var_1_27;
}
int property(void) {
 return (((((((((((((! var_1_27) ? (var_1_1 == ((unsigned char) (var_1_3 + var_1_4))) : (var_1_1 == ((unsigned char) ((var_1_5 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) + var_1_4)))) && (var_1_27 ? ((((5u << var_1_5) + var_1_6) > (var_1_24 * var_1_4)) ? (var_1_7 == ((signed char) (var_1_5 - (100 - var_1_6)))) : 1) : (var_1_7 == ((signed char) var_1_5)))) && ((((var_1_9 - var_1_4) << var_1_6) > var_1_5) ? (var_1_8 == ((unsigned short int) var_1_20)) : (var_1_8 == ((unsigned short int) var_1_6)))) && (var_1_10 == ((signed char) var_1_5))) && ((((~ var_1_5) * var_1_3) < (var_1_1 + (var_1_9 >> var_1_12))) ? (var_1_11 == ((float) ((((((3.875f + var_1_13) - var_1_14)) > (((var_1_15 - var_1_16) + var_1_17))) ? (((3.875f + var_1_13) - var_1_14)) : (((var_1_15 - var_1_16) + var_1_17)))))) : 1)) && (var_1_27 ? (var_1_18 == ((double) var_1_16)) : 1)) && ((var_1_6 <= var_1_12) ? (var_1_27 ? (var_1_19 == ((float) ((var_1_15 + var_1_16) - ((((var_1_14) < (var_1_13)) ? (var_1_14) : (var_1_13)))))) : (var_1_19 == ((float) var_1_16))) : 1)) && ((3.5f <= var_1_14) ? (var_1_20 == ((unsigned short int) (var_1_5 + (var_1_21 - last_1_var_1_22)))) : 1)) && (((var_1_9 < var_1_21) && (var_1_12 == var_1_3)) ? (var_1_22 == ((unsigned short int) var_1_6)) : (var_1_22 == ((unsigned short int) (((((((((var_1_20) < (var_1_12)) ? (var_1_20) : (var_1_12)))) < (10)) ? (((((var_1_20) < (var_1_12)) ? (var_1_20) : (var_1_12)))) : (10))) + (var_1_21 - var_1_3)))))) && ((var_1_8 < (32 / var_1_21)) ? (var_1_23 == ((double) (var_1_13 - var_1_16))) : ((var_1_19 < (- var_1_15)) ? (var_1_23 == ((double) ((((var_1_17) < (((((var_1_14) > (4.6)) ? (var_1_14) : (4.6))))) ? (var_1_17) : (((((var_1_14) > (4.6)) ? (var_1_14) : (4.6)))))))) : (var_1_23 == ((double) var_1_14))))) && (last_1_var_1_27 ? (var_1_24 == ((unsigned char) ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) < (var_1_12)) ? (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) : (var_1_12))))) : (var_1_24 == ((unsigned char) (var_1_25 - 16))))) && (((var_1_3 - var_1_21) < -4) ? (var_1_26 == ((double) (var_1_17 + ((((16.95) > (var_1_16)) ? (16.95) : (var_1_16)))))) : (var_1_26 == ((double) (15.6 + (var_1_15 - var_1_16)))))) && (((((((var_1_25) > (var_1_28)) ? (var_1_25) : (var_1_28))) - (var_1_6 + var_1_12)) < -4) ? ((var_1_24 > -128) ? ((var_1_9 >= var_1_3) ? (var_1_27 == ((unsigned char) var_1_29)) : (var_1_27 == ((unsigned char) var_1_30))) : (var_1_27 == ((unsigned char) var_1_29))) : (var_1_27 == ((unsigned char) var_1_29)))
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
