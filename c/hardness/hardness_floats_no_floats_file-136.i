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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned long int var_1_4 = 10;
unsigned long int var_1_5 = 10;
unsigned long int var_1_6 = 4016566698;
signed long int var_1_7 = -16;
signed long int var_1_8 = 50;
signed long int var_1_9 = -25;
signed long int var_1_10 = 25;
signed long int var_1_11 = -16;
signed long int var_1_12 = 5;
signed long int var_1_13 = 8;
signed long int var_1_14 = 8;
signed long int var_1_15 = 256;
signed long int var_1_16 = -32;
signed long int var_1_17 = -8;
signed short int var_1_18 = -200;
signed short int var_1_19 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (var_1_3) {
   var_1_1 = (var_1_4 + var_1_5);
  } else {
   var_1_1 = (((((var_1_6) < (3757035609u)) ? (var_1_6) : (3757035609u))) - var_1_4);
  }
 } else {
  var_1_1 = var_1_4;
 }
 if ((var_1_8 * ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))) > var_1_11) {
  var_1_7 = (((((((((16) > (var_1_12)) ? (16) : (var_1_12)))) > (var_1_13)) ? (((((16) > (var_1_12)) ? (16) : (var_1_12)))) : (var_1_13))) - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))));
 }
 if (128 >= ((((var_1_15) > ((var_1_12 / var_1_17))) ? (var_1_15) : ((var_1_12 / var_1_17))))) {
  if (var_1_8 != var_1_14) {
   var_1_16 = ((((var_1_14) > (var_1_12)) ? (var_1_14) : (var_1_12)));
  }
 }
 if (var_1_17 < var_1_11) {
  var_1_18 = ((((4) > ((4 - var_1_19))) ? (4) : ((4 - var_1_19))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 2147483647);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
 assume_abort_if_not(var_1_17 != 0);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_2 ? (var_1_3 ? (var_1_1 == ((unsigned long int) (var_1_4 + var_1_5))) : (var_1_1 == ((unsigned long int) (((((var_1_6) < (3757035609u)) ? (var_1_6) : (3757035609u))) - var_1_4)))) : (var_1_1 == ((unsigned long int) var_1_4))) && (((var_1_8 * ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))) > var_1_11) ? (var_1_7 == ((signed long int) (((((((((16) > (var_1_12)) ? (16) : (var_1_12)))) > (var_1_13)) ? (((((16) > (var_1_12)) ? (16) : (var_1_12)))) : (var_1_13))) - ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)))))) : 1)) && ((128 >= ((((var_1_15) > ((var_1_12 / var_1_17))) ? (var_1_15) : ((var_1_12 / var_1_17))))) ? ((var_1_8 != var_1_14) ? (var_1_16 == ((signed long int) ((((var_1_14) > (var_1_12)) ? (var_1_14) : (var_1_12))))) : 1) : 1)) && ((var_1_17 < var_1_11) ? (var_1_18 == ((signed short int) ((((4) > ((4 - var_1_19))) ? (4) : ((4 - var_1_19)))))) : 1)
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
