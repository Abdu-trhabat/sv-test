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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2525_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
unsigned short int var_1_3 = 10;
unsigned short int var_1_4 = 500;
unsigned long int var_1_5 = 5;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 4;
signed short int var_1_8 = -4;
signed long int var_1_9 = -256;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed short int var_1_12 = 4;
signed short int var_1_13 = -8;
void initially(void) {
}
void step(void) {
 if ((-2 / ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) != (((((var_1_3 ^ var_1_7)) < ((var_1_4 | var_1_9))) ? ((var_1_3 ^ var_1_7)) : ((var_1_4 | var_1_9))))) {
  if (var_1_4 > var_1_3) {
   var_1_6 = var_1_10;
  } else {
   var_1_6 = var_1_11;
  }
 } else {
  var_1_6 = var_1_11;
 }
 unsigned short int stepLocal_0 = var_1_3;
 if (var_1_6) {
  if (stepLocal_0 <= var_1_4) {
   var_1_1 = (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) + var_1_5);
  }
 } else {
  var_1_1 = var_1_5;
 }
 signed short int stepLocal_2 = var_1_7;
 unsigned char stepLocal_1 = var_1_6;
 if (stepLocal_2 > var_1_5) {
  if (((var_1_8 + 10) <= var_1_1) && stepLocal_1) {
   var_1_12 = var_1_13;
  }
 } else {
  var_1_12 = var_1_13;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32767);
 assume_abort_if_not(var_1_8 <= 32767);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((var_1_6 ? ((var_1_3 <= var_1_4) ? (var_1_1 == ((unsigned long int) (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) + var_1_5))) : 1) : (var_1_1 == ((unsigned long int) var_1_5))) && (((-2 / ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) != (((((var_1_3 ^ var_1_7)) < ((var_1_4 | var_1_9))) ? ((var_1_3 ^ var_1_7)) : ((var_1_4 | var_1_9))))) ? ((var_1_4 > var_1_3) ? (var_1_6 == ((unsigned char) var_1_10)) : (var_1_6 == ((unsigned char) var_1_11))) : (var_1_6 == ((unsigned char) var_1_11)))) && ((var_1_7 > var_1_5) ? ((((var_1_8 + 10) <= var_1_1) && var_1_6) ? (var_1_12 == ((signed short int) var_1_13)) : 1) : (var_1_12 == ((signed short int) var_1_13)))
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
