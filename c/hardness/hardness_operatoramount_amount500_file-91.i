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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 200;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 16;
signed short int var_1_7 = -8;
signed short int var_1_8 = 32;
signed char var_1_9 = 0;
signed char var_1_10 = 0;
signed char var_1_11 = -64;
signed char var_1_12 = 4;
signed char var_1_13 = -2;
signed char var_1_14 = 25;
signed char var_1_15 = 64;
signed char var_1_16 = 50;
signed char var_1_17 = 5;
float var_1_18 = 128.25;
float var_1_19 = 32.5;
float var_1_20 = 25.38;
unsigned long int var_1_21 = 128;
unsigned long int var_1_23 = 1796201152;
unsigned long int var_1_24 = 3011885328;
double var_1_25 = 7.6;
double var_1_26 = 127.25;
double var_1_27 = 7.625;
unsigned char var_1_28 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned long int var_1_33 = 16;
unsigned long int var_1_34 = 3489975535;
signed char var_1_35 = -25;
signed char var_1_36 = 64;
signed char var_1_37 = 0;
float var_1_38 = 32.2;
signed char var_1_39 = -100;
signed char var_1_40 = 2;
signed long int var_1_41 = -500;
signed long int var_1_42 = 128;
signed char var_1_43 = 2;
signed long int var_1_44 = 100;
unsigned char var_1_45 = 1;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 0;
double var_1_49 = 9.4;
unsigned long int var_1_50 = 4;
unsigned long int var_1_51 = 1000000000;
unsigned long int var_1_52 = 1000000000;
unsigned short int var_1_53 = 256;
unsigned short int var_1_55 = 10000;
unsigned char var_1_56 = 128;
signed long int var_1_57 = -128;
signed long int var_1_58 = 1;
float var_1_59 = 49.125;
float var_1_60 = 99999.8;
float var_1_61 = 100000.6;
unsigned char var_1_62 = 4;
signed long int var_1_63 = -32;
float var_1_64 = 31.25;
unsigned long int var_1_66 = 5;
unsigned short int var_1_67 = 256;
unsigned char var_1_68 = 1;
signed short int var_1_69 = -64;
signed short int var_1_70 = 10;
signed short int var_1_71 = 25567;
signed short int var_1_72 = 17746;
float var_1_73 = 63.3;
float var_1_74 = 16.5;
float var_1_75 = 3.5;
float var_1_76 = 15.2;
unsigned char var_1_77 = 25;
signed short int var_1_78 = 16;
double var_1_79 = 10000000000000.4;
signed long int var_1_80 = 8;
signed char var_1_81 = 2;
unsigned short int var_1_82 = 4;
unsigned short int var_1_83 = 1;
unsigned short int var_1_84 = 4;
float var_1_85 = 200.6;
float var_1_86 = 9.2;
double var_1_88 = 2.5;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 2;
signed long int var_1_91 = 0;
signed char var_1_92 = 100;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 8;
unsigned char var_1_97 = 100;
unsigned char var_1_98 = 64;
unsigned char var_1_99 = 32;
unsigned short int var_1_100 = 0;
unsigned char var_1_101 = 5;
unsigned char var_1_102 = 200;
float var_1_103 = 7.5;
signed short int var_1_104 = 128;
double var_1_105 = 1.375;
signed char var_1_106 = 100;
signed long int var_1_107 = 8;
signed long int var_1_108 = 16;
double var_1_109 = 2.5;
unsigned short int var_1_110 = 128;
unsigned char var_1_111 = 0;
unsigned short int var_1_112 = 2;
unsigned char var_1_113 = 200;
double var_1_114 = 7.7;
signed long int var_1_115 = 32;
unsigned long int var_1_116 = 25;
signed long int var_1_117 = -5;
signed short int var_1_118 = -10;
signed long int last_1_var_1_42 = 128;
signed long int last_1_var_1_58 = 1;
float last_1_var_1_73 = 63.3;
unsigned short int last_1_var_1_82 = 4;
float last_1_var_1_86 = 9.2;
unsigned char last_1_var_1_89 = 0;
signed long int last_1_var_1_107 = 8;
double last_1_var_1_114 = 7.7;
signed long int last_1_var_1_115 = 32;
signed long int last_1_var_1_117 = -5;
void initially(void) {
}
void step(void) {
 if (((((var_1_27) < (last_1_var_1_73)) ? (var_1_27) : (last_1_var_1_73))) >= var_1_38) {
  var_1_66 = ((1u + var_1_16) + var_1_4);
 }
 signed long int stepLocal_19 = (var_1_39 - var_1_4) - var_1_15;
 if (var_1_66 > stepLocal_19) {
  var_1_73 = ((((((var_1_74 + var_1_75)) > (var_1_76)) ? ((var_1_74 + var_1_75)) : (var_1_76))) - ((((var_1_20) < (var_1_19)) ? (var_1_20) : (var_1_19))));
 } else {
  var_1_73 = ((var_1_61 + var_1_60) + 4.4f);
 }
 signed char stepLocal_12 = var_1_16;
 if (stepLocal_12 > var_1_40) {
  var_1_45 = (((var_1_38 <= last_1_var_1_114) && last_1_var_1_89) && ((var_1_32 && var_1_30) || var_1_47));
 } else {
  var_1_45 = ((! 0) && var_1_31);
 }
 if (var_1_30) {
  var_1_68 = (var_1_45 && var_1_47);
 }
 signed long int stepLocal_4 = last_1_var_1_107;
 signed long int stepLocal_3 = (((last_1_var_1_58) > (-128)) ? (last_1_var_1_58) : (-128));
 if ((last_1_var_1_117 + var_1_17) >= stepLocal_3) {
  var_1_21 = ((var_1_23 - last_1_var_1_117) + (var_1_5 + var_1_8));
 } else {
  if ((var_1_15 / var_1_4) < stepLocal_4) {
   var_1_21 = (var_1_8 + 4u);
  } else {
   var_1_21 = (var_1_24 - last_1_var_1_117);
  }
 }
 var_1_118 = var_1_21;
 var_1_7 = ((((((((0) > (var_1_6)) ? (0) : (var_1_6))) - var_1_8) < 0 ) ? -(((((0) > (var_1_6)) ? (0) : (var_1_6))) - var_1_8) : (((((0) > (var_1_6)) ? (0) : (var_1_6))) - var_1_8)));
 var_1_25 = (var_1_26 + var_1_27);
 if (((var_1_19 - var_1_20) / var_1_38) < (- var_1_27)) {
  var_1_37 = ((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) - (var_1_17 + var_1_40)) - var_1_16);
 } else {
  var_1_37 = (var_1_16 + var_1_17);
 }
 signed char stepLocal_11 = var_1_17;
 if (stepLocal_11 < var_1_7) {
  var_1_41 = (var_1_16 - var_1_5);
 }
 var_1_57 = var_1_44;
 signed char stepLocal_15 = var_1_39;
 if (var_1_66 >= stepLocal_15) {
  if ((var_1_73 + 24.7) > var_1_20) {
   var_1_59 = (((var_1_60 + 31.2f) + var_1_61) + var_1_26);
  } else {
   var_1_59 = (var_1_20 - var_1_19);
  }
 }
 var_1_62 = (var_1_4 - var_1_6);
 if (((-1 - var_1_5) + (var_1_43 - var_1_6)) >= var_1_14) {
  var_1_77 = (((((var_1_39 - ((((var_1_70) > (var_1_40)) ? (var_1_70) : (var_1_40))))) < ((var_1_5 + var_1_43))) ? ((var_1_39 - ((((var_1_70) > (var_1_40)) ? (var_1_70) : (var_1_40))))) : ((var_1_5 + var_1_43))));
 }
 var_1_78 = (var_1_14 - var_1_70);
 var_1_79 = (var_1_74 - var_1_19);
 var_1_80 = (var_1_5 - ((((var_1_17) < (var_1_36)) ? (var_1_17) : (var_1_36))));
 var_1_85 = (var_1_74 + ((((var_1_75) > (var_1_26)) ? (var_1_75) : (var_1_26))));
 if (last_1_var_1_86 > 32.7f) {
  var_1_86 = var_1_20;
 } else {
  var_1_86 = (var_1_75 - var_1_76);
 }
 signed long int stepLocal_20 = 32;
 if (stepLocal_20 > var_1_41) {
  var_1_88 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
 } else {
  var_1_88 = (var_1_20 - var_1_76);
 }
 if (var_1_17 > var_1_57) {
  var_1_91 = ((((var_1_77) < (var_1_16)) ? (var_1_77) : (var_1_16)));
 }
 unsigned char stepLocal_24 = var_1_30;
 unsigned long int stepLocal_23 = (((var_1_66) < (var_1_43)) ? (var_1_66) : (var_1_43));
 unsigned long int stepLocal_22 = (((var_1_21) > ((var_1_41 + var_1_6))) ? (var_1_21) : ((var_1_41 + var_1_6)));
 if (stepLocal_24 || (16.875 <= var_1_88)) {
  if (var_1_24 < stepLocal_22) {
   if ((var_1_21 / var_1_39) < stepLocal_23) {
    var_1_92 = (var_1_16 - (var_1_17 + (var_1_70 + var_1_43)));
   } else {
    var_1_92 = (var_1_16 - var_1_43);
   }
  } else {
   var_1_92 = ((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36)));
  }
 }
 if (var_1_80 <= var_1_83) {
  var_1_101 = (((((var_1_102 - 8) < 0 ) ? -(var_1_102 - 8) : (var_1_102 - 8))) - 2);
 } else {
  var_1_101 = ((((((((var_1_98) < (var_1_97)) ? (var_1_98) : (var_1_97)))) > (var_1_99)) ? (((((var_1_98) < (var_1_97)) ? (var_1_98) : (var_1_97)))) : (var_1_99)));
 }
 if (var_1_47) {
  var_1_104 = var_1_70;
 } else {
  var_1_104 = var_1_14;
 }
 var_1_105 = var_1_26;
 if (var_1_47) {
  var_1_106 = var_1_40;
 } else {
  var_1_106 = 32;
 }
 if (var_1_45) {
  var_1_107 = var_1_16;
 } else {
  var_1_107 = var_1_108;
 }
 var_1_109 = var_1_74;
 var_1_110 = var_1_5;
 var_1_111 = var_1_5;
 if (var_1_30) {
  var_1_112 = var_1_118;
 }
 var_1_113 = var_1_16;
 if (var_1_47) {
  var_1_114 = var_1_19;
 } else {
  var_1_114 = var_1_74;
 }
 signed char stepLocal_5 = var_1_16;
 if (stepLocal_5 <= 16) {
  if (var_1_68) {
   if ((var_1_20 - var_1_19) == var_1_114) {
    var_1_28 = (! var_1_30);
   } else {
    if (var_1_30) {
     var_1_28 = var_1_31;
    } else {
     var_1_28 = var_1_32;
    }
   }
  }
 }
 if (var_1_45) {
  var_1_100 = ((((((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) < (var_1_40)) ? (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) : (var_1_40)));
 }
 if (64u > ((2358194306u - var_1_8) & var_1_23)) {
  if (var_1_118 < var_1_4) {
   if (var_1_20 > ((((var_1_38) > ((var_1_114 * var_1_19))) ? (var_1_38) : ((var_1_114 * var_1_19))))) {
    var_1_58 = (1 - ((((((((var_1_51) > (var_1_8)) ? (var_1_51) : (var_1_8)))) < (var_1_40)) ? (((((var_1_51) > (var_1_8)) ? (var_1_51) : (var_1_8)))) : (var_1_40))));
   }
  } else {
   var_1_58 = (var_1_91 + (var_1_77 - var_1_15));
  }
 }
 if (var_1_26 > var_1_88) {
  var_1_117 = ((((var_1_21) > (var_1_4)) ? (var_1_21) : (var_1_4)));
 }
 unsigned long int stepLocal_0 = var_1_21;
 if (stepLocal_0 != var_1_104) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  var_1_1 = (((((50) > (var_1_5)) ? (50) : (var_1_5))) + var_1_6);
 }
 if (! (63.9 > var_1_38)) {
  if (var_1_6 < (var_1_39 * last_1_var_1_42)) {
   var_1_42 = ((((var_1_15) > (var_1_4)) ? (var_1_15) : (var_1_4)));
  } else {
   var_1_42 = var_1_12;
  }
 } else {
  if (((var_1_15 >> var_1_43) ^ 8) > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) {
   if ((var_1_21 + var_1_23) < var_1_16) {
    if (var_1_26 > 3.25) {
     var_1_42 = ((((((var_1_5 - var_1_44) + var_1_58)) < ((var_1_80 + var_1_40))) ? (((var_1_5 - var_1_44) + var_1_58)) : ((var_1_80 + var_1_40))));
    } else {
     if (((var_1_23 - var_1_16) << var_1_117) >= var_1_4) {
      var_1_42 = (var_1_44 - var_1_43);
     } else {
      var_1_42 = ((((var_1_15) > (var_1_66)) ? (var_1_15) : (var_1_66)));
     }
    }
   } else {
    var_1_42 = (var_1_58 + var_1_118);
   }
  } else {
   var_1_42 = (var_1_43 - ((((var_1_17) < (var_1_36)) ? (var_1_17) : (var_1_36))));
  }
 }
 if (((var_1_19 + 50.8f) + var_1_88) != var_1_73) {
  var_1_49 = var_1_27;
 } else {
  var_1_49 = var_1_19;
 }
 if (var_1_45) {
  var_1_81 = var_1_36;
 } else {
  if (! ((var_1_52 << var_1_91) == var_1_15)) {
   var_1_81 = (var_1_43 - ((((((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36)))) > (var_1_40)) ? (((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36)))) : (var_1_40))));
  } else {
   var_1_81 = (var_1_40 + (var_1_43 - var_1_16));
  }
 }
 if (((~ var_1_78) + var_1_111) < -4) {
  var_1_90 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  var_1_90 = ((((((var_1_36 - 8) + var_1_6)) > ((var_1_4 - (var_1_17 + var_1_43)))) ? (((var_1_36 - 8) + var_1_6)) : ((var_1_4 - (var_1_17 + var_1_43)))));
 }
 if ((var_1_114 / var_1_38) >= (var_1_85 + var_1_109)) {
  var_1_103 = (var_1_20 - var_1_76);
 }
 if (var_1_88 < (- (var_1_86 + var_1_88))) {
  var_1_116 = var_1_58;
 } else {
  var_1_116 = ((((var_1_17) > (var_1_58)) ? (var_1_17) : (var_1_58)));
 }
 if (((var_1_116 / var_1_4) ^ var_1_6) > (var_1_10 | (var_1_14 / var_1_15))) {
  var_1_18 = (var_1_19 - var_1_20);
 } else {
  var_1_18 = var_1_20;
 }
 unsigned char stepLocal_14 = var_1_90;
 if (((46005 - var_1_36) / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) <= stepLocal_14) {
  var_1_53 = (((((var_1_36) > (var_1_8)) ? (var_1_36) : (var_1_8))) + ((28092 - var_1_4) - (var_1_55 - var_1_17)));
 } else {
  var_1_53 = (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + ((((var_1_43) < (var_1_6)) ? (var_1_43) : (var_1_6))));
 }
 if ((((((32 | var_1_55)) < (var_1_42)) ? ((32 | var_1_55)) : (var_1_42))) >= var_1_116) {
  var_1_67 = (var_1_39 - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))));
 } else {
  if (2.5 < ((var_1_19 - var_1_20) / var_1_38)) {
   var_1_67 = (var_1_39 - var_1_15);
  } else {
   var_1_67 = ((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8)));
  }
 }
 signed long int stepLocal_2 = (((var_1_117) < ((var_1_5 / var_1_4))) ? (var_1_117) : ((var_1_5 / var_1_4)));
 unsigned long int stepLocal_1 = var_1_116 - var_1_5;
 if (stepLocal_2 < (var_1_91 * (var_1_6 + var_1_53))) {
  if (var_1_53 < stepLocal_1) {
   var_1_9 = ((((var_1_10) < (((((((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) < (var_1_13)) ? (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) : (var_1_13))))) ? (var_1_10) : (((((((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) < (var_1_13)) ? (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) : (var_1_13))))));
  }
 } else {
  var_1_9 = (var_1_14 - (((((var_1_15) < (64)) ? (var_1_15) : (64))) - (var_1_16 - var_1_17)));
 }
 if (((((((((var_1_111) < 0 ) ? -(var_1_111) : (var_1_111)))) > (var_1_15)) ? (((((var_1_111) < 0 ) ? -(var_1_111) : (var_1_111)))) : (var_1_15))) > var_1_53) {
  var_1_50 = (var_1_39 - ((var_1_51 + var_1_52) - var_1_17));
 }
 if (var_1_39 >= (var_1_77 * var_1_50)) {
  if (var_1_34 > var_1_4) {
   var_1_56 = (var_1_4 - var_1_6);
  }
 } else {
  var_1_56 = (((((var_1_4 - var_1_40)) > ((1 + var_1_43))) ? ((var_1_4 - var_1_40)) : ((1 + var_1_43))));
 }
 unsigned char stepLocal_9 = var_1_86 > (var_1_20 * var_1_26);
 unsigned char stepLocal_8 = var_1_32;
 signed long int stepLocal_7 = var_1_4 - 5;
 unsigned char stepLocal_6 = var_1_32;
 if (stepLocal_8 || var_1_30) {
  var_1_33 = (var_1_4 + (var_1_57 + var_1_5));
 } else {
  if (var_1_30 && stepLocal_9) {
   var_1_33 = var_1_6;
  } else {
   if (stepLocal_7 != (var_1_57 * var_1_23)) {
    if ((var_1_10 <= var_1_50) && stepLocal_6) {
     var_1_33 = 4u;
    } else {
     var_1_33 = (var_1_24 - ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16))));
    }
   } else {
    var_1_33 = (var_1_34 - (var_1_17 + var_1_15));
   }
  }
 }
 unsigned long int stepLocal_13 = var_1_33;
 if (stepLocal_13 > var_1_12) {
  var_1_48 = var_1_39;
 } else {
  var_1_48 = (((((var_1_23 + 1989060741u) - var_1_36) < 0 ) ? -((var_1_23 + 1989060741u) - var_1_36) : ((var_1_23 + 1989060741u) - var_1_36)));
 }
 if (var_1_68) {
  if (var_1_117 > ((var_1_43 + var_1_4) - (var_1_23 - var_1_33))) {
   var_1_64 = ((((var_1_27) > (var_1_19)) ? (var_1_27) : (var_1_19)));
  }
 }
 signed long int stepLocal_18 = 1 >> var_1_70;
 if (var_1_43 < stepLocal_18) {
  var_1_69 = (var_1_40 + (((((32) < (var_1_6)) ? (32) : (var_1_6))) - var_1_70));
 } else {
  var_1_69 = (var_1_36 - (((((var_1_71) > (var_1_72)) ? (var_1_71) : (var_1_72))) - ((((16) < (var_1_48)) ? (16) : (var_1_48)))));
 }
 signed long int stepLocal_21 = (((var_1_100) < 0 ) ? -(var_1_100) : (var_1_100));
 if (var_1_28) {
  if ((- var_1_33) > stepLocal_21) {
   var_1_89 = (var_1_68 && var_1_47);
  } else {
   var_1_89 = ((! var_1_31) || (var_1_32 || var_1_30));
  }
 } else {
  var_1_89 = (! var_1_31);
 }
 unsigned char stepLocal_10 = var_1_89;
 if (stepLocal_10 || var_1_31) {
  var_1_35 = (-16 + var_1_16);
 } else {
  var_1_35 = (((((var_1_15 - (var_1_36 - var_1_17))) < (10)) ? ((var_1_15 - (var_1_36 - var_1_17))) : (10)));
 }
 unsigned char stepLocal_26 = var_1_45;
 signed long int stepLocal_25 = 0;
 if (stepLocal_26 || var_1_89) {
  if (stepLocal_25 <= var_1_58) {
   var_1_95 = ((((var_1_6) < ((var_1_16 + ((((var_1_43) < (var_1_70)) ? (var_1_43) : (var_1_70)))))) ? (var_1_6) : ((var_1_16 + ((((var_1_43) < (var_1_70)) ? (var_1_43) : (var_1_70)))))));
  } else {
   var_1_95 = (((((128) > (var_1_39)) ? (128) : (var_1_39))) - var_1_17);
  }
 }
 if (var_1_89) {
  var_1_115 = last_1_var_1_115;
 } else {
  var_1_115 = var_1_50;
 }
 signed long int stepLocal_17 = var_1_91;
 signed long int stepLocal_16 = var_1_44;
 if (var_1_21 > stepLocal_16) {
  var_1_63 = var_1_115;
 } else {
  if (var_1_66 < stepLocal_17) {
   var_1_63 = var_1_115;
  } else {
   var_1_63 = (var_1_80 + ((((var_1_110) < 0 ) ? -(var_1_110) : (var_1_110))));
  }
 }
 if (var_1_32) {
  var_1_82 = ((var_1_71 - var_1_83) + (last_1_var_1_82 + var_1_43));
 } else {
  if (((var_1_34 * -2) * var_1_41) <= var_1_115) {
   var_1_82 = ((((var_1_83) < (var_1_84)) ? (var_1_83) : (var_1_84)));
  } else {
   if ((var_1_109 * var_1_59) < var_1_109) {
    var_1_82 = var_1_8;
   } else {
    var_1_82 = (((((var_1_15 + var_1_43)) > ((39835 - var_1_5))) ? ((var_1_15 + var_1_43)) : ((39835 - var_1_5))));
   }
  }
 }
 unsigned char stepLocal_30 = (- var_1_42) < var_1_5;
 signed long int stepLocal_29 = var_1_115;
 signed char stepLocal_28 = var_1_36;
 unsigned char stepLocal_27 = var_1_99;
 if (var_1_5 != stepLocal_28) {
  if (var_1_6 < stepLocal_29) {
   var_1_96 = ((var_1_70 + var_1_40) + var_1_16);
  } else {
   if (stepLocal_30 || var_1_32) {
    var_1_96 = ((((((var_1_97) > (var_1_15)) ? (var_1_97) : (var_1_15))) + (var_1_98 + var_1_99)) - ((((var_1_6) > (var_1_40)) ? (var_1_6) : (var_1_40))));
   }
  }
 } else {
  if (stepLocal_27 != var_1_117) {
   var_1_96 = var_1_99;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 31);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 31);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 1073741823);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 63);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 assume_abort_if_not(var_1_38 != 0.0F);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -126);
 assume_abort_if_not(var_1_39 <= -62);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 31);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 6);
 var_1_44 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 1073741823);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 536870911);
 assume_abort_if_not(var_1_51 <= 1073741824);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 536870912);
 assume_abort_if_not(var_1_52 <= 1073741823);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 8191);
 assume_abort_if_not(var_1_55 <= 16383);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -115292.1504606845700e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 1152921.504606845700e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -230584.3009213691400e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 30);
 var_1_71 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_71 >= 16383);
 assume_abort_if_not(var_1_71 <= 32766);
 var_1_72 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_72 >= 16383);
 assume_abort_if_not(var_1_72 <= 32766);
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427383000e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427383000e+12F && var_1_75 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854766000e+12F && var_1_76 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_83 >= 0);
 assume_abort_if_not(var_1_83 <= 16383);
 var_1_84 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_84 >= 0);
 assume_abort_if_not(var_1_84 <= 65534);
 var_1_97 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_97 >= 63);
 assume_abort_if_not(var_1_97 <= 127);
 var_1_98 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_98 >= 32);
 assume_abort_if_not(var_1_98 <= 64);
 var_1_99 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_99 >= 32);
 assume_abort_if_not(var_1_99 <= 63);
 var_1_102 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_102 >= 190);
 assume_abort_if_not(var_1_102 <= 254);
 var_1_108 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_108 >= -2147483647);
 assume_abort_if_not(var_1_108 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_42 = var_1_42;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_107 = var_1_107;
 last_1_var_1_114 = var_1_114;
 last_1_var_1_115 = var_1_115;
 last_1_var_1_117 = var_1_117;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_21 != var_1_104) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) (((((50) > (var_1_5)) ? (50) : (var_1_5))) + var_1_6)))) && (var_1_7 == ((signed short int) ((((((((0) > (var_1_6)) ? (0) : (var_1_6))) - var_1_8) < 0 ) ? -(((((0) > (var_1_6)) ? (0) : (var_1_6))) - var_1_8) : (((((0) > (var_1_6)) ? (0) : (var_1_6))) - var_1_8)))))) && ((((((var_1_117) < ((var_1_5 / var_1_4))) ? (var_1_117) : ((var_1_5 / var_1_4)))) < (var_1_91 * (var_1_6 + var_1_53))) ? ((var_1_53 < (var_1_116 - var_1_5)) ? (var_1_9 == ((signed char) ((((var_1_10) < (((((((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) < (var_1_13)) ? (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) : (var_1_13))))) ? (var_1_10) : (((((((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) < (var_1_13)) ? (((((var_1_11) < (var_1_12)) ? (var_1_11) : (var_1_12)))) : (var_1_13)))))))) : 1) : (var_1_9 == ((signed char) (var_1_14 - (((((var_1_15) < (64)) ? (var_1_15) : (64))) - (var_1_16 - var_1_17))))))) && ((((var_1_116 / var_1_4) ^ var_1_6) > (var_1_10 | (var_1_14 / var_1_15))) ? (var_1_18 == ((float) (var_1_19 - var_1_20))) : (var_1_18 == ((float) var_1_20)))) && (((last_1_var_1_117 + var_1_17) >= ((((last_1_var_1_58) > (-128)) ? (last_1_var_1_58) : (-128)))) ? (var_1_21 == ((unsigned long int) ((var_1_23 - last_1_var_1_117) + (var_1_5 + var_1_8)))) : (((var_1_15 / var_1_4) < last_1_var_1_107) ? (var_1_21 == ((unsigned long int) (var_1_8 + 4u))) : (var_1_21 == ((unsigned long int) (var_1_24 - last_1_var_1_117)))))) && (var_1_25 == ((double) (var_1_26 + var_1_27)))) && ((var_1_16 <= 16) ? (var_1_68 ? (((var_1_20 - var_1_19) == var_1_114) ? (var_1_28 == ((unsigned char) (! var_1_30))) : (var_1_30 ? (var_1_28 == ((unsigned char) var_1_31)) : (var_1_28 == ((unsigned char) var_1_32)))) : 1) : 1)) && ((var_1_32 || var_1_30) ? (var_1_33 == ((unsigned long int) (var_1_4 + (var_1_57 + var_1_5)))) : ((var_1_30 && (var_1_86 > (var_1_20 * var_1_26))) ? (var_1_33 == ((unsigned long int) var_1_6)) : (((var_1_4 - 5) != (var_1_57 * var_1_23)) ? (((var_1_10 <= var_1_50) && var_1_32) ? (var_1_33 == ((unsigned long int) 4u)) : (var_1_33 == ((unsigned long int) (var_1_24 - ((((var_1_8) > (var_1_16)) ? (var_1_8) : (var_1_16))))))) : (var_1_33 == ((unsigned long int) (var_1_34 - (var_1_17 + var_1_15)))))))) && ((var_1_89 || var_1_31) ? (var_1_35 == ((signed char) (-16 + var_1_16))) : (var_1_35 == ((signed char) (((((var_1_15 - (var_1_36 - var_1_17))) < (10)) ? ((var_1_15 - (var_1_36 - var_1_17))) : (10))))))) && ((((var_1_19 - var_1_20) / var_1_38) < (- var_1_27)) ? (var_1_37 == ((signed char) ((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) - (var_1_17 + var_1_40)) - var_1_16))) : (var_1_37 == ((signed char) (var_1_16 + var_1_17))))) && ((var_1_17 < var_1_7) ? (var_1_41 == ((signed long int) (var_1_16 - var_1_5))) : 1)) && ((! (63.9 > var_1_38)) ? ((var_1_6 < (var_1_39 * last_1_var_1_42)) ? (var_1_42 == ((signed long int) ((((var_1_15) > (var_1_4)) ? (var_1_15) : (var_1_4))))) : (var_1_42 == ((signed long int) var_1_12))) : ((((var_1_15 >> var_1_43) ^ 8) > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) ? (((var_1_21 + var_1_23) < var_1_16) ? ((var_1_26 > 3.25) ? (var_1_42 == ((signed long int) ((((((var_1_5 - var_1_44) + var_1_58)) < ((var_1_80 + var_1_40))) ? (((var_1_5 - var_1_44) + var_1_58)) : ((var_1_80 + var_1_40)))))) : ((((var_1_23 - var_1_16) << var_1_117) >= var_1_4) ? (var_1_42 == ((signed long int) (var_1_44 - var_1_43))) : (var_1_42 == ((signed long int) ((((var_1_15) > (var_1_66)) ? (var_1_15) : (var_1_66))))))) : (var_1_42 == ((signed long int) (var_1_58 + var_1_118)))) : (var_1_42 == ((signed long int) (var_1_43 - ((((var_1_17) < (var_1_36)) ? (var_1_17) : (var_1_36))))))))) && ((var_1_16 > var_1_40) ? (var_1_45 == ((unsigned char) (((var_1_38 <= last_1_var_1_114) && last_1_var_1_89) && ((var_1_32 && var_1_30) || var_1_47)))) : (var_1_45 == ((unsigned char) ((! 0) && var_1_31))))) && ((var_1_33 > var_1_12) ? (var_1_48 == ((unsigned long int) var_1_39)) : (var_1_48 == ((unsigned long int) (((((var_1_23 + 1989060741u) - var_1_36) < 0 ) ? -((var_1_23 + 1989060741u) - var_1_36) : ((var_1_23 + 1989060741u) - var_1_36))))))) && ((((var_1_19 + 50.8f) + var_1_88) != var_1_73) ? (var_1_49 == ((double) var_1_27)) : (var_1_49 == ((double) var_1_19)))) && ((((((((((var_1_111) < 0 ) ? -(var_1_111) : (var_1_111)))) > (var_1_15)) ? (((((var_1_111) < 0 ) ? -(var_1_111) : (var_1_111)))) : (var_1_15))) > var_1_53) ? (var_1_50 == ((unsigned long int) (var_1_39 - ((var_1_51 + var_1_52) - var_1_17)))) : 1)) && ((((46005 - var_1_36) / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) <= var_1_90) ? (var_1_53 == ((unsigned short int) (((((var_1_36) > (var_1_8)) ? (var_1_36) : (var_1_8))) + ((28092 - var_1_4) - (var_1_55 - var_1_17))))) : (var_1_53 == ((unsigned short int) (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + ((((var_1_43) < (var_1_6)) ? (var_1_43) : (var_1_6)))))))) && ((var_1_39 >= (var_1_77 * var_1_50)) ? ((var_1_34 > var_1_4) ? (var_1_56 == ((unsigned char) (var_1_4 - var_1_6))) : 1) : (var_1_56 == ((unsigned char) (((((var_1_4 - var_1_40)) > ((1 + var_1_43))) ? ((var_1_4 - var_1_40)) : ((1 + var_1_43)))))))) && (var_1_57 == ((signed long int) var_1_44))) && ((64u > ((2358194306u - var_1_8) & var_1_23)) ? ((var_1_118 < var_1_4) ? ((var_1_20 > ((((var_1_38) > ((var_1_114 * var_1_19))) ? (var_1_38) : ((var_1_114 * var_1_19))))) ? (var_1_58 == ((signed long int) (1 - ((((((((var_1_51) > (var_1_8)) ? (var_1_51) : (var_1_8)))) < (var_1_40)) ? (((((var_1_51) > (var_1_8)) ? (var_1_51) : (var_1_8)))) : (var_1_40)))))) : 1) : (var_1_58 == ((signed long int) (var_1_91 + (var_1_77 - var_1_15))))) : 1)) && ((var_1_66 >= var_1_39) ? (((var_1_73 + 24.7) > var_1_20) ? (var_1_59 == ((float) (((var_1_60 + 31.2f) + var_1_61) + var_1_26))) : (var_1_59 == ((float) (var_1_20 - var_1_19)))) : 1)) && (var_1_62 == ((unsigned char) (var_1_4 - var_1_6)))) && ((var_1_21 > var_1_44) ? (var_1_63 == ((signed long int) var_1_115)) : ((var_1_66 < var_1_91) ? (var_1_63 == ((signed long int) var_1_115)) : (var_1_63 == ((signed long int) (var_1_80 + ((((var_1_110) < 0 ) ? -(var_1_110) : (var_1_110))))))))) && (var_1_68 ? ((var_1_117 > ((var_1_43 + var_1_4) - (var_1_23 - var_1_33))) ? (var_1_64 == ((float) ((((var_1_27) > (var_1_19)) ? (var_1_27) : (var_1_19))))) : 1) : 1)) && ((((((var_1_27) < (last_1_var_1_73)) ? (var_1_27) : (last_1_var_1_73))) >= var_1_38) ? (var_1_66 == ((unsigned long int) ((1u + var_1_16) + var_1_4))) : 1)) && (((((((32 | var_1_55)) < (var_1_42)) ? ((32 | var_1_55)) : (var_1_42))) >= var_1_116) ? (var_1_67 == ((unsigned short int) (var_1_39 - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))) : ((2.5 < ((var_1_19 - var_1_20) / var_1_38)) ? (var_1_67 == ((unsigned short int) (var_1_39 - var_1_15))) : (var_1_67 == ((unsigned short int) ((((var_1_39) < (var_1_8)) ? (var_1_39) : (var_1_8)))))))) && (var_1_30 ? (var_1_68 == ((unsigned char) (var_1_45 && var_1_47))) : 1)) && ((var_1_43 < (1 >> var_1_70)) ? (var_1_69 == ((signed short int) (var_1_40 + (((((32) < (var_1_6)) ? (32) : (var_1_6))) - var_1_70)))) : (var_1_69 == ((signed short int) (var_1_36 - (((((var_1_71) > (var_1_72)) ? (var_1_71) : (var_1_72))) - ((((16) < (var_1_48)) ? (16) : (var_1_48))))))))) && ((var_1_66 > ((var_1_39 - var_1_4) - var_1_15)) ? (var_1_73 == ((float) ((((((var_1_74 + var_1_75)) > (var_1_76)) ? ((var_1_74 + var_1_75)) : (var_1_76))) - ((((var_1_20) < (var_1_19)) ? (var_1_20) : (var_1_19)))))) : (var_1_73 == ((float) ((var_1_61 + var_1_60) + 4.4f))))) && ((((-1 - var_1_5) + (var_1_43 - var_1_6)) >= var_1_14) ? (var_1_77 == ((unsigned char) (((((var_1_39 - ((((var_1_70) > (var_1_40)) ? (var_1_70) : (var_1_40))))) < ((var_1_5 + var_1_43))) ? ((var_1_39 - ((((var_1_70) > (var_1_40)) ? (var_1_70) : (var_1_40))))) : ((var_1_5 + var_1_43)))))) : 1)) && (var_1_78 == ((signed short int) (var_1_14 - var_1_70)))) && (var_1_79 == ((double) (var_1_74 - var_1_19)))) && (var_1_80 == ((signed long int) (var_1_5 - ((((var_1_17) < (var_1_36)) ? (var_1_17) : (var_1_36))))))) && (var_1_45 ? (var_1_81 == ((signed char) var_1_36)) : ((! ((var_1_52 << var_1_91) == var_1_15)) ? (var_1_81 == ((signed char) (var_1_43 - ((((((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36)))) > (var_1_40)) ? (((((var_1_16) < (var_1_36)) ? (var_1_16) : (var_1_36)))) : (var_1_40)))))) : (var_1_81 == ((signed char) (var_1_40 + (var_1_43 - var_1_16))))))) && (var_1_32 ? (var_1_82 == ((unsigned short int) ((var_1_71 - var_1_83) + (last_1_var_1_82 + var_1_43)))) : ((((var_1_34 * -2) * var_1_41) <= var_1_115) ? (var_1_82 == ((unsigned short int) ((((var_1_83) < (var_1_84)) ? (var_1_83) : (var_1_84))))) : (((var_1_109 * var_1_59) < var_1_109) ? (var_1_82 == ((unsigned short int) var_1_8)) : (var_1_82 == ((unsigned short int) (((((var_1_15 + var_1_43)) > ((39835 - var_1_5))) ? ((var_1_15 + var_1_43)) : ((39835 - var_1_5)))))))))) && (var_1_85 == ((float) (var_1_74 + ((((var_1_75) > (var_1_26)) ? (var_1_75) : (var_1_26))))))) && ((last_1_var_1_86 > 32.7f) ? (var_1_86 == ((float) var_1_20)) : (var_1_86 == ((float) (var_1_75 - var_1_76))))) && ((32 > var_1_41) ? (var_1_88 == ((double) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) : (var_1_88 == ((double) (var_1_20 - var_1_76))))) && (var_1_28 ? (((- var_1_33) > ((((var_1_100) < 0 ) ? -(var_1_100) : (var_1_100)))) ? (var_1_89 == ((unsigned char) (var_1_68 && var_1_47))) : (var_1_89 == ((unsigned char) ((! var_1_31) || (var_1_32 || var_1_30))))) : (var_1_89 == ((unsigned char) (! var_1_31))))) && ((((~ var_1_78) + var_1_111) < -4) ? (var_1_90 == ((unsigned char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_90 == ((unsigned char) ((((((var_1_36 - 8) + var_1_6)) > ((var_1_4 - (var_1_17 + var_1_43)))) ? (((var_1_36 - 8) + var_1_6)) : ((var_1_4 - (var_1_17 + var_1_43))))))))) && ((var_1_17 > var_1_57) ? (var_1_91 == ((signed long int) ((((var_1_77) < (var_1_16)) ? (var_1_77) : (var_1_16))))) : 1)) && ((var_1_30 || (16.875 <= var_1_88)) ? ((var_1_24 < ((((var_1_21) > ((var_1_41 + var_1_6))) ? (var_1_21) : ((var_1_41 + var_1_6))))) ? (((var_1_21 / var_1_39) < ((((var_1_66) < (var_1_43)) ? (var_1_66) : (var_1_43)))) ? (var_1_92 == ((signed char) (var_1_16 - (var_1_17 + (var_1_70 + var_1_43))))) : (var_1_92 == ((signed char) (var_1_16 - var_1_43)))) : (var_1_92 == ((signed char) ((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36)))))) : 1)) && ((var_1_45 || var_1_89) ? ((0 <= var_1_58) ? (var_1_95 == ((unsigned char) ((((var_1_6) < ((var_1_16 + ((((var_1_43) < (var_1_70)) ? (var_1_43) : (var_1_70)))))) ? (var_1_6) : ((var_1_16 + ((((var_1_43) < (var_1_70)) ? (var_1_43) : (var_1_70))))))))) : (var_1_95 == ((unsigned char) (((((128) > (var_1_39)) ? (128) : (var_1_39))) - var_1_17)))) : 1)) && ((var_1_5 != var_1_36) ? ((var_1_6 < var_1_115) ? (var_1_96 == ((unsigned char) ((var_1_70 + var_1_40) + var_1_16))) : ((((- var_1_42) < var_1_5) || var_1_32) ? (var_1_96 == ((unsigned char) ((((((var_1_97) > (var_1_15)) ? (var_1_97) : (var_1_15))) + (var_1_98 + var_1_99)) - ((((var_1_6) > (var_1_40)) ? (var_1_6) : (var_1_40)))))) : 1)) : ((var_1_99 != var_1_117) ? (var_1_96 == ((unsigned char) var_1_99)) : 1))) && (var_1_45 ? (var_1_100 == ((unsigned short int) ((((((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) < (var_1_40)) ? (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) : (var_1_40))))) : 1)) && ((var_1_80 <= var_1_83) ? (var_1_101 == ((unsigned char) (((((var_1_102 - 8) < 0 ) ? -(var_1_102 - 8) : (var_1_102 - 8))) - 2))) : (var_1_101 == ((unsigned char) ((((((((var_1_98) < (var_1_97)) ? (var_1_98) : (var_1_97)))) > (var_1_99)) ? (((((var_1_98) < (var_1_97)) ? (var_1_98) : (var_1_97)))) : (var_1_99))))))) && (((var_1_114 / var_1_38) >= (var_1_85 + var_1_109)) ? (var_1_103 == ((float) (var_1_20 - var_1_76))) : 1)) && (var_1_47 ? (var_1_104 == ((signed short int) var_1_70)) : (var_1_104 == ((signed short int) var_1_14)))) && (var_1_105 == ((double) var_1_26))) && (var_1_47 ? (var_1_106 == ((signed char) var_1_40)) : (var_1_106 == ((signed char) 32)))) && (var_1_45 ? (var_1_107 == ((signed long int) var_1_16)) : (var_1_107 == ((signed long int) var_1_108)))) && (var_1_109 == ((double) var_1_74))) && (var_1_110 == ((unsigned short int) var_1_5))) && (var_1_111 == ((unsigned char) var_1_5))) && (var_1_30 ? (var_1_112 == ((unsigned short int) var_1_118)) : 1)) && (var_1_113 == ((unsigned char) var_1_16))) && (var_1_47 ? (var_1_114 == ((double) var_1_19)) : (var_1_114 == ((double) var_1_74)))) && (var_1_89 ? (var_1_115 == ((signed long int) last_1_var_1_115)) : (var_1_115 == ((signed long int) var_1_50)))) && ((var_1_88 < (- (var_1_86 + var_1_88))) ? (var_1_116 == ((unsigned long int) var_1_58)) : (var_1_116 == ((unsigned long int) ((((var_1_17) > (var_1_58)) ? (var_1_17) : (var_1_58))))))) && ((var_1_26 > var_1_88) ? (var_1_117 == ((signed long int) ((((var_1_21) > (var_1_4)) ? (var_1_21) : (var_1_4))))) : 1)) && (var_1_118 == ((signed short int) var_1_21))
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
