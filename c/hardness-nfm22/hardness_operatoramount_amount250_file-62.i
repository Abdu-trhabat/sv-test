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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 32.2;
double var_1_4 = 10000000.9;
double var_1_5 = 32.46;
double var_1_6 = 10000.6;
unsigned long int var_1_7 = 128;
unsigned long int var_1_9 = 3574816166;
unsigned long int var_1_10 = 1286461316;
double var_1_12 = -0.75;
double var_1_13 = 127.875;
double var_1_14 = 0.4;
double var_1_15 = 255.125;
double var_1_16 = 15.2;
unsigned short int var_1_17 = 5;
signed short int var_1_19 = 16;
signed short int var_1_25 = 20308;
float var_1_28 = 15.1;
unsigned long int var_1_29 = 25;
unsigned char var_1_30 = 25;
unsigned char var_1_32 = 10;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 0;
signed long int var_1_37 = 1;
signed long int var_1_39 = 1238027655;
double var_1_42 = 32.1;
double var_1_43 = 5.6;
double var_1_44 = 1.6;
signed char var_1_45 = 32;
double var_1_46 = 127.2;
signed char var_1_47 = 100;
signed char var_1_48 = -32;
signed char var_1_49 = -10;
signed char var_1_50 = -25;
signed char var_1_51 = 0;
signed char var_1_52 = 16;
unsigned long int var_1_53 = 256;
signed short int var_1_54 = -2;
double var_1_55 = 3.4;
double var_1_56 = 0.85;
float var_1_57 = 99999999999.4;
unsigned short int var_1_58 = 37769;
float var_1_59 = 0.75;
float var_1_60 = 3.5;
float var_1_61 = 31.5;
float var_1_62 = 15.05;
float var_1_63 = 3.2;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
signed long int var_1_68 = 256;
float var_1_69 = 255.5;
float var_1_70 = 0.0;
float var_1_71 = 0.0;
signed char var_1_72 = -100;
signed char var_1_73 = 2;
unsigned short int var_1_74 = 0;
unsigned char var_1_75 = 10;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 0;
float var_1_78 = 100.5;
unsigned short int last_1_var_1_17 = 5;
signed long int last_1_var_1_37 = 1;
double last_1_var_1_42 = 32.1;
double last_1_var_1_43 = 5.6;
unsigned long int last_1_var_1_53 = 256;
float last_1_var_1_62 = 15.05;
float last_1_var_1_63 = 3.2;
unsigned char last_1_var_1_65 = 1;
unsigned char last_1_var_1_75 = 10;
unsigned char last_1_var_1_76 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_18 = (var_1_48 + var_1_32) | var_1_35;
 if (last_1_var_1_75 <= stepLocal_18) {
  var_1_65 = (last_1_var_1_76 || var_1_66);
 } else {
  var_1_65 = (((var_1_5 != last_1_var_1_43) || var_1_66) && var_1_67);
 }
 if (var_1_65) {
  var_1_75 = var_1_73;
 } else {
  var_1_75 = var_1_34;
 }
 if (9.5f != var_1_44) {
  if ((last_1_var_1_63 / var_1_46) > last_1_var_1_42) {
   if (var_1_14 < (last_1_var_1_63 * (var_1_6 / var_1_46))) {
    var_1_53 = (((((var_1_51) < ((var_1_10 - var_1_35))) ? (var_1_51) : ((var_1_10 - var_1_35)))) + last_1_var_1_17);
   }
  }
 }
 if (last_1_var_1_53 < (var_1_33 % var_1_58)) {
  var_1_74 = ((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52)));
 } else {
  var_1_74 = var_1_51;
 }
 unsigned char stepLocal_7 = last_1_var_1_65;
 if (stepLocal_7 && last_1_var_1_65) {
  if (var_1_4 == last_1_var_1_62) {
   var_1_30 = ((((((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) < ((var_1_35 - 32))) ? (((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) : ((var_1_35 - 32))));
  } else {
   var_1_30 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
  }
 } else {
  var_1_30 = (var_1_34 + var_1_36);
 }
 unsigned char stepLocal_0 = var_1_30;
 if (var_1_74 >= stepLocal_0) {
  var_1_1 = ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) < 0 ) ? -(((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) : (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6)));
 } else {
  var_1_1 = (var_1_4 + var_1_5);
 }
 signed long int stepLocal_6 = var_1_75 ^ var_1_75;
 if (-64 >= stepLocal_6) {
  var_1_29 = ((((var_1_30) < (var_1_25)) ? (var_1_30) : (var_1_25)));
 }
 if (var_1_1 != var_1_60) {
  var_1_62 = (var_1_60 - var_1_44);
 } else {
  var_1_62 = (var_1_4 + var_1_5);
 }
 if (((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6))) <= (var_1_13 - var_1_14)) {
  var_1_12 = (var_1_15 - var_1_16);
 } else {
  var_1_12 = (((((var_1_6 + var_1_5)) > (var_1_4)) ? ((var_1_6 + var_1_5)) : (var_1_4)));
 }
 if (var_1_65) {
  var_1_28 = (var_1_6 + var_1_5);
 }
 var_1_43 = ((((((9.999999999999996E14) < (var_1_44)) ? (9.999999999999996E14) : (var_1_44))) + ((((100.6) < 0 ) ? -(100.6) : (100.6)))) - var_1_16);
 var_1_54 = (var_1_36 - (var_1_33 + var_1_32));
 if (var_1_6 <= var_1_46) {
  var_1_55 = ((((var_1_5) < (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4)))))))) ? (var_1_5) : (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4)))))))));
 } else {
  var_1_55 = (255.5 - (var_1_44 + var_1_56));
 }
 var_1_69 = (var_1_59 - ((var_1_70 + var_1_71) - var_1_56));
 if (last_1_var_1_76) {
  var_1_76 = var_1_77;
 } else {
  var_1_76 = var_1_77;
 }
 if (var_1_47 < var_1_36) {
  var_1_78 = ((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) - 1.5f) + (var_1_61 - var_1_59));
 } else {
  var_1_78 = var_1_5;
 }
 unsigned long int stepLocal_9 = var_1_10;
 signed long int stepLocal_8 = 10;
 if (stepLocal_9 <= var_1_75) {
  var_1_37 = ((var_1_25 + ((((var_1_29) > (var_1_53)) ? (var_1_29) : (var_1_53)))) - var_1_33);
 } else {
  if (last_1_var_1_37 <= stepLocal_8) {
   var_1_37 = ((var_1_74 + var_1_36) - var_1_75);
  }
 }
 signed long int stepLocal_10 = var_1_37;
 if (stepLocal_10 < ((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9)))) {
  if (! var_1_65) {
   var_1_42 = (((((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) < (var_1_15)) ? ((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) : (var_1_15)));
  } else {
   var_1_42 = var_1_4;
  }
 } else {
  var_1_42 = var_1_16;
 }
 unsigned long int stepLocal_3 = (((8u) < (var_1_74)) ? (8u) : (var_1_74));
 if ((var_1_75 + var_1_10) < stepLocal_3) {
  var_1_17 = var_1_30;
 }
 unsigned long int stepLocal_2 = var_1_29 - var_1_75;
 unsigned long int stepLocal_1 = var_1_29;
 if (32 > stepLocal_1) {
  if ((- var_1_75) != stepLocal_2) {
   var_1_7 = ((((((((5u) < (var_1_75)) ? (5u) : (var_1_75)))) < (var_1_75)) ? (((((5u) < (var_1_75)) ? (5u) : (var_1_75)))) : (var_1_75)));
  } else {
   var_1_7 = (var_1_9 - 32u);
  }
 } else {
  var_1_7 = ((((((((var_1_75) > ((var_1_75 + var_1_29))) ? (var_1_75) : ((var_1_75 + var_1_29))))) < ((var_1_9 - (var_1_10 - var_1_17)))) ? (((((var_1_75) > ((var_1_75 + var_1_29))) ? (var_1_75) : ((var_1_75 + var_1_29))))) : ((var_1_9 - (var_1_10 - var_1_17)))));
 }
 if (var_1_76) {
  if (var_1_16 <= (var_1_14 / var_1_46)) {
   if (((var_1_74 + var_1_37) + var_1_17) >= var_1_17) {
    var_1_45 = var_1_47;
   }
  } else {
   if (((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35))) > var_1_30) {
    var_1_45 = var_1_47;
   } else {
    var_1_45 = (var_1_48 + 4);
   }
  }
 } else {
  if (var_1_76) {
   var_1_45 = ((((var_1_47) > ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50))) ? (var_1_47) : ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50))));
  } else {
   var_1_45 = ((2 + var_1_51) - var_1_52);
  }
 }
 unsigned long int stepLocal_13 = var_1_29;
 signed long int stepLocal_12 = var_1_37;
 signed char stepLocal_11 = var_1_49;
 if (stepLocal_12 != (var_1_17 / var_1_35)) {
  if (stepLocal_11 > var_1_53) {
   if (stepLocal_13 < (var_1_58 - var_1_30)) {
    var_1_57 = (((((var_1_56) > (var_1_44)) ? (var_1_56) : (var_1_44))) - (((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))) + var_1_61));
   }
  }
 }
 signed long int stepLocal_17 = (((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32));
 signed long int stepLocal_16 = var_1_75 / var_1_33;
 unsigned char stepLocal_15 = var_1_69 < var_1_14;
 unsigned char stepLocal_14 = var_1_65;
 if (var_1_65 || stepLocal_14) {
  if (var_1_61 >= (- var_1_43)) {
   var_1_63 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  }
 } else {
  if (stepLocal_16 <= var_1_75) {
   if (stepLocal_15 || var_1_65) {
    var_1_63 = ((((var_1_6) > (var_1_44)) ? (var_1_6) : (var_1_44)));
   } else {
    var_1_63 = (var_1_56 - var_1_61);
   }
  } else {
   if (stepLocal_17 > (var_1_39 + -32)) {
    if (var_1_61 > var_1_56) {
     var_1_63 = (var_1_60 - var_1_61);
    }
   } else {
    var_1_63 = 7.25f;
   }
  }
 }
 unsigned long int stepLocal_19 = ((((var_1_7) < (var_1_49)) ? (var_1_7) : (var_1_49))) / ((((var_1_35) > (var_1_58)) ? (var_1_35) : (var_1_58)));
 if (stepLocal_19 <= var_1_45) {
  if (var_1_67) {
   var_1_68 = (((((var_1_25) > (var_1_36)) ? (var_1_25) : (var_1_36))) - (var_1_39 - 5));
  }
 }
 if (((var_1_51 + var_1_73) - var_1_52) == var_1_33) {
  var_1_72 = (((((var_1_51) > (var_1_73)) ? (var_1_51) : (var_1_73))) + ((((var_1_50) < (8)) ? (var_1_50) : (8))));
 } else {
  if (var_1_17 != var_1_51) {
   var_1_72 = (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_50);
  } else {
   var_1_72 = var_1_47;
  }
 }
 unsigned char stepLocal_5 = var_1_65;
 signed long int stepLocal_4 = 8 + var_1_45;
 if (stepLocal_5 && var_1_76) {
  var_1_19 = (var_1_45 + ((((var_1_75) < (var_1_45)) ? (var_1_75) : (var_1_45))));
 } else {
  if (stepLocal_4 == var_1_45) {
   var_1_19 = ((var_1_25 - var_1_30) - var_1_30);
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 16382);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= 1073741823);
 assume_abort_if_not(var_1_39 <= 2147483646);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 assume_abort_if_not(var_1_46 != 0.0F);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -127);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -63);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -63);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -63);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 63);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 126);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 32767);
 assume_abort_if_not(var_1_58 <= 65535);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 1);
 assume_abort_if_not(var_1_66 <= 1);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 1);
 assume_abort_if_not(var_1_67 <= 1);
 var_1_70 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_70 >= 2305843.009213691390e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427382800e+12F && var_1_70 >= 1.0e-20F ));
 var_1_71 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_71 >= 2305843.009213691390e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
 var_1_73 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 63);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 0);
}
void updateLastVariables() {
 last_1_var_1_17 = var_1_17;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_76 = var_1_76;
}
int property() {
 return ((((((((((((((((((((((((((var_1_74 >= var_1_30) ? (var_1_1 == ((double) ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) < 0 ) ? -(((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) : (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6))))) : (var_1_1 == ((double) (var_1_4 + var_1_5)))) && ((32 > var_1_29) ? (((- var_1_75) != (var_1_29 - var_1_75)) ? (var_1_7 == ((unsigned long int) ((((((((5u) < (var_1_75)) ? (5u) : (var_1_75)))) < (var_1_75)) ? (((((5u) < (var_1_75)) ? (5u) : (var_1_75)))) : (var_1_75))))) : (var_1_7 == ((unsigned long int) (var_1_9 - 32u)))) : (var_1_7 == ((unsigned long int) ((((((((var_1_75) > ((var_1_75 + var_1_29))) ? (var_1_75) : ((var_1_75 + var_1_29))))) < ((var_1_9 - (var_1_10 - var_1_17)))) ? (((((var_1_75) > ((var_1_75 + var_1_29))) ? (var_1_75) : ((var_1_75 + var_1_29))))) : ((var_1_9 - (var_1_10 - var_1_17))))))))) && ((((((var_1_4) < (var_1_6)) ? (var_1_4) : (var_1_6))) <= (var_1_13 - var_1_14)) ? (var_1_12 == ((double) (var_1_15 - var_1_16))) : (var_1_12 == ((double) (((((var_1_6 + var_1_5)) > (var_1_4)) ? ((var_1_6 + var_1_5)) : (var_1_4))))))) && (((var_1_75 + var_1_10) < ((((8u) < (var_1_74)) ? (8u) : (var_1_74)))) ? (var_1_17 == ((unsigned short int) var_1_30)) : 1)) && ((var_1_65 && var_1_76) ? (var_1_19 == ((signed short int) (var_1_45 + ((((var_1_75) < (var_1_45)) ? (var_1_75) : (var_1_45)))))) : (((8 + var_1_45) == var_1_45) ? (var_1_19 == ((signed short int) ((var_1_25 - var_1_30) - var_1_30))) : 1))) && (var_1_65 ? (var_1_28 == ((float) (var_1_6 + var_1_5))) : 1)) && ((-64 >= (var_1_75 ^ var_1_75)) ? (var_1_29 == ((unsigned long int) ((((var_1_30) < (var_1_25)) ? (var_1_30) : (var_1_25))))) : 1)) && ((last_1_var_1_65 && last_1_var_1_65) ? ((var_1_4 == last_1_var_1_62) ? (var_1_30 == ((unsigned char) ((((((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) < ((var_1_35 - 32))) ? (((((var_1_32) > ((var_1_33 - var_1_34))) ? (var_1_32) : ((var_1_33 - var_1_34))))) : ((var_1_35 - 32)))))) : (var_1_30 == ((unsigned char) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) : (var_1_30 == ((unsigned char) (var_1_34 + var_1_36))))) && ((var_1_10 <= var_1_75) ? (var_1_37 == ((signed long int) ((var_1_25 + ((((var_1_29) > (var_1_53)) ? (var_1_29) : (var_1_53)))) - var_1_33))) : ((last_1_var_1_37 <= 10) ? (var_1_37 == ((signed long int) ((var_1_74 + var_1_36) - var_1_75))) : 1))) && ((var_1_37 < ((((var_1_32) > (var_1_9)) ? (var_1_32) : (var_1_9)))) ? ((! var_1_65) ? (var_1_42 == ((double) (((((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) < (var_1_15)) ? ((((((var_1_5 + var_1_6)) > (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_16) < (var_1_4)) ? (var_1_16) : (var_1_4))))))) : (var_1_15))))) : (var_1_42 == ((double) var_1_4))) : (var_1_42 == ((double) var_1_16)))) && (var_1_43 == ((double) ((((((9.999999999999996E14) < (var_1_44)) ? (9.999999999999996E14) : (var_1_44))) + ((((100.6) < 0 ) ? -(100.6) : (100.6)))) - var_1_16)))) && (var_1_76 ? ((var_1_16 <= (var_1_14 / var_1_46)) ? ((((var_1_74 + var_1_37) + var_1_17) >= var_1_17) ? (var_1_45 == ((signed char) var_1_47)) : 1) : ((((((var_1_36) < (var_1_35)) ? (var_1_36) : (var_1_35))) > var_1_30) ? (var_1_45 == ((signed char) var_1_47)) : (var_1_45 == ((signed char) (var_1_48 + 4))))) : (var_1_76 ? (var_1_45 == ((signed char) ((((var_1_47) > ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50))) ? (var_1_47) : ((((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) + var_1_50)))))) : (var_1_45 == ((signed char) ((2 + var_1_51) - var_1_52)))))) && ((9.5f != var_1_44) ? (((last_1_var_1_63 / var_1_46) > last_1_var_1_42) ? ((var_1_14 < (last_1_var_1_63 * (var_1_6 / var_1_46))) ? (var_1_53 == ((unsigned long int) (((((var_1_51) < ((var_1_10 - var_1_35))) ? (var_1_51) : ((var_1_10 - var_1_35)))) + last_1_var_1_17))) : 1) : 1) : 1)) && (var_1_54 == ((signed short int) (var_1_36 - (var_1_33 + var_1_32))))) && ((var_1_6 <= var_1_46) ? (var_1_55 == ((double) ((((var_1_5) < (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4)))))))) ? (var_1_5) : (((((var_1_44) < (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))) ? (var_1_44) : (((((4.8) > (var_1_4)) ? (4.8) : (var_1_4))))))))))) : (var_1_55 == ((double) (255.5 - (var_1_44 + var_1_56)))))) && ((var_1_37 != (var_1_17 / var_1_35)) ? ((var_1_49 > var_1_53) ? ((var_1_29 < (var_1_58 - var_1_30)) ? (var_1_57 == ((float) (((((var_1_56) > (var_1_44)) ? (var_1_56) : (var_1_44))) - (((((var_1_59) > (var_1_60)) ? (var_1_59) : (var_1_60))) + var_1_61)))) : 1) : 1) : 1)) && ((var_1_1 != var_1_60) ? (var_1_62 == ((float) (var_1_60 - var_1_44))) : (var_1_62 == ((float) (var_1_4 + var_1_5))))) && ((var_1_65 || var_1_65) ? ((var_1_61 >= (- var_1_43)) ? (var_1_63 == ((float) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : 1) : (((var_1_75 / var_1_33) <= var_1_75) ? (((var_1_69 < var_1_14) || var_1_65) ? (var_1_63 == ((float) ((((var_1_6) > (var_1_44)) ? (var_1_6) : (var_1_44))))) : (var_1_63 == ((float) (var_1_56 - var_1_61)))) : ((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) > (var_1_39 + -32)) ? ((var_1_61 > var_1_56) ? (var_1_63 == ((float) (var_1_60 - var_1_61))) : 1) : (var_1_63 == ((float) 7.25f)))))) && ((last_1_var_1_75 <= ((var_1_48 + var_1_32) | var_1_35)) ? (var_1_65 == ((unsigned char) (last_1_var_1_76 || var_1_66))) : (var_1_65 == ((unsigned char) (((var_1_5 != last_1_var_1_43) || var_1_66) && var_1_67))))) && (((((((var_1_7) < (var_1_49)) ? (var_1_7) : (var_1_49))) / ((((var_1_35) > (var_1_58)) ? (var_1_35) : (var_1_58)))) <= var_1_45) ? (var_1_67 ? (var_1_68 == ((signed long int) (((((var_1_25) > (var_1_36)) ? (var_1_25) : (var_1_36))) - (var_1_39 - 5)))) : 1) : 1)) && (var_1_69 == ((float) (var_1_59 - ((var_1_70 + var_1_71) - var_1_56))))) && ((((var_1_51 + var_1_73) - var_1_52) == var_1_33) ? (var_1_72 == ((signed char) (((((var_1_51) > (var_1_73)) ? (var_1_51) : (var_1_73))) + ((((var_1_50) < (8)) ? (var_1_50) : (8)))))) : ((var_1_17 != var_1_51) ? (var_1_72 == ((signed char) (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) + var_1_50))) : (var_1_72 == ((signed char) var_1_47))))) && ((last_1_var_1_53 < (var_1_33 % var_1_58)) ? (var_1_74 == ((unsigned short int) ((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) : (var_1_74 == ((unsigned short int) var_1_51)))) && (var_1_65 ? (var_1_75 == ((unsigned char) var_1_73)) : (var_1_75 == ((unsigned char) var_1_34)))) && (last_1_var_1_76 ? (var_1_76 == ((unsigned char) var_1_77)) : (var_1_76 == ((unsigned char) var_1_77)))) && ((var_1_47 < var_1_36) ? (var_1_78 == ((float) ((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) - 1.5f) + (var_1_61 - var_1_59)))) : (var_1_78 == ((float) var_1_5)))
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
