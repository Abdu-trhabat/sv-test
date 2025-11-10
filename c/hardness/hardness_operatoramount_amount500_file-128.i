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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -16;
unsigned short int var_1_3 = 16;
double var_1_6 = 256.5;
double var_1_7 = 10000.4;
signed char var_1_9 = 2;
signed char var_1_10 = 64;
signed char var_1_11 = 8;
signed char var_1_12 = 0;
signed char var_1_13 = 32;
signed char var_1_14 = 25;
double var_1_15 = 31.875;
double var_1_17 = 999999999.5;
double var_1_18 = 64.5;
signed short int var_1_19 = 500;
double var_1_20 = 49.75;
double var_1_21 = 64.467;
unsigned char var_1_22 = 32;
unsigned long int var_1_23 = 1;
unsigned long int var_1_24 = 4;
unsigned short int var_1_25 = 10;
unsigned long int var_1_26 = 5;
signed long int var_1_27 = 4;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
float var_1_31 = 4.6;
float var_1_32 = 64.5;
signed long int var_1_33 = -64;
signed long int var_1_34 = 32;
signed long int var_1_35 = -16;
double var_1_36 = 99999.2;
double var_1_37 = 24.75;
double var_1_38 = 5.9;
double var_1_39 = 100.42;
double var_1_40 = 16.5;
double var_1_41 = 4.5;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 128;
unsigned char var_1_44 = 128;
float var_1_45 = 8.6;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 4;
signed long int var_1_49 = 1;
signed long int var_1_50 = 0;
unsigned short int var_1_51 = 256;
signed short int var_1_52 = 1;
signed short int var_1_53 = -1;
signed long int var_1_54 = -128;
signed long int var_1_55 = 4;
unsigned short int var_1_56 = 64;
signed long int var_1_57 = 1;
signed short int var_1_58 = 128;
signed short int var_1_59 = 23226;
unsigned short int var_1_60 = 16;
float var_1_61 = 0.4;
unsigned char var_1_62 = 1;
unsigned short int var_1_63 = 100;
unsigned long int var_1_64 = 5;
unsigned long int var_1_65 = 1228201218;
unsigned long int var_1_66 = 2083954031;
unsigned long int var_1_67 = 1957944472;
unsigned long int var_1_68 = 8;
signed char var_1_69 = 4;
float var_1_70 = -0.8;
float var_1_71 = 49.1;
float var_1_72 = 256.26;
float var_1_73 = 0.5;
float var_1_74 = 99.25;
float var_1_75 = 1.7;
unsigned long int var_1_76 = 10;
unsigned long int var_1_77 = 1258579148;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 1;
float var_1_80 = 3.475;
unsigned long int var_1_81 = 4;
unsigned long int var_1_82 = 3825314344;
signed long int var_1_83 = -16;
signed char var_1_84 = -10;
signed char var_1_85 = 1;
signed short int var_1_86 = 128;
unsigned char var_1_87 = 10;
unsigned short int var_1_88 = 10;
signed long int var_1_89 = 50;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 0;
unsigned short int var_1_92 = 16;
signed char var_1_93 = 4;
float var_1_94 = 255.25;
unsigned long int var_1_95 = 8;
unsigned char var_1_96 = 0;
signed short int var_1_97 = 4;
unsigned char var_1_98 = 64;
unsigned long int var_1_99 = 10;
unsigned long int var_1_100 = 0;
unsigned char var_1_101 = 1;
unsigned long int var_1_102 = 16;
unsigned long int var_1_103 = 64;
double var_1_104 = 25.5;
float var_1_105 = 49.1;
unsigned long int var_1_106 = 16;
unsigned long int var_1_107 = 1561101350;
signed long int var_1_108 = -1;
unsigned short int var_1_109 = 500;
signed char var_1_110 = 1;
signed long int last_1_var_1_33 = -64;
double last_1_var_1_36 = 99999.2;
unsigned char last_1_var_1_46 = 0;
signed short int last_1_var_1_53 = -1;
signed long int last_1_var_1_54 = -128;
signed long int last_1_var_1_57 = 1;
signed short int last_1_var_1_58 = 128;
unsigned short int last_1_var_1_63 = 100;
unsigned long int last_1_var_1_64 = 5;
unsigned long int last_1_var_1_68 = 8;
unsigned long int last_1_var_1_76 = 10;
unsigned char last_1_var_1_78 = 0;
unsigned long int last_1_var_1_81 = 4;
signed short int last_1_var_1_86 = 128;
signed long int last_1_var_1_89 = 50;
unsigned short int last_1_var_1_92 = 16;
unsigned long int last_1_var_1_95 = 8;
unsigned char last_1_var_1_98 = 64;
unsigned long int last_1_var_1_99 = 10;
double last_1_var_1_104 = 25.5;
unsigned long int last_1_var_1_106 = 16;
unsigned short int last_1_var_1_109 = 500;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_46 && var_1_29) {
  var_1_35 = (((((var_1_11 - last_1_var_1_68)) < (var_1_12)) ? ((var_1_11 - last_1_var_1_68)) : (var_1_12)));
 }
 if (var_1_47) {
  var_1_68 = var_1_44;
 } else {
  var_1_68 = (3678298549u - var_1_35);
 }
 signed long int stepLocal_5 = last_1_var_1_57 * last_1_var_1_63;
 signed long int stepLocal_4 = last_1_var_1_57;
 if (stepLocal_5 > (var_1_11 ^ last_1_var_1_106)) {
  if (last_1_var_1_64 >= stepLocal_4) {
   var_1_33 = (((((last_1_var_1_92 + ((((last_1_var_1_89) < (last_1_var_1_33)) ? (last_1_var_1_89) : (last_1_var_1_33))))) < ((last_1_var_1_63 + ((((16) < (var_1_3)) ? (16) : (var_1_3)))))) ? ((last_1_var_1_92 + ((((last_1_var_1_89) < (last_1_var_1_33)) ? (last_1_var_1_89) : (last_1_var_1_33))))) : ((last_1_var_1_63 + ((((16) < (var_1_3)) ? (16) : (var_1_3)))))));
  } else {
   var_1_33 = (last_1_var_1_81 - var_1_3);
  }
 } else {
  if (var_1_17 <= ((((var_1_7) < (last_1_var_1_104)) ? (var_1_7) : (last_1_var_1_104)))) {
   var_1_33 = (((var_1_34 + -16) + var_1_9) + -10);
  } else {
   var_1_33 = (((((((last_1_var_1_33) < (1)) ? (last_1_var_1_33) : (1))) < 0 ) ? -((((last_1_var_1_33) < (1)) ? (last_1_var_1_33) : (1))) : ((((last_1_var_1_33) < (1)) ? (last_1_var_1_33) : (1)))));
  }
 }
 unsigned long int stepLocal_21 = var_1_50 + var_1_65;
 unsigned long int stepLocal_20 = last_1_var_1_76;
 if ((var_1_40 * var_1_17) != ((((last_1_var_1_36) > (var_1_37)) ? (last_1_var_1_36) : (var_1_37)))) {
  if (var_1_65 < stepLocal_20) {
   var_1_83 = ((((last_1_var_1_54) > (var_1_49)) ? (last_1_var_1_54) : (var_1_49)));
  } else {
   var_1_83 = (var_1_13 - last_1_var_1_98);
  }
 } else {
  if (last_1_var_1_99 >= stepLocal_21) {
   var_1_83 = (last_1_var_1_109 - last_1_var_1_95);
  } else {
   var_1_83 = var_1_13;
  }
 }
 signed long int stepLocal_3 = var_1_83;
 if (stepLocal_3 > var_1_3) {
  var_1_28 = var_1_29;
 } else {
  var_1_28 = (var_1_29 || var_1_30);
 }
 if (var_1_40 == var_1_18) {
  var_1_46 = (var_1_29 || var_1_47);
 } else {
  if (! last_1_var_1_78) {
   var_1_46 = var_1_30;
  }
 }
 if (var_1_46) {
  if (var_1_18 >= ((var_1_7 / var_1_20) / var_1_21)) {
   var_1_19 = (((((var_1_10 - var_1_12)) > ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - (var_1_13 + var_1_11)))) ? ((var_1_10 - var_1_12)) : ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - (var_1_13 + var_1_11)))));
  } else {
   var_1_19 = ((((var_1_11) < (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))) ? (var_1_11) : (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))));
  }
 }
 if (var_1_46) {
  var_1_100 = var_1_82;
 }
 if (! var_1_46) {
  if (! (var_1_13 <= (var_1_12 - 100))) {
   var_1_15 = ((((var_1_7) < (var_1_17)) ? (var_1_7) : (var_1_17)));
  } else {
   var_1_15 = (((((var_1_7 - var_1_18)) < (var_1_17)) ? ((var_1_7 - var_1_18)) : (var_1_17)));
  }
 }
 unsigned short int stepLocal_2 = var_1_3;
 if ((4075667886u - ((((256u) < (var_1_13)) ? (256u) : (var_1_13)))) <= stepLocal_2) {
  var_1_23 = ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)));
 }
 if (49.8 > (- var_1_7)) {
  if (var_1_29) {
   var_1_31 = (((((127.4f - var_1_7)) < (((((((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) > (var_1_32)) ? (((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) : (var_1_32))))) ? ((127.4f - var_1_7)) : (((((((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) > (var_1_32)) ? (((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) : (var_1_32))))));
  }
 }
 signed long int stepLocal_7 = 1;
 if (stepLocal_7 >= var_1_11) {
  var_1_43 = (var_1_44 - var_1_12);
 }
 if ((var_1_40 / ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > 31.25) {
  var_1_51 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
 }
 var_1_52 = ((((var_1_44) > (var_1_10)) ? (var_1_44) : (var_1_10)));
 if (! var_1_47) {
  var_1_61 = var_1_38;
 } else {
  var_1_61 = (var_1_41 + (var_1_39 - var_1_38));
 }
 var_1_62 = (var_1_44 - var_1_10);
 var_1_64 = ((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) + (var_1_67 - last_1_var_1_64)) - last_1_var_1_64);
 var_1_80 = ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)));
 if (var_1_79) {
  var_1_86 = (last_1_var_1_86 + var_1_51);
 }
 if ((10 >> var_1_88) >= var_1_100) {
  if (var_1_29) {
   var_1_87 = (((((var_1_10 - var_1_13) < 0 ) ? -(var_1_10 - var_1_13) : (var_1_10 - var_1_13))) + var_1_85);
  } else {
   var_1_87 = (var_1_13 + var_1_11);
  }
 }
 if (var_1_80 >= var_1_39) {
  var_1_90 = ((! var_1_79) || var_1_30);
 } else {
  var_1_90 = ((! var_1_47) && var_1_91);
 }
 if (var_1_91) {
  var_1_94 = var_1_74;
 } else {
  var_1_94 = var_1_72;
 }
 if (var_1_79) {
  var_1_96 = var_1_30;
 } else {
  var_1_96 = var_1_29;
 }
 var_1_97 = 100;
 var_1_98 = var_1_85;
 if (var_1_47) {
  var_1_101 = var_1_29;
 } else {
  var_1_101 = var_1_30;
 }
 if (var_1_101) {
  var_1_103 = 64u;
 }
 var_1_104 = var_1_41;
 if (var_1_91) {
  var_1_105 = var_1_38;
 } else {
  var_1_105 = var_1_72;
 }
 var_1_108 = var_1_10;
 var_1_109 = var_1_12;
 var_1_110 = var_1_85;
 if (var_1_12 >= var_1_3) {
  if (((var_1_33 / var_1_3) + (var_1_12 | var_1_23)) <= var_1_13) {
   var_1_26 = ((((var_1_11) > (((((var_1_3) > (var_1_33)) ? (var_1_3) : (var_1_33))))) ? (var_1_11) : (((((var_1_3) > (var_1_33)) ? (var_1_3) : (var_1_33))))));
  }
 }
 signed long int stepLocal_1 = (var_1_83 * var_1_3) + var_1_10;
 if ((((((32) < (var_1_12)) ? (32) : (var_1_12))) + var_1_13) > stepLocal_1) {
  if (! var_1_46) {
   if (! (var_1_97 != var_1_9)) {
    var_1_22 = var_1_11;
   } else {
    var_1_22 = 0;
   }
  } else {
   var_1_22 = var_1_13;
  }
 } else {
  var_1_22 = var_1_13;
 }
 signed long int stepLocal_17 = var_1_50 - (var_1_44 + var_1_13);
 if (stepLocal_17 >= var_1_51) {
  var_1_57 = ((100 + var_1_19) - var_1_44);
 }
 unsigned char stepLocal_6 = var_1_90;
 if (var_1_29 || stepLocal_6) {
  var_1_42 = var_1_29;
 }
 if (var_1_101) {
  if (((var_1_103 / var_1_13) / var_1_10) <= (2 - ((((var_1_3) < (var_1_62)) ? (var_1_3) : (var_1_62))))) {
   var_1_45 = var_1_17;
  }
 }
 signed long int stepLocal_16 = var_1_13 - var_1_10;
 unsigned char stepLocal_15 = var_1_28;
 if (var_1_86 <= stepLocal_16) {
  var_1_56 = (var_1_11 + var_1_49);
 } else {
  if (var_1_42 || stepLocal_15) {
   var_1_56 = var_1_22;
  }
 }
 if (var_1_96) {
  var_1_63 = (((var_1_50 + var_1_44) + var_1_86) + var_1_11);
 }
 if (var_1_37 == (- var_1_18)) {
  var_1_69 = (((((var_1_14) < (var_1_50)) ? (var_1_14) : (var_1_50))) + ((((var_1_49) < (var_1_13)) ? (var_1_49) : (var_1_13))));
 } else {
  if (var_1_21 <= ((var_1_38 * var_1_15) / ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) {
   if (var_1_104 >= (var_1_7 - var_1_6)) {
    var_1_69 = 2;
   } else {
    var_1_69 = (var_1_9 - ((var_1_13 - var_1_12) + 1));
   }
  }
 }
 unsigned long int stepLocal_18 = var_1_103;
 if (-1 <= stepLocal_18) {
  var_1_70 = ((var_1_71 + ((((var_1_72) > (var_1_73)) ? (var_1_72) : (var_1_73)))) + ((var_1_74 + var_1_75) + 255.5f));
 }
 if (var_1_42) {
  var_1_76 = (((((var_1_67 + var_1_77) < 0 ) ? -(var_1_67 + var_1_77) : (var_1_67 + var_1_77))) - var_1_65);
 }
 var_1_95 = var_1_63;
 signed long int stepLocal_19 = (((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35));
 if ((- last_1_var_1_81) >= stepLocal_19) {
  var_1_81 = (var_1_82 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))));
 } else {
  var_1_81 = ((((var_1_76) < ((1u + var_1_63))) ? (var_1_76) : ((1u + var_1_63))));
 }
 unsigned long int stepLocal_11 = var_1_81;
 if (stepLocal_11 > ((((var_1_34) > (last_1_var_1_53)) ? (var_1_34) : (last_1_var_1_53)))) {
  var_1_53 = 100;
 } else {
  var_1_53 = ((((var_1_95) > (var_1_14)) ? (var_1_95) : (var_1_14)));
 }
 if (! last_1_var_1_78) {
  var_1_78 = var_1_29;
 } else {
  if (var_1_29) {
   if (var_1_40 > (var_1_80 / var_1_21)) {
    var_1_78 = (! var_1_30);
   } else {
    if (((((var_1_26) > ((var_1_53 + var_1_100))) ? (var_1_26) : ((var_1_53 + var_1_100)))) <= var_1_59) {
     var_1_78 = (! ((! var_1_47) && var_1_30));
    } else {
     var_1_78 = ((! var_1_30) || var_1_47);
    }
   }
  } else {
   var_1_78 = (var_1_47 || (! (var_1_30 || var_1_79)));
  }
 }
 unsigned long int stepLocal_25 = 64u;
 if (stepLocal_25 > var_1_95) {
  var_1_92 = ((((last_1_var_1_92) < (var_1_49)) ? (last_1_var_1_92) : (var_1_49)));
 } else {
  var_1_92 = var_1_50;
 }
 var_1_102 = var_1_92;
 if (var_1_79) {
  var_1_99 = var_1_92;
 } else {
  var_1_99 = var_1_35;
 }
 if (var_1_42 || (16u <= var_1_99)) {
  var_1_25 = ((((16) > (var_1_13)) ? (16) : (var_1_13)));
 } else {
  var_1_25 = var_1_13;
 }
 if (! (! (var_1_96 || var_1_30))) {
  if ((var_1_102 / (var_1_10 + var_1_13)) > var_1_103) {
   var_1_58 = ((((((((var_1_9) > ((-1 - var_1_11))) ? (var_1_9) : ((-1 - var_1_11))))) < (var_1_49)) ? (((((var_1_9) > ((-1 - var_1_11))) ? (var_1_9) : ((-1 - var_1_11))))) : (var_1_49)));
  } else {
   if (var_1_14 > (var_1_49 * var_1_11)) {
    var_1_58 = ((var_1_49 + var_1_33) - (var_1_59 - (var_1_50 + var_1_11)));
   } else {
    if (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < var_1_21) {
     var_1_58 = ((((last_1_var_1_58) < (var_1_52)) ? (last_1_var_1_58) : (var_1_52)));
    } else {
     var_1_58 = ((var_1_59 - var_1_33) - ((((((((var_1_10) > (var_1_12)) ? (var_1_10) : (var_1_12)))) < (last_1_var_1_58)) ? (((((var_1_10) > (var_1_12)) ? (var_1_10) : (var_1_12)))) : (last_1_var_1_58))));
    }
   }
  }
 }
 if (var_1_58 > (var_1_51 * var_1_50)) {
  var_1_60 = 32;
 }
 signed long int stepLocal_22 = var_1_83;
 if (var_1_99 > stepLocal_22) {
  var_1_84 = ((var_1_10 - var_1_85) - var_1_49);
 } else {
  if (! var_1_79) {
   var_1_84 = ((((10) < 0 ) ? -(10) : (10)));
  } else {
   var_1_84 = ((var_1_11 + ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) + var_1_14);
  }
 }
 unsigned char stepLocal_24 = (var_1_66 / var_1_10) > (var_1_11 * var_1_23);
 unsigned long int stepLocal_23 = var_1_102;
 if (stepLocal_23 <= var_1_64) {
  if (var_1_47 && stepLocal_24) {
   var_1_89 = (((((var_1_103 - var_1_88)) < (var_1_86)) ? ((var_1_103 - var_1_88)) : (var_1_86)));
  } else {
   var_1_89 = (var_1_11 + var_1_92);
  }
 } else {
  var_1_89 = (var_1_102 + ((((var_1_10) < (100)) ? (var_1_10) : (100))));
 }
 if (var_1_58 <= var_1_95) {
  var_1_93 = ((((var_1_9) > (var_1_88)) ? (var_1_9) : (var_1_88)));
 }
 unsigned long int stepLocal_14 = var_1_64;
 unsigned char stepLocal_13 = var_1_12 < var_1_33;
 signed long int stepLocal_12 = (var_1_10 - var_1_12) - var_1_11;
 if (var_1_30) {
  if (var_1_101) {
   var_1_54 = (-64 + ((var_1_13 + 1) - var_1_10));
  } else {
   if (var_1_22 <= stepLocal_12) {
    var_1_54 = (((((((((var_1_9 - var_1_23)) < (var_1_50)) ? ((var_1_9 - var_1_23)) : (var_1_50)))) < (((((var_1_44) < (var_1_14)) ? (var_1_44) : (var_1_14))))) ? ((((((var_1_9 - var_1_23)) < (var_1_50)) ? ((var_1_9 - var_1_23)) : (var_1_50)))) : (((((var_1_44) < (var_1_14)) ? (var_1_44) : (var_1_14))))));
   } else {
    if (var_1_28) {
     var_1_54 = ((((var_1_10) > (var_1_23)) ? (var_1_10) : (var_1_23)));
    } else {
     if ((var_1_3 > (var_1_64 ^ var_1_109)) || stepLocal_13) {
      var_1_54 = ((var_1_50 + (1000000000 - var_1_12)) - (var_1_55 + ((((var_1_97) < (var_1_44)) ? (var_1_97) : (var_1_44)))));
     }
    }
   }
  }
 } else {
  if ((var_1_49 * var_1_81) < stepLocal_14) {
   var_1_54 = (((((var_1_14 + ((((var_1_50) < (var_1_55)) ? (var_1_50) : (var_1_55))))) > (((((var_1_89) < (var_1_11)) ? (var_1_89) : (var_1_11))))) ? ((var_1_14 + ((((var_1_50) < (var_1_55)) ? (var_1_50) : (var_1_55))))) : (((((var_1_89) < (var_1_11)) ? (var_1_89) : (var_1_11))))));
  } else {
   if (var_1_46) {
    var_1_54 = (var_1_23 - var_1_49);
   } else {
    var_1_54 = ((((var_1_19) > (var_1_55)) ? (var_1_19) : (var_1_55)));
   }
  }
 }
 signed long int stepLocal_27 = var_1_83;
 signed long int stepLocal_26 = 0;
 if (stepLocal_27 < var_1_54) {
  var_1_106 = ((1838561683u + var_1_107) - var_1_26);
 } else {
  if (var_1_26 <= stepLocal_26) {
   var_1_106 = var_1_76;
  }
 }
 unsigned long int stepLocal_10 = var_1_81 + var_1_44;
 signed long int stepLocal_9 = var_1_11 << (var_1_49 + var_1_50);
 signed char stepLocal_8 = var_1_14;
 if (stepLocal_10 <= (((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11))) - var_1_13)) {
  if (var_1_9 < stepLocal_9) {
   var_1_48 = ((((((var_1_49 + var_1_13)) < (((((var_1_50) < (var_1_11)) ? (var_1_50) : (var_1_11))))) ? ((var_1_49 + var_1_13)) : (((((var_1_50) < (var_1_11)) ? (var_1_50) : (var_1_11)))))) + ((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12))));
  } else {
   var_1_48 = ((((var_1_13) > (var_1_44)) ? (var_1_13) : (var_1_44)));
  }
 } else {
  if ((((((var_1_44 * var_1_12)) > (var_1_89)) ? ((var_1_44 * var_1_12)) : (var_1_89))) >= stepLocal_8) {
   var_1_48 = ((((var_1_12) > ((var_1_50 + var_1_49))) ? (var_1_12) : ((var_1_50 + var_1_49))));
  } else {
   var_1_48 = (var_1_44 - var_1_49);
  }
 }
 if (var_1_101) {
  var_1_27 = (var_1_56 - var_1_54);
 }
 if (4.75f <= var_1_7) {
  var_1_36 = (var_1_18 - ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))));
 } else {
  if (((var_1_76 * var_1_68) < var_1_12) && (var_1_14 >= var_1_48)) {
   var_1_36 = ((var_1_37 - 1.4) + (((((var_1_38 - var_1_39)) > (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))) ? ((var_1_38 - var_1_39)) : (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41)))))));
  }
 }
 unsigned long int stepLocal_0 = var_1_103;
 if (((var_1_26 / var_1_3) * var_1_51) >= stepLocal_0) {
  if ((var_1_6 - (var_1_7 + 49.5)) > var_1_36) {
   var_1_1 = (var_1_9 - (var_1_10 - (var_1_11 + var_1_12)));
  } else {
   if (var_1_36 <= var_1_6) {
    var_1_1 = 16;
   } else {
    var_1_1 = (((((32 + (var_1_12 - var_1_11))) > (var_1_9)) ? ((32 + (var_1_12 - var_1_11))) : (var_1_9)));
   }
  }
 } else {
  var_1_1 = (((var_1_13 - var_1_12) - var_1_11) + var_1_14);
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 assume_abort_if_not(var_1_3 != 0);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427388000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 31);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 31);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 assume_abort_if_not(var_1_20 != 0.0F);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -268435455);
 assume_abort_if_not(var_1_34 <= 268435456);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 127);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 1073741823);
 var_1_59 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_59 >= 16383);
 assume_abort_if_not(var_1_59 <= 32766);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 1073741823);
 assume_abort_if_not(var_1_65 <= 2147483647);
 var_1_66 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_66 >= 1073741823);
 assume_abort_if_not(var_1_66 <= 2147483647);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 1610612735);
 assume_abort_if_not(var_1_67 <= 2147483647);
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= -230584.3009213691400e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= -230584.3009213691400e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_73 >= -230584.3009213691400e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691400e+12F && var_1_73 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= -115292.1504606845700e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 1152921.504606845700e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= -115292.1504606845700e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 1152921.504606845700e+12F && var_1_75 >= 1.0e-20F ));
 var_1_77 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_77 >= 1073741824);
 assume_abort_if_not(var_1_77 <= 2147483647);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 1);
 assume_abort_if_not(var_1_79 <= 1);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 2147483647);
 assume_abort_if_not(var_1_82 <= 4294967294);
 var_1_85 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 63);
 var_1_88 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_88 >= 1);
 assume_abort_if_not(var_1_88 <= 30);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 1);
 assume_abort_if_not(var_1_91 <= 1);
 var_1_107 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_107 >= 1073741824);
 assume_abort_if_not(var_1_107 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_33 = var_1_33;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_104 = var_1_104;
 last_1_var_1_106 = var_1_106;
 last_1_var_1_109 = var_1_109;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_26 / var_1_3) * var_1_51) >= var_1_103) ? (((var_1_6 - (var_1_7 + 49.5)) > var_1_36) ? (var_1_1 == ((signed char) (var_1_9 - (var_1_10 - (var_1_11 + var_1_12))))) : ((var_1_36 <= var_1_6) ? (var_1_1 == ((signed char) 16)) : (var_1_1 == ((signed char) (((((32 + (var_1_12 - var_1_11))) > (var_1_9)) ? ((32 + (var_1_12 - var_1_11))) : (var_1_9))))))) : (var_1_1 == ((signed char) (((var_1_13 - var_1_12) - var_1_11) + var_1_14)))) && ((! var_1_46) ? ((! (var_1_13 <= (var_1_12 - 100))) ? (var_1_15 == ((double) ((((var_1_7) < (var_1_17)) ? (var_1_7) : (var_1_17))))) : (var_1_15 == ((double) (((((var_1_7 - var_1_18)) < (var_1_17)) ? ((var_1_7 - var_1_18)) : (var_1_17)))))) : 1)) && (var_1_46 ? ((var_1_18 >= ((var_1_7 / var_1_20) / var_1_21)) ? (var_1_19 == ((signed short int) (((((var_1_10 - var_1_12)) > ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - (var_1_13 + var_1_11)))) ? ((var_1_10 - var_1_12)) : ((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - (var_1_13 + var_1_11))))))) : (var_1_19 == ((signed short int) ((((var_1_11) < (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))) ? (var_1_11) : (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))))))) : 1)) && (((((((32) < (var_1_12)) ? (32) : (var_1_12))) + var_1_13) > ((var_1_83 * var_1_3) + var_1_10)) ? ((! var_1_46) ? ((! (var_1_97 != var_1_9)) ? (var_1_22 == ((unsigned char) var_1_11)) : (var_1_22 == ((unsigned char) 0))) : (var_1_22 == ((unsigned char) var_1_13))) : (var_1_22 == ((unsigned char) var_1_13)))) && (((4075667886u - ((((256u) < (var_1_13)) ? (256u) : (var_1_13)))) <= var_1_3) ? (var_1_23 == ((unsigned long int) ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))) : 1)) && ((var_1_42 || (16u <= var_1_99)) ? (var_1_25 == ((unsigned short int) ((((16) > (var_1_13)) ? (16) : (var_1_13))))) : (var_1_25 == ((unsigned short int) var_1_13)))) && ((var_1_12 >= var_1_3) ? ((((var_1_33 / var_1_3) + (var_1_12 | var_1_23)) <= var_1_13) ? (var_1_26 == ((unsigned long int) ((((var_1_11) > (((((var_1_3) > (var_1_33)) ? (var_1_3) : (var_1_33))))) ? (var_1_11) : (((((var_1_3) > (var_1_33)) ? (var_1_3) : (var_1_33)))))))) : 1) : 1)) && (var_1_101 ? (var_1_27 == ((signed long int) (var_1_56 - var_1_54))) : 1)) && ((var_1_83 > var_1_3) ? (var_1_28 == ((unsigned char) var_1_29)) : (var_1_28 == ((unsigned char) (var_1_29 || var_1_30))))) && ((49.8 > (- var_1_7)) ? (var_1_29 ? (var_1_31 == ((float) (((((127.4f - var_1_7)) < (((((((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) > (var_1_32)) ? (((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) : (var_1_32))))) ? ((127.4f - var_1_7)) : (((((((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) > (var_1_32)) ? (((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))) : (var_1_32)))))))) : 1) : 1)) && (((last_1_var_1_57 * last_1_var_1_63) > (var_1_11 ^ last_1_var_1_106)) ? ((last_1_var_1_64 >= last_1_var_1_57) ? (var_1_33 == ((signed long int) (((((last_1_var_1_92 + ((((last_1_var_1_89) < (last_1_var_1_33)) ? (last_1_var_1_89) : (last_1_var_1_33))))) < ((last_1_var_1_63 + ((((16) < (var_1_3)) ? (16) : (var_1_3)))))) ? ((last_1_var_1_92 + ((((last_1_var_1_89) < (last_1_var_1_33)) ? (last_1_var_1_89) : (last_1_var_1_33))))) : ((last_1_var_1_63 + ((((16) < (var_1_3)) ? (16) : (var_1_3))))))))) : (var_1_33 == ((signed long int) (last_1_var_1_81 - var_1_3)))) : ((var_1_17 <= ((((var_1_7) < (last_1_var_1_104)) ? (var_1_7) : (last_1_var_1_104)))) ? (var_1_33 == ((signed long int) (((var_1_34 + -16) + var_1_9) + -10))) : (var_1_33 == ((signed long int) (((((((last_1_var_1_33) < (1)) ? (last_1_var_1_33) : (1))) < 0 ) ? -((((last_1_var_1_33) < (1)) ? (last_1_var_1_33) : (1))) : ((((last_1_var_1_33) < (1)) ? (last_1_var_1_33) : (1)))))))))) && ((last_1_var_1_46 && var_1_29) ? (var_1_35 == ((signed long int) (((((var_1_11 - last_1_var_1_68)) < (var_1_12)) ? ((var_1_11 - last_1_var_1_68)) : (var_1_12))))) : 1)) && ((4.75f <= var_1_7) ? (var_1_36 == ((double) (var_1_18 - ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))) : ((((var_1_76 * var_1_68) < var_1_12) && (var_1_14 >= var_1_48)) ? (var_1_36 == ((double) ((var_1_37 - 1.4) + (((((var_1_38 - var_1_39)) > (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))) ? ((var_1_38 - var_1_39)) : (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))))))) : 1))) && ((var_1_29 || var_1_90) ? (var_1_42 == ((unsigned char) var_1_29)) : 1)) && ((1 >= var_1_11) ? (var_1_43 == ((unsigned char) (var_1_44 - var_1_12))) : 1)) && (var_1_101 ? ((((var_1_103 / var_1_13) / var_1_10) <= (2 - ((((var_1_3) < (var_1_62)) ? (var_1_3) : (var_1_62))))) ? (var_1_45 == ((float) var_1_17)) : 1) : 1)) && ((var_1_40 == var_1_18) ? (var_1_46 == ((unsigned char) (var_1_29 || var_1_47))) : ((! last_1_var_1_78) ? (var_1_46 == ((unsigned char) var_1_30)) : 1))) && (((var_1_81 + var_1_44) <= (((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11))) - var_1_13)) ? ((var_1_9 < (var_1_11 << (var_1_49 + var_1_50))) ? (var_1_48 == ((unsigned char) ((((((var_1_49 + var_1_13)) < (((((var_1_50) < (var_1_11)) ? (var_1_50) : (var_1_11))))) ? ((var_1_49 + var_1_13)) : (((((var_1_50) < (var_1_11)) ? (var_1_50) : (var_1_11)))))) + ((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12)))))) : (var_1_48 == ((unsigned char) ((((var_1_13) > (var_1_44)) ? (var_1_13) : (var_1_44)))))) : (((((((var_1_44 * var_1_12)) > (var_1_89)) ? ((var_1_44 * var_1_12)) : (var_1_89))) >= var_1_14) ? (var_1_48 == ((unsigned char) ((((var_1_12) > ((var_1_50 + var_1_49))) ? (var_1_12) : ((var_1_50 + var_1_49)))))) : (var_1_48 == ((unsigned char) (var_1_44 - var_1_49)))))) && (((var_1_40 / ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > 31.25) ? (var_1_51 == ((unsigned short int) ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) : 1)) && (var_1_52 == ((signed short int) ((((var_1_44) > (var_1_10)) ? (var_1_44) : (var_1_10)))))) && ((var_1_81 > ((((var_1_34) > (last_1_var_1_53)) ? (var_1_34) : (last_1_var_1_53)))) ? (var_1_53 == ((signed short int) 100)) : (var_1_53 == ((signed short int) ((((var_1_95) > (var_1_14)) ? (var_1_95) : (var_1_14))))))) && (var_1_30 ? (var_1_101 ? (var_1_54 == ((signed long int) (-64 + ((var_1_13 + 1) - var_1_10)))) : ((var_1_22 <= ((var_1_10 - var_1_12) - var_1_11)) ? (var_1_54 == ((signed long int) (((((((((var_1_9 - var_1_23)) < (var_1_50)) ? ((var_1_9 - var_1_23)) : (var_1_50)))) < (((((var_1_44) < (var_1_14)) ? (var_1_44) : (var_1_14))))) ? ((((((var_1_9 - var_1_23)) < (var_1_50)) ? ((var_1_9 - var_1_23)) : (var_1_50)))) : (((((var_1_44) < (var_1_14)) ? (var_1_44) : (var_1_14)))))))) : (var_1_28 ? (var_1_54 == ((signed long int) ((((var_1_10) > (var_1_23)) ? (var_1_10) : (var_1_23))))) : (((var_1_3 > (var_1_64 ^ var_1_109)) || (var_1_12 < var_1_33)) ? (var_1_54 == ((signed long int) ((var_1_50 + (1000000000 - var_1_12)) - (var_1_55 + ((((var_1_97) < (var_1_44)) ? (var_1_97) : (var_1_44))))))) : 1)))) : (((var_1_49 * var_1_81) < var_1_64) ? (var_1_54 == ((signed long int) (((((var_1_14 + ((((var_1_50) < (var_1_55)) ? (var_1_50) : (var_1_55))))) > (((((var_1_89) < (var_1_11)) ? (var_1_89) : (var_1_11))))) ? ((var_1_14 + ((((var_1_50) < (var_1_55)) ? (var_1_50) : (var_1_55))))) : (((((var_1_89) < (var_1_11)) ? (var_1_89) : (var_1_11)))))))) : (var_1_46 ? (var_1_54 == ((signed long int) (var_1_23 - var_1_49))) : (var_1_54 == ((signed long int) ((((var_1_19) > (var_1_55)) ? (var_1_19) : (var_1_55))))))))) && ((var_1_86 <= (var_1_13 - var_1_10)) ? (var_1_56 == ((unsigned short int) (var_1_11 + var_1_49))) : ((var_1_42 || var_1_28) ? (var_1_56 == ((unsigned short int) var_1_22)) : 1))) && (((var_1_50 - (var_1_44 + var_1_13)) >= var_1_51) ? (var_1_57 == ((signed long int) ((100 + var_1_19) - var_1_44))) : 1)) && ((! (! (var_1_96 || var_1_30))) ? (((var_1_102 / (var_1_10 + var_1_13)) > var_1_103) ? (var_1_58 == ((signed short int) ((((((((var_1_9) > ((-1 - var_1_11))) ? (var_1_9) : ((-1 - var_1_11))))) < (var_1_49)) ? (((((var_1_9) > ((-1 - var_1_11))) ? (var_1_9) : ((-1 - var_1_11))))) : (var_1_49))))) : ((var_1_14 > (var_1_49 * var_1_11)) ? (var_1_58 == ((signed short int) ((var_1_49 + var_1_33) - (var_1_59 - (var_1_50 + var_1_11))))) : ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < var_1_21) ? (var_1_58 == ((signed short int) ((((last_1_var_1_58) < (var_1_52)) ? (last_1_var_1_58) : (var_1_52))))) : (var_1_58 == ((signed short int) ((var_1_59 - var_1_33) - ((((((((var_1_10) > (var_1_12)) ? (var_1_10) : (var_1_12)))) < (last_1_var_1_58)) ? (((((var_1_10) > (var_1_12)) ? (var_1_10) : (var_1_12)))) : (last_1_var_1_58))))))))) : 1)) && ((var_1_58 > (var_1_51 * var_1_50)) ? (var_1_60 == ((unsigned short int) 32)) : 1)) && ((! var_1_47) ? (var_1_61 == ((float) var_1_38)) : (var_1_61 == ((float) (var_1_41 + (var_1_39 - var_1_38)))))) && (var_1_62 == ((unsigned char) (var_1_44 - var_1_10)))) && (var_1_96 ? (var_1_63 == ((unsigned short int) (((var_1_50 + var_1_44) + var_1_86) + var_1_11))) : 1)) && (var_1_64 == ((unsigned long int) ((((((var_1_65) > (var_1_66)) ? (var_1_65) : (var_1_66))) + (var_1_67 - last_1_var_1_64)) - last_1_var_1_64)))) && (var_1_47 ? (var_1_68 == ((unsigned long int) var_1_44)) : (var_1_68 == ((unsigned long int) (3678298549u - var_1_35))))) && ((var_1_37 == (- var_1_18)) ? (var_1_69 == ((signed char) (((((var_1_14) < (var_1_50)) ? (var_1_14) : (var_1_50))) + ((((var_1_49) < (var_1_13)) ? (var_1_49) : (var_1_13)))))) : ((var_1_21 <= ((var_1_38 * var_1_15) / ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? ((var_1_104 >= (var_1_7 - var_1_6)) ? (var_1_69 == ((signed char) 2)) : (var_1_69 == ((signed char) (var_1_9 - ((var_1_13 - var_1_12) + 1))))) : 1))) && ((-1 <= var_1_103) ? (var_1_70 == ((float) ((var_1_71 + ((((var_1_72) > (var_1_73)) ? (var_1_72) : (var_1_73)))) + ((var_1_74 + var_1_75) + 255.5f)))) : 1)) && (var_1_42 ? (var_1_76 == ((unsigned long int) (((((var_1_67 + var_1_77) < 0 ) ? -(var_1_67 + var_1_77) : (var_1_67 + var_1_77))) - var_1_65))) : 1)) && ((! last_1_var_1_78) ? (var_1_78 == ((unsigned char) var_1_29)) : (var_1_29 ? ((var_1_40 > (var_1_80 / var_1_21)) ? (var_1_78 == ((unsigned char) (! var_1_30))) : ((((((var_1_26) > ((var_1_53 + var_1_100))) ? (var_1_26) : ((var_1_53 + var_1_100)))) <= var_1_59) ? (var_1_78 == ((unsigned char) (! ((! var_1_47) && var_1_30)))) : (var_1_78 == ((unsigned char) ((! var_1_30) || var_1_47))))) : (var_1_78 == ((unsigned char) (var_1_47 || (! (var_1_30 || var_1_79)))))))) && (var_1_80 == ((float) ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))))) && (((- last_1_var_1_81) >= ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) ? (var_1_81 == ((unsigned long int) (var_1_82 - ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) : (var_1_81 == ((unsigned long int) ((((var_1_76) < ((1u + var_1_63))) ? (var_1_76) : ((1u + var_1_63)))))))) && (((var_1_40 * var_1_17) != ((((last_1_var_1_36) > (var_1_37)) ? (last_1_var_1_36) : (var_1_37)))) ? ((var_1_65 < last_1_var_1_76) ? (var_1_83 == ((signed long int) ((((last_1_var_1_54) > (var_1_49)) ? (last_1_var_1_54) : (var_1_49))))) : (var_1_83 == ((signed long int) (var_1_13 - last_1_var_1_98)))) : ((last_1_var_1_99 >= (var_1_50 + var_1_65)) ? (var_1_83 == ((signed long int) (last_1_var_1_109 - last_1_var_1_95))) : (var_1_83 == ((signed long int) var_1_13))))) && ((var_1_99 > var_1_83) ? (var_1_84 == ((signed char) ((var_1_10 - var_1_85) - var_1_49))) : ((! var_1_79) ? (var_1_84 == ((signed char) ((((10) < 0 ) ? -(10) : (10))))) : (var_1_84 == ((signed char) ((var_1_11 + ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) + var_1_14)))))) && (var_1_79 ? (var_1_86 == ((signed short int) (last_1_var_1_86 + var_1_51))) : 1)) && (((10 >> var_1_88) >= var_1_100) ? (var_1_29 ? (var_1_87 == ((unsigned char) (((((var_1_10 - var_1_13) < 0 ) ? -(var_1_10 - var_1_13) : (var_1_10 - var_1_13))) + var_1_85))) : (var_1_87 == ((unsigned char) (var_1_13 + var_1_11)))) : 1)) && ((var_1_102 <= var_1_64) ? ((var_1_47 && ((var_1_66 / var_1_10) > (var_1_11 * var_1_23))) ? (var_1_89 == ((signed long int) (((((var_1_103 - var_1_88)) < (var_1_86)) ? ((var_1_103 - var_1_88)) : (var_1_86))))) : (var_1_89 == ((signed long int) (var_1_11 + var_1_92)))) : (var_1_89 == ((signed long int) (var_1_102 + ((((var_1_10) < (100)) ? (var_1_10) : (100)))))))) && ((var_1_80 >= var_1_39) ? (var_1_90 == ((unsigned char) ((! var_1_79) || var_1_30))) : (var_1_90 == ((unsigned char) ((! var_1_47) && var_1_91))))) && ((64u > var_1_95) ? (var_1_92 == ((unsigned short int) ((((last_1_var_1_92) < (var_1_49)) ? (last_1_var_1_92) : (var_1_49))))) : (var_1_92 == ((unsigned short int) var_1_50)))) && ((var_1_58 <= var_1_95) ? (var_1_93 == ((signed char) ((((var_1_9) > (var_1_88)) ? (var_1_9) : (var_1_88))))) : 1)) && (var_1_91 ? (var_1_94 == ((float) var_1_74)) : (var_1_94 == ((float) var_1_72)))) && (var_1_95 == ((unsigned long int) var_1_63))) && (var_1_79 ? (var_1_96 == ((unsigned char) var_1_30)) : (var_1_96 == ((unsigned char) var_1_29)))) && (var_1_97 == ((signed short int) 100))) && (var_1_98 == ((unsigned char) var_1_85))) && (var_1_79 ? (var_1_99 == ((unsigned long int) var_1_92)) : (var_1_99 == ((unsigned long int) var_1_35)))) && (var_1_46 ? (var_1_100 == ((unsigned long int) var_1_82)) : 1)) && (var_1_47 ? (var_1_101 == ((unsigned char) var_1_29)) : (var_1_101 == ((unsigned char) var_1_30)))) && (var_1_102 == ((unsigned long int) var_1_92))) && (var_1_101 ? (var_1_103 == ((unsigned long int) 64u)) : 1)) && (var_1_104 == ((double) var_1_41))) && (var_1_91 ? (var_1_105 == ((float) var_1_38)) : (var_1_105 == ((float) var_1_72)))) && ((var_1_83 < var_1_54) ? (var_1_106 == ((unsigned long int) ((1838561683u + var_1_107) - var_1_26))) : ((var_1_26 <= 0) ? (var_1_106 == ((unsigned long int) var_1_76)) : 1))) && (var_1_108 == ((signed long int) var_1_10))) && (var_1_109 == ((unsigned short int) var_1_12))) && (var_1_110 == ((signed char) var_1_85))
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
