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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134dependencies.c", 13, "reach_error"); }
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
signed short int var_1_4 = 32;
signed short int var_1_5 = 10;
unsigned short int var_1_6 = 0;
unsigned short int var_1_7 = 256;
unsigned short int var_1_8 = 50;
unsigned long int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 32;
signed long int var_1_12 = 256;
unsigned char var_1_14 = 5;
signed long int var_1_15 = -100;
float var_1_16 = 32.2;
float var_1_17 = 7.5;
float var_1_18 = 8.5;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 1;
unsigned long int var_1_21 = 256;
unsigned short int last_1_var_1_6 = 0;
unsigned long int last_1_var_1_20 = 1;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_6 == (last_1_var_1_20 / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) {
  var_1_1 = var_1_5;
 }
 var_1_20 = var_1_7;
 var_1_21 = var_1_7;
 if ((var_1_5 + (var_1_7 - var_1_8)) < (var_1_21 - var_1_12)) {
  if (16 >= var_1_21) {
   var_1_11 = var_1_14;
  } else {
   var_1_11 = 8;
  }
 } else {
  var_1_11 = 0;
 }
 if (var_1_10 || (! 0)) {
  if (var_1_10) {
   var_1_15 = var_1_20;
  }
 }
 if (var_1_1 >= var_1_8) {
  if (var_1_10) {
   var_1_9 = var_1_15;
  }
 }
 if ((((((var_1_9) < (50)) ? (var_1_9) : (50))) + (var_1_4 + var_1_9)) != var_1_5) {
  if (var_1_21 > var_1_9) {
   var_1_6 = (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_8);
  } else {
   var_1_6 = (var_1_7 + var_1_8);
  }
 } else {
  var_1_6 = var_1_8;
 }
 if (var_1_8 <= var_1_6) {
  if (! var_1_10) {
   var_1_16 = ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)));
  }
 } else {
  if (var_1_10 && var_1_19) {
   if (var_1_10) {
    var_1_16 = var_1_17;
   }
  } else {
   var_1_16 = var_1_18;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32767);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 return ((((((((last_1_var_1_6 == (last_1_var_1_20 / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (var_1_1 == ((signed short int) var_1_5)) : 1) && (((((((var_1_9) < (50)) ? (var_1_9) : (50))) + (var_1_4 + var_1_9)) != var_1_5) ? ((var_1_21 > var_1_9) ? (var_1_6 == ((unsigned short int) (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_8))) : (var_1_6 == ((unsigned short int) (var_1_7 + var_1_8)))) : (var_1_6 == ((unsigned short int) var_1_8)))) && ((var_1_1 >= var_1_8) ? (var_1_10 ? (var_1_9 == ((unsigned long int) var_1_15)) : 1) : 1)) && (((var_1_5 + (var_1_7 - var_1_8)) < (var_1_21 - var_1_12)) ? ((16 >= var_1_21) ? (var_1_11 == ((unsigned char) var_1_14)) : (var_1_11 == ((unsigned char) 8))) : (var_1_11 == ((unsigned char) 0)))) && ((var_1_10 || (! 0)) ? (var_1_10 ? (var_1_15 == ((signed long int) var_1_20)) : 1) : 1)) && ((var_1_8 <= var_1_6) ? ((! var_1_10) ? (var_1_16 == ((float) ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))))) : 1) : ((var_1_10 && var_1_19) ? (var_1_10 ? (var_1_16 == ((float) var_1_17)) : 1) : (var_1_16 == ((float) var_1_18))))) && (var_1_20 == ((unsigned long int) var_1_7))) && (var_1_21 == ((unsigned long int) var_1_7))
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
