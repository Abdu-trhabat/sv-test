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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -16;
unsigned char var_1_2 = 100;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 10;
signed char var_1_6 = -64;
signed char var_1_7 = 50;
signed char var_1_8 = 4;
signed char var_1_9 = 10;
float var_1_10 = -0.875;
float var_1_11 = 32.46;
unsigned short int var_1_12 = 10;
unsigned short int var_1_13 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_3 * var_1_4;
 signed long int stepLocal_0 = var_1_4 % var_1_5;
 if (var_1_2 <= stepLocal_1) {
  var_1_1 = ((((((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) < ((var_1_3 + var_1_4))) ? (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) : ((var_1_3 + var_1_4))));
 } else {
  if (stepLocal_0 <= var_1_3) {
   var_1_1 = var_1_2;
  }
 }
 signed short int stepLocal_2 = var_1_1;
 if (stepLocal_2 == var_1_5) {
  var_1_6 = (var_1_7 + ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))));
 }
 if (var_1_6 > var_1_4) {
  if ((~ 16u) > ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) {
   if ((~ (var_1_3 & var_1_2)) <= var_1_5) {
    var_1_10 = var_1_11;
   } else {
    var_1_10 = 24.575f;
   }
  }
 } else {
  var_1_10 = var_1_11;
 }
 var_1_12 = var_1_13;
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
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 255);
 assume_abort_if_not(var_1_5 != 0);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -63);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -63);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 <= (var_1_3 * var_1_4)) ? (var_1_1 == ((signed short int) ((((((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) < ((var_1_3 + var_1_4))) ? (((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) : ((var_1_3 + var_1_4)))))) : (((var_1_4 % var_1_5) <= var_1_3) ? (var_1_1 == ((signed short int) var_1_2)) : 1)) && ((var_1_1 == var_1_5) ? (var_1_6 == ((signed char) (var_1_7 + ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))) : 1)) && ((var_1_6 > var_1_4) ? (((~ 16u) > ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) ? (((~ (var_1_3 & var_1_2)) <= var_1_5) ? (var_1_10 == ((float) var_1_11)) : (var_1_10 == ((float) 24.575f))) : 1) : (var_1_10 == ((float) var_1_11)))) && (var_1_12 == ((unsigned short int) var_1_13))
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
