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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 10;
double var_1_2 = 3.75;
double var_1_3 = 0.6;
signed short int var_1_4 = 32;
signed short int var_1_5 = 4;
signed short int var_1_6 = 128;
signed short int var_1_7 = -8;
signed short int var_1_8 = 4;
signed short int var_1_9 = -128;
signed short int var_1_10 = 256;
unsigned char var_1_11 = 0;
signed long int var_1_12 = -2;
signed short int var_1_13 = 16771;
unsigned char var_1_14 = 64;
double var_1_16 = 10000000000000.2;
unsigned char var_1_17 = 4;
unsigned char var_1_18 = 16;
unsigned char var_1_19 = 100;
unsigned char var_1_20 = 2;
signed long int var_1_21 = -50;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 34467;
double var_1_24 = 7.5;
double var_1_25 = 15.5;
double var_1_26 = 0.0;
double var_1_27 = 9.5;
signed char var_1_28 = 10;
signed char var_1_29 = 10;
signed char var_1_30 = 16;
signed char var_1_31 = -1;
double var_1_32 = -0.125;
unsigned short int var_1_33 = 200;
signed short int var_1_34 = 256;
signed short int var_1_35 = 10000;
unsigned char var_1_36 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
float var_1_40 = 2.25;
float var_1_41 = 31.75;
float var_1_42 = 200.75;
float var_1_43 = 99.75;
float var_1_44 = 15.625;
float var_1_45 = 199.25;
signed long int var_1_46 = 1;
unsigned long int var_1_49 = 8;
unsigned long int var_1_50 = 3517216936;
signed char var_1_51 = 32;
signed char var_1_52 = 8;
unsigned char var_1_53 = 10;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 4;
unsigned long int var_1_56 = 2;
signed char var_1_57 = 10;
double var_1_58 = 3.4;
double var_1_60 = 0.0;
unsigned char var_1_61 = 5;
unsigned char var_1_62 = 64;
unsigned char var_1_63 = 64;
unsigned char var_1_64 = 50;
signed short int var_1_65 = -4;
float var_1_66 = 0.09999999999999998;
signed long int var_1_67 = -256;
unsigned char var_1_68 = 1;
signed long int var_1_69 = 1;
signed short int last_1_var_1_1 = 10;
unsigned char last_1_var_1_19 = 100;
double last_1_var_1_24 = 7.5;
unsigned long int last_1_var_1_56 = 2;
signed long int last_1_var_1_67 = -256;
unsigned char last_1_var_1_68 = 1;
signed long int last_1_var_1_69 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_29 == var_1_13) {
  if ((last_1_var_1_24 / var_1_16) == (((((- var_1_42)) < (var_1_44)) ? ((- var_1_42)) : (var_1_44)))) {
   var_1_49 = ((((var_1_23) < (var_1_13)) ? (var_1_23) : (var_1_13)));
  } else {
   var_1_49 = ((((var_1_29) > (last_1_var_1_1)) ? (var_1_29) : (last_1_var_1_1)));
  }
 } else {
  var_1_49 = ((var_1_50 - ((((last_1_var_1_69) < (last_1_var_1_56)) ? (last_1_var_1_69) : (last_1_var_1_56)))) - var_1_6);
 }
 if ((last_1_var_1_67 & last_1_var_1_19) >= var_1_6) {
  var_1_24 = (var_1_25 - ((3.9432158760839634E18 + var_1_26) - var_1_27));
 } else {
  if (var_1_26 >= (- var_1_25)) {
   var_1_24 = (var_1_27 + var_1_26);
  } else {
   var_1_24 = 0.2;
  }
 }
 if ((last_1_var_1_67 <= (var_1_7 * var_1_13)) || last_1_var_1_68) {
  var_1_36 = (last_1_var_1_68 || var_1_38);
 } else {
  var_1_36 = (((~ var_1_5) >= var_1_23) && var_1_39);
 }
 if (var_1_36) {
  var_1_68 = 1;
 } else {
  var_1_68 = var_1_38;
 }
 if (! var_1_68) {
  var_1_33 = (var_1_17 + var_1_29);
 }
 signed short int stepLocal_0 = var_1_7;
 if (var_1_36) {
  var_1_10 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  if (16 < stepLocal_0) {
   var_1_10 = var_1_6;
  }
 }
 if (var_1_68) {
  var_1_61 = ((((50) < (var_1_17)) ? (50) : (var_1_17)));
 } else {
  var_1_61 = ((var_1_62 - var_1_52) + (var_1_63 - (var_1_64 - 2)));
 }
 if (var_1_2 < var_1_3) {
  if (var_1_3 <= var_1_2) {
   var_1_1 = (((((10) > (var_1_4)) ? (10) : (var_1_4))) - var_1_5);
  } else {
   var_1_1 = ((((var_1_5) > ((var_1_4 - var_1_6))) ? (var_1_5) : ((var_1_4 - var_1_6))));
  }
 } else {
  var_1_1 = ((((((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) < ((((((var_1_7 + var_1_8)) > (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))))) ? ((var_1_7 + var_1_8)) : (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))))))) ? (((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) : ((((((var_1_7 + var_1_8)) > (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))))) ? ((var_1_7 + var_1_8)) : (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))))))));
 }
 if (var_1_5 > ((var_1_13 - 4) - var_1_6)) {
  var_1_12 = (var_1_4 - var_1_13);
 } else {
  var_1_12 = ((var_1_6 - var_1_13) + var_1_9);
 }
 signed short int stepLocal_1 = var_1_1;
 if (var_1_5 > stepLocal_1) {
  var_1_19 = (var_1_20 + 25);
 } else {
  var_1_19 = var_1_18;
 }
 unsigned char stepLocal_2 = var_1_17;
 if (var_1_68) {
  if (stepLocal_2 < (~ 1)) {
   var_1_28 = ((var_1_29 - var_1_30) + var_1_31);
  }
 } else {
  if (((((var_1_26 - var_1_25) < 0 ) ? -(var_1_26 - var_1_25) : (var_1_26 - var_1_25))) <= (var_1_16 / var_1_32)) {
   var_1_28 = ((((var_1_30) < (0)) ? (var_1_30) : (0)));
  }
 }
 if (! var_1_68) {
  var_1_34 = (var_1_30 - (var_1_18 + (var_1_35 - var_1_20)));
 }
 unsigned char stepLocal_7 = (var_1_5 + var_1_17) > (var_1_18 * -128);
 if (stepLocal_7 && var_1_38) {
  var_1_55 = var_1_54;
 }
 if (var_1_45 <= 32.125f) {
  var_1_57 = ((((((((var_1_30) < ((var_1_29 + var_1_31))) ? (var_1_30) : ((var_1_29 + var_1_31))))) > (var_1_52)) ? (((((var_1_30) < ((var_1_29 + var_1_31))) ? (var_1_30) : ((var_1_29 + var_1_31))))) : (var_1_52)));
 }
 if (((((200.5f) < (var_1_43)) ? (200.5f) : (var_1_43))) > (((((var_1_60 - var_1_41)) > (var_1_42)) ? ((var_1_60 - var_1_41)) : (var_1_42)))) {
  var_1_65 = (var_1_29 - var_1_64);
 } else {
  var_1_65 = (var_1_19 + (256 - ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))));
 }
 if ((- var_1_33) >= ((var_1_20 | var_1_30) * var_1_49)) {
  if (25.2f <= var_1_27) {
   var_1_58 = (((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45))) - (var_1_60 - (var_1_26 - var_1_42)));
  } else {
   var_1_58 = var_1_45;
  }
 }
 unsigned long int stepLocal_10 = var_1_50;
 unsigned long int stepLocal_9 = var_1_23 + var_1_49;
 if (stepLocal_9 <= var_1_49) {
  if (var_1_43 <= var_1_58) {
   if (stepLocal_10 != var_1_52) {
    var_1_67 = (var_1_17 + (var_1_12 + var_1_64));
   } else {
    var_1_67 = (var_1_64 + var_1_17);
   }
  } else {
   if (var_1_36) {
    var_1_67 = var_1_49;
   } else {
    var_1_67 = var_1_35;
   }
  }
 } else {
  var_1_67 = last_1_var_1_67;
 }
 if (var_1_58 < (((((var_1_58) < (var_1_24)) ? (var_1_58) : (var_1_24))) / var_1_16)) {
  var_1_14 = var_1_17;
 } else {
  var_1_14 = ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) > (var_1_18)) ? (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) : (var_1_18)));
 }
 if (var_1_36) {
  var_1_21 = (25 + (var_1_20 - var_1_67));
 } else {
  var_1_21 = (((((var_1_4) < (2)) ? (var_1_4) : (2))) - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))));
 }
 unsigned char stepLocal_12 = var_1_18 > (var_1_21 % var_1_63);
 unsigned char stepLocal_11 = var_1_11;
 if (var_1_11 || stepLocal_12) {
  if (stepLocal_11 || var_1_36) {
   var_1_69 = (var_1_64 + var_1_7);
  }
 } else {
  var_1_69 = var_1_61;
 }
 unsigned char stepLocal_6 = var_1_24 <= var_1_26;
 if (stepLocal_6 || var_1_36) {
  var_1_53 = (var_1_54 - var_1_52);
 } else {
  var_1_53 = (1 + (var_1_29 + var_1_52));
 }
 var_1_22 = (var_1_23 - var_1_53);
 if (((((var_1_53) < (var_1_69)) ? (var_1_53) : (var_1_69))) <= var_1_13) {
  var_1_40 = ((var_1_27 - (var_1_41 + var_1_42)) + ((((((((var_1_43) > (var_1_26)) ? (var_1_43) : (var_1_26)))) > ((var_1_44 - var_1_45))) ? (((((var_1_43) > (var_1_26)) ? (var_1_43) : (var_1_26)))) : ((var_1_44 - var_1_45)))));
 } else {
  var_1_40 = (var_1_45 - var_1_42);
 }
 unsigned long int stepLocal_8 = var_1_50;
 if (var_1_10 <= stepLocal_8) {
  if (var_1_36) {
   var_1_56 = ((((var_1_53) < (var_1_33)) ? (var_1_53) : (var_1_33)));
  } else {
   var_1_56 = ((((((((var_1_14) < (8u)) ? (var_1_14) : (8u)))) > (var_1_10)) ? (((((var_1_14) < (8u)) ? (var_1_14) : (8u)))) : (var_1_10)));
  }
 } else {
  var_1_56 = ((((var_1_29) > ((var_1_23 + var_1_33))) ? (var_1_29) : ((var_1_23 + var_1_33))));
 }
 unsigned long int stepLocal_4 = var_1_56 / var_1_13;
 signed long int stepLocal_3 = - var_1_22;
 if (stepLocal_3 <= var_1_1) {
  if (var_1_56 > stepLocal_4) {
   var_1_46 = ((((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8)));
  } else {
   var_1_46 = (((((((((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) > (-1)) ? (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) : (-1))) < 0 ) ? -((((((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) > (-1)) ? (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) : (-1))) : ((((((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) > (-1)) ? (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) : (-1)))));
  }
 } else {
  var_1_46 = var_1_69;
 }
 unsigned char stepLocal_5 = var_1_36;
 if (stepLocal_5 && (var_1_56 < var_1_21)) {
  var_1_51 = (((((var_1_30 - (var_1_29 + var_1_52))) < (var_1_31)) ? ((var_1_30 - (var_1_29 + var_1_52))) : (var_1_31)));
 } else {
  var_1_51 = (10 - (var_1_30 + var_1_52));
 }
 if (var_1_46 != var_1_67) {
  if (var_1_32 >= var_1_44) {
   var_1_66 = (1000000.5f - var_1_60);
  } else {
   var_1_66 = ((((var_1_41) > ((var_1_26 + var_1_43))) ? (var_1_41) : ((var_1_26 + var_1_43))));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 16383);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 32767);
 assume_abort_if_not(var_1_23 <= 65534);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 2305843.009213691400e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -63);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= 8191);
 assume_abort_if_not(var_1_35 <= 16383);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 3221225470);
 assume_abort_if_not(var_1_50 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 4611686.018427383000e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 63);
 assume_abort_if_not(var_1_62 <= 127);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 63);
 assume_abort_if_not(var_1_63 <= 127);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 31);
 assume_abort_if_not(var_1_64 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_69 = var_1_69;
}
int property(void) {
 return (((((((((((((((((((((((((((var_1_2 < var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed short int) (((((10) > (var_1_4)) ? (10) : (var_1_4))) - var_1_5))) : (var_1_1 == ((signed short int) ((((var_1_5) > ((var_1_4 - var_1_6))) ? (var_1_5) : ((var_1_4 - var_1_6))))))) : (var_1_1 == ((signed short int) ((((((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) < ((((((var_1_7 + var_1_8)) > (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))))) ? ((var_1_7 + var_1_8)) : (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))))))) ? (((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))) : ((((((var_1_7 + var_1_8)) > (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9))))) ? ((var_1_7 + var_1_8)) : (((((var_1_5) < (var_1_9)) ? (var_1_5) : (var_1_9)))))))))))) && (var_1_36 ? (var_1_10 == ((signed short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : ((16 < var_1_7) ? (var_1_10 == ((signed short int) var_1_6)) : 1))) && ((var_1_5 > ((var_1_13 - 4) - var_1_6)) ? (var_1_12 == ((signed long int) (var_1_4 - var_1_13))) : (var_1_12 == ((signed long int) ((var_1_6 - var_1_13) + var_1_9))))) && ((var_1_58 < (((((var_1_58) < (var_1_24)) ? (var_1_58) : (var_1_24))) / var_1_16)) ? (var_1_14 == ((unsigned char) var_1_17)) : (var_1_14 == ((unsigned char) ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) > (var_1_18)) ? (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) : (var_1_18))))))) && ((var_1_5 > var_1_1) ? (var_1_19 == ((unsigned char) (var_1_20 + 25))) : (var_1_19 == ((unsigned char) var_1_18)))) && (var_1_36 ? (var_1_21 == ((signed long int) (25 + (var_1_20 - var_1_67)))) : (var_1_21 == ((signed long int) (((((var_1_4) < (2)) ? (var_1_4) : (2))) - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))))) && (var_1_22 == ((unsigned short int) (var_1_23 - var_1_53)))) && (((last_1_var_1_67 & last_1_var_1_19) >= var_1_6) ? (var_1_24 == ((double) (var_1_25 - ((3.9432158760839634E18 + var_1_26) - var_1_27)))) : ((var_1_26 >= (- var_1_25)) ? (var_1_24 == ((double) (var_1_27 + var_1_26))) : (var_1_24 == ((double) 0.2))))) && (var_1_68 ? ((var_1_17 < (~ 1)) ? (var_1_28 == ((signed char) ((var_1_29 - var_1_30) + var_1_31))) : 1) : ((((((var_1_26 - var_1_25) < 0 ) ? -(var_1_26 - var_1_25) : (var_1_26 - var_1_25))) <= (var_1_16 / var_1_32)) ? (var_1_28 == ((signed char) ((((var_1_30) < (0)) ? (var_1_30) : (0))))) : 1))) && ((! var_1_68) ? (var_1_33 == ((unsigned short int) (var_1_17 + var_1_29))) : 1)) && ((! var_1_68) ? (var_1_34 == ((signed short int) (var_1_30 - (var_1_18 + (var_1_35 - var_1_20))))) : 1)) && (((last_1_var_1_67 <= (var_1_7 * var_1_13)) || last_1_var_1_68) ? (var_1_36 == ((unsigned char) (last_1_var_1_68 || var_1_38))) : (var_1_36 == ((unsigned char) (((~ var_1_5) >= var_1_23) && var_1_39))))) && ((((((var_1_53) < (var_1_69)) ? (var_1_53) : (var_1_69))) <= var_1_13) ? (var_1_40 == ((float) ((var_1_27 - (var_1_41 + var_1_42)) + ((((((((var_1_43) > (var_1_26)) ? (var_1_43) : (var_1_26)))) > ((var_1_44 - var_1_45))) ? (((((var_1_43) > (var_1_26)) ? (var_1_43) : (var_1_26)))) : ((var_1_44 - var_1_45))))))) : (var_1_40 == ((float) (var_1_45 - var_1_42))))) && (((- var_1_22) <= var_1_1) ? ((var_1_56 > (var_1_56 / var_1_13)) ? (var_1_46 == ((signed long int) ((((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8))))) : (var_1_46 == ((signed long int) (((((((((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) > (-1)) ? (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) : (-1))) < 0 ) ? -((((((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) > (-1)) ? (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) : (-1))) : ((((((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) > (-1)) ? (((((var_1_22) < (var_1_18)) ? (var_1_22) : (var_1_18)))) : (-1)))))))) : (var_1_46 == ((signed long int) var_1_69)))) && ((var_1_29 == var_1_13) ? (((last_1_var_1_24 / var_1_16) == (((((- var_1_42)) < (var_1_44)) ? ((- var_1_42)) : (var_1_44)))) ? (var_1_49 == ((unsigned long int) ((((var_1_23) < (var_1_13)) ? (var_1_23) : (var_1_13))))) : (var_1_49 == ((unsigned long int) ((((var_1_29) > (last_1_var_1_1)) ? (var_1_29) : (last_1_var_1_1)))))) : (var_1_49 == ((unsigned long int) ((var_1_50 - ((((last_1_var_1_69) < (last_1_var_1_56)) ? (last_1_var_1_69) : (last_1_var_1_56)))) - var_1_6))))) && ((var_1_36 && (var_1_56 < var_1_21)) ? (var_1_51 == ((signed char) (((((var_1_30 - (var_1_29 + var_1_52))) < (var_1_31)) ? ((var_1_30 - (var_1_29 + var_1_52))) : (var_1_31))))) : (var_1_51 == ((signed char) (10 - (var_1_30 + var_1_52)))))) && (((var_1_24 <= var_1_26) || var_1_36) ? (var_1_53 == ((unsigned char) (var_1_54 - var_1_52))) : (var_1_53 == ((unsigned char) (1 + (var_1_29 + var_1_52)))))) && ((((var_1_5 + var_1_17) > (var_1_18 * -128)) && var_1_38) ? (var_1_55 == ((unsigned char) var_1_54)) : 1)) && ((var_1_10 <= var_1_50) ? (var_1_36 ? (var_1_56 == ((unsigned long int) ((((var_1_53) < (var_1_33)) ? (var_1_53) : (var_1_33))))) : (var_1_56 == ((unsigned long int) ((((((((var_1_14) < (8u)) ? (var_1_14) : (8u)))) > (var_1_10)) ? (((((var_1_14) < (8u)) ? (var_1_14) : (8u)))) : (var_1_10)))))) : (var_1_56 == ((unsigned long int) ((((var_1_29) > ((var_1_23 + var_1_33))) ? (var_1_29) : ((var_1_23 + var_1_33)))))))) && ((var_1_45 <= 32.125f) ? (var_1_57 == ((signed char) ((((((((var_1_30) < ((var_1_29 + var_1_31))) ? (var_1_30) : ((var_1_29 + var_1_31))))) > (var_1_52)) ? (((((var_1_30) < ((var_1_29 + var_1_31))) ? (var_1_30) : ((var_1_29 + var_1_31))))) : (var_1_52))))) : 1)) && (((- var_1_33) >= ((var_1_20 | var_1_30) * var_1_49)) ? ((25.2f <= var_1_27) ? (var_1_58 == ((double) (((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45))) - (var_1_60 - (var_1_26 - var_1_42))))) : (var_1_58 == ((double) var_1_45))) : 1)) && (var_1_68 ? (var_1_61 == ((unsigned char) ((((50) < (var_1_17)) ? (50) : (var_1_17))))) : (var_1_61 == ((unsigned char) ((var_1_62 - var_1_52) + (var_1_63 - (var_1_64 - 2))))))) && ((((((200.5f) < (var_1_43)) ? (200.5f) : (var_1_43))) > (((((var_1_60 - var_1_41)) > (var_1_42)) ? ((var_1_60 - var_1_41)) : (var_1_42)))) ? (var_1_65 == ((signed short int) (var_1_29 - var_1_64))) : (var_1_65 == ((signed short int) (var_1_19 + (256 - ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))))) && ((var_1_46 != var_1_67) ? ((var_1_32 >= var_1_44) ? (var_1_66 == ((float) (1000000.5f - var_1_60))) : (var_1_66 == ((float) ((((var_1_41) > ((var_1_26 + var_1_43))) ? (var_1_41) : ((var_1_26 + var_1_43))))))) : 1)) && (((var_1_23 + var_1_49) <= var_1_49) ? ((var_1_43 <= var_1_58) ? ((var_1_50 != var_1_52) ? (var_1_67 == ((signed long int) (var_1_17 + (var_1_12 + var_1_64)))) : (var_1_67 == ((signed long int) (var_1_64 + var_1_17)))) : (var_1_36 ? (var_1_67 == ((signed long int) var_1_49)) : (var_1_67 == ((signed long int) var_1_35)))) : (var_1_67 == ((signed long int) last_1_var_1_67)))) && (var_1_36 ? (var_1_68 == ((unsigned char) 1)) : (var_1_68 == ((unsigned char) var_1_38)))) && ((var_1_11 || (var_1_18 > (var_1_21 % var_1_63))) ? ((var_1_11 || var_1_36) ? (var_1_69 == ((signed long int) (var_1_64 + var_1_7))) : 1) : (var_1_69 == ((signed long int) var_1_61)))
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
