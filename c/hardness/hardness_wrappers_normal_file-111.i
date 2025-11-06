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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 255.8;
float var_1_2 = 50.5;
float var_1_3 = 8.5;
double var_1_4 = 64.15;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
double var_1_7 = 7.5;
double var_1_8 = 5.375;
signed long int var_1_9 = -256;
signed long int var_1_10 = -100;
unsigned short int var_1_11 = 32;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 10000;
unsigned short int var_1_14 = 2;
double var_1_15 = 32.5;
double last_1_var_1_15 = 32.5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_6;
 if (var_1_2 < var_1_3) {
  var_1_1 = ((((1.25) < (var_1_4)) ? (1.25) : (var_1_4)));
 } else {
  if (var_1_5 || stepLocal_0) {
   var_1_1 = (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_8);
  }
 }
 unsigned short int stepLocal_1 = var_1_14;
 if (stepLocal_1 >= var_1_12) {
  if (last_1_var_1_15 > var_1_8) {
   if (var_1_4 >= var_1_7) {
    var_1_15 = var_1_8;
   } else {
    var_1_15 = var_1_4;
   }
  }
 } else {
  var_1_15 = var_1_8;
 }
 if (var_1_7 != (((((var_1_8 * var_1_15)) > (var_1_15)) ? ((var_1_8 * var_1_15)) : (var_1_15)))) {
  if (var_1_7 <= var_1_15) {
   if (var_1_6) {
    var_1_9 = var_1_10;
   }
  }
 } else {
  var_1_9 = var_1_10;
 }
 if (var_1_8 <= var_1_15) {
  var_1_11 = (32 + (var_1_12 + (var_1_13 - var_1_14)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483647);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16384);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 8191);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 8191);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 return ((((var_1_2 < var_1_3) ? (var_1_1 == ((double) ((((1.25) < (var_1_4)) ? (1.25) : (var_1_4))))) : ((var_1_5 || var_1_6) ? (var_1_1 == ((double) (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) + var_1_8))) : 1)) && ((var_1_7 != (((((var_1_8 * var_1_15)) > (var_1_15)) ? ((var_1_8 * var_1_15)) : (var_1_15)))) ? ((var_1_7 <= var_1_15) ? (var_1_6 ? (var_1_9 == ((signed long int) var_1_10)) : 1) : 1) : (var_1_9 == ((signed long int) var_1_10)))) && ((var_1_8 <= var_1_15) ? (var_1_11 == ((unsigned short int) (32 + (var_1_12 + (var_1_13 - var_1_14))))) : 1)) && ((var_1_14 >= var_1_12) ? ((last_1_var_1_15 > var_1_8) ? ((var_1_4 >= var_1_7) ? (var_1_15 == ((double) var_1_8)) : (var_1_15 == ((double) var_1_4))) : 1) : (var_1_15 == ((double) var_1_8)))
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
