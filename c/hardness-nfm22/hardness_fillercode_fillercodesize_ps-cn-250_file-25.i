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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
signed short int var_1_5 = -256;
double var_1_7 = 256.25;
double var_1_8 = 127.8;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
float var_1_12 = 999.75;
float var_1_13 = 64.5;
float var_1_14 = 127.25;
signed char var_1_15 = -32;
float var_1_16 = 32.7;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 32;
unsigned short int var_1_19 = 5;
signed long int var_1_21 = 100;
signed short int var_1_22 = 50;
double var_1_23 = 1000000.75;
unsigned long int var_1_24 = 16;
unsigned char var_1_25 = 1;
unsigned long int var_1_26 = 64;
unsigned long int var_1_27 = 4;
double var_1_28 = 15.5;
double var_1_29 = 256.7;
unsigned long int var_1_30 = 5;
unsigned char var_1_31 = 0;
signed long int var_1_32 = 32;
signed long int var_1_33 = -5;
signed long int var_1_34 = -2;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed long int var_1_37 = 1;
signed long int var_1_38 = -256;
signed long int var_1_39 = 4;
signed long int var_1_40 = -2;
signed long int var_1_41 = 256;
signed long int var_1_42 = 128;
signed short int var_1_43 = -4;
signed short int var_1_44 = 8;
signed short int var_1_45 = -50;
unsigned short int var_1_46 = 50;
double var_1_47 = 31.6;
unsigned short int var_1_48 = 16;
unsigned short int var_1_49 = 0;
unsigned short int var_1_50 = 8;
signed long int var_1_51 = -16;
unsigned long int var_1_52 = 1;
signed char var_1_53 = -32;
signed char var_1_54 = -4;
signed char var_1_55 = -64;
float var_1_56 = 24.5;
unsigned short int var_1_57 = 256;
float var_1_58 = 256.5;
double var_1_59 = 128.5;
double var_1_60 = 99.25;
float var_1_61 = 5.25;
unsigned short int var_1_62 = 10;
unsigned long int var_1_63 = 5;
unsigned long int var_1_64 = 2703583437;
double var_1_65 = 16.8;
signed short int var_1_66 = 4;
double var_1_67 = 31.75;
unsigned long int var_1_68 = 10;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 1;
signed short int var_1_71 = 2;
signed short int var_1_72 = -1;
signed short int var_1_73 = -2;
unsigned short int var_1_74 = 100;
unsigned short int var_1_75 = 56249;
float var_1_76 = 4.8;
signed long int var_1_77 = 16;
unsigned short int var_1_78 = 8;
signed short int var_1_79 = -64;
float var_1_80 = 64.6;
signed short int var_1_81 = -32;
unsigned short int var_1_82 = 200;
unsigned short int var_1_83 = 63755;
signed long int var_1_84 = 1;
double var_1_85 = 8.5;
unsigned short int var_1_86 = 500;
unsigned short int var_1_87 = 1;
signed long int last_1_var_1_1 = -256;
signed short int last_1_var_1_5 = -256;
unsigned char last_1_var_1_10 = 0;
unsigned short int last_1_var_1_19 = 5;
signed short int last_1_var_1_22 = 50;
void initially(void) {
}
void step(void) {
 if (var_1_25) {
  var_1_24 = ((((var_1_26 + var_1_27) < 0 ) ? -(var_1_26 + var_1_27) : (var_1_26 + var_1_27)));
 }
 if (var_1_24 < var_1_27) {
  if (var_1_27 < (var_1_24 ^ var_1_26)) {
   var_1_28 = ((((2.75) < 0 ) ? -(2.75) : (2.75)));
  }
 } else {
  if (var_1_25 || (var_1_26 <= var_1_27)) {
   if (var_1_25) {
    var_1_28 = (((((((var_1_29) > (4.2)) ? (var_1_29) : (4.2))) < 0 ) ? -((((var_1_29) > (4.2)) ? (var_1_29) : (4.2))) : ((((var_1_29) > (4.2)) ? (var_1_29) : (4.2)))));
   }
  }
 }
 if (var_1_25 || var_1_31) {
  var_1_30 = (var_1_26 + var_1_27);
 } else {
  var_1_30 = var_1_26;
 }
 if (var_1_29 > var_1_28) {
  if ((var_1_26 + var_1_27) > var_1_24) {
   var_1_32 = var_1_33;
  } else {
   if ((- var_1_29) <= var_1_28) {
    var_1_32 = var_1_33;
   } else {
    var_1_32 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
   }
  }
 }
 if (var_1_26 >= var_1_30) {
  var_1_35 = 0;
 } else {
  var_1_35 = (! var_1_36);
 }
 var_1_37 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 if (var_1_37 != (((((10000000 * var_1_27)) > ((~ var_1_39))) ? ((10000000 * var_1_27)) : ((~ var_1_39))))) {
  var_1_38 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 } else {
  if (var_1_26 >= ((var_1_30 & var_1_24) | var_1_27)) {
   var_1_38 = ((((((((var_1_40) < (var_1_34)) ? (var_1_40) : (var_1_34)))) < ((var_1_41 - var_1_42))) ? (((((var_1_40) < (var_1_34)) ? (var_1_40) : (var_1_34)))) : ((var_1_41 - var_1_42))));
  } else {
   if (var_1_32 == var_1_37) {
    var_1_38 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
   }
  }
 }
 if (var_1_42 < 1000000) {
  var_1_43 = ((((var_1_44) < (var_1_45)) ? (var_1_44) : (var_1_45)));
 }
 if (((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) > var_1_47) {
  var_1_46 = var_1_48;
 } else {
  if (var_1_26 >= var_1_39) {
   var_1_46 = ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)));
  } else {
   var_1_46 = (var_1_49 + var_1_50);
  }
 }
 if (var_1_38 >= -256) {
  var_1_51 = var_1_49;
 }
 if (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) > (var_1_50 << var_1_43)) {
  var_1_52 = ((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) + var_1_50) + var_1_27);
 }
 if (var_1_47 >= ((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29)))) {
  if (var_1_24 <= var_1_26) {
   var_1_53 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
  }
 }
 if (16 > var_1_32) {
  var_1_55 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
 }
 if ((var_1_27 % var_1_57) <= var_1_42) {
  var_1_56 = ((((var_1_29) > (7.4399999999999995f)) ? (var_1_29) : (7.4399999999999995f)));
 }
 if (var_1_29 < ((((var_1_47) > ((var_1_59 - var_1_60))) ? (var_1_47) : ((var_1_59 - var_1_60))))) {
  if (var_1_52 > var_1_46) {
   var_1_58 = ((((((((64.62f + var_1_61) < 0 ) ? -(64.62f + var_1_61) : (64.62f + var_1_61)))) < (var_1_29)) ? (((((64.62f + var_1_61) < 0 ) ? -(64.62f + var_1_61) : (64.62f + var_1_61)))) : (var_1_29)));
  }
 }
 if (var_1_55 < var_1_24) {
  if (var_1_58 > var_1_29) {
   var_1_62 = var_1_50;
  }
 } else {
  var_1_62 = (((((((5) > (var_1_50)) ? (5) : (var_1_50))) < 0 ) ? -((((5) > (var_1_50)) ? (5) : (var_1_50))) : ((((5) > (var_1_50)) ? (5) : (var_1_50)))));
 }
 if (var_1_28 <= var_1_47) {
  var_1_63 = (var_1_64 - (((((1868299145u) < 0 ) ? -(1868299145u) : (1868299145u))) - var_1_49));
 }
 if (var_1_66 <= (((((-2) < 0 ) ? -(-2) : (-2))) % var_1_57)) {
  var_1_65 = ((((var_1_61 + var_1_67) < 0 ) ? -(var_1_61 + var_1_67) : (var_1_61 + var_1_67)));
 } else {
  if (var_1_35) {
   var_1_65 = var_1_29;
  }
 }
 if (var_1_25) {
  var_1_68 = 25u;
 } else {
  var_1_68 = var_1_49;
 }
 if (var_1_56 >= var_1_59) {
  var_1_69 = (! (var_1_36 && var_1_70));
 }
 if ((var_1_72 & var_1_51) > (var_1_53 >> var_1_27)) {
  var_1_71 = (((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) < 0 ) ? -((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) : ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))));
 } else {
  var_1_71 = -50;
 }
 if (var_1_64 < (((((var_1_62 & var_1_51)) < (var_1_32)) ? ((var_1_62 & var_1_51)) : (var_1_32)))) {
  var_1_73 = ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)));
 }
 if (var_1_52 >= (5u ^ (var_1_64 - var_1_46))) {
  if (var_1_32 >= var_1_63) {
   var_1_74 = ((((var_1_50) > ((((((var_1_75) < 0 ) ? -(var_1_75) : (var_1_75))) - var_1_49))) ? (var_1_50) : ((((((var_1_75) < 0 ) ? -(var_1_75) : (var_1_75))) - var_1_49))));
  }
 } else {
  if (((var_1_58 / var_1_76) + var_1_65) < ((((((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) > ((- var_1_29))) ? (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) : ((- var_1_29))))) {
   var_1_74 = ((((var_1_49) > (var_1_75)) ? (var_1_49) : (var_1_75)));
  }
 }
 if ((var_1_51 % -64) > 64) {
  var_1_77 = (var_1_62 + var_1_50);
 } else {
  var_1_77 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
 }
 if ((~ var_1_51) <= (var_1_62 + -4)) {
  if (var_1_53 <= var_1_34) {
   var_1_78 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
  }
 } else {
  var_1_78 = (var_1_50 + var_1_49);
 }
 if (((-8 % -100) | var_1_24) < (var_1_42 + 16u)) {
  var_1_79 = (((((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) < 0 ) ? -((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) : ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))));
 } else {
  if (var_1_42 <= (-2 ^ -64)) {
   var_1_79 = ((((var_1_53) > (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (var_1_53) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))));
  }
 }
 if (var_1_46 >= ((var_1_26 * 256) % var_1_57)) {
  var_1_80 = var_1_67;
 } else {
  var_1_80 = ((((var_1_67 + var_1_61) < 0 ) ? -(var_1_67 + var_1_61) : (var_1_67 + var_1_61)));
 }
 if ((var_1_79 >> var_1_32) <= var_1_62) {
  var_1_81 = ((var_1_55 + var_1_53) + var_1_54);
 }
 if (var_1_44 >= ((var_1_40 >> var_1_49) | var_1_78)) {
  if (var_1_70) {
   var_1_82 = (((((((var_1_75) < (var_1_50)) ? (var_1_75) : (var_1_50))) < 0 ) ? -((((var_1_75) < (var_1_50)) ? (var_1_75) : (var_1_50))) : ((((var_1_75) < (var_1_50)) ? (var_1_75) : (var_1_50)))));
  } else {
   var_1_82 = (((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83))) - var_1_50);
  }
 }
 var_1_84 = ((((((((var_1_73) < (var_1_54)) ? (var_1_73) : (var_1_54)))) > (var_1_40)) ? (((((var_1_73) < (var_1_54)) ? (var_1_73) : (var_1_54)))) : (var_1_40)));
 if (var_1_28 < ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) {
  if (var_1_31) {
   var_1_85 = var_1_67;
  }
 }
 if (var_1_31) {
  if (var_1_29 < ((((var_1_60) < (((((var_1_67) > (127.375)) ? (var_1_67) : (127.375))))) ? (var_1_60) : (((((var_1_67) > (127.375)) ? (var_1_67) : (127.375))))))) {
   if (var_1_47 <= var_1_65) {
    var_1_86 = var_1_48;
   } else {
    var_1_86 = var_1_87;
   }
  } else {
   var_1_86 = var_1_50;
  }
 }
 signed long int stepLocal_2 = last_1_var_1_5;
 unsigned char stepLocal_1 = last_1_var_1_10;
 signed long int stepLocal_0 = 256;
 if (stepLocal_1 && (last_1_var_1_5 >= last_1_var_1_1)) {
  if (stepLocal_0 != last_1_var_1_5) {
   var_1_1 = (last_1_var_1_1 + last_1_var_1_5);
  }
 } else {
  if (last_1_var_1_1 >= stepLocal_2) {
   var_1_1 = last_1_var_1_5;
  } else {
   var_1_1 = last_1_var_1_1;
  }
 }
 var_1_10 = (last_1_var_1_10 && var_1_11);
 if (var_1_8 != ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) {
  if (var_1_10) {
   var_1_17 = var_1_18;
  }
 }
 var_1_22 = last_1_var_1_22;
 var_1_23 = var_1_14;
 unsigned char stepLocal_5 = var_1_10;
 unsigned char stepLocal_4 = var_1_18;
 if (var_1_22 < stepLocal_4) {
  var_1_19 = last_1_var_1_19;
 } else {
  if ((var_1_10 || var_1_10) || stepLocal_5) {
   var_1_19 = last_1_var_1_19;
  } else {
   var_1_19 = var_1_22;
  }
 }
 var_1_21 = var_1_22;
 if (! (var_1_23 <= var_1_7)) {
  var_1_12 = ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)));
 } else {
  if ((((((var_1_1) > (var_1_17)) ? (var_1_1) : (var_1_17))) / var_1_15) < var_1_19) {
   var_1_12 = var_1_13;
  } else {
   var_1_12 = (var_1_16 + 49.6f);
  }
 }
 unsigned char stepLocal_3 = var_1_10;
 if (var_1_10 && stepLocal_3) {
  var_1_5 = ((((var_1_19) < (-100)) ? (var_1_19) : (-100)));
 } else {
  if ((var_1_7 - var_1_8) > var_1_12) {
   var_1_5 = var_1_19;
  } else {
   var_1_5 = var_1_19;
  }
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -128);
 assume_abort_if_not(var_1_15 <= 127);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483647);
 assume_abort_if_not(var_1_33 <= 2147483646);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483646);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= -2147483648);
 assume_abort_if_not(var_1_39 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -2147483647);
 assume_abort_if_not(var_1_40 <= 2147483646);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= -1);
 assume_abort_if_not(var_1_41 <= 2147483646);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 2147483646);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= -32767);
 assume_abort_if_not(var_1_44 <= 32766);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= -32767);
 assume_abort_if_not(var_1_45 <= 32766);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 32767);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 32767);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -126);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 65535);
 assume_abort_if_not(var_1_57 != 0);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 2147483647);
 assume_abort_if_not(var_1_64 <= 4294967294);
 var_1_66 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_66 >= -32768);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= -461168.6018427382800e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_72 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_72 >= -32768);
 assume_abort_if_not(var_1_72 <= 32767);
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 32767);
 assume_abort_if_not(var_1_75 <= 65534);
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= -922337.2036854776000e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854776000e+12F && var_1_76 >= 1.0e-20F ));
 assume_abort_if_not(var_1_76 != 0.0F);
 var_1_83 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_83 >= 32767);
 assume_abort_if_not(var_1_83 <= 65534);
 var_1_87 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_87 >= 0);
 assume_abort_if_not(var_1_87 <= 65534);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_5 = var_1_5;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((((((last_1_var_1_10 && (last_1_var_1_5 >= last_1_var_1_1)) ? ((256 != last_1_var_1_5) ? (var_1_1 == ((signed long int) (last_1_var_1_1 + last_1_var_1_5))) : 1) : ((last_1_var_1_1 >= last_1_var_1_5) ? (var_1_1 == ((signed long int) last_1_var_1_5)) : (var_1_1 == ((signed long int) last_1_var_1_1)))) && ((var_1_10 && var_1_10) ? (var_1_5 == ((signed short int) ((((var_1_19) < (-100)) ? (var_1_19) : (-100))))) : (((var_1_7 - var_1_8) > var_1_12) ? (var_1_5 == ((signed short int) var_1_19)) : (var_1_5 == ((signed short int) var_1_19))))) && (var_1_10 == ((unsigned char) (last_1_var_1_10 && var_1_11)))) && ((! (var_1_23 <= var_1_7)) ? (var_1_12 == ((float) ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) : (((((((var_1_1) > (var_1_17)) ? (var_1_1) : (var_1_17))) / var_1_15) < var_1_19) ? (var_1_12 == ((float) var_1_13)) : (var_1_12 == ((float) (var_1_16 + 49.6f)))))) && ((var_1_8 != ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) ? (var_1_10 ? (var_1_17 == ((unsigned char) var_1_18)) : 1) : 1)) && ((var_1_22 < var_1_18) ? (var_1_19 == ((unsigned short int) last_1_var_1_19)) : (((var_1_10 || var_1_10) || var_1_10) ? (var_1_19 == ((unsigned short int) last_1_var_1_19)) : (var_1_19 == ((unsigned short int) var_1_22))))) && (var_1_21 == ((signed long int) var_1_22))) && (var_1_22 == ((signed short int) last_1_var_1_22))) && (var_1_23 == ((double) var_1_14))
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
