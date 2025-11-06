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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 100;
signed short int var_1_6 = 0;
signed short int var_1_9 = -1;
signed short int var_1_10 = -4;
signed long int var_1_11 = 100000;
float var_1_12 = 1.6;
float var_1_13 = 100.66;
float var_1_14 = 16.95;
float var_1_15 = 15.5;
unsigned char var_1_17 = 1;
float var_1_18 = -0.8;
float var_1_19 = 0.0;
signed short int var_1_20 = -5;
unsigned long int var_1_21 = 2;
signed short int var_1_23 = -128;
signed long int var_1_24 = 1;
float var_1_25 = 8.4;
signed char var_1_26 = 64;
signed short int var_1_27 = 4;
signed char var_1_28 = 32;
unsigned char var_1_29 = 128;
signed char var_1_30 = 100;
signed short int var_1_31 = 32;
signed short int var_1_32 = 30902;
signed short int var_1_33 = -8;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 100;
float var_1_37 = 16.2;
signed short int var_1_38 = 8;
signed char var_1_39 = -8;
signed char var_1_41 = 10;
signed char var_1_42 = 5;
signed char var_1_43 = 16;
signed char var_1_44 = 0;
float var_1_45 = -0.2;
float var_1_46 = -0.5;
double var_1_47 = 0.8;
signed long int var_1_48 = -5;
unsigned long int var_1_50 = 4;
unsigned long int var_1_51 = 3693577728;
unsigned long int var_1_52 = 3622302678;
float var_1_53 = 1.8;
float var_1_54 = 24.8;
float var_1_55 = 5.64;
float var_1_56 = 8.4;
double var_1_57 = 24.5;
double var_1_58 = 16.5;
unsigned long int var_1_59 = 32;
double var_1_60 = 32.75;
double var_1_61 = 1.625;
signed char var_1_62 = -1;
unsigned short int var_1_63 = 2;
unsigned short int var_1_65 = 26108;
unsigned short int var_1_66 = 26389;
unsigned short int var_1_67 = 29706;
unsigned short int var_1_68 = 63742;
unsigned char var_1_69 = 8;
unsigned char var_1_70 = 64;
unsigned char var_1_71 = 50;
unsigned char var_1_72 = 50;
float var_1_74 = 10.2;
unsigned char var_1_75 = 200;
unsigned short int var_1_76 = 4;
float var_1_77 = 0.0;
unsigned short int var_1_78 = 21123;
float var_1_79 = 3.5;
signed short int var_1_80 = 5;
signed long int var_1_81 = -256;
unsigned char var_1_82 = 100;
unsigned char var_1_83 = 128;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 0;
unsigned char var_1_90 = 0;
signed short int var_1_91 = -8;
unsigned char var_1_92 = 0;
signed char var_1_93 = -4;
unsigned short int var_1_94 = 64;
double var_1_95 = 255.1;
unsigned short int var_1_96 = 16;
signed char var_1_97 = -8;
signed short int var_1_98 = 50;
unsigned char var_1_99 = 25;
unsigned char var_1_100 = 1;
signed short int var_1_101 = 256;
unsigned long int var_1_102 = 1;
unsigned char var_1_103 = 32;
signed long int var_1_104 = -4;
unsigned long int var_1_105 = 32;
unsigned char var_1_106 = 0;
signed short int var_1_108 = 64;
signed short int last_1_var_1_20 = -5;
unsigned long int last_1_var_1_21 = 2;
unsigned char last_1_var_1_34 = 64;
float last_1_var_1_37 = 16.2;
signed char last_1_var_1_39 = -8;
double last_1_var_1_57 = 24.5;
unsigned long int last_1_var_1_59 = 32;
unsigned char last_1_var_1_69 = 8;
unsigned short int last_1_var_1_76 = 4;
unsigned char last_1_var_1_84 = 1;
unsigned char last_1_var_1_92 = 0;
unsigned short int last_1_var_1_94 = 64;
unsigned long int last_1_var_1_102 = 1;
unsigned long int last_1_var_1_105 = 32;
unsigned char last_1_var_1_106 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_28 = (((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41));
 if (last_1_var_1_21 > stepLocal_28) {
  var_1_92 = (! (var_1_85 || var_1_89));
 } else {
  var_1_92 = ((! last_1_var_1_84) || (var_1_87 || var_1_90));
 }
 unsigned char stepLocal_25 = last_1_var_1_106;
 if (stepLocal_25 && var_1_86) {
  if (var_1_87) {
   var_1_88 = var_1_89;
  } else {
   var_1_88 = ((var_1_52 >= var_1_68) && var_1_86);
  }
 } else {
  var_1_88 = (last_1_var_1_92 || var_1_90);
 }
 if (last_1_var_1_92) {
  var_1_23 = ((-8 + -4) + last_1_var_1_94);
 } else {
  var_1_23 = (last_1_var_1_69 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))));
 }
 if (((((last_1_var_1_94) < (last_1_var_1_105)) ? (last_1_var_1_94) : (last_1_var_1_105))) == var_1_29) {
  if (last_1_var_1_57 <= last_1_var_1_37) {
   var_1_48 = (last_1_var_1_39 + var_1_9);
  }
 } else {
  var_1_48 = (last_1_var_1_34 + (last_1_var_1_59 + var_1_29));
 }
 signed long int stepLocal_24 = (var_1_78 - var_1_42) >> (var_1_27 + var_1_80);
 unsigned char stepLocal_23 = var_1_17;
 if (var_1_6 >= stepLocal_24) {
  if (var_1_48 >= stepLocal_23) {
   var_1_79 = var_1_14;
  } else {
   var_1_79 = (var_1_55 + var_1_56);
  }
 } else {
  var_1_79 = (var_1_15 - ((((var_1_19) < (var_1_14)) ? (var_1_19) : (var_1_14))));
 }
 if ((var_1_18 * ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19)))) <= var_1_14) {
  var_1_38 = ((var_1_48 - var_1_27) + (((((var_1_35) < (var_1_17)) ? (var_1_35) : (var_1_17))) + var_1_30));
 } else {
  var_1_38 = ((((((var_1_48) > (var_1_17)) ? (var_1_48) : (var_1_17))) + var_1_36) - var_1_30);
 }
 var_1_50 = ((((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52))) - var_1_44) - var_1_38);
 unsigned char stepLocal_12 = var_1_29;
 signed short int stepLocal_11 = var_1_6;
 if (stepLocal_12 > var_1_10) {
  var_1_34 = (var_1_35 - ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))));
 } else {
  if (var_1_10 <= stepLocal_11) {
   var_1_34 = ((((var_1_36) < ((((((var_1_35 - var_1_27)) < (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) ? ((var_1_35 - var_1_27)) : (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))))) ? (var_1_36) : ((((((var_1_35 - var_1_27)) < (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) ? ((var_1_35 - var_1_27)) : (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))))));
  }
 }
 var_1_37 = (var_1_14 + var_1_13);
 signed long int stepLocal_16 = var_1_29 + var_1_6;
 signed short int stepLocal_15 = var_1_27;
 if (-4 >= stepLocal_15) {
  var_1_47 = (var_1_13 + var_1_14);
 } else {
  if (50 == stepLocal_16) {
   var_1_47 = ((var_1_14 + var_1_13) - var_1_19);
  }
 }
 if (var_1_88) {
  var_1_57 = (var_1_15 - (var_1_13 + var_1_14));
 }
 if (var_1_19 <= var_1_13) {
  var_1_58 = ((((var_1_55) > ((((((var_1_19 - var_1_13)) > (var_1_56)) ? ((var_1_19 - var_1_13)) : (var_1_56))))) ? (var_1_55) : ((((((var_1_19 - var_1_13)) > (var_1_56)) ? ((var_1_19 - var_1_13)) : (var_1_56))))));
 }
 if (((last_1_var_1_59 % var_1_51) % var_1_29) > (((((var_1_42 + var_1_26)) > (var_1_36)) ? ((var_1_42 + var_1_26)) : (var_1_36)))) {
  var_1_59 = ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)));
 }
 var_1_82 = (var_1_83 - (var_1_27 + ((((32) > (var_1_43)) ? (32) : (var_1_43)))));
 if (var_1_77 >= var_1_13) {
  var_1_84 = (var_1_85 || var_1_86);
 } else {
  var_1_84 = (! (! (! var_1_87)));
 }
 var_1_93 = (var_1_27 - var_1_43);
 var_1_95 = 0.25;
 var_1_96 = 8;
 if (var_1_92) {
  var_1_97 = var_1_41;
 } else {
  var_1_97 = var_1_27;
 }
 if (var_1_92) {
  var_1_98 = var_1_36;
 } else {
  var_1_98 = var_1_43;
 }
 if (var_1_86) {
  var_1_99 = var_1_30;
 } else {
  var_1_99 = var_1_72;
 }
 if (var_1_92) {
  var_1_100 = var_1_90;
 } else {
  var_1_100 = var_1_86;
 }
 if (var_1_92) {
  var_1_102 = last_1_var_1_102;
 } else {
  var_1_102 = var_1_66;
 }
 if (var_1_84) {
  var_1_104 = var_1_96;
 }
 if (var_1_87) {
  var_1_105 = var_1_80;
 }
 var_1_108 = var_1_32;
 if (var_1_34 >= var_1_70) {
  var_1_106 = (! (! var_1_89));
 } else {
  var_1_106 = ((var_1_86 && var_1_88) || var_1_90);
 }
 if (var_1_106) {
  var_1_103 = var_1_35;
 }
 signed long int stepLocal_10 = var_1_17 + var_1_10;
 if ((var_1_26 >> var_1_27) <= stepLocal_10) {
  if (var_1_100) {
   var_1_25 = var_1_15;
  }
 }
 if (var_1_15 >= var_1_57) {
  if (var_1_17 == (var_1_29 - ((((var_1_27) < (var_1_26)) ? (var_1_27) : (var_1_26))))) {
   var_1_28 = ((((-10) < ((var_1_27 - var_1_30))) ? (-10) : ((var_1_27 - var_1_30))));
  }
 }
 if (var_1_42 == (var_1_10 * 50)) {
  var_1_45 = (var_1_13 + 9.9f);
 } else {
  if (var_1_106) {
   if (var_1_15 > var_1_95) {
    var_1_45 = var_1_18;
   }
  } else {
   var_1_45 = (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) + var_1_46);
  }
 }
 if ((~ (var_1_108 * var_1_6)) == (var_1_42 - (var_1_43 + 10))) {
  var_1_54 = (((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) > ((var_1_55 + var_1_56))) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : ((var_1_55 + var_1_56)))) + var_1_46);
 }
 signed long int stepLocal_17 = var_1_27 * var_1_44;
 if (stepLocal_17 >= var_1_104) {
  var_1_60 = ((((var_1_19) < (var_1_46)) ? (var_1_19) : (var_1_46)));
 } else {
  var_1_60 = ((var_1_56 + var_1_55) + (var_1_61 + 5.8));
 }
 signed char stepLocal_18 = var_1_44;
 if (var_1_104 >= stepLocal_18) {
  if (var_1_56 <= ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) {
   if (! var_1_84) {
    var_1_62 = (((((((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43)))) > ((var_1_27 + var_1_44))) ? (((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43)))) : ((var_1_27 + var_1_44)))) - var_1_30);
   }
  }
 }
 signed long int stepLocal_22 = var_1_48;
 if (var_1_38 > stepLocal_22) {
  if (var_1_100) {
   if ((var_1_19 - (var_1_77 - var_1_14)) != 7.1f) {
    var_1_76 = (var_1_27 + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))));
   }
  } else {
   var_1_76 = ((var_1_65 - var_1_70) + (((((var_1_78 - var_1_17)) < (last_1_var_1_76)) ? ((var_1_78 - var_1_17)) : (last_1_var_1_76))));
  }
 } else {
  var_1_76 = var_1_17;
 }
 if (var_1_100) {
  var_1_94 = var_1_102;
 } else {
  var_1_94 = var_1_71;
 }
 if (var_1_106) {
  var_1_101 = var_1_41;
 }
 unsigned char stepLocal_8 = var_1_88;
 if (var_1_92 || stepLocal_8) {
  var_1_21 = ((((((((200u) > (var_1_34)) ? (200u) : (var_1_34)))) < (((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103))))) ? (((((200u) > (var_1_34)) ? (200u) : (var_1_34)))) : (((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103))))));
 }
 unsigned short int stepLocal_21 = var_1_65;
 unsigned long int stepLocal_20 = var_1_59 / var_1_35;
 unsigned char stepLocal_19 = var_1_17;
 if (stepLocal_20 <= var_1_10) {
  if (((((((((var_1_60) < (var_1_57)) ? (var_1_60) : (var_1_57)))) > (var_1_14)) ? (((((var_1_60) < (var_1_57)) ? (var_1_60) : (var_1_57)))) : (var_1_14))) != (((((4.8) < 0 ) ? -(4.8) : (4.8))) - var_1_15)) {
   var_1_63 = ((((((var_1_65 + var_1_66) - var_1_44)) < (var_1_42)) ? (((var_1_65 + var_1_66) - var_1_44)) : (var_1_42)));
  } else {
   if (var_1_102 > stepLocal_21) {
    if (var_1_79 >= (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - var_1_13)) {
     var_1_63 = (var_1_105 + (var_1_67 - var_1_26));
    } else {
     if ((var_1_52 / var_1_65) >= stepLocal_19) {
      var_1_63 = (var_1_68 - (var_1_42 + (var_1_105 + var_1_27)));
     } else {
      var_1_63 = (var_1_68 - 16);
     }
    }
   } else {
    var_1_63 = var_1_29;
   }
  }
 }
 unsigned short int stepLocal_4 = var_1_96;
 unsigned long int stepLocal_3 = var_1_59;
 signed long int stepLocal_2 = 65169 - var_1_76;
 signed long int stepLocal_1 = 16 * var_1_96;
 unsigned char stepLocal_0 = (var_1_76 * var_1_96) >= var_1_59;
 if (stepLocal_0 && (! var_1_100)) {
  var_1_1 = (var_1_96 - ((((var_1_76) > (var_1_6)) ? (var_1_76) : (var_1_6))));
 } else {
  if (stepLocal_2 < var_1_59) {
   var_1_1 = (((((var_1_76) < (var_1_96)) ? (var_1_76) : (var_1_96))) - var_1_6);
  } else {
   if ((4 + var_1_76) != stepLocal_1) {
    if (var_1_96 != stepLocal_3) {
     if (((var_1_102 / var_1_9) + var_1_6) >= stepLocal_4) {
      var_1_1 = var_1_10;
     }
    } else {
     var_1_1 = var_1_76;
    }
   }
  }
 }
 signed short int stepLocal_9 = var_1_98;
 if (stepLocal_9 > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) {
  if (var_1_18 > ((((var_1_47) < (var_1_13)) ? (var_1_47) : (var_1_13)))) {
   var_1_24 = ((((var_1_63) > ((var_1_6 + var_1_59))) ? (var_1_63) : ((var_1_6 + var_1_59))));
  } else {
   var_1_24 = (var_1_6 + var_1_63);
  }
 } else {
  var_1_24 = var_1_10;
 }
 unsigned long int stepLocal_7 = var_1_38 + var_1_59;
 signed long int stepLocal_6 = -4;
 signed long int stepLocal_5 = var_1_76 | var_1_24;
 if (((var_1_99 * var_1_24) / var_1_9) > stepLocal_7) {
  if (stepLocal_6 < var_1_59) {
   var_1_11 = var_1_10;
  } else {
   if (var_1_48 >= stepLocal_5) {
    var_1_11 = (var_1_24 + (var_1_6 - var_1_99));
   }
  }
 }
 if (var_1_59 <= var_1_76) {
  var_1_12 = ((var_1_13 + var_1_14) - var_1_15);
 } else {
  if ((16 + (var_1_82 % var_1_17)) <= var_1_24) {
   var_1_12 = (((((var_1_13 - var_1_15)) < (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18))))) ? ((var_1_13 - var_1_15)) : (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18))))));
  } else {
   if (! var_1_88) {
    var_1_12 = (((((var_1_13) > (9999.375f)) ? (var_1_13) : (9999.375f))) - (var_1_19 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))));
   } else {
    var_1_12 = ((((var_1_19) < (256.1f)) ? (var_1_19) : (256.1f)));
   }
  }
 }
 if (((((var_1_24) < (-5)) ? (var_1_24) : (-5))) >= (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) & var_1_63)) {
  if (var_1_106) {
   var_1_69 = ((var_1_70 - var_1_43) + var_1_30);
  } else {
   if (var_1_106) {
    var_1_69 = (var_1_35 - ((((var_1_26) > (var_1_70)) ? (var_1_26) : (var_1_70))));
   } else {
    var_1_69 = (((var_1_71 + var_1_72) - var_1_27) + var_1_44);
   }
  }
 } else {
  if (var_1_48 >= -8) {
   if ((((((var_1_36 - var_1_70)) < (var_1_65)) ? ((var_1_36 - var_1_70)) : (var_1_65))) != ((var_1_105 / var_1_68) | ((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))))) {
    var_1_69 = (((((128 - ((((var_1_27) > (var_1_43)) ? (var_1_27) : (var_1_43))))) < (var_1_44)) ? ((128 - ((((var_1_27) > (var_1_43)) ? (var_1_27) : (var_1_43))))) : (var_1_44)));
   } else {
    var_1_69 = (var_1_70 + var_1_72);
   }
  } else {
   if (var_1_29 >= var_1_71) {
    var_1_69 = (var_1_27 + (var_1_72 + var_1_44));
   } else {
    if (127.4f >= (var_1_79 / ((((var_1_74) > (var_1_19)) ? (var_1_74) : (var_1_19))))) {
     var_1_69 = (((((((((var_1_35) < (var_1_75)) ? (var_1_35) : (var_1_75))) - var_1_72)) < ((((((var_1_43 + var_1_44)) < (var_1_70)) ? ((var_1_43 + var_1_44)) : (var_1_70))))) ? ((((((var_1_35) < (var_1_75)) ? (var_1_35) : (var_1_75))) - var_1_72)) : ((((((var_1_43 + var_1_44)) < (var_1_70)) ? ((var_1_43 + var_1_44)) : (var_1_70))))));
    } else {
     var_1_69 = ((((var_1_75) < (((var_1_70 - var_1_27) + (var_1_44 + var_1_43)))) ? (var_1_75) : (((var_1_70 - var_1_27) + (var_1_44 + var_1_43)))));
    }
   }
  }
 }
 signed long int stepLocal_14 = (((var_1_33) > ((var_1_35 * 128))) ? (var_1_33) : ((var_1_35 * 128)));
 unsigned char stepLocal_13 = var_1_84;
 if (stepLocal_13 && (var_1_69 < var_1_99)) {
  if (var_1_100) {
   if (var_1_32 <= stepLocal_14) {
    if ((- var_1_79) < var_1_19) {
     var_1_39 = (((((2 - ((((var_1_30) < (var_1_27)) ? (var_1_30) : (var_1_27))))) > (var_1_41)) ? ((2 - ((((var_1_30) < (var_1_27)) ? (var_1_30) : (var_1_27))))) : (var_1_41)));
    } else {
     var_1_39 = (((((var_1_30) > (var_1_27)) ? (var_1_30) : (var_1_27))) - var_1_42);
    }
   } else {
    var_1_39 = (var_1_30 - var_1_27);
   }
  } else {
   var_1_39 = ((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) + ((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44)))) - ((((var_1_30) > (var_1_42)) ? (var_1_30) : (var_1_42))));
  }
 }
 if (var_1_88 && (var_1_9 >= var_1_26)) {
  if (var_1_88) {
   var_1_31 = ((((((var_1_32) < (26551)) ? (var_1_32) : (26551))) - var_1_27) - (var_1_29 + ((((var_1_17) < (var_1_26)) ? (var_1_17) : (var_1_26)))));
  } else {
   var_1_31 = (((((var_1_69) > (var_1_76)) ? (var_1_69) : (var_1_76))) + (((((128) < (var_1_33)) ? (128) : (var_1_33))) + var_1_1));
  }
 }
 signed long int stepLocal_27 = 4;
 signed char stepLocal_26 = var_1_44;
 if (var_1_74 > var_1_15) {
  if (stepLocal_27 <= var_1_71) {
   if (-5 < stepLocal_26) {
    var_1_91 = (var_1_1 + -64);
   } else {
    var_1_91 = ((((var_1_42) > (var_1_31)) ? (var_1_42) : (var_1_31)));
   }
  } else {
   var_1_91 = (var_1_30 - (var_1_75 + (var_1_17 + 5)));
  }
 } else {
  var_1_91 = (((((0) > (var_1_75)) ? (0) : (var_1_75))) - var_1_80);
 }
 var_1_20 = ((((last_1_var_1_20) > ((((((var_1_17) < (var_1_31)) ? (var_1_17) : (var_1_31))) + var_1_50))) ? (last_1_var_1_20) : ((((((var_1_17) < (var_1_31)) ? (var_1_17) : (var_1_31))) + var_1_50))));
 if ((var_1_57 <= 5.8f) || var_1_92) {
  var_1_81 = ((((var_1_65) > ((var_1_17 + (var_1_32 - var_1_67)))) ? (var_1_65) : ((var_1_17 + (var_1_32 - var_1_67)))));
 } else {
  var_1_81 = ((var_1_101 - var_1_71) + ((((var_1_72) > ((-5 + var_1_20))) ? (var_1_72) : ((-5 + var_1_20)))));
 }
 if (var_1_54 < var_1_18) {
  if ((var_1_57 + ((((var_1_25) < (var_1_19)) ? (var_1_25) : (var_1_19)))) == ((((var_1_18) > (((((5.6f) < 0 ) ? -(5.6f) : (5.6f))))) ? (var_1_18) : (((((5.6f) < 0 ) ? -(5.6f) : (5.6f))))))) {
   if (var_1_92 || var_1_100) {
    if (var_1_98 < -16) {
     var_1_53 = (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) + var_1_46);
    } else {
     var_1_53 = var_1_46;
    }
   } else {
    var_1_53 = ((var_1_19 - var_1_13) - var_1_15);
   }
  }
 } else {
  if (var_1_32 < var_1_98) {
   if ((var_1_81 < var_1_105) && var_1_92) {
    var_1_53 = var_1_46;
   } else {
    var_1_53 = ((var_1_19 - 1.5f) - 1.00000000007E10f);
   }
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32768);
 assume_abort_if_not(var_1_9 <= 32767);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 255);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427383000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 6);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 255);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 16382);
 assume_abort_if_not(var_1_32 <= 32766);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -8191);
 assume_abort_if_not(var_1_33 <= 8192);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -127);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 3221225470);
 assume_abort_if_not(var_1_51 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 3221225470);
 assume_abort_if_not(var_1_52 <= 4294967294);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691400e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691400e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -230584.3009213691400e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -230584.3009213691400e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 16383);
 assume_abort_if_not(var_1_65 <= 32767);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 16384);
 assume_abort_if_not(var_1_66 <= 32767);
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 16383);
 assume_abort_if_not(var_1_67 <= 32767);
 var_1_68 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_68 >= 32767);
 assume_abort_if_not(var_1_68 <= 65534);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 63);
 assume_abort_if_not(var_1_70 <= 127);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 31);
 assume_abort_if_not(var_1_71 <= 64);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 32);
 assume_abort_if_not(var_1_72 <= 63);
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= -922337.2036854776000e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854776000e+12F && var_1_74 >= 1.0e-20F ));
 assume_abort_if_not(var_1_74 != 0.0F);
 var_1_75 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_75 >= 127);
 assume_abort_if_not(var_1_75 <= 254);
 var_1_77 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_77 >= 4611686.018427388000e+12F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_78 >= 16383);
 assume_abort_if_not(var_1_78 <= 32767);
 var_1_80 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_80 >= 1);
 assume_abort_if_not(var_1_80 <= 15);
 var_1_83 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_83 >= 127);
 assume_abort_if_not(var_1_83 <= 254);
 var_1_85 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 0);
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 0);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 1);
 assume_abort_if_not(var_1_87 <= 1);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 0);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 1);
 assume_abort_if_not(var_1_90 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_105 = var_1_105;
 last_1_var_1_106 = var_1_106;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_76 * var_1_96) >= var_1_59) && (! var_1_100)) ? (var_1_1 == ((signed short int) (var_1_96 - ((((var_1_76) > (var_1_6)) ? (var_1_76) : (var_1_6)))))) : (((65169 - var_1_76) < var_1_59) ? (var_1_1 == ((signed short int) (((((var_1_76) < (var_1_96)) ? (var_1_76) : (var_1_96))) - var_1_6))) : (((4 + var_1_76) != (16 * var_1_96)) ? ((var_1_96 != var_1_59) ? ((((var_1_102 / var_1_9) + var_1_6) >= var_1_96) ? (var_1_1 == ((signed short int) var_1_10)) : 1) : (var_1_1 == ((signed short int) var_1_76))) : 1))) && ((((var_1_99 * var_1_24) / var_1_9) > (var_1_38 + var_1_59)) ? ((-4 < var_1_59) ? (var_1_11 == ((signed long int) var_1_10)) : ((var_1_48 >= (var_1_76 | var_1_24)) ? (var_1_11 == ((signed long int) (var_1_24 + (var_1_6 - var_1_99)))) : 1)) : 1)) && ((var_1_59 <= var_1_76) ? (var_1_12 == ((float) ((var_1_13 + var_1_14) - var_1_15))) : (((16 + (var_1_82 % var_1_17)) <= var_1_24) ? (var_1_12 == ((float) (((((var_1_13 - var_1_15)) < (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18))))) ? ((var_1_13 - var_1_15)) : (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18)))))))) : ((! var_1_88) ? (var_1_12 == ((float) (((((var_1_13) > (9999.375f)) ? (var_1_13) : (9999.375f))) - (var_1_19 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))))) : (var_1_12 == ((float) ((((var_1_19) < (256.1f)) ? (var_1_19) : (256.1f))))))))) && (var_1_20 == ((signed short int) ((((last_1_var_1_20) > ((((((var_1_17) < (var_1_31)) ? (var_1_17) : (var_1_31))) + var_1_50))) ? (last_1_var_1_20) : ((((((var_1_17) < (var_1_31)) ? (var_1_17) : (var_1_31))) + var_1_50))))))) && ((var_1_92 || var_1_88) ? (var_1_21 == ((unsigned long int) ((((((((200u) > (var_1_34)) ? (200u) : (var_1_34)))) < (((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103))))) ? (((((200u) > (var_1_34)) ? (200u) : (var_1_34)))) : (((((var_1_103) < 0 ) ? -(var_1_103) : (var_1_103)))))))) : 1)) && (last_1_var_1_92 ? (var_1_23 == ((signed short int) ((-8 + -4) + last_1_var_1_94))) : (var_1_23 == ((signed short int) (last_1_var_1_69 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))) && ((var_1_98 > ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) ? ((var_1_18 > ((((var_1_47) < (var_1_13)) ? (var_1_47) : (var_1_13)))) ? (var_1_24 == ((signed long int) ((((var_1_63) > ((var_1_6 + var_1_59))) ? (var_1_63) : ((var_1_6 + var_1_59)))))) : (var_1_24 == ((signed long int) (var_1_6 + var_1_63)))) : (var_1_24 == ((signed long int) var_1_10)))) && (((var_1_26 >> var_1_27) <= (var_1_17 + var_1_10)) ? (var_1_100 ? (var_1_25 == ((float) var_1_15)) : 1) : 1)) && ((var_1_15 >= var_1_57) ? ((var_1_17 == (var_1_29 - ((((var_1_27) < (var_1_26)) ? (var_1_27) : (var_1_26))))) ? (var_1_28 == ((signed char) ((((-10) < ((var_1_27 - var_1_30))) ? (-10) : ((var_1_27 - var_1_30)))))) : 1) : 1)) && ((var_1_88 && (var_1_9 >= var_1_26)) ? (var_1_88 ? (var_1_31 == ((signed short int) ((((((var_1_32) < (26551)) ? (var_1_32) : (26551))) - var_1_27) - (var_1_29 + ((((var_1_17) < (var_1_26)) ? (var_1_17) : (var_1_26))))))) : (var_1_31 == ((signed short int) (((((var_1_69) > (var_1_76)) ? (var_1_69) : (var_1_76))) + (((((128) < (var_1_33)) ? (128) : (var_1_33))) + var_1_1))))) : 1)) && ((var_1_29 > var_1_10) ? (var_1_34 == ((unsigned char) (var_1_35 - ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))))) : ((var_1_10 <= var_1_6) ? (var_1_34 == ((unsigned char) ((((var_1_36) < ((((((var_1_35 - var_1_27)) < (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) ? ((var_1_35 - var_1_27)) : (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))))) ? (var_1_36) : ((((((var_1_35 - var_1_27)) < (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) ? ((var_1_35 - var_1_27)) : (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))))))))) : 1))) && (var_1_37 == ((float) (var_1_14 + var_1_13)))) && (((var_1_18 * ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19)))) <= var_1_14) ? (var_1_38 == ((signed short int) ((var_1_48 - var_1_27) + (((((var_1_35) < (var_1_17)) ? (var_1_35) : (var_1_17))) + var_1_30)))) : (var_1_38 == ((signed short int) ((((((var_1_48) > (var_1_17)) ? (var_1_48) : (var_1_17))) + var_1_36) - var_1_30))))) && ((var_1_84 && (var_1_69 < var_1_99)) ? (var_1_100 ? ((var_1_32 <= ((((var_1_33) > ((var_1_35 * 128))) ? (var_1_33) : ((var_1_35 * 128))))) ? (((- var_1_79) < var_1_19) ? (var_1_39 == ((signed char) (((((2 - ((((var_1_30) < (var_1_27)) ? (var_1_30) : (var_1_27))))) > (var_1_41)) ? ((2 - ((((var_1_30) < (var_1_27)) ? (var_1_30) : (var_1_27))))) : (var_1_41))))) : (var_1_39 == ((signed char) (((((var_1_30) > (var_1_27)) ? (var_1_30) : (var_1_27))) - var_1_42)))) : (var_1_39 == ((signed char) (var_1_30 - var_1_27)))) : (var_1_39 == ((signed char) ((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) + ((((var_1_43) < (var_1_44)) ? (var_1_43) : (var_1_44)))) - ((((var_1_30) > (var_1_42)) ? (var_1_30) : (var_1_42))))))) : 1)) && ((var_1_42 == (var_1_10 * 50)) ? (var_1_45 == ((float) (var_1_13 + 9.9f))) : (var_1_106 ? ((var_1_15 > var_1_95) ? (var_1_45 == ((float) var_1_18)) : 1) : (var_1_45 == ((float) (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) + var_1_46)))))) && ((-4 >= var_1_27) ? (var_1_47 == ((double) (var_1_13 + var_1_14))) : ((50 == (var_1_29 + var_1_6)) ? (var_1_47 == ((double) ((var_1_14 + var_1_13) - var_1_19))) : 1))) && ((((((last_1_var_1_94) < (last_1_var_1_105)) ? (last_1_var_1_94) : (last_1_var_1_105))) == var_1_29) ? ((last_1_var_1_57 <= last_1_var_1_37) ? (var_1_48 == ((signed long int) (last_1_var_1_39 + var_1_9))) : 1) : (var_1_48 == ((signed long int) (last_1_var_1_34 + (last_1_var_1_59 + var_1_29)))))) && (var_1_50 == ((unsigned long int) ((((((var_1_51) < (var_1_52)) ? (var_1_51) : (var_1_52))) - var_1_44) - var_1_38)))) && ((var_1_54 < var_1_18) ? (((var_1_57 + ((((var_1_25) < (var_1_19)) ? (var_1_25) : (var_1_19)))) == ((((var_1_18) > (((((5.6f) < 0 ) ? -(5.6f) : (5.6f))))) ? (var_1_18) : (((((5.6f) < 0 ) ? -(5.6f) : (5.6f))))))) ? ((var_1_92 || var_1_100) ? ((var_1_98 < -16) ? (var_1_53 == ((float) (((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) + var_1_46))) : (var_1_53 == ((float) var_1_46))) : (var_1_53 == ((float) ((var_1_19 - var_1_13) - var_1_15)))) : 1) : ((var_1_32 < var_1_98) ? (((var_1_81 < var_1_105) && var_1_92) ? (var_1_53 == ((float) var_1_46)) : (var_1_53 == ((float) ((var_1_19 - 1.5f) - 1.00000000007E10f)))) : 1))) && (((~ (var_1_108 * var_1_6)) == (var_1_42 - (var_1_43 + 10))) ? (var_1_54 == ((float) (((((((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) > ((var_1_55 + var_1_56))) ? (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14)))) : ((var_1_55 + var_1_56)))) + var_1_46))) : 1)) && (var_1_88 ? (var_1_57 == ((double) (var_1_15 - (var_1_13 + var_1_14)))) : 1)) && ((var_1_19 <= var_1_13) ? (var_1_58 == ((double) ((((var_1_55) > ((((((var_1_19 - var_1_13)) > (var_1_56)) ? ((var_1_19 - var_1_13)) : (var_1_56))))) ? (var_1_55) : ((((((var_1_19 - var_1_13)) > (var_1_56)) ? ((var_1_19 - var_1_13)) : (var_1_56)))))))) : 1)) && ((((last_1_var_1_59 % var_1_51) % var_1_29) > (((((var_1_42 + var_1_26)) > (var_1_36)) ? ((var_1_42 + var_1_26)) : (var_1_36)))) ? (var_1_59 == ((unsigned long int) ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) : 1)) && (((var_1_27 * var_1_44) >= var_1_104) ? (var_1_60 == ((double) ((((var_1_19) < (var_1_46)) ? (var_1_19) : (var_1_46))))) : (var_1_60 == ((double) ((var_1_56 + var_1_55) + (var_1_61 + 5.8)))))) && ((var_1_104 >= var_1_44) ? ((var_1_56 <= ((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60)))) ? ((! var_1_84) ? (var_1_62 == ((signed char) (((((((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43)))) > ((var_1_27 + var_1_44))) ? (((((var_1_42) < (var_1_43)) ? (var_1_42) : (var_1_43)))) : ((var_1_27 + var_1_44)))) - var_1_30))) : 1) : 1) : 1)) && (((var_1_59 / var_1_35) <= var_1_10) ? ((((((((((var_1_60) < (var_1_57)) ? (var_1_60) : (var_1_57)))) > (var_1_14)) ? (((((var_1_60) < (var_1_57)) ? (var_1_60) : (var_1_57)))) : (var_1_14))) != (((((4.8) < 0 ) ? -(4.8) : (4.8))) - var_1_15)) ? (var_1_63 == ((unsigned short int) ((((((var_1_65 + var_1_66) - var_1_44)) < (var_1_42)) ? (((var_1_65 + var_1_66) - var_1_44)) : (var_1_42))))) : ((var_1_102 > var_1_65) ? ((var_1_79 >= (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) - var_1_13)) ? (var_1_63 == ((unsigned short int) (var_1_105 + (var_1_67 - var_1_26)))) : (((var_1_52 / var_1_65) >= var_1_17) ? (var_1_63 == ((unsigned short int) (var_1_68 - (var_1_42 + (var_1_105 + var_1_27))))) : (var_1_63 == ((unsigned short int) (var_1_68 - 16))))) : (var_1_63 == ((unsigned short int) var_1_29)))) : 1)) && ((((((var_1_24) < (-5)) ? (var_1_24) : (-5))) >= (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) & var_1_63)) ? (var_1_106 ? (var_1_69 == ((unsigned char) ((var_1_70 - var_1_43) + var_1_30))) : (var_1_106 ? (var_1_69 == ((unsigned char) (var_1_35 - ((((var_1_26) > (var_1_70)) ? (var_1_26) : (var_1_70)))))) : (var_1_69 == ((unsigned char) (((var_1_71 + var_1_72) - var_1_27) + var_1_44))))) : ((var_1_48 >= -8) ? (((((((var_1_36 - var_1_70)) < (var_1_65)) ? ((var_1_36 - var_1_70)) : (var_1_65))) != ((var_1_105 / var_1_68) | ((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21))))) ? (var_1_69 == ((unsigned char) (((((128 - ((((var_1_27) > (var_1_43)) ? (var_1_27) : (var_1_43))))) < (var_1_44)) ? ((128 - ((((var_1_27) > (var_1_43)) ? (var_1_27) : (var_1_43))))) : (var_1_44))))) : (var_1_69 == ((unsigned char) (var_1_70 + var_1_72)))) : ((var_1_29 >= var_1_71) ? (var_1_69 == ((unsigned char) (var_1_27 + (var_1_72 + var_1_44)))) : ((127.4f >= (var_1_79 / ((((var_1_74) > (var_1_19)) ? (var_1_74) : (var_1_19))))) ? (var_1_69 == ((unsigned char) (((((((((var_1_35) < (var_1_75)) ? (var_1_35) : (var_1_75))) - var_1_72)) < ((((((var_1_43 + var_1_44)) < (var_1_70)) ? ((var_1_43 + var_1_44)) : (var_1_70))))) ? ((((((var_1_35) < (var_1_75)) ? (var_1_35) : (var_1_75))) - var_1_72)) : ((((((var_1_43 + var_1_44)) < (var_1_70)) ? ((var_1_43 + var_1_44)) : (var_1_70)))))))) : (var_1_69 == ((unsigned char) ((((var_1_75) < (((var_1_70 - var_1_27) + (var_1_44 + var_1_43)))) ? (var_1_75) : (((var_1_70 - var_1_27) + (var_1_44 + var_1_43)))))))))))) && ((var_1_38 > var_1_48) ? (var_1_100 ? (((var_1_19 - (var_1_77 - var_1_14)) != 7.1f) ? (var_1_76 == ((unsigned short int) (var_1_27 + ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))) : 1) : (var_1_76 == ((unsigned short int) ((var_1_65 - var_1_70) + (((((var_1_78 - var_1_17)) < (last_1_var_1_76)) ? ((var_1_78 - var_1_17)) : (last_1_var_1_76))))))) : (var_1_76 == ((unsigned short int) var_1_17)))) && ((var_1_6 >= ((var_1_78 - var_1_42) >> (var_1_27 + var_1_80))) ? ((var_1_48 >= var_1_17) ? (var_1_79 == ((float) var_1_14)) : (var_1_79 == ((float) (var_1_55 + var_1_56)))) : (var_1_79 == ((float) (var_1_15 - ((((var_1_19) < (var_1_14)) ? (var_1_19) : (var_1_14)))))))) && (((var_1_57 <= 5.8f) || var_1_92) ? (var_1_81 == ((signed long int) ((((var_1_65) > ((var_1_17 + (var_1_32 - var_1_67)))) ? (var_1_65) : ((var_1_17 + (var_1_32 - var_1_67))))))) : (var_1_81 == ((signed long int) ((var_1_101 - var_1_71) + ((((var_1_72) > ((-5 + var_1_20))) ? (var_1_72) : ((-5 + var_1_20))))))))) && (var_1_82 == ((unsigned char) (var_1_83 - (var_1_27 + ((((32) > (var_1_43)) ? (32) : (var_1_43)))))))) && ((var_1_77 >= var_1_13) ? (var_1_84 == ((unsigned char) (var_1_85 || var_1_86))) : (var_1_84 == ((unsigned char) (! (! (! var_1_87))))))) && ((last_1_var_1_106 && var_1_86) ? (var_1_87 ? (var_1_88 == ((unsigned char) var_1_89)) : (var_1_88 == ((unsigned char) ((var_1_52 >= var_1_68) && var_1_86)))) : (var_1_88 == ((unsigned char) (last_1_var_1_92 || var_1_90))))) && ((var_1_74 > var_1_15) ? ((4 <= var_1_71) ? ((-5 < var_1_44) ? (var_1_91 == ((signed short int) (var_1_1 + -64))) : (var_1_91 == ((signed short int) ((((var_1_42) > (var_1_31)) ? (var_1_42) : (var_1_31)))))) : (var_1_91 == ((signed short int) (var_1_30 - (var_1_75 + (var_1_17 + 5)))))) : (var_1_91 == ((signed short int) (((((0) > (var_1_75)) ? (0) : (var_1_75))) - var_1_80))))) && ((last_1_var_1_21 > ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) ? (var_1_92 == ((unsigned char) (! (var_1_85 || var_1_89)))) : (var_1_92 == ((unsigned char) ((! last_1_var_1_84) || (var_1_87 || var_1_90)))))) && (var_1_93 == ((signed char) (var_1_27 - var_1_43)))) && (var_1_100 ? (var_1_94 == ((unsigned short int) var_1_102)) : (var_1_94 == ((unsigned short int) var_1_71)))) && (var_1_95 == ((double) 0.25))) && (var_1_96 == ((unsigned short int) 8))) && (var_1_92 ? (var_1_97 == ((signed char) var_1_41)) : (var_1_97 == ((signed char) var_1_27)))) && (var_1_92 ? (var_1_98 == ((signed short int) var_1_36)) : (var_1_98 == ((signed short int) var_1_43)))) && (var_1_86 ? (var_1_99 == ((unsigned char) var_1_30)) : (var_1_99 == ((unsigned char) var_1_72)))) && (var_1_92 ? (var_1_100 == ((unsigned char) var_1_90)) : (var_1_100 == ((unsigned char) var_1_86)))) && (var_1_106 ? (var_1_101 == ((signed short int) var_1_41)) : 1)) && (var_1_92 ? (var_1_102 == ((unsigned long int) last_1_var_1_102)) : (var_1_102 == ((unsigned long int) var_1_66)))) && (var_1_106 ? (var_1_103 == ((unsigned char) var_1_35)) : 1)) && (var_1_84 ? (var_1_104 == ((signed long int) var_1_96)) : 1)) && (var_1_87 ? (var_1_105 == ((unsigned long int) var_1_80)) : 1)) && ((var_1_34 >= var_1_70) ? (var_1_106 == ((unsigned char) (! (! var_1_89)))) : (var_1_106 == ((unsigned char) ((var_1_86 && var_1_88) || var_1_90))))) && (var_1_108 == ((signed short int) var_1_32))
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
