// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_6 = 16;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 100;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed char var_1_15 = -25;
signed char var_1_17 = 25;
signed char var_1_18 = -8;
signed char var_1_19 = 4;
signed char var_1_20 = -16;
signed short int var_1_21 = 64;
signed short int var_1_22 = 10000;
float var_1_23 = 9999999.6;
float var_1_24 = 128.7;
float var_1_25 = 15.5;
float var_1_26 = 10.65;
signed long int var_1_27 = 10;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 128;
unsigned long int var_1_31 = 4;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned long int var_1_36 = 4;
signed char var_1_37 = -64;
unsigned short int var_1_38 = 50;
unsigned long int var_1_39 = 0;
unsigned long int var_1_40 = 0;
unsigned short int var_1_41 = 61552;
unsigned short int var_1_43 = 31529;
unsigned short int var_1_44 = 10000;
double var_1_45 = 64.75;
double var_1_46 = 0.0;
double var_1_47 = 0.0;
double var_1_48 = 10.6;
float var_1_49 = 999999999.5;
float var_1_50 = 0.0;
unsigned char var_1_51 = 50;
signed char var_1_53 = -10;
signed char var_1_55 = 8;
signed char var_1_56 = 0;
signed char var_1_57 = 32;
signed char var_1_58 = 64;
double var_1_59 = 255.6;
signed long int var_1_60 = -10;
signed long int var_1_61 = 1374798444;
signed long int var_1_62 = 1000000000;
signed long int var_1_63 = -50;
signed long int var_1_64 = 2;
signed long int var_1_65 = 2001124658;
unsigned short int var_1_66 = 25;
unsigned short int var_1_67 = 1000;
unsigned short int var_1_68 = 32;
unsigned char var_1_69 = 1;
double var_1_70 = 7.4;
double var_1_71 = 4.5;
double var_1_72 = 99999999999999.12;
unsigned short int var_1_74 = 10;
unsigned long int var_1_75 = 10;
unsigned char var_1_76 = 0;
signed short int var_1_77 = 1000;
signed short int var_1_78 = 23998;
signed short int var_1_79 = 32343;
unsigned long int var_1_80 = 5;
double var_1_81 = 49.8;
double var_1_82 = 0.0;
double var_1_83 = 1.8;
signed char var_1_84 = 64;
unsigned char var_1_85 = 25;
unsigned char var_1_86 = 32;
double var_1_87 = 127.19;
unsigned char var_1_88 = 50;
unsigned char var_1_89 = 16;
unsigned short int var_1_90 = 10;
signed long int var_1_91 = 1;
double var_1_93 = 4.5;
unsigned char var_1_94 = 0;
signed long int var_1_95 = 16;
signed short int var_1_96 = 2;
unsigned char var_1_97 = 2;
double var_1_98 = 32.8;
unsigned short int var_1_99 = 1;
unsigned char var_1_100 = 8;
signed short int var_1_101 = 1;
unsigned char var_1_102 = 10;
signed short int var_1_103 = 32;
unsigned char var_1_104 = 16;
signed long int var_1_105 = 5;
signed short int var_1_106 = 1;
double var_1_107 = 100000000000.7;
float var_1_108 = 0.5;
unsigned long int var_1_109 = 10000;
unsigned char last_1_var_1_11 = 0;
signed short int last_1_var_1_21 = 64;
unsigned long int last_1_var_1_31 = 4;
unsigned short int last_1_var_1_38 = 50;
signed long int last_1_var_1_60 = -10;
signed long int last_1_var_1_63 = -50;
unsigned short int last_1_var_1_74 = 10;
unsigned long int last_1_var_1_75 = 10;
signed short int last_1_var_1_77 = 1000;
unsigned long int last_1_var_1_80 = 5;
double last_1_var_1_87 = 127.19;
unsigned short int last_1_var_1_90 = 10;
signed long int last_1_var_1_95 = 16;
unsigned char last_1_var_1_97 = 2;
signed short int last_1_var_1_101 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_12 / var_1_4) <= (var_1_9 % var_1_22)) {
  if (last_1_var_1_11 || (last_1_var_1_87 >= var_1_25)) {
   if ((var_1_8 << (var_1_39 - var_1_40)) != last_1_var_1_95) {
    var_1_38 = ((((((((1) > (var_1_22)) ? (1) : (var_1_22)))) < (var_1_6)) ? (((((1) > (var_1_22)) ? (1) : (var_1_22)))) : (var_1_6)));
   } else {
    var_1_38 = (((((var_1_41 - var_1_40)) < (var_1_22)) ? ((var_1_41 - var_1_40)) : (var_1_22)));
   }
  }
 } else {
  if (((last_1_var_1_80 * var_1_9) | var_1_10) == last_1_var_1_75) {
   if (! (var_1_8 <= 5)) {
    var_1_38 = (((((var_1_41 - ((((var_1_12) < (last_1_var_1_95)) ? (var_1_12) : (last_1_var_1_95))))) > (var_1_6)) ? ((var_1_41 - ((((var_1_12) < (last_1_var_1_95)) ? (var_1_12) : (last_1_var_1_95))))) : (var_1_6)));
   } else {
    var_1_38 = (((((((((var_1_22 + var_1_7)) > (var_1_10)) ? ((var_1_22 + var_1_7)) : (var_1_10)))) < (256)) ? ((((((var_1_22 + var_1_7)) > (var_1_10)) ? ((var_1_22 + var_1_7)) : (var_1_10)))) : (256)));
   }
  } else {
   if (last_1_var_1_74 >= (var_1_41 - last_1_var_1_95)) {
    var_1_38 = (((var_1_43 - last_1_var_1_38) + (10000 + var_1_44)) - last_1_var_1_77);
   }
  }
 }
 if ((var_1_17 != last_1_var_1_80) || var_1_35) {
  if (var_1_13) {
   if (var_1_12 < ((last_1_var_1_95 / var_1_4) * last_1_var_1_63)) {
    var_1_66 = ((((var_1_4) < (var_1_44)) ? (var_1_4) : (var_1_44)));
   }
  } else {
   var_1_66 = ((var_1_43 - var_1_67) + last_1_var_1_97);
  }
 }
 var_1_36 = ((((var_1_66) > (16u)) ? (var_1_66) : (16u)));
 if (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) != last_1_var_1_60) {
  if (var_1_44 < (((((var_1_43) < (var_1_61)) ? (var_1_43) : (var_1_61))) * last_1_var_1_90)) {
   var_1_63 = ((((var_1_44) < (((((last_1_var_1_31) > (var_1_62)) ? (last_1_var_1_31) : (var_1_62))))) ? (var_1_44) : (((((last_1_var_1_31) > (var_1_62)) ? (last_1_var_1_31) : (var_1_62))))));
  }
 } else {
  if (last_1_var_1_60 == (- var_1_22)) {
   var_1_63 = (var_1_64 - (((((var_1_61) < (var_1_65)) ? (var_1_61) : (var_1_65))) - (var_1_12 + var_1_44)));
  } else {
   var_1_63 = ((((var_1_65) > (var_1_9)) ? (var_1_65) : (var_1_9)));
  }
 }
 unsigned char stepLocal_7 = var_1_13;
 if ((last_1_var_1_77 > var_1_8) || stepLocal_7) {
  var_1_31 = ((((last_1_var_1_97) > (((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22))))) ? (last_1_var_1_97) : (((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22))))));
 } else {
  var_1_31 = ((((((((last_1_var_1_97) < (var_1_30)) ? (last_1_var_1_97) : (var_1_30)))) < (last_1_var_1_75)) ? (((((last_1_var_1_97) < (var_1_30)) ? (last_1_var_1_97) : (var_1_30)))) : (last_1_var_1_75)));
 }
 signed long int stepLocal_26 = var_1_57 - (var_1_65 - var_1_58);
 signed long int stepLocal_25 = ((((var_1_61 * var_1_6)) < ((~ var_1_7))) ? ((var_1_61 * var_1_6)) : ((~ var_1_7)));
 if (var_1_36 > stepLocal_26) {
  if (stepLocal_25 != (16 / ((((var_1_43) < (var_1_30)) ? (var_1_43) : (var_1_30))))) {
   var_1_77 = (-128 + var_1_40);
  }
 } else {
  var_1_77 = ((((((var_1_78) > (var_1_79)) ? (var_1_78) : (var_1_79))) - ((((var_1_58) < (var_1_40)) ? (var_1_58) : (var_1_40)))) - var_1_9);
 }
 unsigned char stepLocal_0 = var_1_6;
 if (stepLocal_0 < (((((var_1_12 - var_1_8)) < (var_1_4)) ? ((var_1_12 - var_1_8)) : (var_1_4)))) {
  var_1_11 = (! (var_1_13 || var_1_14));
 }
 var_1_23 = (var_1_24 - (var_1_25 + var_1_26));
 var_1_59 = ((((var_1_24) > (-0.4)) ? (var_1_24) : (-0.4)));
 if (var_1_14) {
  var_1_80 = ((var_1_65 - var_1_58) + var_1_6);
 }
 unsigned char stepLocal_34 = var_1_13;
 if (stepLocal_34 || var_1_35) {
  var_1_85 = (var_1_30 - (((((var_1_55) < (var_1_39)) ? (var_1_55) : (var_1_39))) + var_1_86));
 }
 var_1_90 = var_1_89;
 if (var_1_11) {
  var_1_93 = var_1_25;
 }
 var_1_94 = var_1_34;
 var_1_96 = var_1_10;
 var_1_97 = var_1_10;
 if (var_1_11) {
  var_1_98 = var_1_50;
 } else {
  var_1_98 = 63.375;
 }
 if (var_1_34) {
  var_1_99 = var_1_41;
 } else {
  var_1_99 = var_1_38;
 }
 if (var_1_33) {
  var_1_100 = var_1_40;
 }
 if (var_1_11) {
  var_1_101 = var_1_78;
 } else {
  var_1_101 = last_1_var_1_101;
 }
 var_1_102 = var_1_89;
 var_1_103 = var_1_67;
 if (! var_1_13) {
  var_1_105 = var_1_65;
 }
 var_1_108 = 24.375f;
 var_1_109 = var_1_105;
 unsigned long int stepLocal_20 = var_1_109;
 if ((var_1_36 * (256 << var_1_4)) >= stepLocal_20) {
  var_1_68 = (var_1_67 + var_1_6);
 } else {
  var_1_68 = ((var_1_30 + var_1_6) + ((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8))));
 }
 unsigned short int stepLocal_37 = var_1_66;
 unsigned short int stepLocal_36 = var_1_68;
 if (var_1_22 > stepLocal_36) {
  if ((var_1_36 / var_1_4) > stepLocal_37) {
   var_1_107 = ((((((var_1_50 - 127.25) - ((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48))))) < (var_1_26)) ? (((var_1_50 - 127.25) - ((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48))))) : (var_1_26)));
  } else {
   var_1_107 = var_1_25;
  }
 }
 var_1_106 = ((((-8) < ((var_1_22 - (var_1_36 + var_1_63)))) ? (-8) : ((var_1_22 - (var_1_36 + var_1_63)))));
 var_1_69 = (var_1_94 && var_1_34);
 signed long int stepLocal_23 = var_1_62 * (- var_1_12);
 if (stepLocal_23 >= var_1_105) {
  var_1_75 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 if (var_1_71 >= var_1_98) {
  if (var_1_13) {
   var_1_88 = ((((var_1_7) < ((((((var_1_40 + 16)) < (var_1_58)) ? ((var_1_40 + 16)) : (var_1_58))))) ? (var_1_7) : ((((((var_1_40 + 16)) < (var_1_58)) ? ((var_1_40 + 16)) : (var_1_58))))));
  } else {
   var_1_88 = var_1_89;
  }
 } else {
  var_1_88 = var_1_30;
 }
 if (var_1_94) {
  var_1_91 = var_1_38;
 }
 if (var_1_69) {
  var_1_104 = var_1_55;
 }
 if ((- (var_1_47 / var_1_46)) <= (var_1_48 * var_1_107)) {
  var_1_74 = var_1_9;
 }
 unsigned char stepLocal_3 = var_1_7;
 if (! ((var_1_8 << var_1_106) > ((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17))))) {
  if (stepLocal_3 >= (var_1_12 - var_1_10)) {
   var_1_21 = ((last_1_var_1_21 + ((((var_1_106) < (var_1_7)) ? (var_1_106) : (var_1_7)))) + (var_1_6 - var_1_10));
  } else {
   var_1_21 = last_1_var_1_21;
  }
 } else {
  var_1_21 = (var_1_7 + ((var_1_22 - var_1_9) - var_1_12));
 }
 if ((var_1_101 & (var_1_100 / var_1_4)) < var_1_75) {
  var_1_1 = ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)));
 } else {
  var_1_1 = (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) + var_1_10);
 }
 if (! ((var_1_80 + var_1_91) >= ((((var_1_9) > (var_1_66)) ? (var_1_9) : (var_1_66))))) {
  var_1_45 = (((((var_1_25) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_25) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) + ((var_1_46 - 16.7) - (var_1_47 - var_1_48)));
 } else {
  var_1_45 = var_1_48;
 }
 unsigned long int stepLocal_13 = (((((((var_1_7) > (var_1_74)) ? (var_1_7) : (var_1_74)))) > ((var_1_36 + var_1_109))) ? (((((var_1_7) > (var_1_74)) ? (var_1_7) : (var_1_74)))) : ((var_1_36 + var_1_109)));
 if (stepLocal_13 > (var_1_43 * var_1_17)) {
  var_1_51 = var_1_9;
 } else {
  var_1_51 = (var_1_30 - (var_1_40 + var_1_39));
 }
 unsigned char stepLocal_24 = var_1_1;
 if (var_1_14) {
  if (((var_1_55 & var_1_75) * (var_1_31 * var_1_21)) > stepLocal_24) {
   var_1_76 = (! var_1_35);
  } else {
   var_1_76 = (((~ var_1_57) < var_1_40) || var_1_35);
  }
 }
 signed long int stepLocal_6 = var_1_91;
 if ((var_1_4 % ((((var_1_12) < (var_1_22)) ? (var_1_12) : (var_1_22)))) <= stepLocal_6) {
  if (var_1_14) {
   var_1_29 = ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)));
  } else {
   var_1_29 = ((((var_1_10) < ((var_1_30 - var_1_8))) ? (var_1_10) : ((var_1_30 - var_1_8))));
  }
 } else {
  if (var_1_76) {
   var_1_29 = (var_1_30 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))));
  } else {
   var_1_29 = (((((var_1_10) > (var_1_9)) ? (var_1_10) : (var_1_9))) + var_1_8);
  }
 }
 unsigned char stepLocal_10 = var_1_13;
 signed long int stepLocal_9 = (- var_1_4) + var_1_22;
 unsigned char stepLocal_8 = var_1_76;
 if (var_1_14) {
  if ((var_1_10 >= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) && stepLocal_10) {
   var_1_32 = ((var_1_13 || var_1_33) || var_1_34);
  } else {
   if (var_1_13 && stepLocal_8) {
    var_1_32 = (! var_1_35);
   }
  }
 } else {
  if (stepLocal_9 <= 4) {
   var_1_32 = (((var_1_18 + var_1_4) >= var_1_21) || var_1_35);
  }
 }
 unsigned char stepLocal_12 = var_1_51;
 if (stepLocal_12 < (var_1_8 - var_1_10)) {
  if (var_1_14) {
   if (var_1_33) {
    var_1_49 = ((((var_1_24) > (((var_1_50 - var_1_46) - var_1_25))) ? (var_1_24) : (((var_1_50 - var_1_46) - var_1_25))));
   } else {
    var_1_49 = (((((var_1_26) < (((((var_1_46) > (var_1_48)) ? (var_1_46) : (var_1_48))))) ? (var_1_26) : (((((var_1_46) > (var_1_48)) ? (var_1_46) : (var_1_48)))))) + var_1_47);
   }
  } else {
   if (var_1_76) {
    var_1_49 = (var_1_46 + var_1_26);
   } else {
    var_1_49 = (var_1_50 - ((((var_1_47) > (var_1_46)) ? (var_1_47) : (var_1_46))));
   }
  }
 }
 unsigned char stepLocal_29 = var_1_76 || (var_1_31 >= 256u);
 signed short int stepLocal_28 = var_1_103;
 unsigned long int stepLocal_27 = var_1_40;
 if (stepLocal_28 < (- var_1_80)) {
  if ((var_1_55 <= -25) && stepLocal_29) {
   var_1_81 = (var_1_50 - (var_1_82 - var_1_46));
  } else {
   if (var_1_10 <= stepLocal_27) {
    if (var_1_50 < var_1_47) {
     var_1_81 = (var_1_24 - var_1_82);
    } else {
     var_1_81 = ((((var_1_82) > (1.6)) ? (var_1_82) : (1.6)));
    }
   } else {
    var_1_81 = var_1_83;
   }
  }
 } else {
  var_1_81 = 10.4;
 }
 if (var_1_76) {
  var_1_95 = var_1_40;
 } else {
  var_1_95 = var_1_18;
 }
 signed long int stepLocal_19 = ((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))) + var_1_58;
 unsigned long int stepLocal_18 = var_1_31;
 unsigned long int stepLocal_17 = var_1_31 * var_1_40;
 if (stepLocal_18 <= var_1_66) {
  var_1_60 = (((((var_1_43) > (var_1_41)) ? (var_1_43) : (var_1_41))) + var_1_63);
 } else {
  if (var_1_46 < var_1_50) {
   if (var_1_43 <= stepLocal_17) {
    var_1_60 = (var_1_6 - (1568781160 - var_1_95));
   } else {
    if (var_1_33) {
     var_1_60 = var_1_56;
    }
   }
  } else {
   if (stepLocal_19 >= var_1_56) {
    var_1_60 = (var_1_8 - (var_1_61 - (var_1_62 - var_1_4)));
   }
  }
 }
 unsigned char stepLocal_2 = ! var_1_32;
 unsigned char stepLocal_1 = var_1_6;
 if (var_1_8 >= stepLocal_1) {
  if (stepLocal_2 && (var_1_12 < (var_1_6 * var_1_7))) {
   var_1_15 = (var_1_17 + ((((var_1_18) < (((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))))) ? (var_1_18) : (((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20)))))));
  }
 }
 signed long int stepLocal_5 = var_1_7 / ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 signed short int stepLocal_4 = var_1_22;
 if ((~ var_1_103) != stepLocal_5) {
  if (var_1_11) {
   if (stepLocal_4 >= (var_1_36 + var_1_66)) {
    var_1_27 = (((((((((var_1_66) < (var_1_31)) ? (var_1_66) : (var_1_31))) + var_1_7)) < ((var_1_22 - var_1_95))) ? ((((((var_1_66) < (var_1_31)) ? (var_1_66) : (var_1_31))) + var_1_7)) : ((var_1_22 - var_1_95))));
   } else {
    var_1_27 = (((((((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103)))) > ((var_1_6 + var_1_95))) ? (((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103)))) : ((var_1_6 + var_1_95)))) - (var_1_10 + var_1_8));
   }
  } else {
   if (var_1_14) {
    var_1_27 = 8;
   }
  }
 } else {
  var_1_27 = var_1_22;
 }
 signed long int stepLocal_11 = (var_1_6 + var_1_95) - var_1_30;
 if (stepLocal_11 == var_1_22) {
  if ((var_1_108 * var_1_24) >= (var_1_25 + var_1_26)) {
   var_1_37 = (var_1_19 + var_1_17);
  }
 } else {
  var_1_37 = var_1_17;
 }
 unsigned char stepLocal_16 = var_1_4;
 signed long int stepLocal_15 = ~ (10 + var_1_104);
 unsigned long int stepLocal_14 = var_1_75;
 if (! (var_1_75 >= var_1_99)) {
  if (! var_1_34) {
   if (stepLocal_14 <= (var_1_21 | var_1_44)) {
    var_1_53 = (var_1_39 - var_1_40);
   } else {
    var_1_53 = ((((var_1_18) > (5)) ? (var_1_18) : (5)));
   }
  } else {
   var_1_53 = var_1_39;
  }
 } else {
  if (stepLocal_16 < var_1_40) {
   var_1_53 = (var_1_57 - ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))));
  } else {
   if (var_1_95 > stepLocal_15) {
    var_1_53 = var_1_18;
   } else {
    var_1_53 = ((var_1_58 - var_1_40) - ((((var_1_57 - 8) < 0 ) ? -(var_1_57 - 8) : (var_1_57 - 8))));
   }
  }
 }
 signed long int stepLocal_22 = ((((~ var_1_29)) < (var_1_62)) ? ((~ var_1_29)) : (var_1_62));
 unsigned short int stepLocal_21 = var_1_41;
 if (var_1_12 > stepLocal_21) {
  if (! (var_1_26 >= var_1_48)) {
   var_1_70 = var_1_24;
  }
 } else {
  if (var_1_13) {
   var_1_70 = (((var_1_47 - var_1_48) - var_1_25) + (((((var_1_71 + var_1_72)) < (var_1_26)) ? ((var_1_71 + var_1_72)) : (var_1_26))));
  } else {
   if (stepLocal_22 != ((((var_1_60) > (var_1_95)) ? (var_1_60) : (var_1_95)))) {
    var_1_70 = ((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25)));
   } else {
    var_1_70 = ((((var_1_46) < (((((var_1_71) < ((var_1_25 - var_1_48))) ? (var_1_71) : ((var_1_25 - var_1_48)))))) ? (var_1_46) : (((((var_1_71) < ((var_1_25 - var_1_48))) ? (var_1_71) : ((var_1_25 - var_1_48)))))));
   }
  }
 }
 unsigned long int stepLocal_33 = var_1_36;
 signed char stepLocal_32 = var_1_37;
 signed long int stepLocal_31 = (5 << var_1_91) ^ var_1_95;
 signed long int stepLocal_30 = ~ var_1_65;
 if (stepLocal_32 == var_1_95) {
  if (var_1_109 < stepLocal_30) {
   if (stepLocal_31 > (var_1_109 % var_1_65)) {
    var_1_84 = ((((((((var_1_55) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_55) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) > (var_1_17)) ? (((((var_1_55) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_55) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) : (var_1_17)));
   } else {
    if ((~ var_1_36) > stepLocal_33) {
     var_1_84 = var_1_58;
    } else {
     var_1_84 = ((((((((var_1_55) < (var_1_58)) ? (var_1_55) : (var_1_58)))) > (var_1_19)) ? (((((var_1_55) < (var_1_58)) ? (var_1_55) : (var_1_58)))) : (var_1_19)));
    }
   }
  }
 }
 signed long int stepLocal_35 = var_1_60;
 if ((((((var_1_24) > (var_1_47)) ? (var_1_24) : (var_1_47))) * (- var_1_25)) >= var_1_98) {
  var_1_87 = (var_1_48 + ((((64.2) > ((var_1_47 - var_1_25))) ? (64.2) : ((var_1_47 - var_1_25)))));
 } else {
  if ((- var_1_75) <= stepLocal_35) {
   var_1_87 = ((((var_1_83) < (var_1_72)) ? (var_1_83) : (var_1_72)));
  } else {
   var_1_87 = (var_1_25 + (var_1_26 - var_1_47));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
 assume_abort_if_not(var_1_12 <= 255);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 8191);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 127);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 32767);
 assume_abort_if_not(var_1_41 <= 65534);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 24575);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 8192);
 assume_abort_if_not(var_1_44 <= 16383);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 2305843.009213691400e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 2305843.009213691400e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 4611686.018427383000e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 63);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -31);
 assume_abort_if_not(var_1_56 <= 31);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 126);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 62);
 assume_abort_if_not(var_1_58 <= 126);
 var_1_61 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_61 >= 1073741823);
 assume_abort_if_not(var_1_61 <= 2147483646);
 var_1_62 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_62 >= 536870911);
 assume_abort_if_not(var_1_62 <= 1073741823);
 var_1_64 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_64 >= -1);
 assume_abort_if_not(var_1_64 <= 2147483646);
 var_1_65 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_65 >= 1073741823);
 assume_abort_if_not(var_1_65 <= 2147483646);
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 16383);
 var_1_71 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_71 >= -230584.3009213691400e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= -230584.3009213691400e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691400e+12F && var_1_72 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_78 >= 16382);
 assume_abort_if_not(var_1_78 <= 32766);
 var_1_79 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_79 >= 16382);
 assume_abort_if_not(var_1_79 <= 32766);
 var_1_82 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_82 >= 6917529.027641074000e+12F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854766000e+12F && var_1_82 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_83 >= -922337.2036854766000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854766000e+12F && var_1_83 >= 1.0e-20F ));
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 63);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_95 = var_1_95;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_101 = var_1_101;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_101 & (var_1_100 / var_1_4)) < var_1_75) ? (var_1_1 == ((unsigned char) ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) : (var_1_1 == ((unsigned char) (((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) + var_1_10)))) && ((var_1_6 < (((((var_1_12 - var_1_8)) < (var_1_4)) ? ((var_1_12 - var_1_8)) : (var_1_4)))) ? (var_1_11 == ((unsigned char) (! (var_1_13 || var_1_14)))) : 1)) && ((var_1_8 >= var_1_6) ? (((! var_1_32) && (var_1_12 < (var_1_6 * var_1_7))) ? (var_1_15 == ((signed char) (var_1_17 + ((((var_1_18) < (((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))))) ? (var_1_18) : (((((var_1_19) > (var_1_20)) ? (var_1_19) : (var_1_20))))))))) : 1) : 1)) && ((! ((var_1_8 << var_1_106) > ((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17))))) ? ((var_1_7 >= (var_1_12 - var_1_10)) ? (var_1_21 == ((signed short int) ((last_1_var_1_21 + ((((var_1_106) < (var_1_7)) ? (var_1_106) : (var_1_7)))) + (var_1_6 - var_1_10)))) : (var_1_21 == ((signed short int) last_1_var_1_21))) : (var_1_21 == ((signed short int) (var_1_7 + ((var_1_22 - var_1_9) - var_1_12)))))) && (var_1_23 == ((float) (var_1_24 - (var_1_25 + var_1_26))))) && (((~ var_1_103) != (var_1_7 / ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_11 ? ((var_1_22 >= (var_1_36 + var_1_66)) ? (var_1_27 == ((signed long int) (((((((((var_1_66) < (var_1_31)) ? (var_1_66) : (var_1_31))) + var_1_7)) < ((var_1_22 - var_1_95))) ? ((((((var_1_66) < (var_1_31)) ? (var_1_66) : (var_1_31))) + var_1_7)) : ((var_1_22 - var_1_95)))))) : (var_1_27 == ((signed long int) (((((((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103)))) > ((var_1_6 + var_1_95))) ? (((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103)))) : ((var_1_6 + var_1_95)))) - (var_1_10 + var_1_8))))) : (var_1_14 ? (var_1_27 == ((signed long int) 8)) : 1)) : (var_1_27 == ((signed long int) var_1_22)))) && (((var_1_4 % ((((var_1_12) < (var_1_22)) ? (var_1_12) : (var_1_22)))) <= var_1_91) ? (var_1_14 ? (var_1_29 == ((unsigned char) ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) : (var_1_29 == ((unsigned char) ((((var_1_10) < ((var_1_30 - var_1_8))) ? (var_1_10) : ((var_1_30 - var_1_8))))))) : (var_1_76 ? (var_1_29 == ((unsigned char) (var_1_30 - ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) : (var_1_29 == ((unsigned char) (((((var_1_10) > (var_1_9)) ? (var_1_10) : (var_1_9))) + var_1_8)))))) && (((last_1_var_1_77 > var_1_8) || var_1_13) ? (var_1_31 == ((unsigned long int) ((((last_1_var_1_97) > (((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22))))) ? (last_1_var_1_97) : (((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22)))))))) : (var_1_31 == ((unsigned long int) ((((((((last_1_var_1_97) < (var_1_30)) ? (last_1_var_1_97) : (var_1_30)))) < (last_1_var_1_75)) ? (((((last_1_var_1_97) < (var_1_30)) ? (last_1_var_1_97) : (var_1_30)))) : (last_1_var_1_75))))))) && (var_1_14 ? (((var_1_10 >= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) && var_1_13) ? (var_1_32 == ((unsigned char) ((var_1_13 || var_1_33) || var_1_34))) : ((var_1_13 && var_1_76) ? (var_1_32 == ((unsigned char) (! var_1_35))) : 1)) : ((((- var_1_4) + var_1_22) <= 4) ? (var_1_32 == ((unsigned char) (((var_1_18 + var_1_4) >= var_1_21) || var_1_35))) : 1))) && (var_1_36 == ((unsigned long int) ((((var_1_66) > (16u)) ? (var_1_66) : (16u)))))) && ((((var_1_6 + var_1_95) - var_1_30) == var_1_22) ? (((var_1_108 * var_1_24) >= (var_1_25 + var_1_26)) ? (var_1_37 == ((signed char) (var_1_19 + var_1_17))) : 1) : (var_1_37 == ((signed char) var_1_17)))) && (((var_1_12 / var_1_4) <= (var_1_9 % var_1_22)) ? ((last_1_var_1_11 || (last_1_var_1_87 >= var_1_25)) ? (((var_1_8 << (var_1_39 - var_1_40)) != last_1_var_1_95) ? (var_1_38 == ((unsigned short int) ((((((((1) > (var_1_22)) ? (1) : (var_1_22)))) < (var_1_6)) ? (((((1) > (var_1_22)) ? (1) : (var_1_22)))) : (var_1_6))))) : (var_1_38 == ((unsigned short int) (((((var_1_41 - var_1_40)) < (var_1_22)) ? ((var_1_41 - var_1_40)) : (var_1_22)))))) : 1) : ((((last_1_var_1_80 * var_1_9) | var_1_10) == last_1_var_1_75) ? ((! (var_1_8 <= 5)) ? (var_1_38 == ((unsigned short int) (((((var_1_41 - ((((var_1_12) < (last_1_var_1_95)) ? (var_1_12) : (last_1_var_1_95))))) > (var_1_6)) ? ((var_1_41 - ((((var_1_12) < (last_1_var_1_95)) ? (var_1_12) : (last_1_var_1_95))))) : (var_1_6))))) : (var_1_38 == ((unsigned short int) (((((((((var_1_22 + var_1_7)) > (var_1_10)) ? ((var_1_22 + var_1_7)) : (var_1_10)))) < (256)) ? ((((((var_1_22 + var_1_7)) > (var_1_10)) ? ((var_1_22 + var_1_7)) : (var_1_10)))) : (256)))))) : ((last_1_var_1_74 >= (var_1_41 - last_1_var_1_95)) ? (var_1_38 == ((unsigned short int) (((var_1_43 - last_1_var_1_38) + (10000 + var_1_44)) - last_1_var_1_77))) : 1)))) && ((! ((var_1_80 + var_1_91) >= ((((var_1_9) > (var_1_66)) ? (var_1_9) : (var_1_66))))) ? (var_1_45 == ((double) (((((var_1_25) > (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_25) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) + ((var_1_46 - 16.7) - (var_1_47 - var_1_48))))) : (var_1_45 == ((double) var_1_48)))) && ((var_1_51 < (var_1_8 - var_1_10)) ? (var_1_14 ? (var_1_33 ? (var_1_49 == ((float) ((((var_1_24) > (((var_1_50 - var_1_46) - var_1_25))) ? (var_1_24) : (((var_1_50 - var_1_46) - var_1_25)))))) : (var_1_49 == ((float) (((((var_1_26) < (((((var_1_46) > (var_1_48)) ? (var_1_46) : (var_1_48))))) ? (var_1_26) : (((((var_1_46) > (var_1_48)) ? (var_1_46) : (var_1_48)))))) + var_1_47)))) : (var_1_76 ? (var_1_49 == ((float) (var_1_46 + var_1_26))) : (var_1_49 == ((float) (var_1_50 - ((((var_1_47) > (var_1_46)) ? (var_1_47) : (var_1_46)))))))) : 1)) && ((((((((((var_1_7) > (var_1_74)) ? (var_1_7) : (var_1_74)))) > ((var_1_36 + var_1_109))) ? (((((var_1_7) > (var_1_74)) ? (var_1_7) : (var_1_74)))) : ((var_1_36 + var_1_109)))) > (var_1_43 * var_1_17)) ? (var_1_51 == ((unsigned char) var_1_9)) : (var_1_51 == ((unsigned char) (var_1_30 - (var_1_40 + var_1_39)))))) && ((! (var_1_75 >= var_1_99)) ? ((! var_1_34) ? ((var_1_75 <= (var_1_21 | var_1_44)) ? (var_1_53 == ((signed char) (var_1_39 - var_1_40))) : (var_1_53 == ((signed char) ((((var_1_18) > (5)) ? (var_1_18) : (5)))))) : (var_1_53 == ((signed char) var_1_39))) : ((var_1_4 < var_1_40) ? (var_1_53 == ((signed char) (var_1_57 - ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)))))) : ((var_1_95 > (~ (10 + var_1_104))) ? (var_1_53 == ((signed char) var_1_18)) : (var_1_53 == ((signed char) ((var_1_58 - var_1_40) - ((((var_1_57 - 8) < 0 ) ? -(var_1_57 - 8) : (var_1_57 - 8)))))))))) && (var_1_59 == ((double) ((((var_1_24) > (-0.4)) ? (var_1_24) : (-0.4)))))) && ((var_1_31 <= var_1_66) ? (var_1_60 == ((signed long int) (((((var_1_43) > (var_1_41)) ? (var_1_43) : (var_1_41))) + var_1_63))) : ((var_1_46 < var_1_50) ? ((var_1_43 <= (var_1_31 * var_1_40)) ? (var_1_60 == ((signed long int) (var_1_6 - (1568781160 - var_1_95)))) : (var_1_33 ? (var_1_60 == ((signed long int) var_1_56)) : 1)) : (((((((var_1_7) < (var_1_6)) ? (var_1_7) : (var_1_6))) + var_1_58) >= var_1_56) ? (var_1_60 == ((signed long int) (var_1_8 - (var_1_61 - (var_1_62 - var_1_4))))) : 1)))) && ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) != last_1_var_1_60) ? ((var_1_44 < (((((var_1_43) < (var_1_61)) ? (var_1_43) : (var_1_61))) * last_1_var_1_90)) ? (var_1_63 == ((signed long int) ((((var_1_44) < (((((last_1_var_1_31) > (var_1_62)) ? (last_1_var_1_31) : (var_1_62))))) ? (var_1_44) : (((((last_1_var_1_31) > (var_1_62)) ? (last_1_var_1_31) : (var_1_62)))))))) : 1) : ((last_1_var_1_60 == (- var_1_22)) ? (var_1_63 == ((signed long int) (var_1_64 - (((((var_1_61) < (var_1_65)) ? (var_1_61) : (var_1_65))) - (var_1_12 + var_1_44))))) : (var_1_63 == ((signed long int) ((((var_1_65) > (var_1_9)) ? (var_1_65) : (var_1_9)))))))) && (((var_1_17 != last_1_var_1_80) || var_1_35) ? (var_1_13 ? ((var_1_12 < ((last_1_var_1_95 / var_1_4) * last_1_var_1_63)) ? (var_1_66 == ((unsigned short int) ((((var_1_4) < (var_1_44)) ? (var_1_4) : (var_1_44))))) : 1) : (var_1_66 == ((unsigned short int) ((var_1_43 - var_1_67) + last_1_var_1_97)))) : 1)) && (((var_1_36 * (256 << var_1_4)) >= var_1_109) ? (var_1_68 == ((unsigned short int) (var_1_67 + var_1_6))) : (var_1_68 == ((unsigned short int) ((var_1_30 + var_1_6) + ((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8)))))))) && (var_1_69 == ((unsigned char) (var_1_94 && var_1_34)))) && ((var_1_12 > var_1_41) ? ((! (var_1_26 >= var_1_48)) ? (var_1_70 == ((double) var_1_24)) : 1) : (var_1_13 ? (var_1_70 == ((double) (((var_1_47 - var_1_48) - var_1_25) + (((((var_1_71 + var_1_72)) < (var_1_26)) ? ((var_1_71 + var_1_72)) : (var_1_26)))))) : (((((((~ var_1_29)) < (var_1_62)) ? ((~ var_1_29)) : (var_1_62))) != ((((var_1_60) > (var_1_95)) ? (var_1_60) : (var_1_95)))) ? (var_1_70 == ((double) ((((var_1_26) < (var_1_25)) ? (var_1_26) : (var_1_25))))) : (var_1_70 == ((double) ((((var_1_46) < (((((var_1_71) < ((var_1_25 - var_1_48))) ? (var_1_71) : ((var_1_25 - var_1_48)))))) ? (var_1_46) : (((((var_1_71) < ((var_1_25 - var_1_48))) ? (var_1_71) : ((var_1_25 - var_1_48))))))))))))) && (((- (var_1_47 / var_1_46)) <= (var_1_48 * var_1_107)) ? (var_1_74 == ((unsigned short int) var_1_9)) : 1)) && (((var_1_62 * (- var_1_12)) >= var_1_105) ? (var_1_75 == ((unsigned long int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : 1)) && (var_1_14 ? ((((var_1_55 & var_1_75) * (var_1_31 * var_1_21)) > var_1_1) ? (var_1_76 == ((unsigned char) (! var_1_35))) : (var_1_76 == ((unsigned char) (((~ var_1_57) < var_1_40) || var_1_35)))) : 1)) && ((var_1_36 > (var_1_57 - (var_1_65 - var_1_58))) ? (((((((var_1_61 * var_1_6)) < ((~ var_1_7))) ? ((var_1_61 * var_1_6)) : ((~ var_1_7)))) != (16 / ((((var_1_43) < (var_1_30)) ? (var_1_43) : (var_1_30))))) ? (var_1_77 == ((signed short int) (-128 + var_1_40))) : 1) : (var_1_77 == ((signed short int) ((((((var_1_78) > (var_1_79)) ? (var_1_78) : (var_1_79))) - ((((var_1_58) < (var_1_40)) ? (var_1_58) : (var_1_40)))) - var_1_9))))) && (var_1_14 ? (var_1_80 == ((unsigned long int) ((var_1_65 - var_1_58) + var_1_6))) : 1)) && ((var_1_103 < (- var_1_80)) ? (((var_1_55 <= -25) && (var_1_76 || (var_1_31 >= 256u))) ? (var_1_81 == ((double) (var_1_50 - (var_1_82 - var_1_46)))) : ((var_1_10 <= var_1_40) ? ((var_1_50 < var_1_47) ? (var_1_81 == ((double) (var_1_24 - var_1_82))) : (var_1_81 == ((double) ((((var_1_82) > (1.6)) ? (var_1_82) : (1.6)))))) : (var_1_81 == ((double) var_1_83)))) : (var_1_81 == ((double) 10.4)))) && ((var_1_37 == var_1_95) ? ((var_1_109 < (~ var_1_65)) ? ((((5 << var_1_91) ^ var_1_95) > (var_1_109 % var_1_65)) ? (var_1_84 == ((signed char) ((((((((var_1_55) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_55) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) > (var_1_17)) ? (((((var_1_55) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_55) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) : (var_1_17))))) : (((~ var_1_36) > var_1_36) ? (var_1_84 == ((signed char) var_1_58)) : (var_1_84 == ((signed char) ((((((((var_1_55) < (var_1_58)) ? (var_1_55) : (var_1_58)))) > (var_1_19)) ? (((((var_1_55) < (var_1_58)) ? (var_1_55) : (var_1_58)))) : (var_1_19))))))) : 1) : 1)) && ((var_1_13 || var_1_35) ? (var_1_85 == ((unsigned char) (var_1_30 - (((((var_1_55) < (var_1_39)) ? (var_1_55) : (var_1_39))) + var_1_86)))) : 1)) && (((((((var_1_24) > (var_1_47)) ? (var_1_24) : (var_1_47))) * (- var_1_25)) >= var_1_98) ? (var_1_87 == ((double) (var_1_48 + ((((64.2) > ((var_1_47 - var_1_25))) ? (64.2) : ((var_1_47 - var_1_25))))))) : (((- var_1_75) <= var_1_60) ? (var_1_87 == ((double) ((((var_1_83) < (var_1_72)) ? (var_1_83) : (var_1_72))))) : (var_1_87 == ((double) (var_1_25 + (var_1_26 - var_1_47))))))) && ((var_1_71 >= var_1_98) ? (var_1_13 ? (var_1_88 == ((unsigned char) ((((var_1_7) < ((((((var_1_40 + 16)) < (var_1_58)) ? ((var_1_40 + 16)) : (var_1_58))))) ? (var_1_7) : ((((((var_1_40 + 16)) < (var_1_58)) ? ((var_1_40 + 16)) : (var_1_58)))))))) : (var_1_88 == ((unsigned char) var_1_89))) : (var_1_88 == ((unsigned char) var_1_30)))) && (var_1_90 == ((unsigned short int) var_1_89))) && (var_1_94 ? (var_1_91 == ((signed long int) var_1_38)) : 1)) && (var_1_11 ? (var_1_93 == ((double) var_1_25)) : 1)) && (var_1_94 == ((unsigned char) var_1_34))) && (var_1_76 ? (var_1_95 == ((signed long int) var_1_40)) : (var_1_95 == ((signed long int) var_1_18)))) && (var_1_96 == ((signed short int) var_1_10))) && (var_1_97 == ((unsigned char) var_1_10))) && (var_1_11 ? (var_1_98 == ((double) var_1_50)) : (var_1_98 == ((double) 63.375)))) && (var_1_34 ? (var_1_99 == ((unsigned short int) var_1_41)) : (var_1_99 == ((unsigned short int) var_1_38)))) && (var_1_33 ? (var_1_100 == ((unsigned char) var_1_40)) : 1)) && (var_1_11 ? (var_1_101 == ((signed short int) var_1_78)) : (var_1_101 == ((signed short int) last_1_var_1_101)))) && (var_1_102 == ((unsigned char) var_1_89))) && (var_1_103 == ((signed short int) var_1_67))) && (var_1_69 ? (var_1_104 == ((unsigned char) var_1_55)) : 1)) && ((! var_1_13) ? (var_1_105 == ((signed long int) var_1_65)) : 1)) && (var_1_106 == ((signed short int) ((((-8) < ((var_1_22 - (var_1_36 + var_1_63)))) ? (-8) : ((var_1_22 - (var_1_36 + var_1_63)))))))) && ((var_1_22 > var_1_68) ? (((var_1_36 / var_1_4) > var_1_66) ? (var_1_107 == ((double) ((((((var_1_50 - 127.25) - ((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48))))) < (var_1_26)) ? (((var_1_50 - 127.25) - ((((var_1_46) < (var_1_48)) ? (var_1_46) : (var_1_48))))) : (var_1_26))))) : (var_1_107 == ((double) var_1_25))) : 1)) && (var_1_108 == ((float) 24.375f))) && (var_1_109 == ((unsigned long int) var_1_105))
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
