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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -100;
double var_1_3 = 3.125;
double var_1_4 = 256.25;
signed long int var_1_12 = -8;
double var_1_14 = 0.6;
double var_1_15 = 24.625;
double var_1_20 = 63.8;
double var_1_21 = 100000000000.2;
double var_1_22 = 100000000000.5;
double var_1_23 = 99999.6;
double var_1_24 = 63.2;
double var_1_25 = 0.0;
double var_1_26 = 128.125;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
signed char var_1_31 = -2;
signed long int var_1_32 = 2;
signed char var_1_33 = 32;
signed char var_1_34 = 16;
double var_1_35 = 10.2;
double var_1_36 = -0.125;
double var_1_37 = 127.1;
unsigned short int var_1_38 = 16;
unsigned short int var_1_39 = 39592;
signed short int var_1_40 = 10;
signed long int var_1_42 = -2;
signed char var_1_43 = 25;
unsigned long int var_1_44 = 1;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 1;
signed char var_1_48 = 8;
signed char var_1_49 = 10;
signed char var_1_50 = 4;
signed char var_1_51 = -2;
signed char var_1_52 = 5;
signed char var_1_53 = -16;
signed char var_1_54 = 32;
signed char var_1_55 = 5;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 1;
signed long int var_1_59 = 1802937545;
unsigned long int var_1_60 = 256;
unsigned long int var_1_62 = 2904867911;
unsigned long int var_1_63 = 1000000000;
unsigned long int var_1_64 = 1000000000;
double var_1_65 = 63.4;
double var_1_66 = 0.0;
float var_1_67 = 8.5;
float var_1_68 = 1000000000.8;
float var_1_69 = 7.3;
signed char var_1_70 = -16;
unsigned char var_1_71 = 100;
unsigned char var_1_72 = 128;
unsigned char var_1_73 = 64;
unsigned char var_1_74 = 128;
unsigned long int var_1_76 = 10;
unsigned char var_1_77 = 200;
unsigned char var_1_78 = 50;
unsigned char var_1_79 = 32;
unsigned char var_1_80 = 4;
signed long int var_1_82 = -1000;
signed short int var_1_83 = 100;
unsigned short int var_1_84 = 1;
unsigned char var_1_85 = 1;
double var_1_87 = 9999999.7;
unsigned long int var_1_88 = 200;
unsigned char var_1_89 = 2;
signed long int var_1_90 = 5;
signed long int var_1_91 = -1678335799;
signed long int var_1_92 = 10000;
signed long int var_1_93 = 1485910897;
signed long int var_1_94 = 1646153032;
signed long int var_1_95 = -256;
signed char var_1_96 = 2;
signed char var_1_97 = 100;
signed short int var_1_98 = 2;
signed long int var_1_99 = -256;
unsigned char var_1_100 = 1;
signed char var_1_101 = -64;
unsigned char var_1_102 = 0;
unsigned char var_1_103 = 1;
unsigned long int var_1_104 = 8;
unsigned short int var_1_105 = 0;
unsigned char var_1_106 = 0;
unsigned long int var_1_107 = 0;
double var_1_108 = 16.5;
unsigned long int var_1_109 = 500;
signed short int var_1_110 = 25;
float var_1_111 = 63.125;
unsigned char var_1_112 = 64;
signed short int var_1_113 = 2;
unsigned char var_1_114 = 1;
double last_1_var_1_35 = 10.2;
signed short int last_1_var_1_40 = 10;
signed char last_1_var_1_48 = 8;
unsigned char last_1_var_1_56 = 1;
unsigned char last_1_var_1_58 = 1;
unsigned char last_1_var_1_71 = 100;
unsigned char last_1_var_1_100 = 1;
unsigned char last_1_var_1_102 = 0;
unsigned char last_1_var_1_103 = 1;
unsigned short int last_1_var_1_105 = 0;
unsigned long int last_1_var_1_107 = 0;
float last_1_var_1_111 = 63.125;
unsigned char last_1_var_1_114 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_21 = last_1_var_1_48;
 signed char stepLocal_20 = var_1_49;
 signed long int stepLocal_19 = last_1_var_1_40;
 unsigned long int stepLocal_18 = var_1_44;
 signed long int stepLocal_17 = last_1_var_1_40;
 signed long int stepLocal_16 = var_1_59;
 if (stepLocal_18 <= (last_1_var_1_71 + var_1_62)) {
  if (stepLocal_17 < last_1_var_1_105) {
   if (last_1_var_1_58) {
    var_1_71 = (((((var_1_72 - (var_1_73 - var_1_54))) > (var_1_43)) ? ((var_1_72 - (var_1_73 - var_1_54))) : (var_1_43)));
   } else {
    var_1_71 = (((((var_1_72) > (var_1_74)) ? (var_1_72) : (var_1_74))) - 50);
   }
  } else {
   if (stepLocal_19 > var_1_12) {
    var_1_71 = var_1_72;
   }
  }
 } else {
  if ((last_1_var_1_107 >> var_1_76) <= stepLocal_16) {
   if (stepLocal_20 == var_1_54) {
    var_1_71 = ((var_1_77 - var_1_76) - (var_1_78 + (var_1_79 - var_1_44)));
   } else {
    var_1_71 = ((var_1_73 - var_1_79) + var_1_44);
   }
  } else {
   if (var_1_3 <= ((((last_1_var_1_111) < (last_1_var_1_35)) ? (last_1_var_1_111) : (last_1_var_1_35)))) {
    var_1_71 = ((((var_1_80) > (var_1_76)) ? (var_1_80) : (var_1_76)));
   } else {
    if (var_1_33 == stepLocal_21) {
     var_1_71 = (var_1_43 + var_1_73);
    }
   }
  }
 }
 signed long int stepLocal_13 = var_1_12 * 32;
 if (stepLocal_13 > (64 - (var_1_59 - last_1_var_1_114))) {
  var_1_58 = (last_1_var_1_56 && (var_1_29 || var_1_57));
 } else {
  var_1_58 = var_1_57;
 }
 if (! last_1_var_1_102) {
  var_1_38 = (54265 - last_1_var_1_103);
 } else {
  var_1_38 = (var_1_39 - (last_1_var_1_100 + (var_1_34 + 4)));
 }
 var_1_95 = (((((var_1_55) < (var_1_44)) ? (var_1_55) : (var_1_44))) - var_1_78);
 if (var_1_37 == var_1_68) {
  var_1_96 = (var_1_44 - (var_1_97 - ((((32) < (var_1_79)) ? (32) : (var_1_79)))));
 } else {
  var_1_96 = (5 - var_1_44);
 }
 signed char stepLocal_31 = var_1_49;
 if (var_1_34 >= stepLocal_31) {
  var_1_98 = var_1_50;
 } else {
  var_1_98 = ((((var_1_95) > (var_1_78)) ? (var_1_95) : (var_1_78)));
 }
 signed long int stepLocal_37 = var_1_96 % var_1_91;
 if (stepLocal_37 <= var_1_80) {
  var_1_102 = var_1_57;
 } else {
  var_1_102 = var_1_47;
 }
 if (var_1_46) {
  var_1_103 = var_1_97;
 } else {
  var_1_103 = 1;
 }
 var_1_106 = var_1_57;
 if (var_1_102) {
  var_1_107 = var_1_80;
 }
 if (var_1_106) {
  var_1_108 = 25.25;
 }
 if (var_1_37 >= (var_1_21 + var_1_108)) {
  var_1_111 = ((var_1_24 - var_1_25) + var_1_23);
 }
 var_1_112 = 25;
 var_1_113 = var_1_53;
 var_1_114 = var_1_78;
 var_1_40 = ((var_1_71 + var_1_112) - var_1_103);
 if (var_1_46) {
  var_1_105 = var_1_71;
 } else {
  var_1_105 = var_1_114;
 }
 unsigned long int stepLocal_15 = 100u;
 if (stepLocal_15 > (var_1_62 - (var_1_71 + var_1_112))) {
  var_1_67 = (var_1_26 + (var_1_68 + ((((var_1_69) > (10.25f)) ? (var_1_69) : (10.25f)))));
 } else {
  var_1_67 = ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)));
 }
 if (((((var_1_12) < (var_1_114)) ? (var_1_12) : (var_1_114))) <= (var_1_105 / ((((-50) > (var_1_32)) ? (-50) : (var_1_32))))) {
  var_1_31 = (var_1_33 - var_1_34);
 }
 unsigned long int stepLocal_14 = (((var_1_112) < (10000u)) ? (var_1_112) : (10000u));
 if (var_1_108 > (- var_1_21)) {
  if (var_1_114 != stepLocal_14) {
   var_1_65 = ((var_1_66 - (var_1_25 - 256.375)) - var_1_26);
  }
 }
 if (var_1_114 > (-1 % -32)) {
  if (var_1_47 && var_1_46) {
   var_1_70 = ((((var_1_53) < ((var_1_55 - (64 - var_1_54)))) ? (var_1_53) : ((var_1_55 - (64 - var_1_54)))));
  }
 } else {
  var_1_70 = (var_1_55 - var_1_54);
 }
 unsigned char stepLocal_24 = var_1_72;
 if (stepLocal_24 >= 64) {
  var_1_83 = ((((var_1_52) > (var_1_79)) ? (var_1_52) : (var_1_79)));
 } else {
  if (var_1_23 >= var_1_69) {
   var_1_83 = 100;
  } else {
   var_1_83 = (var_1_78 + (var_1_96 + 16));
  }
 }
 signed long int stepLocal_26 = var_1_39 - var_1_72;
 if (stepLocal_26 <= var_1_103) {
  var_1_88 = ((((1000u) > ((3865917038u - var_1_74))) ? (1000u) : ((3865917038u - var_1_74))));
 }
 if (var_1_46) {
  var_1_90 = ((((((var_1_73) > (10000000)) ? (var_1_73) : (10000000))) + (var_1_64 - var_1_39)) - var_1_98);
 } else {
  if (var_1_103 < (((((var_1_43 - var_1_73)) < ((var_1_34 + var_1_39))) ? ((var_1_43 - var_1_73)) : ((var_1_34 + var_1_39))))) {
   var_1_90 = -8;
  } else {
   var_1_90 = ((((((var_1_91) < 0 ) ? -(var_1_91) : (var_1_91))) - (var_1_64 - var_1_39)) - var_1_103);
  }
 }
 if (var_1_58) {
  var_1_104 = var_1_114;
 } else {
  var_1_104 = var_1_39;
 }
 signed short int stepLocal_9 = var_1_40;
 if (stepLocal_9 != var_1_103) {
  if (var_1_30) {
   var_1_35 = var_1_26;
  } else {
   var_1_35 = var_1_36;
  }
 } else {
  var_1_35 = var_1_37;
 }
 if (! var_1_106) {
  var_1_89 = (var_1_79 + ((8 + var_1_54) + var_1_55));
 } else {
  if (var_1_36 >= 50.5) {
   var_1_89 = (var_1_72 - ((var_1_44 + var_1_54) + var_1_79));
  } else {
   if (var_1_35 < var_1_23) {
    var_1_89 = ((((((((var_1_55) > (0)) ? (var_1_55) : (0)))) > (((((var_1_34) > (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74))))) ? (var_1_34) : (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74)))))))) ? (((((var_1_55) > (0)) ? (var_1_55) : (0)))) : (((((var_1_34) > (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74))))) ? (var_1_34) : (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74)))))))));
   } else {
    var_1_89 = (((((var_1_55) > (var_1_54)) ? (var_1_55) : (var_1_54))) + var_1_34);
   }
  }
 }
 if (((((var_1_25) > (var_1_3)) ? (var_1_25) : (var_1_3))) > var_1_37) {
  if (var_1_55 <= var_1_79) {
   if (63.7f < var_1_65) {
    var_1_85 = (var_1_46 || (var_1_47 && (! var_1_29)));
   } else {
    var_1_85 = ((! (! var_1_58)) || var_1_28);
   }
  }
 }
 unsigned long int stepLocal_33 = var_1_88;
 if (var_1_23 >= var_1_67) {
  var_1_100 = var_1_54;
 } else {
  if (stepLocal_33 == (var_1_38 / var_1_39)) {
   var_1_100 = (var_1_77 - var_1_79);
  } else {
   var_1_100 = var_1_79;
  }
 }
 signed long int stepLocal_10 = var_1_33 - ((((var_1_34) > (var_1_43)) ? (var_1_34) : (var_1_43)));
 if (stepLocal_10 != (var_1_89 << var_1_44)) {
  var_1_42 = (var_1_114 + var_1_43);
 } else {
  var_1_42 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 unsigned char stepLocal_23 = var_1_114;
 signed long int stepLocal_22 = ((((16) < (var_1_32)) ? (16) : (var_1_32))) + var_1_40;
 if (stepLocal_22 >= var_1_39) {
  var_1_82 = ((var_1_114 + ((((var_1_74) < (var_1_100)) ? (var_1_74) : (var_1_100)))) + var_1_103);
 } else {
  if (stepLocal_23 < var_1_38) {
   var_1_82 = var_1_96;
  }
 }
 signed long int stepLocal_32 = var_1_55 << 2;
 if (stepLocal_32 >= (var_1_73 ^ (var_1_54 + var_1_100))) {
  var_1_99 = ((((var_1_55) < (var_1_114)) ? (var_1_55) : (var_1_114)));
 } else {
  var_1_99 = (var_1_100 - var_1_76);
 }
 if (var_1_85) {
  var_1_110 = var_1_33;
 } else {
  var_1_110 = var_1_105;
 }
 if (var_1_22 > (31.6 / var_1_25)) {
  if (var_1_39 < var_1_89) {
   var_1_45 = (var_1_102 || (var_1_85 || var_1_30));
  } else {
   if (var_1_24 > (var_1_36 / var_1_25)) {
    if (var_1_111 > (- var_1_20)) {
     if ((var_1_21 <= var_1_22) && var_1_29) {
      var_1_45 = (var_1_28 || (var_1_46 && var_1_47));
     }
    }
   } else {
    var_1_45 = ((var_1_103 <= var_1_38) || (! var_1_29));
   }
  }
 } else {
  var_1_45 = (! var_1_28);
 }
 signed short int stepLocal_8 = var_1_98;
 unsigned char stepLocal_7 = var_1_28;
 unsigned char stepLocal_6 = var_1_112 > (var_1_98 * var_1_112);
 if (var_1_35 < -0.375) {
  var_1_27 = (! var_1_28);
 } else {
  if (((9.6 + var_1_4) <= var_1_3) && stepLocal_6) {
   if (! var_1_45) {
    if (var_1_112 < stepLocal_8) {
     var_1_27 = var_1_28;
    } else {
     if (var_1_45 && stepLocal_7) {
      var_1_27 = (var_1_45 && var_1_29);
     }
    }
   } else {
    var_1_27 = ((var_1_28 && (! var_1_29)) && (var_1_45 || var_1_30));
   }
  } else {
   var_1_27 = (var_1_45 && (! var_1_28));
  }
 }
 unsigned char stepLocal_25 = var_1_46;
 if (! (var_1_32 >= var_1_77)) {
  if (var_1_27 || stepLocal_25) {
   var_1_84 = var_1_55;
  }
 }
 if (var_1_85 || var_1_27) {
  var_1_87 = (var_1_22 - var_1_66);
 } else {
  var_1_87 = (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - (var_1_22 + var_1_26));
 }
 unsigned char stepLocal_36 = var_1_103;
 unsigned short int stepLocal_35 = var_1_84;
 unsigned char stepLocal_34 = var_1_106;
 if ((var_1_39 - var_1_34) != stepLocal_35) {
  if (stepLocal_36 <= var_1_100) {
   if (! var_1_85) {
    var_1_101 = ((((var_1_55) < (var_1_77)) ? (var_1_55) : (var_1_77)));
   } else {
    var_1_101 = ((((var_1_77) < (var_1_34)) ? (var_1_77) : (var_1_34)));
   }
  } else {
   var_1_101 = (((((((((var_1_78) < (var_1_79)) ? (var_1_78) : (var_1_79))) - var_1_97)) < ((var_1_34 - var_1_54))) ? ((((((var_1_78) < (var_1_79)) ? (var_1_78) : (var_1_79))) - var_1_97)) : ((var_1_34 - var_1_54))));
  }
 } else {
  if (stepLocal_34 || var_1_85) {
   var_1_101 = (var_1_44 - (var_1_97 - var_1_55));
  }
 }
 if (var_1_45) {
  var_1_109 = var_1_97;
 } else {
  var_1_109 = var_1_44;
 }
 unsigned char stepLocal_12 = var_1_38 > var_1_109;
 unsigned char stepLocal_11 = var_1_30;
 if (stepLocal_12 || (var_1_4 <= (var_1_108 + 49.2))) {
  if (var_1_46 && stepLocal_11) {
   if (var_1_29) {
    var_1_48 = (var_1_44 - var_1_34);
   } else {
    var_1_48 = ((((var_1_49) < (var_1_33)) ? (var_1_49) : (var_1_33)));
   }
  }
 } else {
  var_1_48 = (var_1_49 + var_1_51);
 }
 if ((var_1_109 + (var_1_34 & var_1_107)) == (32 % var_1_39)) {
  var_1_56 = var_1_46;
 } else {
  var_1_56 = (((var_1_46 && var_1_58) && var_1_29) || var_1_57);
 }
 unsigned char stepLocal_2 = var_1_114;
 unsigned char stepLocal_1 = var_1_112;
 unsigned char stepLocal_0 = var_1_45;
 if (var_1_108 > (var_1_3 - var_1_4)) {
  if ((var_1_3 < var_1_4) && stepLocal_0) {
   if (-256 >= stepLocal_1) {
    var_1_1 = ((((var_1_83) < (var_1_114)) ? (var_1_83) : (var_1_114)));
   } else {
    var_1_1 = (((1000000000 - var_1_71) + (1000000000 - var_1_114)) - var_1_84);
   }
  } else {
   var_1_1 = (((((var_1_71 - var_1_84)) < (((64 - var_1_114) + -100))) ? ((var_1_71 - var_1_84)) : (((64 - var_1_114) + -100))));
  }
 } else {
  if (stepLocal_2 >= ((var_1_83 / 100000) / var_1_12)) {
   var_1_1 = var_1_70;
  }
 }
 signed char stepLocal_5 = var_1_96;
 signed long int stepLocal_4 = (var_1_112 + var_1_114) - var_1_89;
 signed long int stepLocal_3 = -128;
 if (var_1_85) {
  if (var_1_4 < (- ((((var_1_3) > (var_1_108)) ? (var_1_3) : (var_1_108))))) {
   var_1_14 = var_1_15;
  } else {
   if (var_1_27) {
    var_1_14 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
   } else {
    if (256.5 < (var_1_4 - var_1_3)) {
     if (stepLocal_4 > ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) {
      var_1_14 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
     } else {
      if ((var_1_114 >> var_1_96) >= stepLocal_3) {
       var_1_14 = (var_1_20 + var_1_21);
      } else {
       var_1_14 = (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) + (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) - var_1_24));
      }
     }
    }
   }
  }
 } else {
  if (var_1_24 < var_1_22) {
   if (stepLocal_5 <= (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))) % var_1_12)) {
    var_1_14 = ((((var_1_21) > (var_1_15)) ? (var_1_21) : (var_1_15)));
   } else {
    var_1_14 = ((((var_1_21) < ((var_1_22 - var_1_23))) ? (var_1_21) : ((var_1_22 - var_1_23))));
   }
  } else {
   var_1_14 = ((var_1_24 + (var_1_25 - var_1_26)) - var_1_23);
  }
 }
 if (var_1_55 <= ((((var_1_39) < (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) ? (var_1_39) : (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))))) {
  if (var_1_48 > var_1_53) {
   var_1_60 = var_1_54;
  } else {
   var_1_60 = (((((var_1_100 + var_1_84)) > (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))) ? ((var_1_100 + var_1_84)) : (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))));
  }
 } else {
  if (var_1_12 > (var_1_98 | var_1_70)) {
   var_1_60 = (var_1_62 - ((var_1_63 - var_1_114) + (var_1_64 - var_1_34)));
  } else {
   if (var_1_52 <= -128) {
    var_1_60 = var_1_43;
   }
  }
 }
 unsigned char stepLocal_30 = var_1_106;
 unsigned char stepLocal_29 = var_1_56;
 signed long int stepLocal_28 = var_1_74 + (var_1_32 & var_1_72);
 unsigned long int stepLocal_27 = (var_1_78 % var_1_77) * var_1_63;
 if (var_1_59 >= stepLocal_28) {
  if (stepLocal_29 && var_1_106) {
   var_1_92 = (var_1_33 + var_1_55);
  } else {
   var_1_92 = ((2102729077 - (1 + var_1_43)) - ((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))));
  }
 } else {
  if (stepLocal_27 == (((((2989760416u - var_1_39)) < ((var_1_112 >> var_1_89))) ? ((2989760416u - var_1_39)) : ((var_1_112 >> var_1_89))))) {
   if (! var_1_45) {
    var_1_92 = (-1 - (var_1_93 - (var_1_79 + var_1_103)));
   } else {
    if ((var_1_66 == var_1_69) && stepLocal_30) {
     var_1_92 = (((var_1_94 - var_1_80) - var_1_105) - 256);
    } else {
     var_1_92 = (((var_1_94 - var_1_114) - var_1_80) - var_1_89);
    }
   }
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 assume_abort_if_not(var_1_12 != 0);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 2305843.009213691390e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691390e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -1);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -63);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -63);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -31);
 assume_abort_if_not(var_1_51 <= 32);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -31);
 assume_abort_if_not(var_1_52 <= 31);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -31);
 assume_abort_if_not(var_1_53 <= 31);
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 32);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 31);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 0);
 var_1_59 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_59 >= 1073741823);
 assume_abort_if_not(var_1_59 <= 2147483647);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 2147483647);
 assume_abort_if_not(var_1_62 <= 4294967294);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 536870912);
 assume_abort_if_not(var_1_63 <= 1073741824);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 536870911);
 assume_abort_if_not(var_1_64 <= 1073741823);
 var_1_66 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_66 >= 4611686.018427382800e+12F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854765600e+12F && var_1_66 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_68 >= -230584.3009213691390e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691390e+12F && var_1_68 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_69 >= -230584.3009213691390e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691390e+12F && var_1_69 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 127);
 assume_abort_if_not(var_1_72 <= 254);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 63);
 assume_abort_if_not(var_1_73 <= 127);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 127);
 assume_abort_if_not(var_1_74 <= 254);
 var_1_76 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 32);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 190);
 assume_abort_if_not(var_1_77 <= 254);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 64);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 31);
 assume_abort_if_not(var_1_79 <= 63);
 var_1_80 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 254);
 var_1_91 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_91 >= -2147483646);
 assume_abort_if_not(var_1_91 <= -1073741822);
 var_1_93 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_93 >= 1073741823);
 assume_abort_if_not(var_1_93 <= 2147483646);
 var_1_94 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_94 >= 1610612734);
 assume_abort_if_not(var_1_94 <= 2147483646);
 var_1_97 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_97 >= 63);
 assume_abort_if_not(var_1_97 <= 126);
}
void updateLastVariables() {
 last_1_var_1_35 = var_1_35;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_105 = var_1_105;
 last_1_var_1_107 = var_1_107;
 last_1_var_1_111 = var_1_111;
 last_1_var_1_114 = var_1_114;
}
int property() {
 return (((((((((((((((((((((((((((((((((((((((((((((var_1_108 > (var_1_3 - var_1_4)) ? (((var_1_3 < var_1_4) && var_1_45) ? ((-256 >= var_1_112) ? (var_1_1 == ((signed long int) ((((var_1_83) < (var_1_114)) ? (var_1_83) : (var_1_114))))) : (var_1_1 == ((signed long int) (((1000000000 - var_1_71) + (1000000000 - var_1_114)) - var_1_84)))) : (var_1_1 == ((signed long int) (((((var_1_71 - var_1_84)) < (((64 - var_1_114) + -100))) ? ((var_1_71 - var_1_84)) : (((64 - var_1_114) + -100))))))) : ((var_1_114 >= ((var_1_83 / 100000) / var_1_12)) ? (var_1_1 == ((signed long int) var_1_70)) : 1)) && (var_1_85 ? ((var_1_4 < (- ((((var_1_3) > (var_1_108)) ? (var_1_3) : (var_1_108))))) ? (var_1_14 == ((double) var_1_15)) : (var_1_27 ? (var_1_14 == ((double) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : ((256.5 < (var_1_4 - var_1_3)) ? ((((var_1_112 + var_1_114) - var_1_89) > ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) ? (var_1_14 == ((double) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) : (((var_1_114 >> var_1_96) >= -128) ? (var_1_14 == ((double) (var_1_20 + var_1_21))) : (var_1_14 == ((double) (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) + (((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))) - var_1_24)))))) : 1))) : ((var_1_24 < var_1_22) ? ((var_1_96 <= (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))) % var_1_12)) ? (var_1_14 == ((double) ((((var_1_21) > (var_1_15)) ? (var_1_21) : (var_1_15))))) : (var_1_14 == ((double) ((((var_1_21) < ((var_1_22 - var_1_23))) ? (var_1_21) : ((var_1_22 - var_1_23))))))) : (var_1_14 == ((double) ((var_1_24 + (var_1_25 - var_1_26)) - var_1_23)))))) && ((var_1_35 < -0.375) ? (var_1_27 == ((unsigned char) (! var_1_28))) : ((((9.6 + var_1_4) <= var_1_3) && (var_1_112 > (var_1_98 * var_1_112))) ? ((! var_1_45) ? ((var_1_112 < var_1_98) ? (var_1_27 == ((unsigned char) var_1_28)) : ((var_1_45 && var_1_28) ? (var_1_27 == ((unsigned char) (var_1_45 && var_1_29))) : 1)) : (var_1_27 == ((unsigned char) ((var_1_28 && (! var_1_29)) && (var_1_45 || var_1_30))))) : (var_1_27 == ((unsigned char) (var_1_45 && (! var_1_28))))))) && ((((((var_1_12) < (var_1_114)) ? (var_1_12) : (var_1_114))) <= (var_1_105 / ((((-50) > (var_1_32)) ? (-50) : (var_1_32))))) ? (var_1_31 == ((signed char) (var_1_33 - var_1_34))) : 1)) && ((var_1_40 != var_1_103) ? (var_1_30 ? (var_1_35 == ((double) var_1_26)) : (var_1_35 == ((double) var_1_36))) : (var_1_35 == ((double) var_1_37)))) && ((! last_1_var_1_102) ? (var_1_38 == ((unsigned short int) (54265 - last_1_var_1_103))) : (var_1_38 == ((unsigned short int) (var_1_39 - (last_1_var_1_100 + (var_1_34 + 4))))))) && (var_1_40 == ((signed short int) ((var_1_71 + var_1_112) - var_1_103)))) && (((var_1_33 - ((((var_1_34) > (var_1_43)) ? (var_1_34) : (var_1_43)))) != (var_1_89 << var_1_44)) ? (var_1_42 == ((signed long int) (var_1_114 + var_1_43))) : (var_1_42 == ((signed long int) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) && ((var_1_22 > (31.6 / var_1_25)) ? ((var_1_39 < var_1_89) ? (var_1_45 == ((unsigned char) (var_1_102 || (var_1_85 || var_1_30)))) : ((var_1_24 > (var_1_36 / var_1_25)) ? ((var_1_111 > (- var_1_20)) ? (((var_1_21 <= var_1_22) && var_1_29) ? (var_1_45 == ((unsigned char) (var_1_28 || (var_1_46 && var_1_47)))) : 1) : 1) : (var_1_45 == ((unsigned char) ((var_1_103 <= var_1_38) || (! var_1_29)))))) : (var_1_45 == ((unsigned char) (! var_1_28))))) && (((var_1_38 > var_1_109) || (var_1_4 <= (var_1_108 + 49.2))) ? ((var_1_46 && var_1_30) ? (var_1_29 ? (var_1_48 == ((signed char) (var_1_44 - var_1_34))) : (var_1_48 == ((signed char) ((((var_1_49) < (var_1_33)) ? (var_1_49) : (var_1_33)))))) : 1) : (var_1_48 == ((signed char) (var_1_49 + var_1_51))))) && (((var_1_109 + (var_1_34 & var_1_107)) == (32 % var_1_39)) ? (var_1_56 == ((unsigned char) var_1_46)) : (var_1_56 == ((unsigned char) (((var_1_46 && var_1_58) && var_1_29) || var_1_57))))) && (((var_1_12 * 32) > (64 - (var_1_59 - last_1_var_1_114))) ? (var_1_58 == ((unsigned char) (last_1_var_1_56 && (var_1_29 || var_1_57)))) : (var_1_58 == ((unsigned char) var_1_57)))) && ((var_1_55 <= ((((var_1_39) < (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) ? (var_1_39) : (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))))) ? ((var_1_48 > var_1_53) ? (var_1_60 == ((unsigned long int) var_1_54)) : (var_1_60 == ((unsigned long int) (((((var_1_100 + var_1_84)) > (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))) ? ((var_1_100 + var_1_84)) : (((((var_1_89) < 0 ) ? -(var_1_89) : (var_1_89))))))))) : ((var_1_12 > (var_1_98 | var_1_70)) ? (var_1_60 == ((unsigned long int) (var_1_62 - ((var_1_63 - var_1_114) + (var_1_64 - var_1_34))))) : ((var_1_52 <= -128) ? (var_1_60 == ((unsigned long int) var_1_43)) : 1)))) && ((var_1_108 > (- var_1_21)) ? ((var_1_114 != ((((var_1_112) < (10000u)) ? (var_1_112) : (10000u)))) ? (var_1_65 == ((double) ((var_1_66 - (var_1_25 - 256.375)) - var_1_26))) : 1) : 1)) && ((100u > (var_1_62 - (var_1_71 + var_1_112))) ? (var_1_67 == ((float) (var_1_26 + (var_1_68 + ((((var_1_69) > (10.25f)) ? (var_1_69) : (10.25f))))))) : (var_1_67 == ((float) ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))))) && ((var_1_114 > (-1 % -32)) ? ((var_1_47 && var_1_46) ? (var_1_70 == ((signed char) ((((var_1_53) < ((var_1_55 - (64 - var_1_54)))) ? (var_1_53) : ((var_1_55 - (64 - var_1_54))))))) : 1) : (var_1_70 == ((signed char) (var_1_55 - var_1_54))))) && ((var_1_44 <= (last_1_var_1_71 + var_1_62)) ? ((last_1_var_1_40 < last_1_var_1_105) ? (last_1_var_1_58 ? (var_1_71 == ((unsigned char) (((((var_1_72 - (var_1_73 - var_1_54))) > (var_1_43)) ? ((var_1_72 - (var_1_73 - var_1_54))) : (var_1_43))))) : (var_1_71 == ((unsigned char) (((((var_1_72) > (var_1_74)) ? (var_1_72) : (var_1_74))) - 50)))) : ((last_1_var_1_40 > var_1_12) ? (var_1_71 == ((unsigned char) var_1_72)) : 1)) : (((last_1_var_1_107 >> var_1_76) <= var_1_59) ? ((var_1_49 == var_1_54) ? (var_1_71 == ((unsigned char) ((var_1_77 - var_1_76) - (var_1_78 + (var_1_79 - var_1_44))))) : (var_1_71 == ((unsigned char) ((var_1_73 - var_1_79) + var_1_44)))) : ((var_1_3 <= ((((last_1_var_1_111) < (last_1_var_1_35)) ? (last_1_var_1_111) : (last_1_var_1_35)))) ? (var_1_71 == ((unsigned char) ((((var_1_80) > (var_1_76)) ? (var_1_80) : (var_1_76))))) : ((var_1_33 == last_1_var_1_48) ? (var_1_71 == ((unsigned char) (var_1_43 + var_1_73))) : 1))))) && (((((((16) < (var_1_32)) ? (16) : (var_1_32))) + var_1_40) >= var_1_39) ? (var_1_82 == ((signed long int) ((var_1_114 + ((((var_1_74) < (var_1_100)) ? (var_1_74) : (var_1_100)))) + var_1_103))) : ((var_1_114 < var_1_38) ? (var_1_82 == ((signed long int) var_1_96)) : 1))) && ((var_1_72 >= 64) ? (var_1_83 == ((signed short int) ((((var_1_52) > (var_1_79)) ? (var_1_52) : (var_1_79))))) : ((var_1_23 >= var_1_69) ? (var_1_83 == ((signed short int) 100)) : (var_1_83 == ((signed short int) (var_1_78 + (var_1_96 + 16))))))) && ((! (var_1_32 >= var_1_77)) ? ((var_1_27 || var_1_46) ? (var_1_84 == ((unsigned short int) var_1_55)) : 1) : 1)) && ((((((var_1_25) > (var_1_3)) ? (var_1_25) : (var_1_3))) > var_1_37) ? ((var_1_55 <= var_1_79) ? ((63.7f < var_1_65) ? (var_1_85 == ((unsigned char) (var_1_46 || (var_1_47 && (! var_1_29))))) : (var_1_85 == ((unsigned char) ((! (! var_1_58)) || var_1_28)))) : 1) : 1)) && ((var_1_85 || var_1_27) ? (var_1_87 == ((double) (var_1_22 - var_1_66))) : (var_1_87 == ((double) (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) - (var_1_22 + var_1_26)))))) && (((var_1_39 - var_1_72) <= var_1_103) ? (var_1_88 == ((unsigned long int) ((((1000u) > ((3865917038u - var_1_74))) ? (1000u) : ((3865917038u - var_1_74)))))) : 1)) && ((! var_1_106) ? (var_1_89 == ((unsigned char) (var_1_79 + ((8 + var_1_54) + var_1_55)))) : ((var_1_36 >= 50.5) ? (var_1_89 == ((unsigned char) (var_1_72 - ((var_1_44 + var_1_54) + var_1_79)))) : ((var_1_35 < var_1_23) ? (var_1_89 == ((unsigned char) ((((((((var_1_55) > (0)) ? (var_1_55) : (0)))) > (((((var_1_34) > (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74))))) ? (var_1_34) : (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74)))))))) ? (((((var_1_55) > (0)) ? (var_1_55) : (0)))) : (((((var_1_34) > (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74))))) ? (var_1_34) : (((((var_1_80) < (var_1_74)) ? (var_1_80) : (var_1_74))))))))))) : (var_1_89 == ((unsigned char) (((((var_1_55) > (var_1_54)) ? (var_1_55) : (var_1_54))) + var_1_34))))))) && (var_1_46 ? (var_1_90 == ((signed long int) ((((((var_1_73) > (10000000)) ? (var_1_73) : (10000000))) + (var_1_64 - var_1_39)) - var_1_98))) : ((var_1_103 < (((((var_1_43 - var_1_73)) < ((var_1_34 + var_1_39))) ? ((var_1_43 - var_1_73)) : ((var_1_34 + var_1_39))))) ? (var_1_90 == ((signed long int) -8)) : (var_1_90 == ((signed long int) ((((((var_1_91) < 0 ) ? -(var_1_91) : (var_1_91))) - (var_1_64 - var_1_39)) - var_1_103)))))) && ((var_1_59 >= (var_1_74 + (var_1_32 & var_1_72))) ? ((var_1_56 && var_1_106) ? (var_1_92 == ((signed long int) (var_1_33 + var_1_55))) : (var_1_92 == ((signed long int) ((2102729077 - (1 + var_1_43)) - ((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))))))) : ((((var_1_78 % var_1_77) * var_1_63) == (((((2989760416u - var_1_39)) < ((var_1_112 >> var_1_89))) ? ((2989760416u - var_1_39)) : ((var_1_112 >> var_1_89))))) ? ((! var_1_45) ? (var_1_92 == ((signed long int) (-1 - (var_1_93 - (var_1_79 + var_1_103))))) : (((var_1_66 == var_1_69) && var_1_106) ? (var_1_92 == ((signed long int) (((var_1_94 - var_1_80) - var_1_105) - 256))) : (var_1_92 == ((signed long int) (((var_1_94 - var_1_114) - var_1_80) - var_1_89))))) : 1))) && (var_1_95 == ((signed long int) (((((var_1_55) < (var_1_44)) ? (var_1_55) : (var_1_44))) - var_1_78)))) && ((var_1_37 == var_1_68) ? (var_1_96 == ((signed char) (var_1_44 - (var_1_97 - ((((32) < (var_1_79)) ? (32) : (var_1_79))))))) : (var_1_96 == ((signed char) (5 - var_1_44))))) && ((var_1_34 >= var_1_49) ? (var_1_98 == ((signed short int) var_1_50)) : (var_1_98 == ((signed short int) ((((var_1_95) > (var_1_78)) ? (var_1_95) : (var_1_78))))))) && (((var_1_55 << 2) >= (var_1_73 ^ (var_1_54 + var_1_100))) ? (var_1_99 == ((signed long int) ((((var_1_55) < (var_1_114)) ? (var_1_55) : (var_1_114))))) : (var_1_99 == ((signed long int) (var_1_100 - var_1_76))))) && ((var_1_23 >= var_1_67) ? (var_1_100 == ((unsigned char) var_1_54)) : ((var_1_88 == (var_1_38 / var_1_39)) ? (var_1_100 == ((unsigned char) (var_1_77 - var_1_79))) : (var_1_100 == ((unsigned char) var_1_79))))) && (((var_1_39 - var_1_34) != var_1_84) ? ((var_1_103 <= var_1_100) ? ((! var_1_85) ? (var_1_101 == ((signed char) ((((var_1_55) < (var_1_77)) ? (var_1_55) : (var_1_77))))) : (var_1_101 == ((signed char) ((((var_1_77) < (var_1_34)) ? (var_1_77) : (var_1_34)))))) : (var_1_101 == ((signed char) (((((((((var_1_78) < (var_1_79)) ? (var_1_78) : (var_1_79))) - var_1_97)) < ((var_1_34 - var_1_54))) ? ((((((var_1_78) < (var_1_79)) ? (var_1_78) : (var_1_79))) - var_1_97)) : ((var_1_34 - var_1_54))))))) : ((var_1_106 || var_1_85) ? (var_1_101 == ((signed char) (var_1_44 - (var_1_97 - var_1_55)))) : 1))) && (((var_1_96 % var_1_91) <= var_1_80) ? (var_1_102 == ((unsigned char) var_1_57)) : (var_1_102 == ((unsigned char) var_1_47)))) && (var_1_46 ? (var_1_103 == ((unsigned char) var_1_97)) : (var_1_103 == ((unsigned char) 1)))) && (var_1_58 ? (var_1_104 == ((unsigned long int) var_1_114)) : (var_1_104 == ((unsigned long int) var_1_39)))) && (var_1_46 ? (var_1_105 == ((unsigned short int) var_1_71)) : (var_1_105 == ((unsigned short int) var_1_114)))) && (var_1_106 == ((unsigned char) var_1_57))) && (var_1_102 ? (var_1_107 == ((unsigned long int) var_1_80)) : 1)) && (var_1_106 ? (var_1_108 == ((double) 25.25)) : 1)) && (var_1_45 ? (var_1_109 == ((unsigned long int) var_1_97)) : (var_1_109 == ((unsigned long int) var_1_44)))) && (var_1_85 ? (var_1_110 == ((signed short int) var_1_33)) : (var_1_110 == ((signed short int) var_1_105)))) && ((var_1_37 >= (var_1_21 + var_1_108)) ? (var_1_111 == ((float) ((var_1_24 - var_1_25) + var_1_23))) : 1)) && (var_1_112 == ((unsigned char) 25))) && (var_1_113 == ((signed short int) var_1_53))) && (var_1_114 == ((unsigned char) var_1_78))
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
