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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1000000;
unsigned long int var_1_5 = 256;
unsigned long int var_1_6 = 1671053646;
unsigned long int var_1_7 = 1718233525;
unsigned long int var_1_8 = 2454441025;
unsigned long int var_1_9 = 16;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
float var_1_14 = 10.75;
float var_1_15 = 2.2;
float var_1_16 = 16.2;
float var_1_17 = 0.0;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 25;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
float var_1_30 = 9.875;
float var_1_31 = 10.2;
float var_1_32 = 5.6;
float var_1_33 = 3.6;
float var_1_34 = 10.5;
float var_1_35 = 8.208;
float var_1_36 = 64.5;
unsigned long int var_1_37 = 32;
unsigned long int var_1_39 = 1846313307;
unsigned short int var_1_41 = 32;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
signed long int var_1_44 = -4;
float var_1_45 = 4.5;
unsigned short int var_1_46 = 16;
unsigned short int var_1_47 = 64;
unsigned short int var_1_48 = 35773;
unsigned short int var_1_49 = 16;
unsigned short int var_1_50 = 10000;
unsigned short int var_1_51 = 10000;
unsigned short int var_1_52 = 25828;
float var_1_53 = 200.55;
float var_1_54 = 0.0;
signed short int var_1_55 = 0;
unsigned long int var_1_56 = 5;
signed short int var_1_57 = -100;
unsigned char var_1_58 = 5;
unsigned long int var_1_59 = 1;
unsigned long int var_1_61 = 25;
unsigned char var_1_62 = 1;
double var_1_63 = 9999.75;
unsigned long int var_1_64 = 64;
double var_1_65 = 99999999.675;
signed long int var_1_66 = -2;
float var_1_67 = 24.25;
signed char var_1_68 = 25;
signed char var_1_70 = -8;
signed char var_1_71 = 1;
double var_1_72 = 10.125;
unsigned char var_1_73 = 1;
signed long int var_1_74 = 1;
signed long int var_1_75 = 4;
unsigned char var_1_76 = 0;
unsigned short int var_1_77 = 1;
signed char var_1_78 = 2;
signed short int var_1_79 = 16;
signed short int var_1_80 = 64;
unsigned short int var_1_81 = 8;
unsigned short int var_1_82 = 10;
float var_1_83 = 5.1;
float var_1_84 = 1.75;
float var_1_85 = 64.2;
signed short int var_1_86 = 2;
float var_1_87 = 63.8;
unsigned long int var_1_88 = 3713098131;
unsigned char var_1_91 = 200;
float var_1_92 = 16.25;
signed char var_1_93 = -2;
signed char var_1_94 = -64;
unsigned char var_1_95 = 1;
unsigned long int var_1_96 = 0;
unsigned char var_1_97 = 128;
double var_1_98 = 500.7;
signed short int var_1_99 = 100;
signed long int var_1_100 = -10000000;
signed long int var_1_101 = 500;
double var_1_102 = 0.6;
signed short int var_1_103 = 256;
signed long int var_1_104 = -5;
signed char var_1_105 = -25;
unsigned short int var_1_106 = 5;
float var_1_107 = 4.7;
unsigned long int last_1_var_1_18 = 1;
unsigned long int last_1_var_1_37 = 32;
unsigned long int last_1_var_1_56 = 5;
signed short int last_1_var_1_57 = -100;
unsigned long int last_1_var_1_59 = 1;
unsigned char last_1_var_1_62 = 1;
unsigned long int last_1_var_1_64 = 64;
signed long int last_1_var_1_66 = -2;
unsigned char last_1_var_1_73 = 1;
signed char last_1_var_1_78 = 2;
signed short int last_1_var_1_80 = 64;
signed char last_1_var_1_93 = -2;
unsigned long int last_1_var_1_96 = 0;
signed long int last_1_var_1_100 = -10000000;
unsigned short int last_1_var_1_106 = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = last_1_var_1_93 * last_1_var_1_78;
 if (var_1_13) {
  var_1_18 = ((((((((var_1_8 - var_1_9) < 0 ) ? -(var_1_8 - var_1_9) : (var_1_8 - var_1_9)))) > ((((((var_1_7 + var_1_6)) > (var_1_5)) ? ((var_1_7 + var_1_6)) : (var_1_5))))) ? (((((var_1_8 - var_1_9) < 0 ) ? -(var_1_8 - var_1_9) : (var_1_8 - var_1_9)))) : ((((((var_1_7 + var_1_6)) > (var_1_5)) ? ((var_1_7 + var_1_6)) : (var_1_5))))));
 } else {
  if (stepLocal_2 < var_1_9) {
   var_1_18 = ((((var_1_7) < ((((((var_1_9 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_9 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u)))))))) ? (var_1_7) : ((((((var_1_9 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_9 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u)))))))));
  } else {
   var_1_18 = ((((((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) < (var_1_7)) ? (((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) : (var_1_7)));
  }
 }
 unsigned char stepLocal_23 = var_1_23;
 if (stepLocal_23 >= var_1_18) {
  var_1_78 = (((((var_1_75 - (var_1_74 + var_1_25))) > (-2)) ? ((var_1_75 - (var_1_74 + var_1_25))) : (-2)));
 }
 unsigned long int stepLocal_0 = (last_1_var_1_64 & var_1_6) / var_1_8;
 if (last_1_var_1_18 < stepLocal_0) {
  var_1_11 = (last_1_var_1_62 || (! var_1_13));
 }
 unsigned long int stepLocal_17 = last_1_var_1_56;
 signed long int stepLocal_16 = last_1_var_1_106;
 unsigned long int stepLocal_15 = last_1_var_1_56;
 unsigned char stepLocal_14 = var_1_43;
 if (last_1_var_1_73) {
  if ((last_1_var_1_59 * var_1_22) >= stepLocal_17) {
   if ((last_1_var_1_59 > var_1_22) && stepLocal_14) {
    if (stepLocal_16 < ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) {
     var_1_59 = ((((var_1_9) > (((((last_1_var_1_59) > (var_1_51)) ? (last_1_var_1_59) : (var_1_51))))) ? (var_1_9) : (((((last_1_var_1_59) > (var_1_51)) ? (last_1_var_1_59) : (var_1_51))))));
    } else {
     var_1_59 = (var_1_21 + ((((last_1_var_1_37) < ((var_1_24 + last_1_var_1_66))) ? (last_1_var_1_37) : ((var_1_24 + last_1_var_1_66)))));
    }
   } else {
    var_1_59 = (var_1_8 - (var_1_6 - var_1_52));
   }
  } else {
   if (var_1_35 >= ((((var_1_31) > (var_1_17)) ? (var_1_31) : (var_1_17)))) {
    if (stepLocal_15 > var_1_24) {
     var_1_59 = (var_1_61 + (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) + 128u));
    } else {
     var_1_59 = ((((((((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25)))) > (((((((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) > (last_1_var_1_66)) ? (((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) : (last_1_var_1_66))))) ? (((((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25)))) : (((((((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) > (last_1_var_1_66)) ? (((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) : (last_1_var_1_66))))));
    }
   } else {
    var_1_59 = ((var_1_39 - last_1_var_1_37) + last_1_var_1_66);
   }
  }
 } else {
  var_1_59 = (((((5u) > (var_1_20)) ? (5u) : (var_1_20))) + (var_1_6 - (var_1_48 + 256u)));
 }
 if (! (var_1_13 && (500 < last_1_var_1_59))) {
  var_1_42 = 1;
 } else {
  var_1_42 = var_1_43;
 }
 unsigned long int stepLocal_1 = var_1_7;
 if (var_1_5 >= stepLocal_1) {
  var_1_14 = (50.25f - (var_1_15 + var_1_16));
 } else {
  var_1_14 = ((var_1_17 - ((((63.875f) > (var_1_15)) ? (63.875f) : (var_1_15)))) - var_1_16);
 }
 if (var_1_13) {
  var_1_19 = ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)));
 } else {
  var_1_19 = (var_1_22 - ((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25)))));
 }
 var_1_26 = (var_1_13 || ((var_1_27 || var_1_28) || var_1_29));
 signed long int stepLocal_4 = var_1_24 - 10;
 if (stepLocal_4 >= var_1_18) {
  var_1_41 = var_1_24;
 }
 unsigned long int stepLocal_18 = 256 & var_1_39;
 if (-10 <= stepLocal_18) {
  var_1_63 = ((((((((127.6) < (var_1_15)) ? (127.6) : (var_1_15)))) > (var_1_36)) ? (((((127.6) < (var_1_15)) ? (127.6) : (var_1_15)))) : (var_1_36)));
 }
 if (var_1_16 < var_1_34) {
  var_1_64 = last_1_var_1_64;
 } else {
  var_1_64 = (var_1_61 + 500u);
 }
 if (var_1_26) {
  if (var_1_6 == (((((64u) > (var_1_61)) ? (64u) : (var_1_61))) % var_1_24)) {
   var_1_65 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
  } else {
   var_1_65 = ((var_1_35 - var_1_15) + (var_1_36 - var_1_16));
  }
 }
 unsigned long int stepLocal_20 = ((((var_1_25) < (var_1_5)) ? (var_1_25) : (var_1_5))) ^ var_1_39;
 if (var_1_59 <= stepLocal_20) {
  var_1_68 = (((((var_1_25 + var_1_70)) > (var_1_71)) ? ((var_1_25 + var_1_70)) : (var_1_71)));
 }
 unsigned char stepLocal_22 = var_1_32 > 256.8f;
 if (var_1_43 && stepLocal_22) {
  var_1_77 = (var_1_75 + 1);
 } else {
  var_1_77 = 25;
 }
 signed long int stepLocal_25 = -10000000;
 if (var_1_75 <= stepLocal_25) {
  var_1_80 = (((((((((5) < 0 ) ? -(5) : (5)))) < (4)) ? (((((5) < 0 ) ? -(5) : (5)))) : (4))) - last_1_var_1_80);
 }
 unsigned char stepLocal_27 = var_1_42;
 if (var_1_11 || stepLocal_27) {
  var_1_86 = ((((((var_1_74 + var_1_80)) > (var_1_22)) ? ((var_1_74 + var_1_80)) : (var_1_22))) - var_1_20);
 }
 if (var_1_6 <= var_1_64) {
  var_1_91 = var_1_22;
 } else {
  var_1_91 = var_1_25;
 }
 var_1_92 = var_1_54;
 if (var_1_13) {
  var_1_93 = var_1_94;
 } else {
  var_1_93 = var_1_75;
 }
 var_1_95 = var_1_20;
 if (var_1_13) {
  var_1_97 = var_1_25;
 }
 if (var_1_76) {
  var_1_98 = var_1_16;
 }
 if (var_1_29) {
  var_1_99 = var_1_23;
 }
 var_1_101 = -8;
 if (var_1_76) {
  var_1_102 = var_1_16;
 }
 if (var_1_26) {
  var_1_104 = var_1_25;
 } else {
  var_1_104 = var_1_22;
 }
 var_1_106 = var_1_50;
 var_1_107 = var_1_17;
 if ((var_1_48 + var_1_104) == (var_1_20 - var_1_51)) {
  if (var_1_39 > var_1_64) {
   var_1_62 = (! var_1_43);
  } else {
   var_1_62 = (! (var_1_11 || var_1_43));
  }
 }
 if (var_1_42) {
  var_1_100 = last_1_var_1_100;
 } else {
  var_1_100 = var_1_64;
 }
 if (var_1_100 >= 128) {
  var_1_82 = ((((((var_1_22 + var_1_75) + var_1_74)) < (10)) ? (((var_1_22 + var_1_75) + var_1_74)) : (10)));
 }
 if (var_1_27) {
  var_1_103 = var_1_70;
 } else {
  var_1_103 = var_1_82;
 }
 if (var_1_26) {
  if (! (var_1_86 != var_1_82)) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_9);
  }
 } else {
  if (var_1_26) {
   var_1_1 = ((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5)));
  } else {
   var_1_1 = var_1_7;
  }
 }
 if ((var_1_32 * var_1_35) < var_1_15) {
  if (((var_1_32 + var_1_17) / var_1_45) <= var_1_36) {
   if (((10.5f + var_1_35) * var_1_36) <= var_1_32) {
    var_1_44 = (var_1_22 + var_1_23);
   } else {
    var_1_44 = var_1_99;
   }
  } else {
   var_1_44 = (var_1_21 - (1 + var_1_95));
  }
 }
 unsigned long int stepLocal_9 = var_1_64 * var_1_24;
 if (stepLocal_9 > (var_1_8 - 16u)) {
  var_1_53 = (var_1_35 + var_1_16);
 } else {
  var_1_53 = (var_1_16 - (var_1_54 - var_1_15));
 }
 if (var_1_62) {
  var_1_55 = var_1_50;
 }
 unsigned char stepLocal_13 = var_1_62;
 unsigned long int stepLocal_12 = var_1_5;
 if (var_1_28 && stepLocal_13) {
  var_1_57 = (((var_1_21 + last_1_var_1_57) + ((((50) < (var_1_24)) ? (50) : (var_1_24)))) + (var_1_77 + var_1_25));
 } else {
  if (stepLocal_12 >= var_1_64) {
   var_1_57 = (var_1_59 - 32);
  }
 }
 if (128 != var_1_9) {
  if (var_1_39 > (- var_1_52)) {
   var_1_72 = (((((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36))) < 0 ) ? -((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36))) : ((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36)))));
  } else {
   if (var_1_62) {
    var_1_72 = var_1_54;
   }
  }
 } else {
  var_1_72 = 10.6;
 }
 unsigned long int stepLocal_24 = var_1_18;
 if ((- 7.172) > (var_1_63 + (var_1_35 / var_1_45))) {
  if ((var_1_24 + var_1_101) <= stepLocal_24) {
   var_1_79 = var_1_25;
  } else {
   var_1_79 = ((((-16) > (var_1_70)) ? (-16) : (var_1_70)));
  }
 }
 if (var_1_62) {
  var_1_96 = var_1_25;
 } else {
  var_1_96 = var_1_48;
 }
 signed long int stepLocal_21 = 1 << ((((var_1_74) < (var_1_75)) ? (var_1_74) : (var_1_75)));
 if (stepLocal_21 < var_1_100) {
  var_1_73 = ((! (! var_1_43)) && (! (! var_1_76)));
 }
 unsigned long int stepLocal_11 = (var_1_44 - 5) * var_1_96;
 unsigned char stepLocal_10 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) >= var_1_24;
 if (var_1_42 || stepLocal_10) {
  var_1_56 = ((((var_1_20) < (25u)) ? (var_1_20) : (25u)));
 } else {
  if ((var_1_23 << var_1_24) <= stepLocal_11) {
   var_1_56 = (2640943014u - (((((var_1_52 + var_1_51)) < (var_1_21)) ? ((var_1_52 + var_1_51)) : (var_1_21))));
  } else {
   var_1_56 = ((var_1_6 + var_1_7) - var_1_52);
  }
 }
 if ((var_1_8 - var_1_39) == var_1_77) {
  var_1_58 = var_1_23;
 } else {
  if (var_1_73 || var_1_43) {
   var_1_58 = ((((((64) < 0 ) ? -(64) : (64))) - var_1_25) + var_1_23);
  } else {
   var_1_58 = (var_1_22 - ((((var_1_23) > (var_1_25)) ? (var_1_23) : (var_1_25))));
  }
 }
 if (var_1_72 >= var_1_102) {
  var_1_67 = (var_1_35 + var_1_34);
 } else {
  if (! var_1_26) {
   var_1_67 = var_1_15;
  }
 }
 unsigned long int stepLocal_26 = (((((((var_1_1) > (32)) ? (var_1_1) : (32)))) > ((var_1_104 * var_1_18))) ? (((((var_1_1) > (32)) ? (var_1_1) : (32)))) : ((var_1_104 * var_1_18)));
 if (var_1_56 != stepLocal_26) {
  var_1_83 = (((var_1_84 + var_1_85) + var_1_36) + var_1_34);
 } else {
  var_1_83 = (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - (var_1_35 + ((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36)))));
 }
 unsigned char stepLocal_19 = var_1_13;
 if (var_1_73 || stepLocal_19) {
  var_1_66 = (((((((((var_1_44) < (var_1_103)) ? (var_1_44) : (var_1_103)))) < (var_1_23)) ? (((((var_1_44) < (var_1_103)) ? (var_1_44) : (var_1_103)))) : (var_1_23))) - var_1_48);
 }
 unsigned char stepLocal_3 = var_1_25;
 if (stepLocal_3 > var_1_64) {
  if (! ((var_1_17 + var_1_83) > (var_1_16 - var_1_15))) {
   if ((var_1_16 * (var_1_17 / 128.75f)) > ((var_1_15 + var_1_31) - var_1_32)) {
    var_1_30 = (var_1_15 - var_1_31);
   } else {
    var_1_30 = (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_33);
   }
  } else {
   var_1_30 = (var_1_16 + (var_1_34 + (var_1_35 - var_1_36)));
  }
 }
 unsigned char stepLocal_5 = var_1_28;
 if (var_1_73) {
  if (var_1_32 <= var_1_98) {
   var_1_46 = (var_1_47 + (var_1_20 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))));
  } else {
   var_1_46 = (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))));
  }
 } else {
  if (var_1_29 && stepLocal_5) {
   var_1_46 = (((((var_1_48 - var_1_22)) > (((((var_1_25) < (var_1_66)) ? (var_1_25) : (var_1_66))))) ? ((var_1_48 - var_1_22)) : (((((var_1_25) < (var_1_66)) ? (var_1_25) : (var_1_66))))));
  } else {
   var_1_46 = ((((var_1_23) < (16)) ? (var_1_23) : (16)));
  }
 }
 unsigned short int stepLocal_8 = var_1_77;
 unsigned char stepLocal_7 = var_1_20;
 unsigned long int stepLocal_6 = (2412700709u - var_1_21) * var_1_46;
 if (var_1_64 >= stepLocal_7) {
  if (stepLocal_6 != var_1_7) {
   if (! var_1_43) {
    var_1_49 = ((((var_1_23) < (var_1_48)) ? (var_1_23) : (var_1_48)));
   } else {
    if (stepLocal_8 > 16) {
     var_1_49 = (var_1_20 + var_1_22);
    } else {
     var_1_49 = (((var_1_50 + var_1_51) + (var_1_52 - var_1_25)) - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))));
    }
   }
  } else {
   var_1_49 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
  }
 }
 signed short int stepLocal_32 = var_1_80;
 unsigned long int stepLocal_31 = var_1_8 * var_1_20;
 if (stepLocal_31 != var_1_66) {
  if (stepLocal_32 == var_1_96) {
   var_1_105 = (((((var_1_74) < (var_1_25)) ? (var_1_74) : (var_1_25))) - 8);
  } else {
   var_1_105 = var_1_75;
  }
 }
 if (var_1_21 > var_1_25) {
  if (1 >= var_1_20) {
   if (var_1_20 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) {
    var_1_37 = ((var_1_7 + var_1_39) - var_1_21);
   } else {
    var_1_37 = (var_1_8 - var_1_66);
   }
  } else {
   var_1_37 = ((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24)));
  }
 } else {
  if (((1 << var_1_23) | var_1_59) < (var_1_7 * var_1_66)) {
   var_1_37 = (((((((((var_1_9) < (var_1_39)) ? (var_1_9) : (var_1_39)))) < (var_1_22)) ? (((((var_1_9) < (var_1_39)) ? (var_1_9) : (var_1_39)))) : (var_1_22))) + var_1_6);
  } else {
   var_1_37 = ((((((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) > (var_1_8)) ? (((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) : (var_1_8)));
  }
 }
 if (((var_1_98 + var_1_32) * var_1_54) < var_1_67) {
  if ((-128 * var_1_59) <= var_1_56) {
   var_1_81 = ((((((var_1_52 + 20754) - ((((var_1_23) > (var_1_37)) ? (var_1_23) : (var_1_37))))) < (var_1_22)) ? (((var_1_52 + 20754) - ((((var_1_23) > (var_1_37)) ? (var_1_23) : (var_1_37))))) : (var_1_22)));
  }
 } else {
  var_1_81 = (var_1_22 + 50);
 }
 unsigned char stepLocal_30 = var_1_43;
 unsigned long int stepLocal_29 = (var_1_101 + 32) + var_1_8;
 unsigned long int stepLocal_28 = ((((var_1_8) > (var_1_88)) ? (var_1_8) : (var_1_88))) - (var_1_6 - var_1_59);
 if (((((var_1_31) < (var_1_36)) ? (var_1_31) : (var_1_36))) <= var_1_84) {
  if (((var_1_81 * var_1_22) + var_1_9) >= stepLocal_28) {
   var_1_87 = ((((((((((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) < (var_1_85)) ? (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) : (var_1_85)))) > (var_1_35)) ? (((((((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) < (var_1_85)) ? (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) : (var_1_85)))) : (var_1_35)));
  } else {
   if (((((var_1_84) > (var_1_65)) ? (var_1_84) : (var_1_65))) >= var_1_98) {
    var_1_87 = var_1_84;
   } else {
    if (var_1_73 || stepLocal_30) {
     if (stepLocal_29 < var_1_25) {
      var_1_87 = ((((127.5f) < ((var_1_36 + var_1_34))) ? (127.5f) : ((var_1_36 + var_1_34))));
     } else {
      if (var_1_98 < ((((var_1_65 * var_1_17) < 0 ) ? -(var_1_65 * var_1_17) : (var_1_65 * var_1_17)))) {
       var_1_87 = var_1_36;
      } else {
       var_1_87 = ((((((9.99999999E7f) < (var_1_84)) ? (9.99999999E7f) : (var_1_84))) + (var_1_35 - var_1_36)) + ((((var_1_34) < (((((var_1_33) < (var_1_85)) ? (var_1_33) : (var_1_85))))) ? (var_1_34) : (((((var_1_33) < (var_1_85)) ? (var_1_33) : (var_1_85)))))));
      }
     }
    } else {
     var_1_87 = ((24.25f + var_1_85) + var_1_15);
    }
   }
  }
 } else {
  var_1_87 = ((((((((var_1_34 + var_1_16) < 0 ) ? -(var_1_34 + var_1_16) : (var_1_34 + var_1_16)))) > (var_1_85)) ? (((((var_1_34 + var_1_16) < 0 ) ? -(var_1_34 + var_1_16) : (var_1_34 + var_1_16)))) : (var_1_85)));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741824);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 4611686.018427383000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 127);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 63);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427388000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 1073741824);
 assume_abort_if_not(var_1_39 <= 2147483647);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
 assume_abort_if_not(var_1_45 != 0.0F);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 32767);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 32767);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 8191);
 assume_abort_if_not(var_1_50 <= 16384);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 8192);
 assume_abort_if_not(var_1_51 <= 16383);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 24575);
 assume_abort_if_not(var_1_52 <= 32767);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 4611686.018427383000e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 2147483647);
 var_1_70 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_70 >= -63);
 assume_abort_if_not(var_1_70 <= 63);
 var_1_71 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_71 >= -127);
 assume_abort_if_not(var_1_71 <= 126);
 var_1_74 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 30);
 var_1_75 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 30);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 1);
 assume_abort_if_not(var_1_76 <= 1);
 var_1_84 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_84 >= -115292.1504606845700e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 1152921.504606845700e+12F && var_1_84 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_85 >= -115292.1504606845700e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 1152921.504606845700e+12F && var_1_85 >= 1.0e-20F ));
 var_1_88 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_88 >= 2147483647);
 assume_abort_if_not(var_1_88 <= 4294967295);
 var_1_94 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_94 >= -127);
 assume_abort_if_not(var_1_94 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_78 = var_1_78;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_106 = var_1_106;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_26 ? ((! (var_1_86 != var_1_82)) ? (var_1_1 == ((unsigned long int) var_1_5)) : (var_1_1 == ((unsigned long int) ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_9)))) : (var_1_26 ? (var_1_1 == ((unsigned long int) ((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5))))) : (var_1_1 == ((unsigned long int) var_1_7)))) && ((last_1_var_1_18 < ((last_1_var_1_64 & var_1_6) / var_1_8)) ? (var_1_11 == ((unsigned char) (last_1_var_1_62 || (! var_1_13)))) : 1)) && ((var_1_5 >= var_1_7) ? (var_1_14 == ((float) (50.25f - (var_1_15 + var_1_16)))) : (var_1_14 == ((float) ((var_1_17 - ((((63.875f) > (var_1_15)) ? (63.875f) : (var_1_15)))) - var_1_16))))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((((((((var_1_8 - var_1_9) < 0 ) ? -(var_1_8 - var_1_9) : (var_1_8 - var_1_9)))) > ((((((var_1_7 + var_1_6)) > (var_1_5)) ? ((var_1_7 + var_1_6)) : (var_1_5))))) ? (((((var_1_8 - var_1_9) < 0 ) ? -(var_1_8 - var_1_9) : (var_1_8 - var_1_9)))) : ((((((var_1_7 + var_1_6)) > (var_1_5)) ? ((var_1_7 + var_1_6)) : (var_1_5)))))))) : (((last_1_var_1_93 * last_1_var_1_78) < var_1_9) ? (var_1_18 == ((unsigned long int) ((((var_1_7) < ((((((var_1_9 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_9 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u)))))))) ? (var_1_7) : ((((((var_1_9 + var_1_6)) < (((((32u) > (1u)) ? (32u) : (1u))))) ? ((var_1_9 + var_1_6)) : (((((32u) > (1u)) ? (32u) : (1u))))))))))) : (var_1_18 == ((unsigned long int) ((((((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) < (var_1_7)) ? (((((var_1_8) > (8u)) ? (var_1_8) : (8u)))) : (var_1_7)))))))) && (var_1_13 ? (var_1_19 == ((unsigned char) ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) : (var_1_19 == ((unsigned char) (var_1_22 - ((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))))))) && (var_1_26 == ((unsigned char) (var_1_13 || ((var_1_27 || var_1_28) || var_1_29))))) && ((var_1_25 > var_1_64) ? ((! ((var_1_17 + var_1_83) > (var_1_16 - var_1_15))) ? (((var_1_16 * (var_1_17 / 128.75f)) > ((var_1_15 + var_1_31) - var_1_32)) ? (var_1_30 == ((float) (var_1_15 - var_1_31))) : (var_1_30 == ((float) (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + var_1_33)))) : (var_1_30 == ((float) (var_1_16 + (var_1_34 + (var_1_35 - var_1_36)))))) : 1)) && ((var_1_21 > var_1_25) ? ((1 >= var_1_20) ? ((var_1_20 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) ? (var_1_37 == ((unsigned long int) ((var_1_7 + var_1_39) - var_1_21))) : (var_1_37 == ((unsigned long int) (var_1_8 - var_1_66)))) : (var_1_37 == ((unsigned long int) ((((var_1_21) < (var_1_24)) ? (var_1_21) : (var_1_24)))))) : ((((1 << var_1_23) | var_1_59) < (var_1_7 * var_1_66)) ? (var_1_37 == ((unsigned long int) (((((((((var_1_9) < (var_1_39)) ? (var_1_9) : (var_1_39)))) < (var_1_22)) ? (((((var_1_9) < (var_1_39)) ? (var_1_9) : (var_1_39)))) : (var_1_22))) + var_1_6))) : (var_1_37 == ((unsigned long int) ((((((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) > (var_1_8)) ? (((((var_1_21) > ((var_1_22 + var_1_39))) ? (var_1_21) : ((var_1_22 + var_1_39))))) : (var_1_8)))))))) && (((var_1_24 - 10) >= var_1_18) ? (var_1_41 == ((unsigned short int) var_1_24)) : 1)) && ((! (var_1_13 && (500 < last_1_var_1_59))) ? (var_1_42 == ((unsigned char) 1)) : (var_1_42 == ((unsigned char) var_1_43)))) && (((var_1_32 * var_1_35) < var_1_15) ? ((((var_1_32 + var_1_17) / var_1_45) <= var_1_36) ? ((((10.5f + var_1_35) * var_1_36) <= var_1_32) ? (var_1_44 == ((signed long int) (var_1_22 + var_1_23))) : (var_1_44 == ((signed long int) var_1_99))) : (var_1_44 == ((signed long int) (var_1_21 - (1 + var_1_95))))) : 1)) && (var_1_73 ? ((var_1_32 <= var_1_98) ? (var_1_46 == ((unsigned short int) (var_1_47 + (var_1_20 + ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))) : (var_1_46 == ((unsigned short int) (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))))) : ((var_1_29 && var_1_28) ? (var_1_46 == ((unsigned short int) (((((var_1_48 - var_1_22)) > (((((var_1_25) < (var_1_66)) ? (var_1_25) : (var_1_66))))) ? ((var_1_48 - var_1_22)) : (((((var_1_25) < (var_1_66)) ? (var_1_25) : (var_1_66)))))))) : (var_1_46 == ((unsigned short int) ((((var_1_23) < (16)) ? (var_1_23) : (16)))))))) && ((var_1_64 >= var_1_20) ? ((((2412700709u - var_1_21) * var_1_46) != var_1_7) ? ((! var_1_43) ? (var_1_49 == ((unsigned short int) ((((var_1_23) < (var_1_48)) ? (var_1_23) : (var_1_48))))) : ((var_1_77 > 16) ? (var_1_49 == ((unsigned short int) (var_1_20 + var_1_22))) : (var_1_49 == ((unsigned short int) (((var_1_50 + var_1_51) + (var_1_52 - var_1_25)) - ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))))) : (var_1_49 == ((unsigned short int) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))))) : 1)) && (((var_1_64 * var_1_24) > (var_1_8 - 16u)) ? (var_1_53 == ((float) (var_1_35 + var_1_16))) : (var_1_53 == ((float) (var_1_16 - (var_1_54 - var_1_15)))))) && (var_1_62 ? (var_1_55 == ((signed short int) var_1_50)) : 1)) && ((var_1_42 || (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) >= var_1_24)) ? (var_1_56 == ((unsigned long int) ((((var_1_20) < (25u)) ? (var_1_20) : (25u))))) : (((var_1_23 << var_1_24) <= ((var_1_44 - 5) * var_1_96)) ? (var_1_56 == ((unsigned long int) (2640943014u - (((((var_1_52 + var_1_51)) < (var_1_21)) ? ((var_1_52 + var_1_51)) : (var_1_21)))))) : (var_1_56 == ((unsigned long int) ((var_1_6 + var_1_7) - var_1_52)))))) && ((var_1_28 && var_1_62) ? (var_1_57 == ((signed short int) (((var_1_21 + last_1_var_1_57) + ((((50) < (var_1_24)) ? (50) : (var_1_24)))) + (var_1_77 + var_1_25)))) : ((var_1_5 >= var_1_64) ? (var_1_57 == ((signed short int) (var_1_59 - 32))) : 1))) && (((var_1_8 - var_1_39) == var_1_77) ? (var_1_58 == ((unsigned char) var_1_23)) : ((var_1_73 || var_1_43) ? (var_1_58 == ((unsigned char) ((((((64) < 0 ) ? -(64) : (64))) - var_1_25) + var_1_23))) : (var_1_58 == ((unsigned char) (var_1_22 - ((((var_1_23) > (var_1_25)) ? (var_1_23) : (var_1_25))))))))) && (last_1_var_1_73 ? (((last_1_var_1_59 * var_1_22) >= last_1_var_1_56) ? (((last_1_var_1_59 > var_1_22) && var_1_43) ? ((last_1_var_1_106 < ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) ? (var_1_59 == ((unsigned long int) ((((var_1_9) > (((((last_1_var_1_59) > (var_1_51)) ? (last_1_var_1_59) : (var_1_51))))) ? (var_1_9) : (((((last_1_var_1_59) > (var_1_51)) ? (last_1_var_1_59) : (var_1_51)))))))) : (var_1_59 == ((unsigned long int) (var_1_21 + ((((last_1_var_1_37) < ((var_1_24 + last_1_var_1_66))) ? (last_1_var_1_37) : ((var_1_24 + last_1_var_1_66)))))))) : (var_1_59 == ((unsigned long int) (var_1_8 - (var_1_6 - var_1_52))))) : ((var_1_35 >= ((((var_1_31) > (var_1_17)) ? (var_1_31) : (var_1_17)))) ? ((last_1_var_1_56 > var_1_24) ? (var_1_59 == ((unsigned long int) (var_1_61 + (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) + 128u)))) : (var_1_59 == ((unsigned long int) ((((((((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25)))) > (((((((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) > (last_1_var_1_66)) ? (((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) : (last_1_var_1_66))))) ? (((((var_1_9) > (var_1_25)) ? (var_1_9) : (var_1_25)))) : (((((((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) > (last_1_var_1_66)) ? (((((last_1_var_1_96) < (var_1_7)) ? (last_1_var_1_96) : (var_1_7)))) : (last_1_var_1_66))))))))) : (var_1_59 == ((unsigned long int) ((var_1_39 - last_1_var_1_37) + last_1_var_1_66))))) : (var_1_59 == ((unsigned long int) (((((5u) > (var_1_20)) ? (5u) : (var_1_20))) + (var_1_6 - (var_1_48 + 256u))))))) && (((var_1_48 + var_1_104) == (var_1_20 - var_1_51)) ? ((var_1_39 > var_1_64) ? (var_1_62 == ((unsigned char) (! var_1_43))) : (var_1_62 == ((unsigned char) (! (var_1_11 || var_1_43))))) : 1)) && ((-10 <= (256 & var_1_39)) ? (var_1_63 == ((double) ((((((((127.6) < (var_1_15)) ? (127.6) : (var_1_15)))) > (var_1_36)) ? (((((127.6) < (var_1_15)) ? (127.6) : (var_1_15)))) : (var_1_36))))) : 1)) && ((var_1_16 < var_1_34) ? (var_1_64 == ((unsigned long int) last_1_var_1_64)) : (var_1_64 == ((unsigned long int) (var_1_61 + 500u))))) && (var_1_26 ? ((var_1_6 == (((((64u) > (var_1_61)) ? (64u) : (var_1_61))) % var_1_24)) ? (var_1_65 == ((double) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : (var_1_65 == ((double) ((var_1_35 - var_1_15) + (var_1_36 - var_1_16))))) : 1)) && ((var_1_73 || var_1_13) ? (var_1_66 == ((signed long int) (((((((((var_1_44) < (var_1_103)) ? (var_1_44) : (var_1_103)))) < (var_1_23)) ? (((((var_1_44) < (var_1_103)) ? (var_1_44) : (var_1_103)))) : (var_1_23))) - var_1_48))) : 1)) && ((var_1_72 >= var_1_102) ? (var_1_67 == ((float) (var_1_35 + var_1_34))) : ((! var_1_26) ? (var_1_67 == ((float) var_1_15)) : 1))) && ((var_1_59 <= (((((var_1_25) < (var_1_5)) ? (var_1_25) : (var_1_5))) ^ var_1_39)) ? (var_1_68 == ((signed char) (((((var_1_25 + var_1_70)) > (var_1_71)) ? ((var_1_25 + var_1_70)) : (var_1_71))))) : 1)) && ((128 != var_1_9) ? ((var_1_39 > (- var_1_52)) ? (var_1_72 == ((double) (((((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36))) < 0 ) ? -((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36))) : ((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36))))))) : (var_1_62 ? (var_1_72 == ((double) var_1_54)) : 1)) : (var_1_72 == ((double) 10.6)))) && (((1 << ((((var_1_74) < (var_1_75)) ? (var_1_74) : (var_1_75)))) < var_1_100) ? (var_1_73 == ((unsigned char) ((! (! var_1_43)) && (! (! var_1_76))))) : 1)) && ((var_1_43 && (var_1_32 > 256.8f)) ? (var_1_77 == ((unsigned short int) (var_1_75 + 1))) : (var_1_77 == ((unsigned short int) 25)))) && ((var_1_23 >= var_1_18) ? (var_1_78 == ((signed char) (((((var_1_75 - (var_1_74 + var_1_25))) > (-2)) ? ((var_1_75 - (var_1_74 + var_1_25))) : (-2))))) : 1)) && (((- 7.172) > (var_1_63 + (var_1_35 / var_1_45))) ? (((var_1_24 + var_1_101) <= var_1_18) ? (var_1_79 == ((signed short int) var_1_25)) : (var_1_79 == ((signed short int) ((((-16) > (var_1_70)) ? (-16) : (var_1_70)))))) : 1)) && ((var_1_75 <= -10000000) ? (var_1_80 == ((signed short int) (((((((((5) < 0 ) ? -(5) : (5)))) < (4)) ? (((((5) < 0 ) ? -(5) : (5)))) : (4))) - last_1_var_1_80))) : 1)) && ((((var_1_98 + var_1_32) * var_1_54) < var_1_67) ? (((-128 * var_1_59) <= var_1_56) ? (var_1_81 == ((unsigned short int) ((((((var_1_52 + 20754) - ((((var_1_23) > (var_1_37)) ? (var_1_23) : (var_1_37))))) < (var_1_22)) ? (((var_1_52 + 20754) - ((((var_1_23) > (var_1_37)) ? (var_1_23) : (var_1_37))))) : (var_1_22))))) : 1) : (var_1_81 == ((unsigned short int) (var_1_22 + 50))))) && ((var_1_100 >= 128) ? (var_1_82 == ((unsigned short int) ((((((var_1_22 + var_1_75) + var_1_74)) < (10)) ? (((var_1_22 + var_1_75) + var_1_74)) : (10))))) : 1)) && ((var_1_56 != ((((((((var_1_1) > (32)) ? (var_1_1) : (32)))) > ((var_1_104 * var_1_18))) ? (((((var_1_1) > (32)) ? (var_1_1) : (32)))) : ((var_1_104 * var_1_18))))) ? (var_1_83 == ((float) (((var_1_84 + var_1_85) + var_1_36) + var_1_34))) : (var_1_83 == ((float) (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - (var_1_35 + ((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36))))))))) && ((var_1_11 || var_1_42) ? (var_1_86 == ((signed short int) ((((((var_1_74 + var_1_80)) > (var_1_22)) ? ((var_1_74 + var_1_80)) : (var_1_22))) - var_1_20))) : 1)) && ((((((var_1_31) < (var_1_36)) ? (var_1_31) : (var_1_36))) <= var_1_84) ? ((((var_1_81 * var_1_22) + var_1_9) >= (((((var_1_8) > (var_1_88)) ? (var_1_8) : (var_1_88))) - (var_1_6 - var_1_59))) ? (var_1_87 == ((float) ((((((((((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) < (var_1_85)) ? (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) : (var_1_85)))) > (var_1_35)) ? (((((((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) < (var_1_85)) ? (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16)))) : (var_1_85)))) : (var_1_35))))) : ((((((var_1_84) > (var_1_65)) ? (var_1_84) : (var_1_65))) >= var_1_98) ? (var_1_87 == ((float) var_1_84)) : ((var_1_73 || var_1_43) ? ((((var_1_101 + 32) + var_1_8) < var_1_25) ? (var_1_87 == ((float) ((((127.5f) < ((var_1_36 + var_1_34))) ? (127.5f) : ((var_1_36 + var_1_34)))))) : ((var_1_98 < ((((var_1_65 * var_1_17) < 0 ) ? -(var_1_65 * var_1_17) : (var_1_65 * var_1_17)))) ? (var_1_87 == ((float) var_1_36)) : (var_1_87 == ((float) ((((((9.99999999E7f) < (var_1_84)) ? (9.99999999E7f) : (var_1_84))) + (var_1_35 - var_1_36)) + ((((var_1_34) < (((((var_1_33) < (var_1_85)) ? (var_1_33) : (var_1_85))))) ? (var_1_34) : (((((var_1_33) < (var_1_85)) ? (var_1_33) : (var_1_85))))))))))) : (var_1_87 == ((float) ((24.25f + var_1_85) + var_1_15)))))) : (var_1_87 == ((float) ((((((((var_1_34 + var_1_16) < 0 ) ? -(var_1_34 + var_1_16) : (var_1_34 + var_1_16)))) > (var_1_85)) ? (((((var_1_34 + var_1_16) < 0 ) ? -(var_1_34 + var_1_16) : (var_1_34 + var_1_16)))) : (var_1_85))))))) && ((var_1_6 <= var_1_64) ? (var_1_91 == ((unsigned char) var_1_22)) : (var_1_91 == ((unsigned char) var_1_25)))) && (var_1_92 == ((float) var_1_54))) && (var_1_13 ? (var_1_93 == ((signed char) var_1_94)) : (var_1_93 == ((signed char) var_1_75)))) && (var_1_95 == ((unsigned char) var_1_20))) && (var_1_62 ? (var_1_96 == ((unsigned long int) var_1_25)) : (var_1_96 == ((unsigned long int) var_1_48)))) && (var_1_13 ? (var_1_97 == ((unsigned char) var_1_25)) : 1)) && (var_1_76 ? (var_1_98 == ((double) var_1_16)) : 1)) && (var_1_29 ? (var_1_99 == ((signed short int) var_1_23)) : 1)) && (var_1_42 ? (var_1_100 == ((signed long int) last_1_var_1_100)) : (var_1_100 == ((signed long int) var_1_64)))) && (var_1_101 == ((signed long int) -8))) && (var_1_76 ? (var_1_102 == ((double) var_1_16)) : 1)) && (var_1_27 ? (var_1_103 == ((signed short int) var_1_70)) : (var_1_103 == ((signed short int) var_1_82)))) && (var_1_26 ? (var_1_104 == ((signed long int) var_1_25)) : (var_1_104 == ((signed long int) var_1_22)))) && (((var_1_8 * var_1_20) != var_1_66) ? ((var_1_80 == var_1_96) ? (var_1_105 == ((signed char) (((((var_1_74) < (var_1_25)) ? (var_1_74) : (var_1_25))) - 8))) : (var_1_105 == ((signed char) var_1_75))) : 1)) && (var_1_106 == ((unsigned short int) var_1_50))) && (var_1_107 == ((float) var_1_17))
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
