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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 8;
unsigned short int var_1_2 = 59049;
unsigned short int var_1_3 = 100;
unsigned short int var_1_4 = 128;
unsigned short int var_1_5 = 4;
unsigned char var_1_6 = 16;
double var_1_7 = 31.75;
double var_1_8 = 16.1;
double var_1_9 = 0.0;
double var_1_10 = 9999999999999.1;
double var_1_11 = 2.6;
double var_1_12 = 0.875;
double var_1_13 = 0.7;
double var_1_14 = 3.625;
unsigned long int var_1_15 = 10000;
unsigned long int var_1_16 = 3853276514;
unsigned long int var_1_17 = 2189221048;
unsigned char var_1_18 = 8;
void initially(void) {
}
void step(void) {
 if (((var_1_2 - var_1_3) ^ (var_1_4 * var_1_5)) <= -64) {
  var_1_1 = var_1_6;
 } else {
  var_1_1 = 16;
 }
 unsigned char stepLocal_1 = var_1_6;
 unsigned short int stepLocal_0 = var_1_3;
 if (stepLocal_1 >= 4) {
  if (var_1_2 <= stepLocal_0) {
   var_1_7 = (((((var_1_8 - (var_1_9 - var_1_10))) < (var_1_11)) ? ((var_1_8 - (var_1_9 - var_1_10))) : (var_1_11)));
  }
 }
 var_1_12 = (var_1_10 + ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))));
 signed long int stepLocal_2 = - var_1_6;
 if (63.8 > var_1_7) {
  if (stepLocal_2 <= var_1_2) {
   var_1_15 = (var_1_16 - var_1_6);
  } else {
   var_1_15 = (((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_4)) < (var_1_5)) ? ((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_4)) : (var_1_5)));
  }
 }
 var_1_18 = var_1_6;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 32767);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 4611686.018427383000e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 - var_1_3) ^ (var_1_4 * var_1_5)) <= -64) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) 16))) && ((var_1_6 >= 4) ? ((var_1_2 <= var_1_3) ? (var_1_7 == ((double) (((((var_1_8 - (var_1_9 - var_1_10))) < (var_1_11)) ? ((var_1_8 - (var_1_9 - var_1_10))) : (var_1_11))))) : 1) : 1)) && (var_1_12 == ((double) (var_1_10 + ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))))))) && ((63.8 > var_1_7) ? (((- var_1_6) <= var_1_2) ? (var_1_15 == ((unsigned long int) (var_1_16 - var_1_6))) : (var_1_15 == ((unsigned long int) (((((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_4)) < (var_1_5)) ? ((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) - var_1_4)) : (var_1_5)))))) : 1)) && (var_1_18 == ((unsigned char) var_1_6))
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
