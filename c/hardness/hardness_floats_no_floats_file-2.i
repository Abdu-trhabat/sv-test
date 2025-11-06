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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
signed char var_1_2 = 2;
signed char var_1_3 = 4;
signed char var_1_4 = 0;
unsigned short int var_1_5 = 200;
unsigned short int var_1_6 = 56955;
unsigned short int var_1_7 = 32;
unsigned short int var_1_8 = 1;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 1000000000;
unsigned long int last_1_var_1_11 = 1000000000;
void initially(void) {
}
void step(void) {
 if (var_1_10 || (var_1_6 == var_1_8)) {
  if (var_1_6 <= (((((0) < (last_1_var_1_11)) ? (0) : (last_1_var_1_11))) << last_1_var_1_11)) {
   if (var_1_10 && (last_1_var_1_11 == (var_1_6 * var_1_5))) {
    var_1_9 = var_1_5;
   } else {
    var_1_9 = 2;
   }
  } else {
   var_1_9 = var_1_6;
  }
 } else {
  var_1_9 = var_1_6;
 }
 if (var_1_2 <= (var_1_3 * var_1_4)) {
  var_1_1 = ((((var_1_5) > ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8))))) ? (var_1_5) : ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8))))));
 }
 unsigned long int stepLocal_1 = - (var_1_5 ^ 128u);
 unsigned short int stepLocal_0 = var_1_1;
 if (var_1_7 > stepLocal_0) {
  if (var_1_10) {
   if (stepLocal_1 < var_1_9) {
    var_1_11 = var_1_7;
   }
  } else {
   var_1_11 = 1u;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return (((var_1_2 <= (var_1_3 * var_1_4)) ? (var_1_1 == ((unsigned short int) ((((var_1_5) > ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8))))) ? (var_1_5) : ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8)))))))) : 1) && ((var_1_10 || (var_1_6 == var_1_8)) ? ((var_1_6 <= (((((0) < (last_1_var_1_11)) ? (0) : (last_1_var_1_11))) << last_1_var_1_11)) ? ((var_1_10 && (last_1_var_1_11 == (var_1_6 * var_1_5))) ? (var_1_9 == ((unsigned short int) var_1_5)) : (var_1_9 == ((unsigned short int) 2))) : (var_1_9 == ((unsigned short int) var_1_6))) : (var_1_9 == ((unsigned short int) var_1_6)))) && ((var_1_7 > var_1_1) ? (var_1_10 ? (((- (var_1_5 ^ 128u)) < var_1_9) ? (var_1_11 == ((unsigned long int) var_1_7)) : 1) : (var_1_11 == ((unsigned long int) 1u))) : 1)
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
