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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;
signed char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 50;
signed char var_1_27 = -1;
signed char var_1_28 = 2;
signed char var_1_29 = 5;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 8;
unsigned long int var_1_32 = 1;
signed char var_1_33 = 32;
signed char var_1_34 = 32;
signed char var_1_35 = 25;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 4;
double var_1_38 = 127.5;
double var_1_39 = -0.5;
double var_1_40 = 4.6;
double var_1_41 = 63.25;
unsigned char var_1_42 = 32;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned long int var_1_46 = 25;
signed long int var_1_47 = -256;
float var_1_48 = 1.7;
signed char var_1_49 = 0;
signed long int var_1_50 = -32;
unsigned long int var_1_51 = 256;
signed long int var_1_52 = -100000;
double var_1_53 = 7.5;
signed char var_1_54 = 32;
double var_1_55 = 499.8;
signed char var_1_56 = -128;
signed char var_1_57 = 8;
signed short int var_1_58 = 16;
unsigned char var_1_59 = 5;
signed short int var_1_60 = -8;
signed long int var_1_61 = -32;
unsigned long int var_1_62 = 32;
unsigned long int var_1_63 = 8;
signed long int var_1_64 = 2;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
double var_1_67 = 0.0;
signed long int var_1_68 = 8;
unsigned char var_1_69 = 4;
float var_1_70 = 8.75;
unsigned char var_1_71 = 1;
signed long int var_1_72 = 64;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 128;
float var_1_77 = 10.375;
float var_1_78 = 128.5;
signed long int var_1_79 = 50;
unsigned long int var_1_80 = 2424695456;
unsigned char var_1_81 = 8;
float var_1_82 = 3.875;
float var_1_83 = 100.5;
float var_1_84 = -0.5;
float var_1_85 = 255.75;
float var_1_86 = 64.5;
double var_1_87 = 5.2;
unsigned char var_1_88 = 16;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 1;
unsigned short int var_1_91 = 64;
unsigned short int var_1_92 = 54660;
signed short int var_1_93 = 5;
unsigned long int var_1_94 = 32;
float var_1_95 = 31.25;
signed long int var_1_96 = -2;
unsigned short int var_1_97 = 32;
unsigned short int var_1_99 = 0;
unsigned char var_1_100 = 1;
unsigned char var_1_101 = 1;
unsigned char var_1_102 = 8;
signed short int var_1_103 = -5;
unsigned char var_1_104 = 4;
double var_1_105 = 499.6;
double var_1_106 = 4.35;
unsigned long int var_1_107 = 4;
unsigned short int var_1_108 = 2;
signed char var_1_109 = -100;
unsigned long int var_1_110 = 8;
float var_1_111 = 15.75;
float var_1_112 = 0.72;
unsigned char var_1_113 = 8;
double var_1_114 = 2.25;
float var_1_115 = 99.895;
signed long int var_1_116 = 256;
signed short int var_1_117 = -256;
signed long int var_1_118 = 1;
unsigned short int var_1_119 = 16;
float var_1_120 = 127.5;
unsigned short int last_1_var_1_1 = 128;
unsigned char last_1_var_1_6 = 0;
signed long int last_1_var_1_10 = 500;
signed long int last_1_var_1_14 = 256;
unsigned char last_1_var_1_16 = 64;
unsigned short int last_1_var_1_22 = 100;
void initially(void) {
}
void step(void) {
 if (var_1_24) {
  var_1_23 = (((((var_1_25 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) < ((var_1_27 - var_1_28))) ? ((var_1_25 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : ((var_1_27 - var_1_28))));
 }
 if ((var_1_23 / (var_1_30 + var_1_31)) >= var_1_27) {
  if (var_1_24 || ((var_1_27 >> var_1_26) > (var_1_30 | 10))) {
   if ((var_1_30 * (2602482040u - var_1_31)) > var_1_32) {
    var_1_29 = (var_1_27 - ((var_1_33 + var_1_34) - var_1_35));
   } else {
    var_1_29 = ((((var_1_27) < (var_1_33)) ? (var_1_27) : (var_1_33)));
   }
  }
 } else {
  var_1_29 = var_1_33;
 }
 if (var_1_35 > var_1_33) {
  var_1_36 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 } else {
  var_1_36 = var_1_28;
 }
 if (var_1_29 >= var_1_34) {
  if (var_1_24) {
   var_1_37 = var_1_28;
  }
 } else {
  var_1_37 = var_1_31;
 }
 if ((var_1_31 | (~ var_1_29)) < var_1_27) {
  if (-4 >= var_1_36) {
   if ((var_1_27 - 8) < var_1_25) {
    var_1_38 = var_1_39;
   }
  } else {
   if (var_1_26 <= var_1_31) {
    var_1_38 = ((32.5 + var_1_40) - var_1_41);
   }
  }
 } else {
  if (var_1_34 <= (var_1_26 | (var_1_37 / var_1_31))) {
   var_1_38 = var_1_39;
  }
 }
 if (var_1_29 > var_1_32) {
  if (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) > (var_1_23 * (var_1_26 * var_1_37))) {
   if (var_1_24) {
    var_1_42 = (var_1_43 - (64 - (32 - var_1_44)));
   }
  }
 } else {
  if (var_1_45) {
   var_1_42 = (((((((32) < 0 ) ? -(32) : (32))) < 0 ) ? -((((32) < 0 ) ? -(32) : (32))) : ((((32) < 0 ) ? -(32) : (32)))));
  }
 }
 if ((var_1_37 ^ (var_1_34 ^ var_1_27)) < (((((-64) < 0 ) ? -(-64) : (-64))) - ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) {
  if (var_1_45) {
   var_1_46 = ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) < (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))));
  } else {
   var_1_46 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
  }
 }
 if (var_1_25 < (var_1_36 + var_1_31)) {
  if (var_1_29 > var_1_26) {
   if (var_1_39 > (1.5 + var_1_40)) {
    var_1_48 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
   } else {
    var_1_48 = ((((500.625f) < (var_1_41)) ? (500.625f) : (var_1_41)));
   }
  }
 }
 if (var_1_41 < var_1_48) {
  var_1_49 = (((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))));
 } else {
  var_1_49 = ((((var_1_26) > (var_1_28)) ? (var_1_26) : (var_1_28)));
 }
 if (var_1_45 || (var_1_51 < (~ 100u))) {
  if ((var_1_40 + var_1_41) <= var_1_48) {
   var_1_50 = ((((var_1_36) > (((((var_1_52) > (var_1_33)) ? (var_1_52) : (var_1_33))))) ? (var_1_36) : (((((var_1_52) > (var_1_33)) ? (var_1_52) : (var_1_33))))));
  }
 }
 if (var_1_24) {
  var_1_53 = var_1_39;
 } else {
  if (var_1_45) {
   if (((((var_1_38) < (var_1_48)) ? (var_1_38) : (var_1_48))) < var_1_40) {
    var_1_53 = ((((var_1_41 - var_1_40) < 0 ) ? -(var_1_41 - var_1_40) : (var_1_41 - var_1_40)));
   }
  }
 }
 if (! (var_1_25 <= var_1_29)) {
  var_1_54 = (var_1_44 + var_1_34);
 } else {
  var_1_54 = (var_1_44 - var_1_35);
 }
 if (((((var_1_34) < (var_1_50)) ? (var_1_34) : (var_1_50))) <= (var_1_36 ^ var_1_37)) {
  if (var_1_34 <= var_1_42) {
   var_1_55 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
  } else {
   if (var_1_24) {
    var_1_55 = 99.4;
   }
  }
 }
 if (var_1_24) {
  var_1_56 = (((((((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))) - var_1_44)) < (var_1_35)) ? ((((((var_1_28) > (var_1_34)) ? (var_1_28) : (var_1_34))) - var_1_44)) : (var_1_35)));
 }
 if ((-1 >> ((((var_1_44) > (var_1_58)) ? (var_1_44) : (var_1_58)))) <= ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < (var_1_23)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_23)))) {
  var_1_57 = (((((((var_1_58) > (2)) ? (var_1_58) : (2))) < 0 ) ? -((((var_1_58) > (2)) ? (var_1_58) : (2))) : ((((var_1_58) > (2)) ? (var_1_58) : (2)))));
 }
 if (var_1_26 <= var_1_25) {
  var_1_59 = ((((var_1_33) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_33) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))));
 } else {
  var_1_59 = ((((8) > (4)) ? (8) : (4)));
 }
 if (var_1_36 > var_1_32) {
  var_1_60 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
 } else {
  if (var_1_52 < ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) {
   var_1_60 = ((((((var_1_56 + var_1_26)) > (var_1_35)) ? ((var_1_56 + var_1_26)) : (var_1_35))) + (var_1_25 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))));
  }
 }
 if ((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) / var_1_34) >= var_1_43) {
  var_1_61 = ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)));
 } else {
  if (var_1_28 <= ((((var_1_44) < (var_1_52)) ? (var_1_44) : (var_1_52)))) {
   var_1_61 = (((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) < 0 ) ? -((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) : ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))));
  } else {
   var_1_61 = ((((var_1_57) < (var_1_23)) ? (var_1_57) : (var_1_23)));
  }
 }
 if (var_1_36 > var_1_60) {
  var_1_62 = var_1_42;
 }
 if (var_1_26 != ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) {
  var_1_63 = (((((((var_1_42) > (((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37))))) ? (var_1_42) : (((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37)))))) < 0 ) ? -((((var_1_42) > (((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37))))) ? (var_1_42) : (((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37)))))) : ((((var_1_42) > (((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37))))) ? (var_1_42) : (((((var_1_33) > (var_1_37)) ? (var_1_33) : (var_1_37))))))));
 } else {
  var_1_63 = ((((var_1_42) > (var_1_58)) ? (var_1_42) : (var_1_58)));
 }
 var_1_64 = ((((32) < 0 ) ? -(32) : (32)));
 if (var_1_37 < var_1_34) {
  if (var_1_45) {
   var_1_65 = (! var_1_66);
  }
 }
 if (25 < (var_1_34 >> var_1_36)) {
  var_1_67 = ((((var_1_41) < (var_1_40)) ? (var_1_41) : (var_1_40)));
 }
 if (var_1_64 < -256) {
  if (! (((((1) < 0 ) ? -(1) : (1))) == ((((var_1_42) < (var_1_25)) ? (var_1_42) : (var_1_25))))) {
   var_1_68 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + var_1_57);
  } else {
   var_1_68 = (((((var_1_30) < ((1307711416 - var_1_34))) ? (var_1_30) : ((1307711416 - var_1_34)))) - (var_1_43 + var_1_42));
  }
 } else {
  if (! var_1_66) {
   var_1_68 = ((((((((var_1_43) < (-16)) ? (var_1_43) : (-16)))) < (var_1_23)) ? (((((var_1_43) < (-16)) ? (var_1_43) : (-16)))) : (var_1_23)));
  }
 }
 if (var_1_37 > var_1_34) {
  if (var_1_31 >= var_1_23) {
   if (var_1_52 < var_1_29) {
    var_1_69 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
   }
  }
 }
 if (var_1_71) {
  var_1_70 = (((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) < 0 ) ? -((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) : ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))));
 } else {
  if (var_1_25 < var_1_36) {
   var_1_70 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
  } else {
   var_1_70 = (((((var_1_41) > (var_1_40)) ? (var_1_41) : (var_1_40))) - 24.22f);
  }
 }
 if (var_1_63 > var_1_28) {
  if (var_1_44 < ((var_1_34 % var_1_31) / ((((var_1_33) < (var_1_43)) ? (var_1_33) : (var_1_43))))) {
   var_1_72 = ((((var_1_36) > (var_1_54)) ? (var_1_36) : (var_1_54)));
  }
 } else {
  if (((((var_1_34 & var_1_32) < 0 ) ? -(var_1_34 & var_1_32) : (var_1_34 & var_1_32))) <= var_1_58) {
   var_1_72 = var_1_25;
  }
 }
 if ((-128 + var_1_36) >= -5) {
  var_1_73 = ((var_1_66 && var_1_74) || var_1_75);
 }
 if (! var_1_66) {
  if (var_1_73) {
   var_1_76 = ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)));
  }
 }
 if (var_1_63 != var_1_34) {
  if (var_1_55 <= (var_1_41 - var_1_40)) {
   var_1_77 = (var_1_40 + (((((((500.5f) < (var_1_78)) ? (500.5f) : (var_1_78))) < 0 ) ? -((((500.5f) < (var_1_78)) ? (500.5f) : (var_1_78))) : ((((500.5f) < (var_1_78)) ? (500.5f) : (var_1_78))))));
  } else {
   var_1_77 = var_1_39;
  }
 }
 if (16u >= (var_1_80 - var_1_44)) {
  var_1_79 = (var_1_49 + -32);
 } else {
  if (var_1_76 <= (var_1_54 % var_1_81)) {
   var_1_79 = ((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76)));
  }
 }
 var_1_82 = (((((var_1_78) < ((var_1_40 - var_1_83))) ? (var_1_78) : ((var_1_40 - var_1_83)))) + (((((var_1_84) > (var_1_85)) ? (var_1_84) : (var_1_85))) + var_1_86));
 if (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) < ((((var_1_58) > (var_1_68)) ? (var_1_58) : (var_1_68)))) {
  if (var_1_40 < ((((var_1_53 * var_1_82) < 0 ) ? -(var_1_53 * var_1_82) : (var_1_53 * var_1_82)))) {
   if (var_1_75) {
    var_1_87 = var_1_84;
   } else {
    var_1_87 = ((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84)));
   }
  }
 } else {
  var_1_87 = ((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83)));
 }
 if (var_1_45) {
  if (var_1_46 <= var_1_68) {
   var_1_88 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
  }
 } else {
  var_1_88 = (var_1_43 - ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))));
 }
 if ((var_1_40 - var_1_83) > var_1_39) {
  var_1_89 = ((! var_1_90) || (var_1_75 || var_1_66));
 } else {
  if ((var_1_69 ^ var_1_37) > (-50 + var_1_57)) {
   var_1_89 = (var_1_73 || var_1_90);
  }
 }
 if (var_1_36 < (var_1_42 >> 8)) {
  var_1_91 = (var_1_31 + var_1_43);
 } else {
  var_1_91 = (((((var_1_92) < 0 ) ? -(var_1_92) : (var_1_92))) - var_1_69);
 }
 if (var_1_67 >= var_1_41) {
  var_1_93 = (((((((((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44)))) < (var_1_76)) ? (((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44)))) : (var_1_76))) < 0 ) ? -((((((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44)))) < (var_1_76)) ? (((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44)))) : (var_1_76))) : ((((((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44)))) < (var_1_76)) ? (((((var_1_35) < (var_1_44)) ? (var_1_35) : (var_1_44)))) : (var_1_76)))));
 } else {
  if (var_1_42 < (var_1_47 & 8)) {
   if (((var_1_63 >> var_1_79) > var_1_59) || var_1_24) {
    var_1_93 = (((((var_1_30 + var_1_28)) > (((((var_1_33) < (var_1_58)) ? (var_1_33) : (var_1_58))))) ? ((var_1_30 + var_1_28)) : (((((var_1_33) < (var_1_58)) ? (var_1_33) : (var_1_58))))));
   }
  } else {
   var_1_93 = ((((var_1_69) < (var_1_35)) ? (var_1_69) : (var_1_35)));
  }
 }
 if (! (var_1_53 > (var_1_70 + var_1_77))) {
  if (var_1_66) {
   var_1_94 = ((((var_1_92) < (var_1_43)) ? (var_1_92) : (var_1_43)));
  }
 } else {
  if ((var_1_49 + var_1_33) < (((((-32 % var_1_81)) < (var_1_79)) ? ((-32 % var_1_81)) : (var_1_79)))) {
   var_1_94 = ((((var_1_35) < (var_1_37)) ? (var_1_35) : (var_1_37)));
  } else {
   var_1_94 = var_1_58;
  }
 }
 if (var_1_52 > var_1_27) {
  if (var_1_49 < var_1_76) {
   var_1_95 = ((((50.5f) < 0 ) ? -(50.5f) : (50.5f)));
  } else {
   if (var_1_66) {
    var_1_95 = ((((var_1_85) < 0 ) ? -(var_1_85) : (var_1_85)));
   } else {
    var_1_95 = (var_1_85 + var_1_84);
   }
  }
 }
 if (var_1_24 || var_1_75) {
  if (var_1_75 && var_1_45) {
   if (((1534172761 - var_1_28) - var_1_76) > var_1_94) {
    var_1_96 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
   }
  }
 }
 if (var_1_67 == var_1_41) {
  if (((((var_1_32) > (var_1_68)) ? (var_1_32) : (var_1_68))) >= var_1_96) {
   var_1_97 = (((((((var_1_59) > (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))))) ? (var_1_59) : (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88)))))) < 0 ) ? -((((var_1_59) > (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))))) ? (var_1_59) : (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88)))))) : ((((var_1_59) > (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))))) ? (var_1_59) : (((((var_1_88) < 0 ) ? -(var_1_88) : (var_1_88))))))));
  } else {
   var_1_97 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  }
 } else {
  if (((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) > (var_1_50)) ? (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (var_1_50))) < (var_1_28 ^ var_1_44)) {
   var_1_97 = (var_1_92 - var_1_99);
  } else {
   var_1_97 = ((((var_1_28) > (var_1_81)) ? (var_1_28) : (var_1_81)));
  }
 }
 if (((((var_1_91) < (var_1_57)) ? (var_1_91) : (var_1_57))) > var_1_68) {
  if (var_1_24) {
   var_1_100 = var_1_66;
  } else {
   var_1_100 = (((var_1_26 > var_1_28) && (! var_1_90)) || var_1_74);
  }
 }
 if (var_1_83 <= var_1_85) {
  var_1_101 = (! var_1_75);
 }
 if (var_1_68 >= var_1_63) {
  var_1_102 = (((((((var_1_28) > (var_1_30)) ? (var_1_28) : (var_1_30))) < 0 ) ? -((((var_1_28) > (var_1_30)) ? (var_1_28) : (var_1_30))) : ((((var_1_28) > (var_1_30)) ? (var_1_28) : (var_1_30)))));
 }
 if (var_1_81 <= var_1_43) {
  if (var_1_75 || var_1_89) {
   var_1_103 = ((((10) < 0 ) ? -(10) : (10)));
  }
 } else {
  if (var_1_89) {
   var_1_103 = (((((((var_1_31) < (var_1_57)) ? (var_1_31) : (var_1_57))) < 0 ) ? -((((var_1_31) < (var_1_57)) ? (var_1_31) : (var_1_57))) : ((((var_1_31) < (var_1_57)) ? (var_1_31) : (var_1_57)))));
  } else {
   if ((var_1_94 + var_1_91) > var_1_31) {
    var_1_103 = (((((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) < 0 ) ? -((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) : ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))));
   } else {
    var_1_103 = var_1_30;
   }
  }
 }
 if (var_1_24) {
  var_1_104 = var_1_35;
 }
 var_1_105 = var_1_83;
 if (var_1_73) {
  var_1_106 = var_1_39;
 } else {
  var_1_106 = var_1_41;
 }
 var_1_107 = 2u;
 if (var_1_73) {
  var_1_108 = var_1_42;
 } else {
  var_1_108 = var_1_69;
 }
 var_1_109 = var_1_25;
 if (var_1_73) {
  var_1_110 = var_1_76;
 } else {
  var_1_110 = var_1_31;
 }
 if (var_1_74) {
  var_1_111 = var_1_83;
 } else {
  var_1_111 = var_1_40;
 }
 if (var_1_89) {
  var_1_112 = var_1_84;
 } else {
  var_1_112 = 100.6f;
 }
 if (var_1_73) {
  var_1_113 = var_1_28;
 } else {
  var_1_113 = var_1_33;
 }
 var_1_114 = var_1_78;
 if (var_1_75) {
  var_1_115 = var_1_78;
 } else {
  var_1_115 = var_1_83;
 }
 var_1_116 = var_1_27;
 if (var_1_89) {
  var_1_117 = var_1_31;
 }
 if (var_1_24) {
  var_1_118 = var_1_113;
 }
 if (var_1_30 >= var_1_58) {
  if (((((var_1_36) > (var_1_118)) ? (var_1_36) : (var_1_118))) == var_1_117) {
   if (((128.7f + var_1_86) / var_1_120) <= (var_1_38 * var_1_83)) {
    var_1_119 = var_1_28;
   }
  } else {
   var_1_119 = var_1_81;
  }
 }
 signed long int stepLocal_0 = last_1_var_1_16 / -2;
 if (last_1_var_1_10 <= stepLocal_0) {
  var_1_1 = (57907 - (last_1_var_1_16 + last_1_var_1_16));
 } else {
  var_1_1 = 1;
 }
 unsigned long int stepLocal_5 = (last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20);
 if (stepLocal_5 != last_1_var_1_10) {
  var_1_19 = var_1_9;
 } else {
  if (! (! last_1_var_1_6)) {
   var_1_19 = ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21));
  }
 }
 if (var_1_19) {
  var_1_6 = (last_1_var_1_6 || var_1_9);
 }
 signed char stepLocal_2 = var_1_11;
 if (! var_1_19) {
  if (((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= stepLocal_2) {
   var_1_14 = var_1_11;
  }
 }
 var_1_22 = var_1_15;
 unsigned short int stepLocal_4 = var_1_22;
 unsigned short int stepLocal_3 = var_1_22;
 if (stepLocal_3 >= var_1_12) {
  var_1_16 = (var_1_12 + var_1_17);
 } else {
  if (stepLocal_4 > var_1_22) {
   var_1_16 = ((((var_1_17) < (var_1_12)) ? (var_1_17) : (var_1_12)));
  } else {
   var_1_16 = var_1_12;
  }
 }
 signed long int stepLocal_1 = var_1_11 - var_1_12;
 if (stepLocal_1 < (((((((32) < (var_1_1)) ? (32) : (var_1_1))) < 0 ) ? -((((32) < (var_1_1)) ? (32) : (var_1_1))) : ((((32) < (var_1_1)) ? (32) : (var_1_1)))))) {
  var_1_10 = var_1_11;
 } else {
  if (var_1_19) {
   var_1_10 = var_1_16;
  } else {
   var_1_10 = var_1_16;
  }
 }
}
void updateVariables() {
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 4294967295);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -126);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -1);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 128);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 31);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 32);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 127);
 assume_abort_if_not(var_1_43 <= 254);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 31);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= -2147483647);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 4294967295);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= -2147483647);
 assume_abort_if_not(var_1_52 <= 2147483646);
 var_1_58 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 32);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 0);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 1);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 0);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 0);
 var_1_78 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_78 >= -461168.6018427382800e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 4611686.018427382800e+12F && var_1_78 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_80 >= 2147483647);
 assume_abort_if_not(var_1_80 <= 4294967295);
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 255);
 assume_abort_if_not(var_1_81 != 0);
 var_1_83 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_84 >= -230584.3009213691390e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691390e+12F && var_1_84 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_85 >= -230584.3009213691390e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691390e+12F && var_1_85 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_86 >= -230584.3009213691390e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 2305843.009213691390e+12F && var_1_86 >= 1.0e-20F ));
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 1);
 assume_abort_if_not(var_1_90 <= 1);
 var_1_92 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_92 >= 32767);
 assume_abort_if_not(var_1_92 <= 65534);
 var_1_99 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_99 >= 0);
 assume_abort_if_not(var_1_99 <= 32767);
 var_1_120 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_120 >= -922337.2036854776000e+13F && var_1_120 <= -1.0e-20F) || (var_1_120 <= 9223372.036854776000e+12F && var_1_120 >= 1.0e-20F ));
 assume_abort_if_not(var_1_120 != 0.0F);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((((last_1_var_1_10 <= (last_1_var_1_16 / -2)) ? (var_1_1 == ((unsigned short int) (57907 - (last_1_var_1_16 + last_1_var_1_16)))) : (var_1_1 == ((unsigned short int) 1))) && (var_1_19 ? (var_1_6 == ((unsigned char) (last_1_var_1_6 || var_1_9))) : 1)) && (((var_1_11 - var_1_12) < (((((((32) < (var_1_1)) ? (32) : (var_1_1))) < 0 ) ? -((((32) < (var_1_1)) ? (32) : (var_1_1))) : ((((32) < (var_1_1)) ? (32) : (var_1_1)))))) ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_19 ? (var_1_10 == ((signed long int) var_1_16)) : (var_1_10 == ((signed long int) var_1_16))))) && ((! var_1_19) ? ((((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= var_1_11) ? (var_1_14 == ((signed long int) var_1_11)) : 1) : 1)) && ((var_1_22 >= var_1_12) ? (var_1_16 == ((unsigned char) (var_1_12 + var_1_17))) : ((var_1_22 > var_1_22) ? (var_1_16 == ((unsigned char) ((((var_1_17) < (var_1_12)) ? (var_1_17) : (var_1_12))))) : (var_1_16 == ((unsigned char) var_1_12))))) && ((((last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20)) != last_1_var_1_10) ? (var_1_19 == ((unsigned char) var_1_9)) : ((! (! last_1_var_1_6)) ? (var_1_19 == ((unsigned char) ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21)))) : 1))) && (var_1_22 == ((unsigned short int) var_1_15))
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
