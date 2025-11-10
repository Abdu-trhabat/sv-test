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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14525_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 25;
signed long int var_1_2 = 32;
signed long int var_1_3 = 1;
signed long int var_1_4 = 32;
unsigned short int var_1_5 = 30958;
unsigned short int var_1_6 = 10000;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 10;
signed long int var_1_9 = 2;
signed long int var_1_10 = -25;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
signed long int var_1_13 = -256;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 128;
unsigned long int var_1_16 = 4;
void initially(void) {
}
void step(void) {
 if ((var_1_2 + var_1_3) <= var_1_4) {
  var_1_1 = ((var_1_5 + (var_1_6 + var_1_7)) - var_1_8);
 }
 signed long int stepLocal_1 = ((((var_1_1) < (-25)) ? (var_1_1) : (-25))) / var_1_7;
 unsigned char stepLocal_0 = (10 > var_1_10) && var_1_11;
 if (stepLocal_0 || var_1_12) {
  if (stepLocal_1 >= (var_1_8 + var_1_10)) {
   var_1_9 = -100;
  }
 } else {
  var_1_9 = var_1_13;
 }
 signed long int stepLocal_3 = var_1_7 >> var_1_16;
 signed long int stepLocal_2 = var_1_7 | var_1_9;
 if (var_1_9 < stepLocal_2) {
  var_1_14 = var_1_15;
 } else {
  if (stepLocal_3 >= var_1_9) {
   var_1_14 = var_1_15;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 16383);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 8192);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8192);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483647);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 15);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 + var_1_3) <= var_1_4) ? (var_1_1 == ((unsigned short int) ((var_1_5 + (var_1_6 + var_1_7)) - var_1_8))) : 1) && ((((10 > var_1_10) && var_1_11) || var_1_12) ? (((((((var_1_1) < (-25)) ? (var_1_1) : (-25))) / var_1_7) >= (var_1_8 + var_1_10)) ? (var_1_9 == ((signed long int) -100)) : 1) : (var_1_9 == ((signed long int) var_1_13)))) && ((var_1_9 < (var_1_7 | var_1_9)) ? (var_1_14 == ((unsigned char) var_1_15)) : (((var_1_7 >> var_1_16) >= var_1_9) ? (var_1_14 == ((unsigned char) var_1_15)) : 1))
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
