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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 0;
unsigned char var_1_2 = 1;
float var_1_4 = 127.25;
float var_1_5 = 2.75;
signed char var_1_6 = 1;
signed char var_1_7 = 32;
unsigned char var_1_8 = 1;
signed char var_1_9 = 0;
unsigned short int var_1_10 = 5;
unsigned short int var_1_11 = 0;
unsigned short int var_1_12 = 33056;
unsigned short int var_1_13 = 37441;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 10;
unsigned short int var_1_16 = 29770;
unsigned short int var_1_17 = 0;
float var_1_18 = 100.5;
signed char var_1_19 = -64;
signed long int var_1_20 = -200;
signed long int var_1_21 = -4;
unsigned short int var_1_22 = 64;
unsigned short int var_1_23 = 256;
signed short int var_1_24 = 100;
unsigned char var_1_25 = 5;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 5;
signed char var_1_28 = 2;
signed char var_1_29 = 4;
signed char var_1_30 = 4;
signed char var_1_31 = 16;
signed long int var_1_32 = -5;
unsigned long int var_1_33 = 0;
unsigned long int var_1_34 = 3901473349;
unsigned short int var_1_35 = 16;
unsigned char var_1_36 = 16;
signed char last_1_var_1_7 = 32;
signed short int last_1_var_1_24 = 100;
signed long int last_1_var_1_32 = -5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_5 = last_1_var_1_7;
 if (stepLocal_5 == (last_1_var_1_24 * last_1_var_1_32)) {
  var_1_22 = (var_1_14 + var_1_15);
 }
 unsigned char stepLocal_1 = var_1_8;
 unsigned char stepLocal_0 = var_1_8;
 if (var_1_2 || stepLocal_0) {
  var_1_7 = ((((((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) > (var_1_6)) ? (((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) : (var_1_6)));
 } else {
  if (stepLocal_1 && var_1_2) {
   var_1_7 = -32;
  }
 }
 if (var_1_8) {
  var_1_10 = (1 + var_1_11);
 } else {
  var_1_10 = (((((((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - (var_1_14 + var_1_15))) < (((var_1_16 - var_1_17) + var_1_11))) ? ((((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - (var_1_14 + var_1_15))) : (((var_1_16 - var_1_17) + var_1_11))));
 }
 signed long int stepLocal_2 = var_1_6 % var_1_13;
 if (10 < stepLocal_2) {
  var_1_18 = 99999.125f;
 }
 var_1_19 = var_1_9;
 if (var_1_2) {
  var_1_23 = (((((var_1_13 - (var_1_17 + var_1_15))) > (var_1_14)) ? ((var_1_13 - (var_1_17 + var_1_15))) : (var_1_14)));
 } else {
  var_1_23 = var_1_12;
 }
 if (var_1_6 <= var_1_11) {
  var_1_24 = (((((var_1_23 + var_1_10)) < (((var_1_15 - var_1_17) + var_1_9))) ? ((var_1_23 + var_1_10)) : (((var_1_15 - var_1_17) + var_1_9))));
 }
 if (var_1_16 <= var_1_23) {
  var_1_25 = ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)));
 } else {
  var_1_25 = ((((8) > (var_1_27)) ? (8) : (var_1_27)));
 }
 if ((var_1_22 * var_1_15) <= var_1_24) {
  var_1_28 = var_1_9;
 } else {
  var_1_28 = (var_1_29 + ((var_1_30 - var_1_31) + 2));
 }
 var_1_33 = (((((var_1_34 - (var_1_12 + var_1_14))) < (25u)) ? ((var_1_34 - (var_1_12 + var_1_14))) : (25u)));
 if (! ((var_1_11 / var_1_36) < var_1_33)) {
  var_1_35 = (((((var_1_25 + 128)) > (var_1_16)) ? ((var_1_25 + 128)) : (var_1_16)));
 }
 if ((- var_1_18) <= (var_1_4 - var_1_5)) {
  if (var_1_18 >= (var_1_5 / 255.75f)) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = 25;
  }
 }
 unsigned long int stepLocal_4 = (var_1_23 + var_1_33) * 256;
 signed long int stepLocal_3 = var_1_12 - var_1_15;
 if ((((((var_1_14 + var_1_15)) < (var_1_12)) ? ((var_1_14 + var_1_15)) : (var_1_12))) > stepLocal_4) {
  if (var_1_13 != stepLocal_3) {
   var_1_20 = ((((50) < 0 ) ? -(50) : (50)));
  } else {
   if (var_1_8) {
    var_1_20 = var_1_21;
   }
  }
 } else {
  var_1_20 = ((var_1_9 + (var_1_16 + var_1_11)) + var_1_33);
 }
 if (var_1_8) {
  var_1_32 = ((var_1_25 + var_1_30) + ((var_1_22 - var_1_14) + var_1_15));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -126);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 16384);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -2147483647);
 assume_abort_if_not(var_1_21 <= 2147483646);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -63);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 31);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 255);
 assume_abort_if_not(var_1_36 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return (((((((((((((((- var_1_18) <= (var_1_4 - var_1_5)) ? ((var_1_18 >= (var_1_5 / 255.75f)) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) 25))) : 1) && ((var_1_2 || var_1_8) ? (var_1_7 == ((signed char) ((((((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) > (var_1_6)) ? (((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) : (var_1_6))))) : ((var_1_8 && var_1_2) ? (var_1_7 == ((signed char) -32)) : 1))) && (var_1_8 ? (var_1_10 == ((unsigned short int) (1 + var_1_11))) : (var_1_10 == ((unsigned short int) (((((((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - (var_1_14 + var_1_15))) < (((var_1_16 - var_1_17) + var_1_11))) ? ((((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - (var_1_14 + var_1_15))) : (((var_1_16 - var_1_17) + var_1_11)))))))) && ((10 < (var_1_6 % var_1_13)) ? (var_1_18 == ((float) 99999.125f)) : 1)) && (var_1_19 == ((signed char) var_1_9))) && (((((((var_1_14 + var_1_15)) < (var_1_12)) ? ((var_1_14 + var_1_15)) : (var_1_12))) > ((var_1_23 + var_1_33) * 256)) ? ((var_1_13 != (var_1_12 - var_1_15)) ? (var_1_20 == ((signed long int) ((((50) < 0 ) ? -(50) : (50))))) : (var_1_8 ? (var_1_20 == ((signed long int) var_1_21)) : 1)) : (var_1_20 == ((signed long int) ((var_1_9 + (var_1_16 + var_1_11)) + var_1_33))))) && ((last_1_var_1_7 == (last_1_var_1_24 * last_1_var_1_32)) ? (var_1_22 == ((unsigned short int) (var_1_14 + var_1_15))) : 1)) && (var_1_2 ? (var_1_23 == ((unsigned short int) (((((var_1_13 - (var_1_17 + var_1_15))) > (var_1_14)) ? ((var_1_13 - (var_1_17 + var_1_15))) : (var_1_14))))) : (var_1_23 == ((unsigned short int) var_1_12)))) && ((var_1_6 <= var_1_11) ? (var_1_24 == ((signed short int) (((((var_1_23 + var_1_10)) < (((var_1_15 - var_1_17) + var_1_9))) ? ((var_1_23 + var_1_10)) : (((var_1_15 - var_1_17) + var_1_9)))))) : 1)) && ((var_1_16 <= var_1_23) ? (var_1_25 == ((unsigned char) ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))) : (var_1_25 == ((unsigned char) ((((8) > (var_1_27)) ? (8) : (var_1_27))))))) && (((var_1_22 * var_1_15) <= var_1_24) ? (var_1_28 == ((signed char) var_1_9)) : (var_1_28 == ((signed char) (var_1_29 + ((var_1_30 - var_1_31) + 2)))))) && (var_1_8 ? (var_1_32 == ((signed long int) ((var_1_25 + var_1_30) + ((var_1_22 - var_1_14) + var_1_15)))) : 1)) && (var_1_33 == ((unsigned long int) (((((var_1_34 - (var_1_12 + var_1_14))) < (25u)) ? ((var_1_34 - (var_1_12 + var_1_14))) : (25u)))))) && ((! ((var_1_11 / var_1_36) < var_1_33)) ? (var_1_35 == ((unsigned short int) (((((var_1_25 + 128)) > (var_1_16)) ? ((var_1_25 + 128)) : (var_1_16))))) : 1)
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
