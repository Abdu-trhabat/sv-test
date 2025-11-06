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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
signed char var_1_5 = -8;
signed char var_1_6 = 2;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 2;
unsigned short int var_1_9 = 8;
void initially(void) {
}
void step(void) {
 var_1_1 = (! (var_1_2 || var_1_3));
 signed char stepLocal_2 = var_1_6;
 unsigned short int stepLocal_1 = var_1_8;
 unsigned short int stepLocal_0 = var_1_8;
 if (var_1_5 >= stepLocal_2) {
  var_1_4 = var_1_7;
 } else {
  if (stepLocal_0 > var_1_9) {
   if (var_1_9 >= stepLocal_1) {
    var_1_4 = var_1_7;
   } else {
    var_1_4 = var_1_2;
   }
  } else {
   var_1_4 = var_1_3;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 0);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 0);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -128);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -128);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65535);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return (var_1_1 == ((unsigned char) (! (var_1_2 || var_1_3)))) && ((var_1_5 >= var_1_6) ? (var_1_4 == ((unsigned char) var_1_7)) : ((var_1_8 > var_1_9) ? ((var_1_9 >= var_1_8) ? (var_1_4 == ((unsigned char) var_1_7)) : (var_1_4 == ((unsigned char) var_1_2))) : (var_1_4 == ((unsigned char) var_1_3))))
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
