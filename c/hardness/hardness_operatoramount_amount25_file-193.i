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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
unsigned char var_1_2 = 50;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 16;
float var_1_5 = 5.6;
float var_1_6 = 32.65;
float var_1_7 = 7.9;
float var_1_8 = 5.625;
signed long int var_1_9 = 10;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 1;
signed long int last_1_var_1_9 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = ((((- var_1_3)) > (var_1_4)) ? ((- var_1_3)) : (var_1_4));
 unsigned char stepLocal_1 = var_1_3;
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 == stepLocal_1) {
  if (var_1_2 > stepLocal_2) {
   if ((var_1_2 * (var_1_4 * -5)) > stepLocal_0) {
    var_1_1 = (((((var_1_2) > (var_1_4)) ? (var_1_2) : (var_1_4))) - var_1_3);
   }
  } else {
   var_1_1 = 16;
  }
 } else {
  var_1_1 = var_1_3;
 }
 var_1_5 = ((var_1_6 - var_1_7) + (var_1_8 + 16.6f));
 if (var_1_8 == (var_1_7 + var_1_6)) {
  if (var_1_10) {
   var_1_9 = var_1_1;
  } else {
   if (var_1_11) {
    var_1_9 = var_1_1;
   } else {
    var_1_9 = last_1_var_1_9;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
}
int property(void) {
 return (((var_1_2 == var_1_3) ? ((var_1_2 > (((((- var_1_3)) > (var_1_4)) ? ((- var_1_3)) : (var_1_4)))) ? (((var_1_2 * (var_1_4 * -5)) > var_1_3) ? (var_1_1 == ((signed short int) (((((var_1_2) > (var_1_4)) ? (var_1_2) : (var_1_4))) - var_1_3))) : 1) : (var_1_1 == ((signed short int) 16))) : (var_1_1 == ((signed short int) var_1_3))) && (var_1_5 == ((float) ((var_1_6 - var_1_7) + (var_1_8 + 16.6f))))) && ((var_1_8 == (var_1_7 + var_1_6)) ? (var_1_10 ? (var_1_9 == ((signed long int) var_1_1)) : (var_1_11 ? (var_1_9 == ((signed long int) var_1_1)) : (var_1_9 == ((signed long int) last_1_var_1_9)))) : 1)
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
