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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
signed short int var_1_4 = -200;
unsigned short int var_1_8 = 5;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 16;
unsigned char var_1_15 = 50;
unsigned short int var_1_16 = 1;
float var_1_17 = 25.4;
float var_1_20 = 1.6;
unsigned short int var_1_21 = 0;
float var_1_24 = 128.5;
double var_1_25 = -0.5;
signed long int var_1_26 = 4;
signed char var_1_27 = 2;
signed char var_1_28 = -16;
signed char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 8;
unsigned long int var_1_34 = 50;
signed char var_1_35 = -64;
signed char var_1_36 = 0;
unsigned long int var_1_37 = 8;
float var_1_38 = 63.2;
float var_1_39 = 3.2;
float var_1_40 = 63.71;
float var_1_41 = 64.5;
unsigned char var_1_42 = 0;
float var_1_43 = 9.6;
unsigned char var_1_44 = 1;
signed char var_1_45 = 64;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
signed short int var_1_49 = -4;
signed short int var_1_50 = 25;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 32;
unsigned char var_1_54 = 4;
signed short int var_1_55 = -4;
double var_1_56 = 127.125;
float var_1_57 = 999.75;
double var_1_58 = 32.2;
double var_1_59 = 8.375;
double var_1_60 = 3.9;
unsigned short int var_1_61 = 10;
signed char var_1_62 = 100;
signed long int var_1_63 = -16;
signed long int var_1_64 = 5;
signed long int var_1_65 = 256;
float var_1_66 = 0.5;
float var_1_67 = 499.8;
unsigned char var_1_68 = 5;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 1;
signed short int var_1_73 = 64;
float var_1_74 = 32.621;
unsigned char var_1_75 = 0;
unsigned long int var_1_76 = 3197327413;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
signed char var_1_79 = 16;
signed char var_1_80 = 32;
unsigned long int var_1_81 = 16;
double var_1_82 = 255.5;
unsigned char var_1_83 = 1;
double var_1_84 = 5.5;
double var_1_85 = 0.0;
double var_1_86 = 8.5;
double var_1_87 = 16.375;
double var_1_88 = 0.0;
double var_1_89 = 255.75;
signed short int var_1_90 = -256;
unsigned short int var_1_91 = 58323;
unsigned short int var_1_92 = 0;
unsigned char var_1_93 = 128;
double var_1_94 = 128.25;
unsigned long int var_1_95 = 10;
unsigned char var_1_96 = 2;
unsigned long int var_1_97 = 64;
unsigned long int var_1_98 = 8;
double var_1_99 = 4.5;
unsigned char last_1_var_1_9 = 1;
float last_1_var_1_24 = 128.5;
void initially(void) {
}
void step(void) {
 var_1_27 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) - var_1_29);
 if (var_1_31 && var_1_32) {
  var_1_30 = (((((((var_1_29) > (var_1_33)) ? (var_1_29) : (var_1_33))) < 0 ) ? -((((var_1_29) > (var_1_33)) ? (var_1_29) : (var_1_33))) : ((((var_1_29) > (var_1_33)) ? (var_1_29) : (var_1_33)))));
 }
 if (var_1_28 > var_1_30) {
  if (var_1_29 >= var_1_27) {
   var_1_34 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
  }
 }
 var_1_35 = (var_1_29 - var_1_36);
 if ((var_1_38 - var_1_39) >= (var_1_40 / ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) {
  if (var_1_27 < var_1_30) {
   var_1_37 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  }
 }
 if (var_1_40 == ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) {
  if (var_1_39 <= ((32.1f - var_1_38) / var_1_41)) {
   var_1_42 = (! var_1_44);
  }
 }
 var_1_45 = 10;
 if (var_1_45 <= (var_1_36 >> var_1_33)) {
  var_1_46 = (var_1_32 || var_1_44);
 } else {
  var_1_46 = (var_1_47 || var_1_48);
 }
 if (var_1_41 > var_1_39) {
  var_1_49 = ((((var_1_45) > (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (var_1_45) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))));
 } else {
  if (var_1_35 < var_1_29) {
   var_1_49 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  } else {
   if ((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) - var_1_38) >= var_1_41) {
    if (! (var_1_33 >= var_1_35)) {
     if ((var_1_39 - var_1_38) >= (- var_1_40)) {
      var_1_49 = ((((((((var_1_28) < (var_1_35)) ? (var_1_28) : (var_1_35))) + var_1_29) < 0 ) ? -(((((var_1_28) < (var_1_35)) ? (var_1_28) : (var_1_35))) + var_1_29) : (((((var_1_28) < (var_1_35)) ? (var_1_28) : (var_1_35))) + var_1_29)));
     }
    }
   } else {
    var_1_49 = (((((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) < 0 ) ? -((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) : ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))));
   }
  }
 }
 var_1_51 = (var_1_48 && (var_1_47 || var_1_52));
 if (var_1_43 > var_1_39) {
  if (var_1_33 <= var_1_27) {
   if (var_1_29 > var_1_27) {
    var_1_53 = ((((var_1_54) > (var_1_36)) ? (var_1_54) : (var_1_36)));
   } else {
    var_1_53 = (var_1_29 + var_1_36);
   }
  } else {
   if ((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) - var_1_38) >= var_1_43) {
    var_1_53 = (var_1_29 + var_1_36);
   } else {
    var_1_53 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
   }
  }
 }
 if (var_1_34 == ((var_1_30 >> 5) & (2341109546u - var_1_36))) {
  if ((var_1_39 < (128.25f * var_1_38)) || (((((50) < (var_1_54)) ? (50) : (var_1_54))) <= var_1_49)) {
   var_1_55 = ((((var_1_54) > (var_1_29)) ? (var_1_54) : (var_1_29)));
  } else {
   if (var_1_42) {
    var_1_55 = (((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) < 0 ) ? -((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) : ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))));
   }
  }
 }
 if (var_1_39 < ((var_1_41 / var_1_57) + var_1_38)) {
  var_1_56 = (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) + var_1_59);
 } else {
  if (var_1_51) {
   var_1_56 = (var_1_60 - ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))));
  }
 }
 if ((((((var_1_36) > (var_1_29)) ? (var_1_36) : (var_1_29))) - (var_1_62 - 1)) != (var_1_63 + (var_1_34 / var_1_64))) {
  var_1_61 = var_1_29;
 } else {
  var_1_61 = (((((((var_1_30) < (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))))) ? (var_1_30) : (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))))) < 0 ) ? -((((var_1_30) < (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))))) ? (var_1_30) : (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))))) : ((((var_1_30) < (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))))) ? (var_1_30) : (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))))))));
 }
 if (var_1_51) {
  var_1_65 = (((((var_1_50 + var_1_35)) < (var_1_30)) ? ((var_1_50 + var_1_35)) : (var_1_30)));
 }
 var_1_66 = (var_1_60 - var_1_67);
 if (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))) >= ((((10) < 0 ) ? -(10) : (10)))) {
  var_1_68 = var_1_33;
 }
 if ((16 * (var_1_49 ^ var_1_68)) > var_1_33) {
  var_1_69 = (var_1_44 && var_1_70);
 } else {
  if (var_1_42) {
   if (var_1_41 <= var_1_38) {
    var_1_69 = var_1_48;
   }
  }
 }
 var_1_71 = (var_1_72 && var_1_70);
 if (var_1_43 < var_1_38) {
  var_1_73 = ((((((((var_1_54) < (var_1_68)) ? (var_1_54) : (var_1_68)))) < (var_1_45)) ? (((((var_1_54) < (var_1_68)) ? (var_1_54) : (var_1_68)))) : (var_1_45)));
 }
 if ((((((31.9f) < 0 ) ? -(31.9f) : (31.9f))) / ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) > var_1_56) {
  var_1_74 = var_1_60;
 }
 if (var_1_53 < (var_1_50 | var_1_63)) {
  if ((var_1_29 * var_1_36) < (var_1_61 | var_1_73)) {
   if (var_1_67 > (var_1_60 / var_1_57)) {
    var_1_75 = ((var_1_47 || var_1_48) || (var_1_52 || (var_1_77 || var_1_78)));
   } else {
    var_1_75 = 0;
   }
  }
 }
 if (var_1_52) {
  var_1_79 = (var_1_29 - var_1_36);
 } else {
  if ((- var_1_59) > (((((- var_1_40)) < (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? ((- var_1_40)) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))))) {
   var_1_79 = (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - var_1_36);
  } else {
   if (var_1_72) {
    var_1_79 = (-2 + var_1_80);
   }
  }
 }
 if (var_1_51) {
  var_1_81 = var_1_33;
 }
 if (var_1_50 >= var_1_37) {
  if (var_1_42) {
   var_1_82 = (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67))) - var_1_60);
  }
 }
 if (var_1_31) {
  var_1_83 = var_1_77;
 }
 if (var_1_60 > var_1_39) {
  var_1_84 = ((((((var_1_85) < 0 ) ? -(var_1_85) : (var_1_85))) - ((((var_1_86) > (var_1_87)) ? (var_1_86) : (var_1_87)))) - (var_1_88 - var_1_89));
 }
 if ((var_1_91 - var_1_68) <= var_1_55) {
  if (((var_1_76 - var_1_91) + 128u) <= ((((var_1_61 / var_1_62) < 0 ) ? -(var_1_61 / var_1_62) : (var_1_61 / var_1_62)))) {
   var_1_90 = ((((var_1_28) > (var_1_80)) ? (var_1_28) : (var_1_80)));
  }
 }
 if (var_1_53 > (var_1_93 - 5)) {
  var_1_92 = (((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))));
 } else {
  var_1_92 = var_1_54;
 }
 if (var_1_78) {
  var_1_94 = var_1_89;
 } else {
  var_1_94 = var_1_59;
 }
 if (var_1_51) {
  var_1_95 = var_1_54;
 } else {
  var_1_95 = var_1_61;
 }
 var_1_96 = var_1_29;
 if (var_1_51) {
  var_1_97 = var_1_30;
 }
 if (! var_1_71) {
  if (var_1_46) {
   if (var_1_63 >= var_1_45) {
    if (var_1_82 >= (((((var_1_99) < 0 ) ? -(var_1_99) : (var_1_99))) * var_1_84)) {
     var_1_98 = var_1_62;
    }
   } else {
    var_1_98 = var_1_93;
   }
  } else {
   var_1_98 = var_1_93;
  }
 } else {
  var_1_98 = var_1_61;
 }
 if ((last_1_var_1_9 && var_1_11) && (50 > var_1_8)) {
  if ((- last_1_var_1_24) < last_1_var_1_24) {
   if (last_1_var_1_9) {
    var_1_12 = 5;
   }
  }
 } else {
  var_1_12 = var_1_15;
 }
 unsigned char stepLocal_1 = var_1_10;
 if ((var_1_12 != var_1_4) || stepLocal_1) {
  var_1_9 = var_1_11;
 }
 var_1_26 = var_1_12;
 if ((var_1_9 && var_1_11) && var_1_9) {
  var_1_21 = (var_1_26 + (var_1_15 + ((((var_1_12) > (var_1_12)) ? (var_1_12) : (var_1_12)))));
 } else {
  var_1_21 = ((23370 - var_1_15) + var_1_12);
 }
 signed long int stepLocal_2 = -4;
 if (! (-4 < var_1_12)) {
  var_1_24 = var_1_20;
 } else {
  if (stepLocal_2 > var_1_21) {
   var_1_24 = 10.6f;
  }
 }
 var_1_16 = (((((((((256) > (var_1_12)) ? (256) : (var_1_12))) + var_1_12)) < (var_1_15)) ? ((((((256) > (var_1_12)) ? (256) : (var_1_12))) + var_1_12)) : (var_1_15)));
 var_1_25 = var_1_20;
 unsigned short int stepLocal_0 = var_1_16;
 if (((var_1_16 * var_1_16) / var_1_4) <= stepLocal_0) {
  var_1_1 = var_1_12;
 } else {
  var_1_1 = (var_1_12 + var_1_12);
 }
 if ((var_1_16 - ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))) < (var_1_12 - var_1_16)) {
  var_1_17 = var_1_20;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -126);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 assume_abort_if_not(var_1_41 != 0.0F);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= -32766);
 assume_abort_if_not(var_1_50 <= 32766);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -922337.2036854776000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
 assume_abort_if_not(var_1_57 != 0.0F);
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= -461168.6018427382800e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= -461168.6018427382800e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854765600e+12F && var_1_60 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= 63);
 assume_abort_if_not(var_1_62 <= 127);
 var_1_63 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_63 >= -2147483648);
 assume_abort_if_not(var_1_63 <= 2147483647);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= -2147483648);
 assume_abort_if_not(var_1_64 <= 2147483647);
 assume_abort_if_not(var_1_64 != 0);
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 1);
 assume_abort_if_not(var_1_72 <= 1);
 var_1_76 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_76 >= 2147483647);
 assume_abort_if_not(var_1_76 <= 4294967295);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 0);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 0);
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= -63);
 assume_abort_if_not(var_1_80 <= 63);
 var_1_85 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_85 >= -922337.2036854765600e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= -461168.6018427382800e+13F && var_1_85 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427382800e+12F && var_1_86 >= 1.0e-20F ));
 var_1_87 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 4611686.018427382800e+12F && var_1_87 >= 1.0e-20F ));
 var_1_88 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_88 >= 4611686.018427382800e+12F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854765600e+12F && var_1_88 >= 1.0e-20F ));
 var_1_89 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 4611686.018427382800e+12F && var_1_89 >= 1.0e-20F ));
 var_1_91 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_91 >= 32767);
 assume_abort_if_not(var_1_91 <= 65535);
 var_1_93 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_93 >= 127);
 assume_abort_if_not(var_1_93 <= 255);
 var_1_99 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_99 >= -922337.2036854776000e+13F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854776000e+12F && var_1_99 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_24 = var_1_24;
}
int property() {
 return (((((((((((var_1_16 * var_1_16) / var_1_4) <= var_1_16) ? (var_1_1 == ((unsigned short int) var_1_12)) : (var_1_1 == ((unsigned short int) (var_1_12 + var_1_12)))) && (((var_1_12 != var_1_4) || var_1_10) ? (var_1_9 == ((unsigned char) var_1_11)) : 1)) && (((last_1_var_1_9 && var_1_11) && (50 > var_1_8)) ? (((- last_1_var_1_24) < last_1_var_1_24) ? (last_1_var_1_9 ? (var_1_12 == ((unsigned char) 5)) : 1) : 1) : (var_1_12 == ((unsigned char) var_1_15)))) && (var_1_16 == ((unsigned short int) (((((((((256) > (var_1_12)) ? (256) : (var_1_12))) + var_1_12)) < (var_1_15)) ? ((((((256) > (var_1_12)) ? (256) : (var_1_12))) + var_1_12)) : (var_1_15)))))) && (((var_1_16 - ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))) < (var_1_12 - var_1_16)) ? (var_1_17 == ((float) var_1_20)) : 1)) && (((var_1_9 && var_1_11) && var_1_9) ? (var_1_21 == ((unsigned short int) (var_1_26 + (var_1_15 + ((((var_1_12) > (var_1_12)) ? (var_1_12) : (var_1_12))))))) : (var_1_21 == ((unsigned short int) ((23370 - var_1_15) + var_1_12))))) && ((! (-4 < var_1_12)) ? (var_1_24 == ((float) var_1_20)) : ((-4 > var_1_21) ? (var_1_24 == ((float) 10.6f)) : 1))) && (var_1_25 == ((double) var_1_20))) && (var_1_26 == ((signed long int) var_1_12))
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
