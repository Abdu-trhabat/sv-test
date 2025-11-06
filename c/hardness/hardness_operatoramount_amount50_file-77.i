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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch77Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
float var_1_2 = 255.5;
float var_1_3 = 99.8;
signed char var_1_4 = -25;
float var_1_6 = 255.25;
unsigned short int var_1_7 = 16;
signed long int var_1_8 = -128;
signed long int var_1_9 = 4;
signed long int var_1_10 = 128;
float var_1_11 = 99.5;
float var_1_12 = 64.5;
signed short int var_1_13 = 256;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 25;
unsigned short int var_1_16 = 1;
unsigned short int var_1_17 = 32;
double var_1_18 = 7.8;
double var_1_19 = 3.5;
double var_1_20 = 4.5;
unsigned short int var_1_21 = 10000;
signed long int var_1_22 = 1956428758;
unsigned short int var_1_23 = 200;
unsigned short int var_1_24 = 16;
signed short int var_1_25 = -128;
signed long int last_1_var_1_8 = -128;
void initially(void) {
}
void step(void) {
 var_1_8 = (((((last_1_var_1_8 - var_1_7)) < (((128 + var_1_9) - var_1_10))) ? ((last_1_var_1_8 - var_1_7)) : (((128 + var_1_9) - var_1_10))));
 var_1_11 = var_1_12;
 if (var_1_11 > var_1_2) {
  var_1_15 = (var_1_16 + (10000 + var_1_17));
 }
 var_1_18 = (var_1_19 - var_1_20);
 signed long int stepLocal_1 = ((((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22))) < 0 ) ? -((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22))) : ((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22))));
 if (var_1_8 != stepLocal_1) {
  var_1_21 = (var_1_17 + (var_1_23 + var_1_24));
 }
 if (! (var_1_20 > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) {
  if (((((1) > ((var_1_17 + var_1_8))) ? (1) : ((var_1_17 + var_1_8)))) <= (var_1_22 * var_1_15)) {
   var_1_25 = (var_1_23 - var_1_17);
  } else {
   var_1_25 = var_1_24;
  }
 } else {
  var_1_25 = var_1_23;
 }
 signed long int stepLocal_0 = (((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4));
 if (stepLocal_0 <= var_1_8) {
  if ((- var_1_3) > ((((var_1_2) > (var_1_6)) ? (var_1_2) : (var_1_6)))) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = 50;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_9 >= var_1_7) {
  if ((var_1_18 >= var_1_11) || var_1_14) {
   var_1_13 = 50;
  } else {
   var_1_13 = var_1_4;
  }
 } else {
  var_1_13 = 256;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -127);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= 1073741823);
 assume_abort_if_not(var_1_22 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16384);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return ((((((((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) <= var_1_8) ? (((- var_1_3) > ((((var_1_2) > (var_1_6)) ? (var_1_2) : (var_1_6)))) ? (var_1_1 == ((unsigned short int) var_1_7)) : (var_1_1 == ((unsigned short int) 50))) : (var_1_1 == ((unsigned short int) var_1_7))) && (var_1_8 == ((signed long int) (((((last_1_var_1_8 - var_1_7)) < (((128 + var_1_9) - var_1_10))) ? ((last_1_var_1_8 - var_1_7)) : (((128 + var_1_9) - var_1_10))))))) && (var_1_11 == ((float) var_1_12))) && ((var_1_9 >= var_1_7) ? (((var_1_18 >= var_1_11) || var_1_14) ? (var_1_13 == ((signed short int) 50)) : (var_1_13 == ((signed short int) var_1_4))) : (var_1_13 == ((signed short int) 256)))) && ((var_1_11 > var_1_2) ? (var_1_15 == ((unsigned short int) (var_1_16 + (10000 + var_1_17)))) : 1)) && (var_1_18 == ((double) (var_1_19 - var_1_20)))) && ((var_1_8 != (((((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22))) < 0 ) ? -((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22))) : ((((var_1_16) < (var_1_22)) ? (var_1_16) : (var_1_22)))))) ? (var_1_21 == ((unsigned short int) (var_1_17 + (var_1_23 + var_1_24)))) : 1)) && ((! (var_1_20 > ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? ((((((1) > ((var_1_17 + var_1_8))) ? (1) : ((var_1_17 + var_1_8)))) <= (var_1_22 * var_1_15)) ? (var_1_25 == ((signed short int) (var_1_23 - var_1_17))) : (var_1_25 == ((signed short int) var_1_24))) : (var_1_25 == ((signed short int) var_1_23)))
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
