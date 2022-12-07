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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 128;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 256;
unsigned short int var_1_4 = 16;
unsigned short int var_1_5 = 64;
unsigned short int var_1_6 = 8;
unsigned long int var_1_7 = 16;
unsigned long int var_1_8 = 16;
unsigned long int var_1_9 = 32;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 8;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -200;
signed short int var_1_15 = 0;
signed short int var_1_16 = 24637;
signed short int var_1_17 = 100;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 10;
signed long int var_1_21 = -256;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  if (var_1_3 <= ((var_1_4 + var_1_5) + var_1_6)) {
   var_1_1 = ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)));
  }
 }
 unsigned short int stepLocal_1 = var_1_6;
 unsigned long int stepLocal_0 = var_1_8 + var_1_4;
 if (stepLocal_1 == var_1_3) {
  if (stepLocal_0 > (var_1_1 % var_1_9)) {
   var_1_7 = var_1_3;
  } else {
   var_1_7 = var_1_4;
  }
 }
 unsigned long int stepLocal_2 = var_1_9;
 if (((- var_1_7) + var_1_3) >= stepLocal_2) {
  var_1_10 = (var_1_11 + (var_1_12 + var_1_13));
 }
 if (var_1_2) {
  var_1_14 = var_1_12;
 } else {
  var_1_14 = 64;
 }
 unsigned long int stepLocal_3 = (((var_1_7) > ((var_1_4 | var_1_9))) ? (var_1_7) : ((var_1_4 | var_1_9)));
 if (stepLocal_3 > var_1_13) {
  var_1_15 = (((((var_1_13 + var_1_11)) > (var_1_12)) ? ((var_1_13 + var_1_11)) : (var_1_12)));
 } else {
  var_1_15 = (var_1_13 - ((((var_1_10) > ((var_1_16 - var_1_11))) ? (var_1_10) : ((var_1_16 - var_1_11)))));
 }
 unsigned short int stepLocal_6 = var_1_5;
 unsigned long int stepLocal_5 = var_1_7;
 unsigned char stepLocal_4 = var_1_13;
 if (stepLocal_4 > var_1_7) {
  if (stepLocal_5 <= 32u) {
   if (var_1_4 <= stepLocal_6) {
    var_1_17 = var_1_16;
   } else {
    var_1_17 = -50;
   }
  } else {
   var_1_17 = var_1_11;
  }
 }
 if (var_1_3 > var_1_12) {
  var_1_18 = (! var_1_19);
 }
 var_1_20 = var_1_21;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65535);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967295);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967295);
 assume_abort_if_not(var_1_9 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -2147483647);
 assume_abort_if_not(var_1_21 <= 2147483646);
}
void updateLastVariables() {
}
int property() {
 return (((((((var_1_2 ? ((var_1_3 <= ((var_1_4 + var_1_5) + var_1_6)) ? (var_1_1 == ((signed long int) ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))))) : 1) : 1) && ((var_1_6 == var_1_3) ? (((var_1_8 + var_1_4) > (var_1_1 % var_1_9)) ? (var_1_7 == ((unsigned long int) var_1_3)) : (var_1_7 == ((unsigned long int) var_1_4))) : 1)) && ((((- var_1_7) + var_1_3) >= var_1_9) ? (var_1_10 == ((unsigned char) (var_1_11 + (var_1_12 + var_1_13)))) : 1)) && (var_1_2 ? (var_1_14 == ((signed long int) var_1_12)) : (var_1_14 == ((signed long int) 64)))) && ((((((var_1_7) > ((var_1_4 | var_1_9))) ? (var_1_7) : ((var_1_4 | var_1_9)))) > var_1_13) ? (var_1_15 == ((signed short int) (((((var_1_13 + var_1_11)) > (var_1_12)) ? ((var_1_13 + var_1_11)) : (var_1_12))))) : (var_1_15 == ((signed short int) (var_1_13 - ((((var_1_10) > ((var_1_16 - var_1_11))) ? (var_1_10) : ((var_1_16 - var_1_11))))))))) && ((var_1_13 > var_1_7) ? ((var_1_7 <= 32u) ? ((var_1_4 <= var_1_5) ? (var_1_17 == ((signed short int) var_1_16)) : (var_1_17 == ((signed short int) -50))) : (var_1_17 == ((signed short int) var_1_11))) : 1)) && ((var_1_3 > var_1_12) ? (var_1_18 == ((unsigned char) (! var_1_19))) : 1)) && (var_1_20 == ((signed long int) var_1_21))
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
