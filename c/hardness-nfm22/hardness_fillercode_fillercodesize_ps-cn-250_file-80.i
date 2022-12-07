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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
double var_1_2 = 24.25;
double var_1_3 = 128.5;
double var_1_4 = 4.5;
double var_1_5 = 49.5;
signed short int var_1_9 = -25;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
double var_1_13 = 128.375;
unsigned short int var_1_14 = 0;
float var_1_15 = 0.0;
float var_1_16 = 4.87;
float var_1_17 = 8.875;
signed short int var_1_18 = -128;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 16;
unsigned long int var_1_23 = 4200661734;
float var_1_24 = 9999999999.375;
unsigned short int var_1_25 = 0;
unsigned short int var_1_26 = 10;
float var_1_27 = 9.6;
float var_1_28 = 255.25;
signed short int var_1_29 = -64;
signed short int var_1_30 = 8;
signed short int var_1_31 = 8;
double var_1_32 = 9999.5;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 128;
double var_1_35 = 0.0;
double var_1_36 = 99999999999.29;
double var_1_37 = 200.4;
double var_1_38 = -0.4;
unsigned char var_1_39 = 32;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned long int var_1_45 = 10;
signed long int var_1_46 = -10;
double var_1_47 = 1.1;
float var_1_48 = 2.5;
unsigned char var_1_49 = 2;
signed char var_1_50 = -10;
signed char var_1_51 = -8;
unsigned char var_1_52 = 200;
unsigned char var_1_53 = 100;
unsigned char var_1_54 = 1;
signed long int var_1_55 = -5;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 1;
double var_1_58 = 24.25;
unsigned char var_1_59 = 0;
float var_1_60 = 3.2;
float var_1_61 = 0.0;
float var_1_62 = 0.7;
float var_1_63 = 64.5;
unsigned char var_1_64 = 5;
unsigned char var_1_65 = 128;
unsigned char var_1_66 = 2;
signed long int var_1_67 = 256;
float var_1_68 = 1000000000.5;
unsigned char var_1_69 = 1;
signed short int var_1_70 = -32;
float var_1_71 = 4.8;
float var_1_72 = 1.625;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
signed long int var_1_76 = -128;
signed long int var_1_77 = 1;
float var_1_78 = 8.5;
float var_1_79 = 127.9;
float var_1_80 = 4.25;
unsigned short int var_1_81 = 128;
float var_1_82 = 256.25;
unsigned short int var_1_83 = 4;
signed char var_1_84 = -4;
unsigned char var_1_85 = 2;
signed char var_1_86 = 16;
signed char var_1_87 = 8;
signed char var_1_88 = 10;
double var_1_89 = 49.4;
unsigned char last_1_var_1_10 = 200;
void initially(void) {
}
void step(void) {
 if ((var_1_25 & var_1_26) >= -2) {
  var_1_24 = (((((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28))) < 0 ) ? -((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28))) : ((((var_1_27) < (var_1_28)) ? (var_1_27) : (var_1_28)))));
 }
 if (-64 >= var_1_26) {
  var_1_29 = ((((var_1_30 + var_1_31) < 0 ) ? -(var_1_30 + var_1_31) : (var_1_30 + var_1_31)));
 } else {
  var_1_29 = (var_1_31 + 32);
 }
 if (var_1_33 || ((var_1_25 / var_1_34) < -32)) {
  var_1_32 = ((((((((5.6) < 0 ) ? -(5.6) : (5.6))) - 9.999999996E8) < 0 ) ? -(((((5.6) < 0 ) ? -(5.6) : (5.6))) - 9.999999996E8) : (((((5.6) < 0 ) ? -(5.6) : (5.6))) - 9.999999996E8)));
 } else {
  var_1_32 = ((var_1_35 - var_1_36) - var_1_37);
 }
 if ((- (- 128.25f)) <= var_1_28) {
  if (var_1_31 > var_1_26) {
   var_1_38 = ((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < (var_1_36)) ? (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (var_1_36)));
  } else {
   var_1_38 = (7.75 - var_1_35);
  }
 }
 if (var_1_40 || (var_1_26 < var_1_29)) {
  var_1_39 = (((((var_1_41 + var_1_42) < 0 ) ? -(var_1_41 + var_1_42) : (var_1_41 + var_1_42))) - 1);
 }
 var_1_43 = (! ((var_1_24 >= var_1_28) || var_1_44));
 if (var_1_44 && var_1_33) {
  var_1_45 = (((((3830938333u - 8u) < 0 ) ? -(3830938333u - 8u) : (3830938333u - 8u))) - ((((var_1_42) < (var_1_39)) ? (var_1_42) : (var_1_39))));
 }
 if (var_1_43) {
  var_1_46 = ((((var_1_34) > (var_1_42)) ? (var_1_34) : (var_1_42)));
 }
 if (((var_1_39 * var_1_34) ^ var_1_46) >= (-1 ^ var_1_42)) {
  var_1_47 = ((((var_1_36) > (var_1_28)) ? (var_1_36) : (var_1_28)));
 }
 if (var_1_24 <= var_1_37) {
  if (var_1_44) {
   var_1_48 = (var_1_35 - (var_1_36 + 1.000000005E8f));
  }
 } else {
  var_1_48 = (var_1_36 - var_1_35);
 }
 if (var_1_47 >= var_1_27) {
  var_1_49 = ((((var_1_41) < (var_1_42)) ? (var_1_41) : (var_1_42)));
 }
 if (! var_1_40) {
  var_1_50 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
 }
 if (((var_1_39 - var_1_41) + (var_1_46 / var_1_42)) <= var_1_51) {
  var_1_52 = ((var_1_41 + 64) - ((((var_1_42) > (((((var_1_53) > (var_1_54)) ? (var_1_53) : (var_1_54))))) ? (var_1_42) : (((((var_1_53) > (var_1_54)) ? (var_1_53) : (var_1_54)))))));
 }
 if (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) >= var_1_38) {
  var_1_55 = (var_1_41 - var_1_53);
 } else {
  var_1_55 = (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) + ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))));
 }
 if (var_1_48 > var_1_36) {
  if (var_1_47 < var_1_48) {
   if ((var_1_46 <= var_1_26) || var_1_33) {
    var_1_56 = (! var_1_44);
   } else {
    var_1_56 = (var_1_43 || var_1_44);
   }
  } else {
   var_1_56 = (var_1_44 && var_1_57);
  }
 }
 if ((! var_1_43) && var_1_59) {
  var_1_58 = var_1_36;
 }
 if (var_1_44) {
  var_1_60 = (((var_1_61 - var_1_62) - var_1_36) + var_1_63);
 } else {
  if (var_1_32 >= var_1_35) {
   if (var_1_56 && (var_1_28 < 128.8f)) {
    var_1_60 = ((((var_1_36) < (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))))) ? (var_1_36) : (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))))));
   }
  }
 }
 if (var_1_56 || (var_1_62 < var_1_28)) {
  var_1_64 = (var_1_65 - ((((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))) < ((var_1_41 - var_1_66))) ? (((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)))) : ((var_1_41 - var_1_66)))));
 }
 if (var_1_58 < var_1_36) {
  var_1_67 = (((((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) < (var_1_29)) ? ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) < 0 ) ? -((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) : ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) : (var_1_29)));
 } else {
  var_1_67 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 if (((var_1_34 / var_1_41) & var_1_52) >= (((((var_1_31) > (var_1_30)) ? (var_1_31) : (var_1_30))) * var_1_25)) {
  if (var_1_69 || var_1_59) {
   var_1_68 = ((((((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) > (((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35))))) ? (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) : (((((var_1_37) > (var_1_35)) ? (var_1_37) : (var_1_35))))));
  } else {
   var_1_68 = (var_1_37 - var_1_62);
  }
 }
 if (var_1_42 >= ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) {
  if ((var_1_37 - ((((var_1_35) > (var_1_62)) ? (var_1_35) : (var_1_62)))) >= 10.2) {
   if (var_1_43) {
    var_1_70 = (((((var_1_39) > (((((var_1_30) > (var_1_50)) ? (var_1_30) : (var_1_50))))) ? (var_1_39) : (((((var_1_30) > (var_1_50)) ? (var_1_30) : (var_1_50)))))) + ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))));
   }
  } else {
   var_1_70 = ((((((((var_1_42) < (((((var_1_53) < (var_1_41)) ? (var_1_53) : (var_1_41))))) ? (var_1_42) : (((((var_1_53) < (var_1_41)) ? (var_1_53) : (var_1_41))))))) < (var_1_52)) ? (((((var_1_42) < (((((var_1_53) < (var_1_41)) ? (var_1_53) : (var_1_41))))) ? (var_1_42) : (((((var_1_53) < (var_1_41)) ? (var_1_53) : (var_1_41))))))) : (var_1_52)));
  }
 } else {
  if ((- var_1_47) <= var_1_36) {
   var_1_70 = (((((var_1_64) > (var_1_49)) ? (var_1_64) : (var_1_49))) - ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))));
  }
 }
 if (50 > var_1_39) {
  var_1_71 = (var_1_72 - var_1_36);
 } else {
  var_1_71 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
 }
 if ((var_1_46 + var_1_42) <= var_1_64) {
  var_1_73 = (var_1_74 || var_1_75);
 } else {
  if ((((((((var_1_36) < (var_1_72)) ? (var_1_36) : (var_1_72))) < 0 ) ? -((((var_1_36) < (var_1_72)) ? (var_1_36) : (var_1_72))) : ((((var_1_36) < (var_1_72)) ? (var_1_36) : (var_1_72))))) < ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) {
   var_1_73 = (! var_1_57);
  } else {
   var_1_73 = (var_1_69 && ((var_1_46 >= var_1_76) && var_1_75));
  }
 }
 if (var_1_69) {
  var_1_77 = (var_1_53 + (((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) < 0 ) ? -((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) : ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))));
 }
 if (var_1_77 >= -4) {
  var_1_78 = (10.5f - var_1_35);
 } else {
  if (var_1_75) {
   var_1_78 = ((((var_1_37) < (var_1_79)) ? (var_1_37) : (var_1_79)));
  }
 }
 if ((-2 <= var_1_46) && var_1_56) {
  var_1_80 = var_1_61;
 }
 if ((4u == var_1_49) && var_1_33) {
  var_1_81 = (var_1_49 + 100);
 }
 if (((((((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))) < ((var_1_25 % var_1_41))) ? (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))) : ((var_1_25 % var_1_41)))) > (var_1_49 - var_1_42)) {
  if (var_1_69) {
   var_1_82 = var_1_72;
  } else {
   var_1_82 = var_1_36;
  }
 } else {
  var_1_82 = var_1_63;
 }
 var_1_83 = var_1_41;
 if (var_1_75) {
  var_1_84 = var_1_66;
 }
 if (var_1_69) {
  var_1_85 = var_1_42;
 }
 if (((((var_1_72) < 0 ) ? -(var_1_72) : (var_1_72))) <= (- var_1_82)) {
  var_1_86 = (var_1_66 - ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))));
 }
 var_1_87 = var_1_66;
 var_1_88 = var_1_66;
 var_1_89 = var_1_79;
 signed long int stepLocal_0 = last_1_var_1_10;
 if (stepLocal_0 >= last_1_var_1_10) {
  var_1_9 = (-256 + last_1_var_1_10);
 } else {
  var_1_9 = (last_1_var_1_10 + last_1_var_1_10);
 }
 signed short int stepLocal_1 = var_1_9;
 if (stepLocal_1 > 0) {
  var_1_19 = ((var_1_5 >= (- var_1_15)) && (var_1_11 && (var_1_20 && var_1_21)));
 }
 if (var_1_19) {
  var_1_10 = ((((0) < (var_1_12)) ? (0) : (var_1_12)));
 } else {
  if (! (var_1_5 > (255.9 / var_1_13))) {
   var_1_10 = var_1_12;
  }
 }
 if (((var_1_2 - var_1_3) * var_1_4) < var_1_5) {
  var_1_1 = ((((-8) < ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10)))))) ? (-8) : ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10)))))));
 } else {
  var_1_1 = var_1_10;
 }
 if ((var_1_17 <= (- var_1_16)) && var_1_19) {
  var_1_18 = var_1_10;
 }
 if (var_1_19) {
  var_1_22 = (var_1_9 + var_1_10);
 } else {
  var_1_22 = (((((var_1_23 - var_1_9)) < (var_1_10)) ? ((var_1_23 - var_1_9)) : (var_1_10)));
 }
 if (! var_1_19) {
  if (((var_1_15 - var_1_16) - var_1_17) <= var_1_13) {
   var_1_14 = var_1_18;
  } else {
   var_1_14 = var_1_18;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 4611686.018427387900e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427387900e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 65535);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65535);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -16383);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -16383);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 255);
 assume_abort_if_not(var_1_34 != 0);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 63);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 64);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -126);
 assume_abort_if_not(var_1_51 <= 126);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 127);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 127);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 1);
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 2305843.009213691390e+12F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 2305843.009213691390e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 127);
 assume_abort_if_not(var_1_65 <= 254);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 63);
 var_1_69 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 1);
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 0);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 0);
 var_1_76 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_76 >= -2147483648);
 assume_abort_if_not(var_1_76 <= 2147483647);
 var_1_79 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_79 >= -922337.2036854765600e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854765600e+12F && var_1_79 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
}
int property() {
 return (((((((((var_1_2 - var_1_3) * var_1_4) < var_1_5) ? (var_1_1 == ((signed short int) ((((-8) < ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10)))))) ? (-8) : ((var_1_10 + ((((var_1_10) < (var_1_10)) ? (var_1_10) : (var_1_10))))))))) : (var_1_1 == ((signed short int) var_1_10))) && ((last_1_var_1_10 >= last_1_var_1_10) ? (var_1_9 == ((signed short int) (-256 + last_1_var_1_10))) : (var_1_9 == ((signed short int) (last_1_var_1_10 + last_1_var_1_10))))) && (var_1_19 ? (var_1_10 == ((unsigned char) ((((0) < (var_1_12)) ? (0) : (var_1_12))))) : ((! (var_1_5 > (255.9 / var_1_13))) ? (var_1_10 == ((unsigned char) var_1_12)) : 1))) && ((! var_1_19) ? ((((var_1_15 - var_1_16) - var_1_17) <= var_1_13) ? (var_1_14 == ((unsigned short int) var_1_18)) : (var_1_14 == ((unsigned short int) var_1_18))) : 1)) && (((var_1_17 <= (- var_1_16)) && var_1_19) ? (var_1_18 == ((signed short int) var_1_10)) : 1)) && ((var_1_9 > 0) ? (var_1_19 == ((unsigned char) ((var_1_5 >= (- var_1_15)) && (var_1_11 && (var_1_20 && var_1_21))))) : 1)) && (var_1_19 ? (var_1_22 == ((unsigned long int) (var_1_9 + var_1_10))) : (var_1_22 == ((unsigned long int) (((((var_1_23 - var_1_9)) < (var_1_10)) ? ((var_1_23 - var_1_9)) : (var_1_10))))))
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
