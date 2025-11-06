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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 25.8;
unsigned char var_1_2 = 1;
double var_1_3 = 128.2;
double var_1_4 = 15.4;
double var_1_5 = 5.25;
signed long int var_1_8 = -4;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 100;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 5;
unsigned short int last_1_var_1_13 = 5;
void initially(void) {
}
void step(void) {
 if ((var_1_8 + last_1_var_1_13) < var_1_11) {
  if (last_1_var_1_13 > var_1_11) {
   var_1_10 = var_1_12;
  }
 }
 if (! var_1_2) {
  var_1_1 = (var_1_3 - var_1_4);
 } else {
  var_1_1 = ((((16.2) < (var_1_3)) ? (16.2) : (var_1_3)));
 }
 if ((var_1_3 + (var_1_4 + var_1_1)) != var_1_1) {
  if (var_1_2) {
   if ((- var_1_10) <= var_1_8) {
    if (var_1_9) {
     var_1_5 = var_1_4;
    }
   } else {
    var_1_5 = var_1_3;
   }
  } else {
   var_1_5 = var_1_3;
  }
 } else {
  var_1_5 = var_1_3;
 }
 if (var_1_9) {
  if ((var_1_4 * (var_1_3 - 5.3)) <= var_1_5) {
   var_1_13 = var_1_10;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
}
int property(void) {
 return ((((! var_1_2) ? (var_1_1 == ((double) (var_1_3 - var_1_4))) : (var_1_1 == ((double) ((((16.2) < (var_1_3)) ? (16.2) : (var_1_3)))))) && (((var_1_3 + (var_1_4 + var_1_1)) != var_1_1) ? (var_1_2 ? (((- var_1_10) <= var_1_8) ? (var_1_9 ? (var_1_5 == ((double) var_1_4)) : 1) : (var_1_5 == ((double) var_1_3))) : (var_1_5 == ((double) var_1_3))) : (var_1_5 == ((double) var_1_3)))) && (((var_1_8 + last_1_var_1_13) < var_1_11) ? ((last_1_var_1_13 > var_1_11) ? (var_1_10 == ((unsigned char) var_1_12)) : 1) : 1)) && (var_1_9 ? (((var_1_4 * (var_1_3 - 5.3)) <= var_1_5) ? (var_1_13 == ((unsigned short int) var_1_10)) : 1) : 1)
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
