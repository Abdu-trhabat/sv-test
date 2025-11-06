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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
unsigned long int var_1_5 = 10;
signed long int var_1_7 = 100;
unsigned char var_1_8 = 4;
signed long int var_1_9 = 2;
float var_1_10 = 5.75;
float var_1_11 = 255.25;
float var_1_12 = 100.8;
float var_1_13 = 99.8;
signed long int var_1_14 = -4;
double var_1_15 = 127.2;
double var_1_16 = 32.5;
double var_1_17 = 1.25;
double var_1_18 = 99999999999999.75;
float var_1_19 = 1000.5;
float var_1_20 = 15.2;
float var_1_21 = 1000000000.4;
float var_1_22 = 5.3;
float var_1_23 = 1.875;
float var_1_24 = 0.0;
signed short int var_1_25 = -256;
signed short int var_1_26 = 128;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 10;
unsigned long int var_1_30 = 2305811790;
unsigned char var_1_31 = 100;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 32;
unsigned char var_1_35 = 50;
unsigned char var_1_36 = 64;
unsigned char var_1_37 = 64;
unsigned char var_1_38 = 32;
unsigned char var_1_39 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
signed char var_1_43 = 25;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
double var_1_46 = 16.5;
float var_1_47 = 255.5;
float var_1_48 = 10.25;
unsigned char var_1_49 = 100;
unsigned char var_1_50 = 100;
float var_1_52 = 8.5;
float var_1_53 = 50.75;
signed short int var_1_54 = -64;
signed short int var_1_55 = -32;
double var_1_56 = 3.8;
unsigned short int var_1_57 = 2;
unsigned short int var_1_58 = 32049;
unsigned long int var_1_59 = 100000;
unsigned long int var_1_60 = 16;
unsigned long int var_1_61 = 1875934672;
unsigned short int var_1_62 = 5;
unsigned short int var_1_63 = 49143;
unsigned short int var_1_64 = 32;
signed short int var_1_65 = -64;
signed long int var_1_66 = 4;
signed long int var_1_67 = 1258106808;
signed long int var_1_68 = 1408897714;
float var_1_69 = 1.25;
signed char var_1_70 = -2;
signed char var_1_71 = 100;
signed long int var_1_72 = 64;
signed long int var_1_73 = 1000000000;
signed short int var_1_74 = 32;
unsigned short int var_1_75 = 100;
signed short int var_1_76 = 0;
unsigned short int var_1_77 = 62831;
signed short int var_1_78 = -1;
signed short int var_1_79 = 10000;
signed short int var_1_80 = 10000;
signed short int var_1_81 = 1;
unsigned long int var_1_82 = 8;
unsigned long int var_1_83 = 3696197020;
signed short int var_1_84 = -50;
unsigned long int var_1_85 = 100;
unsigned long int var_1_86 = 4229531863;
unsigned short int var_1_87 = 4;
float var_1_88 = 64.48;
float var_1_89 = 4.1;
float var_1_91 = 4.5;
float var_1_92 = 1.2;
float var_1_93 = 100000000.91;
signed short int var_1_94 = -100;
signed char var_1_95 = 0;
signed long int var_1_96 = 32;
signed long int var_1_97 = 10;
signed short int var_1_98 = 10;
unsigned char var_1_99 = 10;
double var_1_100 = 100000000.15;
signed short int var_1_101 = -4;
signed char var_1_102 = 16;
float var_1_103 = 8.75;
unsigned char var_1_105 = 0;
double var_1_106 = 2.75;
float var_1_107 = 10.5;
float var_1_108 = 0.75;
unsigned char var_1_109 = 8;
unsigned char last_1_var_1_29 = 10;
unsigned char last_1_var_1_39 = 0;
unsigned char last_1_var_1_44 = 0;
double last_1_var_1_56 = 3.8;
unsigned short int last_1_var_1_62 = 5;
signed long int last_1_var_1_66 = 4;
signed long int last_1_var_1_72 = 64;
unsigned short int last_1_var_1_75 = 100;
signed short int last_1_var_1_78 = -1;
unsigned short int last_1_var_1_87 = 4;
float last_1_var_1_89 = 4.1;
signed short int last_1_var_1_94 = -100;
double last_1_var_1_106 = 2.75;
float last_1_var_1_107 = 10.5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_17 = var_1_41;
 unsigned char stepLocal_16 = last_1_var_1_39;
 signed long int stepLocal_15 = last_1_var_1_72;
 signed long int stepLocal_14 = var_1_68;
 if (((var_1_48 * var_1_18) < last_1_var_1_106) || stepLocal_17) {
  if (stepLocal_14 < 16) {
   if (var_1_5 < stepLocal_15) {
    var_1_74 = (var_1_71 + ((((var_1_35) > (last_1_var_1_29)) ? (var_1_35) : (last_1_var_1_29))));
   } else {
    if (var_1_42 && stepLocal_16) {
     var_1_74 = ((var_1_35 - 64) + (var_1_32 - var_1_37));
    }
   }
  } else {
   var_1_74 = (((((var_1_33) > (((((var_1_35) < (var_1_8)) ? (var_1_35) : (var_1_8))))) ? (var_1_33) : (((((var_1_35) < (var_1_8)) ? (var_1_35) : (var_1_8)))))) - var_1_34);
  }
 } else {
  var_1_74 = last_1_var_1_87;
 }
 if ((var_1_36 < var_1_26) || (last_1_var_1_107 <= var_1_23)) {
  if (last_1_var_1_39) {
   var_1_45 = ((last_1_var_1_44 && (var_1_21 < var_1_22)) || var_1_28);
  } else {
   if ((var_1_20 + 32.75f) <= var_1_17) {
    var_1_45 = var_1_28;
   }
  }
 } else {
  var_1_45 = ((var_1_12 <= var_1_11) && var_1_41);
 }
 if (var_1_45) {
  var_1_106 = var_1_20;
 } else {
  var_1_106 = var_1_21;
 }
 if (((((last_1_var_1_56) > (last_1_var_1_89)) ? (last_1_var_1_56) : (last_1_var_1_89))) > 1.000000000002E11f) {
  var_1_39 = 0;
 } else {
  var_1_39 = (var_1_41 || var_1_42);
 }
 var_1_14 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 if (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) > var_1_18) {
  var_1_19 = ((var_1_20 + (var_1_21 - var_1_22)) + var_1_13);
 } else {
  if ((var_1_11 / var_1_23) <= (- var_1_17)) {
   var_1_19 = (var_1_21 + (((((var_1_22) < (1000.8f)) ? (var_1_22) : (1000.8f))) + var_1_20));
  } else {
   var_1_19 = ((500.65f + (var_1_24 - var_1_22)) - var_1_18);
  }
 }
 if (var_1_8 <= var_1_38) {
  var_1_43 = ((((var_1_32) < (((((var_1_35) > (var_1_37)) ? (var_1_35) : (var_1_37))))) ? (var_1_32) : (((((var_1_35) > (var_1_37)) ? (var_1_35) : (var_1_37))))));
 } else {
  if (4u < (- var_1_37)) {
   var_1_43 = (((((((var_1_38) > (var_1_32)) ? (var_1_38) : (var_1_32))) < 0 ) ? -((((var_1_38) > (var_1_32)) ? (var_1_38) : (var_1_32))) : ((((var_1_38) > (var_1_32)) ? (var_1_38) : (var_1_32)))));
  }
 }
 var_1_52 = var_1_53;
 if (var_1_39) {
  var_1_64 = var_1_36;
 }
 if (var_1_45) {
  var_1_69 = var_1_20;
 } else {
  var_1_69 = (((((var_1_48 - var_1_22) < 0 ) ? -(var_1_48 - var_1_22) : (var_1_48 - var_1_22))) + (var_1_21 + var_1_20));
 }
 var_1_87 = (var_1_36 + var_1_76);
 signed long int stepLocal_25 = var_1_34 / ((((var_1_35) < (var_1_38)) ? (var_1_35) : (var_1_38)));
 if (stepLocal_25 < 200) {
  var_1_88 = (((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))));
 }
 unsigned char stepLocal_26 = var_1_14 < var_1_38;
 if (((var_1_87 / var_1_37) > var_1_14) || stepLocal_26) {
  var_1_94 = ((((((var_1_35) > (last_1_var_1_94)) ? (var_1_35) : (last_1_var_1_94))) - var_1_32) + var_1_38);
 }
 var_1_95 = var_1_37;
 var_1_98 = var_1_87;
 var_1_99 = var_1_34;
 var_1_100 = var_1_93;
 if (var_1_45) {
  var_1_102 = var_1_37;
 } else {
  var_1_102 = var_1_34;
 }
 if (var_1_42) {
  var_1_105 = var_1_71;
 } else {
  var_1_105 = var_1_35;
 }
 var_1_107 = var_1_11;
 var_1_108 = var_1_20;
 if (var_1_74 != var_1_95) {
  var_1_1 = var_1_5;
 } else {
  if ((50.6f + 199.5f) >= var_1_88) {
   var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  }
 }
 signed long int stepLocal_3 = ~ var_1_95;
 if (var_1_8 >= stepLocal_3) {
  var_1_15 = (var_1_16 - ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))));
 } else {
  var_1_15 = (var_1_13 + var_1_12);
 }
 var_1_27 = ((var_1_24 < (var_1_20 + var_1_17)) || ((var_1_26 <= var_1_98) || var_1_28));
 if (! var_1_41) {
  var_1_57 = (var_1_50 + (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) - var_1_36));
 } else {
  var_1_57 = ((((var_1_105) < (var_1_31)) ? (var_1_105) : (var_1_31)));
 }
 if (! (var_1_67 <= (var_1_34 - var_1_58))) {
  var_1_70 = (var_1_32 - (((((var_1_71 - var_1_38)) > (var_1_37)) ? ((var_1_71 - var_1_38)) : (var_1_37))));
 } else {
  if (var_1_27) {
   var_1_70 = ((var_1_35 + var_1_32) - (2 + var_1_38));
  }
 }
 if (var_1_39 || (var_1_8 == var_1_55)) {
  var_1_85 = (((((var_1_83) > (var_1_86)) ? (var_1_83) : (var_1_86))) - (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) - (var_1_73 - 32u)));
 } else {
  var_1_85 = (var_1_61 + var_1_105);
 }
 if (var_1_27) {
  var_1_103 = 1.625f;
 } else {
  var_1_103 = var_1_24;
 }
 signed long int stepLocal_0 = 128 - var_1_8;
 if (stepLocal_0 == var_1_85) {
  var_1_7 = ((1176345877 - var_1_8) - var_1_9);
 } else {
  var_1_7 = (var_1_8 - ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))));
 }
 if (5.9f <= var_1_21) {
  if ((- 1) <= ((var_1_50 - var_1_35) / var_1_36)) {
   var_1_54 = ((((((((var_1_37) < (var_1_31)) ? (var_1_37) : (var_1_31)))) > (((((var_1_57) < ((var_1_55 + var_1_38))) ? (var_1_57) : ((var_1_55 + var_1_38)))))) ? (((((var_1_37) < (var_1_31)) ? (var_1_37) : (var_1_31)))) : (((((var_1_57) < ((var_1_55 + var_1_38))) ? (var_1_57) : ((var_1_55 + var_1_38)))))));
  } else {
   var_1_54 = var_1_36;
  }
 } else {
  var_1_54 = ((((var_1_50) < (var_1_57)) ? (var_1_50) : (var_1_57)));
 }
 unsigned long int stepLocal_24 = (((((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))) < (var_1_30)) ? (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))) : (var_1_30));
 signed long int stepLocal_23 = var_1_9;
 if (var_1_54 >= stepLocal_24) {
  if ((var_1_63 - var_1_35) < stepLocal_23) {
   if (! var_1_42) {
    var_1_84 = (var_1_80 - (var_1_79 + (10000 - var_1_38)));
   } else {
    var_1_84 = var_1_38;
   }
  } else {
   var_1_84 = var_1_77;
  }
 }
 if (var_1_34 != var_1_5) {
  var_1_44 = 0;
 } else {
  if ((var_1_32 - ((((var_1_36) > (var_1_38)) ? (var_1_36) : (var_1_38)))) >= (~ ((((var_1_31) > (var_1_84)) ? (var_1_31) : (var_1_84))))) {
   var_1_44 = var_1_28;
  } else {
   var_1_44 = (! var_1_41);
  }
 }
 unsigned char stepLocal_7 = var_1_39;
 if (stepLocal_7 && var_1_44) {
  var_1_56 = (((((var_1_22) < (((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (var_1_22) : (((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))))) + var_1_21);
 }
 if (var_1_44) {
  if (var_1_27) {
   if ((var_1_24 - var_1_48) != var_1_56) {
    var_1_89 = var_1_13;
   }
  } else {
   var_1_89 = (var_1_24 + ((((var_1_91) < (((((var_1_21) > (var_1_12)) ? (var_1_21) : (var_1_12))))) ? (var_1_91) : (((((var_1_21) > (var_1_12)) ? (var_1_21) : (var_1_12)))))));
  }
 } else {
  var_1_89 = ((var_1_20 + (var_1_92 + var_1_93)) + (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))));
 }
 signed long int stepLocal_4 = var_1_14;
 if (stepLocal_4 == (var_1_95 * var_1_9)) {
  if (var_1_44) {
   var_1_25 = ((((var_1_26) < (var_1_8)) ? (var_1_26) : (var_1_8)));
  }
 }
 if (var_1_30 > (((((var_1_34) < (var_1_87)) ? (var_1_34) : (var_1_87))) * (var_1_36 / var_1_38))) {
  if (var_1_13 != var_1_56) {
   if (var_1_24 > (var_1_12 / ((((64.8f) < 0 ) ? -(64.8f) : (64.8f))))) {
    var_1_46 = (((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) < 0 ) ? -((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) : ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))));
   }
  } else {
   var_1_46 = ((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20)));
  }
 } else {
  var_1_46 = ((((var_1_18) < ((var_1_12 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) ? (var_1_18) : ((var_1_12 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))));
 }
 if (! (var_1_25 >= var_1_38)) {
  if (var_1_42 && var_1_44) {
   var_1_47 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
  }
 } else {
  var_1_47 = (var_1_22 + (var_1_21 - (var_1_24 - var_1_48)));
 }
 if (var_1_44) {
  var_1_96 = var_1_97;
 }
 signed long int stepLocal_27 = var_1_8 - var_1_76;
 if ((var_1_57 * var_1_63) <= stepLocal_27) {
  if (var_1_39) {
   if (var_1_46 < var_1_23) {
    var_1_109 = (var_1_33 - var_1_31);
   } else {
    var_1_109 = var_1_32;
   }
  }
 } else {
  var_1_109 = var_1_38;
 }
 signed long int stepLocal_22 = -1 * var_1_8;
 if (stepLocal_22 < var_1_84) {
  if (! var_1_27) {
   var_1_82 = ((var_1_83 - var_1_37) - var_1_68);
  } else {
   var_1_82 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
  }
 } else {
  var_1_82 = (var_1_80 + ((((5u) > (var_1_37)) ? (5u) : (var_1_37))));
 }
 unsigned long int stepLocal_5 = var_1_30 - var_1_9;
 if (var_1_82 > stepLocal_5) {
  var_1_29 = ((var_1_31 - (2 + var_1_32)) + var_1_8);
 } else {
  if (var_1_45) {
   var_1_29 = (((((var_1_33 - (var_1_31 - var_1_32))) > (var_1_8)) ? ((var_1_33 - (var_1_31 - var_1_32))) : (var_1_8)));
  } else {
   var_1_29 = (((var_1_34 + var_1_35) + var_1_36) - ((var_1_37 + var_1_38) - var_1_32));
  }
 }
 signed char stepLocal_13 = var_1_71;
 if (var_1_63 >= stepLocal_13) {
  var_1_72 = var_1_35;
 } else {
  var_1_72 = (((var_1_73 - var_1_36) + ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) - ((((var_1_87) < (var_1_1)) ? (var_1_87) : (var_1_1))));
 }
 unsigned char stepLocal_2 = var_1_109;
 signed long int stepLocal_1 = var_1_9;
 if (stepLocal_2 <= -10) {
  var_1_10 = var_1_11;
 } else {
  if (var_1_1 > stepLocal_1) {
   if (var_1_39) {
    var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
   }
  } else {
   var_1_10 = (var_1_12 + var_1_13);
  }
 }
 signed long int stepLocal_6 = var_1_72;
 if (var_1_22 != (((((var_1_46) < (var_1_108)) ? (var_1_46) : (var_1_108))) + var_1_88)) {
  if (var_1_13 > var_1_23) {
   if (! (! (var_1_108 != var_1_47))) {
    var_1_49 = (((var_1_50 - var_1_32) + var_1_36) - ((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8))));
   } else {
    if ((var_1_26 % var_1_35) > stepLocal_6) {
     var_1_49 = (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - var_1_32);
    }
   }
  }
 }
 if (var_1_41) {
  var_1_65 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 unsigned char stepLocal_12 = var_1_36;
 if (stepLocal_12 < ((((var_1_82) < (((((var_1_33) < (last_1_var_1_66)) ? (var_1_33) : (last_1_var_1_66))))) ? (var_1_82) : (((((var_1_33) < (last_1_var_1_66)) ? (var_1_33) : (last_1_var_1_66))))))) {
  if (var_1_88 < var_1_11) {
   var_1_66 = ((((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) - var_1_7) - var_1_38);
  } else {
   var_1_66 = (((((((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))) > (var_1_68)) ? (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))) : (var_1_68))) - ((((var_1_8) < ((last_1_var_1_66 + var_1_32))) ? (var_1_8) : ((last_1_var_1_66 + var_1_32)))));
  }
 }
 signed long int stepLocal_20 = 32 << (4 + var_1_76);
 unsigned char stepLocal_19 = var_1_29;
 unsigned long int stepLocal_18 = var_1_1;
 if (stepLocal_19 > var_1_82) {
  if (stepLocal_20 > var_1_82) {
   if (var_1_45) {
    var_1_75 = ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) > (var_1_71)) ? (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (var_1_71)));
   }
  } else {
   var_1_75 = var_1_37;
  }
 } else {
  if (stepLocal_18 < (var_1_36 ^ var_1_87)) {
   var_1_75 = (((((var_1_63) < ((var_1_77 - var_1_76))) ? (var_1_63) : ((var_1_77 - var_1_76)))) - ((((last_1_var_1_75) < (var_1_50)) ? (last_1_var_1_75) : (var_1_50))));
  }
 }
 if (var_1_42) {
  var_1_101 = var_1_75;
 }
 unsigned char stepLocal_9 = var_1_45;
 unsigned char stepLocal_8 = var_1_28;
 if ((63.8 > (var_1_69 * var_1_56)) || stepLocal_9) {
  var_1_59 = (((((var_1_8) < (var_1_31)) ? (var_1_8) : (var_1_31))) + ((var_1_60 + 64u) + var_1_36));
 } else {
  if (stepLocal_8 && var_1_41) {
   if ((var_1_107 * var_1_24) >= ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) {
    var_1_59 = ((((var_1_36) > ((var_1_38 + ((((100u) < 0 ) ? -(100u) : (100u)))))) ? (var_1_36) : ((var_1_38 + ((((100u) < 0 ) ? -(100u) : (100u)))))));
   } else {
    var_1_59 = (((var_1_61 - var_1_32) - ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) + var_1_65);
   }
  }
 }
 unsigned long int stepLocal_11 = var_1_1;
 unsigned long int stepLocal_10 = - var_1_85;
 if (var_1_47 < var_1_53) {
  var_1_62 = (((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8))) + ((((var_1_58) < ((var_1_1 + 50))) ? (var_1_58) : ((var_1_1 + 50)))));
 } else {
  if (var_1_47 >= ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) {
   var_1_62 = (((((var_1_63 - var_1_36)) < (var_1_35)) ? ((var_1_63 - var_1_36)) : (var_1_35)));
  } else {
   if (stepLocal_11 == var_1_105) {
    var_1_62 = (((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) - ((((var_1_36) > (var_1_38)) ? (var_1_36) : (var_1_38))))) < (var_1_58)) ? ((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) - ((((var_1_36) > (var_1_38)) ? (var_1_36) : (var_1_38))))) : (var_1_58)));
   } else {
    if (var_1_28) {
     if (stepLocal_10 <= last_1_var_1_62) {
      var_1_62 = ((((var_1_75) < (((((var_1_33) < (50)) ? (var_1_33) : (50))))) ? (var_1_75) : (((((var_1_33) < (50)) ? (var_1_33) : (50))))));
     } else {
      var_1_62 = (var_1_58 + var_1_36);
     }
    } else {
     if (! (var_1_52 <= var_1_21)) {
      var_1_62 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
     }
    }
   }
  }
 }
 unsigned char stepLocal_21 = var_1_35;
 if (! (var_1_62 <= var_1_72)) {
  var_1_78 = (((var_1_33 + 256) + 1) - var_1_34);
 } else {
  if (var_1_42) {
   var_1_78 = (var_1_31 - ((var_1_79 + var_1_80) - var_1_50));
  } else {
   if (var_1_48 != (var_1_12 / ((((var_1_24) > (31.625f)) ? (var_1_24) : (31.625f))))) {
    if (! (var_1_62 < var_1_55)) {
     if ((var_1_71 & var_1_58) != stepLocal_21) {
      var_1_78 = (((((var_1_31 - (21490 - var_1_81))) > (-1)) ? ((var_1_31 - (21490 - var_1_81))) : (-1)));
     } else {
      var_1_78 = ((((var_1_34) > (var_1_55)) ? (var_1_34) : (var_1_55)));
     }
    } else {
     var_1_78 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
    }
   } else {
    var_1_78 = ((((last_1_var_1_78) < ((var_1_38 - var_1_35))) ? (last_1_var_1_78) : ((var_1_38 - var_1_35))));
   }
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 2305843.009213691400e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32767);
 assume_abort_if_not(var_1_26 <= 32766);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 2147483647);
 assume_abort_if_not(var_1_30 <= 4294967295);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 63);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 31);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 31);
 assume_abort_if_not(var_1_34 <= 64);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 32);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 64);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 31);
 assume_abort_if_not(var_1_37 <= 64);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 32);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 95);
 assume_abort_if_not(var_1_50 <= 127);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -922337.2036854766000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_55 >= -16383);
 assume_abort_if_not(var_1_55 <= 16383);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 16383);
 assume_abort_if_not(var_1_58 <= 32767);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 536870912);
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 1610612735);
 assume_abort_if_not(var_1_61 <= 2147483647);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 32767);
 assume_abort_if_not(var_1_63 <= 65534);
 var_1_67 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_67 >= 1073741822);
 assume_abort_if_not(var_1_67 <= 2147483646);
 var_1_68 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_68 >= 1073741822);
 assume_abort_if_not(var_1_68 <= 2147483646);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= 63);
 assume_abort_if_not(var_1_71 <= 126);
 var_1_73 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_73 >= 536870911);
 assume_abort_if_not(var_1_73 <= 1073741823);
 var_1_76 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 12);
 var_1_77 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_77 >= 49150);
 assume_abort_if_not(var_1_77 <= 65534);
 var_1_79 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_79 >= 8191);
 assume_abort_if_not(var_1_79 <= 16383);
 var_1_80 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_80 >= 8192);
 assume_abort_if_not(var_1_80 <= 16383);
 var_1_81 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 16383);
 var_1_83 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_83 >= 3221225470);
 assume_abort_if_not(var_1_83 <= 4294967294);
 var_1_86 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_86 >= 2147483647);
 assume_abort_if_not(var_1_86 <= 4294967294);
 var_1_91 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_91 >= -461168.6018427383000e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 4611686.018427383000e+12F && var_1_91 >= 1.0e-20F ));
 var_1_92 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_92 >= -115292.1504606845700e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 1152921.504606845700e+12F && var_1_92 >= 1.0e-20F ));
 var_1_93 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_93 >= -115292.1504606845700e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 1152921.504606845700e+12F && var_1_93 >= 1.0e-20F ));
 var_1_97 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_97 >= -2147483647);
 assume_abort_if_not(var_1_97 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_29 = var_1_29;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_106 = var_1_106;
 last_1_var_1_107 = var_1_107;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_74 != var_1_95) ? (var_1_1 == ((unsigned long int) var_1_5)) : (((50.6f + 199.5f) >= var_1_88) ? (var_1_1 == ((unsigned long int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : 1)) && (((128 - var_1_8) == var_1_85) ? (var_1_7 == ((signed long int) ((1176345877 - var_1_8) - var_1_9))) : (var_1_7 == ((signed long int) (var_1_8 - ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))))))) && ((var_1_109 <= -10) ? (var_1_10 == ((float) var_1_11)) : ((var_1_1 > var_1_9) ? (var_1_39 ? (var_1_10 == ((float) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : 1) : (var_1_10 == ((float) (var_1_12 + var_1_13)))))) && (var_1_14 == ((signed long int) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) && ((var_1_8 >= (~ var_1_95)) ? (var_1_15 == ((double) (var_1_16 - ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)))))) : (var_1_15 == ((double) (var_1_13 + var_1_12))))) && ((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) > var_1_18) ? (var_1_19 == ((float) ((var_1_20 + (var_1_21 - var_1_22)) + var_1_13))) : (((var_1_11 / var_1_23) <= (- var_1_17)) ? (var_1_19 == ((float) (var_1_21 + (((((var_1_22) < (1000.8f)) ? (var_1_22) : (1000.8f))) + var_1_20)))) : (var_1_19 == ((float) ((500.65f + (var_1_24 - var_1_22)) - var_1_18)))))) && ((var_1_14 == (var_1_95 * var_1_9)) ? (var_1_44 ? (var_1_25 == ((signed short int) ((((var_1_26) < (var_1_8)) ? (var_1_26) : (var_1_8))))) : 1) : 1)) && (var_1_27 == ((unsigned char) ((var_1_24 < (var_1_20 + var_1_17)) || ((var_1_26 <= var_1_98) || var_1_28))))) && ((var_1_82 > (var_1_30 - var_1_9)) ? (var_1_29 == ((unsigned char) ((var_1_31 - (2 + var_1_32)) + var_1_8))) : (var_1_45 ? (var_1_29 == ((unsigned char) (((((var_1_33 - (var_1_31 - var_1_32))) > (var_1_8)) ? ((var_1_33 - (var_1_31 - var_1_32))) : (var_1_8))))) : (var_1_29 == ((unsigned char) (((var_1_34 + var_1_35) + var_1_36) - ((var_1_37 + var_1_38) - var_1_32))))))) && ((((((last_1_var_1_56) > (last_1_var_1_89)) ? (last_1_var_1_56) : (last_1_var_1_89))) > 1.000000000002E11f) ? (var_1_39 == ((unsigned char) 0)) : (var_1_39 == ((unsigned char) (var_1_41 || var_1_42))))) && ((var_1_8 <= var_1_38) ? (var_1_43 == ((signed char) ((((var_1_32) < (((((var_1_35) > (var_1_37)) ? (var_1_35) : (var_1_37))))) ? (var_1_32) : (((((var_1_35) > (var_1_37)) ? (var_1_35) : (var_1_37)))))))) : ((4u < (- var_1_37)) ? (var_1_43 == ((signed char) (((((((var_1_38) > (var_1_32)) ? (var_1_38) : (var_1_32))) < 0 ) ? -((((var_1_38) > (var_1_32)) ? (var_1_38) : (var_1_32))) : ((((var_1_38) > (var_1_32)) ? (var_1_38) : (var_1_32))))))) : 1))) && ((var_1_34 != var_1_5) ? (var_1_44 == ((unsigned char) 0)) : (((var_1_32 - ((((var_1_36) > (var_1_38)) ? (var_1_36) : (var_1_38)))) >= (~ ((((var_1_31) > (var_1_84)) ? (var_1_31) : (var_1_84))))) ? (var_1_44 == ((unsigned char) var_1_28)) : (var_1_44 == ((unsigned char) (! var_1_41)))))) && (((var_1_36 < var_1_26) || (last_1_var_1_107 <= var_1_23)) ? (last_1_var_1_39 ? (var_1_45 == ((unsigned char) ((last_1_var_1_44 && (var_1_21 < var_1_22)) || var_1_28))) : (((var_1_20 + 32.75f) <= var_1_17) ? (var_1_45 == ((unsigned char) var_1_28)) : 1)) : (var_1_45 == ((unsigned char) ((var_1_12 <= var_1_11) && var_1_41))))) && ((var_1_30 > (((((var_1_34) < (var_1_87)) ? (var_1_34) : (var_1_87))) * (var_1_36 / var_1_38))) ? ((var_1_13 != var_1_56) ? ((var_1_24 > (var_1_12 / ((((64.8f) < 0 ) ? -(64.8f) : (64.8f))))) ? (var_1_46 == ((double) (((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) < 0 ) ? -((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) : ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))))) : 1) : (var_1_46 == ((double) ((((var_1_22) > (var_1_20)) ? (var_1_22) : (var_1_20)))))) : (var_1_46 == ((double) ((((var_1_18) < ((var_1_12 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) ? (var_1_18) : ((var_1_12 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))))))) && ((! (var_1_25 >= var_1_38)) ? ((var_1_42 && var_1_44) ? (var_1_47 == ((float) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : 1) : (var_1_47 == ((float) (var_1_22 + (var_1_21 - (var_1_24 - var_1_48))))))) && ((var_1_22 != (((((var_1_46) < (var_1_108)) ? (var_1_46) : (var_1_108))) + var_1_88)) ? ((var_1_13 > var_1_23) ? ((! (! (var_1_108 != var_1_47))) ? (var_1_49 == ((unsigned char) (((var_1_50 - var_1_32) + var_1_36) - ((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8)))))) : (((var_1_26 % var_1_35) > var_1_72) ? (var_1_49 == ((unsigned char) (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - var_1_32))) : 1)) : 1) : 1)) && (var_1_52 == ((float) var_1_53))) && ((5.9f <= var_1_21) ? (((- 1) <= ((var_1_50 - var_1_35) / var_1_36)) ? (var_1_54 == ((signed short int) ((((((((var_1_37) < (var_1_31)) ? (var_1_37) : (var_1_31)))) > (((((var_1_57) < ((var_1_55 + var_1_38))) ? (var_1_57) : ((var_1_55 + var_1_38)))))) ? (((((var_1_37) < (var_1_31)) ? (var_1_37) : (var_1_31)))) : (((((var_1_57) < ((var_1_55 + var_1_38))) ? (var_1_57) : ((var_1_55 + var_1_38))))))))) : (var_1_54 == ((signed short int) var_1_36))) : (var_1_54 == ((signed short int) ((((var_1_50) < (var_1_57)) ? (var_1_50) : (var_1_57))))))) && ((var_1_39 && var_1_44) ? (var_1_56 == ((double) (((((var_1_22) < (((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (var_1_22) : (((((var_1_12) < (var_1_13)) ? (var_1_12) : (var_1_13)))))) + var_1_21))) : 1)) && ((! var_1_41) ? (var_1_57 == ((unsigned short int) (var_1_50 + (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))) - var_1_36)))) : (var_1_57 == ((unsigned short int) ((((var_1_105) < (var_1_31)) ? (var_1_105) : (var_1_31))))))) && (((63.8 > (var_1_69 * var_1_56)) || var_1_45) ? (var_1_59 == ((unsigned long int) (((((var_1_8) < (var_1_31)) ? (var_1_8) : (var_1_31))) + ((var_1_60 + 64u) + var_1_36)))) : ((var_1_28 && var_1_41) ? (((var_1_107 * var_1_24) >= ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))) ? (var_1_59 == ((unsigned long int) ((((var_1_36) > ((var_1_38 + ((((100u) < 0 ) ? -(100u) : (100u)))))) ? (var_1_36) : ((var_1_38 + ((((100u) < 0 ) ? -(100u) : (100u))))))))) : (var_1_59 == ((unsigned long int) (((var_1_61 - var_1_32) - ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) + var_1_65)))) : 1))) && ((var_1_47 < var_1_53) ? (var_1_62 == ((unsigned short int) (((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8))) + ((((var_1_58) < ((var_1_1 + 50))) ? (var_1_58) : ((var_1_1 + 50))))))) : ((var_1_47 >= ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) ? (var_1_62 == ((unsigned short int) (((((var_1_63 - var_1_36)) < (var_1_35)) ? ((var_1_63 - var_1_36)) : (var_1_35))))) : ((var_1_1 == var_1_105) ? (var_1_62 == ((unsigned short int) (((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) - ((((var_1_36) > (var_1_38)) ? (var_1_36) : (var_1_38))))) < (var_1_58)) ? ((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63))) - ((((var_1_36) > (var_1_38)) ? (var_1_36) : (var_1_38))))) : (var_1_58))))) : (var_1_28 ? (((- var_1_85) <= last_1_var_1_62) ? (var_1_62 == ((unsigned short int) ((((var_1_75) < (((((var_1_33) < (50)) ? (var_1_33) : (50))))) ? (var_1_75) : (((((var_1_33) < (50)) ? (var_1_33) : (50)))))))) : (var_1_62 == ((unsigned short int) (var_1_58 + var_1_36)))) : ((! (var_1_52 <= var_1_21)) ? (var_1_62 == ((unsigned short int) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : 1)))))) && (var_1_39 ? (var_1_64 == ((unsigned short int) var_1_36)) : 1)) && (var_1_41 ? (var_1_65 == ((signed short int) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) : 1)) && ((var_1_36 < ((((var_1_82) < (((((var_1_33) < (last_1_var_1_66)) ? (var_1_33) : (last_1_var_1_66))))) ? (var_1_82) : (((((var_1_33) < (last_1_var_1_66)) ? (var_1_33) : (last_1_var_1_66))))))) ? ((var_1_88 < var_1_11) ? (var_1_66 == ((signed long int) ((((((var_1_67) > (var_1_68)) ? (var_1_67) : (var_1_68))) - var_1_7) - var_1_38))) : (var_1_66 == ((signed long int) (((((((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))) > (var_1_68)) ? (((((var_1_67) < 0 ) ? -(var_1_67) : (var_1_67)))) : (var_1_68))) - ((((var_1_8) < ((last_1_var_1_66 + var_1_32))) ? (var_1_8) : ((last_1_var_1_66 + var_1_32)))))))) : 1)) && (var_1_45 ? (var_1_69 == ((float) var_1_20)) : (var_1_69 == ((float) (((((var_1_48 - var_1_22) < 0 ) ? -(var_1_48 - var_1_22) : (var_1_48 - var_1_22))) + (var_1_21 + var_1_20)))))) && ((! (var_1_67 <= (var_1_34 - var_1_58))) ? (var_1_70 == ((signed char) (var_1_32 - (((((var_1_71 - var_1_38)) > (var_1_37)) ? ((var_1_71 - var_1_38)) : (var_1_37)))))) : (var_1_27 ? (var_1_70 == ((signed char) ((var_1_35 + var_1_32) - (2 + var_1_38)))) : 1))) && ((var_1_63 >= var_1_71) ? (var_1_72 == ((signed long int) var_1_35)) : (var_1_72 == ((signed long int) (((var_1_73 - var_1_36) + ((((var_1_82) < 0 ) ? -(var_1_82) : (var_1_82)))) - ((((var_1_87) < (var_1_1)) ? (var_1_87) : (var_1_1)))))))) && ((((var_1_48 * var_1_18) < last_1_var_1_106) || var_1_41) ? ((var_1_68 < 16) ? ((var_1_5 < last_1_var_1_72) ? (var_1_74 == ((signed short int) (var_1_71 + ((((var_1_35) > (last_1_var_1_29)) ? (var_1_35) : (last_1_var_1_29)))))) : ((var_1_42 && last_1_var_1_39) ? (var_1_74 == ((signed short int) ((var_1_35 - 64) + (var_1_32 - var_1_37)))) : 1)) : (var_1_74 == ((signed short int) (((((var_1_33) > (((((var_1_35) < (var_1_8)) ? (var_1_35) : (var_1_8))))) ? (var_1_33) : (((((var_1_35) < (var_1_8)) ? (var_1_35) : (var_1_8)))))) - var_1_34)))) : (var_1_74 == ((signed short int) last_1_var_1_87)))) && ((var_1_29 > var_1_82) ? (((32 << (4 + var_1_76)) > var_1_82) ? (var_1_45 ? (var_1_75 == ((unsigned short int) ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) > (var_1_71)) ? (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (var_1_71))))) : 1) : (var_1_75 == ((unsigned short int) var_1_37))) : ((var_1_1 < (var_1_36 ^ var_1_87)) ? (var_1_75 == ((unsigned short int) (((((var_1_63) < ((var_1_77 - var_1_76))) ? (var_1_63) : ((var_1_77 - var_1_76)))) - ((((last_1_var_1_75) < (var_1_50)) ? (last_1_var_1_75) : (var_1_50)))))) : 1))) && ((! (var_1_62 <= var_1_72)) ? (var_1_78 == ((signed short int) (((var_1_33 + 256) + 1) - var_1_34))) : (var_1_42 ? (var_1_78 == ((signed short int) (var_1_31 - ((var_1_79 + var_1_80) - var_1_50)))) : ((var_1_48 != (var_1_12 / ((((var_1_24) > (31.625f)) ? (var_1_24) : (31.625f))))) ? ((! (var_1_62 < var_1_55)) ? (((var_1_71 & var_1_58) != var_1_35) ? (var_1_78 == ((signed short int) (((((var_1_31 - (21490 - var_1_81))) > (-1)) ? ((var_1_31 - (21490 - var_1_81))) : (-1))))) : (var_1_78 == ((signed short int) ((((var_1_34) > (var_1_55)) ? (var_1_34) : (var_1_55)))))) : (var_1_78 == ((signed short int) ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))))) : (var_1_78 == ((signed short int) ((((last_1_var_1_78) < ((var_1_38 - var_1_35))) ? (last_1_var_1_78) : ((var_1_38 - var_1_35)))))))))) && (((-1 * var_1_8) < var_1_84) ? ((! var_1_27) ? (var_1_82 == ((unsigned long int) ((var_1_83 - var_1_37) - var_1_68))) : (var_1_82 == ((unsigned long int) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) : (var_1_82 == ((unsigned long int) (var_1_80 + ((((5u) > (var_1_37)) ? (5u) : (var_1_37)))))))) && ((var_1_54 >= ((((((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))) < (var_1_30)) ? (((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74)))) : (var_1_30)))) ? (((var_1_63 - var_1_35) < var_1_9) ? ((! var_1_42) ? (var_1_84 == ((signed short int) (var_1_80 - (var_1_79 + (10000 - var_1_38))))) : (var_1_84 == ((signed short int) var_1_38))) : (var_1_84 == ((signed short int) var_1_77))) : 1)) && ((var_1_39 || (var_1_8 == var_1_55)) ? (var_1_85 == ((unsigned long int) (((((var_1_83) > (var_1_86)) ? (var_1_83) : (var_1_86))) - (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))) - (var_1_73 - 32u))))) : (var_1_85 == ((unsigned long int) (var_1_61 + var_1_105))))) && (var_1_87 == ((unsigned short int) (var_1_36 + var_1_76)))) && (((var_1_34 / ((((var_1_35) < (var_1_38)) ? (var_1_35) : (var_1_38)))) < 200) ? (var_1_88 == ((float) (((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))))) : 1)) && (var_1_44 ? (var_1_27 ? (((var_1_24 - var_1_48) != var_1_56) ? (var_1_89 == ((float) var_1_13)) : 1) : (var_1_89 == ((float) (var_1_24 + ((((var_1_91) < (((((var_1_21) > (var_1_12)) ? (var_1_21) : (var_1_12))))) ? (var_1_91) : (((((var_1_21) > (var_1_12)) ? (var_1_21) : (var_1_12)))))))))) : (var_1_89 == ((float) ((var_1_20 + (var_1_92 + var_1_93)) + (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))))))) && ((((var_1_87 / var_1_37) > var_1_14) || (var_1_14 < var_1_38)) ? (var_1_94 == ((signed short int) ((((((var_1_35) > (last_1_var_1_94)) ? (var_1_35) : (last_1_var_1_94))) - var_1_32) + var_1_38))) : 1)) && (var_1_95 == ((signed char) var_1_37))) && (var_1_44 ? (var_1_96 == ((signed long int) var_1_97)) : 1)) && (var_1_98 == ((signed short int) var_1_87))) && (var_1_99 == ((unsigned char) var_1_34))) && (var_1_100 == ((double) var_1_93))) && (var_1_42 ? (var_1_101 == ((signed short int) var_1_75)) : 1)) && (var_1_45 ? (var_1_102 == ((signed char) var_1_37)) : (var_1_102 == ((signed char) var_1_34)))) && (var_1_27 ? (var_1_103 == ((float) 1.625f)) : (var_1_103 == ((float) var_1_24)))) && (var_1_42 ? (var_1_105 == ((unsigned char) var_1_71)) : (var_1_105 == ((unsigned char) var_1_35)))) && (var_1_45 ? (var_1_106 == ((double) var_1_20)) : (var_1_106 == ((double) var_1_21)))) && (var_1_107 == ((float) var_1_11))) && (var_1_108 == ((float) var_1_20))) && (((var_1_57 * var_1_63) <= (var_1_8 - var_1_76)) ? (var_1_39 ? ((var_1_46 < var_1_23) ? (var_1_109 == ((unsigned char) (var_1_33 - var_1_31))) : (var_1_109 == ((unsigned char) var_1_32))) : 1) : (var_1_109 == ((unsigned char) var_1_38)))
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
