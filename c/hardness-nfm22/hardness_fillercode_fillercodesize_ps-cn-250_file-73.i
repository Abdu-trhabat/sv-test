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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 7.325;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 3567543019;
float var_1_12 = 31.875;
signed long int var_1_13 = 128;
unsigned char var_1_16 = 4;
unsigned char var_1_18 = 16;
signed long int var_1_19 = 64;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 1897833385;
unsigned char var_1_22 = 2;
signed char var_1_23 = -5;
signed char var_1_24 = -4;
signed char var_1_25 = 2;
signed long int var_1_26 = -1000000;
double var_1_27 = 31.6;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 16;
signed short int var_1_30 = 10;
double var_1_31 = 99.25;
unsigned char var_1_32 = 10;
signed char var_1_33 = -64;
double var_1_34 = 1.6440000000000001;
double var_1_35 = 7.625;
signed char var_1_36 = 8;
signed char var_1_37 = 100;
signed char var_1_38 = 8;
signed char var_1_39 = 10;
signed long int var_1_40 = -16;
signed long int var_1_41 = 64;
signed char var_1_42 = 1;
signed long int var_1_43 = -1;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 32;
signed long int var_1_47 = 32;
unsigned short int var_1_48 = 0;
signed short int var_1_49 = 1;
unsigned short int var_1_50 = 100;
signed long int var_1_51 = 1;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
float var_1_56 = 24.375;
float var_1_57 = -0.8;
float var_1_58 = 31.45;
float var_1_59 = 1000.75;
double var_1_60 = 64.2;
signed long int var_1_61 = 1;
signed short int var_1_62 = -64;
float var_1_63 = 127.8;
double var_1_64 = 25.2;
signed short int var_1_65 = 4;
unsigned char var_1_66 = 0;
double var_1_67 = 2.6;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 5;
unsigned char var_1_71 = 32;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 25;
unsigned char var_1_74 = 128;
signed long int var_1_75 = 1;
signed long int var_1_76 = -32;
unsigned short int var_1_77 = 1;
unsigned short int var_1_78 = 59020;
float var_1_79 = 8.5;
float var_1_80 = 100.2;
unsigned char var_1_81 = 8;
signed char var_1_82 = 2;
double var_1_83 = 63.7;
unsigned short int var_1_84 = 4;
float var_1_85 = 16.7;
unsigned char var_1_86 = 1;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 100;
unsigned char var_1_89 = 100;
float var_1_90 = 255.5;
float var_1_91 = 127.25;
signed char var_1_92 = 1;
float last_1_var_1_12 = 31.875;
signed long int last_1_var_1_13 = 128;
unsigned char last_1_var_1_16 = 4;
signed long int last_1_var_1_19 = 64;
void initially(void) {
}
void step(void) {
 if (var_1_28 && (var_1_29 > var_1_30)) {
  var_1_27 = var_1_31;
 } else {
  if (var_1_29 == var_1_30) {
   if (var_1_30 >= var_1_29) {
    var_1_27 = var_1_31;
   }
  }
 }
 var_1_32 = 2;
 if ((((((var_1_34 - var_1_35)) < (var_1_27)) ? ((var_1_34 - var_1_35)) : (var_1_27))) >= 9.9999999999975E11) {
  var_1_33 = (var_1_36 - (var_1_37 - ((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))));
 } else {
  var_1_33 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 }
 if ((var_1_39 >> var_1_37) >= (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) & var_1_38)) {
  if (var_1_32 != var_1_37) {
   var_1_40 = (((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < 0 ) ? -((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) : ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))));
  } else {
   var_1_40 = ((((var_1_41) > (var_1_37)) ? (var_1_41) : (var_1_37)));
  }
 }
 if (var_1_40 <= (var_1_39 % var_1_37)) {
  var_1_42 = (var_1_38 + var_1_39);
 }
 if (var_1_40 < -10000000) {
  if (var_1_30 >= var_1_33) {
   var_1_43 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
  }
 }
 if ((var_1_40 & var_1_41) > var_1_30) {
  if (var_1_28 && var_1_45) {
   if ((5 % var_1_37) < var_1_46) {
    var_1_44 = 25;
   } else {
    var_1_44 = var_1_37;
   }
  } else {
   var_1_44 = var_1_39;
  }
 } else {
  var_1_44 = var_1_39;
 }
 if (var_1_45) {
  var_1_47 = (((((((((var_1_37) < (-1)) ? (var_1_37) : (-1))) - var_1_32)) < (((((var_1_39) > (var_1_33)) ? (var_1_39) : (var_1_33))))) ? ((((((var_1_37) < (-1)) ? (var_1_37) : (-1))) - var_1_32)) : (((((var_1_39) > (var_1_33)) ? (var_1_39) : (var_1_33))))));
 } else {
  var_1_47 = ((((((((var_1_32) > (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? (var_1_32) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))))) > ((var_1_44 - var_1_37))) ? (((((var_1_32) > (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? (var_1_32) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))))) : ((var_1_44 - var_1_37))));
 }
 if (var_1_45) {
  if (var_1_41 > (var_1_47 | var_1_43)) {
   if (var_1_33 < -10) {
    var_1_48 = ((((var_1_37) < ((((((((200) < (var_1_38)) ? (200) : (var_1_38))) < 0 ) ? -((((200) < (var_1_38)) ? (200) : (var_1_38))) : ((((200) < (var_1_38)) ? (200) : (var_1_38))))))) ? (var_1_37) : ((((((((200) < (var_1_38)) ? (200) : (var_1_38))) < 0 ) ? -((((200) < (var_1_38)) ? (200) : (var_1_38))) : ((((200) < (var_1_38)) ? (200) : (var_1_38))))))));
   }
  }
 }
 if (var_1_30 > var_1_32) {
  if (var_1_45) {
   if (((var_1_33 + var_1_29) + var_1_47) <= ((var_1_43 / var_1_37) << var_1_39)) {
    var_1_49 = ((((var_1_32) < (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) ? (var_1_32) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))));
   }
  }
 }
 if (var_1_32 <= (- var_1_46)) {
  if (var_1_28) {
   if (var_1_38 < var_1_42) {
    var_1_50 = (((((var_1_32) > (var_1_38)) ? (var_1_32) : (var_1_38))) + 128);
   }
  }
 }
 if (var_1_35 <= var_1_27) {
  if (var_1_45) {
   var_1_51 = ((((var_1_30) > ((var_1_50 - var_1_48))) ? (var_1_30) : ((var_1_50 - var_1_48))));
  }
 }
 if (((var_1_32 + var_1_49) * (var_1_39 + var_1_44)) < var_1_46) {
  var_1_52 = (var_1_45 && (! var_1_53));
 } else {
  var_1_52 = (((~ var_1_37) < var_1_47) && (var_1_54 || (! var_1_55)));
 }
 if ((((((((var_1_44) > (var_1_38)) ? (var_1_44) : (var_1_38))) < 0 ) ? -((((var_1_44) > (var_1_38)) ? (var_1_44) : (var_1_38))) : ((((var_1_44) > (var_1_38)) ? (var_1_44) : (var_1_38))))) < var_1_30) {
  var_1_56 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 } else {
  var_1_56 = ((var_1_57 + var_1_58) + ((((256.6f - var_1_59) < 0 ) ? -(256.6f - var_1_59) : (256.6f - var_1_59))));
 }
 if (var_1_36 >= var_1_44) {
  if (var_1_59 < var_1_35) {
   var_1_60 = (((((((24.6) < 0 ) ? -(24.6) : (24.6))) < 0 ) ? -((((24.6) < 0 ) ? -(24.6) : (24.6))) : ((((24.6) < 0 ) ? -(24.6) : (24.6)))));
  } else {
   var_1_60 = ((((var_1_58) < (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))) ? (var_1_58) : (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))));
  }
 } else {
  if (var_1_40 < var_1_33) {
   var_1_60 = (var_1_59 + var_1_58);
  }
 }
 if ((var_1_49 & var_1_43) >= 0) {
  var_1_61 = (var_1_50 - ((((var_1_32) > (var_1_39)) ? (var_1_32) : (var_1_39))));
 }
 if (var_1_49 <= (var_1_38 - var_1_44)) {
  var_1_62 = ((((var_1_44) < (var_1_37)) ? (var_1_44) : (var_1_37)));
 }
 var_1_63 = var_1_31;
 if (var_1_57 < var_1_58) {
  if (var_1_40 == (var_1_32 ^ var_1_47)) {
   var_1_64 = var_1_59;
  }
 } else {
  if (! (var_1_41 < var_1_61)) {
   if (var_1_28) {
    var_1_64 = var_1_58;
   }
  }
 }
 if (((- var_1_48) + var_1_33) <= ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) {
  var_1_65 = var_1_38;
 } else {
  if (var_1_55) {
   var_1_65 = var_1_36;
  } else {
   if (var_1_28) {
    var_1_65 = (((((var_1_38) < (var_1_37)) ? (var_1_38) : (var_1_37))) - ((((var_1_32) < (var_1_39)) ? (var_1_32) : (var_1_39))));
   } else {
    var_1_65 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
   }
  }
 }
 if (63.5 < var_1_67) {
  var_1_66 = (var_1_53 && (var_1_54 || (var_1_55 && var_1_68)));
 }
 var_1_69 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
 if (var_1_54) {
  var_1_70 = ((var_1_37 - (var_1_71 + var_1_72)) + var_1_73);
 } else {
  if (var_1_32 != var_1_42) {
   if (var_1_52) {
    var_1_70 = var_1_73;
   } else {
    var_1_70 = ((((var_1_74 - var_1_71) < 0 ) ? -(var_1_74 - var_1_71) : (var_1_74 - var_1_71)));
   }
  } else {
   var_1_70 = ((((var_1_39) > (var_1_73)) ? (var_1_39) : (var_1_73)));
  }
 }
 if (var_1_70 < var_1_44) {
  if ((var_1_47 + var_1_65) > ((((var_1_76) > (var_1_71)) ? (var_1_76) : (var_1_71)))) {
   var_1_75 = var_1_39;
  }
 } else {
  var_1_75 = (var_1_74 - var_1_32);
 }
 var_1_77 = (((((var_1_78 - var_1_37)) < (var_1_44)) ? ((var_1_78 - var_1_37)) : (var_1_44)));
 if ((5 - ((((var_1_71) > (var_1_38)) ? (var_1_71) : (var_1_38)))) >= var_1_33) {
  var_1_79 = (var_1_59 - var_1_80);
 }
 if (var_1_45) {
  if (var_1_55) {
   if (var_1_73 <= (var_1_37 * var_1_62)) {
    var_1_81 = ((((0) > ((var_1_39 + var_1_71))) ? (0) : ((var_1_39 + var_1_71))));
   } else {
    var_1_81 = ((200 - var_1_39) - var_1_37);
   }
  }
 }
 var_1_82 = var_1_72;
 var_1_83 = 1.375;
 if (var_1_45) {
  var_1_84 = var_1_71;
 }
 var_1_85 = var_1_58;
 var_1_86 = 5;
 var_1_87 = var_1_38;
 var_1_88 = var_1_39;
 if (var_1_55) {
  var_1_89 = var_1_37;
 }
 if (var_1_45) {
  if (var_1_55) {
   var_1_90 = var_1_57;
  } else {
   var_1_90 = ((((9.99999999999995E13f) < 0 ) ? -(9.99999999999995E13f) : (9.99999999999995E13f)));
  }
 } else {
  var_1_90 = ((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)));
 }
 var_1_91 = var_1_80;
 var_1_92 = var_1_71;
 if ((((((last_1_var_1_19 / 2)) > ((~ last_1_var_1_16))) ? ((last_1_var_1_19 / 2)) : ((~ last_1_var_1_16)))) <= var_1_10) {
  var_1_12 = var_1_8;
 }
 if (var_1_12 > ((var_1_3 - var_1_4) / ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) {
  if (var_1_7) {
   var_1_1 = var_1_8;
  } else {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = var_1_8;
 }
 if (var_1_3 >= (last_1_var_1_12 * var_1_4)) {
  var_1_16 = var_1_18;
 }
 var_1_22 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 if (var_1_1 > var_1_5) {
  var_1_23 = (((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) < 0 ) ? -((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) : ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))));
 } else {
  var_1_23 = var_1_24;
 }
 var_1_26 = var_1_25;
 signed long int stepLocal_0 = var_1_26 >> var_1_10;
 if (stepLocal_0 < last_1_var_1_13) {
  var_1_13 = ((((var_1_26) < (var_1_22)) ? (var_1_26) : (var_1_22)));
 }
 if (var_1_1 < (var_1_4 - var_1_3)) {
  var_1_9 = (var_1_10 - var_1_16);
 }
 if (var_1_7 && var_1_20) {
  var_1_19 = ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16)));
 } else {
  if (2u >= ((((var_1_21) > (var_1_9)) ? (var_1_21) : (var_1_9)))) {
   var_1_19 = var_1_22;
  } else {
   var_1_19 = var_1_22;
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 assume_abort_if_not(var_1_5 != 0.0F);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 2147483647);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483646);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -126);
 assume_abort_if_not(var_1_24 <= 126);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -126);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32768);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32768);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -1);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 63);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= -2147483647);
 assume_abort_if_not(var_1_41 <= 2147483646);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_46 >= -2147483648);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= -230584.3009213691390e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -230584.3009213691390e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691390e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= -922337.2036854776000e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_68 >= 0);
 assume_abort_if_not(var_1_68 <= 0);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 32);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 31);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 127);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 127);
 assume_abort_if_not(var_1_74 <= 254);
 var_1_76 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_76 >= -2147483648);
 assume_abort_if_not(var_1_76 <= 2147483647);
 var_1_78 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_78 >= 32767);
 assume_abort_if_not(var_1_78 <= 65534);
 var_1_80 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_19 = var_1_19;
}
int property() {
 return (((((((((var_1_12 > ((var_1_3 - var_1_4) / ((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (var_1_7 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_8))) && ((var_1_1 < (var_1_4 - var_1_3)) ? (var_1_9 == ((unsigned long int) (var_1_10 - var_1_16))) : 1)) && (((((((last_1_var_1_19 / 2)) > ((~ last_1_var_1_16))) ? ((last_1_var_1_19 / 2)) : ((~ last_1_var_1_16)))) <= var_1_10) ? (var_1_12 == ((float) var_1_8)) : 1)) && (((var_1_26 >> var_1_10) < last_1_var_1_13) ? (var_1_13 == ((signed long int) ((((var_1_26) < (var_1_22)) ? (var_1_26) : (var_1_22))))) : 1)) && ((var_1_3 >= (last_1_var_1_12 * var_1_4)) ? (var_1_16 == ((unsigned char) var_1_18)) : 1)) && ((var_1_7 && var_1_20) ? (var_1_19 == ((signed long int) ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16))))) : ((2u >= ((((var_1_21) > (var_1_9)) ? (var_1_21) : (var_1_9)))) ? (var_1_19 == ((signed long int) var_1_22)) : (var_1_19 == ((signed long int) var_1_22))))) && (var_1_22 == ((unsigned char) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) && ((var_1_1 > var_1_5) ? (var_1_23 == ((signed char) (((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) < 0 ) ? -((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) : ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))))) : (var_1_23 == ((signed char) var_1_24)))) && (var_1_26 == ((signed long int) var_1_25))
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
