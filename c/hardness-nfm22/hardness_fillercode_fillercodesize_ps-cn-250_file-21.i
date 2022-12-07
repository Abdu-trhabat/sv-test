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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 10;
signed char var_1_3 = 1;
signed char var_1_4 = 100;
signed char var_1_5 = 5;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
unsigned short int var_1_8 = 8;
unsigned short int var_1_10 = 21451;
unsigned char var_1_12 = 8;
unsigned short int var_1_13 = 16;
unsigned short int var_1_16 = 53444;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 1.2;
signed char var_1_20 = 1;
double var_1_21 = 10.5;
double var_1_22 = 0.0;
double var_1_23 = 10.4;
double var_1_24 = 50.5;
unsigned short int var_1_25 = 2;
signed long int var_1_26 = 500;
unsigned char var_1_27 = 0;
signed short int var_1_28 = -5;
signed short int var_1_29 = -10;
signed short int var_1_30 = -32;
float var_1_31 = 99.375;
signed short int var_1_32 = 32;
float var_1_33 = 7.5;
unsigned char var_1_34 = 8;
signed char var_1_35 = 0;
signed long int var_1_36 = 10;
unsigned char var_1_37 = 2;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 8;
unsigned long int var_1_40 = 10;
signed short int var_1_41 = -16;
unsigned long int var_1_42 = 100;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned long int var_1_47 = 32;
unsigned long int var_1_48 = 1972914524;
unsigned char var_1_49 = 16;
unsigned long int var_1_50 = 50;
unsigned char var_1_51 = 10;
unsigned short int var_1_52 = 5;
signed char var_1_53 = -16;
signed char var_1_54 = 0;
signed char var_1_55 = 8;
unsigned long int var_1_56 = 1;
unsigned long int var_1_57 = 128;
unsigned char var_1_58 = 8;
unsigned char var_1_59 = 8;
signed char var_1_60 = 0;
signed char var_1_61 = -8;
signed char var_1_62 = -4;
signed char var_1_63 = 32;
signed char var_1_64 = 4;
signed char var_1_65 = -100;
signed char var_1_66 = 0;
unsigned long int var_1_67 = 25;
double var_1_68 = -0.375;
double var_1_69 = 999999.2;
double var_1_70 = 64.276;
double var_1_71 = 255.6;
double var_1_72 = 64.4;
double var_1_73 = 1.25;
double var_1_74 = 1.6;
signed char var_1_75 = -1;
float var_1_76 = 32.5;
unsigned short int var_1_77 = 8;
double var_1_78 = 64.5;
double var_1_79 = 10.05;
double var_1_80 = 0.0;
double var_1_81 = 0.0;
double var_1_82 = -0.4;
unsigned char var_1_83 = 128;
double var_1_84 = 9.3;
unsigned char var_1_85 = 64;
unsigned char var_1_86 = 128;
unsigned char var_1_87 = 128;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 0;
signed char var_1_90 = -128;
unsigned long int var_1_91 = 256;
unsigned char var_1_92 = 128;
float var_1_93 = 7.6;
float var_1_94 = 100000000.4;
signed long int var_1_95 = -2;
unsigned short int last_1_var_1_8 = 8;
unsigned char last_1_var_1_12 = 8;
unsigned short int last_1_var_1_13 = 16;
unsigned char last_1_var_1_17 = 0;
unsigned short int last_1_var_1_25 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_27 && (var_1_28 > (var_1_29 / var_1_30))) {
  if (var_1_27) {
   var_1_26 = var_1_29;
  }
 }
 if (var_1_26 < var_1_30) {
  if (var_1_26 <= var_1_28) {
   if ((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) * 5) < var_1_30) {
    if (var_1_28 < var_1_32) {
     var_1_31 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
    }
   }
  }
 }
 if (var_1_30 < ((((var_1_26) < ((~ 2))) ? (var_1_26) : ((~ 2))))) {
  if ((var_1_29 & var_1_35) >= (var_1_36 ^ var_1_30)) {
   var_1_34 = ((((((((var_1_37) > (16)) ? (var_1_37) : (16)))) > (var_1_38)) ? (((((var_1_37) > (16)) ? (var_1_37) : (16)))) : (var_1_38)));
  } else {
   var_1_34 = ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38)));
  }
 }
 if ((var_1_26 | var_1_35) <= (~ var_1_38)) {
  var_1_39 = (((((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))) < 0 ) ? -((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37))) : ((((var_1_38) > (var_1_37)) ? (var_1_38) : (var_1_37)))));
 }
 if (var_1_26 > var_1_36) {
  if (var_1_33 > (- var_1_31)) {
   var_1_40 = (var_1_39 + ((((2u) > (var_1_37)) ? (2u) : (var_1_37))));
  }
 }
 if (var_1_37 < var_1_29) {
  var_1_41 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 }
 if (var_1_36 <= -25) {
  var_1_42 = var_1_37;
 }
 if (var_1_27 || var_1_44) {
  var_1_43 = 0;
 }
 if ((((((((var_1_28) < (var_1_30)) ? (var_1_28) : (var_1_30))) < 0 ) ? -((((var_1_28) < (var_1_30)) ? (var_1_28) : (var_1_30))) : ((((var_1_28) < (var_1_30)) ? (var_1_28) : (var_1_30))))) <= ((((var_1_34 + var_1_38) < 0 ) ? -(var_1_34 + var_1_38) : (var_1_34 + var_1_38)))) {
  var_1_45 = (! var_1_46);
 }
 if (var_1_45) {
  var_1_47 = (((var_1_48 - var_1_38) - var_1_37) + var_1_39);
 } else {
  var_1_47 = ((((var_1_48) > (10000000u)) ? (var_1_48) : (10000000u)));
 }
 if (var_1_45 && (var_1_30 < var_1_41)) {
  if ((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) / var_1_50) > (var_1_26 | var_1_47)) {
   var_1_49 = var_1_37;
  } else {
   var_1_49 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
  }
 }
 if (var_1_41 >= var_1_47) {
  var_1_51 = (((((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38))) < 0 ) ? -((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38))) : ((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38)))));
 }
 if (var_1_39 >= ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) {
  if (var_1_46) {
   var_1_52 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
  }
 }
 var_1_53 = (var_1_54 - var_1_55);
 if (((var_1_47 >> var_1_54) > var_1_57) && var_1_43) {
  var_1_56 = var_1_38;
 }
 if (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < var_1_31) {
  var_1_58 = (((((var_1_55 + var_1_59)) > (var_1_37)) ? ((var_1_55 + var_1_59)) : (var_1_37)));
 }
 if ((((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) < 0 ) ? -((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) : ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) > -128) {
  var_1_60 = (var_1_61 + var_1_62);
 } else {
  if (var_1_40 < (((((var_1_37 ^ var_1_26)) > (var_1_58)) ? ((var_1_37 ^ var_1_26)) : (var_1_58)))) {
   var_1_60 = (var_1_62 + ((var_1_63 - var_1_64) - ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))));
  } else {
   var_1_60 = (((((((var_1_63) > (var_1_61)) ? (var_1_63) : (var_1_61))) < 0 ) ? -((((var_1_63) > (var_1_61)) ? (var_1_63) : (var_1_61))) : ((((var_1_63) > (var_1_61)) ? (var_1_63) : (var_1_61)))));
  }
 }
 if (var_1_36 <= 5) {
  var_1_65 = (var_1_64 - (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) + var_1_63));
 }
 if (var_1_26 == (var_1_60 & var_1_36)) {
  if (((((9.125) < 0 ) ? -(9.125) : (9.125))) < var_1_31) {
   var_1_66 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
  } else {
   var_1_66 = (((((4) < (var_1_54)) ? (4) : (var_1_54))) - var_1_63);
  }
 }
 if (var_1_35 >= (~ var_1_56)) {
  var_1_67 = ((((var_1_37) < ((var_1_59 + 1u))) ? (var_1_37) : ((var_1_59 + 1u))));
 }
 if (var_1_27) {
  if (var_1_40 < var_1_59) {
   var_1_68 = ((((var_1_33) < (var_1_69)) ? (var_1_33) : (var_1_69)));
  } else {
   if (var_1_44) {
    var_1_68 = ((((((((var_1_70 + var_1_71)) > (((((var_1_33) > (var_1_69)) ? (var_1_33) : (var_1_69))))) ? ((var_1_70 + var_1_71)) : (((((var_1_33) > (var_1_69)) ? (var_1_33) : (var_1_69)))))) < 0 ) ? -(((((var_1_70 + var_1_71)) > (((((var_1_33) > (var_1_69)) ? (var_1_33) : (var_1_69))))) ? ((var_1_70 + var_1_71)) : (((((var_1_33) > (var_1_69)) ? (var_1_33) : (var_1_69)))))) : (((((var_1_70 + var_1_71)) > (((((var_1_33) > (var_1_69)) ? (var_1_33) : (var_1_69))))) ? ((var_1_70 + var_1_71)) : (((((var_1_33) > (var_1_69)) ? (var_1_33) : (var_1_69))))))));
   } else {
    if (5 <= (var_1_42 / var_1_50)) {
     var_1_68 = (var_1_70 + (var_1_72 + ((((var_1_73) < (var_1_74)) ? (var_1_73) : (var_1_74)))));
    } else {
     var_1_68 = ((((var_1_71) > (var_1_70)) ? (var_1_71) : (var_1_70)));
    }
   }
  }
 }
 if (var_1_55 <= var_1_62) {
  var_1_75 = ((((var_1_64) > (var_1_54)) ? (var_1_64) : (var_1_54)));
 } else {
  var_1_75 = ((((var_1_55) < (((((var_1_61 + 10) < 0 ) ? -(var_1_61 + 10) : (var_1_61 + 10))))) ? (var_1_55) : (((((var_1_61 + 10) < 0 ) ? -(var_1_61 + 10) : (var_1_61 + 10))))));
 }
 if (var_1_62 >= var_1_42) {
  var_1_76 = 15.25f;
 } else {
  var_1_76 = ((((var_1_71) < 0 ) ? -(var_1_71) : (var_1_71)));
 }
 if (var_1_35 <= var_1_29) {
  var_1_77 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 } else {
  if (var_1_44) {
   var_1_77 = ((((((((var_1_51) > (var_1_49)) ? (var_1_51) : (var_1_49)))) < (var_1_39)) ? (((((var_1_51) > (var_1_49)) ? (var_1_51) : (var_1_49)))) : (var_1_39)));
  }
 }
 if (var_1_71 >= var_1_73) {
  if ((((((var_1_35 | var_1_63)) > (var_1_32)) ? ((var_1_35 | var_1_63)) : (var_1_32))) < (var_1_54 ^ var_1_66)) {
   if ((var_1_39 | var_1_75) > (var_1_53 % var_1_30)) {
    var_1_78 = (var_1_79 - (var_1_80 - (var_1_81 - 1.0000000000008E12)));
   } else {
    var_1_78 = ((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)));
   }
  }
 } else {
  if (var_1_46) {
   var_1_78 = ((((var_1_71) < ((((((var_1_72) < (var_1_82)) ? (var_1_72) : (var_1_82))) + var_1_70))) ? (var_1_71) : ((((((var_1_72) < (var_1_82)) ? (var_1_72) : (var_1_82))) + var_1_70))));
  } else {
   if (! var_1_43) {
    if (var_1_43) {
     if (var_1_44) {
      var_1_78 = (var_1_70 + var_1_82);
     } else {
      var_1_78 = ((((var_1_70) < ((var_1_81 - var_1_80))) ? (var_1_70) : ((var_1_81 - var_1_80))));
     }
    }
   }
  }
 }
 if (var_1_74 != var_1_84) {
  var_1_83 = ((var_1_85 - ((((var_1_64) < 0 ) ? -(var_1_64) : (var_1_64)))) + ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))));
 } else {
  var_1_83 = (((((var_1_86) < (var_1_87)) ? (var_1_86) : (var_1_87))) - var_1_55);
 }
 if (var_1_44) {
  if (var_1_56 < var_1_38) {
   var_1_88 = var_1_46;
  } else {
   var_1_88 = var_1_89;
  }
 }
 var_1_90 = var_1_61;
 var_1_91 = var_1_77;
 var_1_92 = var_1_86;
 var_1_93 = var_1_80;
 if (var_1_27) {
  var_1_94 = var_1_82;
 }
 if ((var_1_49 / var_1_87) <= var_1_66) {
  if ((var_1_69 > ((((var_1_33) < (var_1_79)) ? (var_1_33) : (var_1_79)))) && var_1_27) {
   if (var_1_92 > var_1_37) {
    var_1_95 = var_1_29;
   }
  }
 }
 if ((last_1_var_1_8 < last_1_var_1_13) || last_1_var_1_17) {
  var_1_25 = (((((last_1_var_1_12) > (last_1_var_1_12)) ? (last_1_var_1_12) : (last_1_var_1_12))) + var_1_7);
 } else {
  var_1_25 = var_1_7;
 }
 signed long int stepLocal_1 = last_1_var_1_13;
 if (last_1_var_1_13 == stepLocal_1) {
  var_1_12 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 }
 var_1_8 = (((var_1_7 + var_1_6) + var_1_12) + (var_1_10 - var_1_12));
 signed long int stepLocal_0 = -1000000;
 if (var_1_8 >= stepLocal_0) {
  var_1_1 = ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)));
 } else {
  var_1_1 = (var_1_5 - ((var_1_6 - 8) + var_1_7));
 }
 signed char stepLocal_3 = var_1_1;
 if (stepLocal_3 >= (var_1_5 - var_1_20)) {
  var_1_19 = (((((var_1_21) < ((var_1_22 - var_1_23))) ? (var_1_21) : ((var_1_22 - var_1_23)))) - var_1_24);
 }
 if (((((((((last_1_var_1_12) > (var_1_6)) ? (last_1_var_1_12) : (var_1_6)))) < (last_1_var_1_8)) ? (((((last_1_var_1_12) > (var_1_6)) ? (last_1_var_1_12) : (var_1_6)))) : (last_1_var_1_8))) > (var_1_3 * last_1_var_1_25)) {
  var_1_17 = var_1_18;
 }
 unsigned short int stepLocal_2 = var_1_25;
 if (var_1_17) {
  if (((var_1_10 + var_1_12) << var_1_5) < stepLocal_2) {
   var_1_13 = ((((var_1_7) < (((((var_1_12) > (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6))))) ? (var_1_12) : (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6)))))))) ? (var_1_7) : (((((var_1_12) > (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6))))) ? (var_1_12) : (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6)))))))));
  } else {
   var_1_13 = (var_1_16 - (var_1_12 + var_1_12));
  }
 } else {
  var_1_13 = (var_1_16 - var_1_10);
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -127);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -127);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 31);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 16383);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 4611686.018427382800e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32768);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32768);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32768);
 assume_abort_if_not(var_1_30 <= 32767);
 assume_abort_if_not(var_1_30 != 0);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32768);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -128);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483648);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 254);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 1610612735);
 assume_abort_if_not(var_1_48 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 4294967295);
 assume_abort_if_not(var_1_50 != 0);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -1);
 assume_abort_if_not(var_1_54 <= 126);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 126);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 4294967295);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 127);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -63);
 assume_abort_if_not(var_1_61 <= 63);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -63);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 31);
 assume_abort_if_not(var_1_63 <= 63);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 31);
 var_1_69 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_69 >= -922337.2036854765600e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854765600e+12F && var_1_69 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= -461168.6018427382800e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427382800e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_71 >= -461168.6018427382800e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= -230584.3009213691390e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_73 >= -230584.3009213691390e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 2305843.009213691390e+12F && var_1_73 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= -230584.3009213691390e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691390e+12F && var_1_74 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854765600e+12F && var_1_79 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 4611686.018427382800e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_81 >= 2305843.009213691390e+12F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_82 >= -461168.6018427382800e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_84 >= -922337.2036854776000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_85 >= 63);
 assume_abort_if_not(var_1_85 <= 127);
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 127);
 assume_abort_if_not(var_1_86 <= 254);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 127);
 assume_abort_if_not(var_1_87 <= 254);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 0);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_25 = var_1_25;
}
int property() {
 return (((((((var_1_8 >= -1000000) ? (var_1_1 == ((signed char) ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))))) : (var_1_1 == ((signed char) (var_1_5 - ((var_1_6 - 8) + var_1_7))))) && (var_1_8 == ((unsigned short int) (((var_1_7 + var_1_6) + var_1_12) + (var_1_10 - var_1_12))))) && ((last_1_var_1_13 == last_1_var_1_13) ? (var_1_12 == ((unsigned char) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : 1)) && (var_1_17 ? ((((var_1_10 + var_1_12) << var_1_5) < var_1_25) ? (var_1_13 == ((unsigned short int) ((((var_1_7) < (((((var_1_12) > (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6))))) ? (var_1_12) : (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6)))))))) ? (var_1_7) : (((((var_1_12) > (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6))))) ? (var_1_12) : (((((var_1_12) < (var_1_6)) ? (var_1_12) : (var_1_6))))))))))) : (var_1_13 == ((unsigned short int) (var_1_16 - (var_1_12 + var_1_12))))) : (var_1_13 == ((unsigned short int) (var_1_16 - var_1_10))))) && ((((((((((last_1_var_1_12) > (var_1_6)) ? (last_1_var_1_12) : (var_1_6)))) < (last_1_var_1_8)) ? (((((last_1_var_1_12) > (var_1_6)) ? (last_1_var_1_12) : (var_1_6)))) : (last_1_var_1_8))) > (var_1_3 * last_1_var_1_25)) ? (var_1_17 == ((unsigned char) var_1_18)) : 1)) && ((var_1_1 >= (var_1_5 - var_1_20)) ? (var_1_19 == ((double) (((((var_1_21) < ((var_1_22 - var_1_23))) ? (var_1_21) : ((var_1_22 - var_1_23)))) - var_1_24))) : 1)) && (((last_1_var_1_8 < last_1_var_1_13) || last_1_var_1_17) ? (var_1_25 == ((unsigned short int) (((((last_1_var_1_12) > (last_1_var_1_12)) ? (last_1_var_1_12) : (last_1_var_1_12))) + var_1_7))) : (var_1_25 == ((unsigned short int) var_1_7)))
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
