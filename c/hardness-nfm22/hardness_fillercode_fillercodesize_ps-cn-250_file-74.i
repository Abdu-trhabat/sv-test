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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch74PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 64;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 3914692693;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 50;
signed long int var_1_12 = 25;
signed long int var_1_13 = 1;
float var_1_15 = 4.75;
unsigned char var_1_16 = 100;
float var_1_17 = 50.1;
float var_1_18 = 100.9;
float var_1_19 = 8.5;
float var_1_20 = 10.625;
float var_1_21 = 0.0;
float var_1_22 = 7.8;
float var_1_23 = 8.25;
double var_1_24 = 5.5;
signed char var_1_25 = -16;
unsigned long int var_1_26 = 2;
signed char var_1_27 = 4;
float var_1_28 = 3.5;
signed short int var_1_29 = -8;
signed short int var_1_30 = 256;
signed char var_1_31 = -32;
unsigned char var_1_32 = 0;
signed char var_1_33 = -4;
signed long int var_1_34 = 64;
signed long int var_1_35 = -32;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 5;
float var_1_39 = 32.2;
signed char var_1_40 = -5;
unsigned char var_1_41 = 1;
signed char var_1_42 = 8;
signed char var_1_43 = 4;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 4;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 8;
unsigned char var_1_52 = 10;
signed char var_1_53 = 2;
signed char var_1_54 = 50;
signed char var_1_55 = -8;
signed char var_1_56 = -10;
signed char var_1_57 = 1;
double var_1_58 = 3.15;
unsigned char var_1_59 = 5;
unsigned char var_1_60 = 0;
double var_1_61 = 100.8;
double var_1_62 = 4.82;
double var_1_63 = 8.8;
double var_1_64 = 31.5;
signed long int var_1_65 = -256;
signed char var_1_66 = -2;
signed char var_1_67 = 64;
signed char var_1_68 = 25;
unsigned long int var_1_69 = 256;
unsigned long int var_1_70 = 2849934412;
unsigned long int var_1_71 = 128;
signed long int var_1_72 = 10;
unsigned char var_1_73 = 0;
unsigned short int var_1_74 = 48957;
unsigned short int var_1_75 = 30890;
unsigned char var_1_76 = 0;
double var_1_77 = 3.5;
unsigned short int var_1_78 = 2;
unsigned short int var_1_79 = 41956;
unsigned short int var_1_80 = 256;
unsigned char var_1_81 = 4;
signed char var_1_82 = 8;
signed long int var_1_83 = -64;
unsigned long int var_1_84 = 32;
float var_1_85 = 10.5;
unsigned char var_1_86 = 128;
double var_1_87 = 499.25;
double var_1_88 = -0.75;
unsigned long int last_1_var_1_1 = 64;
unsigned char last_1_var_1_11 = 50;
void initially(void) {
}
void step(void) {
 if ((~ (var_1_26 % 200u)) < 32u) {
  var_1_25 = (64 - var_1_27);
 }
 if (var_1_25 > var_1_26) {
  var_1_28 = ((((4.2f) < (1.25f)) ? (4.2f) : (1.25f)));
 }
 if ((~ (5 + var_1_26)) >= 10000u) {
  var_1_29 = (((((var_1_25 + var_1_27)) > (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) ? ((var_1_25 + var_1_27)) : (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))));
 } else {
  var_1_29 = ((((((((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))) < 0 ) ? -((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))) : ((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))))) < 0 ) ? -(((((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))) < 0 ) ? -((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))) : ((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))))) : (((((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))) < 0 ) ? -((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30))) : ((((var_1_25) > (var_1_30)) ? (var_1_25) : (var_1_30)))))));
 }
 if (var_1_32) {
  var_1_31 = (var_1_27 - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))));
 }
 if (var_1_26 > 256u) {
  if (var_1_32) {
   var_1_34 = (((((((var_1_27) < (var_1_30)) ? (var_1_27) : (var_1_30))) < 0 ) ? -((((var_1_27) < (var_1_30)) ? (var_1_27) : (var_1_30))) : ((((var_1_27) < (var_1_30)) ? (var_1_27) : (var_1_30)))));
  }
 }
 if (var_1_32) {
  if (var_1_36 || var_1_37) {
   if (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) > var_1_31) {
    var_1_35 = var_1_31;
   }
  }
 }
 if (var_1_30 > var_1_26) {
  if (var_1_39 > 49.75f) {
   var_1_38 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
  }
 }
 if (! var_1_41) {
  var_1_40 = (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) - ((((var_1_42) > (var_1_43)) ? (var_1_42) : (var_1_43))));
 }
 if (-256 >= var_1_29) {
  var_1_44 = (! var_1_45);
 } else {
  var_1_44 = ((! var_1_46) || (! var_1_47));
 }
 if (var_1_31 == var_1_25) {
  if ((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) == var_1_35) && var_1_44) {
   var_1_48 = (256u + var_1_42);
  }
 }
 if ((var_1_42 % var_1_50) < var_1_26) {
  if ((var_1_40 / ((((-10) < 0 ) ? -(-10) : (-10)))) == var_1_29) {
   if (var_1_31 < (var_1_35 | var_1_29)) {
    var_1_49 = (var_1_27 + (((((0) < (var_1_51)) ? (0) : (var_1_51))) + var_1_52));
   } else {
    var_1_49 = ((((var_1_42) > (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) ? (var_1_42) : (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))));
   }
  }
 } else {
  var_1_49 = (((((var_1_52) < (((((var_1_43) > (var_1_51)) ? (var_1_43) : (var_1_51))))) ? (var_1_52) : (((((var_1_43) > (var_1_51)) ? (var_1_43) : (var_1_51)))))) + ((((var_1_42) > (((((8) < 0 ) ? -(8) : (8))))) ? (var_1_42) : (((((8) < 0 ) ? -(8) : (8)))))));
 }
 if (var_1_26 < var_1_38) {
  var_1_53 = (var_1_42 - (((((((var_1_33) > (var_1_43)) ? (var_1_33) : (var_1_43))) < 0 ) ? -((((var_1_33) > (var_1_43)) ? (var_1_33) : (var_1_43))) : ((((var_1_33) > (var_1_43)) ? (var_1_33) : (var_1_43))))));
 } else {
  if (var_1_33 >= (var_1_34 ^ var_1_43)) {
   var_1_53 = (var_1_52 + ((((var_1_54) < ((var_1_55 + var_1_56))) ? (var_1_54) : ((var_1_55 + var_1_56)))));
  } else {
   var_1_53 = ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)));
  }
 }
 if (var_1_32 && var_1_36) {
  var_1_57 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
 } else {
  var_1_57 = (5 - var_1_52);
 }
 if (! var_1_44) {
  if (var_1_34 < (var_1_25 >> (var_1_59 - var_1_60))) {
   var_1_58 = (var_1_61 - var_1_62);
  }
 } else {
  var_1_58 = (var_1_63 + var_1_64);
 }
 if (var_1_64 >= var_1_61) {
  var_1_65 = var_1_50;
 }
 if (((var_1_52 + var_1_51) <= var_1_54) || var_1_37) {
  var_1_66 = var_1_43;
 } else {
  var_1_66 = ((((var_1_67) > (var_1_42)) ? (var_1_67) : (var_1_42)));
 }
 if (var_1_50 < var_1_27) {
  if (((~ var_1_26) | var_1_35) < var_1_27) {
   var_1_68 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
  }
 }
 if (var_1_31 >= var_1_57) {
  if (var_1_25 > var_1_38) {
   if (var_1_66 >= 100) {
    var_1_69 = (var_1_70 - var_1_60);
   }
  } else {
   var_1_69 = ((((var_1_43) < ((((((var_1_42) < (var_1_50)) ? (var_1_42) : (var_1_50))) + var_1_59))) ? (var_1_43) : ((((((var_1_42) < (var_1_50)) ? (var_1_42) : (var_1_50))) + var_1_59))));
  }
 } else {
  if (var_1_36) {
   if (var_1_67 > ((((var_1_66) > (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) ? (var_1_66) : (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))))) {
    var_1_69 = ((((4u) > (((((var_1_59) > (((((8u) < (var_1_70)) ? (8u) : (var_1_70))))) ? (var_1_59) : (((((8u) < (var_1_70)) ? (8u) : (var_1_70)))))))) ? (4u) : (((((var_1_59) > (((((8u) < (var_1_70)) ? (8u) : (var_1_70))))) ? (var_1_59) : (((((8u) < (var_1_70)) ? (8u) : (var_1_70)))))))));
   }
  } else {
   var_1_69 = ((((var_1_59) < (var_1_49)) ? (var_1_59) : (var_1_49)));
  }
 }
 if (-25 < var_1_72) {
  if (var_1_59 > ((((var_1_40) > (var_1_42)) ? (var_1_40) : (var_1_42)))) {
   var_1_71 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
  }
 } else {
  var_1_71 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
 }
 if (var_1_44) {
  if ((var_1_74 - (var_1_75 - var_1_60)) >= (var_1_59 | var_1_57)) {
   var_1_73 = (var_1_41 || var_1_47);
  } else {
   var_1_73 = (var_1_45 || var_1_76);
  }
 } else {
  if ((((((((var_1_62) < (var_1_58)) ? (var_1_62) : (var_1_58))) < 0 ) ? -((((var_1_62) < (var_1_58)) ? (var_1_62) : (var_1_58))) : ((((var_1_62) < (var_1_58)) ? (var_1_62) : (var_1_58))))) < (((((var_1_64) < (var_1_63)) ? (var_1_64) : (var_1_63))) / var_1_77)) {
   var_1_73 = (! ((var_1_63 >= var_1_61) && var_1_76));
  }
 }
 if (var_1_66 <= var_1_34) {
  if (var_1_62 > ((((16.5) < 0 ) ? -(16.5) : (16.5)))) {
   var_1_78 = ((((var_1_42) > (2)) ? (var_1_42) : (2)));
  } else {
   if ((var_1_29 >> var_1_53) >= (var_1_75 - var_1_27)) {
    if (var_1_34 < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) / ((((var_1_75) < 0 ) ? -(var_1_75) : (var_1_75))))) {
     var_1_78 = (var_1_79 - ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))));
    }
   }
  }
 } else {
  var_1_78 = (((((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) < 0 ) ? -((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) : ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))));
 }
 if ((var_1_75 > (var_1_74 - var_1_43)) || ((var_1_59 != var_1_50) && var_1_32)) {
  if (var_1_76) {
   if (var_1_41) {
    if (var_1_37) {
     if ((var_1_35 | (var_1_33 % var_1_74)) <= (((((((var_1_51) < (var_1_38)) ? (var_1_51) : (var_1_38))) < 0 ) ? -((((var_1_51) < (var_1_38)) ? (var_1_51) : (var_1_38))) : ((((var_1_51) < (var_1_38)) ? (var_1_51) : (var_1_38)))))) {
      var_1_80 = var_1_50;
     } else {
      var_1_80 = 32;
     }
    }
   } else {
    var_1_80 = var_1_79;
   }
  } else {
   var_1_80 = 4;
  }
 } else {
  var_1_80 = var_1_43;
 }
 if (var_1_47) {
  var_1_81 = var_1_51;
 }
 if (var_1_37) {
  var_1_82 = var_1_54;
 }
 if (var_1_37) {
  var_1_83 = var_1_43;
 }
 if (var_1_45) {
  var_1_84 = var_1_79;
 } else {
  var_1_84 = var_1_27;
 }
 if ((var_1_65 + var_1_50) >= var_1_38) {
  var_1_85 = (((((1.125f) > (var_1_62)) ? (1.125f) : (var_1_62))) - var_1_61);
 }
 var_1_86 = var_1_52;
 var_1_87 = var_1_88;
 signed long int stepLocal_1 = last_1_var_1_11;
 signed long int stepLocal_0 = last_1_var_1_11;
 if (stepLocal_1 < last_1_var_1_1) {
  if (last_1_var_1_1 <= stepLocal_0) {
   var_1_8 = ((var_1_4 && var_1_9) || var_1_10);
  }
 }
 unsigned long int stepLocal_3 = var_1_7;
 unsigned long int stepLocal_2 = 5u << (var_1_12 - var_1_13);
 if (! ((var_1_5 > var_1_7) || var_1_8)) {
  if (stepLocal_2 > (var_1_5 / 25u)) {
   if ((-64 * var_1_5) != stepLocal_3) {
    var_1_11 = ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12)));
   } else {
    var_1_11 = var_1_12;
   }
  } else {
   var_1_11 = var_1_12;
  }
 } else {
  var_1_11 = var_1_12;
 }
 if (! (var_1_11 >= var_1_11)) {
  if (var_1_8) {
   var_1_1 = ((var_1_5 - var_1_11) - var_1_11);
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_11;
 }
 if (var_1_10) {
  if (var_1_1 > (var_1_11 / (var_1_12 + var_1_16))) {
   var_1_15 = var_1_17;
  }
 }
 if (var_1_10) {
  var_1_18 = (var_1_19 + var_1_20);
 } else {
  var_1_18 = (((var_1_21 - var_1_22) - var_1_23) + var_1_20);
 }
 unsigned long int stepLocal_4 = ~ var_1_1;
 if (stepLocal_4 <= (var_1_12 - var_1_11)) {
  var_1_24 = var_1_22;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 3221225470);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 14);
 assume_abort_if_not(var_1_12 <= 29);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 14);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 2305843.009213691390e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967295);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32766);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -126);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 255);
 assume_abort_if_not(var_1_50 != 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 64);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= -63);
 assume_abort_if_not(var_1_54 <= 63);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -31);
 assume_abort_if_not(var_1_55 <= 32);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -31);
 assume_abort_if_not(var_1_56 <= 31);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 4);
 assume_abort_if_not(var_1_59 <= 8);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 4);
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= -461168.6018427382800e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_67 >= -127);
 assume_abort_if_not(var_1_67 <= 126);
 var_1_70 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_70 >= 2147483647);
 assume_abort_if_not(var_1_70 <= 4294967294);
 var_1_72 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_72 >= -2147483648);
 assume_abort_if_not(var_1_72 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_74 >= 32767);
 assume_abort_if_not(var_1_74 <= 65535);
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 16383);
 assume_abort_if_not(var_1_75 <= 32767);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 0);
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
 assume_abort_if_not(var_1_77 != 0.0F);
 var_1_79 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_79 >= 32767);
 assume_abort_if_not(var_1_79 <= 65534);
 var_1_88 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_88 >= -922337.2036854765600e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854765600e+12F && var_1_88 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
}
int property() {
 return ((((((! (var_1_11 >= var_1_11)) ? (var_1_8 ? (var_1_1 == ((unsigned long int) ((var_1_5 - var_1_11) - var_1_11))) : (var_1_1 == ((unsigned long int) var_1_5))) : (var_1_1 == ((unsigned long int) var_1_11))) && ((last_1_var_1_11 < last_1_var_1_1) ? ((last_1_var_1_1 <= last_1_var_1_11) ? (var_1_8 == ((unsigned char) ((var_1_4 && var_1_9) || var_1_10))) : 1) : 1)) && ((! ((var_1_5 > var_1_7) || var_1_8)) ? (((5u << (var_1_12 - var_1_13)) > (var_1_5 / 25u)) ? (((-64 * var_1_5) != var_1_7) ? (var_1_11 == ((unsigned char) ((((var_1_13) < (var_1_12)) ? (var_1_13) : (var_1_12))))) : (var_1_11 == ((unsigned char) var_1_12))) : (var_1_11 == ((unsigned char) var_1_12))) : (var_1_11 == ((unsigned char) var_1_12)))) && (var_1_10 ? ((var_1_1 > (var_1_11 / (var_1_12 + var_1_16))) ? (var_1_15 == ((float) var_1_17)) : 1) : 1)) && (var_1_10 ? (var_1_18 == ((float) (var_1_19 + var_1_20))) : (var_1_18 == ((float) (((var_1_21 - var_1_22) - var_1_23) + var_1_20))))) && (((~ var_1_1) <= (var_1_12 - var_1_11)) ? (var_1_24 == ((double) var_1_22)) : 1)
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
