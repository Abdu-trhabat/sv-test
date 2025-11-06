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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19425_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 16;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 32;
unsigned long int var_1_4 = 8;
signed long int var_1_7 = 10;
signed char var_1_8 = 64;
signed long int var_1_9 = 128;
signed long int var_1_10 = 25;
signed long int var_1_11 = 4;
unsigned short int var_1_12 = 32;
unsigned long int var_1_13 = 1677859339;
unsigned long int var_1_14 = 1277846894;
unsigned short int var_1_15 = 16823;
unsigned short int var_1_16 = 31623;
unsigned short int var_1_17 = 10000;
unsigned short int var_1_18 = 0;
signed char var_1_19 = -25;
signed long int var_1_20 = -1000000;
signed long int var_1_21 = -5;
signed long int last_1_var_1_9 = 128;
void initially(void) {
}
void step(void) {
 var_1_19 = var_1_8;
 var_1_20 = var_1_21;
 if (((var_1_13 + var_1_14) - var_1_20) != var_1_4) {
  var_1_12 = ((((((var_1_15 + var_1_16) - var_1_17)) > (var_1_18)) ? (((var_1_15 + var_1_16) - var_1_17)) : (var_1_18)));
 } else {
  var_1_12 = var_1_15;
 }
 unsigned char stepLocal_0 = var_1_3 == var_1_4;
 if (var_1_2) {
  if (stepLocal_0 && ((var_1_12 % var_1_7) >= var_1_20)) {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = -16;
 }
 unsigned long int stepLocal_1 = 5u;
 if (var_1_4 <= stepLocal_1) {
  var_1_9 = (last_1_var_1_9 - ((((var_1_12) > (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_12) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 1073741823);
 assume_abort_if_not(var_1_13 <= 2147483648);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741824);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 16383);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16384);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -2147483647);
 assume_abort_if_not(var_1_21 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
}
int property(void) {
 return ((((var_1_2 ? (((var_1_3 == var_1_4) && ((var_1_12 % var_1_7) >= var_1_20)) ? (var_1_1 == ((signed char) var_1_8)) : 1) : (var_1_1 == ((signed char) -16))) && ((var_1_4 <= 5u) ? (var_1_9 == ((signed long int) (last_1_var_1_9 - ((((var_1_12) > (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_12) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))))))) : 1)) && ((((var_1_13 + var_1_14) - var_1_20) != var_1_4) ? (var_1_12 == ((unsigned short int) ((((((var_1_15 + var_1_16) - var_1_17)) > (var_1_18)) ? (((var_1_15 + var_1_16) - var_1_17)) : (var_1_18))))) : (var_1_12 == ((unsigned short int) var_1_15)))) && (var_1_19 == ((signed char) var_1_8))) && (var_1_20 == ((signed long int) var_1_21))
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
