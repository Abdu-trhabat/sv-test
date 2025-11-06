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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
unsigned char var_1_2 = 0;
signed short int var_1_3 = 128;
signed short int var_1_4 = 1;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 25;
double var_1_7 = 128.0;
signed char var_1_8 = -5;
double var_1_9 = 2.0;
double var_1_10 = -50.0;
unsigned long int var_1_11 = 5;
unsigned long int var_1_13 = 16;
unsigned long int var_1_14 = 128;
float var_1_15 = -5.0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_3 >= var_1_4;
 signed short int stepLocal_0 = var_1_4;
 if (var_1_2) {
  if (stepLocal_1 && var_1_5) {
   if (var_1_3 >= stepLocal_0) {
    var_1_1 = 5;
   } else {
    var_1_1 = ((((25) < (var_1_6)) ? (25) : (var_1_6)));
   }
  }
 } else {
  var_1_1 = var_1_6;
 }
 if ((var_1_1 / var_1_8) > var_1_6) {
  var_1_7 = ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)));
 }
 signed char stepLocal_3 = var_1_8;
 unsigned short int stepLocal_2 = var_1_6;
 if (var_1_2) {
  if (var_1_1 <= stepLocal_3) {
   if ((~ (var_1_1 / var_1_8)) < stepLocal_2) {
    var_1_11 = (var_1_1 + var_1_6);
   }
  }
 } else {
  var_1_11 = (((((var_1_1 + (var_1_6 + var_1_13))) > ((3076057457u - var_1_14))) ? ((var_1_1 + (var_1_6 + var_1_13))) : ((3076057457u - var_1_14))));
 }
 var_1_15 = var_1_9;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -128);
 assume_abort_if_not(var_1_8 <= 127);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 ? (((var_1_3 >= var_1_4) && var_1_5) ? ((var_1_3 >= var_1_4) ? (var_1_1 == ((unsigned short int) 5)) : (var_1_1 == ((unsigned short int) ((((25) < (var_1_6)) ? (25) : (var_1_6)))))) : 1) : (var_1_1 == ((unsigned short int) var_1_6))) && (((var_1_1 / var_1_8) > var_1_6) ? (var_1_7 == ((double) ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) : 1)) && (var_1_2 ? ((var_1_1 <= var_1_8) ? (((~ (var_1_1 / var_1_8)) < var_1_6) ? (var_1_11 == ((unsigned long int) (var_1_1 + var_1_6))) : 1) : 1) : (var_1_11 == ((unsigned long int) (((((var_1_1 + (var_1_6 + var_1_13))) > ((3076057457u - var_1_14))) ? ((var_1_1 + (var_1_6 + var_1_13))) : ((3076057457u - var_1_14)))))))) && (var_1_15 == ((float) var_1_9))
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
