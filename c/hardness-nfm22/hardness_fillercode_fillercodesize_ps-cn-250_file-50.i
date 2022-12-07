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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = -2;
float var_1_13 = 999.4;
float var_1_14 = 100.425;
float var_1_15 = 3.375;
float var_1_16 = 15.9;
signed short int var_1_17 = -10;
signed short int var_1_18 = 18060;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 4;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 256;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 4;
unsigned char var_1_32 = 200;
double var_1_33 = 31.625;
unsigned char var_1_34 = 1;
double var_1_35 = 7.5;
double var_1_36 = 15.75;
double var_1_37 = 15.375;
unsigned short int var_1_38 = 16;
signed char var_1_39 = -5;
signed short int var_1_40 = -16;
signed short int var_1_41 = 10;
unsigned char var_1_42 = 16;
unsigned char var_1_43 = 64;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 16;
unsigned char var_1_46 = 5;
signed short int var_1_47 = -16;
unsigned char var_1_48 = 32;
double var_1_49 = 32.75;
double var_1_50 = 127.75;
double var_1_51 = 10.375;
double var_1_52 = 1.5;
double var_1_53 = 127.8;
double var_1_54 = 7.5;
signed char var_1_55 = -128;
double var_1_56 = 2.4;
float var_1_57 = 127.3;
float var_1_58 = 0.0;
float var_1_59 = 255.5;
float var_1_60 = 255.2;
signed char var_1_61 = -64;
signed char var_1_62 = -16;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 1;
signed long int var_1_67 = 25;
unsigned char var_1_68 = 1;
float var_1_69 = 1.8;
unsigned long int var_1_70 = 128;
unsigned long int var_1_71 = 4046274934;
unsigned long int var_1_72 = 2602341662;
signed short int var_1_73 = -25;
unsigned long int var_1_74 = 2;
unsigned long int var_1_75 = 8;
unsigned short int var_1_76 = 50;
float var_1_77 = -0.25;
signed char var_1_78 = -128;
signed char var_1_79 = 25;
signed char var_1_80 = -2;
signed char var_1_81 = 8;
signed char var_1_82 = 2;
signed short int var_1_83 = 4;
unsigned long int var_1_84 = 1541122451;
unsigned long int var_1_85 = 2037339516;
signed long int var_1_86 = 10000000;
unsigned char var_1_87 = 5;
double var_1_88 = -0.6;
unsigned char var_1_89 = 4;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 1;
signed short int var_1_92 = 128;
void initially(void) {
}
void step(void) {
 var_1_31 = var_1_32;
 if (! var_1_34) {
  var_1_33 = ((((var_1_35) > ((var_1_36 - var_1_37))) ? (var_1_35) : ((var_1_36 - var_1_37))));
 }
 if ((var_1_31 / var_1_39) < (var_1_32 % -32)) {
  var_1_38 = ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)));
 }
 if (var_1_34) {
  var_1_40 = (((((((var_1_32) < (var_1_41)) ? (var_1_32) : (var_1_41))) < 0 ) ? -((((var_1_32) < (var_1_41)) ? (var_1_32) : (var_1_41))) : ((((var_1_32) < (var_1_41)) ? (var_1_32) : (var_1_41)))));
 } else {
  var_1_40 = (var_1_32 - ((((128) < 0 ) ? -(128) : (128))));
 }
 if (var_1_33 < var_1_37) {
  var_1_42 = ((((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44))) - var_1_45) + var_1_46);
 }
 if (var_1_32 >= (var_1_45 ^ ((((var_1_39) > (var_1_48)) ? (var_1_39) : (var_1_48))))) {
  var_1_47 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 } else {
  var_1_47 = (-1 - var_1_43);
 }
 if (var_1_34) {
  if (var_1_33 > (((((3.2 + var_1_36)) > ((- var_1_37))) ? ((3.2 + var_1_36)) : ((- var_1_37))))) {
   var_1_49 = ((((((var_1_50) > (var_1_51)) ? (var_1_50) : (var_1_51))) + var_1_52) + var_1_53);
  }
 } else {
  if (var_1_51 != var_1_36) {
   if (((var_1_42 & var_1_48) * var_1_46) <= var_1_45) {
    var_1_49 = ((((var_1_51) > (((((((((var_1_52) > (var_1_36)) ? (var_1_52) : (var_1_36)))) < (((((var_1_35) < (var_1_50)) ? (var_1_35) : (var_1_50))))) ? (((((var_1_52) > (var_1_36)) ? (var_1_52) : (var_1_36)))) : (((((var_1_35) < (var_1_50)) ? (var_1_35) : (var_1_50)))))))) ? (var_1_51) : (((((((((var_1_52) > (var_1_36)) ? (var_1_52) : (var_1_36)))) < (((((var_1_35) < (var_1_50)) ? (var_1_35) : (var_1_50))))) ? (((((var_1_52) > (var_1_36)) ? (var_1_52) : (var_1_36)))) : (((((var_1_35) < (var_1_50)) ? (var_1_35) : (var_1_50)))))))));
   }
  }
 }
 if ((- var_1_38) < var_1_31) {
  if ((var_1_42 & (~ var_1_43)) <= ((~ var_1_46) * 16)) {
   var_1_54 = ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) > (4.6)) ? (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) : (4.6)));
  } else {
   var_1_54 = ((((((((var_1_53) < ((var_1_37 - var_1_36))) ? (var_1_53) : ((var_1_37 - var_1_36))))) < (var_1_35)) ? (((((var_1_53) < ((var_1_37 - var_1_36))) ? (var_1_53) : ((var_1_37 - var_1_36))))) : (var_1_35)));
  }
 }
 if (var_1_36 < (- (128.4 / var_1_56))) {
  var_1_55 = ((((((((-64) < 0 ) ? -(-64) : (-64)))) > (var_1_45)) ? (((((-64) < 0 ) ? -(-64) : (-64)))) : (var_1_45)));
 }
 if (var_1_42 < ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) {
  var_1_57 = ((((((var_1_58 - var_1_59) - ((((63.26f) < 0 ) ? -(63.26f) : (63.26f))))) < (var_1_52)) ? (((var_1_58 - var_1_59) - ((((63.26f) < 0 ) ? -(63.26f) : (63.26f))))) : (var_1_52)));
 } else {
  if (((((var_1_44) > ((var_1_43 ^ var_1_31))) ? (var_1_44) : ((var_1_43 ^ var_1_31)))) < 10) {
   if (var_1_34) {
    var_1_57 = ((((var_1_60) < (9.999999999999975E13f)) ? (var_1_60) : (9.999999999999975E13f)));
   } else {
    if (var_1_50 < var_1_33) {
     var_1_57 = (((((((var_1_35) > (var_1_51)) ? (var_1_35) : (var_1_51))) < 0 ) ? -((((var_1_35) > (var_1_51)) ? (var_1_35) : (var_1_51))) : ((((var_1_35) > (var_1_51)) ? (var_1_35) : (var_1_51)))));
    } else {
     var_1_57 = var_1_50;
    }
   }
  } else {
   var_1_57 = (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))) - var_1_58);
  }
 }
 if (2u <= var_1_45) {
  if (var_1_44 >= (var_1_46 % var_1_39)) {
   if (var_1_34) {
    var_1_61 = ((((var_1_45) > (var_1_62)) ? (var_1_45) : (var_1_62)));
   }
  }
 }
 if (var_1_37 < (var_1_49 * ((((25.7) < (var_1_35)) ? (25.7) : (var_1_35))))) {
  if (-16 > var_1_62) {
   var_1_63 = (((var_1_59 >= var_1_35) || var_1_64) && (var_1_65 && var_1_66));
  }
 }
 if (var_1_51 > ((((var_1_33) > (255.25)) ? (var_1_33) : (255.25)))) {
  var_1_67 = ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)));
 }
 if (var_1_65) {
  var_1_68 = ((((var_1_44) < (4)) ? (var_1_44) : (4)));
 }
 if (var_1_33 > 4.2) {
  var_1_69 = var_1_58;
 }
 if (var_1_52 > var_1_51) {
  var_1_70 = ((((1u) < 0 ) ? -(1u) : (1u)));
 } else {
  if ((var_1_67 / var_1_39) <= (var_1_55 * -256)) {
   var_1_70 = (((((((((var_1_71) > (var_1_72)) ? (var_1_71) : (var_1_72))) - var_1_43)) > (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) ? ((((((var_1_71) > (var_1_72)) ? (var_1_71) : (var_1_72))) - var_1_43)) : (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))));
  }
 }
 if (var_1_43 <= ((- var_1_31) >> var_1_62)) {
  if (var_1_59 <= var_1_49) {
   if (var_1_66 && ((var_1_31 & var_1_47) < var_1_44)) {
    var_1_73 = ((((((((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) > (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))))) > (var_1_62)) ? (((((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) > (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))))) : (var_1_62)));
   }
  }
 } else {
  var_1_73 = var_1_46;
 }
 if ((var_1_68 * 16) >= var_1_45) {
  var_1_74 = (((((((var_1_71) < (var_1_46)) ? (var_1_71) : (var_1_46))) < 0 ) ? -((((var_1_71) < (var_1_46)) ? (var_1_71) : (var_1_46))) : ((((var_1_71) < (var_1_46)) ? (var_1_71) : (var_1_46)))));
 }
 var_1_75 = ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)));
 if (((((var_1_48) < (var_1_72)) ? (var_1_48) : (var_1_72))) < ((var_1_44 * var_1_71) & (var_1_45 >> var_1_42))) {
  var_1_76 = var_1_45;
 }
 if (var_1_55 <= var_1_70) {
  var_1_77 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
 } else {
  var_1_77 = ((((var_1_52) > (var_1_35)) ? (var_1_52) : (var_1_35)));
 }
 if (var_1_55 > (var_1_62 >> var_1_41)) {
  var_1_78 = ((((((((var_1_45 - var_1_79) < 0 ) ? -(var_1_45 - var_1_79) : (var_1_45 - var_1_79)))) < (((((var_1_62) > (var_1_80)) ? (var_1_62) : (var_1_80))))) ? (((((var_1_45 - var_1_79) < 0 ) ? -(var_1_45 - var_1_79) : (var_1_45 - var_1_79)))) : (((((var_1_62) > (var_1_80)) ? (var_1_62) : (var_1_80))))));
 } else {
  if (var_1_65) {
   var_1_78 = (var_1_45 + (var_1_81 - var_1_82));
  }
 }
 if (var_1_80 > var_1_72) {
  if (var_1_37 <= var_1_77) {
   var_1_83 = ((((((((var_1_81 - var_1_79) < 0 ) ? -(var_1_81 - var_1_79) : (var_1_81 - var_1_79)))) > (((((var_1_45) > (var_1_42)) ? (var_1_45) : (var_1_42))))) ? (((((var_1_81 - var_1_79) < 0 ) ? -(var_1_81 - var_1_79) : (var_1_81 - var_1_79)))) : (((((var_1_45) > (var_1_42)) ? (var_1_45) : (var_1_42))))));
  }
 } else {
  if ((~ ((((64u) < 0 ) ? -(64u) : (64u)))) > ((var_1_84 + var_1_85) - var_1_45)) {
   var_1_83 = (var_1_43 - ((((var_1_68) < 0 ) ? -(var_1_68) : (var_1_68))));
  }
 }
 if (var_1_75 < ((((var_1_72) < (var_1_82)) ? (var_1_72) : (var_1_82)))) {
  var_1_86 = ((((var_1_44) > (var_1_80)) ? (var_1_44) : (var_1_80)));
 }
 if ((var_1_60 >= var_1_77) || var_1_65) {
  if ((~ var_1_68) >= var_1_41) {
   var_1_87 = ((((50) < 0 ) ? -(50) : (50)));
  } else {
   var_1_87 = var_1_79;
  }
 } else {
  var_1_87 = ((((((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81)))) < (var_1_46)) ? (((((var_1_81) < 0 ) ? -(var_1_81) : (var_1_81)))) : (var_1_46)));
 }
 if (var_1_85 < var_1_32) {
  var_1_88 = ((((((var_1_50 + var_1_52) + var_1_51)) < ((((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) + var_1_53))) ? (((var_1_50 + var_1_52) + var_1_51)) : ((((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))) + var_1_53))));
 } else {
  var_1_88 = 2.65;
 }
 var_1_89 = var_1_90;
 if (var_1_65) {
  var_1_91 = 1;
 }
 if (var_1_88 <= (var_1_37 - var_1_36)) {
  if ((25u % var_1_72) <= (var_1_75 & var_1_90)) {
   var_1_92 = (var_1_45 + var_1_68);
  } else {
   var_1_92 = var_1_41;
  }
 } else {
  var_1_92 = var_1_61;
 }
 if (var_1_8) {
  var_1_13 = (((((var_1_14 + var_1_15)) < (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16))))) ? ((var_1_14 + var_1_15)) : (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16))))));
 }
 if (var_1_8) {
  var_1_25 = (var_1_26 + var_1_27);
 }
 var_1_29 = var_1_27;
 var_1_30 = var_1_8;
 if ((var_1_29 > var_1_25) && var_1_30) {
  var_1_9 = var_1_25;
 } else {
  var_1_9 = ((((var_1_25) > ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25))))) ? (var_1_25) : ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25))))));
 }
 var_1_17 = ((var_1_18 - 25) - var_1_25);
 signed long int stepLocal_2 = var_1_25 + var_1_17;
 if (((var_1_18 % var_1_21) & ((((1u) < 0 ) ? -(1u) : (1u)))) < stepLocal_2) {
  var_1_20 = (var_1_23 || var_1_24);
 } else {
  var_1_20 = var_1_7;
 }
 signed short int stepLocal_3 = var_1_9;
 if ((~ var_1_29) > stepLocal_3) {
  var_1_28 = (! var_1_7);
 } else {
  var_1_28 = (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7)));
 }
 signed long int stepLocal_1 = (((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25));
 unsigned char stepLocal_0 = var_1_25;
 if (stepLocal_1 <= (var_1_25 - var_1_25)) {
  if (stepLocal_0 < var_1_25) {
   if (var_1_20) {
    var_1_1 = var_1_7;
   } else {
    var_1_1 = var_1_8;
   }
  }
 } else {
  var_1_1 = 0;
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 16382);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 4294967295);
 assume_abort_if_not(var_1_21 != 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -128);
 assume_abort_if_not(var_1_39 <= 127);
 assume_abort_if_not(var_1_39 != 0);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= -32766);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 63);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 63);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 63);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 127);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 255);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -230584.3009213691390e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -230584.3009213691390e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -230584.3009213691390e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691390e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 assume_abort_if_not(var_1_56 != 0.0F);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 4611686.018427382800e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -922337.2036854765600e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854765600e+12F && var_1_60 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -127);
 assume_abort_if_not(var_1_62 <= 126);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 1);
 assume_abort_if_not(var_1_64 <= 1);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 1);
 assume_abort_if_not(var_1_65 <= 1);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_71 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_71 >= 2147483647);
 assume_abort_if_not(var_1_71 <= 4294967294);
 var_1_72 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_72 >= 2147483647);
 assume_abort_if_not(var_1_72 <= 4294967294);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 126);
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= -127);
 assume_abort_if_not(var_1_80 <= 126);
 var_1_81 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 63);
 var_1_82 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_82 >= 0);
 assume_abort_if_not(var_1_82 <= 63);
 var_1_84 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_84 >= 1073741823);
 assume_abort_if_not(var_1_84 <= 2147483648);
 var_1_85 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_85 >= 1073741824);
 assume_abort_if_not(var_1_85 <= 2147483647);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 0);
 assume_abort_if_not(var_1_90 <= 254);
}
void updateLastVariables() {
}
int property() {
 return (((((((((((((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25))) <= (var_1_25 - var_1_25)) ? ((var_1_25 < var_1_25) ? (var_1_20 ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_8))) : 1) : (var_1_1 == ((unsigned char) 0))) && (((var_1_29 > var_1_25) && var_1_30) ? (var_1_9 == ((signed short int) var_1_25)) : (var_1_9 == ((signed short int) ((((var_1_25) > ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25))))) ? (var_1_25) : ((((((var_1_25 - 10)) < (var_1_25)) ? ((var_1_25 - 10)) : (var_1_25)))))))))) && (var_1_8 ? (var_1_13 == ((float) (((((var_1_14 + var_1_15)) < (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16))))) ? ((var_1_14 + var_1_15)) : (((((-0.2f) < (var_1_16)) ? (-0.2f) : (var_1_16)))))))) : 1)) && (var_1_17 == ((signed short int) ((var_1_18 - 25) - var_1_25)))) && ((((var_1_18 % var_1_21) & ((((1u) < 0 ) ? -(1u) : (1u)))) < (var_1_25 + var_1_17)) ? (var_1_20 == ((unsigned char) (var_1_23 || var_1_24))) : (var_1_20 == ((unsigned char) var_1_7)))) && (var_1_8 ? (var_1_25 == ((unsigned char) (var_1_26 + var_1_27))) : 1)) && (((~ var_1_29) > var_1_9) ? (var_1_28 == ((unsigned char) (! var_1_7))) : (var_1_28 == ((unsigned char) (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7))))))) && (var_1_29 == ((unsigned short int) var_1_27))) && (var_1_30 == ((unsigned char) var_1_8))
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
