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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 32;
unsigned char var_1_2 = 1;
unsigned long int var_1_3 = 5;
unsigned long int var_1_4 = 10;
signed long int var_1_5 = -1;
signed long int var_1_6 = 16;
signed long int var_1_7 = -4;
signed long int var_1_8 = 10;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 100;
unsigned short int var_1_14 = 50;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 2;
unsigned short int var_1_21 = 5;
unsigned short int var_1_22 = 16;
unsigned long int var_1_24 = 5;
signed long int var_1_25 = -16;
unsigned char var_1_26 = 4;
unsigned char var_1_27 = 25;
unsigned char var_1_28 = 8;
unsigned long int var_1_29 = 128;
signed char var_1_30 = 10;
unsigned long int last_1_var_1_24 = 5;
signed long int last_1_var_1_25 = -16;
unsigned long int last_1_var_1_29 = 128;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_3 = last_1_var_1_29;
 if (stepLocal_3 <= var_1_8) {
  var_1_15 = var_1_12;
 }
 unsigned char stepLocal_0 = var_1_15;
 if (stepLocal_0 || (var_1_3 >= var_1_4)) {
  if (var_1_15) {
   var_1_1 = (var_1_5 - 256);
  } else {
   var_1_1 = ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)));
  }
 } else {
  var_1_1 = (var_1_7 + (var_1_8 - 4));
 }
 unsigned char stepLocal_1 = var_1_2;
 if (stepLocal_1 && var_1_10) {
  var_1_9 = (var_1_11 || (! var_1_12));
 } else {
  if (var_1_2) {
   var_1_9 = (! var_1_11);
  }
 }
 if ((var_1_8 >= var_1_6) && var_1_9) {
  if (var_1_9) {
   var_1_16 = (((var_1_17 + var_1_18) - var_1_19) + var_1_20);
  } else {
   var_1_16 = var_1_20;
  }
 }
 if (! (last_1_var_1_24 >= 4)) {
  var_1_24 = last_1_var_1_24;
 }
 if ((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - var_1_19) >= var_1_18) {
  if (var_1_20 < ((((var_1_1) < (var_1_8)) ? (var_1_1) : (var_1_8)))) {
   var_1_22 = var_1_1;
  }
 }
 signed long int stepLocal_6 = (((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22));
 if (stepLocal_6 == var_1_18) {
  if (! ((var_1_12 && var_1_15) && var_1_15)) {
   var_1_26 = ((((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17))) + var_1_19) + (var_1_27 + var_1_28));
  }
 }
 unsigned char stepLocal_7 = var_1_15;
 if ((var_1_26 < 8) && stepLocal_7) {
  var_1_29 = (var_1_20 + ((var_1_18 + 16u) + (var_1_22 + var_1_27)));
 } else {
  var_1_29 = var_1_14;
 }
 unsigned char stepLocal_5 = var_1_17;
 unsigned short int stepLocal_4 = var_1_22;
 if (var_1_11) {
  if (var_1_20 < stepLocal_5) {
   if ((var_1_6 + var_1_1) > stepLocal_4) {
    var_1_21 = ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)));
   }
  } else {
   var_1_21 = var_1_18;
  }
 } else {
  var_1_21 = var_1_18;
 }
 if (var_1_2 && var_1_15) {
  if (last_1_var_1_25 >= (var_1_21 ^ var_1_26)) {
   if (var_1_15) {
    var_1_25 = var_1_20;
   }
  } else {
   var_1_25 = var_1_19;
  }
 }
 unsigned long int stepLocal_9 = (var_1_24 * 25u) + var_1_24;
 unsigned long int stepLocal_8 = var_1_24 - var_1_22;
 if (stepLocal_8 <= -1) {
  if (stepLocal_9 > var_1_29) {
   var_1_30 = var_1_27;
  } else {
   var_1_30 = var_1_18;
  }
 } else {
  var_1_30 = var_1_18;
 }
 unsigned long int stepLocal_2 = var_1_29 + var_1_25;
 if (stepLocal_2 == ((((var_1_8) < ((var_1_24 % 8u))) ? (var_1_8) : ((var_1_24 % 8u))))) {
  if (! var_1_12) {
   var_1_13 = ((var_1_14 + 25) + 16);
  }
 } else {
  var_1_13 = var_1_14;
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
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483647);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -1073741823);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 16384);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 31);
 assume_abort_if_not(var_1_17 <= 64);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 32);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 64);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_24 = var_1_24;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_29 = var_1_29;
}
int property(void) {
 return ((((((((((((var_1_15 || (var_1_3 >= var_1_4)) ? (var_1_15 ? (var_1_1 == ((signed long int) (var_1_5 - 256))) : (var_1_1 == ((signed long int) ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))) : (var_1_1 == ((signed long int) (var_1_7 + (var_1_8 - 4))))) && ((var_1_2 && var_1_10) ? (var_1_9 == ((unsigned char) (var_1_11 || (! var_1_12)))) : (var_1_2 ? (var_1_9 == ((unsigned char) (! var_1_11))) : 1))) && (((var_1_29 + var_1_25) == ((((var_1_8) < ((var_1_24 % 8u))) ? (var_1_8) : ((var_1_24 % 8u))))) ? ((! var_1_12) ? (var_1_13 == ((unsigned short int) ((var_1_14 + 25) + 16))) : 1) : (var_1_13 == ((unsigned short int) var_1_14)))) && ((last_1_var_1_29 <= var_1_8) ? (var_1_15 == ((unsigned char) var_1_12)) : 1)) && (((var_1_8 >= var_1_6) && var_1_9) ? (var_1_9 ? (var_1_16 == ((unsigned char) (((var_1_17 + var_1_18) - var_1_19) + var_1_20))) : (var_1_16 == ((unsigned char) var_1_20))) : 1)) && (var_1_11 ? ((var_1_20 < var_1_17) ? (((var_1_6 + var_1_1) > var_1_22) ? (var_1_21 == ((unsigned short int) ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17))))) : 1) : (var_1_21 == ((unsigned short int) var_1_18))) : (var_1_21 == ((unsigned short int) var_1_18)))) && (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - var_1_19) >= var_1_18) ? ((var_1_20 < ((((var_1_1) < (var_1_8)) ? (var_1_1) : (var_1_8)))) ? (var_1_22 == ((unsigned short int) var_1_1)) : 1) : 1)) && ((! (last_1_var_1_24 >= 4)) ? (var_1_24 == ((unsigned long int) last_1_var_1_24)) : 1)) && ((var_1_2 && var_1_15) ? ((last_1_var_1_25 >= (var_1_21 ^ var_1_26)) ? (var_1_15 ? (var_1_25 == ((signed long int) var_1_20)) : 1) : (var_1_25 == ((signed long int) var_1_19))) : 1)) && ((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) == var_1_18) ? ((! ((var_1_12 && var_1_15) && var_1_15)) ? (var_1_26 == ((unsigned char) ((((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17))) + var_1_19) + (var_1_27 + var_1_28)))) : 1) : 1)) && (((var_1_26 < 8) && var_1_15) ? (var_1_29 == ((unsigned long int) (var_1_20 + ((var_1_18 + 16u) + (var_1_22 + var_1_27))))) : (var_1_29 == ((unsigned long int) var_1_14)))) && (((var_1_24 - var_1_22) <= -1) ? ((((var_1_24 * 25u) + var_1_24) > var_1_29) ? (var_1_30 == ((signed char) var_1_27)) : (var_1_30 == ((signed char) var_1_18))) : (var_1_30 == ((signed char) var_1_18)))
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
