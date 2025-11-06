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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
float var_1_2 = 4.5;
float var_1_3 = 64.8;
float var_1_4 = 64.4;
float var_1_5 = 0.2;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 10000;
signed short int var_1_8 = 1;
signed short int var_1_9 = 50;
signed short int var_1_10 = 8;
unsigned char var_1_11 = 1;
signed short int var_1_12 = 5;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 100;
unsigned char var_1_15 = 100;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 2;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 2;
unsigned long int var_1_21 = 32;
unsigned short int var_1_22 = 4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = -25;
 signed long int stepLocal_0 = var_1_9 << var_1_10;
 if (var_1_12 > stepLocal_0) {
  if ((var_1_9 / var_1_7) > stepLocal_1) {
   var_1_13 = var_1_14;
  } else {
   var_1_13 = 100;
  }
 }
 var_1_15 = ((((var_1_16 - var_1_17) < 0 ) ? -(var_1_16 - var_1_17) : (var_1_16 - var_1_17)));
 if (var_1_6) {
  var_1_18 = (var_1_11 && var_1_19);
 }
 var_1_20 = var_1_16;
 var_1_21 = var_1_9;
 var_1_22 = 10;
 if (var_1_2 != ((((var_1_3) > ((var_1_4 - var_1_5))) ? (var_1_3) : ((var_1_4 - var_1_5))))) {
  if (var_1_18) {
   var_1_1 = (((var_1_7 - 32) + (var_1_8 + var_1_9)) - var_1_10);
  }
 } else {
  if (var_1_18) {
   var_1_1 = var_1_12;
  } else {
   var_1_1 = var_1_8;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 8192);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 8191);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 != ((((var_1_3) > ((var_1_4 - var_1_5))) ? (var_1_3) : ((var_1_4 - var_1_5))))) ? (var_1_18 ? (var_1_1 == ((signed short int) (((var_1_7 - 32) + (var_1_8 + var_1_9)) - var_1_10))) : 1) : (var_1_18 ? (var_1_1 == ((signed short int) var_1_12)) : (var_1_1 == ((signed short int) var_1_8)))) && ((var_1_12 > (var_1_9 << var_1_10)) ? (((var_1_9 / var_1_7) > -25) ? (var_1_13 == ((unsigned char) var_1_14)) : (var_1_13 == ((unsigned char) 100))) : 1)) && (var_1_15 == ((unsigned char) ((((var_1_16 - var_1_17) < 0 ) ? -(var_1_16 - var_1_17) : (var_1_16 - var_1_17)))))) && (var_1_6 ? (var_1_18 == ((unsigned char) (var_1_11 && var_1_19))) : 1)) && (var_1_20 == ((unsigned char) var_1_16))) && (var_1_21 == ((unsigned long int) var_1_9))) && (var_1_22 == ((unsigned short int) 10))
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
