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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 2.8;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 2144133384;
unsigned long int var_1_5 = 1;
float var_1_6 = 7.25;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
float var_1_11 = 1.375;
unsigned long int var_1_12 = 3457862553;
unsigned long int var_1_13 = 32;
float var_1_14 = 128.375;
float var_1_15 = 256.5;
signed short int var_1_16 = -25;
signed short int var_1_17 = -10;
signed short int var_1_18 = 0;
signed short int var_1_19 = -16;
unsigned char var_1_20 = 2;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 5;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 4;
signed long int var_1_26 = 16;
unsigned long int var_1_27 = 10;
unsigned short int var_1_28 = 10;
double var_1_29 = 25.5;
double var_1_30 = 5.5;
double var_1_31 = 0.0;
double var_1_32 = 0.0;
double var_1_33 = 3.2;
unsigned long int var_1_34 = 50;
unsigned long int var_1_35 = 3959373555;
signed short int var_1_36 = -256;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 0;
float last_1_var_1_11 = 1.375;
unsigned long int last_1_var_1_27 = 10;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_8;
 if (stepLocal_0 && (last_1_var_1_27 < var_1_3)) {
  if ((var_1_6 * 1.0000000002E9) > last_1_var_1_11) {
   var_1_7 = var_1_9;
  }
 } else {
  var_1_7 = var_1_10;
 }
 unsigned long int stepLocal_1 = var_1_4;
 if (stepLocal_1 == (var_1_12 - (var_1_5 + var_1_13))) {
  var_1_11 = (((((var_1_6 - var_1_14)) < (var_1_15)) ? ((var_1_6 - var_1_14)) : (var_1_15)));
 } else {
  var_1_11 = (var_1_6 - 255.1f);
 }
 unsigned long int stepLocal_2 = var_1_4;
 if ((((((var_1_3 + var_1_12)) > (var_1_5)) ? ((var_1_3 + var_1_12)) : (var_1_5))) >= stepLocal_2) {
  var_1_16 = (var_1_17 + var_1_18);
 } else {
  var_1_16 = var_1_18;
 }
 if (((var_1_3 / var_1_20) & (var_1_21 - var_1_22)) >= (- 256u)) {
  var_1_19 = var_1_21;
 } else {
  var_1_19 = var_1_17;
 }
 if ((var_1_13 - var_1_21) < ((var_1_12 - var_1_4) / var_1_20)) {
  var_1_23 = ((var_1_24 - var_1_25) - var_1_22);
 } else {
  var_1_23 = var_1_24;
 }
 var_1_26 = (var_1_5 + var_1_25);
 if (var_1_10) {
  var_1_34 = ((var_1_35 - var_1_22) - (var_1_4 - ((((var_1_24) > (var_1_20)) ? (var_1_24) : (var_1_20)))));
 } else {
  var_1_34 = ((((var_1_19) < ((((((var_1_25 + var_1_20)) < ((var_1_4 + var_1_13))) ? ((var_1_25 + var_1_20)) : ((var_1_4 + var_1_13)))))) ? (var_1_19) : ((((((var_1_25 + var_1_20)) < ((var_1_4 + var_1_13))) ? ((var_1_25 + var_1_20)) : ((var_1_4 + var_1_13)))))));
 }
 if ((var_1_4 << (var_1_37 + var_1_38)) > var_1_35) {
  var_1_36 = -64;
 }
 if ((var_1_34 * (3669925837u - var_1_3)) > (2965407302u - (var_1_4 - var_1_5))) {
  var_1_1 = (var_1_6 - 32.25f);
 }
 unsigned char stepLocal_6 = var_1_17 < var_1_34;
 unsigned long int stepLocal_5 = var_1_3;
 if (var_1_7 && stepLocal_6) {
  if (stepLocal_5 >= (var_1_13 * var_1_22)) {
   if ((- var_1_14) == var_1_11) {
    var_1_28 = var_1_24;
   } else {
    var_1_28 = var_1_34;
   }
  }
 } else {
  var_1_28 = var_1_24;
 }
 signed long int stepLocal_7 = 64;
 if (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < stepLocal_7) {
  var_1_29 = (var_1_30 - ((var_1_31 + var_1_32) - var_1_33));
 } else {
  var_1_29 = var_1_31;
 }
 unsigned char stepLocal_4 = var_1_20;
 unsigned char stepLocal_3 = var_1_7;
 if (((var_1_20 + var_1_36) < var_1_34) || stepLocal_3) {
  if (stepLocal_4 < (((((var_1_24) < (var_1_21)) ? (var_1_24) : (var_1_21))) - var_1_25)) {
   var_1_27 = ((((var_1_22) < ((3394507325u - (1587311803u - var_1_13)))) ? (var_1_22) : ((3394507325u - (1587311803u - var_1_13)))));
  } else {
   var_1_27 = (var_1_20 + var_1_3);
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 2147483647);
 assume_abort_if_not(var_1_12 <= 4294967295);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -16383);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= -16383);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 255);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 255);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 190);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 2305843.009213691400e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 2305843.009213691400e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 3221225470);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_27 = var_1_27;
}
int property(void) {
 return (((((((((((((var_1_34 * (3669925837u - var_1_3)) > (2965407302u - (var_1_4 - var_1_5))) ? (var_1_1 == ((float) (var_1_6 - 32.25f))) : 1) && ((var_1_8 && (last_1_var_1_27 < var_1_3)) ? (((var_1_6 * 1.0000000002E9) > last_1_var_1_11) ? (var_1_7 == ((unsigned char) var_1_9)) : 1) : (var_1_7 == ((unsigned char) var_1_10)))) && ((var_1_4 == (var_1_12 - (var_1_5 + var_1_13))) ? (var_1_11 == ((float) (((((var_1_6 - var_1_14)) < (var_1_15)) ? ((var_1_6 - var_1_14)) : (var_1_15))))) : (var_1_11 == ((float) (var_1_6 - 255.1f))))) && (((((((var_1_3 + var_1_12)) > (var_1_5)) ? ((var_1_3 + var_1_12)) : (var_1_5))) >= var_1_4) ? (var_1_16 == ((signed short int) (var_1_17 + var_1_18))) : (var_1_16 == ((signed short int) var_1_18)))) && ((((var_1_3 / var_1_20) & (var_1_21 - var_1_22)) >= (- 256u)) ? (var_1_19 == ((signed short int) var_1_21)) : (var_1_19 == ((signed short int) var_1_17)))) && (((var_1_13 - var_1_21) < ((var_1_12 - var_1_4) / var_1_20)) ? (var_1_23 == ((unsigned char) ((var_1_24 - var_1_25) - var_1_22))) : (var_1_23 == ((unsigned char) var_1_24)))) && (var_1_26 == ((signed long int) (var_1_5 + var_1_25)))) && ((((var_1_20 + var_1_36) < var_1_34) || var_1_7) ? ((var_1_20 < (((((var_1_24) < (var_1_21)) ? (var_1_24) : (var_1_21))) - var_1_25)) ? (var_1_27 == ((unsigned long int) ((((var_1_22) < ((3394507325u - (1587311803u - var_1_13)))) ? (var_1_22) : ((3394507325u - (1587311803u - var_1_13))))))) : (var_1_27 == ((unsigned long int) (var_1_20 + var_1_3)))) : 1)) && ((var_1_7 && (var_1_17 < var_1_34)) ? ((var_1_3 >= (var_1_13 * var_1_22)) ? (((- var_1_14) == var_1_11) ? (var_1_28 == ((unsigned short int) var_1_24)) : (var_1_28 == ((unsigned short int) var_1_34))) : 1) : (var_1_28 == ((unsigned short int) var_1_24)))) && ((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 64) ? (var_1_29 == ((double) (var_1_30 - ((var_1_31 + var_1_32) - var_1_33)))) : (var_1_29 == ((double) var_1_31)))) && (var_1_10 ? (var_1_34 == ((unsigned long int) ((var_1_35 - var_1_22) - (var_1_4 - ((((var_1_24) > (var_1_20)) ? (var_1_24) : (var_1_20))))))) : (var_1_34 == ((unsigned long int) ((((var_1_19) < ((((((var_1_25 + var_1_20)) < ((var_1_4 + var_1_13))) ? ((var_1_25 + var_1_20)) : ((var_1_4 + var_1_13)))))) ? (var_1_19) : ((((((var_1_25 + var_1_20)) < ((var_1_4 + var_1_13))) ? ((var_1_25 + var_1_20)) : ((var_1_4 + var_1_13))))))))))) && (((var_1_4 << (var_1_37 + var_1_38)) > var_1_35) ? (var_1_36 == ((signed short int) -64)) : 1)
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
