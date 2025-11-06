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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43100_while.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 1;
float var_1_7 = 127.25;
float var_1_8 = 128.5;
float var_1_9 = 63.75;
float var_1_10 = 9999999999999.8;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -10;
unsigned char var_1_14 = 1;
signed char var_1_16 = -1;
signed char var_1_17 = -5;
signed char var_1_18 = 2;
double var_1_19 = 256.7;
double var_1_20 = 256.5;
double var_1_21 = 5.058;
double var_1_22 = 2.4;
double var_1_23 = 5.875;
signed long int var_1_24 = -128;
unsigned long int var_1_25 = 128;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
signed char var_1_28 = 1;
signed char var_1_29 = 4;
signed char var_1_30 = 50;
signed char var_1_31 = -32;
signed char var_1_32 = 4;
signed char var_1_33 = 5;
signed char var_1_34 = 0;
signed char var_1_35 = 64;
double var_1_36 = 64.6;
unsigned char last_1_var_1_14 = 1;
double last_1_var_1_19 = 256.7;
unsigned long int last_1_var_1_25 = 128;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = last_1_var_1_25;
 if (var_1_7 > last_1_var_1_19) {
  if (var_1_5 < stepLocal_1) {
   var_1_13 = (var_1_4 - 1);
  } else {
   var_1_13 = var_1_5;
  }
 } else {
  var_1_13 = var_1_4;
 }
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 && stepLocal_0) {
  var_1_1 = (var_1_4 + 5);
 } else {
  var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 }
 if (((var_1_7 + 100000.5f) - var_1_8) > (var_1_9 + var_1_10)) {
  if (var_1_8 > var_1_9) {
   var_1_6 = (var_1_11 || var_1_12);
  } else {
   var_1_6 = var_1_11;
  }
 } else {
  var_1_6 = 0;
 }
 if (var_1_18 <= (~ var_1_4)) {
  if (var_1_6) {
   var_1_24 = ((((256) < (((var_1_1 + var_1_18) + ((((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5)))))) ? (256) : (((var_1_1 + var_1_18) + ((((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5)))))));
  } else {
   var_1_24 = -5;
  }
 } else {
  var_1_24 = var_1_18;
 }
 var_1_28 = (var_1_29 - var_1_30);
 signed long int stepLocal_6 = var_1_5 + (var_1_18 / -2);
 if ((var_1_30 | var_1_24) < stepLocal_6) {
  var_1_31 = (((((((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32))) - (var_1_33 + var_1_34))) < ((var_1_29 - ((((var_1_35) > (0)) ? (var_1_35) : (0)))))) ? ((((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32))) - (var_1_33 + var_1_34))) : ((var_1_29 - ((((var_1_35) > (0)) ? (var_1_35) : (0)))))));
 } else {
  var_1_31 = var_1_33;
 }
 var_1_36 = var_1_7;
 if (last_1_var_1_14 || var_1_6) {
  if ((var_1_13 | ((((var_1_5) > (128)) ? (var_1_5) : (128)))) < var_1_13) {
   var_1_14 = (var_1_11 || var_1_12);
  }
 }
 unsigned char stepLocal_2 = var_1_6;
 if (stepLocal_2 && var_1_14) {
  var_1_16 = (((((var_1_17 + var_1_18)) < (-5)) ? ((var_1_17 + var_1_18)) : (-5)));
 } else {
  if (var_1_2) {
   var_1_16 = var_1_17;
  }
 }
 signed long int stepLocal_5 = 10000 / 64;
 signed long int stepLocal_4 = var_1_13;
 if (stepLocal_5 >= (var_1_13 | var_1_16)) {
  var_1_25 = ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)));
 } else {
  if (stepLocal_4 < ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) {
   var_1_25 = var_1_1;
  } else {
   var_1_25 = 8u;
  }
 }
 if (var_1_14) {
  var_1_26 = (! (! var_1_27));
 } else {
  var_1_26 = (var_1_6 || ((-16 <= var_1_13) || (! var_1_11)));
 }
 signed long int stepLocal_3 = var_1_24 ^ 1;
 if (stepLocal_3 >= var_1_18) {
  if (var_1_26) {
   if (var_1_8 <= ((((var_1_10) > (var_1_9)) ? (var_1_10) : (var_1_9)))) {
    var_1_19 = ((((var_1_7) > (((var_1_20 + var_1_21) + (var_1_22 + var_1_23)))) ? (var_1_7) : (((var_1_20 + var_1_21) + (var_1_22 + var_1_23)))));
   } else {
    var_1_19 = var_1_21;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -1);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -1);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_25 = var_1_25;
}
int property(void) {
 return ((((((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 + 5))) : (var_1_1 == ((unsigned char) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) && ((((var_1_7 + 100000.5f) - var_1_8) > (var_1_9 + var_1_10)) ? ((var_1_8 > var_1_9) ? (var_1_6 == ((unsigned char) (var_1_11 || var_1_12))) : (var_1_6 == ((unsigned char) var_1_11))) : (var_1_6 == ((unsigned char) 0)))) && ((var_1_7 > last_1_var_1_19) ? ((var_1_5 < last_1_var_1_25) ? (var_1_13 == ((signed long int) (var_1_4 - 1))) : (var_1_13 == ((signed long int) var_1_5))) : (var_1_13 == ((signed long int) var_1_4)))) && ((last_1_var_1_14 || var_1_6) ? (((var_1_13 | ((((var_1_5) > (128)) ? (var_1_5) : (128)))) < var_1_13) ? (var_1_14 == ((unsigned char) (var_1_11 || var_1_12))) : 1) : 1)) && ((var_1_6 && var_1_14) ? (var_1_16 == ((signed char) (((((var_1_17 + var_1_18)) < (-5)) ? ((var_1_17 + var_1_18)) : (-5))))) : (var_1_2 ? (var_1_16 == ((signed char) var_1_17)) : 1))) && (((var_1_24 ^ 1) >= var_1_18) ? (var_1_26 ? ((var_1_8 <= ((((var_1_10) > (var_1_9)) ? (var_1_10) : (var_1_9)))) ? (var_1_19 == ((double) ((((var_1_7) > (((var_1_20 + var_1_21) + (var_1_22 + var_1_23)))) ? (var_1_7) : (((var_1_20 + var_1_21) + (var_1_22 + var_1_23))))))) : (var_1_19 == ((double) var_1_21))) : 1) : 1)) && ((var_1_18 <= (~ var_1_4)) ? (var_1_6 ? (var_1_24 == ((signed long int) ((((256) < (((var_1_1 + var_1_18) + ((((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5)))))) ? (256) : (((var_1_1 + var_1_18) + ((((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5))))))))) : (var_1_24 == ((signed long int) -5))) : (var_1_24 == ((signed long int) var_1_18)))) && (((10000 / 64) >= (var_1_13 | var_1_16)) ? (var_1_25 == ((unsigned long int) ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4))))) : ((var_1_13 < ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? (var_1_25 == ((unsigned long int) var_1_1)) : (var_1_25 == ((unsigned long int) 8u))))) && (var_1_14 ? (var_1_26 == ((unsigned char) (! (! var_1_27)))) : (var_1_26 == ((unsigned char) (var_1_6 || ((-16 <= var_1_13) || (! var_1_11))))))) && (var_1_28 == ((signed char) (var_1_29 - var_1_30)))) && (((var_1_30 | var_1_24) < (var_1_5 + (var_1_18 / -2))) ? (var_1_31 == ((signed char) (((((((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32))) - (var_1_33 + var_1_34))) < ((var_1_29 - ((((var_1_35) > (0)) ? (var_1_35) : (0)))))) ? ((((((var_1_30) < (var_1_32)) ? (var_1_30) : (var_1_32))) - (var_1_33 + var_1_34))) : ((var_1_29 - ((((var_1_35) > (0)) ? (var_1_35) : (0))))))))) : (var_1_31 == ((signed char) var_1_33)))) && (var_1_36 == ((double) var_1_7))
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
