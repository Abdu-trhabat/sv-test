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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 16;
unsigned char var_1_4 = 0;
unsigned char var_1_6 = 1;
signed char var_1_8 = -10;
unsigned short int var_1_9 = 4;
signed char var_1_10 = 8;
unsigned short int var_1_12 = 64314;
unsigned short int var_1_13 = 26169;
signed char var_1_17 = 50;
signed char var_1_18 = 16;
signed char var_1_19 = 5;
signed char var_1_20 = 0;
signed char var_1_21 = 50;
signed char var_1_22 = 16;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
double var_1_27 = 0.25;
double var_1_28 = 10.25;
double var_1_29 = 1000.25;
double var_1_30 = 9.5;
float var_1_31 = 63.5;
unsigned short int var_1_32 = 16;
unsigned long int var_1_33 = 500;
unsigned long int var_1_34 = 10;
signed char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned short int var_1_37 = 16;
unsigned short int var_1_38 = 10;
unsigned short int var_1_39 = 64;
unsigned char var_1_40 = 1;
signed char var_1_41 = 25;
signed char var_1_42 = 32;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 200;
signed long int var_1_46 = -50;
unsigned char var_1_47 = 25;
signed short int var_1_48 = 0;
unsigned short int var_1_49 = 50;
unsigned long int var_1_50 = 16;
unsigned long int var_1_51 = 3417354380;
unsigned long int var_1_52 = 64;
float var_1_53 = 9.5;
float var_1_54 = 500.75;
float var_1_55 = 3.1;
float var_1_56 = 1.7;
double var_1_57 = -0.5;
unsigned long int var_1_58 = 16;
double var_1_59 = 3.875;
double var_1_60 = 128.75;
float var_1_61 = 100000.475;
unsigned char var_1_62 = 16;
signed short int var_1_63 = -16;
signed long int var_1_64 = 5;
signed long int var_1_65 = 100;
signed short int var_1_66 = 32;
unsigned short int var_1_67 = 64;
unsigned short int var_1_68 = 20270;
unsigned short int var_1_69 = 26162;
unsigned short int var_1_70 = 40886;
signed short int var_1_71 = 256;
float var_1_72 = 7.15;
signed short int var_1_73 = 8;
unsigned char var_1_74 = 0;
signed long int var_1_75 = 256;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
signed long int var_1_79 = 4;
signed long int var_1_80 = 0;
float var_1_81 = 16.5;
float var_1_82 = 99999999999.5;
signed short int var_1_83 = -25;
unsigned char var_1_84 = 0;
signed char var_1_85 = 4;
signed char var_1_86 = 25;
signed char var_1_87 = 0;
unsigned char var_1_88 = 16;
unsigned char var_1_89 = 64;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 2;
unsigned char var_1_92 = 0;
double var_1_93 = 1.5;
double var_1_94 = 7.75;
unsigned char var_1_95 = 128;
double var_1_96 = 9999999999999.5;
unsigned char var_1_97 = 128;
unsigned short int last_1_var_1_9 = 4;
void initially(void) {
}
void step(void) {
 if ((var_1_34 <= var_1_33) || var_1_36) {
  if (((((5) < 0 ) ? -(5) : (5))) < var_1_34) {
   if (var_1_36) {
    var_1_32 = ((((((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38)))) > (var_1_39)) ? (((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38)))) : (var_1_39)));
   }
  }
 }
 if (((((4) < 0 ) ? -(4) : (4))) >= var_1_37) {
  if ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) % ((((var_1_35) < (var_1_42)) ? (var_1_35) : (var_1_42)))) <= (var_1_39 ^ var_1_37)) {
   if (((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) < (var_1_42)) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : (var_1_42))) < var_1_38) {
    var_1_40 = var_1_43;
   } else {
    var_1_40 = (! (! var_1_44));
   }
  }
 }
 if ((((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) < 0 ) ? -((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) : ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) <= ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) {
  if ((~ var_1_46) > var_1_34) {
   var_1_45 = var_1_47;
  }
 } else {
  var_1_45 = var_1_47;
 }
 if (var_1_38 < (var_1_46 % var_1_49)) {
  if ((var_1_46 >> var_1_41) <= (((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < 0 ) ? -((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) : ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) {
   var_1_48 = (((((((var_1_42) < (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (var_1_42) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) < 0 ) ? -((((var_1_42) < (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (var_1_42) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) : ((((var_1_42) < (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (var_1_42) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))));
  }
 }
 if ((~ (var_1_51 - var_1_52)) <= var_1_45) {
  if (var_1_32 < var_1_38) {
   var_1_50 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
  } else {
   var_1_50 = var_1_52;
  }
 }
 var_1_53 = ((((var_1_54) > (var_1_55)) ? (var_1_54) : (var_1_55)));
 if (var_1_44) {
  if (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) < ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))) {
   var_1_56 = ((((((((3.6f) > (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (3.6f) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))))) < (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) ? (((((3.6f) > (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (3.6f) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))))) : (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))));
  } else {
   var_1_56 = var_1_54;
  }
 } else {
  var_1_56 = ((((64.6f) > (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (64.6f) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))));
 }
 if (((var_1_51 + var_1_46) / ((((var_1_49) < (var_1_58)) ? (var_1_49) : (var_1_58)))) <= var_1_52) {
  if (var_1_50 > ((var_1_49 % 256u) / (var_1_51 - 100u))) {
   var_1_57 = (var_1_59 + ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))));
  }
 }
 if (var_1_43 || var_1_44) {
  if (var_1_46 >= (~ var_1_45)) {
   if (var_1_41 <= var_1_58) {
    var_1_61 = (((((((var_1_60 + var_1_59) < 0 ) ? -(var_1_60 + var_1_59) : (var_1_60 + var_1_59))) < 0 ) ? -((((var_1_60 + var_1_59) < 0 ) ? -(var_1_60 + var_1_59) : (var_1_60 + var_1_59))) : ((((var_1_60 + var_1_59) < 0 ) ? -(var_1_60 + var_1_59) : (var_1_60 + var_1_59)))));
   } else {
    var_1_61 = var_1_54;
   }
  } else {
   var_1_61 = var_1_60;
  }
 } else {
  if (var_1_47 > var_1_62) {
   var_1_61 = ((((var_1_55) < ((var_1_60 + 256.4f))) ? (var_1_55) : ((var_1_60 + 256.4f))));
  }
 }
 if (var_1_46 <= var_1_34) {
  if (-256 < var_1_32) {
   var_1_63 = ((((100) < 0 ) ? -(100) : (100)));
  }
 } else {
  var_1_63 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
 }
 if (-16 >= (-1 | (2 / var_1_49))) {
  if ((var_1_53 + var_1_61) < (- var_1_54)) {
   var_1_64 = var_1_62;
  } else {
   var_1_64 = ((((((((var_1_38 - var_1_47) < 0 ) ? -(var_1_38 - var_1_47) : (var_1_38 - var_1_47)))) < (var_1_32)) ? (((((var_1_38 - var_1_47) < 0 ) ? -(var_1_38 - var_1_47) : (var_1_38 - var_1_47)))) : (var_1_32)));
  }
 }
 if (var_1_63 <= var_1_66) {
  var_1_65 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
 }
 if (var_1_43 || (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) < var_1_53)) {
  if (var_1_47 <= var_1_33) {
   var_1_67 = ((var_1_68 + var_1_69) - var_1_47);
  } else {
   var_1_67 = var_1_45;
  }
 } else {
  var_1_67 = (var_1_70 - var_1_62);
 }
 if (var_1_45 <= var_1_58) {
  if (var_1_44) {
   var_1_71 = var_1_35;
  }
 }
 if (var_1_40 || (var_1_67 >= var_1_69)) {
  var_1_72 = ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)));
 }
 if (var_1_36) {
  if (! (var_1_47 < var_1_64)) {
   var_1_73 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
  }
 } else {
  var_1_73 = var_1_47;
 }
 if (var_1_64 < var_1_33) {
  if ((var_1_73 >> var_1_65) <= ((((var_1_70) < (var_1_75)) ? (var_1_70) : (var_1_75)))) {
   var_1_74 = (! var_1_76);
  }
 } else {
  var_1_74 = (var_1_76 || (var_1_77 && (var_1_43 && var_1_78)));
 }
 if ((var_1_55 + var_1_53) > var_1_57) {
  var_1_79 = ((((((((var_1_37) > (var_1_41)) ? (var_1_37) : (var_1_41)))) < (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? (((((var_1_37) > (var_1_41)) ? (var_1_37) : (var_1_41)))) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))));
 }
 if (var_1_53 > (var_1_81 - var_1_82)) {
  if (var_1_45 < var_1_79) {
   if ((var_1_83 & var_1_47) >= -32) {
    if (var_1_72 == var_1_57) {
     if (-1 >= var_1_37) {
      var_1_80 = ((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)));
     }
    }
   }
  } else {
   var_1_80 = ((((((((var_1_69) < (var_1_49)) ? (var_1_69) : (var_1_49))) - var_1_39) < 0 ) ? -(((((var_1_69) < (var_1_49)) ? (var_1_69) : (var_1_49))) - var_1_39) : (((((var_1_69) < (var_1_49)) ? (var_1_69) : (var_1_49))) - var_1_39)));
  }
 }
 if ((~ var_1_34) >= 4u) {
  var_1_84 = var_1_44;
 }
 if (var_1_71 < var_1_32) {
  if ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) > (var_1_80 % var_1_35)) {
   var_1_85 = ((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86)));
  } else {
   var_1_85 = ((((var_1_86) < (((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87))))) ? (var_1_86) : (((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87))))));
  }
 } else {
  if ((var_1_41 <= var_1_64) || var_1_43) {
   var_1_85 = ((((var_1_86) < (var_1_87)) ? (var_1_86) : (var_1_87)));
  }
 }
 if (-25 <= (var_1_46 ^ var_1_39)) {
  if (var_1_57 < var_1_82) {
   if (var_1_80 < var_1_46) {
    if (var_1_33 >= var_1_51) {
     var_1_88 = ((((var_1_47) > (var_1_89)) ? (var_1_47) : (var_1_89)));
    } else {
     var_1_88 = ((((((((((((var_1_47) > (var_1_89)) ? (var_1_47) : (var_1_89)))) > (var_1_90)) ? (((((var_1_47) > (var_1_89)) ? (var_1_47) : (var_1_89)))) : (var_1_90)))) > (((((var_1_91) > (var_1_92)) ? (var_1_91) : (var_1_92))))) ? (((((((((var_1_47) > (var_1_89)) ? (var_1_47) : (var_1_89)))) > (var_1_90)) ? (((((var_1_47) > (var_1_89)) ? (var_1_47) : (var_1_89)))) : (var_1_90)))) : (((((var_1_91) > (var_1_92)) ? (var_1_91) : (var_1_92))))));
    }
   }
  } else {
   var_1_88 = (((((((((((var_1_90) > (var_1_47)) ? (var_1_90) : (var_1_47)))) < (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))) ? (((((var_1_90) > (var_1_47)) ? (var_1_90) : (var_1_47)))) : (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89)))))) < 0 ) ? -((((((((var_1_90) > (var_1_47)) ? (var_1_90) : (var_1_47)))) < (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))) ? (((((var_1_90) > (var_1_47)) ? (var_1_90) : (var_1_47)))) : (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89)))))) : ((((((((var_1_90) > (var_1_47)) ? (var_1_90) : (var_1_47)))) < (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))) ? (((((var_1_90) > (var_1_47)) ? (var_1_90) : (var_1_47)))) : (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))))));
  }
 }
 var_1_93 = var_1_94;
 if (var_1_43) {
  var_1_95 = var_1_89;
 }
 if (var_1_44) {
  var_1_96 = (var_1_60 + 256.75);
 } else {
  var_1_96 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
 }
 if (((10000 & var_1_88) % ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70)))) >= var_1_66) {
  var_1_97 = var_1_47;
 }
 if ((- last_1_var_1_9) < (last_1_var_1_9 + -500)) {
  var_1_23 = var_1_20;
 }
 var_1_17 = (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - (var_1_20 + (var_1_21 - var_1_22)));
 if (var_1_4) {
  var_1_24 = (! var_1_25);
 } else {
  var_1_24 = (var_1_6 && ((var_1_10 >= var_1_17) && var_1_25));
 }
 var_1_31 = var_1_30;
 if (var_1_23 < var_1_23) {
  if (var_1_24 && var_1_24) {
   if (var_1_24) {
    if (var_1_24 && (var_1_24 || var_1_24)) {
     var_1_1 = -5;
    }
   }
  } else {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = var_1_8;
 }
 signed char stepLocal_0 = var_1_1;
 if (stepLocal_0 < (-1 - var_1_10)) {
  if (var_1_24) {
   var_1_9 = (var_1_10 + ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))));
  } else {
   var_1_9 = ((var_1_12 - var_1_10) - ((var_1_13 - var_1_23) - ((((var_1_23) < (var_1_23)) ? (var_1_23) : (var_1_23)))));
  }
 } else {
  var_1_9 = var_1_13;
 }
 if (var_1_9 < (var_1_21 + var_1_23)) {
  var_1_27 = ((var_1_28 + var_1_29) + var_1_30);
 } else {
  var_1_27 = var_1_28;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 49150);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 24575);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -1);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 31);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 31);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -230584.3009213691390e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -230584.3009213691390e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 4294967295);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -128);
 assume_abort_if_not(var_1_35 <= 127);
 assume_abort_if_not(var_1_35 != 0);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 65534);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 65534);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -127);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -128);
 assume_abort_if_not(var_1_42 <= 127);
 assume_abort_if_not(var_1_42 != 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_46 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_46 >= -2147483648);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 65535);
 assume_abort_if_not(var_1_49 != 0);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967295);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 2147483647);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -922337.2036854765600e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -922337.2036854765600e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 4294967295);
 assume_abort_if_not(var_1_58 != 0);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= -461168.6018427382800e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 255);
 var_1_66 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_66 >= -32768);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_68 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_68 >= 16383);
 assume_abort_if_not(var_1_68 <= 32767);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 16384);
 assume_abort_if_not(var_1_69 <= 32767);
 var_1_70 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_70 >= 32767);
 assume_abort_if_not(var_1_70 <= 65534);
 var_1_75 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_75 >= -2147483648);
 assume_abort_if_not(var_1_75 <= 2147483647);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 0);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 1);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 0);
 var_1_81 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854776000e+12F && var_1_81 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854776000e+12F && var_1_82 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_83 >= -32768);
 assume_abort_if_not(var_1_83 <= 32767);
 var_1_86 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_86 >= -126);
 assume_abort_if_not(var_1_86 <= 126);
 var_1_87 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_87 >= -126);
 assume_abort_if_not(var_1_87 <= 126);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 254);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 254);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 0);
 assume_abort_if_not(var_1_91 <= 254);
 var_1_92 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_92 >= 0);
 assume_abort_if_not(var_1_92 <= 254);
 var_1_94 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_94 >= -922337.2036854765600e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 9223372.036854765600e+12F && var_1_94 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
}
int property() {
 return (((((((var_1_23 < var_1_23) ? ((var_1_24 && var_1_24) ? (var_1_24 ? ((var_1_24 && (var_1_24 || var_1_24)) ? (var_1_1 == ((signed char) -5)) : 1) : 1) : (var_1_1 == ((signed char) var_1_8))) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_1 < (-1 - var_1_10)) ? (var_1_24 ? (var_1_9 == ((unsigned short int) (var_1_10 + ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) : (var_1_9 == ((unsigned short int) ((var_1_12 - var_1_10) - ((var_1_13 - var_1_23) - ((((var_1_23) < (var_1_23)) ? (var_1_23) : (var_1_23)))))))) : (var_1_9 == ((unsigned short int) var_1_13)))) && (var_1_17 == ((signed char) (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) - (var_1_20 + (var_1_21 - var_1_22)))))) && (((- last_1_var_1_9) < (last_1_var_1_9 + -500)) ? (var_1_23 == ((unsigned char) var_1_20)) : 1)) && (var_1_4 ? (var_1_24 == ((unsigned char) (! var_1_25))) : (var_1_24 == ((unsigned char) (var_1_6 && ((var_1_10 >= var_1_17) && var_1_25)))))) && ((var_1_9 < (var_1_21 + var_1_23)) ? (var_1_27 == ((double) ((var_1_28 + var_1_29) + var_1_30))) : (var_1_27 == ((double) var_1_28)))) && (var_1_31 == ((float) var_1_30))
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
