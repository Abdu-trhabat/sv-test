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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch56PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 8;
signed long int var_1_10 = -5;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 32;
signed char var_1_19 = -50;
signed char var_1_20 = 32;
signed char var_1_21 = 5;
signed char var_1_22 = 16;
signed char var_1_23 = 2;
signed short int var_1_24 = -10;
signed short int var_1_25 = -128;
signed short int var_1_26 = 5;
signed long int var_1_27 = 32;
signed short int var_1_28 = 2;
signed short int var_1_29 = -64;
signed short int var_1_30 = -25;
unsigned long int var_1_31 = 5;
unsigned long int var_1_32 = 1491220871;
unsigned long int var_1_33 = 16;
signed long int var_1_34 = -256;
unsigned char var_1_35 = 1;
double var_1_36 = 64.5;
double var_1_37 = 1.25;
signed long int var_1_38 = 50;
signed char var_1_39 = -5;
double var_1_40 = 128.1;
signed char var_1_41 = 64;
signed char var_1_42 = 10;
signed char var_1_43 = -4;
float var_1_44 = 99.2;
signed short int var_1_45 = -32;
signed long int var_1_46 = 2;
signed long int var_1_47 = 1868181242;
signed long int var_1_48 = 0;
signed long int var_1_49 = 1000000000;
signed long int var_1_50 = 4;
float var_1_51 = -0.35;
float var_1_52 = 1.75;
float var_1_53 = 99999999999999.4;
float var_1_54 = 25.2;
double var_1_55 = 25.5;
double var_1_56 = 100.14;
unsigned long int var_1_57 = 128;
double var_1_58 = 100.5;
unsigned long int var_1_59 = 3582694781;
unsigned char var_1_60 = 8;
unsigned char var_1_61 = 100;
signed char var_1_62 = 100;
signed long int var_1_63 = -2;
signed long int var_1_64 = 64;
signed long int var_1_65 = -10000000;
signed char var_1_66 = -4;
float var_1_67 = 7.15;
unsigned char var_1_69 = 8;
float var_1_70 = 127.4;
float var_1_71 = 10000000000.5;
float var_1_72 = 16.25;
float var_1_73 = 10.6;
float var_1_74 = 0.0;
float var_1_75 = 0.0;
unsigned short int var_1_76 = 128;
signed short int var_1_77 = -8;
signed short int var_1_78 = 8;
float var_1_79 = 5.5;
double var_1_80 = 5.75;
unsigned char var_1_81 = 0;
float var_1_82 = 10.5;
double var_1_83 = 0.7;
unsigned char var_1_84 = 64;
float var_1_85 = 16.5;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 0;
signed long int var_1_88 = -25;
void initially(void) {
}
void step(void) {
 if ((var_1_25 ^ var_1_26) >= var_1_27) {
  var_1_24 = ((((((((var_1_28 + var_1_29) < 0 ) ? -(var_1_28 + var_1_29) : (var_1_28 + var_1_29)))) > (var_1_30)) ? (((((var_1_28 + var_1_29) < 0 ) ? -(var_1_28 + var_1_29) : (var_1_28 + var_1_29)))) : (var_1_30)));
 }
 if (1000000u > var_1_27) {
  var_1_31 = ((1831787952u + var_1_32) - var_1_33);
 } else {
  if (var_1_33 <= var_1_27) {
   var_1_31 = ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))));
  } else {
   var_1_31 = (((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))));
  }
 }
 if (var_1_35) {
  if (var_1_28 < (-2 ^ 1)) {
   var_1_34 = ((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) < (var_1_24)) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (var_1_24)));
  }
 }
 if (-5 != var_1_26) {
  var_1_36 = var_1_37;
 }
 if (var_1_26 < var_1_29) {
  var_1_38 = ((((((((((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28)))) < (var_1_26)) ? (((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28)))) : (var_1_26)))) < (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) ? (((((((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28)))) < (var_1_26)) ? (((((var_1_24) > (var_1_28)) ? (var_1_24) : (var_1_28)))) : (var_1_26)))) : (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))));
 }
 if (var_1_37 >= ((- var_1_36) * var_1_40)) {
  var_1_39 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 } else {
  var_1_39 = (var_1_42 - ((((-1 + var_1_43) < 0 ) ? -(-1 + var_1_43) : (-1 + var_1_43))));
 }
 if (var_1_34 > (var_1_33 - var_1_32)) {
  var_1_44 = var_1_37;
 }
 if (var_1_38 < var_1_39) {
  var_1_45 = var_1_30;
 }
 if (! var_1_35) {
  if (var_1_35 || (! (var_1_33 < var_1_34))) {
   var_1_46 = var_1_39;
  } else {
   var_1_46 = ((((var_1_41) > ((var_1_42 - (var_1_47 - var_1_48)))) ? (var_1_41) : ((var_1_42 - (var_1_47 - var_1_48)))));
  }
 }
 if (var_1_41 >= var_1_31) {
  if (var_1_27 <= (var_1_48 * var_1_43)) {
   var_1_49 = (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))));
  } else {
   var_1_49 = ((((var_1_39) > (var_1_50)) ? (var_1_39) : (var_1_50)));
  }
 } else {
  var_1_49 = ((((var_1_43) > (var_1_28)) ? (var_1_43) : (var_1_28)));
 }
 if (var_1_47 < (var_1_48 >> var_1_26)) {
  if ((2 >= var_1_49) && var_1_35) {
   var_1_51 = ((((var_1_37) < (var_1_52)) ? (var_1_37) : (var_1_52)));
  }
 } else {
  if (var_1_35 || (var_1_40 >= ((((var_1_37) > (var_1_44)) ? (var_1_37) : (var_1_44))))) {
   if ((- var_1_37) >= ((((var_1_44) < ((var_1_40 + var_1_52))) ? (var_1_44) : ((var_1_40 + var_1_52))))) {
    var_1_51 = (var_1_53 - var_1_54);
   } else {
    var_1_51 = (((((((((((var_1_54) > (var_1_37)) ? (var_1_54) : (var_1_37))) < 0 ) ? -((((var_1_54) > (var_1_37)) ? (var_1_54) : (var_1_37))) : ((((var_1_54) > (var_1_37)) ? (var_1_54) : (var_1_37)))))) < (((((var_1_52) > (var_1_53)) ? (var_1_52) : (var_1_53))))) ? ((((((((var_1_54) > (var_1_37)) ? (var_1_54) : (var_1_37))) < 0 ) ? -((((var_1_54) > (var_1_37)) ? (var_1_54) : (var_1_37))) : ((((var_1_54) > (var_1_37)) ? (var_1_54) : (var_1_37)))))) : (((((var_1_52) > (var_1_53)) ? (var_1_52) : (var_1_53))))));
   }
  } else {
   if (var_1_37 != var_1_40) {
    var_1_51 = (var_1_53 - var_1_54);
   }
  }
 }
 if (((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))) >= var_1_27) {
  var_1_55 = (var_1_54 - ((((var_1_53) < (var_1_56)) ? (var_1_53) : (var_1_56))));
 } else {
  var_1_55 = (((((((var_1_53 - 9.999999999999999E14) < 0 ) ? -(var_1_53 - 9.999999999999999E14) : (var_1_53 - 9.999999999999999E14))) < 0 ) ? -((((var_1_53 - 9.999999999999999E14) < 0 ) ? -(var_1_53 - 9.999999999999999E14) : (var_1_53 - 9.999999999999999E14))) : ((((var_1_53 - 9.999999999999999E14) < 0 ) ? -(var_1_53 - 9.999999999999999E14) : (var_1_53 - 9.999999999999999E14)))));
 }
 if (((((var_1_47) < (-50)) ? (var_1_47) : (-50))) >= var_1_27) {
  if ((50.8 / var_1_58) >= var_1_56) {
   var_1_57 = (var_1_59 - 8u);
  }
 } else {
  if (var_1_38 < (64 & var_1_43)) {
   if (var_1_35) {
    var_1_57 = (((((var_1_59 - var_1_32)) < ((var_1_48 + var_1_33))) ? ((var_1_59 - var_1_32)) : ((var_1_48 + var_1_33))));
   }
  }
 }
 if (var_1_45 > (var_1_32 << 1u)) {
  var_1_60 = ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)));
 }
 var_1_62 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 if (var_1_35) {
  if ((var_1_26 & var_1_34) > var_1_39) {
   if (var_1_26 <= (var_1_34 | var_1_38)) {
    var_1_63 = (var_1_29 + var_1_61);
   } else {
    var_1_63 = (((((((((((var_1_60) < (var_1_47)) ? (var_1_60) : (var_1_47))) < 0 ) ? -((((var_1_60) < (var_1_47)) ? (var_1_60) : (var_1_47))) : ((((var_1_60) < (var_1_47)) ? (var_1_60) : (var_1_47)))))) > (var_1_64)) ? ((((((((var_1_60) < (var_1_47)) ? (var_1_60) : (var_1_47))) < 0 ) ? -((((var_1_60) < (var_1_47)) ? (var_1_60) : (var_1_47))) : ((((var_1_60) < (var_1_47)) ? (var_1_60) : (var_1_47)))))) : (var_1_64)));
   }
  } else {
   var_1_63 = ((((((((var_1_39) > (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (var_1_39) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))))) < (var_1_60)) ? (((((var_1_39) > (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (var_1_39) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))))) : (var_1_60)));
  }
 } else {
  var_1_63 = (((((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) < 0 ) ? -((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65))) : ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))));
 }
 var_1_66 = ((((4) < 0 ) ? -(4) : (4)));
 if (var_1_69 > (var_1_27 & var_1_25)) {
  if ((var_1_40 + var_1_70) <= var_1_56) {
   if (var_1_56 >= (var_1_54 / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) {
    var_1_67 = (((((var_1_71) > (var_1_72)) ? (var_1_71) : (var_1_72))) + var_1_73);
   }
  } else {
   var_1_67 = ((((var_1_71) < (var_1_54)) ? (var_1_71) : (var_1_54)));
  }
 } else {
  var_1_67 = (((((var_1_56) < (var_1_54)) ? (var_1_56) : (var_1_54))) - (((((var_1_74) < (var_1_75)) ? (var_1_74) : (var_1_75))) - 4.5f));
 }
 if (var_1_28 < ((((var_1_45) > (var_1_25)) ? (var_1_45) : (var_1_25)))) {
  var_1_76 = (((((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) < 0 ) ? -((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) : ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))));
 } else {
  var_1_76 = ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)));
 }
 if (var_1_35) {
  if (16 != var_1_48) {
   var_1_77 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  }
 } else {
  var_1_77 = ((((((var_1_61 - var_1_69) + var_1_62)) < (var_1_66)) ? (((var_1_61 - var_1_69) + var_1_62)) : (var_1_66)));
 }
 if (var_1_47 <= ((((var_1_39) < (var_1_65)) ? (var_1_39) : (var_1_65)))) {
  if (var_1_56 <= 999.5) {
   if ((var_1_77 >= var_1_28) && var_1_35) {
    var_1_78 = ((((var_1_30) > (((((var_1_29) > (var_1_39)) ? (var_1_29) : (var_1_39))))) ? (var_1_30) : (((((var_1_29) > (var_1_39)) ? (var_1_29) : (var_1_39))))));
   } else {
    var_1_78 = ((((var_1_29) > (var_1_60)) ? (var_1_29) : (var_1_60)));
   }
  }
 }
 if (var_1_65 >= var_1_49) {
  var_1_79 = ((((var_1_71) > (((((var_1_75) > (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))))) ? (var_1_75) : (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73)))))))) ? (var_1_71) : (((((var_1_75) > (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))))) ? (var_1_75) : (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73)))))))));
 } else {
  if (var_1_49 == (var_1_29 + var_1_27)) {
   var_1_79 = ((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73)));
  }
 }
 if (var_1_54 > var_1_72) {
  var_1_80 = (((((((var_1_75) > (var_1_73)) ? (var_1_75) : (var_1_73))) < 0 ) ? -((((var_1_75) > (var_1_73)) ? (var_1_75) : (var_1_73))) : ((((var_1_75) > (var_1_73)) ? (var_1_75) : (var_1_73)))));
 }
 if (var_1_66 <= ((((100) < (var_1_78)) ? (100) : (var_1_78)))) {
  var_1_82 = (var_1_53 - 1.2f);
 } else {
  var_1_82 = var_1_54;
 }
 if (var_1_81) {
  var_1_83 = var_1_74;
 } else {
  var_1_83 = 1.5;
 }
 if (var_1_35) {
  var_1_84 = var_1_61;
 }
 var_1_85 = var_1_75;
 var_1_86 = var_1_87;
 if (((((var_1_44) < (var_1_85)) ? (var_1_44) : (var_1_85))) < ((((var_1_53 - var_1_56) < 0 ) ? -(var_1_53 - var_1_56) : (var_1_53 - var_1_56)))) {
  var_1_88 = (((((var_1_77) > (5)) ? (var_1_77) : (5))) + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))));
 } else {
  var_1_88 = var_1_39;
 }
 unsigned char stepLocal_0 = var_1_2;
 if (stepLocal_0 && var_1_3) {
  var_1_1 = ((! var_1_4) || (! (var_1_2 || var_1_5)));
 }
 var_1_12 = ((64 + var_1_13) - var_1_14);
 var_1_15 = ((var_1_16 - var_1_17) - 10);
 if (var_1_1) {
  var_1_18 = (var_1_16 - var_1_13);
 }
 signed long int stepLocal_2 = - (var_1_15 / var_1_13);
 if (stepLocal_2 <= (var_1_17 + var_1_18)) {
  var_1_19 = ((((var_1_16) < ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) ? (var_1_16) : ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))));
 } else {
  var_1_19 = ((((var_1_17) < (((var_1_20 + var_1_21) - var_1_22))) ? (var_1_17) : (((var_1_20 + var_1_21) - var_1_22))));
 }
 if (var_1_4) {
  var_1_6 = (var_1_15 + ((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18))));
 }
 signed long int stepLocal_1 = (((var_1_15) < ((var_1_18 / 256))) ? (var_1_15) : ((var_1_18 / 256)));
 if (var_1_18 >= stepLocal_1) {
  var_1_10 = var_1_19;
 } else {
  var_1_10 = ((((var_1_15) > (var_1_18)) ? (var_1_15) : (var_1_18)));
 }
 if (var_1_22 >= var_1_10) {
  var_1_23 = (var_1_21 + var_1_17);
 } else {
  if (! (var_1_18 >= var_1_22)) {
   var_1_23 = ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22)));
  } else {
   var_1_23 = var_1_17;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 64);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 190);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32768);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32768);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -16383);
 assume_abort_if_not(var_1_28 <= 16383);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -16383);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32767);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 1073741824);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -126);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -1);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -63);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= 1073741823);
 assume_abort_if_not(var_1_47 <= 2147483646);
 var_1_48 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 1073741823);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= -2147483647);
 assume_abort_if_not(var_1_50 <= 2147483646);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -922337.2036854765600e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= -922337.2036854776000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 assume_abort_if_not(var_1_58 != 0.0F);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 2147483647);
 assume_abort_if_not(var_1_59 <= 4294967294);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 254);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= -2147483647);
 assume_abort_if_not(var_1_64 <= 2147483646);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= -2147483646);
 assume_abort_if_not(var_1_65 <= 2147483646);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 255);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= -922337.2036854776000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854776000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= -461168.6018427382800e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= -461168.6018427382800e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_73 >= -461168.6018427382800e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427382800e+12F && var_1_73 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= 4611686.018427382800e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= 4611686.018427382800e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 1);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 0);
 assume_abort_if_not(var_1_87 <= 0);
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) ((! var_1_4) || (! (var_1_2 || var_1_5))))) : 1) && (var_1_4 ? (var_1_6 == ((unsigned short int) (var_1_15 + ((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18)))))) : 1)) && ((var_1_18 >= ((((var_1_15) < ((var_1_18 / 256))) ? (var_1_15) : ((var_1_18 / 256))))) ? (var_1_10 == ((signed long int) var_1_19)) : (var_1_10 == ((signed long int) ((((var_1_15) > (var_1_18)) ? (var_1_15) : (var_1_18))))))) && (var_1_12 == ((unsigned char) ((64 + var_1_13) - var_1_14)))) && (var_1_15 == ((unsigned char) ((var_1_16 - var_1_17) - 10)))) && (var_1_1 ? (var_1_18 == ((unsigned char) (var_1_16 - var_1_13))) : 1)) && (((- (var_1_15 / var_1_13)) <= (var_1_17 + var_1_18)) ? (var_1_19 == ((signed char) ((((var_1_16) < ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))))) ? (var_1_16) : ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) < 0 ) ? -((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) : ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))))) : (var_1_19 == ((signed char) ((((var_1_17) < (((var_1_20 + var_1_21) - var_1_22))) ? (var_1_17) : (((var_1_20 + var_1_21) - var_1_22)))))))) && ((var_1_22 >= var_1_10) ? (var_1_23 == ((signed char) (var_1_21 + var_1_17))) : ((! (var_1_18 >= var_1_22)) ? (var_1_23 == ((signed char) ((((var_1_20) < (var_1_22)) ? (var_1_20) : (var_1_22))))) : (var_1_23 == ((signed char) var_1_17))))
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
