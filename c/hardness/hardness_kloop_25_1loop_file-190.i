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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19025_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
unsigned char var_1_4 = 1;
unsigned short int var_1_5 = 256;
unsigned short int var_1_6 = 2;
signed short int var_1_7 = 16;
float var_1_8 = 24.5;
signed short int var_1_9 = 10;
signed short int var_1_10 = -1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned long int var_1_13 = 5;
unsigned long int var_1_14 = 3689775635;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_4 = var_1_10;
 if (stepLocal_4 <= var_1_6) {
  var_1_13 = (var_1_14 - var_1_5);
 }
 unsigned long int stepLocal_3 = var_1_13;
 unsigned long int stepLocal_2 = (((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13));
 if (var_1_7 == stepLocal_3) {
  var_1_11 = var_1_12;
 } else {
  if (var_1_7 <= stepLocal_2) {
   if (var_1_4) {
    var_1_11 = 1;
   }
  } else {
   var_1_11 = var_1_12;
  }
 }
 unsigned char stepLocal_1 = (- var_1_8) < 32.6f;
 unsigned char stepLocal_0 = var_1_11;
 if (stepLocal_0 || (var_1_11 && (var_1_5 <= var_1_6))) {
  var_1_1 = var_1_7;
 } else {
  if (var_1_11 || stepLocal_1) {
   var_1_1 = (var_1_9 + var_1_10);
  } else {
   var_1_1 = var_1_10;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65535);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32767);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -16383);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_11 || (var_1_11 && (var_1_5 <= var_1_6))) ? (var_1_1 == ((signed short int) var_1_7)) : ((var_1_11 || ((- var_1_8) < 32.6f)) ? (var_1_1 == ((signed short int) (var_1_9 + var_1_10))) : (var_1_1 == ((signed short int) var_1_10)))) && ((var_1_7 == var_1_13) ? (var_1_11 == ((unsigned char) var_1_12)) : ((var_1_7 <= ((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13)))) ? (var_1_4 ? (var_1_11 == ((unsigned char) 1)) : 1) : (var_1_11 == ((unsigned char) var_1_12))))) && ((var_1_10 <= var_1_6) ? (var_1_13 == ((unsigned long int) (var_1_14 - var_1_5))) : 1)
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
