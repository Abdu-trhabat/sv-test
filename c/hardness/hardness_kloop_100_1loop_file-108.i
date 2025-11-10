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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 1.95;
float var_1_2 = 99.6;
float var_1_3 = 64.25;
signed short int var_1_4 = 50;
unsigned short int var_1_5 = 200;
unsigned short int var_1_6 = 16;
signed long int var_1_7 = -8;
signed long int var_1_8 = -128;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
signed short int var_1_11 = 0;
signed short int var_1_12 = -128;
signed long int var_1_13 = 4;
unsigned short int var_1_15 = 1;
unsigned char var_1_16 = 50;
unsigned char var_1_17 = 8;
signed short int var_1_18 = 4;
unsigned short int var_1_19 = 256;
signed short int var_1_20 = 29240;
unsigned short int var_1_21 = 1;
unsigned long int var_1_22 = 256;
double var_1_23 = 8.5;
float var_1_24 = 8.5;
float var_1_25 = 10.8;
double var_1_26 = 9.625;
double var_1_27 = 25.5;
float var_1_28 = 199.5;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
signed long int var_1_32 = 128;
signed long int var_1_33 = 1990996976;
double var_1_34 = 256.25;
double var_1_35 = 9.5;
double var_1_36 = 0.0;
signed long int last_1_var_1_13 = 4;
unsigned short int last_1_var_1_19 = 256;
unsigned long int last_1_var_1_22 = 256;
signed long int last_1_var_1_32 = 128;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_4 = last_1_var_1_19 < last_1_var_1_22;
 if (((var_1_15 + last_1_var_1_22) <= last_1_var_1_32) || stepLocal_4) {
  var_1_29 = (! (var_1_30 && (! var_1_31)));
 } else {
  var_1_29 = ((16 > last_1_var_1_19) || ((! var_1_31) && var_1_30));
 }
 if (var_1_29) {
  var_1_32 = (((((128) < (var_1_21)) ? (128) : (var_1_21))) - (var_1_33 - ((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20)))));
 }
 if (! (last_1_var_1_19 < (last_1_var_1_13 % var_1_15))) {
  var_1_13 = var_1_15;
 }
 if (((((var_1_13) < (last_1_var_1_22)) ? (var_1_13) : (last_1_var_1_22))) == var_1_17) {
  var_1_22 = (var_1_20 + var_1_21);
 }
 signed long int stepLocal_5 = var_1_20 - var_1_17;
 if (stepLocal_5 >= var_1_13) {
  var_1_34 = ((((((((var_1_3) > (var_1_27)) ? (var_1_3) : (var_1_27)))) < ((((((var_1_35 - 1.0000000000000025E14)) < (var_1_26)) ? ((var_1_35 - 1.0000000000000025E14)) : (var_1_26))))) ? (((((var_1_3) > (var_1_27)) ? (var_1_3) : (var_1_27)))) : ((((((var_1_35 - 1.0000000000000025E14)) < (var_1_26)) ? ((var_1_35 - 1.0000000000000025E14)) : (var_1_26))))));
 } else {
  if (! (var_1_11 <= (var_1_17 * var_1_22))) {
   var_1_34 = (10.75 - (var_1_36 - var_1_26));
  } else {
   var_1_34 = var_1_35;
  }
 }
 if ((var_1_2 / ((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25)))) >= var_1_34) {
  if (var_1_21 <= var_1_20) {
   var_1_23 = ((((((var_1_26 - 64.625) + var_1_27)) > (var_1_2)) ? (((var_1_26 - 64.625) + var_1_27)) : (var_1_2)));
  }
 } else {
  var_1_23 = var_1_3;
 }
 unsigned char stepLocal_1 = var_1_9;
 signed long int stepLocal_0 = var_1_5 ^ var_1_6;
 if (stepLocal_0 >= (64 * (var_1_7 + var_1_8))) {
  if ((var_1_3 - var_1_2) < var_1_23) {
   if (stepLocal_1 || var_1_10) {
    var_1_4 = var_1_11;
   } else {
    var_1_4 = var_1_12;
   }
  }
 } else {
  var_1_4 = 100;
 }
 signed long int stepLocal_3 = (var_1_20 - var_1_17) << var_1_4;
 signed short int stepLocal_2 = var_1_4;
 if (stepLocal_3 <= var_1_13) {
  var_1_19 = (((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17))) + var_1_21);
 } else {
  if ((var_1_13 ^ var_1_22) > stepLocal_2) {
   var_1_19 = var_1_17;
  } else {
   var_1_19 = 10;
  }
 }
 var_1_1 = (var_1_2 - var_1_3);
 if (var_1_12 < var_1_15) {
  if ((var_1_32 + var_1_15) >= var_1_12) {
   var_1_16 = var_1_17;
  }
 }
 var_1_18 = var_1_11;
 if (var_1_29) {
  if (((var_1_25 * var_1_26) * var_1_24) >= ((((- var_1_2) < 0 ) ? -(- var_1_2) : (- var_1_2)))) {
   var_1_28 = var_1_3;
  }
 } else {
  var_1_28 = var_1_27;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65535);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32767);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65535);
 assume_abort_if_not(var_1_15 != 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 16383);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 assume_abort_if_not(var_1_24 != 0.0F);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= 1073741823);
 assume_abort_if_not(var_1_33 <= 2147483646);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 4611686.018427383000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return (((((((((((var_1_1 == ((float) (var_1_2 - var_1_3))) && (((var_1_5 ^ var_1_6) >= (64 * (var_1_7 + var_1_8))) ? (((var_1_3 - var_1_2) < var_1_23) ? ((var_1_9 || var_1_10) ? (var_1_4 == ((signed short int) var_1_11)) : (var_1_4 == ((signed short int) var_1_12))) : 1) : (var_1_4 == ((signed short int) 100)))) && ((! (last_1_var_1_19 < (last_1_var_1_13 % var_1_15))) ? (var_1_13 == ((signed long int) var_1_15)) : 1)) && ((var_1_12 < var_1_15) ? (((var_1_32 + var_1_15) >= var_1_12) ? (var_1_16 == ((unsigned char) var_1_17)) : 1) : 1)) && (var_1_18 == ((signed short int) var_1_11))) && ((((var_1_20 - var_1_17) << var_1_4) <= var_1_13) ? (var_1_19 == ((unsigned short int) (((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17))) + var_1_21))) : (((var_1_13 ^ var_1_22) > var_1_4) ? (var_1_19 == ((unsigned short int) var_1_17)) : (var_1_19 == ((unsigned short int) 10))))) && ((((((var_1_13) < (last_1_var_1_22)) ? (var_1_13) : (last_1_var_1_22))) == var_1_17) ? (var_1_22 == ((unsigned long int) (var_1_20 + var_1_21))) : 1)) && (((var_1_2 / ((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25)))) >= var_1_34) ? ((var_1_21 <= var_1_20) ? (var_1_23 == ((double) ((((((var_1_26 - 64.625) + var_1_27)) > (var_1_2)) ? (((var_1_26 - 64.625) + var_1_27)) : (var_1_2))))) : 1) : (var_1_23 == ((double) var_1_3)))) && (var_1_29 ? ((((var_1_25 * var_1_26) * var_1_24) >= ((((- var_1_2) < 0 ) ? -(- var_1_2) : (- var_1_2)))) ? (var_1_28 == ((float) var_1_3)) : 1) : (var_1_28 == ((float) var_1_27)))) && ((((var_1_15 + last_1_var_1_22) <= last_1_var_1_32) || (last_1_var_1_19 < last_1_var_1_22)) ? (var_1_29 == ((unsigned char) (! (var_1_30 && (! var_1_31))))) : (var_1_29 == ((unsigned char) ((16 > last_1_var_1_19) || ((! var_1_31) && var_1_30)))))) && (var_1_29 ? (var_1_32 == ((signed long int) (((((128) < (var_1_21)) ? (128) : (var_1_21))) - (var_1_33 - ((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20))))))) : 1)) && (((var_1_20 - var_1_17) >= var_1_13) ? (var_1_34 == ((double) ((((((((var_1_3) > (var_1_27)) ? (var_1_3) : (var_1_27)))) < ((((((var_1_35 - 1.0000000000000025E14)) < (var_1_26)) ? ((var_1_35 - 1.0000000000000025E14)) : (var_1_26))))) ? (((((var_1_3) > (var_1_27)) ? (var_1_3) : (var_1_27)))) : ((((((var_1_35 - 1.0000000000000025E14)) < (var_1_26)) ? ((var_1_35 - 1.0000000000000025E14)) : (var_1_26)))))))) : ((! (var_1_11 <= (var_1_17 * var_1_22))) ? (var_1_34 == ((double) (10.75 - (var_1_36 - var_1_26)))) : (var_1_34 == ((double) var_1_35))))
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
