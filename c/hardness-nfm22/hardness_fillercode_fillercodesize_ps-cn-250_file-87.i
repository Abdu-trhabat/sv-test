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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch87PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed long int var_1_2 = 5;
signed long int var_1_3 = 5;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 10;
signed long int var_1_6 = 256;
signed long int var_1_7 = 16;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 0;
double var_1_11 = 500.25;
double var_1_12 = 4.75;
double var_1_13 = 25.25;
double var_1_14 = 256.82;
double var_1_15 = 1.375;
signed long int var_1_16 = -256;
signed short int var_1_17 = 256;
signed long int var_1_18 = -5;
signed long int var_1_19 = 32;
signed long int var_1_20 = 64;
double var_1_21 = -0.5;
double var_1_22 = 49.4;
double var_1_23 = -0.34;
float var_1_24 = 10.5;
float var_1_25 = 100.05;
float var_1_26 = 3.95;
float var_1_27 = 50.2;
float var_1_28 = 256.8;
signed short int var_1_29 = -1;
signed short int var_1_30 = 128;
signed long int var_1_31 = 64;
unsigned short int var_1_32 = 49541;
unsigned short int var_1_33 = 64;
signed short int var_1_34 = -128;
signed short int var_1_35 = 1;
signed short int var_1_36 = 16;
signed short int var_1_37 = 128;
double var_1_38 = 9.5;
unsigned char var_1_39 = 1;
double var_1_40 = 2.25;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned long int var_1_46 = 2;
signed long int var_1_47 = -256;
unsigned long int var_1_48 = 100;
unsigned char var_1_49 = 4;
unsigned char var_1_50 = 128;
unsigned char var_1_51 = 64;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 64;
signed long int var_1_54 = -256;
float var_1_55 = 5.75;
float var_1_56 = -0.625;
signed short int var_1_57 = 50;
signed long int var_1_58 = 256;
signed long int var_1_59 = 128;
float var_1_60 = 15.6;
unsigned char var_1_61 = 2;
double var_1_62 = 3.08;
unsigned char var_1_63 = 64;
signed short int var_1_64 = -1;
signed short int var_1_65 = 128;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 64;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 0;
signed long int var_1_71 = -5;
unsigned long int var_1_72 = 16;
float var_1_73 = 256.8;
float var_1_74 = 32.25;
signed short int var_1_75 = 0;
signed long int var_1_76 = -128;
unsigned char var_1_77 = 0;
signed long int var_1_78 = 50;
float var_1_79 = 128.5;
float var_1_80 = 0.0;
float var_1_81 = 256.9;
float var_1_82 = 63.6;
signed long int var_1_83 = 32;
signed long int var_1_84 = -5;
float var_1_85 = 4.125;
float var_1_86 = 5.8;
signed long int var_1_87 = -128;
signed char var_1_88 = 4;
unsigned char var_1_89 = 1;
unsigned char var_1_90 = 32;
unsigned long int var_1_91 = 16;
signed short int var_1_92 = -64;
signed long int var_1_93 = -256;
unsigned char last_1_var_1_1 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_35 > (-100 ^ var_1_36)) {
  var_1_34 = ((((1) < (var_1_37)) ? (1) : (var_1_37)));
 }
 if ((var_1_37 >= var_1_34) || var_1_39) {
  var_1_38 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
 }
 if (-16 <= var_1_34) {
  if (var_1_40 <= var_1_38) {
   var_1_41 = (var_1_39 || (var_1_42 && (var_1_43 && var_1_44)));
  }
 } else {
  var_1_41 = (var_1_39 || (! var_1_45));
 }
 if ((((((((-8) < 0 ) ? -(-8) : (-8))) < 0 ) ? -((((-8) < 0 ) ? -(-8) : (-8))) : ((((-8) < 0 ) ? -(-8) : (-8))))) >= (((((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))) < 0 ) ? -((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))) : ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))))) {
  var_1_46 = ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)));
 }
 if ((var_1_50 - (var_1_51 + var_1_52)) < (~ (var_1_47 | var_1_36))) {
  if (var_1_51 != var_1_34) {
   var_1_49 = ((var_1_53 - var_1_52) + var_1_51);
  } else {
   var_1_49 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
  }
 }
 if ((var_1_48 ^ 4) > var_1_53) {
  var_1_54 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
 }
 if (var_1_56 <= var_1_38) {
  var_1_55 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
 } else {
  var_1_55 = var_1_40;
 }
 var_1_57 = (var_1_53 - var_1_52);
 if (var_1_36 >= 16) {
  var_1_58 = (((((((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) > (var_1_51)) ? (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) : (var_1_51))) - var_1_53);
 } else {
  if (var_1_45) {
   var_1_58 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
  }
 }
 if (((((var_1_38) > (var_1_56)) ? (var_1_38) : (var_1_56))) > (4.2 + var_1_40)) {
  var_1_60 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
 }
 if (! var_1_44) {
  var_1_61 = ((((((((var_1_53 + var_1_51) < 0 ) ? -(var_1_53 + var_1_51) : (var_1_53 + var_1_51)))) < (((((4) < (var_1_52)) ? (4) : (var_1_52))))) ? (((((var_1_53 + var_1_51) < 0 ) ? -(var_1_53 + var_1_51) : (var_1_53 + var_1_51)))) : (((((4) < (var_1_52)) ? (4) : (var_1_52))))));
 } else {
  if (var_1_42) {
   if ((var_1_60 / var_1_62) >= ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))) {
    var_1_61 = (((((((((var_1_51) > (var_1_53)) ? (var_1_51) : (var_1_53)))) > (var_1_52)) ? (((((var_1_51) > (var_1_53)) ? (var_1_51) : (var_1_53)))) : (var_1_52))) + ((((0) < (var_1_63)) ? (0) : (var_1_63))));
   }
  } else {
   var_1_61 = ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)));
  }
 }
 if (((var_1_63 + var_1_34) << var_1_37) <= var_1_35) {
  var_1_64 = ((((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) > (var_1_63)) ? (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))) : (var_1_63)));
 }
 if (((- var_1_40) > var_1_56) || ((var_1_52 * var_1_59) < var_1_47)) {
  var_1_65 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
 }
 if (var_1_44) {
  if (var_1_53 == (128 - (var_1_67 - var_1_52))) {
   var_1_66 = (var_1_45 || var_1_68);
  } else {
   var_1_66 = (var_1_41 && (var_1_45 && var_1_68));
  }
 } else {
  var_1_66 = (var_1_42 && var_1_43);
 }
 if (var_1_40 > var_1_55) {
  var_1_69 = (var_1_70 && (var_1_44 && (var_1_68 || var_1_45)));
 }
 if (var_1_43) {
  if ((- var_1_38) <= var_1_40) {
   if (var_1_37 != var_1_34) {
    var_1_71 = var_1_64;
   }
  }
 } else {
  if (var_1_46 >= var_1_58) {
   var_1_71 = (((((var_1_50 - var_1_51)) > ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) < 0 ) ? -((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) : ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))) ? ((var_1_50 - var_1_51)) : ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) < 0 ) ? -((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) : ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))))));
  }
 }
 if (var_1_42) {
  var_1_72 = ((((var_1_52) > (var_1_50)) ? (var_1_52) : (var_1_50)));
 }
 if (var_1_42) {
  if ((var_1_36 > var_1_34) || (var_1_71 < var_1_46)) {
   var_1_73 = ((((var_1_40) < (var_1_74)) ? (var_1_40) : (var_1_74)));
  }
 }
 if (var_1_47 < (var_1_59 & var_1_35)) {
  if (var_1_68) {
   var_1_75 = var_1_61;
  } else {
   var_1_75 = var_1_51;
  }
 }
 if (var_1_45) {
  if (var_1_70) {
   var_1_76 = ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) < (var_1_34)) ? (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : (var_1_34)));
  }
 } else {
  var_1_76 = var_1_35;
 }
 if (var_1_59 < ((((var_1_34) > ((var_1_67 % var_1_53))) ? (var_1_34) : ((var_1_67 % var_1_53))))) {
  if (var_1_78 < var_1_67) {
   var_1_77 = (((((((((var_1_67) > (var_1_53)) ? (var_1_67) : (var_1_53))) + var_1_63)) < (((((var_1_52) > (var_1_51)) ? (var_1_52) : (var_1_51))))) ? ((((((var_1_67) > (var_1_53)) ? (var_1_67) : (var_1_53))) + var_1_63)) : (((((var_1_52) > (var_1_51)) ? (var_1_52) : (var_1_51))))));
  } else {
   var_1_77 = ((((64) > (var_1_67)) ? (64) : (var_1_67)));
  }
 }
 if (var_1_41) {
  if (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) < 1.4f) {
   var_1_79 = (((var_1_80 - var_1_81) + var_1_82) - ((((0.2f) < 0 ) ? -(0.2f) : (0.2f))));
  } else {
   if ((var_1_78 >> ((((var_1_83) < 0 ) ? -(var_1_83) : (var_1_83)))) > var_1_47) {
    if (var_1_51 > (var_1_63 / var_1_67)) {
     if ((var_1_84 / var_1_67) <= var_1_76) {
      var_1_79 = (((((var_1_81) > (var_1_82)) ? (var_1_81) : (var_1_82))) + (var_1_80 - ((((var_1_85) < (var_1_86)) ? (var_1_85) : (var_1_86)))));
     } else {
      if (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) >= var_1_37) {
       var_1_79 = ((((((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80)))) < (var_1_82)) ? (((((var_1_80) < 0 ) ? -(var_1_80) : (var_1_80)))) : (var_1_82)));
      } else {
       if (var_1_69 && var_1_44) {
        var_1_79 = ((((var_1_81) > (var_1_80)) ? (var_1_81) : (var_1_80)));
       }
      }
     }
    }
   }
  }
 } else {
  if (var_1_81 >= var_1_82) {
   if ((var_1_77 ^ var_1_53) < var_1_49) {
    if ((var_1_60 * (var_1_81 - var_1_80)) < (- var_1_85)) {
     var_1_79 = var_1_40;
    }
   } else {
    var_1_79 = (var_1_81 + var_1_85);
   }
  } else {
   var_1_79 = (var_1_81 + (49.8f - var_1_85));
  }
 }
 if (var_1_65 >= ((((var_1_37) < (64)) ? (var_1_37) : (64)))) {
  if (var_1_65 <= ((((var_1_49) > ((var_1_63 + var_1_53))) ? (var_1_49) : ((var_1_63 + var_1_53))))) {
   if ((var_1_71 | var_1_78) <= var_1_50) {
    var_1_87 = var_1_75;
   }
  }
 } else {
  var_1_87 = var_1_34;
 }
 var_1_88 = var_1_83;
 if (var_1_41) {
  var_1_89 = 0;
 }
 if (var_1_41) {
  var_1_90 = 5;
 }
 if (var_1_69) {
  var_1_91 = 100u;
 } else {
  var_1_91 = var_1_53;
 }
 if ((var_1_59 + var_1_47) < (~ 10000000)) {
  if (var_1_39 && var_1_68) {
   var_1_92 = (var_1_52 - (var_1_90 + 32));
  }
 }
 var_1_93 = var_1_75;
 signed long int stepLocal_0 = var_1_2 - var_1_3;
 if (stepLocal_0 >= (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) {
  var_1_1 = (((var_1_4 || var_1_8) && last_1_var_1_1) || var_1_10);
 }
 var_1_11 = ((((((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) > ((var_1_14 - (5.8647808160282102E18 - var_1_15)))) ? (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) : ((var_1_14 - (5.8647808160282102E18 - var_1_15)))));
 var_1_21 = (var_1_22 - var_1_15);
 var_1_24 = (((((((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) > (var_1_26)) ? (((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) : (var_1_26))) + (var_1_27 + var_1_28));
 signed long int stepLocal_1 = var_1_6;
 if (stepLocal_1 <= ((var_1_18 * -50) + var_1_5)) {
  var_1_29 = var_1_30;
 }
 signed long int stepLocal_2 = var_1_32 - var_1_33;
 if (! (! var_1_1)) {
  if (stepLocal_2 != var_1_29) {
   var_1_31 = var_1_32;
  }
 } else {
  var_1_31 = var_1_33;
 }
 if ((var_1_3 % var_1_17) >= var_1_2) {
  var_1_16 = ((var_1_17 + var_1_29) + (var_1_19 - var_1_20));
 } else {
  if (var_1_1) {
   var_1_16 = var_1_17;
  } else {
   var_1_16 = var_1_17;
  }
 }
 if (((((var_1_7) < (var_1_2)) ? (var_1_7) : (var_1_2))) > var_1_29) {
  if (var_1_19 != var_1_20) {
   var_1_23 = ((((var_1_13) < (var_1_22)) ? (var_1_13) : (var_1_22)));
  }
 } else {
  var_1_23 = var_1_15;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32768);
 assume_abort_if_not(var_1_17 <= 32767);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -536870911);
 assume_abort_if_not(var_1_18 <= 536870911);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -230584.3009213691390e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691390e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -230584.3009213691390e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32767);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 32767);
 assume_abort_if_not(var_1_32 <= 65535);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= -32768);
 assume_abort_if_not(var_1_35 <= 32767);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= -32768);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= -32767);
 assume_abort_if_not(var_1_37 <= 32766);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_47 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_47 >= -2147483648);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 127);
 assume_abort_if_not(var_1_50 <= 255);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 64);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 63);
 assume_abort_if_not(var_1_53 <= 127);
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_59 >= -2147483646);
 assume_abort_if_not(var_1_59 <= 2147483646);
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
 assume_abort_if_not(var_1_62 != 0.0F);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 127);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 63);
 assume_abort_if_not(var_1_67 <= 127);
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 0);
 assume_abort_if_not(var_1_68 <= 0);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= -922337.2036854765600e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_78 >= -2147483648);
 assume_abort_if_not(var_1_78 <= 2147483647);
 var_1_80 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_80 >= 2305843.009213691390e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427382800e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 2305843.009213691390e+12F && var_1_81 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_83 >= -32);
 assume_abort_if_not(var_1_83 <= 32);
 var_1_84 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_84 >= -2147483648);
 assume_abort_if_not(var_1_84 <= 2147483647);
 var_1_85 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 4611686.018427382800e+12F && var_1_85 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427382800e+12F && var_1_86 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
}
int property() {
 return (((((((((var_1_2 - var_1_3) >= (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) ? (var_1_1 == ((unsigned char) (((var_1_4 || var_1_8) && last_1_var_1_1) || var_1_10))) : 1) && (var_1_11 == ((double) ((((((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) > ((var_1_14 - (5.8647808160282102E18 - var_1_15)))) ? (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))) : ((var_1_14 - (5.8647808160282102E18 - var_1_15)))))))) && (((var_1_3 % var_1_17) >= var_1_2) ? (var_1_16 == ((signed long int) ((var_1_17 + var_1_29) + (var_1_19 - var_1_20)))) : (var_1_1 ? (var_1_16 == ((signed long int) var_1_17)) : (var_1_16 == ((signed long int) var_1_17))))) && (var_1_21 == ((double) (var_1_22 - var_1_15)))) && ((((((var_1_7) < (var_1_2)) ? (var_1_7) : (var_1_2))) > var_1_29) ? ((var_1_19 != var_1_20) ? (var_1_23 == ((double) ((((var_1_13) < (var_1_22)) ? (var_1_13) : (var_1_22))))) : 1) : (var_1_23 == ((double) var_1_15)))) && (var_1_24 == ((float) (((((((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) > (var_1_26)) ? (((((var_1_15) > (var_1_25)) ? (var_1_15) : (var_1_25)))) : (var_1_26))) + (var_1_27 + var_1_28))))) && ((var_1_6 <= ((var_1_18 * -50) + var_1_5)) ? (var_1_29 == ((signed short int) var_1_30)) : 1)) && ((! (! var_1_1)) ? (((var_1_32 - var_1_33) != var_1_29) ? (var_1_31 == ((signed long int) var_1_32)) : 1) : (var_1_31 == ((signed long int) var_1_33)))
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
