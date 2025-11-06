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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146normal.c", 13, "reach_error"); }
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
signed long int var_1_2 = -10;
signed long int var_1_3 = 4;
signed long int var_1_4 = 0;
unsigned long int var_1_5 = 2;
signed long int var_1_6 = -64;
unsigned long int var_1_7 = 1;
unsigned long int var_1_8 = 50;
unsigned long int var_1_9 = 0;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 128;
unsigned char var_1_15 = 100;
float var_1_16 = 15.75;
float var_1_17 = 1000000.1;
unsigned char var_1_18 = 4;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 + (((((16 + var_1_3)) < (((((var_1_4) > (-32)) ? (var_1_4) : (-32))))) ? ((16 + var_1_3)) : (((((var_1_4) > (-32)) ? (var_1_4) : (-32)))))));
 if (var_1_1 >= (((((var_1_2) > (var_1_4)) ? (var_1_2) : (var_1_4))) % var_1_6)) {
  var_1_5 = ((2066465504u - (var_1_7 + var_1_8)) + var_1_9);
 } else {
  if (var_1_9 >= var_1_7) {
   var_1_5 = var_1_7;
  }
 }
 if (var_1_11) {
  if (var_1_3 > var_1_5) {
   var_1_10 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
  }
 } else {
  if (((var_1_6 + var_1_8) * var_1_13) < (var_1_12 + var_1_5)) {
   var_1_10 = (128 - var_1_15);
  }
 }
 var_1_16 = var_1_17;
 var_1_18 = var_1_13;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1073741823);
 assume_abort_if_not(var_1_2 <= 1073741823);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -536870911);
 assume_abort_if_not(var_1_3 <= 536870911);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1073741823);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 536870912);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 536870911);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_1 == ((signed long int) (var_1_2 + (((((16 + var_1_3)) < (((((var_1_4) > (-32)) ? (var_1_4) : (-32))))) ? ((16 + var_1_3)) : (((((var_1_4) > (-32)) ? (var_1_4) : (-32))))))))) && ((var_1_1 >= (((((var_1_2) > (var_1_4)) ? (var_1_2) : (var_1_4))) % var_1_6)) ? (var_1_5 == ((unsigned long int) ((2066465504u - (var_1_7 + var_1_8)) + var_1_9))) : ((var_1_9 >= var_1_7) ? (var_1_5 == ((unsigned long int) var_1_7)) : 1))) && (var_1_11 ? ((var_1_3 > var_1_5) ? (var_1_10 == ((unsigned char) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : 1) : ((((var_1_6 + var_1_8) * var_1_13) < (var_1_12 + var_1_5)) ? (var_1_10 == ((unsigned char) (128 - var_1_15))) : 1))) && (var_1_16 == ((float) var_1_17))) && (var_1_18 == ((unsigned char) var_1_13))
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
