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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11925_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -4;
signed long int var_1_2 = -1;
signed long int var_1_3 = 256;
signed short int var_1_4 = -100;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 5;
unsigned long int var_1_12 = 3644703036;
unsigned long int var_1_13 = 16;
unsigned long int var_1_14 = 256;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 - var_1_3);
 var_1_4 = 200;
 var_1_8 = (! var_1_9);
 signed long int stepLocal_2 = var_1_1;
 signed long int stepLocal_1 = var_1_3;
 signed long int stepLocal_0 = var_1_3;
 if (stepLocal_1 <= (var_1_1 + var_1_2)) {
  if (stepLocal_2 == var_1_4) {
   if (var_1_1 != stepLocal_0) {
    var_1_10 = 128u;
   } else {
    var_1_10 = ((((var_1_12 - var_1_3) < 0 ) ? -(var_1_12 - var_1_3) : (var_1_12 - var_1_3)));
   }
  } else {
   var_1_10 = (var_1_12 - (var_1_13 + (var_1_14 + 8u)));
  }
 } else {
  var_1_10 = var_1_14;
 }
 if (var_1_1 <= var_1_10) {
  var_1_5 = (var_1_6 && var_1_7);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741824);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 536870912);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_1 == ((signed long int) (var_1_2 - var_1_3))) && (var_1_4 == ((signed short int) 200))) && ((var_1_1 <= var_1_10) ? (var_1_5 == ((unsigned char) (var_1_6 && var_1_7))) : 1)) && (var_1_8 == ((unsigned char) (! var_1_9)))) && ((var_1_3 <= (var_1_1 + var_1_2)) ? ((var_1_1 == var_1_4) ? ((var_1_1 != var_1_3) ? (var_1_10 == ((unsigned long int) 128u)) : (var_1_10 == ((unsigned long int) ((((var_1_12 - var_1_3) < 0 ) ? -(var_1_12 - var_1_3) : (var_1_12 - var_1_3)))))) : (var_1_10 == ((unsigned long int) (var_1_12 - (var_1_13 + (var_1_14 + 8u)))))) : (var_1_10 == ((unsigned long int) var_1_14)))
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
