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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch154Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 10;
signed long int var_1_3 = 32;
signed long int var_1_4 = 200;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = -5;
signed char var_1_9 = 1;
float var_1_10 = 127.5;
float var_1_11 = 1.2;
float var_1_12 = 7.5;
float var_1_13 = 5.8;
signed short int var_1_14 = -2;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 25;
unsigned short int var_1_18 = 32;
unsigned char var_1_19 = 1;
unsigned long int var_1_20 = 4;
float var_1_21 = 16.5;
float var_1_22 = 32.5;
float var_1_23 = 10.4;
float var_1_24 = 0.0;
float var_1_25 = 128.75;
float var_1_26 = 50.4;
float var_1_27 = 50.8;
unsigned short int var_1_28 = 8;
unsigned short int var_1_30 = 48751;
unsigned long int var_1_31 = 64;
unsigned long int var_1_32 = 1000000000;
unsigned long int var_1_33 = 1000000000;
unsigned long int var_1_34 = 1000000000;
unsigned long int var_1_35 = 3706991842;
unsigned long int var_1_36 = 1523179074;
signed char var_1_37 = 10;
signed char var_1_40 = 50;
signed char var_1_41 = 10;
signed char var_1_42 = 4;
signed char var_1_43 = 1;
signed char var_1_44 = 25;
signed char var_1_45 = 2;
signed char var_1_46 = 16;
signed short int var_1_47 = 25;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
signed char var_1_52 = -32;
double var_1_53 = 64.6;
signed short int var_1_54 = -32;
float var_1_55 = 10.25;
float var_1_56 = 0.0;
float var_1_57 = 0.0;
float var_1_58 = 0.0;
unsigned short int var_1_59 = 128;
float var_1_60 = 8.25;
float var_1_61 = 31.8;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 4;
signed char var_1_64 = -8;
unsigned char var_1_65 = 100;
unsigned char var_1_66 = 100;
unsigned short int var_1_67 = 22577;
unsigned short int var_1_68 = 100;
unsigned short int var_1_69 = 10000;
float var_1_70 = 0.75;
unsigned long int var_1_71 = 16;
unsigned long int var_1_72 = 10000;
signed long int var_1_73 = 0;
signed long int var_1_74 = -128;
signed long int var_1_75 = 10;
double var_1_76 = 0.25;
double var_1_77 = 100.5;
signed long int var_1_78 = 10000000;
signed long int var_1_79 = 10;
signed long int var_1_81 = -32;
signed long int var_1_82 = -32;
float var_1_83 = 16.722;
float var_1_84 = 64.1;
float var_1_85 = 31.5;
unsigned long int var_1_86 = 128;
unsigned short int var_1_87 = 16;
unsigned long int var_1_88 = 0;
unsigned long int var_1_89 = 1075671941;
unsigned long int var_1_90 = 0;
unsigned long int var_1_91 = 1583022054;
float var_1_92 = 32.2;
unsigned char var_1_94 = 0;
double var_1_95 = 9999999.5;
unsigned short int var_1_96 = 128;
unsigned long int var_1_97 = 32;
unsigned char var_1_98 = 1;
signed short int var_1_99 = -128;
signed short int var_1_100 = 256;
float var_1_101 = 99.75;
signed char var_1_102 = -10;
float var_1_103 = 10.8;
double var_1_104 = 15.7;
signed short int var_1_105 = 5;
signed char var_1_106 = 5;
unsigned short int var_1_107 = 4;
unsigned long int var_1_109 = 64;
signed short int var_1_110 = -1000;
signed short int last_1_var_1_14 = -2;
unsigned char last_1_var_1_48 = 0;
unsigned short int last_1_var_1_68 = 100;
unsigned long int last_1_var_1_71 = 16;
unsigned long int last_1_var_1_72 = 10000;
double last_1_var_1_76 = 0.25;
signed long int last_1_var_1_78 = 10000000;
signed long int last_1_var_1_79 = 10;
signed long int last_1_var_1_82 = -32;
unsigned char last_1_var_1_94 = 0;
unsigned char last_1_var_1_98 = 1;
double last_1_var_1_104 = 15.7;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_25 = ((((var_1_33 - 200)) > (last_1_var_1_78)) ? ((var_1_33 - 200)) : (last_1_var_1_78));
 if (! last_1_var_1_48) {
  if ((((((last_1_var_1_76 + var_1_25)) < (last_1_var_1_104)) ? ((last_1_var_1_76 + var_1_25)) : (last_1_var_1_104))) == (var_1_77 / var_1_24)) {
   if (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) > stepLocal_25) {
    var_1_82 = (((((last_1_var_1_68) > (var_1_46)) ? (last_1_var_1_68) : (var_1_46))) + (var_1_30 + var_1_67));
   }
  } else {
   var_1_82 = ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82)));
  }
 }
 var_1_68 = (((var_1_69 - last_1_var_1_79) + var_1_41) + last_1_var_1_14);
 signed long int stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = last_1_var_1_78;
 if (var_1_3 <= stepLocal_0) {
  var_1_5 = (var_1_6 && (last_1_var_1_94 || var_1_7));
 } else {
  if (var_1_3 == stepLocal_1) {
   var_1_5 = (var_1_7 && var_1_6);
  }
 }
 if (var_1_5) {
  var_1_1 = (var_1_3 - var_1_4);
 } else {
  var_1_1 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 }
 signed char stepLocal_2 = var_1_9;
 if (stepLocal_2 > var_1_3) {
  var_1_10 = (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - (var_1_12 + var_1_13));
 } else {
  var_1_10 = (var_1_13 - var_1_12);
 }
 signed long int stepLocal_5 = var_1_4 * var_1_9;
 if (! var_1_7) {
  if (5 <= stepLocal_5) {
   var_1_21 = (var_1_12 + (var_1_22 + var_1_23));
  } else {
   var_1_21 = (var_1_12 + (var_1_13 - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))));
  }
 } else {
  var_1_21 = ((var_1_12 + (var_1_24 - var_1_25)) - (var_1_13 + var_1_26));
 }
 if (! (var_1_26 < var_1_23)) {
  var_1_48 = (var_1_49 || (var_1_50 || var_1_51));
 } else {
  var_1_48 = (var_1_50 || var_1_51);
 }
 if (var_1_23 < ((var_1_11 + var_1_25) + var_1_26)) {
  if (var_1_23 <= var_1_26) {
   var_1_52 = (var_1_46 - var_1_41);
  } else {
   var_1_52 = var_1_9;
  }
 } else {
  var_1_52 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
 }
 if (var_1_50) {
  var_1_53 = (var_1_24 - var_1_13);
 }
 if (((var_1_12 / var_1_24) < var_1_53) || var_1_7) {
  var_1_55 = ((var_1_56 - var_1_24) - (((((var_1_57) < (var_1_58)) ? (var_1_57) : (var_1_58))) - (2.8070132764376924E18f - var_1_25)));
 } else {
  var_1_55 = var_1_57;
 }
 signed char stepLocal_20 = var_1_41;
 signed char stepLocal_19 = var_1_41;
 if (stepLocal_20 > var_1_43) {
  if (stepLocal_19 >= var_1_46) {
   var_1_70 = (var_1_23 + (var_1_22 + ((((var_1_25) < (1.6f)) ? (var_1_25) : (1.6f)))));
  }
 } else {
  if (var_1_51) {
   var_1_70 = (var_1_22 + ((((((((var_1_24) < (var_1_23)) ? (var_1_24) : (var_1_23)))) > (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (((((var_1_24) < (var_1_23)) ? (var_1_24) : (var_1_23)))) : (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)))))));
  } else {
   var_1_70 = (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_23);
  }
 }
 if (var_1_57 >= var_1_26) {
  var_1_75 = 4;
 }
 unsigned short int stepLocal_23 = var_1_18;
 if (stepLocal_23 >= (var_1_30 - (var_1_67 - var_1_19))) {
  var_1_76 = (var_1_57 - var_1_77);
 } else {
  var_1_76 = ((((var_1_58) > (var_1_11)) ? (var_1_58) : (var_1_11)));
 }
 var_1_81 = (((((var_1_46 - var_1_82)) > (var_1_69)) ? ((var_1_46 - var_1_82)) : (var_1_69)));
 if (var_1_57 <= (var_1_13 * var_1_53)) {
  var_1_90 = (var_1_35 - ((((var_1_91 - var_1_42) < 0 ) ? -(var_1_91 - var_1_42) : (var_1_91 - var_1_42))));
 } else {
  if (var_1_49) {
   var_1_90 = (var_1_32 + var_1_67);
  } else {
   var_1_90 = (var_1_35 - (var_1_69 + ((((var_1_17) < (4u)) ? (var_1_17) : (4u)))));
  }
 }
 if (var_1_49) {
  var_1_94 = var_1_6;
 }
 if (var_1_7) {
  var_1_95 = var_1_25;
 } else {
  var_1_95 = var_1_26;
 }
 if (var_1_94) {
  var_1_96 = var_1_44;
 }
 var_1_97 = var_1_69;
 if (last_1_var_1_98) {
  var_1_98 = var_1_50;
 } else {
  var_1_98 = var_1_7;
 }
 if (var_1_7) {
  var_1_101 = var_1_22;
 } else {
  var_1_101 = var_1_26;
 }
 var_1_102 = var_1_46;
 var_1_103 = var_1_25;
 if (var_1_98) {
  var_1_104 = var_1_85;
 }
 if (var_1_98) {
  var_1_106 = var_1_40;
 }
 unsigned long int stepLocal_29 = var_1_97;
 if ((var_1_81 / var_1_36) < stepLocal_29) {
  var_1_107 = (var_1_46 + ((((var_1_69) < (var_1_19)) ? (var_1_69) : (var_1_19))));
 } else {
  var_1_107 = (var_1_30 - var_1_17);
 }
 var_1_109 = var_1_67;
 unsigned char stepLocal_22 = var_1_5;
 if (stepLocal_22 || var_1_94) {
  var_1_73 = (((((((((var_1_30 + var_1_74)) < (var_1_64)) ? ((var_1_30 + var_1_74)) : (var_1_64)))) > (var_1_40)) ? ((((((var_1_30 + var_1_74)) < (var_1_64)) ? ((var_1_30 + var_1_74)) : (var_1_64)))) : (var_1_40)));
 } else {
  var_1_73 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 if (var_1_9 >= var_1_68) {
  if ((var_1_68 / var_1_16) != var_1_97) {
   var_1_28 = (var_1_30 - 8);
  } else {
   var_1_28 = (var_1_68 + var_1_19);
  }
 }
 unsigned long int stepLocal_9 = var_1_109;
 unsigned long int stepLocal_8 = var_1_90;
 unsigned char stepLocal_7 = var_1_48;
 if (var_1_6 || stepLocal_7) {
  if (var_1_48) {
   if (stepLocal_8 != var_1_30) {
    if (var_1_4 <= stepLocal_9) {
     var_1_31 = (((var_1_32 + var_1_33) - (var_1_34 - var_1_18)) + var_1_16);
    } else {
     var_1_31 = (var_1_4 + var_1_33);
    }
   } else {
    var_1_31 = ((((var_1_33 + ((((var_1_96) > (var_1_4)) ? (var_1_96) : (var_1_4)))) < 0 ) ? -(var_1_33 + ((((var_1_96) > (var_1_4)) ? (var_1_96) : (var_1_4)))) : (var_1_33 + ((((var_1_96) > (var_1_4)) ? (var_1_96) : (var_1_4))))));
   }
  } else {
   var_1_31 = ((((var_1_35 - (var_1_36 - var_1_18)) < 0 ) ? -(var_1_35 - (var_1_36 - var_1_18)) : (var_1_35 - (var_1_36 - var_1_18))));
  }
 } else {
  var_1_31 = var_1_18;
 }
 signed long int stepLocal_17 = (((var_1_42) > (1)) ? (var_1_42) : (1));
 if ((- var_1_109) >= stepLocal_17) {
  var_1_59 = ((((((((var_1_30) < (var_1_45)) ? (var_1_30) : (var_1_45)))) > (var_1_19)) ? (((((var_1_30) < (var_1_45)) ? (var_1_30) : (var_1_45)))) : (var_1_19)));
 }
 signed long int stepLocal_18 = var_1_44 & var_1_96;
 if (var_1_6) {
  if (stepLocal_18 >= 10000000) {
   var_1_61 = ((((var_1_58) > (var_1_56)) ? (var_1_58) : (var_1_56)));
  }
 }
 if (var_1_103 > var_1_13) {
  var_1_63 = (((((((((var_1_46) < (var_1_65)) ? (var_1_46) : (var_1_65)))) < (var_1_19)) ? (((((var_1_46) < (var_1_65)) ? (var_1_46) : (var_1_65)))) : (var_1_19))) + ((((var_1_45) < (var_1_40)) ? (var_1_45) : (var_1_40))));
 } else {
  var_1_63 = var_1_46;
 }
 if (var_1_97 != (37305 - (var_1_67 - var_1_65))) {
  var_1_66 = var_1_19;
 }
 unsigned short int stepLocal_21 = var_1_96;
 if (stepLocal_21 >= var_1_32) {
  var_1_72 = (var_1_35 - last_1_var_1_72);
 }
 unsigned long int stepLocal_26 = var_1_90;
 if (var_1_22 < var_1_58) {
  var_1_83 = (var_1_84 + ((var_1_25 - var_1_85) + var_1_22));
 } else {
  if ((((((var_1_77 - var_1_85)) > ((var_1_23 * var_1_70))) ? ((var_1_77 - var_1_85)) : ((var_1_23 * var_1_70)))) > (((((var_1_26 - var_1_57)) > (var_1_104)) ? ((var_1_26 - var_1_57)) : (var_1_104)))) {
   if (stepLocal_26 >= (((((var_1_97 & var_1_43)) > (50)) ? ((var_1_97 & var_1_43)) : (50)))) {
    var_1_83 = ((((var_1_13) > (16.6f)) ? (var_1_13) : (16.6f)));
   } else {
    var_1_83 = (var_1_25 + var_1_26);
   }
  }
 }
 if (! (var_1_7 && var_1_94)) {
  var_1_86 = (var_1_30 + (var_1_16 + var_1_69));
 } else {
  if (var_1_36 > 64u) {
   var_1_86 = ((3225801457u - (var_1_41 + var_1_30)) - var_1_19);
  } else {
   if (var_1_98) {
    var_1_86 = (var_1_35 - (var_1_36 - var_1_40));
   }
  }
 }
 if (! var_1_98) {
  var_1_87 = (47449 - (var_1_45 + var_1_42));
 }
 if (! (var_1_104 < var_1_77)) {
  if (var_1_51) {
   var_1_88 = (var_1_16 + var_1_1);
  } else {
   var_1_88 = ((((((var_1_36) > (var_1_89)) ? (var_1_36) : (var_1_89))) - var_1_34) + var_1_33);
  }
 }
 signed char stepLocal_28 = var_1_40;
 unsigned char stepLocal_27 = var_1_104 <= 256.3f;
 if (var_1_70 > (var_1_77 + var_1_70)) {
  if ((- var_1_88) <= stepLocal_28) {
   if (var_1_50 && stepLocal_27) {
    var_1_92 = var_1_11;
   }
  } else {
   var_1_92 = var_1_24;
  }
 } else {
  var_1_92 = 1.375f;
 }
 var_1_110 = var_1_72;
 if (last_1_var_1_71 >= (var_1_32 * var_1_40)) {
  if (var_1_68 <= var_1_31) {
   var_1_71 = var_1_16;
  }
 } else {
  if (var_1_5) {
   var_1_71 = var_1_4;
  }
 }
 if ((var_1_13 - var_1_12) <= var_1_53) {
  var_1_14 = (var_1_110 + var_1_9);
 }
 if (var_1_11 > (((((var_1_12 * 15.2f)) > (((((var_1_13) > (var_1_83)) ? (var_1_13) : (var_1_83))))) ? ((var_1_12 * 15.2f)) : (((((var_1_13) > (var_1_83)) ? (var_1_13) : (var_1_83))))))) {
  var_1_20 = (var_1_18 + (1743735276u - var_1_16));
 } else {
  var_1_20 = ((((5u) < (32u)) ? (5u) : (32u)));
 }
 var_1_47 = (((((var_1_19 + ((((var_1_88) < (var_1_46)) ? (var_1_88) : (var_1_46))))) < (var_1_97)) ? ((var_1_19 + ((((var_1_88) < (var_1_46)) ? (var_1_88) : (var_1_46))))) : (var_1_97)));
 unsigned char stepLocal_16 = var_1_50;
 unsigned long int stepLocal_15 = var_1_71;
 unsigned long int stepLocal_14 = ((((var_1_30 * var_1_36)) > ((37960 - var_1_16))) ? ((var_1_30 * var_1_36)) : ((37960 - var_1_16)));
 if (stepLocal_16 || ((var_1_26 < var_1_24) && var_1_6)) {
  if (var_1_72 >= stepLocal_14) {
   if (var_1_3 != stepLocal_15) {
    var_1_54 = (((((((((var_1_1) > (var_1_16)) ? (var_1_1) : (var_1_16))) - var_1_19)) > ((((((var_1_40 + var_1_44)) < (var_1_43)) ? ((var_1_40 + var_1_44)) : (var_1_43))))) ? ((((((var_1_1) > (var_1_16)) ? (var_1_1) : (var_1_16))) - var_1_19)) : ((((((var_1_40 + var_1_44)) < (var_1_43)) ? ((var_1_40 + var_1_44)) : (var_1_43))))));
   }
  } else {
   var_1_54 = var_1_46;
  }
 }
 signed long int stepLocal_24 = 128 / var_1_64;
 if ((- (32.6f * var_1_103)) > (- (- var_1_53))) {
  var_1_78 = ((4 + (var_1_71 - var_1_96)) + var_1_96);
 } else {
  if (var_1_103 < 128.125f) {
   var_1_78 = (((((var_1_33 - (var_1_46 + var_1_82))) < (var_1_96)) ? ((var_1_33 - (var_1_46 + var_1_82))) : (var_1_96)));
  } else {
   if (stepLocal_24 < var_1_73) {
    var_1_78 = (var_1_30 - var_1_71);
   }
  }
 }
 if (var_1_66 <= var_1_90) {
  var_1_79 = ((((((((last_1_var_1_79) > ((var_1_30 - var_1_41))) ? (last_1_var_1_79) : ((var_1_30 - var_1_41))))) > (((((-10) < 0 ) ? -(-10) : (-10))))) ? (((((last_1_var_1_79) > ((var_1_30 - var_1_41))) ? (last_1_var_1_79) : ((var_1_30 - var_1_41))))) : (((((-10) < 0 ) ? -(-10) : (-10))))));
 } else {
  if ((var_1_40 + var_1_3) >= (-8 + var_1_82)) {
   if (var_1_7) {
    if (var_1_48) {
     var_1_79 = var_1_59;
    } else {
     var_1_79 = ((((var_1_1) < (var_1_20)) ? (var_1_1) : (var_1_20)));
    }
   } else {
    var_1_79 = ((((((var_1_16 - var_1_19)) < ((5 - var_1_44))) ? ((var_1_16 - var_1_19)) : ((5 - var_1_44)))) + last_1_var_1_79);
   }
  }
 }
 if (var_1_79 > var_1_4) {
  var_1_8 = (((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < 0 ) ? -((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) : ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))));
 }
 signed long int stepLocal_6 = - (var_1_47 + 8);
 if (var_1_94) {
  if (var_1_18 != stepLocal_6) {
   var_1_27 = ((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)));
  }
 } else {
  var_1_27 = var_1_22;
 }
 unsigned long int stepLocal_13 = var_1_35 - (var_1_79 + var_1_18);
 unsigned char stepLocal_12 = var_1_17;
 unsigned long int stepLocal_11 = var_1_32;
 signed long int stepLocal_10 = var_1_46 % var_1_16;
 if (stepLocal_12 <= var_1_19) {
  if (var_1_97 > stepLocal_13) {
   if (((var_1_88 + var_1_18) / var_1_16) <= stepLocal_11) {
    var_1_37 = ((((((var_1_40 + var_1_41) - var_1_42)) > (((((((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) < (25)) ? (((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) : (25))))) ? (((var_1_40 + var_1_41) - var_1_42)) : (((((((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) < (25)) ? (((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) : (25))))));
   } else {
    var_1_37 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
   }
  } else {
   var_1_37 = (var_1_40 + (((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))) - (var_1_45 + var_1_46)));
  }
 } else {
  if (((((var_1_71) < (0u)) ? (var_1_71) : (0u))) >= stepLocal_10) {
   if (var_1_5) {
    var_1_37 = ((((var_1_46) < (var_1_40)) ? (var_1_46) : (var_1_40)));
   } else {
    var_1_37 = (var_1_40 + ((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45))));
   }
  } else {
   var_1_37 = ((var_1_44 + var_1_45) - ((((((((var_1_46) < (var_1_41)) ? (var_1_46) : (var_1_41)))) > (var_1_42)) ? (((((var_1_46) < (var_1_41)) ? (var_1_46) : (var_1_41)))) : (var_1_42))));
  }
 }
 if (var_1_51) {
  if ((var_1_17 - (var_1_44 + var_1_45)) != var_1_20) {
   var_1_60 = ((((((((var_1_12) < (var_1_56)) ? (var_1_12) : (var_1_56)))) > (var_1_26)) ? (((((var_1_12) < (var_1_56)) ? (var_1_12) : (var_1_56)))) : (var_1_26)));
  } else {
   if (var_1_78 < var_1_4) {
    var_1_60 = ((((((32.75f) > (var_1_13)) ? (32.75f) : (var_1_13))) + ((((var_1_24) < (var_1_12)) ? (var_1_24) : (var_1_12)))) - var_1_25);
   } else {
    var_1_60 = ((var_1_24 + var_1_12) - ((((var_1_58) > (((((var_1_26) < (var_1_56)) ? (var_1_26) : (var_1_56))))) ? (var_1_58) : (((((var_1_26) < (var_1_56)) ? (var_1_26) : (var_1_56)))))));
   }
  }
 } else {
  var_1_60 = (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - ((var_1_24 - var_1_25) + ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))));
 }
 if (var_1_5) {
  var_1_105 = var_1_78;
 }
 signed long int stepLocal_4 = 1000 / (var_1_16 + var_1_18);
 signed short int stepLocal_3 = var_1_47;
 if (var_1_60 > var_1_11) {
  if (var_1_11 >= var_1_13) {
   var_1_15 = (var_1_16 - var_1_17);
  } else {
   if (stepLocal_3 < var_1_9) {
    if (stepLocal_4 < -50) {
     var_1_15 = (var_1_17 + var_1_19);
    }
   } else {
    var_1_15 = (((((var_1_17 + var_1_19)) < (var_1_16)) ? ((var_1_17 + var_1_19)) : (var_1_16)));
   }
  }
 } else {
  var_1_15 = var_1_19;
 }
 if (var_1_95 <= var_1_61) {
  var_1_62 = (var_1_51 || var_1_50);
 } else {
  if (-25 != ((((var_1_105) < 0 ) ? -(var_1_105) : (var_1_105)))) {
   var_1_62 = (! (! var_1_49));
  }
 }
 if (var_1_62) {
  var_1_99 = var_1_43;
 } else {
  var_1_99 = var_1_100;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -126);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 2305843.009213691400e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 32767);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 536870911);
 assume_abort_if_not(var_1_32 <= 1073741824);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 536870912);
 assume_abort_if_not(var_1_33 <= 1073741823);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 536870911);
 assume_abort_if_not(var_1_34 <= 1073741823);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 1073741823);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -127);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 32);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 31);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= 4611686.018427383000e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 4611686.018427383000e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 4611686.018427383000e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= -128);
 assume_abort_if_not(var_1_64 <= 127);
 assume_abort_if_not(var_1_64 != 0);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 127);
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 16383);
 assume_abort_if_not(var_1_67 <= 32767);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 8192);
 assume_abort_if_not(var_1_69 <= 16384);
 var_1_74 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_74 >= -1073741823);
 assume_abort_if_not(var_1_74 <= 1073741823);
 var_1_77 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854766000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_84 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_84 >= -461168.6018427383000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427383000e+12F && var_1_84 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_85 >= 0.0F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 2305843.009213691400e+12F && var_1_85 >= 1.0e-20F ));
 var_1_89 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_89 >= 1073741823);
 assume_abort_if_not(var_1_89 <= 2147483647);
 var_1_91 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_91 >= 1073741823);
 assume_abort_if_not(var_1_91 <= 2147483647);
 var_1_100 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_100 >= -32767);
 assume_abort_if_not(var_1_100 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_104 = var_1_104;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_5 ? (var_1_1 == ((signed long int) (var_1_3 - var_1_4))) : (var_1_1 == ((signed long int) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))))) && ((var_1_3 <= last_1_var_1_78) ? (var_1_5 == ((unsigned char) (var_1_6 && (last_1_var_1_94 || var_1_7)))) : ((var_1_3 == var_1_4) ? (var_1_5 == ((unsigned char) (var_1_7 && var_1_6))) : 1))) && ((var_1_79 > var_1_4) ? (var_1_8 == ((signed char) (((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) < 0 ) ? -((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) : ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))))) : 1)) && ((var_1_9 > var_1_3) ? (var_1_10 == ((float) (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - (var_1_12 + var_1_13)))) : (var_1_10 == ((float) (var_1_13 - var_1_12))))) && (((var_1_13 - var_1_12) <= var_1_53) ? (var_1_14 == ((signed short int) (var_1_110 + var_1_9))) : 1)) && ((var_1_60 > var_1_11) ? ((var_1_11 >= var_1_13) ? (var_1_15 == ((unsigned char) (var_1_16 - var_1_17))) : ((var_1_47 < var_1_9) ? (((1000 / (var_1_16 + var_1_18)) < -50) ? (var_1_15 == ((unsigned char) (var_1_17 + var_1_19))) : 1) : (var_1_15 == ((unsigned char) (((((var_1_17 + var_1_19)) < (var_1_16)) ? ((var_1_17 + var_1_19)) : (var_1_16))))))) : (var_1_15 == ((unsigned char) var_1_19)))) && ((var_1_11 > (((((var_1_12 * 15.2f)) > (((((var_1_13) > (var_1_83)) ? (var_1_13) : (var_1_83))))) ? ((var_1_12 * 15.2f)) : (((((var_1_13) > (var_1_83)) ? (var_1_13) : (var_1_83))))))) ? (var_1_20 == ((unsigned long int) (var_1_18 + (1743735276u - var_1_16)))) : (var_1_20 == ((unsigned long int) ((((5u) < (32u)) ? (5u) : (32u))))))) && ((! var_1_7) ? ((5 <= (var_1_4 * var_1_9)) ? (var_1_21 == ((float) (var_1_12 + (var_1_22 + var_1_23)))) : (var_1_21 == ((float) (var_1_12 + (var_1_13 - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))))) : (var_1_21 == ((float) ((var_1_12 + (var_1_24 - var_1_25)) - (var_1_13 + var_1_26)))))) && (var_1_94 ? ((var_1_18 != (- (var_1_47 + 8))) ? (var_1_27 == ((float) ((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24))))) : 1) : (var_1_27 == ((float) var_1_22)))) && ((var_1_9 >= var_1_68) ? (((var_1_68 / var_1_16) != var_1_97) ? (var_1_28 == ((unsigned short int) (var_1_30 - 8))) : (var_1_28 == ((unsigned short int) (var_1_68 + var_1_19)))) : 1)) && ((var_1_6 || var_1_48) ? (var_1_48 ? ((var_1_90 != var_1_30) ? ((var_1_4 <= var_1_109) ? (var_1_31 == ((unsigned long int) (((var_1_32 + var_1_33) - (var_1_34 - var_1_18)) + var_1_16))) : (var_1_31 == ((unsigned long int) (var_1_4 + var_1_33)))) : (var_1_31 == ((unsigned long int) ((((var_1_33 + ((((var_1_96) > (var_1_4)) ? (var_1_96) : (var_1_4)))) < 0 ) ? -(var_1_33 + ((((var_1_96) > (var_1_4)) ? (var_1_96) : (var_1_4)))) : (var_1_33 + ((((var_1_96) > (var_1_4)) ? (var_1_96) : (var_1_4))))))))) : (var_1_31 == ((unsigned long int) ((((var_1_35 - (var_1_36 - var_1_18)) < 0 ) ? -(var_1_35 - (var_1_36 - var_1_18)) : (var_1_35 - (var_1_36 - var_1_18))))))) : (var_1_31 == ((unsigned long int) var_1_18)))) && ((var_1_17 <= var_1_19) ? ((var_1_97 > (var_1_35 - (var_1_79 + var_1_18))) ? ((((var_1_88 + var_1_18) / var_1_16) <= var_1_32) ? (var_1_37 == ((signed char) ((((((var_1_40 + var_1_41) - var_1_42)) > (((((((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) < (25)) ? (((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) : (25))))) ? (((var_1_40 + var_1_41) - var_1_42)) : (((((((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) < (25)) ? (((((var_1_9) < (var_1_43)) ? (var_1_9) : (var_1_43)))) : (25)))))))) : (var_1_37 == ((signed char) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) : (var_1_37 == ((signed char) (var_1_40 + (((((var_1_41) > (var_1_44)) ? (var_1_41) : (var_1_44))) - (var_1_45 + var_1_46)))))) : ((((((var_1_71) < (0u)) ? (var_1_71) : (0u))) >= (var_1_46 % var_1_16)) ? (var_1_5 ? (var_1_37 == ((signed char) ((((var_1_46) < (var_1_40)) ? (var_1_46) : (var_1_40))))) : (var_1_37 == ((signed char) (var_1_40 + ((((var_1_41) > (var_1_45)) ? (var_1_41) : (var_1_45))))))) : (var_1_37 == ((signed char) ((var_1_44 + var_1_45) - ((((((((var_1_46) < (var_1_41)) ? (var_1_46) : (var_1_41)))) > (var_1_42)) ? (((((var_1_46) < (var_1_41)) ? (var_1_46) : (var_1_41)))) : (var_1_42))))))))) && (var_1_47 == ((signed short int) (((((var_1_19 + ((((var_1_88) < (var_1_46)) ? (var_1_88) : (var_1_46))))) < (var_1_97)) ? ((var_1_19 + ((((var_1_88) < (var_1_46)) ? (var_1_88) : (var_1_46))))) : (var_1_97)))))) && ((! (var_1_26 < var_1_23)) ? (var_1_48 == ((unsigned char) (var_1_49 || (var_1_50 || var_1_51)))) : (var_1_48 == ((unsigned char) (var_1_50 || var_1_51))))) && ((var_1_23 < ((var_1_11 + var_1_25) + var_1_26)) ? ((var_1_23 <= var_1_26) ? (var_1_52 == ((signed char) (var_1_46 - var_1_41))) : (var_1_52 == ((signed char) var_1_9))) : (var_1_52 == ((signed char) ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))) && (var_1_50 ? (var_1_53 == ((double) (var_1_24 - var_1_13))) : 1)) && ((var_1_50 || ((var_1_26 < var_1_24) && var_1_6)) ? ((var_1_72 >= (((((var_1_30 * var_1_36)) > ((37960 - var_1_16))) ? ((var_1_30 * var_1_36)) : ((37960 - var_1_16))))) ? ((var_1_3 != var_1_71) ? (var_1_54 == ((signed short int) (((((((((var_1_1) > (var_1_16)) ? (var_1_1) : (var_1_16))) - var_1_19)) > ((((((var_1_40 + var_1_44)) < (var_1_43)) ? ((var_1_40 + var_1_44)) : (var_1_43))))) ? ((((((var_1_1) > (var_1_16)) ? (var_1_1) : (var_1_16))) - var_1_19)) : ((((((var_1_40 + var_1_44)) < (var_1_43)) ? ((var_1_40 + var_1_44)) : (var_1_43)))))))) : 1) : (var_1_54 == ((signed short int) var_1_46))) : 1)) && ((((var_1_12 / var_1_24) < var_1_53) || var_1_7) ? (var_1_55 == ((float) ((var_1_56 - var_1_24) - (((((var_1_57) < (var_1_58)) ? (var_1_57) : (var_1_58))) - (2.8070132764376924E18f - var_1_25))))) : (var_1_55 == ((float) var_1_57)))) && (((- var_1_109) >= ((((var_1_42) > (1)) ? (var_1_42) : (1)))) ? (var_1_59 == ((unsigned short int) ((((((((var_1_30) < (var_1_45)) ? (var_1_30) : (var_1_45)))) > (var_1_19)) ? (((((var_1_30) < (var_1_45)) ? (var_1_30) : (var_1_45)))) : (var_1_19))))) : 1)) && (var_1_51 ? (((var_1_17 - (var_1_44 + var_1_45)) != var_1_20) ? (var_1_60 == ((float) ((((((((var_1_12) < (var_1_56)) ? (var_1_12) : (var_1_56)))) > (var_1_26)) ? (((((var_1_12) < (var_1_56)) ? (var_1_12) : (var_1_56)))) : (var_1_26))))) : ((var_1_78 < var_1_4) ? (var_1_60 == ((float) ((((((32.75f) > (var_1_13)) ? (32.75f) : (var_1_13))) + ((((var_1_24) < (var_1_12)) ? (var_1_24) : (var_1_12)))) - var_1_25))) : (var_1_60 == ((float) ((var_1_24 + var_1_12) - ((((var_1_58) > (((((var_1_26) < (var_1_56)) ? (var_1_26) : (var_1_56))))) ? (var_1_58) : (((((var_1_26) < (var_1_56)) ? (var_1_26) : (var_1_56))))))))))) : (var_1_60 == ((float) (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - ((var_1_24 - var_1_25) + ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))))) && (var_1_6 ? (((var_1_44 & var_1_96) >= 10000000) ? (var_1_61 == ((float) ((((var_1_58) > (var_1_56)) ? (var_1_58) : (var_1_56))))) : 1) : 1)) && ((var_1_95 <= var_1_61) ? (var_1_62 == ((unsigned char) (var_1_51 || var_1_50))) : ((-25 != ((((var_1_105) < 0 ) ? -(var_1_105) : (var_1_105)))) ? (var_1_62 == ((unsigned char) (! (! var_1_49)))) : 1))) && ((var_1_103 > var_1_13) ? (var_1_63 == ((unsigned char) (((((((((var_1_46) < (var_1_65)) ? (var_1_46) : (var_1_65)))) < (var_1_19)) ? (((((var_1_46) < (var_1_65)) ? (var_1_46) : (var_1_65)))) : (var_1_19))) + ((((var_1_45) < (var_1_40)) ? (var_1_45) : (var_1_40)))))) : (var_1_63 == ((unsigned char) var_1_46)))) && ((var_1_97 != (37305 - (var_1_67 - var_1_65))) ? (var_1_66 == ((unsigned char) var_1_19)) : 1)) && (var_1_68 == ((unsigned short int) (((var_1_69 - last_1_var_1_79) + var_1_41) + last_1_var_1_14)))) && ((var_1_41 > var_1_43) ? ((var_1_41 >= var_1_46) ? (var_1_70 == ((float) (var_1_23 + (var_1_22 + ((((var_1_25) < (1.6f)) ? (var_1_25) : (1.6f))))))) : 1) : (var_1_51 ? (var_1_70 == ((float) (var_1_22 + ((((((((var_1_24) < (var_1_23)) ? (var_1_24) : (var_1_23)))) > (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) ? (((((var_1_24) < (var_1_23)) ? (var_1_24) : (var_1_23)))) : (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))))))) : (var_1_70 == ((float) (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + var_1_23)))))) && ((last_1_var_1_71 >= (var_1_32 * var_1_40)) ? ((var_1_68 <= var_1_31) ? (var_1_71 == ((unsigned long int) var_1_16)) : 1) : (var_1_5 ? (var_1_71 == ((unsigned long int) var_1_4)) : 1))) && ((var_1_96 >= var_1_32) ? (var_1_72 == ((unsigned long int) (var_1_35 - last_1_var_1_72))) : 1)) && ((var_1_5 || var_1_94) ? (var_1_73 == ((signed long int) (((((((((var_1_30 + var_1_74)) < (var_1_64)) ? ((var_1_30 + var_1_74)) : (var_1_64)))) > (var_1_40)) ? ((((((var_1_30 + var_1_74)) < (var_1_64)) ? ((var_1_30 + var_1_74)) : (var_1_64)))) : (var_1_40))))) : (var_1_73 == ((signed long int) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))))) && ((var_1_57 >= var_1_26) ? (var_1_75 == ((signed long int) 4)) : 1)) && ((var_1_18 >= (var_1_30 - (var_1_67 - var_1_19))) ? (var_1_76 == ((double) (var_1_57 - var_1_77))) : (var_1_76 == ((double) ((((var_1_58) > (var_1_11)) ? (var_1_58) : (var_1_11))))))) && (((- (32.6f * var_1_103)) > (- (- var_1_53))) ? (var_1_78 == ((signed long int) ((4 + (var_1_71 - var_1_96)) + var_1_96))) : ((var_1_103 < 128.125f) ? (var_1_78 == ((signed long int) (((((var_1_33 - (var_1_46 + var_1_82))) < (var_1_96)) ? ((var_1_33 - (var_1_46 + var_1_82))) : (var_1_96))))) : (((128 / var_1_64) < var_1_73) ? (var_1_78 == ((signed long int) (var_1_30 - var_1_71))) : 1)))) && ((var_1_66 <= var_1_90) ? (var_1_79 == ((signed long int) ((((((((last_1_var_1_79) > ((var_1_30 - var_1_41))) ? (last_1_var_1_79) : ((var_1_30 - var_1_41))))) > (((((-10) < 0 ) ? -(-10) : (-10))))) ? (((((last_1_var_1_79) > ((var_1_30 - var_1_41))) ? (last_1_var_1_79) : ((var_1_30 - var_1_41))))) : (((((-10) < 0 ) ? -(-10) : (-10)))))))) : (((var_1_40 + var_1_3) >= (-8 + var_1_82)) ? (var_1_7 ? (var_1_48 ? (var_1_79 == ((signed long int) var_1_59)) : (var_1_79 == ((signed long int) ((((var_1_1) < (var_1_20)) ? (var_1_1) : (var_1_20)))))) : (var_1_79 == ((signed long int) ((((((var_1_16 - var_1_19)) < ((5 - var_1_44))) ? ((var_1_16 - var_1_19)) : ((5 - var_1_44)))) + last_1_var_1_79)))) : 1))) && (var_1_81 == ((signed long int) (((((var_1_46 - var_1_82)) > (var_1_69)) ? ((var_1_46 - var_1_82)) : (var_1_69)))))) && ((! last_1_var_1_48) ? (((((((last_1_var_1_76 + var_1_25)) < (last_1_var_1_104)) ? ((last_1_var_1_76 + var_1_25)) : (last_1_var_1_104))) == (var_1_77 / var_1_24)) ? ((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) > (((((var_1_33 - 200)) > (last_1_var_1_78)) ? ((var_1_33 - 200)) : (last_1_var_1_78)))) ? (var_1_82 == ((signed long int) (((((last_1_var_1_68) > (var_1_46)) ? (last_1_var_1_68) : (var_1_46))) + (var_1_30 + var_1_67)))) : 1) : (var_1_82 == ((signed long int) ((((last_1_var_1_82) < 0 ) ? -(last_1_var_1_82) : (last_1_var_1_82)))))) : 1)) && ((var_1_22 < var_1_58) ? (var_1_83 == ((float) (var_1_84 + ((var_1_25 - var_1_85) + var_1_22)))) : (((((((var_1_77 - var_1_85)) > ((var_1_23 * var_1_70))) ? ((var_1_77 - var_1_85)) : ((var_1_23 * var_1_70)))) > (((((var_1_26 - var_1_57)) > (var_1_104)) ? ((var_1_26 - var_1_57)) : (var_1_104)))) ? ((var_1_90 >= (((((var_1_97 & var_1_43)) > (50)) ? ((var_1_97 & var_1_43)) : (50)))) ? (var_1_83 == ((float) ((((var_1_13) > (16.6f)) ? (var_1_13) : (16.6f))))) : (var_1_83 == ((float) (var_1_25 + var_1_26)))) : 1))) && ((! (var_1_7 && var_1_94)) ? (var_1_86 == ((unsigned long int) (var_1_30 + (var_1_16 + var_1_69)))) : ((var_1_36 > 64u) ? (var_1_86 == ((unsigned long int) ((3225801457u - (var_1_41 + var_1_30)) - var_1_19))) : (var_1_98 ? (var_1_86 == ((unsigned long int) (var_1_35 - (var_1_36 - var_1_40)))) : 1)))) && ((! var_1_98) ? (var_1_87 == ((unsigned short int) (47449 - (var_1_45 + var_1_42)))) : 1)) && ((! (var_1_104 < var_1_77)) ? (var_1_51 ? (var_1_88 == ((unsigned long int) (var_1_16 + var_1_1))) : (var_1_88 == ((unsigned long int) ((((((var_1_36) > (var_1_89)) ? (var_1_36) : (var_1_89))) - var_1_34) + var_1_33)))) : 1)) && ((var_1_57 <= (var_1_13 * var_1_53)) ? (var_1_90 == ((unsigned long int) (var_1_35 - ((((var_1_91 - var_1_42) < 0 ) ? -(var_1_91 - var_1_42) : (var_1_91 - var_1_42)))))) : (var_1_49 ? (var_1_90 == ((unsigned long int) (var_1_32 + var_1_67))) : (var_1_90 == ((unsigned long int) (var_1_35 - (var_1_69 + ((((var_1_17) < (4u)) ? (var_1_17) : (4u)))))))))) && ((var_1_70 > (var_1_77 + var_1_70)) ? (((- var_1_88) <= var_1_40) ? ((var_1_50 && (var_1_104 <= 256.3f)) ? (var_1_92 == ((float) var_1_11)) : 1) : (var_1_92 == ((float) var_1_24))) : (var_1_92 == ((float) 1.375f)))) && (var_1_49 ? (var_1_94 == ((unsigned char) var_1_6)) : 1)) && (var_1_7 ? (var_1_95 == ((double) var_1_25)) : (var_1_95 == ((double) var_1_26)))) && (var_1_94 ? (var_1_96 == ((unsigned short int) var_1_44)) : 1)) && (var_1_97 == ((unsigned long int) var_1_69))) && (last_1_var_1_98 ? (var_1_98 == ((unsigned char) var_1_50)) : (var_1_98 == ((unsigned char) var_1_7)))) && (var_1_62 ? (var_1_99 == ((signed short int) var_1_43)) : (var_1_99 == ((signed short int) var_1_100)))) && (var_1_7 ? (var_1_101 == ((float) var_1_22)) : (var_1_101 == ((float) var_1_26)))) && (var_1_102 == ((signed char) var_1_46))) && (var_1_103 == ((float) var_1_25))) && (var_1_98 ? (var_1_104 == ((double) var_1_85)) : 1)) && (var_1_5 ? (var_1_105 == ((signed short int) var_1_78)) : 1)) && (var_1_98 ? (var_1_106 == ((signed char) var_1_40)) : 1)) && (((var_1_81 / var_1_36) < var_1_97) ? (var_1_107 == ((unsigned short int) (var_1_46 + ((((var_1_69) < (var_1_19)) ? (var_1_69) : (var_1_19)))))) : (var_1_107 == ((unsigned short int) (var_1_30 - var_1_17))))) && (var_1_109 == ((unsigned long int) var_1_67))) && (var_1_110 == ((signed short int) var_1_72))
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
