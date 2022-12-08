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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 4;
unsigned char var_1_6 = 1;
float var_1_7 = 127.25;
float var_1_8 = 128.5;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -128;
signed char var_1_15 = 2;
signed char var_1_16 = -100;
signed char var_1_17 = 4;
signed char var_1_18 = -5;
signed char var_1_19 = 10;
signed char var_1_20 = 2;
signed char var_1_21 = 25;
unsigned char var_1_22 = 128;
signed char var_1_23 = 32;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 4;
float var_1_28 = 63.75;
float var_1_29 = 0.0;
float var_1_30 = 10000000000000.625;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 200;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 8;
unsigned char var_1_35 = 16;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 2;
unsigned short int var_1_38 = 50;
unsigned short int var_1_39 = 26014;
unsigned short int var_1_40 = 10000;
unsigned short int var_1_41 = 10000;
signed short int var_1_42 = 8;
signed short int var_1_43 = 31564;
double var_1_44 = 25.3;
double var_1_45 = 15.625;
signed short int var_1_46 = 8;
unsigned short int var_1_47 = 5;
float var_1_48 = 1.75;
float var_1_49 = 25.6;
float var_1_50 = 9.75;
float var_1_51 = 8.625;
signed short int var_1_52 = 10;
unsigned short int var_1_53 = 5;
unsigned short int var_1_54 = 37100;
signed char var_1_56 = 4;
float var_1_57 = 1.5;
signed short int var_1_58 = 32;
signed long int var_1_59 = 10;
signed char var_1_61 = 2;
signed char var_1_62 = 4;
signed short int var_1_63 = -8;
signed long int var_1_64 = 32;
signed char var_1_65 = -128;
unsigned char var_1_66 = 0;
float var_1_67 = 1.4;
float var_1_68 = 16.4;
unsigned long int var_1_69 = 4;
signed long int var_1_70 = 0;
float var_1_71 = 2.65;
unsigned char last_1_var_1_6 = 1;
unsigned short int last_1_var_1_38 = 50;
signed long int last_1_var_1_59 = 10;
signed char last_1_var_1_65 = -128;
unsigned char last_1_var_1_66 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_21 <= ((last_1_var_1_38 * var_1_19) + (last_1_var_1_65 / var_1_23))) {
  var_1_22 = (var_1_24 - var_1_4);
 }
 if (var_1_35 < ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) {
  var_1_38 = ((var_1_39 + (var_1_40 + var_1_41)) - var_1_33);
 }
 unsigned char stepLocal_0 = last_1_var_1_6;
 if (last_1_var_1_66 && stepLocal_0) {
  var_1_1 = (var_1_4 + 5);
 } else {
  var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 }
 signed long int stepLocal_16 = -16;
 if (stepLocal_16 >= ((((var_1_23) < (var_1_1)) ? (var_1_23) : (var_1_1)))) {
  if (15.375f > var_1_30) {
   var_1_66 = var_1_26;
  }
 }
 signed long int stepLocal_7 = var_1_4 - var_1_37;
 if ((var_1_24 + var_1_1) != stepLocal_7) {
  var_1_45 = ((((var_1_30) > (var_1_7)) ? (var_1_30) : (var_1_7)));
 }
 var_1_46 = ((((-10000) > (-32)) ? (-10000) : (-32)));
 if (var_1_26) {
  var_1_52 = (var_1_40 - var_1_32);
 }
 if (var_1_39 >= var_1_52) {
  var_1_56 = (var_1_36 - ((((((((var_1_37) < (var_1_35)) ? (var_1_37) : (var_1_35)))) > (var_1_34)) ? (((((var_1_37) < (var_1_35)) ? (var_1_37) : (var_1_35)))) : (var_1_34))));
 } else {
  var_1_56 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 }
 if ((- (var_1_37 / var_1_39)) < (var_1_34 % ((((var_1_64) < (var_1_32)) ? (var_1_64) : (var_1_32))))) {
  var_1_63 = (var_1_34 - (var_1_37 + (var_1_24 + var_1_32)));
 }
 if (var_1_43 <= ((((var_1_36) > (var_1_20)) ? (var_1_36) : (var_1_20)))) {
  var_1_65 = ((var_1_21 + -4) + ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))));
 }
 if (var_1_12) {
  var_1_67 = var_1_51;
 }
 if (var_1_26) {
  var_1_68 = var_1_51;
 }
 var_1_70 = var_1_40;
 var_1_71 = var_1_50;
 if (var_1_68 < var_1_8) {
  var_1_14 = (var_1_4 - var_1_70);
 }
 unsigned char stepLocal_2 = var_1_16 >= var_1_14;
 if (stepLocal_2 || var_1_13) {
  var_1_25 = (var_1_13 && (! var_1_12));
 } else {
  if (var_1_12) {
   var_1_25 = (var_1_13 && var_1_26);
  }
 }
 if (var_1_68 <= var_1_30) {
  var_1_31 = ((var_1_32 - var_1_33) - (var_1_34 + var_1_35));
 } else {
  var_1_31 = ((var_1_34 + var_1_33) + (var_1_35 + ((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37)))));
 }
 if (var_1_35 > var_1_24) {
  var_1_42 = (var_1_40 - var_1_5);
 } else {
  var_1_42 = (((var_1_43 - var_1_35) - ((((var_1_63) < (var_1_4)) ? (var_1_63) : (var_1_4)))) - var_1_32);
 }
 signed short int stepLocal_8 = var_1_43;
 if (stepLocal_8 != (var_1_63 + (var_1_65 ^ var_1_5))) {
  var_1_47 = (var_1_32 + var_1_36);
 }
 signed long int stepLocal_15 = var_1_35 * var_1_63;
 unsigned short int stepLocal_14 = var_1_39;
 if (stepLocal_15 >= ((((var_1_47) < (var_1_4)) ? (var_1_47) : (var_1_4)))) {
  var_1_61 = (var_1_18 + (((((var_1_35 - var_1_33)) < (var_1_36)) ? ((var_1_35 - var_1_33)) : (var_1_36))));
 } else {
  if (stepLocal_14 > var_1_43) {
   var_1_61 = ((((var_1_20) < (var_1_34)) ? (var_1_20) : (var_1_34)));
  } else {
   var_1_61 = ((((16) < (var_1_62)) ? (16) : (var_1_62)));
  }
 }
 signed long int stepLocal_1 = - var_1_31;
 if (stepLocal_1 > (var_1_4 + var_1_63)) {
  var_1_15 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 } else {
  var_1_15 = (var_1_17 + ((((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))) > ((var_1_20 + var_1_21))) ? (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))) : ((var_1_20 + var_1_21)))));
 }
 unsigned char stepLocal_11 = var_1_31;
 signed char stepLocal_10 = var_1_15;
 if (var_1_49 < 16.25f) {
  var_1_53 = (var_1_54 - 4);
 } else {
  if ((var_1_36 << var_1_20) < stepLocal_10) {
   if (var_1_67 <= (- (var_1_49 / var_1_29))) {
    var_1_53 = ((((var_1_1) < (var_1_54)) ? (var_1_1) : (var_1_54)));
   } else {
    if (((var_1_35 - var_1_65) << var_1_17) < stepLocal_11) {
     var_1_53 = (var_1_33 + var_1_39);
    } else {
     var_1_53 = ((((((((var_1_54) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_54) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))))) < (200)) ? (((((var_1_54) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_54) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))))) : (200)));
    }
   }
  } else {
   var_1_53 = ((var_1_43 - var_1_35) + var_1_36);
  }
 }
 unsigned char stepLocal_13 = var_1_31;
 unsigned char stepLocal_12 = var_1_32;
 if ((50 | last_1_var_1_59) >= stepLocal_13) {
  var_1_59 = var_1_53;
 } else {
  if ((- var_1_36) > stepLocal_12) {
   var_1_59 = ((((var_1_52) < (var_1_1)) ? (var_1_52) : (var_1_1)));
  } else {
   var_1_59 = ((((var_1_38) < (var_1_15)) ? (var_1_38) : (var_1_15)));
  }
 }
 signed long int stepLocal_6 = (var_1_35 * var_1_22) % var_1_32;
 if (var_1_53 >= stepLocal_6) {
  if (var_1_71 >= var_1_8) {
   var_1_44 = ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)));
  }
 }
 if (var_1_8 >= ((((var_1_44) > (var_1_7)) ? (var_1_44) : (var_1_7)))) {
  var_1_27 = (var_1_24 + 32u);
 }
 var_1_58 = ((((((var_1_47) < (var_1_35)) ? (var_1_47) : (var_1_35))) + (var_1_24 + var_1_33)) - (var_1_36 + var_1_27));
 if ((var_1_29 + (var_1_7 - var_1_30)) == ((((5.62f) > ((var_1_44 + var_1_71))) ? (5.62f) : ((var_1_44 + var_1_71))))) {
  var_1_69 = var_1_56;
 } else {
  var_1_69 = var_1_37;
 }
 signed long int stepLocal_5 = 256;
 unsigned char stepLocal_4 = var_1_66;
 unsigned char stepLocal_3 = var_1_22;
 if (stepLocal_4 && ((var_1_22 ^ var_1_59) <= var_1_5)) {
  if (stepLocal_5 >= var_1_22) {
   var_1_28 = ((var_1_29 - var_1_30) - var_1_7);
  } else {
   if (var_1_24 < stepLocal_3) {
    var_1_28 = var_1_7;
   }
  }
 } else {
  var_1_28 = var_1_7;
 }
 signed long int stepLocal_9 = var_1_58 - ((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33)));
 if (stepLocal_9 <= (var_1_18 + var_1_1)) {
  var_1_48 = ((((var_1_30) < ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) + var_1_51))) ? (var_1_30) : ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) + var_1_51))));
 }
 if (var_1_17 < (var_1_32 * (~ var_1_69))) {
  if (var_1_13 || ((var_1_31 / 2u) == var_1_58)) {
   if (var_1_7 >= (var_1_30 - ((((var_1_29) < (var_1_8)) ? (var_1_29) : (var_1_8))))) {
    var_1_57 = (((((var_1_50 + var_1_30)) > (var_1_49)) ? ((var_1_50 + var_1_30)) : (var_1_49)));
   }
  } else {
   var_1_57 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  }
 }
 if (((var_1_7 + 100000.5f) - var_1_8) > (var_1_45 + var_1_57)) {
  if (var_1_8 > var_1_45) {
   var_1_6 = (var_1_11 || (var_1_66 && var_1_12));
  } else {
   if (var_1_8 != var_1_57) {
    var_1_6 = 1;
   } else {
    var_1_6 = var_1_11;
   }
  }
 } else {
  var_1_6 = var_1_13;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427387900e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -126);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -31);
 assume_abort_if_not(var_1_20 <= 32);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -31);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -128);
 assume_abort_if_not(var_1_23 <= 127);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 4611686.018427382800e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 190);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 64);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 16383);
 assume_abort_if_not(var_1_39 <= 32767);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 8192);
 assume_abort_if_not(var_1_40 <= 16384);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 8192);
 assume_abort_if_not(var_1_41 <= 16383);
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= 24574);
 assume_abort_if_not(var_1_43 <= 32766);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -461168.6018427382800e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -461168.6018427382800e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 32767);
 assume_abort_if_not(var_1_54 <= 65534);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -127);
 assume_abort_if_not(var_1_62 <= 126);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= -2147483648);
 assume_abort_if_not(var_1_64 <= 2147483647);
 assume_abort_if_not(var_1_64 != 0);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_66 = var_1_66;
}
int property() {
 return (((((((((((((((((((((((((((((((last_1_var_1_66 && last_1_var_1_6) ? (var_1_1 == ((unsigned char) (var_1_4 + 5))) : (var_1_1 == ((unsigned char) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))) && ((((var_1_7 + 100000.5f) - var_1_8) > (var_1_45 + var_1_57)) ? ((var_1_8 > var_1_45) ? (var_1_6 == ((unsigned char) (var_1_11 || (var_1_66 && var_1_12)))) : ((var_1_8 != var_1_57) ? (var_1_6 == ((unsigned char) 1)) : (var_1_6 == ((unsigned char) var_1_11)))) : (var_1_6 == ((unsigned char) var_1_13)))) && ((var_1_68 < var_1_8) ? (var_1_14 == ((signed short int) (var_1_4 - var_1_70))) : 1)) && (((- var_1_31) > (var_1_4 + var_1_63)) ? (var_1_15 == ((signed char) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : (var_1_15 == ((signed char) (var_1_17 + ((((((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))) > ((var_1_20 + var_1_21))) ? (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)))) : ((var_1_20 + var_1_21))))))))) && ((var_1_21 <= ((last_1_var_1_38 * var_1_19) + (last_1_var_1_65 / var_1_23))) ? (var_1_22 == ((unsigned char) (var_1_24 - var_1_4))) : 1)) && (((var_1_16 >= var_1_14) || var_1_13) ? (var_1_25 == ((unsigned char) (var_1_13 && (! var_1_12)))) : (var_1_12 ? (var_1_25 == ((unsigned char) (var_1_13 && var_1_26))) : 1))) && ((var_1_8 >= ((((var_1_44) > (var_1_7)) ? (var_1_44) : (var_1_7)))) ? (var_1_27 == ((unsigned long int) (var_1_24 + 32u))) : 1)) && ((var_1_66 && ((var_1_22 ^ var_1_59) <= var_1_5)) ? ((256 >= var_1_22) ? (var_1_28 == ((float) ((var_1_29 - var_1_30) - var_1_7))) : ((var_1_24 < var_1_22) ? (var_1_28 == ((float) var_1_7)) : 1)) : (var_1_28 == ((float) var_1_7)))) && ((var_1_68 <= var_1_30) ? (var_1_31 == ((unsigned char) ((var_1_32 - var_1_33) - (var_1_34 + var_1_35)))) : (var_1_31 == ((unsigned char) ((var_1_34 + var_1_33) + (var_1_35 + ((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))))))))) && ((var_1_35 < ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) ? (var_1_38 == ((unsigned short int) ((var_1_39 + (var_1_40 + var_1_41)) - var_1_33))) : 1)) && ((var_1_35 > var_1_24) ? (var_1_42 == ((signed short int) (var_1_40 - var_1_5))) : (var_1_42 == ((signed short int) (((var_1_43 - var_1_35) - ((((var_1_63) < (var_1_4)) ? (var_1_63) : (var_1_4)))) - var_1_32))))) && ((var_1_53 >= ((var_1_35 * var_1_22) % var_1_32)) ? ((var_1_71 >= var_1_8) ? (var_1_44 == ((double) ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))))) : 1) : 1)) && (((var_1_24 + var_1_1) != (var_1_4 - var_1_37)) ? (var_1_45 == ((double) ((((var_1_30) > (var_1_7)) ? (var_1_30) : (var_1_7))))) : 1)) && (var_1_46 == ((signed short int) ((((-10000) > (-32)) ? (-10000) : (-32)))))) && ((var_1_43 != (var_1_63 + (var_1_65 ^ var_1_5))) ? (var_1_47 == ((unsigned short int) (var_1_32 + var_1_36))) : 1)) && (((var_1_58 - ((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33)))) <= (var_1_18 + var_1_1)) ? (var_1_48 == ((float) ((((var_1_30) < ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) + var_1_51))) ? (var_1_30) : ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) + var_1_51)))))) : 1)) && (var_1_26 ? (var_1_52 == ((signed short int) (var_1_40 - var_1_32))) : 1)) && ((var_1_49 < 16.25f) ? (var_1_53 == ((unsigned short int) (var_1_54 - 4))) : (((var_1_36 << var_1_20) < var_1_15) ? ((var_1_67 <= (- (var_1_49 / var_1_29))) ? (var_1_53 == ((unsigned short int) ((((var_1_1) < (var_1_54)) ? (var_1_1) : (var_1_54))))) : ((((var_1_35 - var_1_65) << var_1_17) < var_1_31) ? (var_1_53 == ((unsigned short int) (var_1_33 + var_1_39))) : (var_1_53 == ((unsigned short int) ((((((((var_1_54) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_54) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))))) < (200)) ? (((((var_1_54) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_54) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))))) : (200))))))) : (var_1_53 == ((unsigned short int) ((var_1_43 - var_1_35) + var_1_36)))))) && ((var_1_39 >= var_1_52) ? (var_1_56 == ((signed char) (var_1_36 - ((((((((var_1_37) < (var_1_35)) ? (var_1_37) : (var_1_35)))) > (var_1_34)) ? (((((var_1_37) < (var_1_35)) ? (var_1_37) : (var_1_35)))) : (var_1_34)))))) : (var_1_56 == ((signed char) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) && ((var_1_17 < (var_1_32 * (~ var_1_69))) ? ((var_1_13 || ((var_1_31 / 2u) == var_1_58)) ? ((var_1_7 >= (var_1_30 - ((((var_1_29) < (var_1_8)) ? (var_1_29) : (var_1_8))))) ? (var_1_57 == ((float) (((((var_1_50 + var_1_30)) > (var_1_49)) ? ((var_1_50 + var_1_30)) : (var_1_49))))) : 1) : (var_1_57 == ((float) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))) : 1)) && (var_1_58 == ((signed short int) ((((((var_1_47) < (var_1_35)) ? (var_1_47) : (var_1_35))) + (var_1_24 + var_1_33)) - (var_1_36 + var_1_27))))) && (((50 | last_1_var_1_59) >= var_1_31) ? (var_1_59 == ((signed long int) var_1_53)) : (((- var_1_36) > var_1_32) ? (var_1_59 == ((signed long int) ((((var_1_52) < (var_1_1)) ? (var_1_52) : (var_1_1))))) : (var_1_59 == ((signed long int) ((((var_1_38) < (var_1_15)) ? (var_1_38) : (var_1_15)))))))) && (((var_1_35 * var_1_63) >= ((((var_1_47) < (var_1_4)) ? (var_1_47) : (var_1_4)))) ? (var_1_61 == ((signed char) (var_1_18 + (((((var_1_35 - var_1_33)) < (var_1_36)) ? ((var_1_35 - var_1_33)) : (var_1_36)))))) : ((var_1_39 > var_1_43) ? (var_1_61 == ((signed char) ((((var_1_20) < (var_1_34)) ? (var_1_20) : (var_1_34))))) : (var_1_61 == ((signed char) ((((16) < (var_1_62)) ? (16) : (var_1_62)))))))) && (((- (var_1_37 / var_1_39)) < (var_1_34 % ((((var_1_64) < (var_1_32)) ? (var_1_64) : (var_1_32))))) ? (var_1_63 == ((signed short int) (var_1_34 - (var_1_37 + (var_1_24 + var_1_32))))) : 1)) && ((var_1_43 <= ((((var_1_36) > (var_1_20)) ? (var_1_36) : (var_1_20)))) ? (var_1_65 == ((signed char) ((var_1_21 + -4) + ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))))) : 1)) && ((-16 >= ((((var_1_23) < (var_1_1)) ? (var_1_23) : (var_1_1)))) ? ((15.375f > var_1_30) ? (var_1_66 == ((unsigned char) var_1_26)) : 1) : 1)) && (var_1_12 ? (var_1_67 == ((float) var_1_51)) : 1)) && (var_1_26 ? (var_1_68 == ((float) var_1_51)) : 1)) && (((var_1_29 + (var_1_7 - var_1_30)) == ((((5.62f) > ((var_1_44 + var_1_71))) ? (5.62f) : ((var_1_44 + var_1_71))))) ? (var_1_69 == ((unsigned long int) var_1_56)) : (var_1_69 == ((unsigned long int) var_1_37)))) && (var_1_70 == ((signed long int) var_1_40))) && (var_1_71 == ((float) var_1_50))
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
