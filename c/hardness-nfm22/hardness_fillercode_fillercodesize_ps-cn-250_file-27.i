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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 3.9;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
float var_1_4 = 31.5;
float var_1_5 = 25.4;
float var_1_6 = 9.5;
float var_1_7 = 63.2;
unsigned long int var_1_8 = 1;
signed short int var_1_10 = -50;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 32;
float var_1_13 = 15.625;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 8;
unsigned short int var_1_21 = 16;
unsigned short int var_1_22 = 128;
signed short int var_1_23 = 128;
signed long int var_1_24 = -1;
signed short int var_1_25 = 2;
unsigned char var_1_26 = 8;
unsigned char var_1_27 = 5;
signed long int var_1_28 = 10;
float var_1_29 = 2.5;
float var_1_30 = 10.7;
float var_1_31 = 7.34;
unsigned char var_1_32 = 100;
unsigned char var_1_33 = 8;
double var_1_34 = 100000000000000.4;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 64;
double var_1_37 = 15.4;
double var_1_38 = 0.43999999999999995;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 10;
unsigned char var_1_41 = 100;
unsigned char var_1_42 = 1;
float var_1_43 = 49.6;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned short int var_1_49 = 32;
unsigned char var_1_50 = 0;
float var_1_51 = 2.5;
float var_1_52 = 99999999999999.75;
float var_1_53 = 4.5;
float var_1_54 = 0.0;
float var_1_55 = 15.4;
double var_1_56 = 4.375;
unsigned long int var_1_57 = 128;
unsigned long int var_1_58 = 2991399339;
unsigned long int var_1_59 = 1262775413;
float var_1_60 = 99.6;
signed short int var_1_61 = 2;
float var_1_62 = 32.75;
signed short int var_1_63 = 1000;
signed short int var_1_64 = -4;
signed long int var_1_65 = 5;
unsigned char var_1_66 = 1;
float var_1_67 = 32.5;
float var_1_68 = 4.6;
unsigned short int var_1_69 = 128;
float var_1_70 = 31.25;
float var_1_71 = 32.9;
unsigned short int var_1_72 = 4;
unsigned char var_1_73 = 128;
double var_1_74 = 1.7;
signed long int var_1_75 = -8;
unsigned long int var_1_76 = 2;
double var_1_77 = 8.7;
unsigned short int var_1_78 = 32;
signed short int var_1_79 = -8;
unsigned char var_1_80 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_24 > -10000) {
  var_1_23 = var_1_25;
 }
 if ((- var_1_24) > var_1_23) {
  var_1_26 = ((((10) > (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) ? (10) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))));
 } else {
  var_1_26 = var_1_27;
 }
 if ((32 / 1) >= var_1_23) {
  if ((var_1_29 * var_1_30) == var_1_31) {
   var_1_28 = (((((1) < 0 ) ? -(1) : (1))) + var_1_23);
  }
 }
 if (var_1_23 > (~ (var_1_26 + var_1_28))) {
  var_1_32 = ((((var_1_27) > (var_1_33)) ? (var_1_27) : (var_1_33)));
 }
 if (! var_1_35) {
  if (((var_1_26 / var_1_36) + var_1_27) > var_1_32) {
   var_1_34 = ((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38)));
  }
 } else {
  var_1_34 = ((((var_1_37) > (16.6)) ? (var_1_37) : (16.6)));
 }
 if ((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) + 49.6f) < var_1_29) {
  if (var_1_35) {
   if (var_1_36 != var_1_32) {
    var_1_39 = ((((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < 0 ) ? -((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) : ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) < 0 ) ? -(((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < 0 ) ? -((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) : ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : (((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < 0 ) ? -((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) : ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))));
   } else {
    var_1_39 = ((((16) < (var_1_33)) ? (16) : (var_1_33)));
   }
  } else {
   var_1_39 = ((((var_1_40 + var_1_41) < 0 ) ? -(var_1_40 + var_1_41) : (var_1_40 + var_1_41)));
  }
 }
 if (var_1_29 <= (5.875f - var_1_43)) {
  if (((((((((4) < (-8)) ? (4) : (-8)))) > (var_1_24)) ? (((((4) < (-8)) ? (4) : (-8)))) : (var_1_24))) < -10) {
   var_1_42 = (((var_1_44 || var_1_45) || var_1_46) || (! (var_1_47 && var_1_48)));
  } else {
   var_1_42 = (! (! 0));
  }
 } else {
  if (var_1_40 > 5) {
   var_1_42 = var_1_48;
  } else {
   var_1_42 = var_1_48;
  }
 }
 if (var_1_24 != ((((64) > (var_1_27)) ? (64) : (var_1_27)))) {
  var_1_49 = ((((var_1_33) > (((((var_1_32) > (var_1_39)) ? (var_1_32) : (var_1_39))))) ? (var_1_33) : (((((var_1_32) > (var_1_39)) ? (var_1_32) : (var_1_39))))));
 }
 if (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) == ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) {
  var_1_50 = (! var_1_48);
 }
 if (var_1_28 <= ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) {
  var_1_51 = (((((var_1_52 - var_1_53)) < (var_1_38)) ? ((var_1_52 - var_1_53)) : (var_1_38)));
 } else {
  if (var_1_37 < var_1_31) {
   var_1_51 = (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) - (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) - var_1_55));
  } else {
   if ((~ var_1_26) >= var_1_27) {
    if (var_1_49 <= var_1_27) {
     var_1_51 = ((((var_1_53) < (var_1_54)) ? (var_1_53) : (var_1_54)));
    }
   }
  }
 }
 var_1_56 = var_1_38;
 if (-5 < (var_1_25 ^ (var_1_33 / 1))) {
  var_1_57 = (var_1_58 - ((((var_1_59 - var_1_36) < 0 ) ? -(var_1_59 - var_1_36) : (var_1_59 - var_1_36))));
 }
 if (var_1_43 < var_1_54) {
  var_1_60 = var_1_37;
 }
 if (var_1_43 < var_1_56) {
  if (-50 <= (~ var_1_28)) {
   var_1_61 = ((((var_1_39) > (((var_1_36 + var_1_33) + var_1_32))) ? (var_1_39) : (((var_1_36 + var_1_33) + var_1_32))));
  } else {
   if (((((var_1_55 - var_1_53) < 0 ) ? -(var_1_55 - var_1_53) : (var_1_55 - var_1_53))) < (- var_1_62)) {
    var_1_61 = (((((var_1_27) > (var_1_36)) ? (var_1_27) : (var_1_36))) - var_1_41);
   } else {
    var_1_61 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
   }
  }
 } else {
  var_1_61 = ((((-128) < ((((((var_1_36 + var_1_32)) < (var_1_33)) ? ((var_1_36 + var_1_32)) : (var_1_33))))) ? (-128) : ((((((var_1_36 + var_1_32)) < (var_1_33)) ? ((var_1_36 + var_1_32)) : (var_1_33))))));
 }
 if (var_1_30 >= var_1_56) {
  var_1_63 = ((((var_1_27) > (((((var_1_32) < (var_1_41)) ? (var_1_32) : (var_1_41))))) ? (var_1_27) : (((((var_1_32) < (var_1_41)) ? (var_1_32) : (var_1_41))))));
 } else {
  var_1_63 = ((((-8) < (((((var_1_27) > (var_1_36)) ? (var_1_27) : (var_1_36))))) ? (-8) : (((((var_1_27) > (var_1_36)) ? (var_1_27) : (var_1_36))))));
 }
 if (var_1_55 <= var_1_29) {
  if (var_1_35) {
   if (var_1_41 > (((((~ var_1_23)) < (1)) ? ((~ var_1_23)) : (1)))) {
    var_1_64 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
   }
  } else {
   if (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) >= var_1_28) {
    var_1_64 = var_1_32;
   }
  }
 }
 if (var_1_48) {
  var_1_65 = var_1_39;
 } else {
  var_1_65 = ((((((1569929710 - var_1_33) - (var_1_49 + var_1_41))) > (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) ? (((1569929710 - var_1_33) - (var_1_49 + var_1_41))) : (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))));
 }
 if (var_1_41 == var_1_57) {
  var_1_66 = (var_1_46 || var_1_45);
 } else {
  var_1_66 = ((((((25.875f) > (var_1_62)) ? (25.875f) : (var_1_62))) > var_1_60) || (var_1_48 && var_1_47));
 }
 if (((((var_1_61) > (var_1_39)) ? (var_1_61) : (var_1_39))) > var_1_26) {
  if (var_1_38 <= ((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) {
   var_1_67 = var_1_52;
  } else {
   var_1_67 = ((((((((var_1_52) < (var_1_55)) ? (var_1_52) : (var_1_55)))) > ((var_1_53 - var_1_68))) ? (((((var_1_52) < (var_1_55)) ? (var_1_52) : (var_1_55)))) : ((var_1_53 - var_1_68))));
  }
 }
 if (var_1_28 > var_1_23) {
  var_1_69 = ((((((((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))) < 0 ) ? -((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))) : ((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))))) < 0 ) ? -(((((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))) < 0 ) ? -((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))) : ((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))))) : (((((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))) < 0 ) ? -((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41))) : ((((var_1_33) > (var_1_41)) ? (var_1_33) : (var_1_41)))))));
 }
 if ((var_1_51 * var_1_53) >= var_1_31) {
  var_1_70 = (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) + var_1_71);
 } else {
  if (var_1_66) {
   if ((var_1_28 * var_1_59) <= (var_1_36 / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) {
    var_1_70 = ((((var_1_53) < (var_1_52)) ? (var_1_53) : (var_1_52)));
   }
  }
 }
 if ((var_1_58 + ((((var_1_39) > (var_1_40)) ? (var_1_39) : (var_1_40)))) > (~ var_1_26)) {
  if (var_1_27 <= (var_1_73 - var_1_41)) {
   var_1_72 = (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) + 100);
  }
 }
 if (var_1_48 || (var_1_46 || var_1_47)) {
  var_1_74 = ((((var_1_37) < (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_37) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))));
 } else {
  var_1_74 = (((((0.8 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) < ((var_1_71 + var_1_55))) ? ((0.8 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) : ((var_1_71 + var_1_55))));
 }
 if ((var_1_24 * (var_1_64 + 256)) < var_1_65) {
  var_1_75 = var_1_32;
 } else {
  var_1_75 = var_1_27;
 }
 var_1_76 = var_1_27;
 var_1_77 = var_1_71;
 if (var_1_50) {
  var_1_78 = var_1_26;
 }
 if (var_1_42) {
  var_1_79 = var_1_25;
 } else {
  var_1_79 = var_1_27;
 }
 if (((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) > var_1_65) {
  if (((128.5 + var_1_74) <= var_1_43) && var_1_44) {
   if (var_1_45) {
    var_1_80 = var_1_27;
   } else {
    var_1_80 = var_1_40;
   }
  }
 } else {
  var_1_80 = var_1_40;
 }
 if (var_1_6 == (var_1_4 / var_1_13)) {
  var_1_12 = var_1_11;
 }
 var_1_20 = var_1_11;
 var_1_21 = 8;
 if ((var_1_21 + var_1_12) > (2u >> var_1_11)) {
  if (var_1_12 != var_1_21) {
   var_1_10 = var_1_11;
  } else {
   var_1_10 = 128;
  }
 }
 if (! var_1_2) {
  if (var_1_2 || var_1_3) {
   var_1_14 = ((! (! var_1_15)) && (var_1_16 && var_1_17));
  } else {
   if (((((var_1_12) > (var_1_12)) ? (var_1_12) : (var_1_12))) >= var_1_21) {
    var_1_14 = (var_1_2 || var_1_16);
   } else {
    var_1_14 = (! var_1_19);
   }
  }
 }
 unsigned char stepLocal_1 = var_1_14;
 unsigned char stepLocal_0 = var_1_14;
 if (var_1_14 || stepLocal_0) {
  if (stepLocal_1 || var_1_14) {
   var_1_1 = (((((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6))) - var_1_7);
  } else {
   var_1_1 = 1.0000000075E8f;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_6 > (- var_1_7)) {
  if (var_1_5 == (((((var_1_6 * var_1_7)) > (var_1_1)) ? ((var_1_6 * var_1_7)) : (var_1_1)))) {
   var_1_8 = 8u;
  }
 } else {
  var_1_8 = var_1_20;
 }
 var_1_22 = var_1_8;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 33);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32767);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 255);
 assume_abort_if_not(var_1_36 != 0);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -922337.2036854765600e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= -461168.6018427382800e+13F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 2147483647);
 assume_abort_if_not(var_1_58 <= 4294967294);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 1073741823);
 assume_abort_if_not(var_1_59 <= 2147483647);
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 9223372.036854765600e+12F && var_1_68 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= -461168.6018427382800e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 127);
 assume_abort_if_not(var_1_73 <= 255);
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_14 || var_1_14) ? ((var_1_14 || var_1_14) ? (var_1_1 == ((float) (((((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6))) - var_1_7))) : (var_1_1 == ((float) 1.0000000075E8f))) : (var_1_1 == ((float) var_1_7))) && ((var_1_6 > (- var_1_7)) ? ((var_1_5 == (((((var_1_6 * var_1_7)) > (var_1_1)) ? ((var_1_6 * var_1_7)) : (var_1_1)))) ? (var_1_8 == ((unsigned long int) 8u)) : 1) : (var_1_8 == ((unsigned long int) var_1_20)))) && (((var_1_21 + var_1_12) > (2u >> var_1_11)) ? ((var_1_12 != var_1_21) ? (var_1_10 == ((signed short int) var_1_11)) : (var_1_10 == ((signed short int) 128))) : 1)) && ((var_1_6 == (var_1_4 / var_1_13)) ? (var_1_12 == ((unsigned char) var_1_11)) : 1)) && ((! var_1_2) ? ((var_1_2 || var_1_3) ? (var_1_14 == ((unsigned char) ((! (! var_1_15)) && (var_1_16 && var_1_17)))) : ((((((var_1_12) > (var_1_12)) ? (var_1_12) : (var_1_12))) >= var_1_21) ? (var_1_14 == ((unsigned char) (var_1_2 || var_1_16))) : (var_1_14 == ((unsigned char) (! var_1_19))))) : 1)) && (var_1_20 == ((unsigned char) var_1_11))) && (var_1_21 == ((unsigned short int) 8))) && (var_1_22 == ((unsigned short int) var_1_8))
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
