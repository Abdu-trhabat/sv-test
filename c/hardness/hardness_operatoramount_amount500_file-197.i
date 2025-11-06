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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
float var_1_8 = 5.5;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 0;
unsigned long int var_1_15 = 64;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 128;
unsigned long int var_1_18 = 100000;
unsigned long int var_1_19 = 1088008221;
unsigned long int var_1_20 = 128;
double var_1_21 = 3.2;
double var_1_22 = 0.0;
double var_1_23 = 63.5;
double var_1_24 = 9.125;
double var_1_25 = 1.5;
double var_1_26 = 999999.5;
double var_1_27 = 49.7;
double var_1_28 = 127.5;
double var_1_29 = 3.2;
double var_1_30 = 99.4;
double var_1_31 = 15.6;
double var_1_32 = 7.2;
signed short int var_1_33 = -2;
signed short int var_1_34 = -10;
signed char var_1_35 = -128;
signed char var_1_36 = -8;
signed char var_1_37 = 4;
signed char var_1_38 = 64;
signed char var_1_39 = -64;
signed char var_1_40 = 8;
signed char var_1_41 = 50;
signed short int var_1_42 = -100;
signed short int var_1_43 = 2;
signed char var_1_44 = 50;
signed char var_1_45 = 25;
signed char var_1_46 = 0;
signed char var_1_47 = 32;
signed char var_1_48 = 32;
signed short int var_1_49 = 4;
signed long int var_1_50 = 10;
signed short int var_1_51 = -10;
signed long int var_1_52 = 10;
signed long int var_1_53 = 1334759060;
unsigned char var_1_54 = 200;
double var_1_55 = 10.2;
unsigned long int var_1_56 = 0;
unsigned long int var_1_57 = 4224959021;
unsigned long int var_1_58 = 1;
unsigned long int var_1_59 = 64;
double var_1_60 = -0.16;
signed long int var_1_61 = -1;
signed short int var_1_62 = 1;
unsigned short int var_1_63 = 10;
double var_1_64 = 2.6;
signed short int var_1_65 = -5;
double var_1_66 = 9999.5;
unsigned char var_1_67 = 16;
signed char var_1_68 = 8;
signed char var_1_69 = 4;
double var_1_70 = 7.5;
double var_1_71 = 0.0;
float var_1_72 = 1.625;
unsigned char var_1_73 = 0;
float var_1_74 = 10.4;
float var_1_75 = 0.0;
signed long int var_1_76 = 4;
signed char var_1_77 = 4;
signed char var_1_78 = 32;
signed char var_1_79 = 25;
signed char var_1_80 = 5;
signed char var_1_81 = 5;
signed char var_1_82 = -50;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 0;
signed char var_1_85 = 5;
unsigned char var_1_86 = 100;
unsigned char var_1_87 = 128;
signed char var_1_88 = -16;
unsigned short int var_1_89 = 128;
unsigned char var_1_90 = 16;
unsigned char var_1_91 = 0;
signed short int var_1_92 = 27648;
signed short int var_1_93 = 27208;
signed long int var_1_94 = -25;
double var_1_95 = 7.98;
signed char var_1_96 = 8;
float var_1_97 = 10.5;
signed short int var_1_98 = 10;
unsigned char var_1_99 = 128;
signed char var_1_100 = -4;
float var_1_101 = 25.25;
signed long int var_1_102 = 8;
unsigned short int var_1_103 = 100;
signed short int var_1_104 = -4;
signed char var_1_105 = 50;
unsigned char var_1_106 = 4;
float var_1_107 = 9999999.6;
unsigned long int var_1_108 = 2;
signed long int var_1_109 = -64;
signed long int var_1_110 = 8;
unsigned char last_1_var_1_1 = 0;
double last_1_var_1_21 = 3.2;
signed long int last_1_var_1_52 = 10;
signed short int last_1_var_1_62 = 1;
double last_1_var_1_66 = 9999.5;
unsigned char last_1_var_1_86 = 100;
signed char last_1_var_1_88 = -16;
unsigned char last_1_var_1_91 = 0;
float last_1_var_1_97 = 10.5;
float last_1_var_1_101 = 25.25;
signed long int last_1_var_1_110 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_27 = last_1_var_1_86;
 unsigned long int stepLocal_26 = (last_1_var_1_88 * var_1_96) | var_1_58;
 if (last_1_var_1_91) {
  if (-8 > stepLocal_27) {
   var_1_97 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
  } else {
   if (99.25 >= last_1_var_1_66) {
    if (last_1_var_1_1) {
     if ((((((128 - var_1_98)) < (var_1_63)) ? ((128 - var_1_98)) : (var_1_63))) > stepLocal_26) {
      var_1_97 = (var_1_27 - var_1_31);
     }
    } else {
     var_1_97 = var_1_29;
    }
   }
  }
 }
 if ((- last_1_var_1_97) != (var_1_8 * last_1_var_1_101)) {
  var_1_14 = (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + 10u);
 }
 unsigned long int stepLocal_1 = var_1_20;
 if (stepLocal_1 < ((((~ var_1_14) < 0 ) ? -(~ var_1_14) : (~ var_1_14)))) {
  if (var_1_31 <= var_1_23) {
   var_1_33 = var_1_34;
  } else {
   var_1_33 = -1;
  }
 }
 var_1_13 = (! var_1_12);
 if (var_1_10) {
  var_1_32 = ((((var_1_30) > (var_1_25)) ? (var_1_30) : (var_1_25)));
 }
 if (var_1_31 > var_1_32) {
  var_1_42 = (((((((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41))) - var_1_43)) > (var_1_36)) ? ((((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41))) - var_1_43)) : (var_1_36)));
 }
 unsigned long int stepLocal_6 = (var_1_15 / var_1_19) / var_1_50;
 unsigned long int stepLocal_5 = var_1_19;
 if (stepLocal_5 >= var_1_18) {
  if ((var_1_41 >> var_1_49) < stepLocal_6) {
   var_1_48 = ((((var_1_41 - var_1_45) < 0 ) ? -(var_1_41 - var_1_45) : (var_1_41 - var_1_45)));
  }
 }
 if (! ((var_1_41 + var_1_18) > var_1_15)) {
  var_1_54 = (var_1_45 + var_1_49);
 }
 var_1_60 = (var_1_27 - 8.56);
 signed char stepLocal_16 = var_1_40;
 if (stepLocal_16 >= var_1_41) {
  var_1_66 = (var_1_26 + var_1_29);
 } else {
  var_1_66 = (var_1_31 + var_1_29);
 }
 if (var_1_6) {
  var_1_67 = var_1_41;
 }
 if (var_1_9) {
  var_1_70 = ((var_1_30 - var_1_31) + var_1_28);
 } else {
  var_1_70 = (var_1_31 - (var_1_30 + (var_1_71 - var_1_27)));
 }
 unsigned long int stepLocal_17 = (((var_1_58) > (var_1_69)) ? (var_1_58) : (var_1_69));
 if (var_1_19 > stepLocal_17) {
  var_1_72 = (var_1_23 + var_1_26);
 }
 if (! var_1_5) {
  var_1_74 = (((var_1_71 - 15.5f) + (var_1_75 - var_1_31)) - var_1_30);
 } else {
  if (var_1_60 <= var_1_24) {
   var_1_74 = ((var_1_27 + 1.00000005E7f) + (var_1_30 + var_1_31));
  } else {
   var_1_74 = (((((((((var_1_31) < (var_1_24)) ? (var_1_31) : (var_1_24))) - (var_1_22 - var_1_75))) > (((((((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) < (var_1_23)) ? (((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) : (var_1_23))))) ? ((((((var_1_31) < (var_1_24)) ? (var_1_31) : (var_1_24))) - (var_1_22 - var_1_75))) : (((((((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) < (var_1_23)) ? (((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) : (var_1_23))))));
  }
 }
 var_1_85 = var_1_78;
 if (! (var_1_29 == (var_1_70 / var_1_71))) {
  if (4 >= var_1_16) {
   if (var_1_12) {
    var_1_99 = var_1_41;
   }
  } else {
   var_1_99 = var_1_79;
  }
 } else {
  var_1_99 = var_1_79;
 }
 if (var_1_12) {
  var_1_100 = var_1_45;
 }
 var_1_101 = var_1_71;
 if (var_1_7) {
  var_1_102 = var_1_87;
 } else {
  var_1_102 = -16;
 }
 var_1_103 = var_1_98;
 var_1_104 = var_1_36;
 if (var_1_9) {
  var_1_105 = var_1_37;
 } else {
  var_1_105 = var_1_79;
 }
 if (var_1_6) {
  var_1_106 = var_1_69;
 } else {
  var_1_106 = 100;
 }
 if (var_1_6) {
  var_1_107 = var_1_30;
 } else {
  var_1_107 = var_1_31;
 }
 var_1_108 = var_1_43;
 signed short int stepLocal_23 = var_1_33;
 if (! var_1_9) {
  if (var_1_7) {
   if (var_1_38 <= stepLocal_23) {
    var_1_83 = (! var_1_12);
   }
  } else {
   var_1_83 = var_1_11;
  }
 } else {
  if (15.8 > var_1_24) {
   var_1_83 = (var_1_5 && var_1_12);
  } else {
   var_1_83 = (var_1_12 || var_1_84);
  }
 }
 unsigned char stepLocal_9 = var_1_5;
 if (var_1_83) {
  if (! var_1_11) {
   var_1_52 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
  } else {
   if (stepLocal_9 && ((var_1_19 / var_1_49) <= var_1_41)) {
    var_1_52 = (((((8) < ((var_1_53 - var_1_43))) ? (8) : ((var_1_53 - var_1_43)))) - var_1_20);
   } else {
    var_1_52 = ((((last_1_var_1_52) < (var_1_40)) ? (last_1_var_1_52) : (var_1_40)));
   }
  }
 } else {
  if (! var_1_10) {
   var_1_52 = (var_1_43 - var_1_20);
  }
 }
 if (var_1_14 < ((var_1_92 - var_1_14) - (var_1_93 - var_1_81))) {
  if ((var_1_108 / var_1_49) <= var_1_90) {
   var_1_91 = (var_1_83 && var_1_84);
  } else {
   var_1_91 = ((! var_1_9) || var_1_84);
  }
 } else {
  var_1_91 = (var_1_13 && var_1_12);
 }
 if (! var_1_10) {
  if (var_1_83) {
   var_1_86 = (var_1_87 - var_1_45);
  } else {
   var_1_86 = (128 - ((((var_1_41) < (var_1_49)) ? (var_1_41) : (var_1_49))));
  }
 } else {
  var_1_86 = (var_1_69 + ((((var_1_45) < (var_1_80)) ? (var_1_45) : (var_1_80))));
 }
 if (((var_1_52 * var_1_108) / var_1_89) > var_1_45) {
  if (((((10) < 0 ) ? -(10) : (10))) == (100 >> (var_1_90 - var_1_49))) {
   var_1_88 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
  } else {
   var_1_88 = ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)));
  }
 }
 unsigned long int stepLocal_0 = ((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_108;
 if (32 != stepLocal_0) {
  var_1_17 = (var_1_16 + (var_1_18 + 5u));
 } else {
  var_1_17 = (var_1_15 + (var_1_19 - var_1_20));
 }
 unsigned char stepLocal_4 = var_1_83;
 unsigned long int stepLocal_3 = var_1_20;
 signed short int stepLocal_2 = var_1_34;
 if ((var_1_26 <= var_1_27) && stepLocal_4) {
  if (var_1_19 >= stepLocal_3) {
   var_1_35 = ((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37)));
  } else {
   var_1_35 = ((((((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) < (var_1_38)) ? (((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) : (var_1_38)));
  }
 } else {
  if (stepLocal_2 >= 0) {
   var_1_35 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
  } else {
   var_1_35 = (var_1_40 - var_1_41);
  }
 }
 if (var_1_83) {
  var_1_44 = ((((((((var_1_41) > (var_1_36)) ? (var_1_41) : (var_1_36)))) > ((var_1_40 - var_1_45))) ? (((((var_1_41) > (var_1_36)) ? (var_1_41) : (var_1_36)))) : ((var_1_40 - var_1_45))));
 } else {
  var_1_44 = (var_1_46 + var_1_47);
 }
 if (var_1_74 > (var_1_25 / ((((var_1_8) > (var_1_22)) ? (var_1_8) : (var_1_22))))) {
  var_1_68 = (5 + ((((var_1_46) > ((var_1_49 - var_1_69))) ? (var_1_46) : ((var_1_49 - var_1_69)))));
 } else {
  var_1_68 = ((((var_1_40) < ((var_1_69 + var_1_47))) ? (var_1_40) : ((var_1_69 + var_1_47))));
 }
 unsigned long int stepLocal_18 = var_1_69 + var_1_17;
 if (var_1_13) {
  if (stepLocal_18 <= ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) {
   var_1_73 = (! var_1_12);
  }
 } else {
  var_1_73 = (var_1_9 && var_1_12);
 }
 unsigned char stepLocal_20 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) <= (var_1_18 * var_1_106);
 unsigned char stepLocal_19 = var_1_9;
 if (var_1_12 && stepLocal_20) {
  var_1_76 = (var_1_53 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))));
 } else {
  if ((var_1_18 > var_1_50) || stepLocal_19) {
   var_1_76 = var_1_52;
  } else {
   var_1_76 = (var_1_53 - (var_1_49 + 8));
  }
 }
 signed long int stepLocal_21 = var_1_44 * var_1_35;
 if (var_1_9) {
  if (stepLocal_21 >= var_1_20) {
   var_1_77 = var_1_38;
  } else {
   if (((var_1_24 / var_1_75) / var_1_71) <= (var_1_28 - var_1_64)) {
    var_1_77 = (var_1_69 + var_1_46);
   } else {
    var_1_77 = var_1_36;
   }
  }
 } else {
  if (var_1_5) {
   var_1_77 = (var_1_40 - var_1_45);
  } else {
   var_1_77 = (((((var_1_69) > (var_1_49)) ? (var_1_69) : (var_1_49))) + ((var_1_78 - var_1_79) - ((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81)))));
  }
 }
 unsigned long int stepLocal_22 = (var_1_37 ^ var_1_57) / ((((var_1_49) > (var_1_63)) ? (var_1_49) : (var_1_63)));
 if (var_1_40 >= stepLocal_22) {
  if (var_1_83) {
   if (var_1_83) {
    var_1_82 = var_1_37;
   } else {
    var_1_82 = var_1_81;
   }
  } else {
   var_1_82 = var_1_47;
  }
 } else {
  var_1_82 = ((((var_1_80) > (var_1_69)) ? (var_1_80) : (var_1_69)));
 }
 if (var_1_9) {
  var_1_94 = ((((var_1_48) < ((var_1_65 + var_1_104))) ? (var_1_48) : ((var_1_65 + var_1_104))));
 } else {
  var_1_94 = ((((((var_1_80 - var_1_102) + var_1_41)) > ((var_1_43 - var_1_49))) ? (((var_1_80 - var_1_102) + var_1_41)) : ((var_1_43 - var_1_49))));
 }
 if (var_1_7) {
  var_1_109 = var_1_37;
 } else {
  var_1_109 = var_1_94;
 }
 unsigned long int stepLocal_28 = var_1_17;
 if (var_1_11) {
  if (((var_1_14 * var_1_80) + var_1_103) < stepLocal_28) {
   var_1_110 = ((((var_1_81) < ((((((var_1_49 - last_1_var_1_110)) < (var_1_92)) ? ((var_1_49 - last_1_var_1_110)) : (var_1_92))))) ? (var_1_81) : ((((((var_1_49 - last_1_var_1_110)) < (var_1_92)) ? ((var_1_49 - last_1_var_1_110)) : (var_1_92))))));
  } else {
   var_1_110 = var_1_69;
  }
 } else {
  var_1_110 = var_1_20;
 }
 unsigned long int stepLocal_15 = var_1_14;
 signed long int stepLocal_14 = var_1_94;
 signed long int stepLocal_13 = 25 - var_1_49;
 signed long int stepLocal_12 = var_1_94;
 if (((var_1_41 + var_1_43) - var_1_18) != stepLocal_15) {
  if (last_1_var_1_62 < stepLocal_12) {
   if (stepLocal_14 > var_1_39) {
    if (var_1_28 < var_1_26) {
     var_1_62 = (var_1_45 + var_1_85);
    } else {
     var_1_62 = (((((last_1_var_1_62) < ((var_1_41 - var_1_49))) ? (last_1_var_1_62) : ((var_1_41 - var_1_49)))) + var_1_38);
    }
   } else {
    if (var_1_39 <= stepLocal_13) {
     var_1_62 = ((((var_1_45) > (((((var_1_49) > (var_1_39)) ? (var_1_49) : (var_1_39))))) ? (var_1_45) : (((((var_1_49) > (var_1_39)) ? (var_1_49) : (var_1_39))))));
    } else {
     var_1_62 = (var_1_49 + ((((last_1_var_1_62 + -256) < 0 ) ? -(last_1_var_1_62 + -256) : (last_1_var_1_62 + -256))));
    }
   }
  }
 } else {
  if (var_1_31 == (var_1_22 - var_1_64)) {
   var_1_62 = (var_1_65 + var_1_49);
  }
 }
 unsigned long int stepLocal_11 = var_1_58;
 if ((- var_1_25) < (- var_1_97)) {
  if (! var_1_91) {
   var_1_61 = ((((((var_1_43 - var_1_49)) < ((var_1_46 + var_1_36))) ? ((var_1_43 - var_1_49)) : ((var_1_46 + var_1_36)))) + var_1_62);
  } else {
   var_1_61 = var_1_39;
  }
 } else {
  if (stepLocal_11 < (- var_1_14)) {
   var_1_61 = ((((var_1_43) < (var_1_20)) ? (var_1_43) : (var_1_20)));
  } else {
   var_1_61 = (var_1_53 - var_1_52);
  }
 }
 if (var_1_6 || ((var_1_110 * var_1_40) <= var_1_49)) {
  if (var_1_12) {
   if (var_1_6 || (var_1_20 != var_1_43)) {
    var_1_56 = (((((var_1_57 - var_1_53)) > (((((var_1_54) > (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43))))) ? (var_1_54) : (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43)))))))) ? ((var_1_57 - var_1_53)) : (((((var_1_54) > (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43))))) ? (var_1_54) : (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43)))))))));
   } else {
    var_1_56 = (((((var_1_57 - var_1_58)) > (var_1_15)) ? ((var_1_57 - var_1_58)) : (var_1_15)));
   }
  } else {
   if (var_1_39 != (var_1_43 * var_1_47)) {
    var_1_56 = (((((var_1_19 + 8u)) < (var_1_16)) ? ((var_1_19 + 8u)) : (var_1_16)));
   } else {
    if ((var_1_43 * (- var_1_76)) != var_1_61) {
     if (var_1_40 > var_1_57) {
      var_1_56 = (var_1_57 - ((((256u) < 0 ) ? -(256u) : (256u))));
     } else {
      var_1_56 = var_1_57;
     }
    } else {
     var_1_56 = ((((var_1_49) < ((var_1_57 - var_1_59))) ? (var_1_49) : ((var_1_57 - var_1_59))));
    }
   }
  }
 }
 unsigned long int stepLocal_25 = var_1_14;
 unsigned long int stepLocal_24 = (var_1_49 >> var_1_96) | var_1_56;
 if (stepLocal_24 != ((((var_1_14) > (var_1_94)) ? (var_1_14) : (var_1_94)))) {
  if (stepLocal_25 > 10000000) {
   var_1_95 = ((((((var_1_30 + var_1_28)) < (var_1_26)) ? ((var_1_30 + var_1_28)) : (var_1_26))) + var_1_71);
  }
 }
 signed long int stepLocal_10 = var_1_61;
 if (((((var_1_39) < (var_1_53)) ? (var_1_39) : (var_1_53))) != stepLocal_10) {
  var_1_55 = (var_1_23 + var_1_31);
 } else {
  var_1_55 = (var_1_23 - (var_1_27 + (var_1_31 + var_1_30)));
 }
 if (var_1_6) {
  if (var_1_8 > var_1_55) {
   if (var_1_12) {
    var_1_21 = ((var_1_22 - var_1_23) - ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))));
   } else {
    if (! (last_1_var_1_21 < var_1_55)) {
     var_1_21 = (var_1_23 + var_1_26);
    } else {
     var_1_21 = (var_1_26 + (var_1_23 - (3.5883479888532127E18 - var_1_27)));
    }
   }
  } else {
   var_1_21 = ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)));
  }
 } else {
  if (var_1_91) {
   var_1_21 = ((var_1_23 - (var_1_27 + var_1_28)) + (var_1_29 + (var_1_30 - var_1_31)));
  }
 }
 signed short int stepLocal_8 = var_1_43;
 unsigned long int stepLocal_7 = var_1_19;
 if (var_1_18 > stepLocal_7) {
  if (var_1_12) {
   if (var_1_56 < stepLocal_8) {
    var_1_51 = (var_1_40 - ((((((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49)))) < (var_1_45)) ? (((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49)))) : (var_1_45))));
   }
  }
 } else {
  if (var_1_5) {
   var_1_51 = ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)));
  } else {
   var_1_51 = (((((((((var_1_45) < (var_1_49)) ? (var_1_45) : (var_1_49))) - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) < (var_1_34)) ? ((((((var_1_45) < (var_1_49)) ? (var_1_45) : (var_1_49))) - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : (var_1_34)));
  }
 }
 if (var_1_107 != var_1_55) {
  var_1_1 = ((var_1_73 || (var_1_5 && var_1_6)) && var_1_7);
 } else {
  if (var_1_55 > (var_1_107 / var_1_8)) {
   if (! (var_1_55 >= (3.45f + var_1_107))) {
    if (var_1_6) {
     var_1_1 = (((var_1_7 && var_1_5) && (var_1_9 && var_1_10)) && var_1_11);
    } else {
     var_1_1 = (var_1_5 && var_1_12);
    }
   } else {
    var_1_1 = ((! var_1_12) && var_1_7);
   }
  } else {
   var_1_1 = var_1_12;
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1073741824);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 4611686.018427383000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_34 >= -32767);
 assume_abort_if_not(var_1_34 <= 32766);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -127);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -127);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -127);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -126);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -1);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 32766);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -63);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -63);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_49 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_49 >= 1);
 assume_abort_if_not(var_1_49 <= 6);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= -2147483648);
 assume_abort_if_not(var_1_50 <= 2147483647);
 assume_abort_if_not(var_1_50 != 0);
 var_1_53 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_53 >= 1073741822);
 assume_abort_if_not(var_1_53 <= 2147483646);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 2147483647);
 assume_abort_if_not(var_1_57 <= 4294967294);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 2147483647);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 2147483647);
 var_1_63 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 65535);
 assume_abort_if_not(var_1_63 != 0);
 var_1_64 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_65 >= -16383);
 assume_abort_if_not(var_1_65 <= 16383);
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 63);
 var_1_71 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_71 >= 2305843.009213691400e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= 2305843.009213691400e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427383000e+12F && var_1_75 >= 1.0e-20F ));
 var_1_78 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_78 >= 31);
 assume_abort_if_not(var_1_78 <= 63);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 31);
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 63);
 var_1_81 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 63);
 var_1_84 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_84 >= 0);
 assume_abort_if_not(var_1_84 <= 0);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 127);
 assume_abort_if_not(var_1_87 <= 254);
 var_1_89 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 65535);
 assume_abort_if_not(var_1_89 != 0);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 15);
 assume_abort_if_not(var_1_90 <= 30);
 var_1_92 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_92 >= 16383);
 assume_abort_if_not(var_1_92 <= 32767);
 var_1_93 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_93 >= 16383);
 assume_abort_if_not(var_1_93 <= 32767);
 var_1_96 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_96 >= 1);
 assume_abort_if_not(var_1_96 <= 14);
 var_1_98 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_98 >= 0);
 assume_abort_if_not(var_1_98 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_101 = var_1_101;
 last_1_var_1_110 = var_1_110;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_107 != var_1_55) ? (var_1_1 == ((unsigned char) ((var_1_73 || (var_1_5 && var_1_6)) && var_1_7))) : ((var_1_55 > (var_1_107 / var_1_8)) ? ((! (var_1_55 >= (3.45f + var_1_107))) ? (var_1_6 ? (var_1_1 == ((unsigned char) (((var_1_7 && var_1_5) && (var_1_9 && var_1_10)) && var_1_11))) : (var_1_1 == ((unsigned char) (var_1_5 && var_1_12)))) : (var_1_1 == ((unsigned char) ((! var_1_12) && var_1_7)))) : (var_1_1 == ((unsigned char) var_1_12)))) && (var_1_13 == ((unsigned char) (! var_1_12)))) && (((- last_1_var_1_97) != (var_1_8 * last_1_var_1_101)) ? (var_1_14 == ((unsigned long int) (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) + 10u))) : 1)) && ((32 != (((((var_1_16) > (var_1_15)) ? (var_1_16) : (var_1_15))) + var_1_108)) ? (var_1_17 == ((unsigned long int) (var_1_16 + (var_1_18 + 5u)))) : (var_1_17 == ((unsigned long int) (var_1_15 + (var_1_19 - var_1_20)))))) && (var_1_6 ? ((var_1_8 > var_1_55) ? (var_1_12 ? (var_1_21 == ((double) ((var_1_22 - var_1_23) - ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))))) : ((! (last_1_var_1_21 < var_1_55)) ? (var_1_21 == ((double) (var_1_23 + var_1_26))) : (var_1_21 == ((double) (var_1_26 + (var_1_23 - (3.5883479888532127E18 - var_1_27))))))) : (var_1_21 == ((double) ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) : (var_1_91 ? (var_1_21 == ((double) ((var_1_23 - (var_1_27 + var_1_28)) + (var_1_29 + (var_1_30 - var_1_31))))) : 1))) && (var_1_10 ? (var_1_32 == ((double) ((((var_1_30) > (var_1_25)) ? (var_1_30) : (var_1_25))))) : 1)) && ((var_1_20 < ((((~ var_1_14) < 0 ) ? -(~ var_1_14) : (~ var_1_14)))) ? ((var_1_31 <= var_1_23) ? (var_1_33 == ((signed short int) var_1_34)) : (var_1_33 == ((signed short int) -1))) : 1)) && (((var_1_26 <= var_1_27) && var_1_83) ? ((var_1_19 >= var_1_20) ? (var_1_35 == ((signed char) ((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37))))) : (var_1_35 == ((signed char) ((((((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) < (var_1_38)) ? (((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36)))) : (var_1_38)))))) : ((var_1_34 >= 0) ? (var_1_35 == ((signed char) ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) : (var_1_35 == ((signed char) (var_1_40 - var_1_41)))))) && ((var_1_31 > var_1_32) ? (var_1_42 == ((signed short int) (((((((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41))) - var_1_43)) > (var_1_36)) ? ((((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41))) - var_1_43)) : (var_1_36))))) : 1)) && (var_1_83 ? (var_1_44 == ((signed char) ((((((((var_1_41) > (var_1_36)) ? (var_1_41) : (var_1_36)))) > ((var_1_40 - var_1_45))) ? (((((var_1_41) > (var_1_36)) ? (var_1_41) : (var_1_36)))) : ((var_1_40 - var_1_45)))))) : (var_1_44 == ((signed char) (var_1_46 + var_1_47))))) && ((var_1_19 >= var_1_18) ? (((var_1_41 >> var_1_49) < ((var_1_15 / var_1_19) / var_1_50)) ? (var_1_48 == ((signed char) ((((var_1_41 - var_1_45) < 0 ) ? -(var_1_41 - var_1_45) : (var_1_41 - var_1_45))))) : 1) : 1)) && ((var_1_18 > var_1_19) ? (var_1_12 ? ((var_1_56 < var_1_43) ? (var_1_51 == ((signed short int) (var_1_40 - ((((((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49)))) < (var_1_45)) ? (((((var_1_43) < (var_1_49)) ? (var_1_43) : (var_1_49)))) : (var_1_45)))))) : 1) : 1) : (var_1_5 ? (var_1_51 == ((signed short int) ((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61))))) : (var_1_51 == ((signed short int) (((((((((var_1_45) < (var_1_49)) ? (var_1_45) : (var_1_49))) - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) < (var_1_34)) ? ((((((var_1_45) < (var_1_49)) ? (var_1_45) : (var_1_49))) - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : (var_1_34)))))))) && (var_1_83 ? ((! var_1_11) ? (var_1_52 == ((signed long int) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : ((var_1_5 && ((var_1_19 / var_1_49) <= var_1_41)) ? (var_1_52 == ((signed long int) (((((8) < ((var_1_53 - var_1_43))) ? (8) : ((var_1_53 - var_1_43)))) - var_1_20))) : (var_1_52 == ((signed long int) ((((last_1_var_1_52) < (var_1_40)) ? (last_1_var_1_52) : (var_1_40))))))) : ((! var_1_10) ? (var_1_52 == ((signed long int) (var_1_43 - var_1_20))) : 1))) && ((! ((var_1_41 + var_1_18) > var_1_15)) ? (var_1_54 == ((unsigned char) (var_1_45 + var_1_49))) : 1)) && ((((((var_1_39) < (var_1_53)) ? (var_1_39) : (var_1_53))) != var_1_61) ? (var_1_55 == ((double) (var_1_23 + var_1_31))) : (var_1_55 == ((double) (var_1_23 - (var_1_27 + (var_1_31 + var_1_30))))))) && ((var_1_6 || ((var_1_110 * var_1_40) <= var_1_49)) ? (var_1_12 ? ((var_1_6 || (var_1_20 != var_1_43)) ? (var_1_56 == ((unsigned long int) (((((var_1_57 - var_1_53)) > (((((var_1_54) > (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43))))) ? (var_1_54) : (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43)))))))) ? ((var_1_57 - var_1_53)) : (((((var_1_54) > (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43))))) ? (var_1_54) : (((((var_1_16) < (var_1_43)) ? (var_1_16) : (var_1_43))))))))))) : (var_1_56 == ((unsigned long int) (((((var_1_57 - var_1_58)) > (var_1_15)) ? ((var_1_57 - var_1_58)) : (var_1_15)))))) : ((var_1_39 != (var_1_43 * var_1_47)) ? (var_1_56 == ((unsigned long int) (((((var_1_19 + 8u)) < (var_1_16)) ? ((var_1_19 + 8u)) : (var_1_16))))) : (((var_1_43 * (- var_1_76)) != var_1_61) ? ((var_1_40 > var_1_57) ? (var_1_56 == ((unsigned long int) (var_1_57 - ((((256u) < 0 ) ? -(256u) : (256u)))))) : (var_1_56 == ((unsigned long int) var_1_57))) : (var_1_56 == ((unsigned long int) ((((var_1_49) < ((var_1_57 - var_1_59))) ? (var_1_49) : ((var_1_57 - var_1_59))))))))) : 1)) && (var_1_60 == ((double) (var_1_27 - 8.56)))) && (((- var_1_25) < (- var_1_97)) ? ((! var_1_91) ? (var_1_61 == ((signed long int) ((((((var_1_43 - var_1_49)) < ((var_1_46 + var_1_36))) ? ((var_1_43 - var_1_49)) : ((var_1_46 + var_1_36)))) + var_1_62))) : (var_1_61 == ((signed long int) var_1_39))) : ((var_1_58 < (- var_1_14)) ? (var_1_61 == ((signed long int) ((((var_1_43) < (var_1_20)) ? (var_1_43) : (var_1_20))))) : (var_1_61 == ((signed long int) (var_1_53 - var_1_52)))))) && ((((var_1_41 + var_1_43) - var_1_18) != var_1_14) ? ((last_1_var_1_62 < var_1_94) ? ((var_1_94 > var_1_39) ? ((var_1_28 < var_1_26) ? (var_1_62 == ((signed short int) (var_1_45 + var_1_85))) : (var_1_62 == ((signed short int) (((((last_1_var_1_62) < ((var_1_41 - var_1_49))) ? (last_1_var_1_62) : ((var_1_41 - var_1_49)))) + var_1_38)))) : ((var_1_39 <= (25 - var_1_49)) ? (var_1_62 == ((signed short int) ((((var_1_45) > (((((var_1_49) > (var_1_39)) ? (var_1_49) : (var_1_39))))) ? (var_1_45) : (((((var_1_49) > (var_1_39)) ? (var_1_49) : (var_1_39)))))))) : (var_1_62 == ((signed short int) (var_1_49 + ((((last_1_var_1_62 + -256) < 0 ) ? -(last_1_var_1_62 + -256) : (last_1_var_1_62 + -256)))))))) : 1) : ((var_1_31 == (var_1_22 - var_1_64)) ? (var_1_62 == ((signed short int) (var_1_65 + var_1_49))) : 1))) && ((var_1_40 >= var_1_41) ? (var_1_66 == ((double) (var_1_26 + var_1_29))) : (var_1_66 == ((double) (var_1_31 + var_1_29))))) && (var_1_6 ? (var_1_67 == ((unsigned char) var_1_41)) : 1)) && ((var_1_74 > (var_1_25 / ((((var_1_8) > (var_1_22)) ? (var_1_8) : (var_1_22))))) ? (var_1_68 == ((signed char) (5 + ((((var_1_46) > ((var_1_49 - var_1_69))) ? (var_1_46) : ((var_1_49 - var_1_69))))))) : (var_1_68 == ((signed char) ((((var_1_40) < ((var_1_69 + var_1_47))) ? (var_1_40) : ((var_1_69 + var_1_47)))))))) && (var_1_9 ? (var_1_70 == ((double) ((var_1_30 - var_1_31) + var_1_28))) : (var_1_70 == ((double) (var_1_31 - (var_1_30 + (var_1_71 - var_1_27))))))) && ((var_1_19 > ((((var_1_58) > (var_1_69)) ? (var_1_58) : (var_1_69)))) ? (var_1_72 == ((float) (var_1_23 + var_1_26))) : 1)) && (var_1_13 ? (((var_1_69 + var_1_17) <= ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) ? (var_1_73 == ((unsigned char) (! var_1_12))) : 1) : (var_1_73 == ((unsigned char) (var_1_9 && var_1_12))))) && ((! var_1_5) ? (var_1_74 == ((float) (((var_1_71 - 15.5f) + (var_1_75 - var_1_31)) - var_1_30))) : ((var_1_60 <= var_1_24) ? (var_1_74 == ((float) ((var_1_27 + 1.00000005E7f) + (var_1_30 + var_1_31)))) : (var_1_74 == ((float) (((((((((var_1_31) < (var_1_24)) ? (var_1_31) : (var_1_24))) - (var_1_22 - var_1_75))) > (((((((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) < (var_1_23)) ? (((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) : (var_1_23))))) ? ((((((var_1_31) < (var_1_24)) ? (var_1_31) : (var_1_24))) - (var_1_22 - var_1_75))) : (((((((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) < (var_1_23)) ? (((((var_1_26) > (4.25f)) ? (var_1_26) : (4.25f)))) : (var_1_23))))))))))) && ((var_1_12 && (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) <= (var_1_18 * var_1_106))) ? (var_1_76 == ((signed long int) (var_1_53 - ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)))))) : (((var_1_18 > var_1_50) || var_1_9) ? (var_1_76 == ((signed long int) var_1_52)) : (var_1_76 == ((signed long int) (var_1_53 - (var_1_49 + 8))))))) && (var_1_9 ? (((var_1_44 * var_1_35) >= var_1_20) ? (var_1_77 == ((signed char) var_1_38)) : ((((var_1_24 / var_1_75) / var_1_71) <= (var_1_28 - var_1_64)) ? (var_1_77 == ((signed char) (var_1_69 + var_1_46))) : (var_1_77 == ((signed char) var_1_36)))) : (var_1_5 ? (var_1_77 == ((signed char) (var_1_40 - var_1_45))) : (var_1_77 == ((signed char) (((((var_1_69) > (var_1_49)) ? (var_1_69) : (var_1_49))) + ((var_1_78 - var_1_79) - ((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81)))))))))) && ((var_1_40 >= ((var_1_37 ^ var_1_57) / ((((var_1_49) > (var_1_63)) ? (var_1_49) : (var_1_63))))) ? (var_1_83 ? (var_1_83 ? (var_1_82 == ((signed char) var_1_37)) : (var_1_82 == ((signed char) var_1_81))) : (var_1_82 == ((signed char) var_1_47))) : (var_1_82 == ((signed char) ((((var_1_80) > (var_1_69)) ? (var_1_80) : (var_1_69))))))) && ((! var_1_9) ? (var_1_7 ? ((var_1_38 <= var_1_33) ? (var_1_83 == ((unsigned char) (! var_1_12))) : 1) : (var_1_83 == ((unsigned char) var_1_11))) : ((15.8 > var_1_24) ? (var_1_83 == ((unsigned char) (var_1_5 && var_1_12))) : (var_1_83 == ((unsigned char) (var_1_12 || var_1_84)))))) && (var_1_85 == ((signed char) var_1_78))) && ((! var_1_10) ? (var_1_83 ? (var_1_86 == ((unsigned char) (var_1_87 - var_1_45))) : (var_1_86 == ((unsigned char) (128 - ((((var_1_41) < (var_1_49)) ? (var_1_41) : (var_1_49))))))) : (var_1_86 == ((unsigned char) (var_1_69 + ((((var_1_45) < (var_1_80)) ? (var_1_45) : (var_1_80)))))))) && ((((var_1_52 * var_1_108) / var_1_89) > var_1_45) ? ((((((10) < 0 ) ? -(10) : (10))) == (100 >> (var_1_90 - var_1_49))) ? (var_1_88 == ((signed char) ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) : (var_1_88 == ((signed char) ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) : 1)) && ((var_1_14 < ((var_1_92 - var_1_14) - (var_1_93 - var_1_81))) ? (((var_1_108 / var_1_49) <= var_1_90) ? (var_1_91 == ((unsigned char) (var_1_83 && var_1_84))) : (var_1_91 == ((unsigned char) ((! var_1_9) || var_1_84)))) : (var_1_91 == ((unsigned char) (var_1_13 && var_1_12))))) && (var_1_9 ? (var_1_94 == ((signed long int) ((((var_1_48) < ((var_1_65 + var_1_104))) ? (var_1_48) : ((var_1_65 + var_1_104)))))) : (var_1_94 == ((signed long int) ((((((var_1_80 - var_1_102) + var_1_41)) > ((var_1_43 - var_1_49))) ? (((var_1_80 - var_1_102) + var_1_41)) : ((var_1_43 - var_1_49)))))))) && ((((var_1_49 >> var_1_96) | var_1_56) != ((((var_1_14) > (var_1_94)) ? (var_1_14) : (var_1_94)))) ? ((var_1_14 > 10000000) ? (var_1_95 == ((double) ((((((var_1_30 + var_1_28)) < (var_1_26)) ? ((var_1_30 + var_1_28)) : (var_1_26))) + var_1_71))) : 1) : 1)) && (last_1_var_1_91 ? ((-8 > last_1_var_1_86) ? (var_1_97 == ((float) ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))) : ((99.25 >= last_1_var_1_66) ? (last_1_var_1_1 ? (((((((128 - var_1_98)) < (var_1_63)) ? ((128 - var_1_98)) : (var_1_63))) > ((last_1_var_1_88 * var_1_96) | var_1_58)) ? (var_1_97 == ((float) (var_1_27 - var_1_31))) : 1) : (var_1_97 == ((float) var_1_29))) : 1)) : 1)) && ((! (var_1_29 == (var_1_70 / var_1_71))) ? ((4 >= var_1_16) ? (var_1_12 ? (var_1_99 == ((unsigned char) var_1_41)) : 1) : (var_1_99 == ((unsigned char) var_1_79))) : (var_1_99 == ((unsigned char) var_1_79)))) && (var_1_12 ? (var_1_100 == ((signed char) var_1_45)) : 1)) && (var_1_101 == ((float) var_1_71))) && (var_1_7 ? (var_1_102 == ((signed long int) var_1_87)) : (var_1_102 == ((signed long int) -16)))) && (var_1_103 == ((unsigned short int) var_1_98))) && (var_1_104 == ((signed short int) var_1_36))) && (var_1_9 ? (var_1_105 == ((signed char) var_1_37)) : (var_1_105 == ((signed char) var_1_79)))) && (var_1_6 ? (var_1_106 == ((unsigned char) var_1_69)) : (var_1_106 == ((unsigned char) 100)))) && (var_1_6 ? (var_1_107 == ((float) var_1_30)) : (var_1_107 == ((float) var_1_31)))) && (var_1_108 == ((unsigned long int) var_1_43))) && (var_1_7 ? (var_1_109 == ((signed long int) var_1_37)) : (var_1_109 == ((signed long int) var_1_94)))) && (var_1_11 ? ((((var_1_14 * var_1_80) + var_1_103) < var_1_17) ? (var_1_110 == ((signed long int) ((((var_1_81) < ((((((var_1_49 - last_1_var_1_110)) < (var_1_92)) ? ((var_1_49 - last_1_var_1_110)) : (var_1_92))))) ? (var_1_81) : ((((((var_1_49 - last_1_var_1_110)) < (var_1_92)) ? ((var_1_49 - last_1_var_1_110)) : (var_1_92)))))))) : (var_1_110 == ((signed long int) var_1_69))) : (var_1_110 == ((signed long int) var_1_20)))
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
