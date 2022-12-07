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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 15.8;
float var_1_2 = 9.5;
float var_1_4 = 127.6;
double var_1_5 = 100000000000000.5;
double var_1_6 = 100000000000000.7;
double var_1_7 = 256.75;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed char var_1_12 = 0;
signed char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_16 = 10;
unsigned char var_1_18 = 4;
unsigned char var_1_19 = 8;
unsigned char var_1_20 = 8;
unsigned short int var_1_21 = 128;
unsigned char var_1_22 = 0;
unsigned short int var_1_24 = 34649;
unsigned long int var_1_25 = 32;
signed char var_1_26 = -128;
signed long int var_1_28 = 32;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
signed long int var_1_31 = -10000000;
unsigned long int var_1_32 = 10;
signed short int var_1_33 = -8;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 0;
float var_1_37 = 0.75;
float var_1_38 = 255.2;
float var_1_39 = 1.1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 8;
signed char var_1_44 = 64;
signed long int var_1_45 = -5;
signed char var_1_46 = -8;
signed char var_1_47 = 1;
unsigned long int var_1_48 = 10;
unsigned long int var_1_49 = 4111364598;
double var_1_50 = 31.4;
double var_1_51 = 128.125;
unsigned short int var_1_52 = 256;
unsigned short int var_1_53 = 64;
unsigned char last_1_var_1_8 = 0;
unsigned short int last_1_var_1_21 = 128;
unsigned char last_1_var_1_22 = 0;
void initially(void) {
}
void step(void) {
 if (64.5f <= var_1_2) {
  if (last_1_var_1_8) {
   if (var_1_2 == var_1_4) {
    var_1_1 = (var_1_5 + ((((((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) < (50.25)) ? (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) : (50.25))));
   } else {
    var_1_1 = var_1_7;
   }
  } else {
   var_1_1 = var_1_5;
  }
 }
 if (var_1_1 > ((var_1_1 * var_1_5) + 5.3)) {
  if ((var_1_7 + var_1_1) < var_1_6) {
   var_1_8 = var_1_9;
  } else {
   var_1_8 = var_1_10;
  }
 } else {
  var_1_8 = var_1_11;
 }
 if (var_1_37 < 2.4f) {
  if (var_1_31 >= (var_1_45 >> 31)) {
   var_1_44 = ((((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) < (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) ? (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) : (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))));
  }
 } else {
  var_1_44 = var_1_47;
 }
 signed long int stepLocal_0 = (last_1_var_1_22 / var_1_16) * last_1_var_1_21;
 if (last_1_var_1_21 < stepLocal_0) {
  var_1_14 = ((var_1_18 + var_1_19) + var_1_20);
 } else {
  var_1_14 = var_1_18;
 }
 var_1_33 = var_1_26;
 var_1_34 = var_1_35;
 if (var_1_31 != var_1_28) {
  var_1_43 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 } else {
  var_1_43 = (var_1_34 + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 }
 if (var_1_25 >= var_1_35) {
  var_1_48 = (var_1_49 - var_1_43);
 } else {
  if ((var_1_36 && var_1_42) || ((var_1_50 - var_1_51) < var_1_39)) {
   var_1_48 = var_1_49;
  }
 }
 signed long int stepLocal_3 = var_1_18 << var_1_14;
 signed long int stepLocal_2 = (var_1_14 | var_1_18) / (var_1_24 - 1);
 if (var_1_19 == stepLocal_3) {
  if (last_1_var_1_22 >= stepLocal_2) {
   var_1_22 = 2;
  } else {
   var_1_22 = var_1_20;
  }
 } else {
  var_1_22 = 64;
 }
 if (var_1_29 && var_1_30) {
  if ((256 % var_1_31) >= ((((var_1_28) < (var_1_26)) ? (var_1_28) : (var_1_26)))) {
   var_1_25 = var_1_32;
  } else {
   var_1_25 = var_1_32;
  }
 } else {
  var_1_25 = var_1_32;
 }
 var_1_52 = var_1_53;
 if (((- var_1_1) / 24.75) < var_1_6) {
  if (var_1_7 >= var_1_1) {
   var_1_12 = var_1_13;
  } else {
   var_1_12 = var_1_13;
  }
 }
 unsigned char stepLocal_1 = var_1_10;
 if (var_1_8 && stepLocal_1) {
  var_1_21 = ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) > (2)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (2)));
 }
 if ((((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38))) / 8.6f) <= ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) {
  if (var_1_30 || (var_1_31 <= var_1_34)) {
   var_1_36 = ((var_1_40 && var_1_41) || var_1_42);
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 255);
 assume_abort_if_not(var_1_16 != 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 32767);
 assume_abort_if_not(var_1_24 <= 65535);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -128);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 assume_abort_if_not(var_1_31 != 0);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= -2147483648);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -126);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -126);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 2147483647);
 assume_abort_if_not(var_1_49 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 65534);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return ((((((64.5f <= var_1_2) ? (last_1_var_1_8 ? ((var_1_2 == var_1_4) ? (var_1_1 == ((double) (var_1_5 + ((((((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) < (50.25)) ? (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))) : (50.25)))))) : (var_1_1 == ((double) var_1_7))) : (var_1_1 == ((double) var_1_5))) : 1) && ((var_1_1 > ((var_1_1 * var_1_5) + 5.3)) ? (((var_1_7 + var_1_1) < var_1_6) ? (var_1_8 == ((unsigned char) var_1_9)) : (var_1_8 == ((unsigned char) var_1_10))) : (var_1_8 == ((unsigned char) var_1_11)))) && ((((- var_1_1) / 24.75) < var_1_6) ? ((var_1_7 >= var_1_1) ? (var_1_12 == ((signed char) var_1_13)) : (var_1_12 == ((signed char) var_1_13))) : 1)) && ((last_1_var_1_21 < ((last_1_var_1_22 / var_1_16) * last_1_var_1_21)) ? (var_1_14 == ((unsigned char) ((var_1_18 + var_1_19) + var_1_20))) : (var_1_14 == ((unsigned char) var_1_18)))) && ((var_1_8 && var_1_10) ? (var_1_21 == ((unsigned short int) ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) > (2)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (2))))) : 1)) && ((var_1_19 == (var_1_18 << var_1_14)) ? ((last_1_var_1_22 >= ((var_1_14 | var_1_18) / (var_1_24 - 1))) ? (var_1_22 == ((unsigned char) 2)) : (var_1_22 == ((unsigned char) var_1_20))) : (var_1_22 == ((unsigned char) 64)))
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
