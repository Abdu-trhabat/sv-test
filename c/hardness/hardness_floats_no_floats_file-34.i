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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch34no_floats.c", 13, "reach_error"); }
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
signed long int var_1_2 = -16;
unsigned char var_1_3 = 200;
unsigned char var_1_4 = 16;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 16;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 40912;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed char var_1_15 = -8;
signed short int var_1_16 = -2;
signed char var_1_17 = -1;
signed char var_1_18 = 4;
unsigned char var_1_19 = 0;
unsigned char last_1_var_1_7 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = -32;
 signed long int stepLocal_0 = (var_1_3 - var_1_4) - var_1_5;
 if (stepLocal_1 >= var_1_2) {
  if (stepLocal_0 <= var_1_2) {
   var_1_1 = var_1_6;
  }
 } else {
  var_1_1 = var_1_6;
 }
 var_1_19 = var_1_14;
 signed long int stepLocal_3 = var_1_2 ^ var_1_4;
 unsigned char stepLocal_2 = var_1_19;
 if ((var_1_3 * (var_1_8 - var_1_5)) > stepLocal_3) {
  if (var_1_19) {
   if (stepLocal_2 && last_1_var_1_7) {
    var_1_7 = 0;
   } else {
    var_1_7 = (var_1_12 && var_1_13);
   }
  } else {
   var_1_7 = var_1_14;
  }
 }
 signed short int stepLocal_4 = var_1_16;
 if (stepLocal_4 >= var_1_3) {
  var_1_15 = (var_1_17 + var_1_18);
 } else {
  if (var_1_19) {
   if (var_1_14) {
    var_1_15 = ((((var_1_3) > (var_1_17)) ? (var_1_3) : (var_1_17)));
   }
  } else {
   var_1_15 = var_1_18;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 191);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 64);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -32768);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
}
int property(void) {
 return ((((-32 >= var_1_2) ? ((((var_1_3 - var_1_4) - var_1_5) <= var_1_2) ? (var_1_1 == ((signed long int) var_1_6)) : 1) : (var_1_1 == ((signed long int) var_1_6))) && (((var_1_3 * (var_1_8 - var_1_5)) > (var_1_2 ^ var_1_4)) ? (var_1_19 ? ((var_1_19 && last_1_var_1_7) ? (var_1_7 == ((unsigned char) 0)) : (var_1_7 == ((unsigned char) (var_1_12 && var_1_13)))) : (var_1_7 == ((unsigned char) var_1_14))) : 1)) && ((var_1_16 >= var_1_3) ? (var_1_15 == ((signed char) (var_1_17 + var_1_18))) : (var_1_19 ? (var_1_14 ? (var_1_15 == ((signed char) ((((var_1_3) > (var_1_17)) ? (var_1_3) : (var_1_17))))) : 1) : (var_1_15 == ((signed char) var_1_18))))) && (var_1_19 == ((unsigned char) var_1_14))
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
