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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
unsigned long int var_1_7 = 64;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 16;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -50;
signed long int var_1_17 = 128;
unsigned long int var_1_18 = 32;
unsigned long int var_1_19 = 3711233667;
unsigned short int var_1_20 = 128;
unsigned short int var_1_21 = 128;
signed short int var_1_22 = 64;
signed char var_1_23 = -16;
signed char var_1_24 = -32;
signed char var_1_25 = 25;
signed char var_1_26 = -50;
signed long int var_1_27 = -256;
signed char var_1_28 = -10;
signed char var_1_29 = 10;
signed char var_1_30 = -4;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
signed char var_1_36 = 16;
float var_1_37 = 2.2;
float var_1_38 = 99.2;
signed char var_1_39 = 10;
unsigned char var_1_40 = 100;
float var_1_41 = 9999.07;
unsigned char var_1_42 = 50;
unsigned char var_1_43 = 1;
signed short int var_1_44 = -2;
signed short int var_1_45 = 32;
signed short int var_1_46 = 10;
double var_1_47 = 15.2;
double var_1_48 = 10.6;
signed char var_1_49 = 0;
unsigned short int var_1_50 = 1;
unsigned short int var_1_51 = 64923;
signed char var_1_52 = -8;
unsigned short int var_1_53 = 35203;
unsigned long int var_1_54 = 25;
signed long int var_1_55 = -128;
unsigned long int var_1_56 = 3775510160;
double var_1_57 = 256.3;
double var_1_58 = 49.85;
double var_1_59 = 10.5;
double var_1_60 = 128.4;
double var_1_61 = 4.4;
signed short int var_1_62 = 0;
unsigned short int var_1_63 = 10;
unsigned char var_1_64 = 0;
signed char var_1_65 = 100;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
signed char var_1_68 = -4;
signed char var_1_69 = 0;
signed char var_1_70 = 10;
signed short int var_1_71 = -1;
float var_1_72 = 1.2;
unsigned long int var_1_73 = 4;
signed char var_1_74 = 100;
unsigned char var_1_75 = 8;
unsigned char var_1_76 = 128;
unsigned char var_1_77 = 1;
unsigned char var_1_78 = 50;
signed long int var_1_79 = -10;
unsigned char var_1_80 = 0;
signed short int var_1_81 = 8;
double var_1_82 = 5.7;
unsigned long int var_1_83 = 16;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 0;
double var_1_86 = 10.875;
unsigned long int last_1_var_1_7 = 64;
signed long int last_1_var_1_17 = 128;
unsigned short int last_1_var_1_20 = 128;
void initially(void) {
}
void step(void) {
 if ((var_1_24 | ((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26)))) < (((((-5) < 0 ) ? -(-5) : (-5))) >> var_1_27)) {
  if (var_1_25 >= (var_1_27 % var_1_28)) {
   var_1_23 = var_1_29;
  } else {
   var_1_23 = (((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) < 0 ) ? -((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) : ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))));
  }
 }
 if (10u != var_1_27) {
  if (var_1_24 < var_1_25) {
   if (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) >= var_1_30) {
    var_1_31 = (var_1_32 || ((! var_1_33) && var_1_34));
   } else {
    var_1_31 = ((! var_1_34) || var_1_33);
   }
  } else {
   var_1_31 = (var_1_34 || var_1_35);
  }
 } else {
  var_1_31 = (var_1_35 && (! var_1_33));
 }
 if (var_1_37 != var_1_38) {
  if (-4 < var_1_25) {
   var_1_36 = (var_1_39 - ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))));
  } else {
   var_1_36 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  }
 }
 if (var_1_23 > var_1_24) {
  if (var_1_39 > ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) {
   if (var_1_37 <= (var_1_38 * var_1_41)) {
    var_1_40 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
   }
  }
 } else {
  var_1_40 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
 }
 if (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) > ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) {
  if (-32 == ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) {
   var_1_43 = ((var_1_36 >= var_1_24) || var_1_35);
  } else {
   var_1_43 = var_1_33;
  }
 } else {
  var_1_43 = var_1_33;
 }
 if (var_1_42 <= var_1_27) {
  if (var_1_36 <= var_1_28) {
   var_1_44 = (var_1_40 - ((((((((var_1_42) < (var_1_45)) ? (var_1_42) : (var_1_45)))) < (var_1_46)) ? (((((var_1_42) < (var_1_45)) ? (var_1_42) : (var_1_45)))) : (var_1_46))));
  }
 }
 if (var_1_23 >= var_1_29) {
  var_1_47 = var_1_48;
 } else {
  if (var_1_29 >= var_1_44) {
   var_1_47 = var_1_48;
  }
 }
 if (var_1_42 < var_1_26) {
  var_1_49 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
 } else {
  var_1_49 = var_1_30;
 }
 if ((var_1_51 - var_1_45) <= ((((-8) < 0 ) ? -(-8) : (-8)))) {
  if (var_1_39 >= (~ var_1_52)) {
   if ((~ (- var_1_51)) <= var_1_39) {
    var_1_50 = (((((var_1_53 - ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) > (var_1_46)) ? ((var_1_53 - ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) : (var_1_46)));
   } else {
    var_1_50 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
   }
  }
 }
 if (var_1_34) {
  if (((((var_1_28) > (var_1_53)) ? (var_1_28) : (var_1_53))) >= (var_1_39 & var_1_55)) {
   if ((var_1_29 / var_1_28) < var_1_53) {
    var_1_54 = (var_1_56 - var_1_50);
   }
  }
 } else {
  if (var_1_35) {
   var_1_54 = var_1_53;
  }
 }
 if (! var_1_43) {
  var_1_57 = (((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) < 0 ) ? -((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) : ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))));
 } else {
  var_1_57 = ((((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) - var_1_58) < 0 ) ? -(((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) - var_1_58) : (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))) - var_1_58)));
 }
 if ((var_1_56 % var_1_53) <= var_1_51) {
  var_1_59 = (((((((var_1_58) < (var_1_48)) ? (var_1_58) : (var_1_48))) < 0 ) ? -((((var_1_58) < (var_1_48)) ? (var_1_58) : (var_1_48))) : ((((var_1_58) < (var_1_48)) ? (var_1_58) : (var_1_48)))));
 } else {
  var_1_59 = (var_1_58 - ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48))));
 }
 var_1_60 = ((((((((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) > (var_1_48)) ? (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) : (var_1_48)))) < (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) ? (((((((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) > (var_1_48)) ? (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) : (var_1_48)))) : (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))));
 if (var_1_32) {
  var_1_62 = ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)));
 } else {
  var_1_62 = var_1_23;
 }
 if (var_1_33 && (var_1_40 <= var_1_36)) {
  if (32 > var_1_49) {
   if (var_1_23 <= (var_1_28 / -5)) {
    var_1_63 = (var_1_53 - ((((var_1_45) < (5)) ? (var_1_45) : (5))));
   } else {
    var_1_63 = ((((((((((((var_1_46) < (var_1_40)) ? (var_1_46) : (var_1_40)))) > (5)) ? (((((var_1_46) < (var_1_40)) ? (var_1_46) : (var_1_40)))) : (5)))) < (var_1_53)) ? (((((((((var_1_46) < (var_1_40)) ? (var_1_46) : (var_1_40)))) > (5)) ? (((((var_1_46) < (var_1_40)) ? (var_1_46) : (var_1_40)))) : (5)))) : (var_1_53)));
   }
  }
 }
 if (var_1_26 <= (var_1_39 - var_1_65)) {
  var_1_64 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
 } else {
  var_1_64 = ((((8) < 0 ) ? -(8) : (8)));
 }
 var_1_66 = (! (var_1_43 && (var_1_33 || var_1_67)));
 if ((var_1_23 ^ var_1_29) <= var_1_36) {
  if ((var_1_28 / var_1_51) > var_1_54) {
   var_1_68 = ((((((var_1_69 + var_1_70)) < (var_1_39)) ? ((var_1_69 + var_1_70)) : (var_1_39))) - ((100 - 10) - 8));
  }
 }
 if ((var_1_61 / var_1_72) < var_1_38) {
  if (var_1_68 < var_1_23) {
   var_1_71 = var_1_29;
  }
 } else {
  var_1_71 = (((((var_1_42 + var_1_52)) < (var_1_29)) ? ((var_1_42 + var_1_52)) : (var_1_29)));
 }
 if (! var_1_34) {
  var_1_73 = var_1_46;
 } else {
  if (var_1_67) {
   var_1_73 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
  }
 }
 if (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) <= (~ var_1_27)) {
  var_1_74 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
 } else {
  var_1_74 = (var_1_70 - ((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))));
 }
 if (var_1_68 < var_1_52) {
  var_1_75 = ((((var_1_69) < ((var_1_76 - var_1_70))) ? (var_1_69) : ((var_1_76 - var_1_70))));
 } else {
  var_1_75 = (((((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))) < 0 ) ? -((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70))) : ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70)))));
 }
 if (var_1_67 || var_1_31) {
  var_1_77 = var_1_35;
 } else {
  if (-32 < var_1_24) {
   var_1_77 = (! (var_1_67 || var_1_33));
  } else {
   var_1_77 = ((var_1_60 > var_1_58) || (! var_1_67));
  }
 }
 if (var_1_73 < var_1_64) {
  if (var_1_74 != (var_1_23 ^ var_1_44)) {
   var_1_78 = 0;
  } else {
   var_1_78 = var_1_65;
  }
 } else {
  var_1_78 = ((((var_1_70) < 0 ) ? -(var_1_70) : (var_1_70)));
 }
 if (var_1_43) {
  var_1_79 = var_1_49;
 }
 if (var_1_35) {
  var_1_80 = var_1_34;
 }
 var_1_81 = var_1_36;
 var_1_82 = var_1_48;
 var_1_83 = var_1_63;
 if (var_1_80) {
  var_1_84 = var_1_85;
 } else {
  var_1_84 = var_1_67;
 }
 if (var_1_49 < (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) << var_1_29)) {
  if (var_1_44 <= ((var_1_64 - var_1_70) & (-64 >> var_1_49))) {
   var_1_86 = var_1_61;
  } else {
   var_1_86 = var_1_58;
  }
 }
 signed long int stepLocal_6 = -4;
 if (last_1_var_1_17 != stepLocal_6) {
  var_1_17 = ((var_1_8 + (1000000000 - var_1_10)) - ((last_1_var_1_20 + var_1_9) + 50));
 } else {
  var_1_17 = last_1_var_1_20;
 }
 var_1_20 = var_1_17;
 var_1_12 = (var_1_13 && var_1_14);
 var_1_21 = var_1_8;
 var_1_22 = -256;
 signed short int stepLocal_1 = var_1_22;
 signed short int stepLocal_0 = var_1_22;
 if ((var_1_21 * (~ var_1_22)) >= stepLocal_0) {
  if (stepLocal_1 <= var_1_17) {
   var_1_1 = (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_22);
  }
 } else {
  if (var_1_12) {
   var_1_1 = var_1_21;
  } else {
   var_1_1 = var_1_22;
  }
 }
 signed long int stepLocal_2 = ((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10;
 if (last_1_var_1_7 < stepLocal_2) {
  if (var_1_12) {
   var_1_7 = var_1_9;
  }
 }
 unsigned short int stepLocal_3 = var_1_20;
 if ((64 - var_1_1) >= stepLocal_3) {
  if (! var_1_12) {
   var_1_11 = var_1_10;
  }
 }
 unsigned char stepLocal_5 = var_1_12;
 unsigned char stepLocal_4 = var_1_10;
 if ((var_1_8 < var_1_17) && stepLocal_5) {
  var_1_15 = ((((var_1_10) > ((var_1_17 - var_1_11))) ? (var_1_10) : ((var_1_17 - var_1_11))));
 } else {
  if (stepLocal_4 < var_1_7) {
   var_1_15 = var_1_8;
  } else {
   var_1_15 = var_1_8;
  }
 }
 var_1_18 = (var_1_19 - var_1_21);
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 127);
 assume_abort_if_not(var_1_8 <= 255);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 255);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -128);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -128);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -128);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -128);
 assume_abort_if_not(var_1_28 <= 127);
 assume_abort_if_not(var_1_28 != 0);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -127);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -126);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -1);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 32766);
 var_1_46 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 32766);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -922337.2036854765600e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 32767);
 assume_abort_if_not(var_1_51 <= 65535);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -128);
 assume_abort_if_not(var_1_52 <= 127);
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 32767);
 assume_abort_if_not(var_1_53 <= 65534);
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= -2147483648);
 assume_abort_if_not(var_1_55 <= 2147483647);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 2147483647);
 assume_abort_if_not(var_1_56 <= 4294967294);
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -922337.2036854765600e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 127);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 0);
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 63);
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 63);
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= -922337.2036854776000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
 assume_abort_if_not(var_1_72 != 0.0F);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 127);
 assume_abort_if_not(var_1_76 <= 254);
 var_1_85 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 0);
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((((((var_1_21 * (~ var_1_22)) >= var_1_22) ? ((var_1_22 <= var_1_17) ? (var_1_1 == ((signed long int) (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_22))) : 1) : (var_1_12 ? (var_1_1 == ((signed long int) var_1_21)) : (var_1_1 == ((signed long int) var_1_22)))) && ((last_1_var_1_7 < (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - var_1_10)) ? (var_1_12 ? (var_1_7 == ((unsigned long int) var_1_9)) : 1) : 1)) && (((64 - var_1_1) >= var_1_20) ? ((! var_1_12) ? (var_1_11 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_12 == ((unsigned char) (var_1_13 && var_1_14)))) && (((var_1_8 < var_1_17) && var_1_12) ? (var_1_15 == ((signed long int) ((((var_1_10) > ((var_1_17 - var_1_11))) ? (var_1_10) : ((var_1_17 - var_1_11)))))) : ((var_1_10 < var_1_7) ? (var_1_15 == ((signed long int) var_1_8)) : (var_1_15 == ((signed long int) var_1_8))))) && ((last_1_var_1_17 != -4) ? (var_1_17 == ((signed long int) ((var_1_8 + (1000000000 - var_1_10)) - ((last_1_var_1_20 + var_1_9) + 50)))) : (var_1_17 == ((signed long int) last_1_var_1_20)))) && (var_1_18 == ((unsigned long int) (var_1_19 - var_1_21)))) && (var_1_20 == ((unsigned short int) var_1_17))) && (var_1_21 == ((unsigned short int) var_1_8))) && (var_1_22 == ((signed short int) -256))
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
