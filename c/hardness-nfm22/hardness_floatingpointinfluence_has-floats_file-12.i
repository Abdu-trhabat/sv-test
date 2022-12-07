// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
signed long int var_1_2 = -8;
signed long int var_1_3 = 128;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 5;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 10;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = var_1_2;
 if (var_1_3 != stepLocal_2) {
  var_1_6 = ((((var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))) < 0 ) ? -(var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))) : (var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))));
 }
 unsigned char stepLocal_4 = var_1_9;
 signed long int stepLocal_3 = var_1_6 * (var_1_6 + var_1_6);
 if ((var_1_8 * (var_1_6 + var_1_6)) <= stepLocal_4) {
  if ((128 + var_1_9) < stepLocal_3) {
   var_1_10 = (var_1_4 || (! (var_1_5 && var_1_12)));
  } else {
   var_1_10 = var_1_5;
  }
 } else {
  var_1_10 = var_1_12;
 }
 unsigned char stepLocal_1 = var_1_6;
 unsigned char stepLocal_0 = var_1_6;
 if (! (-50 < var_1_6)) {
  if (stepLocal_1 != var_1_6) {
   if (stepLocal_0 <= var_1_6) {
    var_1_1 = var_1_4;
   }
  } else {
   var_1_1 = var_1_5;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 127);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
}
void updateLastVariables() {
}
int property() {
 return (((! (-50 < var_1_6)) ? ((var_1_6 != var_1_6) ? ((var_1_6 <= var_1_6) ? (var_1_1 == ((unsigned char) var_1_4)) : 1) : (var_1_1 == ((unsigned char) var_1_5))) : 1) && ((var_1_3 != var_1_2) ? (var_1_6 == ((unsigned char) ((((var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))) < 0 ) ? -(var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))) : (var_1_7 - ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)))))))) : 1)) && (((var_1_8 * (var_1_6 + var_1_6)) <= var_1_9) ? (((128 + var_1_9) < (var_1_6 * (var_1_6 + var_1_6))) ? (var_1_10 == ((unsigned char) (var_1_4 || (! (var_1_5 && var_1_12))))) : (var_1_10 == ((unsigned char) var_1_5))) : (var_1_10 == ((unsigned char) var_1_12)))
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
