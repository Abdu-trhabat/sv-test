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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 63.6;
float var_1_4 = 128.75;
float var_1_5 = 25.125;
float var_1_6 = 1000000.75;
unsigned char var_1_7 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
float var_1_15 = 25.75;
double var_1_16 = 0.4;
double var_1_17 = 0.0;
double var_1_18 = 0.0;
double var_1_19 = 1000000000000.5;
double var_1_20 = 24.8;
signed char var_1_21 = 1;
double var_1_22 = 200.8;
unsigned short int var_1_23 = 40076;
unsigned short int var_1_24 = 8;
unsigned long int var_1_25 = 2;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -256;
signed short int var_1_28 = 64;
signed long int var_1_29 = -10;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
float var_1_33 = 10.775;
signed long int var_1_34 = -25;
signed long int var_1_35 = -2;
float var_1_36 = 9999.1;
float var_1_37 = 64.625;
float var_1_38 = 7.5;
float var_1_39 = 4.3;
float var_1_40 = 8.25;
unsigned long int var_1_41 = 256;
unsigned long int var_1_42 = 1;
unsigned long int var_1_43 = 128;
unsigned long int var_1_44 = 64;
unsigned long int var_1_45 = 4000471422;
unsigned char var_1_46 = 50;
signed short int var_1_47 = 64;
signed short int var_1_48 = 1;
signed short int var_1_49 = 256;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 4;
signed long int var_1_52 = 8;
float var_1_53 = 25.92;
signed char var_1_54 = -4;
signed char var_1_55 = 32;
signed char var_1_56 = 32;
unsigned char var_1_57 = 10;
float var_1_58 = 100000000000000.75;
float var_1_59 = 8.6;
unsigned char var_1_60 = 5;
float var_1_61 = 3.6;
float var_1_62 = 7.5;
unsigned char var_1_63 = 0;
unsigned short int var_1_64 = 8;
unsigned short int var_1_65 = 38488;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 128;
unsigned char var_1_68 = 1;
signed char var_1_69 = -4;
float var_1_70 = 0.25;
unsigned long int var_1_71 = 0;
unsigned short int var_1_72 = 10000;
float var_1_73 = 127.4;
float var_1_74 = 9.6;
float var_1_75 = 8.45;
float var_1_76 = 15.25;
unsigned char var_1_77 = 1;
signed short int var_1_78 = -2;
unsigned char var_1_79 = 1;
signed short int var_1_80 = -4;
signed short int var_1_81 = 2;
unsigned char var_1_82 = 0;
unsigned short int var_1_83 = 2;
signed char var_1_84 = 2;
unsigned long int var_1_85 = 4;
unsigned long int var_1_86 = 4;
unsigned short int var_1_87 = 2;
double var_1_88 = -0.6;
signed short int var_1_89 = -256;
signed short int var_1_90 = -32;
signed short int var_1_91 = 64;
double last_1_var_1_22 = 200.8;
void initially(void) {
}
void step(void) {
 if ((var_1_27 % var_1_28) >= var_1_29) {
  var_1_26 = (var_1_30 || var_1_31);
 } else {
  var_1_26 = (var_1_30 && (var_1_31 && var_1_32));
 }
 if ((var_1_27 ^ (var_1_28 + var_1_29)) <= (((((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))) < 0 ) ? -((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))) : ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))))) {
  var_1_33 = (((((((((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))) < (var_1_38)) ? (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))) : (var_1_38))) < 0 ) ? -((((((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))) < (var_1_38)) ? (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))) : (var_1_38))) : ((((((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))) < (var_1_38)) ? (((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37)))) : (var_1_38)))));
 } else {
  if (var_1_38 >= ((((var_1_37) > ((var_1_36 * var_1_39))) ? (var_1_37) : ((var_1_36 * var_1_39))))) {
   if (var_1_31) {
    var_1_33 = var_1_40;
   }
  }
 }
 if ((var_1_29 & var_1_42) <= var_1_43) {
  if (var_1_38 <= var_1_33) {
   if (! var_1_31) {
    var_1_41 = var_1_44;
   } else {
    var_1_41 = (((((((var_1_45 - 100u) < 0 ) ? -(var_1_45 - 100u) : (var_1_45 - 100u))) < 0 ) ? -((((var_1_45 - 100u) < 0 ) ? -(var_1_45 - 100u) : (var_1_45 - 100u))) : ((((var_1_45 - 100u) < 0 ) ? -(var_1_45 - 100u) : (var_1_45 - 100u)))));
   }
  }
 }
 if (var_1_42 < var_1_43) {
  if ((var_1_47 - (var_1_48 + var_1_49)) <= var_1_29) {
   var_1_46 = ((((((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) < 0 ) ? -((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) : ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))) - var_1_51);
  }
 } else {
  if (var_1_32 || ((~ var_1_48) > var_1_34)) {
   var_1_46 = ((((((((128) < (var_1_50)) ? (128) : (var_1_50))) < 0 ) ? -((((128) < (var_1_50)) ? (128) : (var_1_50))) : ((((128) < (var_1_50)) ? (128) : (var_1_50))))) - 8);
  }
 }
 if (var_1_51 <= var_1_46) {
  if (var_1_51 >= ((((var_1_35) > (var_1_28)) ? (var_1_35) : (var_1_28)))) {
   var_1_52 = ((((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) < 0 ) ? -((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) : ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) < 0 ) ? -(((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) < 0 ) ? -((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) : ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) : (((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) < 0 ) ? -((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) : ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))))));
  }
 }
 var_1_53 = var_1_36;
 if (! var_1_30) {
  var_1_54 = (var_1_55 - var_1_56);
 } else {
  var_1_54 = var_1_55;
 }
 if ((var_1_58 - var_1_59) > var_1_37) {
  if (var_1_59 >= var_1_36) {
   if ((~ var_1_44) < var_1_41) {
    var_1_57 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
   } else {
    var_1_57 = ((((var_1_56) < ((((((var_1_50 - var_1_51)) < (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))))) ? ((var_1_50 - var_1_51)) : (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))))))) ? (var_1_56) : ((((((var_1_50 - var_1_51)) < (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))))) ? ((var_1_50 - var_1_51)) : (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))))))));
   }
  }
 } else {
  if ((0.8f / ((((var_1_61) > (var_1_62)) ? (var_1_61) : (var_1_62)))) > (var_1_53 + var_1_40)) {
   if (((((25.2f) > (var_1_59)) ? (25.2f) : (var_1_59))) <= (var_1_38 + var_1_37)) {
    var_1_57 = (((((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))) < 0 ) ? -((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))) : ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))));
   }
  }
 }
 if (var_1_56 >= var_1_28) {
  var_1_63 = (var_1_26 && (! var_1_31));
 }
 if (var_1_48 > var_1_41) {
  var_1_64 = (((((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_51)) < ((((((((var_1_57) < (var_1_56)) ? (var_1_57) : (var_1_56))) < 0 ) ? -((((var_1_57) < (var_1_56)) ? (var_1_57) : (var_1_56))) : ((((var_1_57) < (var_1_56)) ? (var_1_57) : (var_1_56))))))) ? ((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_51)) : ((((((((var_1_57) < (var_1_56)) ? (var_1_57) : (var_1_56))) < 0 ) ? -((((var_1_57) < (var_1_56)) ? (var_1_57) : (var_1_56))) : ((((var_1_57) < (var_1_56)) ? (var_1_57) : (var_1_56))))))));
 }
 if ((~ var_1_29) < var_1_56) {
  var_1_66 = (! ((! var_1_32) && (var_1_31 && var_1_68)));
 } else {
  var_1_66 = (! var_1_32);
 }
 if (var_1_63) {
  if (! var_1_26) {
   if (var_1_55 > (~ (1 + -128))) {
    var_1_69 = var_1_56;
   }
  }
 }
 if (var_1_68) {
  var_1_70 = ((((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) < (var_1_37)) ? (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) : (var_1_37)));
 }
 if (-2 > ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) {
  if (var_1_48 < var_1_56) {
   var_1_71 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
  } else {
   if ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) > var_1_53) {
    var_1_71 = ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)));
   }
  }
 }
 if (var_1_68 || (((((var_1_46) < (var_1_57)) ? (var_1_46) : (var_1_57))) >= ((((var_1_64) > (var_1_35)) ? (var_1_64) : (var_1_35))))) {
  var_1_72 = ((((((((var_1_60) > (var_1_65)) ? (var_1_60) : (var_1_65)))) < ((((((((var_1_51) > (256)) ? (var_1_51) : (256))) < 0 ) ? -((((var_1_51) > (256)) ? (var_1_51) : (256))) : ((((var_1_51) > (256)) ? (var_1_51) : (256))))))) ? (((((var_1_60) > (var_1_65)) ? (var_1_60) : (var_1_65)))) : ((((((((var_1_51) > (256)) ? (var_1_51) : (256))) < 0 ) ? -((((var_1_51) > (256)) ? (var_1_51) : (256))) : ((((var_1_51) > (256)) ? (var_1_51) : (256))))))));
 }
 if (var_1_69 >= var_1_44) {
  if (var_1_55 < var_1_46) {
   var_1_73 = (var_1_74 + ((((var_1_75 - var_1_76) < 0 ) ? -(var_1_75 - var_1_76) : (var_1_75 - var_1_76))));
  } else {
   var_1_73 = (((((var_1_76) > (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))))) ? (var_1_76) : (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))))) - (((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) < 0 ) ? -((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) : ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))));
  }
 }
 if (var_1_36 >= var_1_37) {
  var_1_77 = (var_1_31 && var_1_32);
 } else {
  var_1_77 = 0;
 }
 if ((var_1_41 % 256u) <= (var_1_48 & var_1_49)) {
  var_1_78 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
 }
 if (var_1_74 > ((((var_1_38) < ((var_1_61 + var_1_59))) ? (var_1_38) : ((var_1_61 + var_1_59))))) {
  var_1_79 = ((((((var_1_47) > (4)) ? (var_1_47) : (4))) >= var_1_51) || (! var_1_32));
 } else {
  var_1_79 = 0;
 }
 if (((((var_1_33) < (var_1_38)) ? (var_1_33) : (var_1_38))) < var_1_74) {
  if (var_1_26) {
   var_1_80 = (((((var_1_81 + var_1_55)) > (((((var_1_56 + var_1_46) < 0 ) ? -(var_1_56 + var_1_46) : (var_1_56 + var_1_46))))) ? ((var_1_81 + var_1_55)) : (((((var_1_56 + var_1_46) < 0 ) ? -(var_1_56 + var_1_46) : (var_1_56 + var_1_46))))));
  }
 }
 if (var_1_63) {
  var_1_82 = (! var_1_32);
 } else {
  var_1_82 = ((var_1_81 < var_1_28) || var_1_68);
 }
 if (var_1_46 != var_1_80) {
  if (-2 >= var_1_78) {
   var_1_83 = ((((var_1_57) < (var_1_51)) ? (var_1_57) : (var_1_51)));
  } else {
   var_1_83 = (((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_56);
  }
 } else {
  var_1_83 = (var_1_60 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))));
 }
 if (var_1_32 && var_1_79) {
  if (var_1_36 < (var_1_62 * var_1_39)) {
   if (var_1_33 > (var_1_58 - var_1_59)) {
    var_1_84 = (((((((((var_1_56) > (32)) ? (var_1_56) : (32)))) > (var_1_55)) ? (((((var_1_56) > (32)) ? (var_1_56) : (32)))) : (var_1_55))) - 2);
   } else {
    var_1_84 = var_1_56;
   }
  } else {
   var_1_84 = (((((((-64) < (var_1_55)) ? (-64) : (var_1_55))) < 0 ) ? -((((-64) < (var_1_55)) ? (-64) : (var_1_55))) : ((((-64) < (var_1_55)) ? (-64) : (var_1_55)))));
  }
 } else {
  var_1_84 = var_1_56;
 }
 var_1_85 = var_1_56;
 if (var_1_77) {
  var_1_86 = var_1_49;
 }
 if (var_1_77) {
  var_1_87 = var_1_50;
 }
 var_1_88 = var_1_75;
 if (var_1_66) {
  var_1_89 = var_1_67;
 }
 if (var_1_37 <= (- var_1_62)) {
  if (var_1_31) {
   var_1_90 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
  } else {
   var_1_90 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
  }
 }
 var_1_91 = var_1_60;
 if (! (var_1_4 < 16.8f)) {
  var_1_15 = var_1_6;
 }
 var_1_25 = var_1_23;
 if ((((((var_1_25 + var_1_25)) < ((4 | var_1_25))) ? ((var_1_25 + var_1_25)) : ((4 | var_1_25)))) >= var_1_25) {
  var_1_7 = ((var_1_11 && var_1_12) && var_1_13);
 } else {
  if (var_1_6 == var_1_15) {
   var_1_7 = var_1_14;
  } else {
   var_1_7 = var_1_13;
  }
 }
 if (var_1_25 > var_1_25) {
  var_1_16 = ((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_19) - var_1_20);
 } else {
  if (var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) {
   var_1_16 = var_1_6;
  } else {
   var_1_16 = var_1_20;
  }
 }
 unsigned long int stepLocal_1 = var_1_25;
 if (var_1_18 < (last_1_var_1_22 * var_1_4)) {
  if ((var_1_23 - var_1_24) < stepLocal_1) {
   var_1_22 = var_1_5;
  } else {
   var_1_22 = var_1_17;
  }
 } else {
  var_1_22 = var_1_20;
 }
 unsigned char stepLocal_0 = -1 <= var_1_25;
 if (stepLocal_0 || var_1_7) {
  var_1_1 = (var_1_4 + (var_1_5 + var_1_6));
 }
 if ((- (var_1_17 + var_1_1)) >= var_1_16) {
  var_1_21 = ((((-50) < 0 ) ? -(-50) : (-50)));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -230584.3009213691390e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691390e+12F && var_1_6 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 32767);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32768);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32768);
 assume_abort_if_not(var_1_28 <= 32767);
 assume_abort_if_not(var_1_28 != 0);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483647);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -2147483647);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 4294967295);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 4294967295);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 2147483647);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_47 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_47 >= -1);
 assume_abort_if_not(var_1_47 <= 32767);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 16384);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 16383);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 127);
 assume_abort_if_not(var_1_50 <= 254);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -1);
 assume_abort_if_not(var_1_55 <= 126);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 126);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 254);
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
 assume_abort_if_not(var_1_61 != 0.0F);
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
 assume_abort_if_not(var_1_62 != 0.0F);
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 32767);
 assume_abort_if_not(var_1_65 <= 65534);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 255);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 1);
 assume_abort_if_not(var_1_68 <= 1);
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= -461168.6018427382800e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 4611686.018427382800e+12F && var_1_76 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_81 >= -16383);
 assume_abort_if_not(var_1_81 <= 16383);
}
void updateLastVariables() {
 last_1_var_1_22 = var_1_22;
}
int property() {
 return ((((((((-1 <= var_1_25) || var_1_7) ? (var_1_1 == ((float) (var_1_4 + (var_1_5 + var_1_6)))) : 1) && (((((((var_1_25 + var_1_25)) < ((4 | var_1_25))) ? ((var_1_25 + var_1_25)) : ((4 | var_1_25)))) >= var_1_25) ? (var_1_7 == ((unsigned char) ((var_1_11 && var_1_12) && var_1_13))) : ((var_1_6 == var_1_15) ? (var_1_7 == ((unsigned char) var_1_14)) : (var_1_7 == ((unsigned char) var_1_13))))) && ((! (var_1_4 < 16.8f)) ? (var_1_15 == ((float) var_1_6)) : 1)) && ((var_1_25 > var_1_25) ? (var_1_16 == ((double) ((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_19) - var_1_20))) : ((var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) ? (var_1_16 == ((double) var_1_6)) : (var_1_16 == ((double) var_1_20))))) && (((- (var_1_17 + var_1_1)) >= var_1_16) ? (var_1_21 == ((signed char) ((((-50) < 0 ) ? -(-50) : (-50))))) : 1)) && ((var_1_18 < (last_1_var_1_22 * var_1_4)) ? (((var_1_23 - var_1_24) < var_1_25) ? (var_1_22 == ((double) var_1_5)) : (var_1_22 == ((double) var_1_17))) : (var_1_22 == ((double) var_1_20)))) && (var_1_25 == ((unsigned long int) var_1_23))
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
