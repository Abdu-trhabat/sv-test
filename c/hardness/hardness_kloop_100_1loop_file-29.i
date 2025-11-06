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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 128;
unsigned short int var_1_10 = 5;
unsigned char var_1_11 = 10;
unsigned short int var_1_12 = 8;
unsigned short int var_1_13 = 22843;
unsigned char var_1_14 = 4;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 32;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 25;
double var_1_19 = 16.875;
double var_1_20 = 15.475;
double var_1_21 = 7.1;
double var_1_22 = 256.5;
double var_1_23 = 9.4;
double var_1_24 = 4.75;
double var_1_25 = 4.8;
double var_1_26 = 128.5;
unsigned char var_1_27 = 100;
signed char var_1_28 = 0;
signed char var_1_29 = 8;
unsigned char var_1_30 = 0;
unsigned long int var_1_31 = 5;
unsigned long int var_1_32 = 2657034370;
double var_1_33 = 0.0;
double var_1_34 = 50.6;
double var_1_35 = 0.0;
double var_1_36 = 49.25;
signed char var_1_37 = 100;
signed char var_1_38 = 4;
signed char var_1_39 = -4;
signed long int var_1_40 = -8;
unsigned char last_1_var_1_1 = 1;
unsigned short int last_1_var_1_12 = 8;
unsigned char last_1_var_1_14 = 4;
double last_1_var_1_19 = 16.875;
unsigned long int last_1_var_1_31 = 5;
void initially(void) {
}
void step(void) {
 if (! last_1_var_1_1) {
  if (! (! (! var_1_5))) {
   var_1_17 = last_1_var_1_31;
  } else {
   var_1_17 = var_1_13;
  }
 } else {
  var_1_17 = var_1_15;
 }
 var_1_40 = var_1_17;
 signed long int stepLocal_6 = var_1_15 + var_1_29;
 if (last_1_var_1_19 != var_1_22) {
  var_1_31 = (var_1_32 - (last_1_var_1_12 + var_1_13));
 } else {
  if ((last_1_var_1_12 + last_1_var_1_14) >= stepLocal_6) {
   if ((var_1_24 * (var_1_23 * last_1_var_1_19)) >= ((var_1_33 - var_1_34) - (var_1_35 - var_1_36))) {
    var_1_31 = last_1_var_1_14;
   } else {
    var_1_31 = last_1_var_1_12;
   }
  }
 }
 if (var_1_40 > var_1_31) {
  if (var_1_31 == var_1_40) {
   var_1_12 = ((var_1_13 - var_1_11) + var_1_40);
  }
 }
 unsigned char stepLocal_4 = var_1_12 <= var_1_31;
 unsigned long int stepLocal_3 = var_1_31;
 if (var_1_5 && stepLocal_4) {
  if (var_1_17 > stepLocal_3) {
   var_1_19 = (((((var_1_20 - var_1_21)) < (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22)));
  }
 } else {
  var_1_19 = (var_1_23 + ((var_1_24 + var_1_25) + var_1_26));
 }
 signed long int stepLocal_5 = var_1_16 - (var_1_28 + var_1_29);
 if (stepLocal_5 <= var_1_40) {
  var_1_27 = ((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28)));
 } else {
  var_1_27 = var_1_29;
 }
 signed long int stepLocal_7 = var_1_12 / ((((var_1_13) < (var_1_10)) ? (var_1_13) : (var_1_10)));
 if ((var_1_15 - ((((var_1_16) > (var_1_28)) ? (var_1_16) : (var_1_28)))) < stepLocal_7) {
  var_1_37 = ((var_1_38 + var_1_39) + var_1_29);
 } else {
  var_1_37 = ((((var_1_28) < (var_1_38)) ? (var_1_28) : (var_1_38)));
 }
 unsigned long int stepLocal_1 = var_1_31;
 signed long int stepLocal_0 = var_1_17 + var_1_40;
 if (var_1_17 != stepLocal_1) {
  if (var_1_31 >= stepLocal_0) {
   var_1_1 = var_1_5;
  } else {
   if (var_1_5) {
    var_1_1 = var_1_6;
   }
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_1) {
  var_1_30 = 1;
 } else {
  var_1_30 = (! var_1_5);
 }
 signed long int stepLocal_2 = (((256) > (var_1_17)) ? (256) : (var_1_17));
 if (var_1_30) {
  if (var_1_13 > stepLocal_2) {
   var_1_14 = (var_1_15 - var_1_16);
  } else {
   var_1_14 = (var_1_16 + 10);
  }
 }
 if (! var_1_1) {
  if (var_1_31 > (var_1_17 % var_1_10)) {
   var_1_8 = var_1_11;
  }
 }
 if (var_1_1) {
  if (((((var_1_13) < (var_1_27)) ? (var_1_13) : (var_1_27))) > ((var_1_16 << var_1_12) / var_1_15)) {
   var_1_18 = ((((2) > (var_1_11)) ? (2) : (var_1_11)));
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65535);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16383);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -115292.1504606845700e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 1152921.504606845700e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -115292.1504606845700e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 1152921.504606845700e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -230584.3009213691400e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 64);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 2147483647);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 4611686.018427388000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427388000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 4611686.018427388000e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427388000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -31);
 assume_abort_if_not(var_1_38 <= 32);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -31);
 assume_abort_if_not(var_1_39 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_31 = var_1_31;
}
int property(void) {
 return ((((((((((((var_1_17 != var_1_31) ? ((var_1_31 >= (var_1_17 + var_1_40)) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_5 ? (var_1_1 == ((unsigned char) var_1_6)) : 1)) : (var_1_1 == ((unsigned char) var_1_7))) && ((! var_1_1) ? ((var_1_31 > (var_1_17 % var_1_10)) ? (var_1_8 == ((unsigned char) var_1_11)) : 1) : 1)) && ((var_1_40 > var_1_31) ? ((var_1_31 == var_1_40) ? (var_1_12 == ((unsigned short int) ((var_1_13 - var_1_11) + var_1_40))) : 1) : 1)) && (var_1_30 ? ((var_1_13 > ((((256) > (var_1_17)) ? (256) : (var_1_17)))) ? (var_1_14 == ((unsigned char) (var_1_15 - var_1_16))) : (var_1_14 == ((unsigned char) (var_1_16 + 10)))) : 1)) && ((! last_1_var_1_1) ? ((! (! (! var_1_5))) ? (var_1_17 == ((unsigned short int) last_1_var_1_31)) : (var_1_17 == ((unsigned short int) var_1_13))) : (var_1_17 == ((unsigned short int) var_1_15)))) && (var_1_1 ? ((((((var_1_13) < (var_1_27)) ? (var_1_13) : (var_1_27))) > ((var_1_16 << var_1_12) / var_1_15)) ? (var_1_18 == ((unsigned char) ((((2) > (var_1_11)) ? (2) : (var_1_11))))) : 1) : 1)) && ((var_1_5 && (var_1_12 <= var_1_31)) ? ((var_1_17 > var_1_31) ? (var_1_19 == ((double) (((((var_1_20 - var_1_21)) < (var_1_22)) ? ((var_1_20 - var_1_21)) : (var_1_22))))) : 1) : (var_1_19 == ((double) (var_1_23 + ((var_1_24 + var_1_25) + var_1_26)))))) && (((var_1_16 - (var_1_28 + var_1_29)) <= var_1_40) ? (var_1_27 == ((unsigned char) ((((var_1_29) > (var_1_28)) ? (var_1_29) : (var_1_28))))) : (var_1_27 == ((unsigned char) var_1_29)))) && (var_1_1 ? (var_1_30 == ((unsigned char) 1)) : (var_1_30 == ((unsigned char) (! var_1_5))))) && ((last_1_var_1_19 != var_1_22) ? (var_1_31 == ((unsigned long int) (var_1_32 - (last_1_var_1_12 + var_1_13)))) : (((last_1_var_1_12 + last_1_var_1_14) >= (var_1_15 + var_1_29)) ? (((var_1_24 * (var_1_23 * last_1_var_1_19)) >= ((var_1_33 - var_1_34) - (var_1_35 - var_1_36))) ? (var_1_31 == ((unsigned long int) last_1_var_1_14)) : (var_1_31 == ((unsigned long int) last_1_var_1_12))) : 1))) && (((var_1_15 - ((((var_1_16) > (var_1_28)) ? (var_1_16) : (var_1_28)))) < (var_1_12 / ((((var_1_13) < (var_1_10)) ? (var_1_13) : (var_1_10))))) ? (var_1_37 == ((signed char) ((var_1_38 + var_1_39) + var_1_29))) : (var_1_37 == ((signed char) ((((var_1_28) < (var_1_38)) ? (var_1_28) : (var_1_38))))))) && (var_1_40 == ((signed long int) var_1_17))
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
