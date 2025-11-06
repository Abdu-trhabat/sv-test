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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
double var_1_2 = 99.5;
double var_1_3 = 0.225;
signed short int var_1_7 = 0;
signed short int var_1_8 = -10;
signed short int var_1_9 = 1;
unsigned short int var_1_10 = 5;
unsigned long int var_1_11 = 2308202231;
unsigned short int var_1_12 = 59838;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
signed short int var_1_17 = -2;
signed short int var_1_18 = 18445;
signed short int var_1_19 = 16;
float var_1_20 = 25.05;
float var_1_21 = 0.0;
float var_1_22 = 0.0;
float var_1_23 = 31.5;
float var_1_24 = 49.4;
float var_1_25 = 32.4;
float var_1_26 = 63.5;
unsigned long int var_1_27 = 256;
unsigned long int var_1_28 = 25;
unsigned short int var_1_29 = 16;
unsigned short int var_1_30 = 256;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
signed long int var_1_33 = -8;
float var_1_34 = 2.6;
signed long int var_1_35 = -10;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 64;
signed short int last_1_var_1_1 = 128;
signed long int last_1_var_1_35 = -10;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_3 = var_1_11 - var_1_9;
 signed long int stepLocal_2 = last_1_var_1_1;
 if (stepLocal_3 > 2u) {
  if (last_1_var_1_35 > stepLocal_2) {
   var_1_10 = (var_1_12 - var_1_9);
  }
 } else {
  var_1_10 = var_1_12;
 }
 if ((var_1_19 % ((((var_1_18) < (var_1_12)) ? (var_1_18) : (var_1_12)))) == (var_1_10 | var_1_7)) {
  var_1_33 = (((((-256 + var_1_10)) < ((var_1_18 + var_1_19))) ? ((-256 + var_1_10)) : ((var_1_18 + var_1_19))));
 } else {
  var_1_33 = var_1_8;
 }
 if (var_1_16) {
  var_1_17 = ((var_1_18 - var_1_19) - var_1_9);
 } else {
  var_1_17 = (var_1_19 - var_1_9);
 }
 var_1_27 = (((((var_1_28) > (var_1_9)) ? (var_1_28) : (var_1_9))) + var_1_12);
 signed long int stepLocal_7 = 4;
 signed short int stepLocal_6 = var_1_19;
 if (((var_1_27 / 128) / 2) != stepLocal_7) {
  if (stepLocal_6 == var_1_33) {
   var_1_34 = var_1_26;
  } else {
   var_1_34 = var_1_23;
  }
 } else {
  var_1_34 = var_1_25;
 }
 var_1_36 = var_1_37;
 signed long int stepLocal_5 = var_1_10 + var_1_9;
 if (var_1_33 >= stepLocal_5) {
  var_1_29 = 1;
 } else {
  var_1_29 = (var_1_12 - ((((32) > (var_1_30)) ? (32) : (var_1_30))));
 }
 unsigned long int stepLocal_10 = var_1_28;
 signed long int stepLocal_9 = 8;
 unsigned char stepLocal_8 = ! var_1_14;
 if (stepLocal_9 >= var_1_29) {
  var_1_35 = var_1_12;
 } else {
  if (last_1_var_1_35 <= stepLocal_10) {
   var_1_35 = ((((var_1_17) < (((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9))))) ? (var_1_17) : (((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9))))));
  } else {
   if ((var_1_27 >= var_1_9) || stepLocal_8) {
    var_1_35 = var_1_18;
   }
  }
 }
 signed long int stepLocal_4 = var_1_35;
 if (stepLocal_4 <= 32) {
  var_1_20 = ((var_1_21 - (var_1_22 - var_1_23)) - (var_1_24 + ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26)))));
 } else {
  var_1_20 = var_1_26;
 }
 if (var_1_25 < var_1_20) {
  if ((var_1_23 - var_1_24) >= var_1_22) {
   var_1_31 = (! (var_1_14 && var_1_32));
  } else {
   var_1_31 = ((var_1_9 > var_1_19) || var_1_15);
  }
 } else {
  var_1_31 = var_1_32;
 }
 unsigned char stepLocal_1 = var_1_31;
 unsigned long int stepLocal_0 = (((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27));
 if (var_1_2 == var_1_3) {
  if (stepLocal_0 > 2) {
   if ((4.25 <= var_1_3) || stepLocal_1) {
    var_1_1 = (var_1_7 + var_1_8);
   } else {
    var_1_1 = (8 - var_1_9);
   }
  } else {
   var_1_1 = var_1_7;
  }
 } else {
  var_1_1 = 128;
 }
 if ((- var_1_10) >= var_1_12) {
  var_1_13 = (var_1_31 && var_1_14);
 } else {
  var_1_13 = (! (var_1_15 && var_1_16));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 16382);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 4611686.018427383000e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 2305843.009213691400e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_35 = var_1_35;
}
int property(void) {
 return ((((((((((((var_1_2 == var_1_3) ? ((((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27))) > 2) ? (((4.25 <= var_1_3) || var_1_31) ? (var_1_1 == ((signed short int) (var_1_7 + var_1_8))) : (var_1_1 == ((signed short int) (8 - var_1_9)))) : (var_1_1 == ((signed short int) var_1_7))) : (var_1_1 == ((signed short int) 128))) && (((var_1_11 - var_1_9) > 2u) ? ((last_1_var_1_35 > last_1_var_1_1) ? (var_1_10 == ((unsigned short int) (var_1_12 - var_1_9))) : 1) : (var_1_10 == ((unsigned short int) var_1_12)))) && (((- var_1_10) >= var_1_12) ? (var_1_13 == ((unsigned char) (var_1_31 && var_1_14))) : (var_1_13 == ((unsigned char) (! (var_1_15 && var_1_16)))))) && (var_1_16 ? (var_1_17 == ((signed short int) ((var_1_18 - var_1_19) - var_1_9))) : (var_1_17 == ((signed short int) (var_1_19 - var_1_9))))) && ((var_1_35 <= 32) ? (var_1_20 == ((float) ((var_1_21 - (var_1_22 - var_1_23)) - (var_1_24 + ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))))))) : (var_1_20 == ((float) var_1_26)))) && (var_1_27 == ((unsigned long int) (((((var_1_28) > (var_1_9)) ? (var_1_28) : (var_1_9))) + var_1_12)))) && ((var_1_33 >= (var_1_10 + var_1_9)) ? (var_1_29 == ((unsigned short int) 1)) : (var_1_29 == ((unsigned short int) (var_1_12 - ((((32) > (var_1_30)) ? (32) : (var_1_30)))))))) && ((var_1_25 < var_1_20) ? (((var_1_23 - var_1_24) >= var_1_22) ? (var_1_31 == ((unsigned char) (! (var_1_14 && var_1_32)))) : (var_1_31 == ((unsigned char) ((var_1_9 > var_1_19) || var_1_15)))) : (var_1_31 == ((unsigned char) var_1_32)))) && (((var_1_19 % ((((var_1_18) < (var_1_12)) ? (var_1_18) : (var_1_12)))) == (var_1_10 | var_1_7)) ? (var_1_33 == ((signed long int) (((((-256 + var_1_10)) < ((var_1_18 + var_1_19))) ? ((-256 + var_1_10)) : ((var_1_18 + var_1_19)))))) : (var_1_33 == ((signed long int) var_1_8)))) && ((((var_1_27 / 128) / 2) != 4) ? ((var_1_19 == var_1_33) ? (var_1_34 == ((float) var_1_26)) : (var_1_34 == ((float) var_1_23))) : (var_1_34 == ((float) var_1_25)))) && ((8 >= var_1_29) ? (var_1_35 == ((signed long int) var_1_12)) : ((last_1_var_1_35 <= var_1_28) ? (var_1_35 == ((signed long int) ((((var_1_17) < (((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9))))) ? (var_1_17) : (((((var_1_7) > (var_1_9)) ? (var_1_7) : (var_1_9)))))))) : (((var_1_27 >= var_1_9) || (! var_1_14)) ? (var_1_35 == ((signed long int) var_1_18)) : 1)))) && (var_1_36 == ((unsigned char) var_1_37))
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
