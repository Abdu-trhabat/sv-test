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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16325_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -2;
unsigned short int var_1_2 = 500;
unsigned short int var_1_3 = 500;
unsigned short int var_1_4 = 4;
unsigned long int var_1_5 = 100000000;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed long int var_1_8 = -16;
unsigned short int var_1_9 = 2;
unsigned short int var_1_10 = 5;
unsigned short int var_1_11 = 16;
unsigned short int var_1_12 = 8;
unsigned long int var_1_13 = 16;
unsigned long int var_1_14 = 2346350547;
unsigned long int var_1_15 = 1948398202;
unsigned long int var_1_16 = 50;
signed char var_1_17 = 4;
signed char var_1_18 = 64;
signed long int last_1_var_1_1 = -2;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_3 = var_1_7;
 signed long int stepLocal_2 = (((var_1_3) > (last_1_var_1_1)) ? (var_1_3) : (last_1_var_1_1));
 unsigned short int stepLocal_1 = var_1_3;
 if (var_1_6 || stepLocal_3) {
  if (stepLocal_2 < (((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2))) * var_1_8)) {
   if (stepLocal_1 >= var_1_9) {
    if (var_1_6) {
     var_1_5 = 5u;
    }
   }
  } else {
   var_1_5 = var_1_4;
  }
 } else {
  var_1_5 = var_1_9;
 }
 var_1_10 = ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)));
 var_1_17 = var_1_18;
 unsigned long int stepLocal_4 = var_1_14 - (var_1_15 - var_1_16);
 if (stepLocal_4 > var_1_5) {
  var_1_13 = var_1_10;
 }
 unsigned long int stepLocal_0 = var_1_5 / var_1_4;
 if (var_1_13 >= stepLocal_0) {
  var_1_1 = var_1_13;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 1073741823);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1073741823);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return (((((var_1_13 >= (var_1_5 / var_1_4)) ? (var_1_1 == ((signed long int) var_1_13)) : 1) && ((var_1_6 || var_1_7) ? ((((((var_1_3) > (last_1_var_1_1)) ? (var_1_3) : (last_1_var_1_1))) < (((((var_1_4) > (var_1_2)) ? (var_1_4) : (var_1_2))) * var_1_8)) ? ((var_1_3 >= var_1_9) ? (var_1_6 ? (var_1_5 == ((unsigned long int) 5u)) : 1) : 1) : (var_1_5 == ((unsigned long int) var_1_4))) : (var_1_5 == ((unsigned long int) var_1_9)))) && (var_1_10 == ((unsigned short int) ((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))))) && (((var_1_14 - (var_1_15 - var_1_16)) > var_1_5) ? (var_1_13 == ((unsigned long int) var_1_10)) : 1)) && (var_1_17 == ((signed char) var_1_18))
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
