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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch62normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_2 = -128;
unsigned char var_1_3 = 1;
signed char var_1_4 = -5;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 16;
signed long int var_1_7 = 256;
signed long int var_1_8 = 1494406358;
signed long int var_1_9 = 4;
signed short int var_1_10 = -32;
unsigned char last_1_var_1_5 = 16;
signed short int last_1_var_1_10 = -32;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = last_1_var_1_5;
 if (last_1_var_1_5 <= stepLocal_1) {
  if (stepLocal_0 <= var_1_4) {
   var_1_7 = ((var_1_8 - var_1_6) - last_1_var_1_5);
  } else {
   if (! var_1_3) {
    var_1_7 = last_1_var_1_10;
   } else {
    var_1_7 = (last_1_var_1_5 + var_1_6);
   }
  }
 } else {
  var_1_7 = ((var_1_8 - var_1_6) - last_1_var_1_5);
 }
 var_1_10 = var_1_7;
 var_1_1 = (16 - 2);
 if (var_1_3) {
  var_1_2 = ((((-4) < 0 ) ? -(-4) : (-4)));
 } else {
  var_1_2 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 var_1_9 = var_1_8;
 if (var_1_4 < var_1_9) {
  if (var_1_3) {
   if (var_1_1 != var_1_4) {
    var_1_5 = var_1_6;
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -126);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 1073741822);
 assume_abort_if_not(var_1_8 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((((var_1_1 == ((signed char) (16 - 2))) && (var_1_3 ? (var_1_2 == ((signed char) ((((-4) < 0 ) ? -(-4) : (-4))))) : (var_1_2 == ((signed char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) && ((var_1_4 < var_1_9) ? (var_1_3 ? ((var_1_1 != var_1_4) ? (var_1_5 == ((unsigned char) var_1_6)) : 1) : 1) : 1)) && ((last_1_var_1_5 <= var_1_4) ? ((last_1_var_1_5 <= var_1_4) ? (var_1_7 == ((signed long int) ((var_1_8 - var_1_6) - last_1_var_1_5))) : ((! var_1_3) ? (var_1_7 == ((signed long int) last_1_var_1_10)) : (var_1_7 == ((signed long int) (last_1_var_1_5 + var_1_6))))) : (var_1_7 == ((signed long int) ((var_1_8 - var_1_6) - last_1_var_1_5))))) && (var_1_9 == ((signed long int) var_1_8))) && (var_1_10 == ((signed short int) var_1_7))
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
