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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 16;
signed long int var_1_3 = -64;
signed long int var_1_4 = -4;
unsigned short int var_1_7 = 0;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 2;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed char var_1_14 = 32;
signed char var_1_16 = 4;
signed char var_1_17 = 50;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
void initially(void) {
}
void step(void) {
 var_1_10 = ((var_1_11 && var_1_12) && var_1_13);
 var_1_18 = var_1_19;
 if (var_1_10) {
  var_1_1 = (((((var_1_3 + var_1_4)) < (-16)) ? ((var_1_3 + var_1_4)) : (-16)));
 } else {
  if (var_1_18) {
   var_1_1 = (var_1_4 + -4);
  } else {
   if (var_1_18) {
    var_1_1 = var_1_4;
   } else {
    var_1_1 = var_1_3;
   }
  }
 }
 if (-5 >= ((((var_1_1) > (var_1_3)) ? (var_1_1) : (var_1_3)))) {
  var_1_7 = (var_1_8 + var_1_9);
 }
 if (var_1_18) {
  var_1_14 = (((((var_1_16) < (100)) ? (var_1_16) : (100))) - 64);
 } else {
  var_1_14 = (var_1_16 - var_1_17);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1073741823);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1073741823);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_10 ? (var_1_1 == ((signed long int) (((((var_1_3 + var_1_4)) < (-16)) ? ((var_1_3 + var_1_4)) : (-16))))) : (var_1_18 ? (var_1_1 == ((signed long int) (var_1_4 + -4))) : (var_1_18 ? (var_1_1 == ((signed long int) var_1_4)) : (var_1_1 == ((signed long int) var_1_3))))) && ((-5 >= ((((var_1_1) > (var_1_3)) ? (var_1_1) : (var_1_3)))) ? (var_1_7 == ((unsigned short int) (var_1_8 + var_1_9))) : 1)) && (var_1_10 == ((unsigned char) ((var_1_11 && var_1_12) && var_1_13)))) && (var_1_18 ? (var_1_14 == ((signed char) (((((var_1_16) < (100)) ? (var_1_16) : (100))) - 64))) : (var_1_14 == ((signed char) (var_1_16 - var_1_17))))) && (var_1_18 == ((unsigned char) var_1_19))
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
