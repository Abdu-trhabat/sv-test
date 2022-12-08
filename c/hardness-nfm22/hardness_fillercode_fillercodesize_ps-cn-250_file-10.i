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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 58792;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed short int var_1_11 = 1;
signed short int var_1_12 = -25;
signed short int var_1_13 = 25;
unsigned short int var_1_14 = 5;
unsigned short int var_1_16 = 20511;
unsigned long int var_1_17 = 50;
unsigned short int var_1_18 = 10;
unsigned short int var_1_19 = 2;
float var_1_20 = 100000.5;
float var_1_21 = 31.9;
float var_1_22 = -0.6;
unsigned short int var_1_23 = 32;
float var_1_24 = 24.5;
unsigned short int var_1_25 = 41226;
unsigned short int var_1_26 = 46406;
unsigned short int var_1_27 = 32;
signed long int var_1_28 = -128;
unsigned char var_1_29 = 0;
signed long int var_1_30 = -128;
double var_1_31 = -0.8;
double var_1_32 = 49.9;
double var_1_33 = 8.375;
unsigned char var_1_34 = 10;
unsigned char var_1_35 = 100;
signed short int var_1_36 = -10;
signed long int var_1_37 = -100;
unsigned short int var_1_38 = 32;
signed short int var_1_39 = 0;
double var_1_40 = 4.5;
unsigned char var_1_41 = 1;
double var_1_42 = 24.75;
double var_1_43 = 32.5;
double var_1_44 = 4.75;
unsigned short int var_1_45 = 10;
float var_1_46 = 15.875;
float var_1_47 = 63.5;
float var_1_48 = 32.125;
unsigned char var_1_49 = 10;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 100;
unsigned char var_1_52 = 50;
float var_1_53 = 4.75;
float var_1_54 = 16.5;
float var_1_55 = 64.5;
float var_1_56 = 100000000000.954;
signed char var_1_57 = -128;
signed char var_1_58 = -8;
signed char var_1_59 = 10;
signed char var_1_60 = 100;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 25;
unsigned long int var_1_68 = 10;
unsigned long int var_1_69 = 0;
unsigned long int var_1_70 = 3618837432;
signed long int var_1_71 = 5;
signed long int var_1_73 = -16;
unsigned char var_1_74 = 32;
signed long int var_1_75 = 1347427043;
unsigned char var_1_76 = 128;
unsigned short int var_1_77 = 32;
unsigned short int var_1_78 = 4;
signed long int var_1_79 = -10;
unsigned char last_1_var_1_8 = 0;
void initially(void) {
}
void step(void) {
 if (var_1_20 <= var_1_21) {
  if ((var_1_21 + var_1_20) < ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) {
   if (var_1_20 <= ((((var_1_22) < (var_1_21)) ? (var_1_22) : (var_1_21)))) {
    var_1_19 = var_1_23;
   } else {
    if (var_1_20 != var_1_24) {
     var_1_19 = (((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) - var_1_27);
    } else {
     var_1_19 = ((((var_1_26) < (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? (var_1_26) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))));
    }
   }
  }
 }
 if (var_1_19 < (~ var_1_26)) {
  if (var_1_29) {
   var_1_28 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
  }
 } else {
  var_1_28 = ((((var_1_30) < (var_1_26)) ? (var_1_30) : (var_1_26)));
 }
 var_1_31 = ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)));
 if (var_1_19 > var_1_28) {
  if ((var_1_30 * var_1_27) <= var_1_23) {
   var_1_34 = 2;
  } else {
   var_1_34 = var_1_35;
  }
 }
 if (var_1_30 <= (~ var_1_28)) {
  if (var_1_35 < ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) {
   var_1_36 = var_1_34;
  }
 }
 if (((((var_1_22) < (var_1_32)) ? (var_1_22) : (var_1_32))) >= var_1_20) {
  var_1_37 = -64;
 }
 if (var_1_37 > (var_1_34 / var_1_25)) {
  var_1_38 = (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) + 100);
 }
 if (var_1_19 == var_1_25) {
  var_1_39 = var_1_35;
 } else {
  if (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) > var_1_33) {
   var_1_39 = ((((5 + var_1_35) < 0 ) ? -(5 + var_1_35) : (5 + var_1_35)));
  }
 }
 if (((var_1_30 >= var_1_34) || var_1_29) || var_1_41) {
  if (var_1_41) {
   if (var_1_34 < var_1_28) {
    var_1_40 = ((((var_1_32) > (((((var_1_33) < (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (var_1_33) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))))) ? (var_1_32) : (((((var_1_33) < (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (var_1_33) : (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))))));
   }
  } else {
   if (var_1_29) {
    var_1_40 = ((((var_1_43 + var_1_44) < 0 ) ? -(var_1_43 + var_1_44) : (var_1_43 + var_1_44)));
   }
  }
 }
 if (var_1_39 != var_1_27) {
  var_1_45 = ((((0) < (var_1_34)) ? (0) : (var_1_34)));
 }
 if (var_1_22 == var_1_43) {
  var_1_46 = (((((var_1_47 + var_1_48) < 0 ) ? -(var_1_47 + var_1_48) : (var_1_47 + var_1_48))) + var_1_43);
 }
 if (var_1_41) {
  if ((var_1_30 & 0) <= (var_1_25 >> var_1_37)) {
   var_1_49 = (var_1_50 + ((((((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52)))) > (((((2) < 0 ) ? -(2) : (2))))) ? (((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52)))) : (((((2) < 0 ) ? -(2) : (2)))))));
  } else {
   if ((var_1_52 % var_1_26) >= var_1_36) {
    var_1_49 = var_1_51;
   }
  }
 }
 if (var_1_24 <= var_1_33) {
  if (! var_1_29) {
   var_1_53 = (((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) + ((((var_1_48 + 9.5f) < 0 ) ? -(var_1_48 + 9.5f) : (var_1_48 + 9.5f))));
  } else {
   var_1_53 = ((((var_1_32) < ((var_1_43 + var_1_54))) ? (var_1_32) : ((var_1_43 + var_1_54))));
  }
 } else {
  if (var_1_47 >= ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) {
   var_1_53 = ((((((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) < 0 ) ? -((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) : ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) < 0 ) ? -(((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) < 0 ) ? -((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) : ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : (((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) < 0 ) ? -((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) : ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))))));
  } else {
   var_1_53 = (var_1_48 + (((((var_1_47) < (var_1_55)) ? (var_1_47) : (var_1_55))) + var_1_56));
  }
 }
 if (((var_1_39 / var_1_26) * var_1_38) <= -1) {
  var_1_57 = ((((var_1_58 + var_1_59) < 0 ) ? -(var_1_58 + var_1_59) : (var_1_58 + var_1_59)));
 }
 if ((- (- var_1_30)) <= var_1_49) {
  var_1_60 = (var_1_58 + var_1_59);
 } else {
  if (var_1_27 > ((((var_1_37) > (var_1_25)) ? (var_1_37) : (var_1_25)))) {
   var_1_60 = var_1_58;
  }
 }
 if (! var_1_29) {
  if (var_1_41) {
   var_1_61 = var_1_62;
  }
 }
 if (var_1_32 > 128.625) {
  if (var_1_56 <= var_1_53) {
   var_1_63 = (! var_1_62);
  } else {
   var_1_63 = ((var_1_62 || var_1_64) && ((var_1_33 < var_1_21) || (var_1_65 && var_1_66)));
  }
 }
 if (var_1_24 >= ((((((((var_1_40) < (var_1_31)) ? (var_1_40) : (var_1_31)))) > ((var_1_33 * 49.8f))) ? (((((var_1_40) < (var_1_31)) ? (var_1_40) : (var_1_31)))) : ((var_1_33 * 49.8f))))) {
  if (var_1_27 >= ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) {
   var_1_67 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  } else {
   var_1_67 = (((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) < 0 ) ? -((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) : ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))));
  }
 }
 if (var_1_27 >= var_1_45) {
  var_1_68 = ((((var_1_27) < (var_1_19)) ? (var_1_27) : (var_1_19)));
 }
 if (100.6f > ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) {
  var_1_69 = (((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))) - var_1_50);
 } else {
  if ((var_1_49 - var_1_50) > var_1_27) {
   if (var_1_58 > var_1_26) {
    if (var_1_41) {
     var_1_69 = (var_1_34 + ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))));
    }
   }
  }
 }
 if ((var_1_52 * (var_1_50 - 2)) >= (var_1_58 & var_1_27)) {
  if (! (var_1_70 < var_1_25)) {
   var_1_71 = ((((((((var_1_45 + var_1_35)) > (var_1_26)) ? ((var_1_45 + var_1_35)) : (var_1_26))) < 0 ) ? -(((((var_1_45 + var_1_35)) > (var_1_26)) ? ((var_1_45 + var_1_35)) : (var_1_26))) : (((((var_1_45 + var_1_35)) > (var_1_26)) ? ((var_1_45 + var_1_35)) : (var_1_26)))));
  } else {
   if ((var_1_37 / ((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26)))) >= (var_1_59 * var_1_30)) {
    var_1_71 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
   } else {
    var_1_71 = -200;
   }
  }
 } else {
  var_1_71 = ((((((((-128) > (var_1_39)) ? (-128) : (var_1_39)))) > (var_1_59)) ? (((((-128) > (var_1_39)) ? (-128) : (var_1_39)))) : (var_1_59)));
 }
 if (var_1_58 < var_1_39) {
  if ((~ var_1_28) <= (var_1_27 / var_1_25)) {
   if (var_1_70 < var_1_19) {
    var_1_73 = ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) < (var_1_26)) ? (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) : (var_1_26)));
   } else {
    var_1_73 = ((((var_1_49) < (var_1_19)) ? (var_1_49) : (var_1_19)));
   }
  } else {
   if (((((var_1_47) > (var_1_33)) ? (var_1_47) : (var_1_33))) <= -0.375) {
    var_1_73 = (((((var_1_26 - ((((64) < 0 ) ? -(64) : (64))))) < (var_1_30)) ? ((var_1_26 - ((((64) < 0 ) ? -(64) : (64))))) : (var_1_30)));
   }
  }
 }
 if (((var_1_75 - var_1_49) - var_1_45) != var_1_60) {
  var_1_74 = var_1_50;
 } else {
  var_1_74 = (var_1_76 - var_1_51);
 }
 if (var_1_43 >= var_1_22) {
  if (var_1_61) {
   var_1_77 = var_1_49;
  }
 }
 if (var_1_63) {
  var_1_78 = ((((var_1_26 - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) < 0 ) ? -(var_1_26 - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : (var_1_26 - ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))));
 }
 var_1_79 = var_1_59;
 unsigned short int stepLocal_1 = var_1_6;
 unsigned char stepLocal_0 = last_1_var_1_8;
 if (last_1_var_1_8 && stepLocal_0) {
  var_1_1 = ((((((56892) < (var_1_4)) ? (56892) : (var_1_4))) - var_1_5) - ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))));
 } else {
  if (((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5))) < stepLocal_1) {
   var_1_1 = var_1_5;
  }
 }
 var_1_8 = (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9);
 if (var_1_8) {
  var_1_14 = (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - ((((var_1_5) > ((var_1_16 - var_1_11))) ? (var_1_5) : ((var_1_16 - var_1_11)))));
 }
 signed long int stepLocal_4 = (((var_1_13) > ((var_1_16 << var_1_7))) ? (var_1_13) : ((var_1_16 << var_1_7)));
 if (stepLocal_4 >= var_1_14) {
  var_1_17 = var_1_11;
 } else {
  var_1_17 = (var_1_6 + var_1_5);
 }
 unsigned short int stepLocal_5 = var_1_5;
 if (stepLocal_5 == var_1_16) {
  if (var_1_8) {
   var_1_18 = (((((var_1_16 + 30393) - var_1_5) < 0 ) ? -((var_1_16 + 30393) - var_1_5) : ((var_1_16 + 30393) - var_1_5)));
  } else {
   var_1_18 = var_1_4;
  }
 } else {
  if (var_1_9) {
   var_1_18 = 200;
  }
 }
 unsigned char stepLocal_3 = var_1_9;
 unsigned long int stepLocal_2 = var_1_17;
 if (stepLocal_2 < var_1_6) {
  if ((var_1_6 != var_1_5) || stepLocal_3) {
   var_1_10 = (((10000 - var_1_11) - var_1_5) + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))));
  } else {
   var_1_10 = var_1_4;
  }
 } else {
  var_1_10 = var_1_13;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 49150);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 8191);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -16383);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65534);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 32767);
 assume_abort_if_not(var_1_25 <= 65534);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -230584.3009213691390e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -230584.3009213691390e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691390e+12F && var_1_48 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 127);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -230584.3009213691390e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -63);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -63);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 1);
 assume_abort_if_not(var_1_62 <= 1);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 1);
 assume_abort_if_not(var_1_64 <= 1);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 1);
 assume_abort_if_not(var_1_65 <= 1);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_70 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_70 >= 2147483647);
 assume_abort_if_not(var_1_70 <= 4294967294);
 var_1_75 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_75 >= 1073741823);
 assume_abort_if_not(var_1_75 <= 2147483647);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 127);
 assume_abort_if_not(var_1_76 <= 254);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
}
int property() {
 return ((((((last_1_var_1_8 && last_1_var_1_8) ? (var_1_1 == ((unsigned short int) ((((((56892) < (var_1_4)) ? (56892) : (var_1_4))) - var_1_5) - ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))))) : ((((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5))) < var_1_6) ? (var_1_1 == ((unsigned short int) var_1_5)) : 1)) && (var_1_8 == ((unsigned char) (((var_1_7 >= var_1_5) && (var_1_4 >= var_1_1)) || var_1_9)))) && ((var_1_17 < var_1_6) ? (((var_1_6 != var_1_5) || var_1_9) ? (var_1_10 == ((signed short int) (((10000 - var_1_11) - var_1_5) + ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))))) : (var_1_10 == ((signed short int) var_1_4))) : (var_1_10 == ((signed short int) var_1_13)))) && (var_1_8 ? (var_1_14 == ((unsigned short int) (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - ((((var_1_5) > ((var_1_16 - var_1_11))) ? (var_1_5) : ((var_1_16 - var_1_11))))))) : 1)) && ((((((var_1_13) > ((var_1_16 << var_1_7))) ? (var_1_13) : ((var_1_16 << var_1_7)))) >= var_1_14) ? (var_1_17 == ((unsigned long int) var_1_11)) : (var_1_17 == ((unsigned long int) (var_1_6 + var_1_5))))) && ((var_1_5 == var_1_16) ? (var_1_8 ? (var_1_18 == ((unsigned short int) (((((var_1_16 + 30393) - var_1_5) < 0 ) ? -((var_1_16 + 30393) - var_1_5) : ((var_1_16 + 30393) - var_1_5))))) : (var_1_18 == ((unsigned short int) var_1_4))) : (var_1_9 ? (var_1_18 == ((unsigned short int) 200)) : 1))
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
