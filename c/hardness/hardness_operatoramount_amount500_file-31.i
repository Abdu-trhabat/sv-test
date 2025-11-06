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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31Amount500.c", 13, "reach_error"); }
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
unsigned long int var_1_4 = 32;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 16;
unsigned char var_1_8 = 100;
unsigned char var_1_9 = 200;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 32;
double var_1_13 = 9.5;
double var_1_14 = 9.545;
double var_1_15 = 99.5;
double var_1_16 = 1.25;
double var_1_18 = 0.0;
double var_1_19 = 128.9;
double var_1_20 = 7.8;
float var_1_21 = 32.6;
float var_1_22 = 9999999999.5;
float var_1_23 = 256.5;
float var_1_24 = 15.5;
signed char var_1_26 = 0;
float var_1_27 = 100000000.575;
unsigned short int var_1_28 = 256;
unsigned short int var_1_29 = 56528;
signed long int var_1_30 = 128;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
double var_1_40 = 4.6;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
double var_1_45 = 49.75;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
float var_1_48 = 4.75;
float var_1_49 = 2.5;
float var_1_50 = 0.45;
signed char var_1_51 = 8;
signed short int var_1_52 = -10;
unsigned char var_1_53 = 2;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 100;
unsigned char var_1_56 = 100;
unsigned char var_1_57 = 50;
unsigned char var_1_58 = 5;
float var_1_59 = 15.75;
float var_1_60 = 31.24;
float var_1_61 = 31.8;
unsigned char var_1_62 = 1;
float var_1_63 = 1.3;
unsigned short int var_1_64 = 256;
unsigned short int var_1_65 = 17450;
float var_1_66 = 1.35;
float var_1_67 = 5.75;
unsigned char var_1_68 = 1;
signed char var_1_69 = 2;
unsigned char var_1_71 = 0;
unsigned short int var_1_72 = 4;
unsigned short int var_1_73 = 32915;
signed long int var_1_74 = -50;
signed short int var_1_75 = 500;
signed short int var_1_76 = 1;
unsigned char var_1_77 = 1;
unsigned char var_1_78 = 10;
unsigned char var_1_79 = 200;
unsigned char var_1_80 = 4;
signed short int var_1_81 = 1;
double var_1_82 = 4.8;
unsigned long int var_1_83 = 16;
unsigned long int var_1_84 = 4164485007;
unsigned long int var_1_85 = 25;
signed short int var_1_86 = 10;
signed short int var_1_87 = -4;
unsigned short int var_1_88 = 8;
unsigned short int var_1_89 = 28379;
unsigned short int var_1_90 = 10000;
double var_1_91 = 25.5;
unsigned char var_1_92 = 5;
signed long int var_1_93 = 50;
unsigned long int var_1_95 = 64;
signed long int var_1_96 = 64;
unsigned long int var_1_97 = 500;
float var_1_98 = 10.25;
unsigned char var_1_99 = 1;
signed long int var_1_100 = -5;
unsigned long int var_1_101 = 16;
signed char var_1_102 = -32;
signed long int var_1_103 = 1000000000;
unsigned char var_1_104 = 1;
signed short int var_1_105 = -16;
unsigned long int var_1_106 = 5;
signed long int var_1_107 = -8;
signed long int var_1_108 = 0;
signed char var_1_109 = -4;
unsigned long int var_1_110 = 100000000;
unsigned char var_1_111 = 1;
signed char var_1_112 = -10;
unsigned char last_1_var_1_35 = 1;
unsigned char last_1_var_1_62 = 1;
float last_1_var_1_66 = 1.35;
signed short int last_1_var_1_75 = 500;
signed short int last_1_var_1_81 = 1;
unsigned long int last_1_var_1_83 = 16;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_66 > var_1_20) {
  var_1_83 = (var_1_84 - ((1000000000u - last_1_var_1_81) + ((((var_1_9) > (var_1_34)) ? (var_1_9) : (var_1_34)))));
 }
 unsigned char stepLocal_25 = last_1_var_1_62;
 if (var_1_39 || stepLocal_25) {
  if (var_1_67 <= ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) {
   var_1_85 = (var_1_84 - ((((last_1_var_1_83) > (var_1_34)) ? (last_1_var_1_83) : (var_1_34))));
  } else {
   var_1_85 = (var_1_84 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))));
  }
 }
 unsigned long int stepLocal_14 = var_1_6 & (4u / var_1_57);
 if (var_1_85 >= stepLocal_14) {
  var_1_64 = var_1_9;
 } else {
  var_1_64 = (5 + (var_1_65 - ((((2) > (var_1_34)) ? (2) : (var_1_34)))));
 }
 var_1_30 = ((((var_1_29) > (var_1_11)) ? (var_1_29) : (var_1_11)));
 signed long int stepLocal_6 = var_1_29 - var_1_9;
 if (stepLocal_6 < (var_1_7 * var_1_10)) {
  var_1_31 = (128 - ((var_1_32 + var_1_33) + var_1_34));
 } else {
  var_1_31 = ((((var_1_6) > ((var_1_26 + var_1_33))) ? (var_1_6) : ((var_1_26 + var_1_33))));
 }
 var_1_48 = (((((var_1_19 + (var_1_49 + var_1_50))) > ((((((5.5f) < 0 ) ? -(5.5f) : (5.5f))) + var_1_24))) ? ((var_1_19 + (var_1_49 + var_1_50))) : ((((((5.5f) < 0 ) ? -(5.5f) : (5.5f))) + var_1_24))));
 if ((var_1_63 - (var_1_60 + var_1_23)) < 3.2f) {
  var_1_62 = var_1_38;
 }
 signed long int stepLocal_20 = var_1_56 / var_1_11;
 if (var_1_15 < (- var_1_22)) {
  var_1_72 = (var_1_29 - ((((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8))));
 } else {
  if ((~ var_1_69) <= stepLocal_20) {
   var_1_72 = (var_1_11 + 256);
  } else {
   var_1_72 = (((((((((var_1_29) > (var_1_73)) ? (var_1_29) : (var_1_73))) - var_1_69)) > (var_1_12)) ? ((((((var_1_29) > (var_1_73)) ? (var_1_29) : (var_1_73))) - var_1_69)) : (var_1_12)));
  }
 }
 if (var_1_67 > var_1_24) {
  var_1_91 = var_1_18;
 } else {
  var_1_91 = ((((var_1_27) > (var_1_61)) ? (var_1_27) : (var_1_61)));
 }
 var_1_95 = var_1_12;
 if (var_1_39) {
  var_1_100 = 64;
 } else {
  var_1_100 = var_1_29;
 }
 var_1_101 = var_1_90;
 var_1_102 = var_1_33;
 if (var_1_47) {
  var_1_104 = var_1_42;
 } else {
  var_1_104 = var_1_38;
 }
 if (var_1_42) {
  var_1_105 = var_1_56;
 } else {
  var_1_105 = var_1_69;
 }
 if (var_1_47) {
  var_1_106 = var_1_90;
 } else {
  var_1_106 = var_1_11;
 }
 var_1_107 = var_1_108;
 if (var_1_71) {
  var_1_109 = var_1_58;
 }
 var_1_110 = var_1_90;
 var_1_111 = ((((((var_1_100) > (var_1_26)) ? (var_1_100) : (var_1_26))) <= var_1_108) && var_1_71);
 signed long int stepLocal_28 = (var_1_89 - var_1_9) - var_1_10;
 if (stepLocal_28 < var_1_101) {
  if (var_1_36) {
   var_1_97 = var_1_83;
  }
 } else {
  var_1_97 = var_1_11;
 }
 if ((var_1_20 - 127.75) >= 16.25) {
  var_1_74 = (var_1_12 + var_1_69);
 } else {
  var_1_74 = (var_1_31 - var_1_97);
 }
 unsigned short int stepLocal_21 = var_1_64;
 if (stepLocal_21 < var_1_6) {
  if (! (((((var_1_69) < (var_1_83)) ? (var_1_69) : (var_1_83))) > (var_1_64 ^ var_1_8))) {
   if (var_1_38) {
    var_1_75 = ((-50 + var_1_12) + (var_1_56 + var_1_34));
   } else {
    var_1_75 = last_1_var_1_75;
   }
  } else {
   var_1_75 = ((var_1_12 + var_1_34) - var_1_55);
  }
 }
 unsigned long int stepLocal_22 = var_1_106;
 if (var_1_29 > stepLocal_22) {
  if (! var_1_62) {
   if (! var_1_38) {
    var_1_76 = ((((var_1_6) > (((((var_1_75) > (var_1_85)) ? (var_1_75) : (var_1_85))))) ? (var_1_6) : (((((var_1_75) > (var_1_85)) ? (var_1_75) : (var_1_85))))));
   } else {
    var_1_76 = (var_1_32 + ((var_1_54 + var_1_34) - var_1_7));
   }
  }
 } else {
  var_1_76 = 10;
 }
 unsigned long int stepLocal_24 = - (var_1_57 + var_1_97);
 if (((- 32u) * var_1_33) > stepLocal_24) {
  var_1_81 = (((((256) < 0 ) ? -(256) : (256))) - var_1_55);
 }
 unsigned char stepLocal_19 = var_1_104;
 unsigned long int stepLocal_18 = var_1_106;
 signed long int stepLocal_17 = ((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10))) << 2u;
 unsigned char stepLocal_16 = var_1_33;
 signed long int stepLocal_15 = var_1_74;
 if (((var_1_33 >> var_1_69) > var_1_9) && stepLocal_19) {
  if (stepLocal_16 == var_1_29) {
   if (((var_1_7 - var_1_55) / -128) > stepLocal_17) {
    var_1_68 = ((! var_1_47) && ((! var_1_36) && var_1_42));
   } else {
    var_1_68 = var_1_47;
   }
  } else {
   if (var_1_65 > stepLocal_15) {
    var_1_68 = (((var_1_36 && var_1_38) || (var_1_104 && var_1_47)) || var_1_71);
   } else {
    if (stepLocal_18 >= var_1_97) {
     var_1_68 = (! (! var_1_71));
    } else {
     var_1_68 = (! (var_1_42 && var_1_43));
    }
   }
  }
 } else {
  var_1_68 = var_1_47;
 }
 unsigned long int stepLocal_23 = ((((var_1_106) > (-5)) ? (var_1_106) : (-5))) + var_1_95;
 if (var_1_67 >= var_1_15) {
  if (-128 > stepLocal_23) {
   var_1_77 = (((((((((2 + var_1_78)) < (var_1_6)) ? ((2 + var_1_78)) : (var_1_6)))) < (var_1_7)) ? ((((((2 + var_1_78)) < (var_1_6)) ? ((2 + var_1_78)) : (var_1_6)))) : (var_1_7)));
  } else {
   if (! var_1_42) {
    var_1_77 = var_1_54;
   } else {
    var_1_77 = ((((((var_1_79 - var_1_69) - var_1_78)) > (var_1_57)) ? (((var_1_79 - var_1_69) - var_1_78)) : (var_1_57)));
   }
  }
 } else {
  var_1_77 = (var_1_80 + var_1_12);
 }
 unsigned long int stepLocal_26 = 10u;
 if (! var_1_68) {
  if (stepLocal_26 != var_1_110) {
   var_1_93 = var_1_6;
  }
 }
 if (var_1_104) {
  var_1_99 = var_1_43;
 } else {
  var_1_99 = var_1_36;
 }
 if (((var_1_10 * 64) & var_1_4) > var_1_8) {
  if (var_1_12 >= var_1_76) {
   var_1_59 = ((var_1_18 - (var_1_60 + var_1_61)) - var_1_15);
  } else {
   var_1_59 = (0.5f + (var_1_49 + var_1_50));
  }
 } else {
  var_1_59 = ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23)));
 }
 if (((var_1_107 + var_1_11) / -1) > var_1_4) {
  if (var_1_106 > var_1_85) {
   var_1_35 = var_1_36;
  } else {
   if (last_1_var_1_35) {
    var_1_35 = ((var_1_36 || var_1_111) && (var_1_99 && var_1_38));
   } else {
    var_1_35 = (var_1_39 && (var_1_38 || (! var_1_36)));
   }
  }
 } else {
  var_1_35 = var_1_38;
 }
 if (var_1_85 != var_1_8) {
  var_1_13 = (((((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) < (((((64.4) < 0 ) ? -(64.4) : (64.4))))) ? ((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) : (((((64.4) < 0 ) ? -(64.4) : (64.4))))));
 } else {
  if (var_1_35) {
   var_1_13 = ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_15)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_15)));
  } else {
   if (! var_1_99) {
    var_1_13 = (((((((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) < ((var_1_18 - var_1_19))) ? (((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) : ((var_1_18 - var_1_19)))) - ((((var_1_16) > (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))))) ? (var_1_16) : (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20)))))));
   } else {
    var_1_13 = var_1_19;
   }
  }
 }
 unsigned char stepLocal_2 = var_1_68;
 unsigned long int stepLocal_1 = var_1_6 + var_1_106;
 unsigned long int stepLocal_0 = var_1_97 % var_1_4;
 if (stepLocal_0 >= var_1_106) {
  if (stepLocal_2 && (var_1_97 < var_1_4)) {
   var_1_1 = var_1_6;
  }
 } else {
  if (stepLocal_1 > var_1_97) {
   var_1_1 = ((((((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) < (var_1_9)) ? (((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) : (var_1_9)));
  } else {
   var_1_1 = (((((var_1_10) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_10) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) - var_1_12);
  }
 }
 unsigned char stepLocal_5 = var_1_8;
 signed long int stepLocal_4 = var_1_12 - var_1_26;
 signed long int stepLocal_3 = -2;
 if (stepLocal_5 == (- var_1_30)) {
  var_1_21 = ((var_1_19 + var_1_22) - (var_1_23 + var_1_24));
 } else {
  if (stepLocal_3 < ((var_1_12 * var_1_11) | var_1_7)) {
   var_1_21 = ((((4.5f) > (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))) ? (4.5f) : (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))));
  } else {
   if (var_1_77 < stepLocal_4) {
    var_1_21 = (var_1_23 - var_1_27);
   }
  }
 }
 if (var_1_39 || (var_1_13 != (var_1_15 / var_1_18))) {
  if (var_1_35) {
   var_1_40 = (((((var_1_22 - (var_1_23 + var_1_24))) > (var_1_15)) ? ((var_1_22 - (var_1_23 + var_1_24))) : (var_1_15)));
  } else {
   if (var_1_81 < var_1_33) {
    var_1_40 = var_1_24;
   } else {
    var_1_40 = 32.875;
   }
  }
 }
 if ((var_1_10 - var_1_12) > ((((var_1_11) < (var_1_9)) ? (var_1_11) : (var_1_9)))) {
  var_1_41 = (! var_1_38);
 } else {
  if (var_1_68 && ((var_1_95 / var_1_10) >= (var_1_12 << var_1_11))) {
   var_1_41 = (((var_1_36 || var_1_39) && var_1_42) && (var_1_43 && var_1_44));
  } else {
   var_1_41 = 0;
  }
 }
 if (var_1_13 <= var_1_91) {
  if (var_1_43) {
   var_1_46 = ((var_1_38 || var_1_36) || var_1_47);
  } else {
   if (! var_1_38) {
    var_1_46 = ((var_1_91 <= (var_1_27 / var_1_18)) && var_1_47);
   }
  }
 }
 if (var_1_46 && var_1_47) {
  if (((((var_1_56) < (var_1_9)) ? (var_1_56) : (var_1_9))) >= (var_1_79 * var_1_26)) {
   var_1_86 = var_1_87;
  } else {
   var_1_86 = (var_1_80 - var_1_56);
  }
 } else {
  var_1_86 = var_1_7;
 }
 if (var_1_99) {
  var_1_98 = var_1_16;
 }
 var_1_103 = var_1_1;
 unsigned char stepLocal_8 = var_1_99;
 unsigned char stepLocal_7 = var_1_16 > var_1_18;
 if (var_1_35 || stepLocal_7) {
  if ((var_1_74 <= var_1_7) && stepLocal_8) {
   var_1_45 = (var_1_24 + var_1_22);
  } else {
   var_1_45 = var_1_27;
  }
 } else {
  var_1_45 = var_1_16;
 }
 if (var_1_45 > var_1_59) {
  if ((var_1_16 - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < var_1_13) {
   var_1_66 = ((((var_1_67) > (var_1_19)) ? (var_1_67) : (var_1_19)));
  }
 } else {
  var_1_66 = 24.6f;
 }
 var_1_28 = (var_1_29 - (var_1_86 + var_1_12));
 unsigned char stepLocal_10 = var_1_10;
 signed long int stepLocal_9 = 16 & (var_1_29 + var_1_8);
 if ((var_1_34 + var_1_32) < stepLocal_10) {
  if (var_1_50 <= (var_1_20 + 63.4f)) {
   if (stepLocal_9 != (var_1_6 / ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) {
    var_1_52 = (var_1_8 - var_1_26);
   } else {
    if (var_1_36) {
     var_1_52 = (((((((((var_1_6 + var_1_10)) < (256)) ? ((var_1_6 + var_1_10)) : (256)))) > ((((((var_1_97) > (var_1_11)) ? (var_1_97) : (var_1_11))) - var_1_7))) ? ((((((var_1_6 + var_1_10)) < (256)) ? ((var_1_6 + var_1_10)) : (256)))) : ((((((var_1_97) > (var_1_11)) ? (var_1_97) : (var_1_11))) - var_1_7))));
    }
   }
  } else {
   var_1_52 = ((var_1_28 + var_1_8) + var_1_95);
  }
 } else {
  var_1_52 = (((((var_1_12 + var_1_28)) > (((((((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) > (var_1_95)) ? (((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) : (var_1_95))))) ? ((var_1_12 + var_1_28)) : (((((((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) > (var_1_95)) ? (((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) : (var_1_95))))));
 }
 if ((var_1_20 * var_1_49) <= ((((var_1_27) < (var_1_67)) ? (var_1_27) : (var_1_67)))) {
  var_1_82 = ((var_1_22 + var_1_24) - var_1_15);
 } else {
  if ((- var_1_69) >= var_1_103) {
   var_1_82 = ((((((((64.1) < 0 ) ? -(64.1) : (64.1)))) < (var_1_14)) ? (((((64.1) < 0 ) ? -(64.1) : (64.1)))) : (var_1_14)));
  }
 }
 if (var_1_41) {
  var_1_88 = (var_1_29 - ((var_1_89 - var_1_54) - (var_1_90 - var_1_8)));
 } else {
  if ((var_1_78 + var_1_103) != (var_1_26 * (var_1_86 / var_1_11))) {
   var_1_88 = (var_1_79 + ((((var_1_34) < (((((var_1_101) < (var_1_33)) ? (var_1_101) : (var_1_33))))) ? (var_1_34) : (((((var_1_101) < (var_1_33)) ? (var_1_101) : (var_1_33)))))));
  } else {
   var_1_88 = ((((var_1_6 + 16) < 0 ) ? -(var_1_6 + 16) : (var_1_6 + 16)));
  }
 }
 if (var_1_41) {
  if (var_1_45 <= var_1_67) {
   var_1_92 = ((((var_1_55) > (var_1_34)) ? (var_1_55) : (var_1_34)));
  } else {
   if ((var_1_79 / var_1_73) > var_1_54) {
    var_1_92 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
   } else {
    var_1_92 = ((((var_1_26) < (var_1_7)) ? (var_1_26) : (var_1_7)));
   }
  }
 } else {
  var_1_92 = ((((var_1_34) < (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))))) ? (var_1_34) : (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))))));
 }
 if (var_1_82 != var_1_14) {
  var_1_51 = (var_1_33 + var_1_34);
 } else {
  var_1_51 = (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - var_1_34);
 }
 signed long int stepLocal_13 = -100000;
 signed short int stepLocal_12 = var_1_52;
 unsigned char stepLocal_11 = var_1_38;
 if (var_1_50 > var_1_20) {
  if (! (var_1_52 >= var_1_101)) {
   var_1_53 = (128 - 10);
  } else {
   var_1_53 = ((var_1_54 + var_1_55) - var_1_26);
  }
 } else {
  if (stepLocal_13 != (var_1_32 + var_1_88)) {
   if ((var_1_11 < var_1_33) || stepLocal_11) {
    if (var_1_76 >= stepLocal_12) {
     var_1_53 = ((var_1_55 + var_1_56) - 2);
    }
   }
  } else {
   var_1_53 = (((((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) > ((var_1_54 + var_1_56))) ? (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) : ((var_1_54 + var_1_56)))) - (var_1_33 + (var_1_57 - var_1_58)));
  }
 }
 if (! (var_1_55 == (var_1_85 % var_1_4))) {
  if (var_1_53 >= var_1_29) {
   var_1_112 = -2;
  } else {
   var_1_112 = var_1_79;
  }
 }
 unsigned char stepLocal_27 = var_1_80;
 if (var_1_85 < stepLocal_27) {
  var_1_96 = (var_1_29 + var_1_112);
 } else {
  if (var_1_43) {
   var_1_96 = ((((var_1_57) > (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))) ? (var_1_57) : (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 127);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 32);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -230584.3009213691400e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -230584.3009213691400e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 63);
 assume_abort_if_not(var_1_54 <= 127);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 64);
 assume_abort_if_not(var_1_55 <= 127);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 64);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 31);
 assume_abort_if_not(var_1_57 <= 63);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 31);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 16383);
 assume_abort_if_not(var_1_65 <= 32767);
 var_1_67 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_67 >= -922337.2036854766000e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
 var_1_69 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_69 >= 1);
 assume_abort_if_not(var_1_69 <= 7);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 0);
 var_1_73 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_73 >= 32767);
 assume_abort_if_not(var_1_73 <= 65534);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 127);
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 190);
 assume_abort_if_not(var_1_79 <= 254);
 var_1_80 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 127);
 var_1_84 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_84 >= 2147483647);
 assume_abort_if_not(var_1_84 <= 4294967294);
 var_1_87 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_87 >= -32767);
 assume_abort_if_not(var_1_87 <= 32766);
 var_1_89 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_89 >= 24575);
 assume_abort_if_not(var_1_89 <= 32767);
 var_1_90 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_90 >= 8191);
 assume_abort_if_not(var_1_90 <= 16383);
 var_1_108 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_108 >= -2147483647);
 assume_abort_if_not(var_1_108 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_35 = var_1_35;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_83 = var_1_83;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_97 % var_1_4) >= var_1_106) ? ((var_1_68 && (var_1_97 < var_1_4)) ? (var_1_1 == ((unsigned char) var_1_6)) : 1) : (((var_1_6 + var_1_106) > var_1_97) ? (var_1_1 == ((unsigned char) ((((((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) < (var_1_9)) ? (((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) : (var_1_9))))) : (var_1_1 == ((unsigned char) (((((var_1_10) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_10) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) - var_1_12))))) && ((var_1_85 != var_1_8) ? (var_1_13 == ((double) (((((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) < (((((64.4) < 0 ) ? -(64.4) : (64.4))))) ? ((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) : (((((64.4) < 0 ) ? -(64.4) : (64.4)))))))) : (var_1_35 ? (var_1_13 == ((double) ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_15)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_15))))) : ((! var_1_99) ? (var_1_13 == ((double) (((((((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) < ((var_1_18 - var_1_19))) ? (((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) : ((var_1_18 - var_1_19)))) - ((((var_1_16) > (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))))) ? (var_1_16) : (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))))))))) : (var_1_13 == ((double) var_1_19)))))) && ((var_1_8 == (- var_1_30)) ? (var_1_21 == ((float) ((var_1_19 + var_1_22) - (var_1_23 + var_1_24)))) : ((-2 < ((var_1_12 * var_1_11) | var_1_7)) ? (var_1_21 == ((float) ((((4.5f) > (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))) ? (4.5f) : (((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23)))))))) : ((var_1_77 < (var_1_12 - var_1_26)) ? (var_1_21 == ((float) (var_1_23 - var_1_27))) : 1)))) && (var_1_28 == ((unsigned short int) (var_1_29 - (var_1_86 + var_1_12))))) && (var_1_30 == ((signed long int) ((((var_1_29) > (var_1_11)) ? (var_1_29) : (var_1_11)))))) && (((var_1_29 - var_1_9) < (var_1_7 * var_1_10)) ? (var_1_31 == ((unsigned char) (128 - ((var_1_32 + var_1_33) + var_1_34)))) : (var_1_31 == ((unsigned char) ((((var_1_6) > ((var_1_26 + var_1_33))) ? (var_1_6) : ((var_1_26 + var_1_33)))))))) && ((((var_1_107 + var_1_11) / -1) > var_1_4) ? ((var_1_106 > var_1_85) ? (var_1_35 == ((unsigned char) var_1_36)) : (last_1_var_1_35 ? (var_1_35 == ((unsigned char) ((var_1_36 || var_1_111) && (var_1_99 && var_1_38)))) : (var_1_35 == ((unsigned char) (var_1_39 && (var_1_38 || (! var_1_36))))))) : (var_1_35 == ((unsigned char) var_1_38)))) && ((var_1_39 || (var_1_13 != (var_1_15 / var_1_18))) ? (var_1_35 ? (var_1_40 == ((double) (((((var_1_22 - (var_1_23 + var_1_24))) > (var_1_15)) ? ((var_1_22 - (var_1_23 + var_1_24))) : (var_1_15))))) : ((var_1_81 < var_1_33) ? (var_1_40 == ((double) var_1_24)) : (var_1_40 == ((double) 32.875)))) : 1)) && (((var_1_10 - var_1_12) > ((((var_1_11) < (var_1_9)) ? (var_1_11) : (var_1_9)))) ? (var_1_41 == ((unsigned char) (! var_1_38))) : ((var_1_68 && ((var_1_95 / var_1_10) >= (var_1_12 << var_1_11))) ? (var_1_41 == ((unsigned char) (((var_1_36 || var_1_39) && var_1_42) && (var_1_43 && var_1_44)))) : (var_1_41 == ((unsigned char) 0))))) && ((var_1_35 || (var_1_16 > var_1_18)) ? (((var_1_74 <= var_1_7) && var_1_99) ? (var_1_45 == ((double) (var_1_24 + var_1_22))) : (var_1_45 == ((double) var_1_27))) : (var_1_45 == ((double) var_1_16)))) && ((var_1_13 <= var_1_91) ? (var_1_43 ? (var_1_46 == ((unsigned char) ((var_1_38 || var_1_36) || var_1_47))) : ((! var_1_38) ? (var_1_46 == ((unsigned char) ((var_1_91 <= (var_1_27 / var_1_18)) && var_1_47))) : 1)) : 1)) && (var_1_48 == ((float) (((((var_1_19 + (var_1_49 + var_1_50))) > ((((((5.5f) < 0 ) ? -(5.5f) : (5.5f))) + var_1_24))) ? ((var_1_19 + (var_1_49 + var_1_50))) : ((((((5.5f) < 0 ) ? -(5.5f) : (5.5f))) + var_1_24))))))) && ((var_1_82 != var_1_14) ? (var_1_51 == ((signed char) (var_1_33 + var_1_34))) : (var_1_51 == ((signed char) (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) - var_1_34))))) && (((var_1_34 + var_1_32) < var_1_10) ? ((var_1_50 <= (var_1_20 + 63.4f)) ? (((16 & (var_1_29 + var_1_8)) != (var_1_6 / ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_52 == ((signed short int) (var_1_8 - var_1_26))) : (var_1_36 ? (var_1_52 == ((signed short int) (((((((((var_1_6 + var_1_10)) < (256)) ? ((var_1_6 + var_1_10)) : (256)))) > ((((((var_1_97) > (var_1_11)) ? (var_1_97) : (var_1_11))) - var_1_7))) ? ((((((var_1_6 + var_1_10)) < (256)) ? ((var_1_6 + var_1_10)) : (256)))) : ((((((var_1_97) > (var_1_11)) ? (var_1_97) : (var_1_11))) - var_1_7)))))) : 1)) : (var_1_52 == ((signed short int) ((var_1_28 + var_1_8) + var_1_95)))) : (var_1_52 == ((signed short int) (((((var_1_12 + var_1_28)) > (((((((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) > (var_1_95)) ? (((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) : (var_1_95))))) ? ((var_1_12 + var_1_28)) : (((((((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) > (var_1_95)) ? (((((var_1_32) < (var_1_97)) ? (var_1_32) : (var_1_97)))) : (var_1_95)))))))))) && ((var_1_50 > var_1_20) ? ((! (var_1_52 >= var_1_101)) ? (var_1_53 == ((unsigned char) (128 - 10))) : (var_1_53 == ((unsigned char) ((var_1_54 + var_1_55) - var_1_26)))) : ((-100000 != (var_1_32 + var_1_88)) ? (((var_1_11 < var_1_33) || var_1_38) ? ((var_1_76 >= var_1_52) ? (var_1_53 == ((unsigned char) ((var_1_55 + var_1_56) - 2))) : 1) : 1) : (var_1_53 == ((unsigned char) (((((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) > ((var_1_54 + var_1_56))) ? (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))) : ((var_1_54 + var_1_56)))) - (var_1_33 + (var_1_57 - var_1_58)))))))) && ((((var_1_10 * 64) & var_1_4) > var_1_8) ? ((var_1_12 >= var_1_76) ? (var_1_59 == ((float) ((var_1_18 - (var_1_60 + var_1_61)) - var_1_15))) : (var_1_59 == ((float) (0.5f + (var_1_49 + var_1_50))))) : (var_1_59 == ((float) ((((var_1_22) < (var_1_23)) ? (var_1_22) : (var_1_23))))))) && (((var_1_63 - (var_1_60 + var_1_23)) < 3.2f) ? (var_1_62 == ((unsigned char) var_1_38)) : 1)) && ((var_1_85 >= (var_1_6 & (4u / var_1_57))) ? (var_1_64 == ((unsigned short int) var_1_9)) : (var_1_64 == ((unsigned short int) (5 + (var_1_65 - ((((2) > (var_1_34)) ? (2) : (var_1_34))))))))) && ((var_1_45 > var_1_59) ? (((var_1_16 - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < var_1_13) ? (var_1_66 == ((float) ((((var_1_67) > (var_1_19)) ? (var_1_67) : (var_1_19))))) : 1) : (var_1_66 == ((float) 24.6f)))) && ((((var_1_33 >> var_1_69) > var_1_9) && var_1_104) ? ((var_1_33 == var_1_29) ? ((((var_1_7 - var_1_55) / -128) > (((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10))) << 2u)) ? (var_1_68 == ((unsigned char) ((! var_1_47) && ((! var_1_36) && var_1_42)))) : (var_1_68 == ((unsigned char) var_1_47))) : ((var_1_65 > var_1_74) ? (var_1_68 == ((unsigned char) (((var_1_36 && var_1_38) || (var_1_104 && var_1_47)) || var_1_71))) : ((var_1_106 >= var_1_97) ? (var_1_68 == ((unsigned char) (! (! var_1_71)))) : (var_1_68 == ((unsigned char) (! (var_1_42 && var_1_43))))))) : (var_1_68 == ((unsigned char) var_1_47)))) && ((var_1_15 < (- var_1_22)) ? (var_1_72 == ((unsigned short int) (var_1_29 - ((((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8)))))) : (((~ var_1_69) <= (var_1_56 / var_1_11)) ? (var_1_72 == ((unsigned short int) (var_1_11 + 256))) : (var_1_72 == ((unsigned short int) (((((((((var_1_29) > (var_1_73)) ? (var_1_29) : (var_1_73))) - var_1_69)) > (var_1_12)) ? ((((((var_1_29) > (var_1_73)) ? (var_1_29) : (var_1_73))) - var_1_69)) : (var_1_12)))))))) && (((var_1_20 - 127.75) >= 16.25) ? (var_1_74 == ((signed long int) (var_1_12 + var_1_69))) : (var_1_74 == ((signed long int) (var_1_31 - var_1_97))))) && ((var_1_64 < var_1_6) ? ((! (((((var_1_69) < (var_1_83)) ? (var_1_69) : (var_1_83))) > (var_1_64 ^ var_1_8))) ? (var_1_38 ? (var_1_75 == ((signed short int) ((-50 + var_1_12) + (var_1_56 + var_1_34)))) : (var_1_75 == ((signed short int) last_1_var_1_75))) : (var_1_75 == ((signed short int) ((var_1_12 + var_1_34) - var_1_55)))) : 1)) && ((var_1_29 > var_1_106) ? ((! var_1_62) ? ((! var_1_38) ? (var_1_76 == ((signed short int) ((((var_1_6) > (((((var_1_75) > (var_1_85)) ? (var_1_75) : (var_1_85))))) ? (var_1_6) : (((((var_1_75) > (var_1_85)) ? (var_1_75) : (var_1_85)))))))) : (var_1_76 == ((signed short int) (var_1_32 + ((var_1_54 + var_1_34) - var_1_7))))) : 1) : (var_1_76 == ((signed short int) 10)))) && ((var_1_67 >= var_1_15) ? ((-128 > (((((var_1_106) > (-5)) ? (var_1_106) : (-5))) + var_1_95)) ? (var_1_77 == ((unsigned char) (((((((((2 + var_1_78)) < (var_1_6)) ? ((2 + var_1_78)) : (var_1_6)))) < (var_1_7)) ? ((((((2 + var_1_78)) < (var_1_6)) ? ((2 + var_1_78)) : (var_1_6)))) : (var_1_7))))) : ((! var_1_42) ? (var_1_77 == ((unsigned char) var_1_54)) : (var_1_77 == ((unsigned char) ((((((var_1_79 - var_1_69) - var_1_78)) > (var_1_57)) ? (((var_1_79 - var_1_69) - var_1_78)) : (var_1_57))))))) : (var_1_77 == ((unsigned char) (var_1_80 + var_1_12))))) && ((((- 32u) * var_1_33) > (- (var_1_57 + var_1_97))) ? (var_1_81 == ((signed short int) (((((256) < 0 ) ? -(256) : (256))) - var_1_55))) : 1)) && (((var_1_20 * var_1_49) <= ((((var_1_27) < (var_1_67)) ? (var_1_27) : (var_1_67)))) ? (var_1_82 == ((double) ((var_1_22 + var_1_24) - var_1_15))) : (((- var_1_69) >= var_1_103) ? (var_1_82 == ((double) ((((((((64.1) < 0 ) ? -(64.1) : (64.1)))) < (var_1_14)) ? (((((64.1) < 0 ) ? -(64.1) : (64.1)))) : (var_1_14))))) : 1))) && ((last_1_var_1_66 > var_1_20) ? (var_1_83 == ((unsigned long int) (var_1_84 - ((1000000000u - last_1_var_1_81) + ((((var_1_9) > (var_1_34)) ? (var_1_9) : (var_1_34))))))) : 1)) && ((var_1_39 || last_1_var_1_62) ? ((var_1_67 <= ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) ? (var_1_85 == ((unsigned long int) (var_1_84 - ((((last_1_var_1_83) > (var_1_34)) ? (last_1_var_1_83) : (var_1_34)))))) : (var_1_85 == ((unsigned long int) (var_1_84 - ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))))) : 1)) && ((var_1_46 && var_1_47) ? ((((((var_1_56) < (var_1_9)) ? (var_1_56) : (var_1_9))) >= (var_1_79 * var_1_26)) ? (var_1_86 == ((signed short int) var_1_87)) : (var_1_86 == ((signed short int) (var_1_80 - var_1_56)))) : (var_1_86 == ((signed short int) var_1_7)))) && (var_1_41 ? (var_1_88 == ((unsigned short int) (var_1_29 - ((var_1_89 - var_1_54) - (var_1_90 - var_1_8))))) : (((var_1_78 + var_1_103) != (var_1_26 * (var_1_86 / var_1_11))) ? (var_1_88 == ((unsigned short int) (var_1_79 + ((((var_1_34) < (((((var_1_101) < (var_1_33)) ? (var_1_101) : (var_1_33))))) ? (var_1_34) : (((((var_1_101) < (var_1_33)) ? (var_1_101) : (var_1_33))))))))) : (var_1_88 == ((unsigned short int) ((((var_1_6 + 16) < 0 ) ? -(var_1_6 + 16) : (var_1_6 + 16)))))))) && ((var_1_67 > var_1_24) ? (var_1_91 == ((double) var_1_18)) : (var_1_91 == ((double) ((((var_1_27) > (var_1_61)) ? (var_1_27) : (var_1_61))))))) && (var_1_41 ? ((var_1_45 <= var_1_67) ? (var_1_92 == ((unsigned char) ((((var_1_55) > (var_1_34)) ? (var_1_55) : (var_1_34))))) : (((var_1_79 / var_1_73) > var_1_54) ? (var_1_92 == ((unsigned char) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : (var_1_92 == ((unsigned char) ((((var_1_26) < (var_1_7)) ? (var_1_26) : (var_1_7))))))) : (var_1_92 == ((unsigned char) ((((var_1_34) < (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))))) ? (var_1_34) : (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69)))))))))) && ((! var_1_68) ? ((10u != var_1_110) ? (var_1_93 == ((signed long int) var_1_6)) : 1) : 1)) && (var_1_95 == ((unsigned long int) var_1_12))) && ((var_1_85 < var_1_80) ? (var_1_96 == ((signed long int) (var_1_29 + var_1_112))) : (var_1_43 ? (var_1_96 == ((signed long int) ((((var_1_57) > (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78))))) ? (var_1_57) : (((((var_1_78) < 0 ) ? -(var_1_78) : (var_1_78)))))))) : 1))) && ((((var_1_89 - var_1_9) - var_1_10) < var_1_101) ? (var_1_36 ? (var_1_97 == ((unsigned long int) var_1_83)) : 1) : (var_1_97 == ((unsigned long int) var_1_11)))) && (var_1_99 ? (var_1_98 == ((float) var_1_16)) : 1)) && (var_1_104 ? (var_1_99 == ((unsigned char) var_1_43)) : (var_1_99 == ((unsigned char) var_1_36)))) && (var_1_39 ? (var_1_100 == ((signed long int) 64)) : (var_1_100 == ((signed long int) var_1_29)))) && (var_1_101 == ((unsigned long int) var_1_90))) && (var_1_102 == ((signed char) var_1_33))) && (var_1_103 == ((signed long int) var_1_1))) && (var_1_47 ? (var_1_104 == ((unsigned char) var_1_42)) : (var_1_104 == ((unsigned char) var_1_38)))) && (var_1_42 ? (var_1_105 == ((signed short int) var_1_56)) : (var_1_105 == ((signed short int) var_1_69)))) && (var_1_47 ? (var_1_106 == ((unsigned long int) var_1_90)) : (var_1_106 == ((unsigned long int) var_1_11)))) && (var_1_107 == ((signed long int) var_1_108))) && (var_1_71 ? (var_1_109 == ((signed char) var_1_58)) : 1)) && (var_1_110 == ((unsigned long int) var_1_90))) && (var_1_111 == ((unsigned char) ((((((var_1_100) > (var_1_26)) ? (var_1_100) : (var_1_26))) <= var_1_108) && var_1_71)))) && ((! (var_1_55 == (var_1_85 % var_1_4))) ? ((var_1_53 >= var_1_29) ? (var_1_112 == ((signed char) -2)) : (var_1_112 == ((signed char) var_1_79))) : 1)
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
