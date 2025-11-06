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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 256.8;
signed long int var_1_3 = 8;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 1227169815;
signed long int var_1_9 = 5;
signed long int var_1_10 = 0;
signed short int var_1_11 = 4;
unsigned char var_1_12 = 1;
signed short int var_1_13 = 200;
signed short int var_1_14 = 4;
unsigned long int var_1_15 = 2;
signed char var_1_16 = -16;
signed long int var_1_17 = -10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 2;
signed short int var_1_23 = 10;
unsigned char var_1_24 = 10;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 5;
unsigned char var_1_27 = 0;
float var_1_28 = 0.75;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
signed short int var_1_31 = 256;
signed short int var_1_32 = 19583;
signed short int var_1_33 = 10000;
unsigned short int var_1_34 = 256;
float last_1_var_1_1 = 256.8;
signed long int last_1_var_1_20 = 2;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_4 >= last_1_var_1_20;
 if (((var_1_6 - var_1_5) < last_1_var_1_1) || stepLocal_1) {
  var_1_7 = ((var_1_8 - var_1_9) - var_1_10);
 } else {
  var_1_7 = -32;
 }
 signed long int stepLocal_0 = var_1_7 % var_1_4;
 if (var_1_7 == stepLocal_0) {
  var_1_1 = (var_1_5 - var_1_6);
 }
 if (var_1_12) {
  if (var_1_6 < (var_1_5 * (var_1_1 / var_1_28))) {
   var_1_27 = var_1_29;
  }
 } else {
  var_1_27 = var_1_30;
 }
 signed long int stepLocal_2 = var_1_8 & (var_1_10 >> var_1_15);
 if (stepLocal_2 == var_1_7) {
  if (var_1_27) {
   var_1_14 = (var_1_15 + -128);
  } else {
   var_1_14 = var_1_15;
  }
 }
 if (! var_1_27) {
  var_1_24 = (var_1_15 + var_1_25);
 } else {
  var_1_24 = ((((8) < ((((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25))) + ((((var_1_26) > (1)) ? (var_1_26) : (1)))))) ? (8) : ((((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25))) + ((((var_1_26) > (1)) ? (var_1_26) : (1)))))));
 }
 if (var_1_8 > var_1_4) {
  var_1_11 = 0;
 } else {
  if (var_1_8 <= (var_1_9 + (var_1_10 / var_1_4))) {
   if (var_1_27) {
    var_1_11 = var_1_13;
   } else {
    var_1_11 = 256;
   }
  } else {
   var_1_11 = var_1_13;
  }
 }
 unsigned char stepLocal_4 = (var_1_7 / var_1_8) == var_1_4;
 signed long int stepLocal_3 = var_1_9;
 if (stepLocal_3 <= (var_1_13 + ((((var_1_17) > (var_1_3)) ? (var_1_17) : (var_1_3))))) {
  if (var_1_12) {
   if (stepLocal_4 || (var_1_18 && var_1_19)) {
    var_1_16 = var_1_15;
   } else {
    var_1_16 = -64;
   }
  } else {
   var_1_16 = var_1_15;
  }
 } else {
  var_1_16 = -64;
 }
 var_1_34 = var_1_15;
 unsigned short int stepLocal_5 = var_1_34;
 if (var_1_27) {
  if (var_1_1 >= var_1_28) {
   if (stepLocal_5 != ((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3)))) {
    var_1_31 = (var_1_15 - var_1_25);
   } else {
    var_1_31 = (var_1_15 - var_1_24);
   }
  } else {
   var_1_31 = ((((var_1_13) < (var_1_34)) ? (var_1_13) : (var_1_34)));
  }
 } else {
  var_1_31 = (((((var_1_26) > ((var_1_32 - var_1_24))) ? (var_1_26) : ((var_1_32 - var_1_24)))) - (var_1_25 + (var_1_33 - 10)));
 }
 if (var_1_13 <= var_1_4) {
  if (var_1_7 == var_1_4) {
   var_1_20 = var_1_15;
  } else {
   var_1_20 = var_1_14;
  }
 } else {
  if (var_1_8 > var_1_7) {
   var_1_20 = var_1_31;
  }
 }
 if (var_1_20 > var_1_7) {
  if (var_1_1 <= var_1_5) {
   if (var_1_27) {
    var_1_23 = var_1_15;
   } else {
    var_1_23 = var_1_16;
   }
  } else {
   var_1_23 = var_1_13;
  }
 } else {
  var_1_23 = var_1_16;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 1073741822);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 30);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 assume_abort_if_not(var_1_28 != 0.0F);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 16382);
 assume_abort_if_not(var_1_32 <= 32766);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= 8191);
 assume_abort_if_not(var_1_33 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 return (((((((((((var_1_7 == (var_1_7 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((((var_1_6 - var_1_5) < last_1_var_1_1) || (var_1_4 >= last_1_var_1_20)) ? (var_1_7 == ((signed long int) ((var_1_8 - var_1_9) - var_1_10))) : (var_1_7 == ((signed long int) -32)))) && ((var_1_8 > var_1_4) ? (var_1_11 == ((signed short int) 0)) : ((var_1_8 <= (var_1_9 + (var_1_10 / var_1_4))) ? (var_1_27 ? (var_1_11 == ((signed short int) var_1_13)) : (var_1_11 == ((signed short int) 256))) : (var_1_11 == ((signed short int) var_1_13))))) && (((var_1_8 & (var_1_10 >> var_1_15)) == var_1_7) ? (var_1_27 ? (var_1_14 == ((signed short int) (var_1_15 + -128))) : (var_1_14 == ((signed short int) var_1_15))) : 1)) && ((var_1_9 <= (var_1_13 + ((((var_1_17) > (var_1_3)) ? (var_1_17) : (var_1_3))))) ? (var_1_12 ? ((((var_1_7 / var_1_8) == var_1_4) || (var_1_18 && var_1_19)) ? (var_1_16 == ((signed char) var_1_15)) : (var_1_16 == ((signed char) -64))) : (var_1_16 == ((signed char) var_1_15))) : (var_1_16 == ((signed char) -64)))) && ((var_1_13 <= var_1_4) ? ((var_1_7 == var_1_4) ? (var_1_20 == ((signed long int) var_1_15)) : (var_1_20 == ((signed long int) var_1_14))) : ((var_1_8 > var_1_7) ? (var_1_20 == ((signed long int) var_1_31)) : 1))) && ((var_1_20 > var_1_7) ? ((var_1_1 <= var_1_5) ? (var_1_27 ? (var_1_23 == ((signed short int) var_1_15)) : (var_1_23 == ((signed short int) var_1_16))) : (var_1_23 == ((signed short int) var_1_13))) : (var_1_23 == ((signed short int) var_1_16)))) && ((! var_1_27) ? (var_1_24 == ((unsigned char) (var_1_15 + var_1_25))) : (var_1_24 == ((unsigned char) ((((8) < ((((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25))) + ((((var_1_26) > (1)) ? (var_1_26) : (1)))))) ? (8) : ((((((var_1_15) < (var_1_25)) ? (var_1_15) : (var_1_25))) + ((((var_1_26) > (1)) ? (var_1_26) : (1))))))))))) && (var_1_12 ? ((var_1_6 < (var_1_5 * (var_1_1 / var_1_28))) ? (var_1_27 == ((unsigned char) var_1_29)) : 1) : (var_1_27 == ((unsigned char) var_1_30)))) && (var_1_27 ? ((var_1_1 >= var_1_28) ? ((var_1_34 != ((((var_1_7) > (var_1_3)) ? (var_1_7) : (var_1_3)))) ? (var_1_31 == ((signed short int) (var_1_15 - var_1_25))) : (var_1_31 == ((signed short int) (var_1_15 - var_1_24)))) : (var_1_31 == ((signed short int) ((((var_1_13) < (var_1_34)) ? (var_1_13) : (var_1_34)))))) : (var_1_31 == ((signed short int) (((((var_1_26) > ((var_1_32 - var_1_24))) ? (var_1_26) : ((var_1_32 - var_1_24)))) - (var_1_25 + (var_1_33 - 10))))))) && (var_1_34 == ((unsigned short int) var_1_15))
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
