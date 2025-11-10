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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18525_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -128;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
signed short int var_1_4 = 0;
signed short int var_1_5 = 500;
double var_1_7 = 10000000000000.25;
double var_1_8 = 1000000.5;
double var_1_9 = 3.4;
signed long int var_1_10 = -32;
signed long int var_1_11 = 64;
signed long int last_1_var_1_10 = -32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_2;
 signed long int stepLocal_0 = var_1_4 - var_1_5;
 if (stepLocal_1 && var_1_3) {
  if (stepLocal_0 <= last_1_var_1_10) {
   var_1_1 = var_1_5;
  }
 }
 signed short int stepLocal_2 = var_1_4;
 if (stepLocal_2 == ((((32) < (var_1_5)) ? (32) : (var_1_5)))) {
  if (! var_1_2) {
   var_1_7 = (var_1_8 - var_1_9);
  } else {
   var_1_7 = var_1_8;
  }
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_1 != ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) {
  var_1_10 = (var_1_5 - var_1_11);
 } else {
  if (var_1_7 != var_1_8) {
   if (var_1_2) {
    var_1_10 = var_1_11;
   } else {
    var_1_10 = var_1_4;
   }
  } else {
   var_1_10 = var_1_4;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((var_1_2 && var_1_3) ? (((var_1_4 - var_1_5) <= last_1_var_1_10) ? (var_1_1 == ((signed long int) var_1_5)) : 1) : 1) && ((var_1_4 == ((((32) < (var_1_5)) ? (32) : (var_1_5)))) ? ((! var_1_2) ? (var_1_7 == ((double) (var_1_8 - var_1_9))) : (var_1_7 == ((double) var_1_8))) : (var_1_7 == ((double) var_1_8)))) && ((var_1_1 != ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)))) ? (var_1_10 == ((signed long int) (var_1_5 - var_1_11))) : ((var_1_7 != var_1_8) ? (var_1_2 ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_10 == ((signed long int) var_1_4))) : (var_1_10 == ((signed long int) var_1_4))))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
