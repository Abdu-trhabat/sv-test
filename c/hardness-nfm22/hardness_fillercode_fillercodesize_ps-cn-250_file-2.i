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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 3.95;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
double var_1_8 = 64.5;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 2.25;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 256;
float var_1_22 = 256.5;
unsigned char var_1_23 = 2;
unsigned char var_1_24 = 1;
float var_1_25 = 1.375;
float var_1_26 = 10.25;
signed char var_1_27 = -64;
signed long int var_1_28 = -1;
signed long int var_1_29 = 5;
signed char var_1_30 = -10;
unsigned long int var_1_31 = 8;
unsigned long int var_1_32 = 100000;
unsigned char var_1_33 = 1;
unsigned long int var_1_34 = 2934135264;
signed short int var_1_35 = 2;
unsigned char var_1_36 = 1;
unsigned short int var_1_37 = 100;
unsigned char var_1_38 = 25;
unsigned char var_1_39 = 8;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 5;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 5;
unsigned char var_1_45 = 10;
unsigned char var_1_46 = 5;
unsigned long int var_1_47 = 2;
unsigned long int var_1_48 = 1581508667;
unsigned char var_1_49 = 1;
signed short int var_1_50 = -5;
float var_1_51 = 99999.25;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 128;
unsigned short int var_1_55 = 5;
double var_1_56 = 0.875;
double var_1_57 = 50.6;
double var_1_58 = 2.5;
unsigned short int var_1_59 = 34260;
signed long int var_1_60 = 32;
unsigned short int var_1_61 = 128;
unsigned long int var_1_62 = 16;
signed long int var_1_63 = -25;
unsigned char var_1_64 = 1;
unsigned short int var_1_65 = 100;
unsigned char var_1_66 = 0;
signed short int var_1_67 = -10;
signed long int var_1_68 = -256;
signed short int var_1_69 = 4;
signed char var_1_70 = 10;
unsigned char var_1_71 = 1;
unsigned long int var_1_72 = 128;
signed short int var_1_73 = 25;
unsigned long int var_1_74 = 256;
unsigned short int var_1_75 = 100;
unsigned long int var_1_76 = 4033561135;
double var_1_77 = 7.875;
unsigned char var_1_79 = 2;
signed short int var_1_80 = -10;
unsigned char var_1_81 = 1;
unsigned char var_1_82 = 0;
double var_1_83 = 7.75;
unsigned long int last_1_var_1_6 = 10000;
void initially(void) {
}
void step(void) {
 if (var_1_23 >= var_1_24) {
  var_1_22 = (var_1_25 + var_1_26);
 }
 if (((var_1_22 + 127.75f) * var_1_25) < var_1_26) {
  if (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) <= (((((var_1_24) < (var_1_28)) ? (var_1_24) : (var_1_28))) & var_1_29)) {
   var_1_27 = var_1_30;
  }
 }
 if (var_1_29 < (~ var_1_30)) {
  if ((((((var_1_28 >> 31)) > (var_1_29)) ? ((var_1_28 >> 31)) : (var_1_29))) < var_1_23) {
   var_1_31 = ((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) + var_1_24) + var_1_32);
  }
 } else {
  if ((var_1_22 < (var_1_26 * var_1_25)) && var_1_33) {
   var_1_31 = ((((50u) < (((((var_1_32 + var_1_23) < 0 ) ? -(var_1_32 + var_1_23) : (var_1_32 + var_1_23))))) ? (50u) : (((((var_1_32 + var_1_23) < 0 ) ? -(var_1_32 + var_1_23) : (var_1_32 + var_1_23))))));
  } else {
   var_1_31 = (var_1_34 - var_1_23);
  }
 }
 if (var_1_33 && var_1_36) {
  var_1_35 = ((((((((var_1_27) < (((((var_1_30) > (var_1_23)) ? (var_1_30) : (var_1_23))))) ? (var_1_27) : (((((var_1_30) > (var_1_23)) ? (var_1_30) : (var_1_23))))))) < (16)) ? (((((var_1_27) < (((((var_1_30) > (var_1_23)) ? (var_1_30) : (var_1_23))))) ? (var_1_27) : (((((var_1_30) > (var_1_23)) ? (var_1_30) : (var_1_23))))))) : (16)));
 }
 if (var_1_23 >= (var_1_24 & var_1_38)) {
  var_1_37 = ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) > (var_1_38)) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (var_1_38)));
 }
 if (((8 >> var_1_24) * var_1_31) <= var_1_37) {
  var_1_39 = (((((((((var_1_40 + 32)) > (var_1_41)) ? ((var_1_40 + 32)) : (var_1_41)))) > ((var_1_42 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))) ? ((((((var_1_40 + 32)) > (var_1_41)) ? ((var_1_40 + 32)) : (var_1_41)))) : ((var_1_42 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))));
 } else {
  var_1_39 = ((((var_1_42 + 25) < 0 ) ? -(var_1_42 + 25) : (var_1_42 + 25)));
 }
 if ((var_1_34 | -5) == 4u) {
  if (var_1_36) {
   var_1_44 = (((((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))) < 0 ) ? -((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42))) : ((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)))));
  } else {
   var_1_44 = (((((var_1_42) > (var_1_43)) ? (var_1_42) : (var_1_43))) + (var_1_45 + ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))));
  }
 }
 if (var_1_33) {
  if ((var_1_34 | 5) >= var_1_29) {
   var_1_47 = (((((var_1_48 - var_1_39) + ((((var_1_38) > (10u)) ? (var_1_38) : (10u)))) < 0 ) ? -((var_1_48 - var_1_39) + ((((var_1_38) > (10u)) ? (var_1_38) : (10u)))) : ((var_1_48 - var_1_39) + ((((var_1_38) > (10u)) ? (var_1_38) : (10u))))));
  } else {
   if (((var_1_29 / var_1_48) ^ var_1_40) <= var_1_32) {
    var_1_47 = (((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) < 0 ) ? -((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) : ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))));
   } else {
    var_1_47 = var_1_42;
   }
  }
 } else {
  var_1_47 = (((((2973765320u) < 0 ) ? -(2973765320u) : (2973765320u))) - 16u);
 }
 if (var_1_33) {
  if (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) <= (var_1_47 + var_1_42)) {
   if (var_1_38 > var_1_40) {
    var_1_49 = ((((var_1_46) > (var_1_45)) ? (var_1_46) : (var_1_45)));
   }
  }
 }
 if ((var_1_25 * var_1_26) > (var_1_22 / var_1_51)) {
  var_1_50 = (((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < 0 ) ? -((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) : ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))));
 }
 if (var_1_53) {
  var_1_52 = ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) < ((var_1_54 - var_1_40))) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : ((var_1_54 - var_1_40))));
 }
 if ((var_1_56 - ((((var_1_57) < (var_1_58)) ? (var_1_57) : (var_1_58)))) > var_1_51) {
  var_1_55 = (var_1_59 - var_1_45);
 }
 if (var_1_56 < 4.25) {
  var_1_60 = (var_1_30 + -100);
 }
 if (-8 >= var_1_49) {
  var_1_61 = (((((var_1_41 + var_1_52)) < (var_1_43)) ? ((var_1_41 + var_1_52)) : (var_1_43)));
 }
 var_1_62 = (((((var_1_52 + ((((var_1_54) < (var_1_38)) ? (var_1_54) : (var_1_38))))) > (var_1_23)) ? ((var_1_52 + ((((var_1_54) < (var_1_38)) ? (var_1_54) : (var_1_38))))) : (var_1_23)));
 if (((((8) < 0 ) ? -(8) : (8))) == (var_1_60 & 1)) {
  if (var_1_53) {
   var_1_63 = var_1_39;
  } else {
   var_1_63 = ((var_1_49 - var_1_37) + var_1_52);
  }
 } else {
  if (var_1_30 <= (var_1_46 - ((((var_1_45) < (var_1_43)) ? (var_1_45) : (var_1_43))))) {
   var_1_63 = ((((((((var_1_30) < (-64)) ? (var_1_30) : (-64)))) < (64)) ? (((((var_1_30) < (-64)) ? (var_1_30) : (-64)))) : (64)));
  } else {
   var_1_63 = var_1_37;
  }
 }
 if (((((var_1_54 + var_1_65) < 0 ) ? -(var_1_54 + var_1_65) : (var_1_54 + var_1_65))) <= ((var_1_40 - var_1_24) + var_1_44)) {
  if (var_1_33) {
   var_1_64 = 1;
  } else {
   var_1_64 = var_1_66;
  }
 }
 if (var_1_61 >= 16) {
  var_1_67 = ((((var_1_46) < (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) ? (var_1_46) : (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))));
 } else {
  if ((var_1_51 * var_1_58) >= var_1_56) {
   var_1_67 = ((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) + 50) - ((((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) < (var_1_38)) ? (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) : (var_1_38))));
  }
 }
 if (var_1_31 <= var_1_45) {
  if (50 >= var_1_32) {
   var_1_68 = ((((((((5) > (32)) ? (5) : (32))) + var_1_67) < 0 ) ? -(((((5) > (32)) ? (5) : (32))) + var_1_67) : (((((5) > (32)) ? (5) : (32))) + var_1_67)));
  }
 }
 var_1_69 = ((((var_1_39) < (var_1_24)) ? (var_1_39) : (var_1_24)));
 if (var_1_71) {
  var_1_70 = ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)));
 } else {
  if ((~ var_1_37) > (var_1_63 % ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))))) {
   if (var_1_54 < var_1_24) {
    var_1_70 = ((((var_1_45) > (var_1_46)) ? (var_1_45) : (var_1_46)));
   }
  }
 }
 if (! ((var_1_51 * var_1_22) <= var_1_58)) {
  var_1_72 = ((((((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < (var_1_61)) ? (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (var_1_61)))) < (var_1_65)) ? (((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < (var_1_61)) ? (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (var_1_61)))) : (var_1_65)));
 } else {
  var_1_72 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
 }
 if (var_1_33) {
  var_1_73 = (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_23);
 }
 if (var_1_65 >= (var_1_75 & var_1_41)) {
  var_1_74 = (var_1_76 - (var_1_48 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))));
 } else {
  var_1_74 = (((((32u + var_1_44)) < ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))) ? ((32u + var_1_44)) : ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))));
 }
 if ((~ var_1_45) < (var_1_68 | var_1_39)) {
  if (var_1_61 >= var_1_39) {
   if (var_1_32 == var_1_47) {
    var_1_77 = ((((var_1_26) < (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_26) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))));
   } else {
    if (((var_1_70 & var_1_52) >> var_1_72) > (-16 % var_1_59)) {
     var_1_77 = ((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25)));
    } else {
     var_1_77 = var_1_25;
    }
   }
  }
 }
 if (var_1_80 < var_1_35) {
  var_1_79 = var_1_45;
 } else {
  var_1_79 = var_1_54;
 }
 if (var_1_71) {
  var_1_81 = (var_1_36 && var_1_82);
 }
 if (var_1_51 >= var_1_56) {
  if (var_1_50 < var_1_40) {
   var_1_83 = var_1_25;
  }
 }
 if ((var_1_15 - ((((0) < (var_1_16)) ? (0) : (var_1_16)))) > last_1_var_1_6) {
  var_1_14 = var_1_12;
 }
 if ((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) {
  var_1_10 = (((((var_1_5 - (var_1_12 - var_1_13))) < (var_1_4)) ? ((var_1_5 - (var_1_12 - var_1_13))) : (var_1_4)));
 } else {
  var_1_10 = 4.2f;
 }
 var_1_20 = var_1_16;
 var_1_21 = var_1_16;
 if (var_1_21 <= (var_1_16 * var_1_20)) {
  if ((var_1_5 + var_1_14) <= 127.025f) {
   var_1_17 = var_1_18;
  } else {
   var_1_17 = var_1_18;
  }
 } else {
  var_1_17 = var_1_18;
 }
 unsigned char stepLocal_0 = var_1_20 != var_1_20;
 if (var_1_17) {
  if (((((var_1_14) > (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78))))) ? (var_1_14) : (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78)))))) != (var_1_4 - var_1_8)) {
   if (stepLocal_0 || var_1_17) {
    var_1_6 = var_1_20;
   } else {
    var_1_6 = 5u;
   }
  } else {
   var_1_6 = var_1_20;
  }
 } else {
  var_1_6 = var_1_20;
 }
 if (var_1_6 <= var_1_6) {
  if (var_1_6 > var_1_6) {
   var_1_1 = (var_1_4 - var_1_5);
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_4;
 }
 if (var_1_1 < var_1_11) {
  var_1_19 = (var_1_13 - 256.4);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427382800e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -1);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 255);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 255);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 255);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 64);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 1073741823);
 assume_abort_if_not(var_1_48 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 assume_abort_if_not(var_1_51 != 0.0F);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 254);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854776000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 32767);
 assume_abort_if_not(var_1_59 <= 65534);
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 65535);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 1);
 var_1_75 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 65535);
 var_1_76 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_76 >= 2147483647);
 assume_abort_if_not(var_1_76 <= 4294967294);
 var_1_80 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_80 >= -32768);
 assume_abort_if_not(var_1_80 <= 32767);
 var_1_82 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_82 >= 0);
 assume_abort_if_not(var_1_82 <= 0);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
}
int property() {
 return ((((((((var_1_6 <= var_1_6) ? ((var_1_6 > var_1_6) ? (var_1_1 == ((float) (var_1_4 - var_1_5))) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) var_1_4))) && (var_1_17 ? ((((((var_1_14) > (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78))))) ? (var_1_14) : (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78)))))) != (var_1_4 - var_1_8)) ? (((var_1_20 != var_1_20) || var_1_17) ? (var_1_6 == ((unsigned long int) var_1_20)) : (var_1_6 == ((unsigned long int) 5u))) : (var_1_6 == ((unsigned long int) var_1_20))) : (var_1_6 == ((unsigned long int) var_1_20)))) && (((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) ? (var_1_10 == ((float) (((((var_1_5 - (var_1_12 - var_1_13))) < (var_1_4)) ? ((var_1_5 - (var_1_12 - var_1_13))) : (var_1_4))))) : (var_1_10 == ((float) 4.2f)))) && (((var_1_15 - ((((0) < (var_1_16)) ? (0) : (var_1_16)))) > last_1_var_1_6) ? (var_1_14 == ((double) var_1_12)) : 1)) && ((var_1_21 <= (var_1_16 * var_1_20)) ? (((var_1_5 + var_1_14) <= 127.025f) ? (var_1_17 == ((unsigned char) var_1_18)) : (var_1_17 == ((unsigned char) var_1_18))) : (var_1_17 == ((unsigned char) var_1_18)))) && ((var_1_1 < var_1_11) ? (var_1_19 == ((double) (var_1_13 - 256.4))) : 1)) && (var_1_20 == ((unsigned char) var_1_16))) && (var_1_21 == ((unsigned short int) var_1_16))
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
