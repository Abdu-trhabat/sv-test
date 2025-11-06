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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 4.35;
unsigned long int var_1_2 = 25;
signed long int var_1_4 = 50;
double var_1_5 = 8.1;
unsigned short int var_1_6 = 256;
unsigned long int var_1_9 = 2597568899;
unsigned long int var_1_10 = 16;
unsigned long int var_1_11 = 4;
unsigned short int var_1_13 = 4;
unsigned short int var_1_14 = 16;
float var_1_15 = 10.4;
unsigned char var_1_16 = 1;
float var_1_18 = 9.45;
unsigned long int var_1_19 = 8;
signed long int var_1_21 = -2;
double var_1_22 = 2.7;
float var_1_23 = 10.85;
float var_1_24 = 7.4;
double var_1_25 = 255.5;
double var_1_26 = 64.576;
double var_1_27 = 15.4;
unsigned short int last_1_var_1_6 = 256;
double last_1_var_1_22 = 2.7;
void initially(void) {
}
void step(void) {
 if (((((last_1_var_1_22) > (var_1_5)) ? (last_1_var_1_22) : (var_1_5))) > last_1_var_1_22) {
  var_1_19 = ((((last_1_var_1_6) > (var_1_14)) ? (last_1_var_1_6) : (var_1_14)));
 }
 unsigned long int stepLocal_3 = var_1_19 * (3512938537u - var_1_11);
 unsigned long int stepLocal_2 = 2u * (var_1_19 * var_1_11);
 if ((var_1_19 ^ (var_1_9 - var_1_10)) > stepLocal_3) {
  if ((((((var_1_19) > (var_1_9)) ? (var_1_19) : (var_1_9))) + var_1_19) == stepLocal_2) {
   var_1_6 = var_1_13;
  } else {
   var_1_6 = ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) > (var_1_14)) ? (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) : (var_1_14)));
  }
 }
 unsigned long int stepLocal_5 = var_1_11;
 unsigned long int stepLocal_4 = var_1_19;
 if (var_1_4 > stepLocal_5) {
  if (var_1_4 > stepLocal_4) {
   var_1_21 = 8;
  }
 }
 unsigned long int stepLocal_1 = 8u;
 unsigned long int stepLocal_0 = ((((var_1_2) < (var_1_21)) ? (var_1_2) : (var_1_21))) + var_1_21;
 if (stepLocal_1 < var_1_2) {
  if (-8 > stepLocal_0) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = 256.5;
  }
 }
 if (var_1_16) {
  if ((var_1_1 + (var_1_5 + var_1_1)) < 9.25) {
   var_1_15 = var_1_5;
  }
 } else {
  var_1_15 = var_1_18;
 }
 if (! (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) >= (var_1_23 - var_1_24))) {
  var_1_22 = (var_1_25 + (var_1_26 - var_1_27));
 } else {
  if (var_1_16) {
   var_1_22 = var_1_18;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_22 = var_1_22;
}
int property(void) {
 return ((((((8u < var_1_2) ? ((-8 > (((((var_1_2) < (var_1_21)) ? (var_1_2) : (var_1_21))) + var_1_21)) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 256.5))) : 1) && (((var_1_19 ^ (var_1_9 - var_1_10)) > (var_1_19 * (3512938537u - var_1_11))) ? (((((((var_1_19) > (var_1_9)) ? (var_1_19) : (var_1_9))) + var_1_19) == (2u * (var_1_19 * var_1_11))) ? (var_1_6 == ((unsigned short int) var_1_13)) : (var_1_6 == ((unsigned short int) ((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) > (var_1_14)) ? (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) : (var_1_14)))))) : 1)) && (var_1_16 ? (((var_1_1 + (var_1_5 + var_1_1)) < 9.25) ? (var_1_15 == ((float) var_1_5)) : 1) : (var_1_15 == ((float) var_1_18)))) && ((((((last_1_var_1_22) > (var_1_5)) ? (last_1_var_1_22) : (var_1_5))) > last_1_var_1_22) ? (var_1_19 == ((unsigned long int) ((((last_1_var_1_6) > (var_1_14)) ? (last_1_var_1_6) : (var_1_14))))) : 1)) && ((var_1_4 > var_1_11) ? ((var_1_4 > var_1_19) ? (var_1_21 == ((signed long int) 8)) : 1) : 1)) && ((! (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) >= (var_1_23 - var_1_24))) ? (var_1_22 == ((double) (var_1_25 + (var_1_26 - var_1_27)))) : (var_1_16 ? (var_1_22 == ((double) var_1_18)) : 1))
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
