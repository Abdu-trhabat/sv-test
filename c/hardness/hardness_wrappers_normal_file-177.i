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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 32.5;
unsigned short int var_1_2 = 128;
unsigned short int var_1_3 = 8;
signed long int var_1_4 = -64;
double var_1_5 = 127.5;
double var_1_6 = 31.124;
double var_1_7 = 15.125;
unsigned short int var_1_8 = 5;
unsigned short int var_1_9 = 256;
unsigned short int var_1_10 = 5;
double var_1_11 = 1000000000.6;
unsigned short int var_1_12 = 54889;
signed short int var_1_13 = -1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (((5) < ((var_1_2 * var_1_3))) ? (5) : ((var_1_2 * var_1_3)));
 signed long int stepLocal_1 = var_1_2 * (var_1_3 * 50);
 unsigned short int stepLocal_0 = var_1_3;
 if (stepLocal_2 <= var_1_4) {
  if (var_1_2 > stepLocal_0) {
   if ((- var_1_4) == stepLocal_1) {
    var_1_1 = (((((var_1_5 - var_1_6)) > (var_1_7)) ? ((var_1_5 - var_1_6)) : (var_1_7)));
   }
  }
 } else {
  var_1_1 = var_1_6;
 }
 if ((var_1_2 * var_1_4) >= -32) {
  var_1_8 = ((var_1_9 + var_1_10) + 64);
 } else {
  var_1_8 = var_1_9;
 }
 unsigned short int stepLocal_4 = var_1_9;
 unsigned short int stepLocal_3 = var_1_8;
 if (var_1_10 >= stepLocal_3) {
  if (stepLocal_4 < ((var_1_12 - var_1_10) << var_1_8)) {
   var_1_11 = var_1_7;
  }
 }
 var_1_13 = var_1_10;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16384);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((5) < ((var_1_2 * var_1_3))) ? (5) : ((var_1_2 * var_1_3)))) <= var_1_4) ? ((var_1_2 > var_1_3) ? (((- var_1_4) == (var_1_2 * (var_1_3 * 50))) ? (var_1_1 == ((double) (((((var_1_5 - var_1_6)) > (var_1_7)) ? ((var_1_5 - var_1_6)) : (var_1_7))))) : 1) : 1) : (var_1_1 == ((double) var_1_6))) && (((var_1_2 * var_1_4) >= -32) ? (var_1_8 == ((unsigned short int) ((var_1_9 + var_1_10) + 64))) : (var_1_8 == ((unsigned short int) var_1_9)))) && ((var_1_10 >= var_1_8) ? ((var_1_9 < ((var_1_12 - var_1_10) << var_1_8)) ? (var_1_11 == ((double) var_1_7)) : 1) : 1)) && (var_1_13 == ((signed short int) var_1_10))
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
