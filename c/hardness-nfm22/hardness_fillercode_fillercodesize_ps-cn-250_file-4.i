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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 4;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 10;
double var_1_11 = 15.6;
double var_1_12 = 256.4;
double var_1_13 = 49.15;
unsigned long int var_1_14 = 500;
unsigned long int var_1_15 = 2173307753;
unsigned long int var_1_16 = 3362224480;
signed short int var_1_17 = 16;
signed short int var_1_19 = 16;
signed short int var_1_20 = 4;
signed short int var_1_21 = 0;
signed short int var_1_22 = -25;
signed char var_1_23 = 1;
double var_1_24 = 64.5;
double var_1_25 = 255.25;
double var_1_26 = 128.4;
double var_1_27 = 255.5;
double var_1_28 = 999999999.5;
signed char var_1_29 = 16;
signed char var_1_30 = -25;
unsigned char var_1_31 = 32;
unsigned long int var_1_32 = 128;
unsigned char var_1_33 = 0;
unsigned long int var_1_34 = 2954266474;
double var_1_35 = 5.8;
double var_1_36 = 10000000.5;
double var_1_37 = 7.3;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned long int var_1_45 = 256;
unsigned long int var_1_46 = 2;
signed char var_1_47 = -4;
float var_1_48 = 32.5;
float var_1_49 = 50.5;
float var_1_50 = 32.5;
float var_1_51 = 999999.2;
signed short int var_1_52 = 100;
signed long int var_1_53 = 64;
unsigned long int var_1_54 = 10;
signed long int var_1_55 = 1262153252;
signed long int var_1_56 = 1237091893;
float var_1_57 = 4.125;
float var_1_58 = 10.5;
signed short int var_1_59 = -64;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 64;
unsigned char var_1_62 = 0;
unsigned short int var_1_63 = 5;
unsigned short int var_1_64 = 0;
unsigned short int var_1_65 = 256;
unsigned short int var_1_66 = 4;
unsigned char var_1_67 = 0;
unsigned short int var_1_68 = 32;
float var_1_69 = 15.37;
unsigned char var_1_70 = 10;
float var_1_71 = 4.575;
float var_1_72 = 4.6;
signed char var_1_73 = -5;
unsigned char var_1_74 = 10;
unsigned char var_1_75 = 2;
float var_1_76 = 99.57;
double var_1_77 = 128.5;
signed long int var_1_78 = 1000000000;
signed char var_1_79 = -1;
unsigned short int last_1_var_1_6 = 4;
unsigned short int last_1_var_1_9 = 4;
unsigned long int last_1_var_1_14 = 500;
signed short int last_1_var_1_17 = 16;
void initially(void) {
}
void step(void) {
 if ((var_1_24 / var_1_25) < (((((var_1_26 / var_1_27)) > (var_1_28)) ? ((var_1_26 / var_1_27)) : (var_1_28)))) {
  if (var_1_26 > var_1_27) {
   if (var_1_27 >= var_1_28) {
    var_1_23 = (((((((var_1_29 - 5) < 0 ) ? -(var_1_29 - 5) : (var_1_29 - 5))) < 0 ) ? -((((var_1_29 - 5) < 0 ) ? -(var_1_29 - 5) : (var_1_29 - 5))) : ((((var_1_29 - 5) < 0 ) ? -(var_1_29 - 5) : (var_1_29 - 5)))));
   }
  } else {
   var_1_23 = (-32 + var_1_30);
  }
 }
 var_1_31 = (((((((var_1_29 + 10) < 0 ) ? -(var_1_29 + 10) : (var_1_29 + 10))) < 0 ) ? -((((var_1_29 + 10) < 0 ) ? -(var_1_29 + 10) : (var_1_29 + 10))) : ((((var_1_29 + 10) < 0 ) ? -(var_1_29 + 10) : (var_1_29 + 10)))));
 if ((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) < var_1_24) && var_1_33) {
  var_1_32 = (((((((var_1_34 - var_1_31) < 0 ) ? -(var_1_34 - var_1_31) : (var_1_34 - var_1_31))) < 0 ) ? -((((var_1_34 - var_1_31) < 0 ) ? -(var_1_34 - var_1_31) : (var_1_34 - var_1_31))) : ((((var_1_34 - var_1_31) < 0 ) ? -(var_1_34 - var_1_31) : (var_1_34 - var_1_31)))));
 }
 if (var_1_33) {
  if (-8 <= ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) {
   if (var_1_25 <= ((((var_1_27) > (64.8)) ? (var_1_27) : (64.8)))) {
    var_1_35 = (var_1_36 + ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))));
   } else {
    var_1_35 = (16.6 + var_1_37);
   }
  } else {
   if (var_1_26 > var_1_36) {
    var_1_35 = (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))));
   } else {
    var_1_35 = var_1_36;
   }
  }
 }
 if (var_1_33) {
  if (var_1_26 <= ((((((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35)))) < (var_1_27)) ? (((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35)))) : (var_1_27)))) {
   if ((128u % ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) <= ((((var_1_29) < (var_1_32)) ? (var_1_29) : (var_1_32)))) {
    var_1_38 = ((var_1_39 || var_1_40) || (var_1_41 || var_1_42));
   }
  } else {
   var_1_38 = (! (var_1_41 || (var_1_43 && var_1_44)));
  }
 } else {
  var_1_38 = (! (var_1_39 || var_1_41));
 }
 if (! (var_1_38 || var_1_40)) {
  var_1_45 = ((((var_1_34) > (var_1_31)) ? (var_1_34) : (var_1_31)));
 } else {
  var_1_45 = ((((var_1_29) > ((((((10u + var_1_31)) < ((var_1_34 - var_1_46))) ? ((10u + var_1_31)) : ((var_1_34 - var_1_46)))))) ? (var_1_29) : ((((((10u + var_1_31)) < ((var_1_34 - var_1_46))) ? ((10u + var_1_31)) : ((var_1_34 - var_1_46)))))));
 }
 if (var_1_46 > 4u) {
  var_1_47 = -1;
 }
 if (var_1_26 <= (9.4 + var_1_28)) {
  var_1_48 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 } else {
  var_1_48 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 }
 if (var_1_29 < var_1_45) {
  if (var_1_41 || var_1_33) {
   var_1_49 = (var_1_50 - var_1_51);
  }
 } else {
  if (! ((var_1_23 > var_1_30) && (var_1_35 > var_1_37))) {
   var_1_49 = ((((((((var_1_51) > (var_1_37)) ? (var_1_51) : (var_1_37)))) > (var_1_50)) ? (((((var_1_51) > (var_1_37)) ? (var_1_51) : (var_1_37)))) : (var_1_50)));
  } else {
   var_1_49 = (((((var_1_37 + var_1_36)) > (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))) ? ((var_1_37 + var_1_36)) : (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))));
  }
 }
 if ((8 << 2u) >= (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) - (1728389947 - var_1_31))) {
  var_1_52 = (((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) < 0 ) ? -((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) : ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))));
 }
 if (var_1_46 > (((((var_1_34 % var_1_54)) < (var_1_31)) ? ((var_1_34 % var_1_54)) : (var_1_31)))) {
  if (! var_1_38) {
   var_1_53 = (var_1_29 - (((((var_1_55) < (var_1_56)) ? (var_1_55) : (var_1_56))) - var_1_31));
  } else {
   var_1_53 = ((((((((-64) > (var_1_31)) ? (-64) : (var_1_31)))) < (((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) < (var_1_29)) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : (var_1_29))))) ? (((((-64) > (var_1_31)) ? (-64) : (var_1_31)))) : (((((((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) < (var_1_29)) ? (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) : (var_1_29))))));
  }
 }
 if (((((var_1_56) > (var_1_54)) ? (var_1_56) : (var_1_54))) > var_1_55) {
  if (var_1_23 >= (-10 ^ var_1_46)) {
   var_1_57 = (var_1_51 - var_1_50);
  } else {
   var_1_57 = (var_1_36 + (((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) < 0 ) ? -((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) : ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))));
  }
 } else {
  if (var_1_48 <= var_1_37) {
   var_1_57 = (var_1_36 + ((((var_1_37) < (var_1_58)) ? (var_1_37) : (var_1_58))));
  }
 }
 if (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) == (var_1_53 & (var_1_30 / var_1_56))) {
  if (! (var_1_54 <= var_1_56)) {
   var_1_59 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  }
 } else {
  var_1_59 = ((((50) > (var_1_29)) ? (50) : (var_1_29)));
 }
 if (var_1_30 <= var_1_34) {
  var_1_60 = var_1_42;
 }
 if (var_1_37 > var_1_51) {
  var_1_61 = (var_1_46 + var_1_29);
 } else {
  var_1_61 = ((((((((((((var_1_55) > (var_1_56)) ? (var_1_55) : (var_1_56)))) < (var_1_29)) ? (((((var_1_55) > (var_1_56)) ? (var_1_55) : (var_1_56)))) : (var_1_29)))) > (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) ? (((((((((var_1_55) > (var_1_56)) ? (var_1_55) : (var_1_56)))) < (var_1_29)) ? (((((var_1_55) > (var_1_56)) ? (var_1_55) : (var_1_56)))) : (var_1_29)))) : (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))));
 }
 if (var_1_39) {
  var_1_62 = var_1_44;
 }
 if (var_1_43) {
  var_1_63 = var_1_29;
 } else {
  var_1_63 = var_1_29;
 }
 if (-128 == (((((var_1_30 / var_1_56)) < (var_1_45)) ? ((var_1_30 / var_1_56)) : (var_1_45)))) {
  var_1_64 = var_1_29;
 } else {
  if (((var_1_55 + var_1_56) / (var_1_65 + var_1_66)) < var_1_53) {
   var_1_64 = (var_1_31 + var_1_66);
  } else {
   if (var_1_42) {
    var_1_64 = (var_1_66 + var_1_29);
   }
  }
 }
 var_1_67 = ((((25) < 0 ) ? -(25) : (25)));
 if (((var_1_67 ^ var_1_52) >= -32) && (((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))) > var_1_59)) {
  var_1_68 = ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)));
 }
 if (var_1_70 >= var_1_46) {
  var_1_69 = (((((var_1_58 + (var_1_71 - var_1_72))) < (var_1_51)) ? ((var_1_58 + (var_1_71 - var_1_72))) : (var_1_51)));
 }
 if (var_1_27 < (- var_1_71)) {
  if ((var_1_70 ^ (var_1_53 ^ var_1_55)) == ((var_1_29 % var_1_65) | (~ var_1_68))) {
   var_1_73 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  }
 } else {
  var_1_73 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 if (! var_1_60) {
  var_1_74 = (var_1_29 + var_1_75);
 } else {
  var_1_74 = var_1_29;
 }
 if (((((((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) < (var_1_27)) ? (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))) : (var_1_27))) >= ((- var_1_25) / var_1_77)) {
  if (var_1_47 <= var_1_29) {
   var_1_76 = (((((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) < 0 ) ? -((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) : ((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72)))));
  }
 } else {
  var_1_76 = (var_1_72 - var_1_71);
 }
 var_1_78 = ((((var_1_65) > (((((-256) < (var_1_73)) ? (-256) : (var_1_73))))) ? (var_1_65) : (((((-256) < (var_1_73)) ? (-256) : (var_1_73))))));
 if (var_1_57 == var_1_58) {
  if ((var_1_27 + var_1_24) != (var_1_37 + 31.5)) {
   if (var_1_42) {
    var_1_79 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
   }
  } else {
   var_1_79 = var_1_30;
  }
 } else {
  var_1_79 = var_1_29;
 }
 signed long int stepLocal_0 = last_1_var_1_9;
 if (var_1_5) {
  if ((last_1_var_1_14 * (last_1_var_1_6 + last_1_var_1_17)) > stepLocal_0) {
   var_1_6 = 256;
  }
 }
 signed long int stepLocal_3 = last_1_var_1_9;
 if (last_1_var_1_14 >= stepLocal_3) {
  var_1_14 = (((((var_1_15) > ((var_1_16 - var_1_10))) ? (var_1_15) : ((var_1_16 - var_1_10)))) - last_1_var_1_17);
 }
 if (var_1_6 <= var_1_14) {
  if ((- var_1_14) > var_1_6) {
   var_1_1 = 0;
  }
 } else {
  var_1_1 = (var_1_4 || var_1_5);
 }
 unsigned char stepLocal_2 = var_1_4;
 unsigned long int stepLocal_1 = var_1_14;
 if (stepLocal_2 || var_1_1) {
  var_1_9 = ((((32) < (var_1_10)) ? (32) : (var_1_10)));
 } else {
  if (stepLocal_1 >= var_1_6) {
   var_1_9 = var_1_10;
  } else {
   var_1_9 = var_1_10;
  }
 }
 unsigned char stepLocal_5 = var_1_1;
 unsigned char stepLocal_4 = var_1_1;
 if (stepLocal_4 && (var_1_5 && (var_1_12 < var_1_13))) {
  if (stepLocal_5 || (last_1_var_1_17 >= ((((var_1_14) > (var_1_6)) ? (var_1_14) : (var_1_6))))) {
   var_1_17 = (((((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) < ((var_1_22 + 64))) ? ((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) : ((var_1_22 + 64))));
  } else {
   var_1_17 = var_1_19;
  }
 }
 if (var_1_14 <= var_1_14) {
  if (! var_1_1) {
   var_1_11 = (var_1_12 - var_1_13);
  }
 } else {
  var_1_11 = var_1_12;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 2147483647);
 assume_abort_if_not(var_1_15 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 3221225470);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -16383);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 16383);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 16383);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -16383);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 assume_abort_if_not(var_1_27 != 0.0F);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -63);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 4294967295);
 assume_abort_if_not(var_1_54 != 0);
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= 1073741823);
 assume_abort_if_not(var_1_55 <= 2147483646);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 1073741823);
 assume_abort_if_not(var_1_56 <= 2147483646);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -461168.6018427382800e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 1);
 assume_abort_if_not(var_1_65 <= 32768);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 255);
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 127);
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
 assume_abort_if_not(var_1_77 != 0.0F);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_17 = var_1_17;
}
int property() {
 return ((((((var_1_6 <= var_1_14) ? (((- var_1_14) > var_1_6) ? (var_1_1 == ((unsigned char) 0)) : 1) : (var_1_1 == ((unsigned char) (var_1_4 || var_1_5)))) && (var_1_5 ? (((last_1_var_1_14 * (last_1_var_1_6 + last_1_var_1_17)) > last_1_var_1_9) ? (var_1_6 == ((unsigned short int) 256)) : 1) : 1)) && ((var_1_4 || var_1_1) ? (var_1_9 == ((unsigned short int) ((((32) < (var_1_10)) ? (32) : (var_1_10))))) : ((var_1_14 >= var_1_6) ? (var_1_9 == ((unsigned short int) var_1_10)) : (var_1_9 == ((unsigned short int) var_1_10))))) && ((var_1_14 <= var_1_14) ? ((! var_1_1) ? (var_1_11 == ((double) (var_1_12 - var_1_13))) : 1) : (var_1_11 == ((double) var_1_12)))) && ((last_1_var_1_14 >= last_1_var_1_9) ? (var_1_14 == ((unsigned long int) (((((var_1_15) > ((var_1_16 - var_1_10))) ? (var_1_15) : ((var_1_16 - var_1_10)))) - last_1_var_1_17))) : 1)) && ((var_1_1 && (var_1_5 && (var_1_12 < var_1_13))) ? ((var_1_1 || (last_1_var_1_17 >= ((((var_1_14) > (var_1_6)) ? (var_1_14) : (var_1_6))))) ? (var_1_17 == ((signed short int) (((((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) < ((var_1_22 + 64))) ? ((((((var_1_19) > (256)) ? (var_1_19) : (256))) + (var_1_20 - var_1_21))) : ((var_1_22 + 64)))))) : (var_1_17 == ((signed short int) var_1_19))) : 1)
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
