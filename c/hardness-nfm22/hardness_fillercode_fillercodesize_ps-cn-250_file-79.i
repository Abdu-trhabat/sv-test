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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch79PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 0;
double var_1_9 = 127.625;
double var_1_10 = 256.8;
double var_1_11 = 0.30000000000000004;
signed long int var_1_12 = -2;
double var_1_13 = 2.475;
double var_1_14 = 25.2;
double var_1_15 = 500.125;
double var_1_16 = 10.75;
double var_1_17 = 255.4;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 8;
unsigned char var_1_25 = 10;
float var_1_26 = 16.8;
unsigned long int var_1_27 = 64;
unsigned long int var_1_28 = 256;
signed long int var_1_29 = -16;
signed long int var_1_30 = 128;
unsigned long int var_1_31 = 64;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 3100532386;
unsigned long int var_1_34 = 128;
unsigned long int var_1_35 = 1;
float var_1_36 = 0.94;
float var_1_37 = 8.6;
float var_1_38 = 32.5;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned long int var_1_41 = 10;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
signed char var_1_45 = -4;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
signed long int var_1_48 = 256;
signed long int var_1_49 = 64;
signed long int var_1_50 = 1856358764;
signed long int var_1_51 = 128;
signed long int var_1_52 = 1000000000;
signed char var_1_53 = -16;
signed char var_1_54 = 16;
unsigned char var_1_55 = 10;
unsigned char var_1_56 = 32;
unsigned char var_1_57 = 32;
unsigned char var_1_58 = 4;
unsigned char var_1_59 = 0;
signed short int var_1_60 = -10;
signed short int var_1_61 = 10;
signed short int var_1_62 = 64;
signed long int var_1_63 = 1;
float var_1_64 = 499.65;
float var_1_65 = 31.25;
float var_1_66 = 7.5;
signed char var_1_67 = -8;
signed char var_1_68 = 100;
signed char var_1_69 = 8;
signed char var_1_70 = -10;
unsigned short int var_1_71 = 4;
signed long int var_1_72 = -25;
double var_1_73 = 50.5;
double var_1_74 = 10.75;
double var_1_75 = 100.1;
unsigned char var_1_76 = 128;
unsigned short int var_1_77 = 500;
unsigned long int var_1_78 = 128;
float var_1_79 = 0.4;
double var_1_80 = 0.625;
double var_1_81 = 1000.5;
double var_1_82 = 0.25;
signed short int var_1_83 = 16;
unsigned long int var_1_84 = 32;
signed short int var_1_85 = 256;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 200;
unsigned short int var_1_88 = 25;
unsigned short int var_1_89 = 47118;
unsigned char var_1_90 = 1;
float var_1_91 = 8.25;
float var_1_92 = 50.25;
double var_1_93 = 199.5;
float var_1_94 = 10.4;
float var_1_95 = 1000000000.5;
float var_1_96 = 3.7;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 0;
signed short int var_1_99 = -100;
unsigned long int var_1_100 = 0;
signed short int var_1_101 = 500;
unsigned char var_1_102 = 1;
signed short int var_1_103 = -10;
unsigned char last_1_var_1_18 = 1;
unsigned char last_1_var_1_20 = 100;
void initially(void) {
}
void step(void) {
 if (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) > var_1_30) {
  var_1_28 = (((((4160310295u - 64u)) < (var_1_31)) ? ((4160310295u - 64u)) : (var_1_31)));
 } else {
  if (var_1_32) {
   var_1_28 = (var_1_33 - (((((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) < 0 ) ? -((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))) : ((((var_1_34) > (var_1_35)) ? (var_1_34) : (var_1_35))))));
  }
 }
 if (var_1_28 > var_1_33) {
  var_1_36 = var_1_37;
 } else {
  var_1_36 = ((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38)));
 }
 if (var_1_33 > (~ var_1_31)) {
  var_1_39 = var_1_40;
 } else {
  if (var_1_33 > ((((var_1_41) < (var_1_31)) ? (var_1_41) : (var_1_31)))) {
   var_1_39 = (var_1_40 && var_1_42);
  } else {
   var_1_39 = var_1_43;
  }
 }
 if (((((var_1_30) < (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (var_1_30) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) > (var_1_41 | ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) {
  var_1_44 = (var_1_43 || (var_1_46 || var_1_47));
 } else {
  var_1_44 = (! 1);
 }
 if (var_1_42) {
  var_1_48 = (var_1_45 + var_1_49);
 } else {
  if (var_1_44) {
   if (((((32) < (var_1_35)) ? (32) : (var_1_35))) > (var_1_33 | ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) {
    var_1_48 = (((var_1_50 - var_1_51) - var_1_52) - 10);
   }
  }
 }
 if (((((var_1_48) > ((var_1_28 ^ var_1_49))) ? (var_1_48) : ((var_1_28 ^ var_1_49)))) > (var_1_31 * 128u)) {
  var_1_53 = (var_1_54 - ((((-16) < 0 ) ? -(-16) : (-16))));
 } else {
  var_1_53 = var_1_54;
 }
 if (var_1_40) {
  if (! var_1_32) {
   var_1_55 = ((((((((var_1_56 + var_1_57)) < (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) ? ((var_1_56 + var_1_57)) : (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))))) < 0 ) ? -(((((var_1_56 + var_1_57)) < (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) ? ((var_1_56 + var_1_57)) : (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))))) : (((((var_1_56 + var_1_57)) < (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) ? ((var_1_56 + var_1_57)) : (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))))));
  }
 }
 if (var_1_33 >= var_1_50) {
  var_1_59 = (var_1_47 && (var_1_46 || var_1_43));
 }
 var_1_60 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
 if (((var_1_53 / var_1_62) << ((((8) > (var_1_63)) ? (8) : (var_1_63)))) < var_1_58) {
  if ((((((var_1_64) > (var_1_65)) ? (var_1_64) : (var_1_65))) - var_1_66) > var_1_37) {
   var_1_61 = var_1_54;
  }
 }
 if (var_1_34 <= var_1_58) {
  if (var_1_66 == (((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) - var_1_64)) {
   var_1_67 = ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)));
  } else {
   var_1_67 = ((((var_1_63 - (var_1_68 - var_1_69)) < 0 ) ? -(var_1_63 - (var_1_68 - var_1_69)) : (var_1_63 - (var_1_68 - var_1_69))));
  }
 } else {
  var_1_67 = (var_1_63 + var_1_69);
 }
 if (-8 < var_1_41) {
  var_1_70 = ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)));
 } else {
  var_1_70 = (((((var_1_69 + var_1_63) - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))) < 0 ) ? -((var_1_69 + var_1_63) - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))) : ((var_1_69 + var_1_63) - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))));
 }
 if ((var_1_65 - var_1_64) <= var_1_36) {
  var_1_71 = ((((var_1_68) < (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))) ? (var_1_68) : (((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))));
 } else {
  var_1_71 = ((((0) < (var_1_63)) ? (0) : (var_1_63)));
 }
 if (var_1_30 >= ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))) {
  var_1_72 = ((((((((var_1_51) < (((((var_1_61) > (var_1_57)) ? (var_1_61) : (var_1_57))))) ? (var_1_51) : (((((var_1_61) > (var_1_57)) ? (var_1_61) : (var_1_57))))))) > (var_1_71)) ? (((((var_1_51) < (((((var_1_61) > (var_1_57)) ? (var_1_61) : (var_1_57))))) ? (var_1_51) : (((((var_1_61) > (var_1_57)) ? (var_1_61) : (var_1_57))))))) : (var_1_71)));
 }
 if (var_1_65 > (((((var_1_64 - var_1_66)) > (var_1_38)) ? ((var_1_64 - var_1_66)) : (var_1_38)))) {
  var_1_73 = (var_1_74 + var_1_75);
 } else {
  var_1_73 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 }
 if (var_1_71 > var_1_77) {
  var_1_76 = (var_1_56 + ((((var_1_63) < (var_1_57)) ? (var_1_63) : (var_1_57))));
 }
 if (((var_1_31 >> var_1_63) <= var_1_57) || (var_1_69 != var_1_71)) {
  var_1_78 = ((((((((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))) < 0 ) ? -((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))) : ((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))))) < 0 ) ? -(((((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))) < 0 ) ? -((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))) : ((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))))) : (((((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))) < 0 ) ? -((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34))) : ((((var_1_51) > (var_1_34)) ? (var_1_51) : (var_1_34)))))));
 }
 if (var_1_67 < var_1_45) {
  var_1_79 = ((((var_1_75) < (var_1_37)) ? (var_1_75) : (var_1_37)));
 }
 if (32 <= var_1_56) {
  var_1_80 = (((((((var_1_75) < 0 ) ? -(var_1_75) : (var_1_75))) < 0 ) ? -((((var_1_75) < 0 ) ? -(var_1_75) : (var_1_75))) : ((((var_1_75) < 0 ) ? -(var_1_75) : (var_1_75)))));
 } else {
  if (var_1_73 > var_1_64) {
   var_1_80 = ((((var_1_37) < (((((((((var_1_75) < (var_1_74)) ? (var_1_75) : (var_1_74)))) > ((var_1_81 + var_1_82))) ? (((((var_1_75) < (var_1_74)) ? (var_1_75) : (var_1_74)))) : ((var_1_81 + var_1_82)))))) ? (var_1_37) : (((((((((var_1_75) < (var_1_74)) ? (var_1_75) : (var_1_74)))) > ((var_1_81 + var_1_82))) ? (((((var_1_75) < (var_1_74)) ? (var_1_75) : (var_1_74)))) : ((var_1_81 + var_1_82)))))));
  }
 }
 if (var_1_65 < var_1_81) {
  var_1_83 = ((((var_1_63 - var_1_68) < 0 ) ? -(var_1_63 - var_1_68) : (var_1_63 - var_1_68)));
 }
 if (var_1_28 > var_1_77) {
  var_1_84 = var_1_50;
 } else {
  var_1_84 = ((((((((var_1_34 + var_1_69) < 0 ) ? -(var_1_34 + var_1_69) : (var_1_34 + var_1_69)))) > (var_1_55)) ? (((((var_1_34 + var_1_69) < 0 ) ? -(var_1_34 + var_1_69) : (var_1_34 + var_1_69)))) : (var_1_55)));
 }
 if (var_1_58 >= (var_1_77 | (64 | var_1_60))) {
  var_1_85 = ((((var_1_45) < ((var_1_57 - (var_1_69 + var_1_76)))) ? (var_1_45) : ((var_1_57 - (var_1_69 + var_1_76)))));
 } else {
  if (var_1_35 > (var_1_31 | 2u)) {
   if (var_1_75 > ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) {
    var_1_85 = var_1_68;
   }
  }
 }
 var_1_86 = ((((var_1_63) > ((var_1_87 - var_1_56))) ? (var_1_63) : ((var_1_87 - var_1_56))));
 if (((((var_1_83) < (var_1_69)) ? (var_1_83) : (var_1_69))) >= -16) {
  if (((((var_1_53) > (var_1_86)) ? (var_1_53) : (var_1_86))) <= var_1_52) {
   var_1_88 = ((((var_1_58) > ((var_1_89 - var_1_87))) ? (var_1_58) : ((var_1_89 - var_1_87))));
  } else {
   if (var_1_90) {
    var_1_88 = (var_1_87 + var_1_55);
   } else {
    var_1_88 = (var_1_57 + 100);
   }
  }
 } else {
  if (var_1_79 <= var_1_82) {
   var_1_88 = (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))) - 128);
  }
 }
 if (var_1_40 && var_1_39) {
  var_1_91 = (((((((((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) > (var_1_82)) ? (((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) : (var_1_82))) < 0 ) ? -((((((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) > (var_1_82)) ? (((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) : (var_1_82))) : ((((((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) > (var_1_82)) ? (((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92)))) : (var_1_82)))));
 } else {
  if (var_1_74 < ((((var_1_38) < ((var_1_73 / var_1_93))) ? (var_1_38) : ((var_1_73 / var_1_93))))) {
   var_1_91 = (var_1_94 - ((((var_1_95) < (var_1_96)) ? (var_1_95) : (var_1_96))));
  }
 }
 if (((var_1_95 - 4.25f) * var_1_37) > var_1_74) {
  if (var_1_81 != var_1_66) {
   var_1_97 = (var_1_40 && var_1_98);
  } else {
   var_1_97 = var_1_46;
  }
 }
 var_1_99 = var_1_53;
 if (var_1_44) {
  var_1_100 = 50u;
 } else {
  var_1_100 = var_1_88;
 }
 if (var_1_44) {
  var_1_101 = var_1_68;
 } else {
  var_1_101 = var_1_54;
 }
 if (var_1_39) {
  var_1_102 = var_1_46;
 } else {
  var_1_102 = var_1_42;
 }
 if ((var_1_61 <= 64) || var_1_98) {
  var_1_103 = ((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) > (var_1_55)) ? (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) : (var_1_55)));
 } else {
  if ((var_1_89 - var_1_57) <= var_1_50) {
   var_1_103 = var_1_68;
  } else {
   var_1_103 = var_1_58;
  }
 }
 signed long int stepLocal_1 = last_1_var_1_20;
 unsigned char stepLocal_0 = last_1_var_1_18;
 if (stepLocal_0 && last_1_var_1_18) {
  if (((((last_1_var_1_20) < ((last_1_var_1_20 * last_1_var_1_20))) ? (last_1_var_1_20) : ((last_1_var_1_20 * last_1_var_1_20)))) > stepLocal_1) {
   var_1_7 = var_1_8;
  } else {
   var_1_7 = var_1_8;
  }
 } else {
  var_1_7 = var_1_8;
 }
 if (var_1_3) {
  if (var_1_2) {
   var_1_18 = (! var_1_19);
  }
 }
 var_1_26 = var_1_16;
 var_1_27 = 10u;
 unsigned long int stepLocal_2 = var_1_27;
 if (stepLocal_2 != (var_1_8 + var_1_7)) {
  var_1_9 = ((((var_1_10) < (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))) ? (var_1_10) : (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))));
 } else {
  var_1_9 = ((((var_1_11) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_11) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))));
 }
 if (var_1_8 >= var_1_7) {
  if (var_1_15 >= var_1_26) {
   var_1_20 = (var_1_21 - ((((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))))));
  } else {
   var_1_20 = var_1_24;
  }
 } else {
  var_1_20 = var_1_22;
 }
 if (var_1_18) {
  if (! var_1_18) {
   var_1_1 = (var_1_7 + 5);
  } else {
   var_1_1 = (var_1_20 - var_1_20);
  }
 } else {
  var_1_1 = var_1_20;
 }
 if ((var_1_13 - var_1_14) >= (var_1_15 - (var_1_16 + var_1_17))) {
  var_1_12 = (var_1_20 + var_1_20);
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427387900e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427387900e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483647);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967294);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 4294967295);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= -1073741823);
 assume_abort_if_not(var_1_49 <= 1073741823);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= 1610612734);
 assume_abort_if_not(var_1_50 <= 2147483646);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 536870912);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 1073741823);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -1);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 254);
 var_1_62 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_62 >= -32768);
 assume_abort_if_not(var_1_62 <= 32767);
 assume_abort_if_not(var_1_62 != 0);
 var_1_63 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 32);
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_68 >= 63);
 assume_abort_if_not(var_1_68 <= 126);
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 63);
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= -461168.6018427382800e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_75 >= -461168.6018427382800e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 65535);
 var_1_81 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_81 >= -461168.6018427382800e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_82 >= -461168.6018427382800e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 127);
 assume_abort_if_not(var_1_87 <= 254);
 var_1_89 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_89 >= 32767);
 assume_abort_if_not(var_1_89 <= 65534);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 1);
 var_1_92 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_92 >= -922337.2036854765600e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 9223372.036854765600e+12F && var_1_92 >= 1.0e-20F ));
 var_1_93 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_93 >= -922337.2036854776000e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854776000e+12F && var_1_93 >= 1.0e-20F ));
 assume_abort_if_not(var_1_93 != 0.0F);
 var_1_94 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_94 >= 0.0F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 9223372.036854765600e+12F && var_1_94 >= 1.0e-20F ));
 var_1_95 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_95 >= 0.0F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854765600e+12F && var_1_95 >= 1.0e-20F ));
 var_1_96 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_96 >= 0.0F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 9223372.036854765600e+12F && var_1_96 >= 1.0e-20F ));
 var_1_98 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_98 >= 1);
 assume_abort_if_not(var_1_98 <= 1);
}
void updateLastVariables() {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((var_1_18 ? ((! var_1_18) ? (var_1_1 == ((signed short int) (var_1_7 + 5))) : (var_1_1 == ((signed short int) (var_1_20 - var_1_20)))) : (var_1_1 == ((signed short int) var_1_20))) && ((last_1_var_1_18 && last_1_var_1_18) ? ((((((last_1_var_1_20) < ((last_1_var_1_20 * last_1_var_1_20))) ? (last_1_var_1_20) : ((last_1_var_1_20 * last_1_var_1_20)))) > last_1_var_1_20) ? (var_1_7 == ((unsigned char) var_1_8)) : (var_1_7 == ((unsigned char) var_1_8))) : (var_1_7 == ((unsigned char) var_1_8)))) && ((var_1_27 != (var_1_8 + var_1_7)) ? (var_1_9 == ((double) ((((var_1_10) < (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6))))) ? (var_1_10) : (((((var_1_11) < (32.6)) ? (var_1_11) : (32.6)))))))) : (var_1_9 == ((double) ((((var_1_11) < (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_11) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))))))) && (((var_1_13 - var_1_14) >= (var_1_15 - (var_1_16 + var_1_17))) ? (var_1_12 == ((signed long int) (var_1_20 + var_1_20))) : 1)) && (var_1_3 ? (var_1_2 ? (var_1_18 == ((unsigned char) (! var_1_19))) : 1) : 1)) && ((var_1_8 >= var_1_7) ? ((var_1_15 >= var_1_26) ? (var_1_20 == ((unsigned char) (var_1_21 - ((((((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) > (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))) ? (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)))) : (((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))))))) : (var_1_20 == ((unsigned char) var_1_24))) : (var_1_20 == ((unsigned char) var_1_22)))) && (var_1_26 == ((float) var_1_16))) && (var_1_27 == ((unsigned long int) 10u))
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
