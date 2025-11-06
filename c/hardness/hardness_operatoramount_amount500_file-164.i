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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 2;
unsigned char var_1_4 = 32;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 2;
signed long int var_1_8 = -10;
float var_1_9 = 99999999.4;
float var_1_11 = 9.5;
signed long int var_1_12 = -64;
float var_1_13 = 25.875;
float var_1_15 = 99.225;
float var_1_16 = 16.94;
float var_1_17 = 0.5;
float var_1_18 = 499.2;
float var_1_19 = 10000000000000.3;
float var_1_20 = 5.25;
float var_1_21 = 256.6;
double var_1_22 = 3.8;
unsigned char var_1_24 = 10;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
float var_1_30 = 49.6;
float var_1_31 = 0.0;
unsigned long int var_1_32 = 10;
signed long int var_1_33 = -128;
unsigned long int var_1_34 = 2346227643;
double var_1_35 = 9.6;
double var_1_36 = 0.0;
unsigned short int var_1_37 = 10;
unsigned short int var_1_38 = 46784;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
double var_1_42 = 24.25;
double var_1_43 = 1.45;
double var_1_44 = 0.375;
double var_1_45 = 8.8;
double var_1_46 = 16.75;
float var_1_47 = 255.225;
float var_1_48 = 25.3;
double var_1_49 = 16.25;
double var_1_50 = 2.5;
unsigned char var_1_51 = 200;
double var_1_52 = 2.5;
signed char var_1_53 = 16;
signed char var_1_54 = 32;
signed char var_1_55 = 50;
signed char var_1_56 = 2;
float var_1_57 = 3.5;
float var_1_58 = 0.0;
float var_1_59 = 0.0;
float var_1_60 = 0.0;
float var_1_61 = 16.5;
signed short int var_1_62 = -5;
float var_1_63 = 16.125;
float var_1_65 = 1.2;
float var_1_66 = 63.75;
float var_1_67 = 31.25;
unsigned short int var_1_68 = 50891;
unsigned long int var_1_69 = 4;
unsigned long int var_1_70 = 1957787818;
unsigned long int var_1_71 = 128;
unsigned long int var_1_72 = 1313686978;
unsigned short int var_1_73 = 32;
unsigned short int var_1_74 = 256;
unsigned short int var_1_75 = 10;
unsigned short int var_1_76 = 17890;
unsigned short int var_1_77 = 28748;
unsigned short int var_1_78 = 10000;
unsigned char var_1_79 = 1;
double var_1_80 = 0.0;
double var_1_81 = 5.75;
unsigned char var_1_82 = 0;
signed long int var_1_84 = -10000;
double var_1_86 = 15.5;
float var_1_88 = 63.3;
float var_1_89 = 10.2;
float var_1_90 = 127.6;
double var_1_91 = 2.5;
signed char var_1_92 = 32;
double var_1_93 = 10.5;
unsigned char var_1_94 = 0;
unsigned short int var_1_95 = 4;
unsigned char var_1_96 = 1;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 0;
signed char var_1_99 = -2;
signed char var_1_100 = -1;
signed char var_1_101 = 5;
signed long int last_1_var_1_8 = -10;
signed long int last_1_var_1_12 = -64;
float last_1_var_1_13 = 25.875;
double last_1_var_1_22 = 3.8;
unsigned char last_1_var_1_24 = 10;
float last_1_var_1_30 = 49.6;
unsigned short int last_1_var_1_37 = 10;
double last_1_var_1_42 = 24.25;
double last_1_var_1_46 = 16.75;
double last_1_var_1_49 = 16.25;
float last_1_var_1_63 = 16.125;
unsigned long int last_1_var_1_69 = 4;
unsigned long int last_1_var_1_71 = 128;
unsigned char last_1_var_1_79 = 1;
unsigned char last_1_var_1_82 = 0;
signed long int last_1_var_1_84 = -10000;
double last_1_var_1_86 = 15.5;
double last_1_var_1_91 = 2.5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_7 = var_1_4 - var_1_6;
 if (stepLocal_7 >= (last_1_var_1_84 + (var_1_7 - var_1_5))) {
  var_1_35 = ((var_1_20 + var_1_19) - var_1_31);
 } else {
  if (var_1_28) {
   var_1_35 = var_1_16;
  } else {
   if ((var_1_16 * var_1_18) > last_1_var_1_63) {
    var_1_35 = ((((var_1_15) < ((var_1_17 + var_1_18))) ? (var_1_15) : ((var_1_17 + var_1_18))));
   } else {
    var_1_35 = (((((((((var_1_31) > (var_1_15)) ? (var_1_31) : (var_1_15))) - 63.5)) < (((var_1_36 - var_1_20) - (6.502066781597943E18 - var_1_19)))) ? ((((((var_1_31) > (var_1_15)) ? (var_1_31) : (var_1_15))) - 63.5)) : (((var_1_36 - var_1_20) - (6.502066781597943E18 - var_1_19)))));
   }
  }
 }
 if (((- var_1_59) * (var_1_35 + 100.75f)) != var_1_58) {
  var_1_63 = (((((var_1_65) < (var_1_18)) ? (var_1_65) : (var_1_18))) + (((((var_1_61) < (32.17f)) ? (var_1_61) : (32.17f))) + var_1_66));
 } else {
  var_1_63 = ((var_1_20 - var_1_19) + var_1_21);
 }
 signed long int stepLocal_12 = last_1_var_1_24 % var_1_33;
 unsigned long int stepLocal_11 = last_1_var_1_69;
 signed long int stepLocal_10 = (((last_1_var_1_8) < (last_1_var_1_84)) ? (last_1_var_1_8) : (last_1_var_1_84));
 signed long int stepLocal_9 = last_1_var_1_24;
 if (var_1_27) {
  if (var_1_9 != var_1_17) {
   var_1_46 = (var_1_45 - (9.9999999999995E12 + var_1_43));
  } else {
   var_1_46 = ((((var_1_20) < ((var_1_15 - ((((var_1_36) < (var_1_19)) ? (var_1_36) : (var_1_19)))))) ? (var_1_20) : ((var_1_15 - ((((var_1_36) < (var_1_19)) ? (var_1_36) : (var_1_19)))))));
  }
 } else {
  if (stepLocal_10 > ((((last_1_var_1_12) > (last_1_var_1_69)) ? (last_1_var_1_12) : (last_1_var_1_69)))) {
   if (last_1_var_1_79) {
    if (last_1_var_1_22 >= (var_1_19 * last_1_var_1_22)) {
     if ((last_1_var_1_69 / var_1_33) > stepLocal_9) {
      var_1_46 = (var_1_43 - var_1_20);
     }
    } else {
     var_1_46 = (var_1_45 + var_1_17);
    }
   } else {
    var_1_46 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
   }
  } else {
   if (((-32 * var_1_5) + last_1_var_1_69) > stepLocal_12) {
    if (((var_1_6 | last_1_var_1_84) * last_1_var_1_24) > stepLocal_11) {
     var_1_46 = (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) + var_1_21);
    } else {
     var_1_46 = ((((var_1_43) < (var_1_36)) ? (var_1_43) : (var_1_36)));
    }
   }
  }
 }
 unsigned char stepLocal_8 = last_1_var_1_79;
 if ((- last_1_var_1_46) <= var_1_31) {
  var_1_39 = (var_1_27 || (! var_1_29));
 } else {
  if ((var_1_27 || last_1_var_1_79) || stepLocal_8) {
   var_1_39 = ((var_1_27 && var_1_40) && var_1_41);
  } else {
   var_1_39 = (var_1_29 || var_1_28);
  }
 }
 if (var_1_39) {
  var_1_95 = var_1_78;
 }
 signed long int stepLocal_0 = (var_1_7 & -32) | ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4)));
 if (last_1_var_1_8 > stepLocal_0) {
  var_1_8 = (var_1_7 + var_1_6);
 } else {
  if ((var_1_9 - ((((last_1_var_1_30) < 0 ) ? -(last_1_var_1_30) : (last_1_var_1_30)))) >= (0.75f - var_1_11)) {
   var_1_8 = ((10 - var_1_4) + last_1_var_1_37);
  }
 }
 signed long int stepLocal_18 = last_1_var_1_12;
 if ((var_1_66 + var_1_65) != ((((last_1_var_1_91) < ((var_1_20 - var_1_36))) ? (last_1_var_1_91) : ((var_1_20 - var_1_36))))) {
  if (last_1_var_1_22 < (((((- last_1_var_1_49)) > (last_1_var_1_42)) ? ((- last_1_var_1_49)) : (last_1_var_1_42)))) {
   var_1_71 = ((((200u) < 0 ) ? -(200u) : (200u)));
  }
 } else {
  if (last_1_var_1_71 < stepLocal_18) {
   var_1_71 = (((((var_1_34 - ((((var_1_5) > (var_1_51)) ? (var_1_5) : (var_1_51))))) > (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? ((var_1_34 - ((((var_1_5) > (var_1_51)) ? (var_1_5) : (var_1_51))))) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))));
  } else {
   var_1_71 = ((((((var_1_70 + 1789358012u)) < ((1787145521u + var_1_72))) ? ((var_1_70 + 1789358012u)) : ((1787145521u + var_1_72)))) - var_1_6);
  }
 }
 var_1_12 = var_1_7;
 if (var_1_28) {
  var_1_90 = var_1_45;
 } else {
  var_1_90 = 32.5f;
 }
 if (var_1_41) {
  var_1_91 = var_1_81;
 } else {
  var_1_91 = var_1_18;
 }
 var_1_92 = -1;
 var_1_94 = var_1_41;
 if (var_1_27) {
  var_1_96 = var_1_97;
 } else {
  var_1_96 = var_1_29;
 }
 if (var_1_28) {
  var_1_98 = 5;
 } else {
  var_1_98 = 10;
 }
 if (var_1_27) {
  var_1_99 = var_1_54;
 } else {
  var_1_99 = var_1_51;
 }
 unsigned long int stepLocal_23 = var_1_70;
 if (var_1_71 <= stepLocal_23) {
  var_1_84 = (((((var_1_55 + (var_1_51 - 5))) > (var_1_95)) ? ((var_1_55 + (var_1_51 - 5))) : (var_1_95)));
 }
 signed long int stepLocal_17 = 1;
 unsigned long int stepLocal_16 = ((((var_1_71) > (var_1_8)) ? (var_1_71) : (var_1_8))) + var_1_68;
 if (stepLocal_16 <= var_1_38) {
  if (((((var_1_4) > (var_1_51)) ? (var_1_4) : (var_1_51))) > stepLocal_17) {
   var_1_69 = ((((((var_1_70 - var_1_5)) < (((((var_1_54) < (128u)) ? (var_1_54) : (128u))))) ? ((var_1_70 - var_1_5)) : (((((var_1_54) < (128u)) ? (var_1_54) : (128u)))))) + var_1_68);
  } else {
   var_1_69 = ((((var_1_4) < ((var_1_71 + var_1_5))) ? (var_1_4) : ((var_1_71 + var_1_5))));
  }
 } else {
  var_1_69 = var_1_38;
 }
 if ((- var_1_69) < var_1_71) {
  var_1_1 = (((((var_1_4 + (var_1_5 - var_1_6))) < (var_1_7)) ? ((var_1_4 + (var_1_5 - var_1_6))) : (var_1_7)));
 } else {
  var_1_1 = ((((((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) > (var_1_6)) ? (((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) : (var_1_6)));
 }
 unsigned long int stepLocal_30 = var_1_69;
 if ((var_1_60 - (var_1_80 - var_1_81)) >= (- 7.5)) {
  if ((var_1_74 >> var_1_101) != stepLocal_30) {
   var_1_100 = ((((-64) < ((8 - var_1_56))) ? (-64) : ((8 - var_1_56))));
  } else {
   var_1_100 = var_1_54;
  }
 } else {
  var_1_100 = var_1_56;
 }
 signed long int stepLocal_6 = var_1_4 * var_1_5;
 if (stepLocal_6 == ((var_1_84 / var_1_33) + (var_1_8 ^ var_1_1))) {
  var_1_32 = (var_1_8 + var_1_1);
 } else {
  var_1_32 = (((((((((var_1_34 - var_1_5)) < (var_1_8)) ? ((var_1_34 - var_1_5)) : (var_1_8)))) < (0u)) ? ((((((var_1_34 - var_1_5)) < (var_1_8)) ? ((var_1_34 - var_1_5)) : (var_1_8)))) : (0u)));
 }
 unsigned char stepLocal_15 = var_1_4;
 signed long int stepLocal_14 = ~ (var_1_4 / var_1_33);
 if (stepLocal_15 >= ((var_1_51 - var_1_6) - var_1_5)) {
  if (var_1_96) {
   var_1_50 = ((((var_1_48) > (((((var_1_20) < (499.5)) ? (var_1_20) : (499.5))))) ? (var_1_48) : (((((var_1_20) < (499.5)) ? (var_1_20) : (499.5))))));
  } else {
   var_1_50 = ((((var_1_18) > (var_1_52)) ? (var_1_18) : (var_1_52)));
  }
 } else {
  if ((var_1_6 * var_1_71) != stepLocal_14) {
   var_1_50 = (var_1_43 - var_1_36);
  }
 }
 if (var_1_94) {
  if (last_1_var_1_13 == (var_1_11 + 16.75f)) {
   var_1_13 = (var_1_15 - var_1_16);
  } else {
   var_1_13 = ((((((((2.4f) > (var_1_15)) ? (2.4f) : (var_1_15)))) < (((((1.7f) < (var_1_16)) ? (1.7f) : (var_1_16))))) ? (((((2.4f) > (var_1_15)) ? (2.4f) : (var_1_15)))) : (((((1.7f) < (var_1_16)) ? (1.7f) : (var_1_16))))));
  }
 } else {
  var_1_13 = (((((var_1_17 + var_1_18)) > (((var_1_19 - var_1_20) + var_1_21))) ? ((var_1_17 + var_1_18)) : (((var_1_19 - var_1_20) + var_1_21))));
 }
 if (var_1_91 > (var_1_52 / 0.2)) {
  var_1_73 = ((((0) > (((((var_1_54) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_54) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))))) ? (0) : (((((var_1_54) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_54) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))))));
 } else {
  var_1_73 = ((((var_1_7) > (var_1_74)) ? (var_1_7) : (var_1_74)));
 }
 if (var_1_94) {
  var_1_88 = var_1_15;
 }
 if (var_1_96) {
  var_1_89 = var_1_66;
 } else {
  var_1_89 = var_1_60;
 }
 unsigned short int stepLocal_2 = var_1_73;
 unsigned char stepLocal_1 = var_1_46 < var_1_11;
 if (last_1_var_1_24 < stepLocal_2) {
  if (stepLocal_1 || (! var_1_39)) {
   var_1_24 = ((((25) < ((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6))) ? (25) : ((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6))));
  }
 } else {
  var_1_24 = (var_1_4 + var_1_5);
 }
 if (var_1_5 != ((- var_1_95) & var_1_100)) {
  if ((- var_1_35) <= (- var_1_90)) {
   var_1_75 = ((var_1_76 + var_1_77) - var_1_1);
  }
 } else {
  var_1_75 = (((var_1_78 - var_1_54) + var_1_6) + var_1_7);
 }
 if (var_1_7 == (- var_1_8)) {
  var_1_37 = (((((var_1_75 + 8)) > ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - last_1_var_1_37))) ? ((var_1_75 + 8)) : ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - last_1_var_1_37))));
 } else {
  var_1_37 = (var_1_6 + var_1_75);
 }
 unsigned short int stepLocal_5 = var_1_75;
 unsigned char stepLocal_4 = -4 == 8;
 unsigned char stepLocal_3 = var_1_28;
 if (stepLocal_5 == (var_1_84 / (var_1_5 + 5))) {
  var_1_30 = var_1_16;
 } else {
  if ((var_1_5 > var_1_7) && stepLocal_4) {
   if (stepLocal_3 || var_1_27) {
    var_1_30 = 0.4f;
   } else {
    var_1_30 = ((var_1_31 - 256.25f) - 1.2f);
   }
  }
 }
 if (var_1_41) {
  if (var_1_74 > var_1_98) {
   var_1_79 = (((1.000000000000025E13f * var_1_50) > (var_1_21 * var_1_9)) || var_1_40);
  } else {
   if (((var_1_66 * var_1_36) * var_1_43) != ((var_1_80 - var_1_81) - ((((var_1_61) < (var_1_45)) ? (var_1_61) : (var_1_45))))) {
    var_1_79 = var_1_29;
   }
  }
 }
 if (var_1_34 > var_1_33) {
  if (var_1_37 >= var_1_95) {
   var_1_42 = ((((((var_1_19 - var_1_20)) < (var_1_21)) ? ((var_1_19 - var_1_20)) : (var_1_21))) + (var_1_43 - ((((var_1_44) < (var_1_45)) ? (var_1_44) : (var_1_45)))));
  }
 }
 unsigned long int stepLocal_22 = var_1_32 * var_1_51;
 unsigned long int stepLocal_21 = var_1_34 - (var_1_38 + var_1_73);
 signed long int stepLocal_20 = var_1_77 + (32 << var_1_76);
 unsigned char stepLocal_19 = var_1_27;
 if ((((((var_1_5) < (var_1_73)) ? (var_1_5) : (var_1_73))) & var_1_51) > stepLocal_20) {
  if (((var_1_78 + var_1_69) * var_1_77) < stepLocal_21) {
   if ((((((var_1_19) > (var_1_59)) ? (var_1_19) : (var_1_59))) / var_1_58) < var_1_43) {
    if (var_1_41 && stepLocal_19) {
     if (stepLocal_22 != var_1_12) {
      var_1_82 = (((var_1_95 % var_1_34) < var_1_7) && var_1_29);
     } else {
      var_1_82 = (var_1_94 && (var_1_79 && (var_1_29 || var_1_28)));
     }
    } else {
     var_1_82 = (! ((var_1_40 && var_1_41) && var_1_27));
    }
   }
  } else {
   var_1_82 = (last_1_var_1_82 || (! var_1_28));
  }
 } else {
  var_1_82 = var_1_29;
 }
 if ((var_1_42 * var_1_20) <= (((((var_1_46 + var_1_35)) < (99.25)) ? ((var_1_46 + var_1_35)) : (99.25)))) {
  var_1_53 = (var_1_6 + (var_1_54 - (var_1_55 - var_1_56)));
 } else {
  var_1_53 = ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)));
 }
 if (((var_1_68 - var_1_4) - (var_1_32 + var_1_7)) >= 5) {
  if (var_1_82 || (var_1_43 > 1.5)) {
   var_1_67 = (var_1_45 - (var_1_31 - var_1_61));
  } else {
   var_1_67 = (var_1_36 - var_1_44);
  }
 } else {
  if (var_1_34 != (var_1_55 * var_1_37)) {
   if (var_1_82) {
    var_1_67 = (var_1_19 - var_1_20);
   } else {
    if (var_1_32 <= ((var_1_51 - var_1_54) - var_1_55)) {
     if (var_1_11 <= (- (var_1_91 + var_1_50))) {
      if (((((var_1_54) < (var_1_4)) ? (var_1_54) : (var_1_4))) >= var_1_84) {
       var_1_67 = (var_1_19 - (((((var_1_20 + var_1_59)) < ((var_1_44 + var_1_60))) ? ((var_1_20 + var_1_59)) : ((var_1_44 + var_1_60)))));
      } else {
       var_1_67 = var_1_31;
      }
     } else {
      var_1_67 = ((var_1_59 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) - var_1_19);
     }
    }
   }
  }
 }
 if (var_1_39 && var_1_79) {
  var_1_22 = var_1_18;
 }
 if (! ((var_1_71 / var_1_5) != var_1_32)) {
  var_1_26 = (! ((! var_1_94) || (var_1_82 || var_1_27)));
 } else {
  var_1_26 = (var_1_28 || var_1_29);
 }
 if (var_1_26) {
  var_1_93 = var_1_21;
 }
 if (! var_1_26) {
  var_1_57 = (((((var_1_20 - 0.8f)) < (((var_1_36 - var_1_43) - (var_1_45 + var_1_44)))) ? ((var_1_20 - 0.8f)) : (((var_1_36 - var_1_43) - (var_1_45 + var_1_44)))));
 } else {
  var_1_57 = ((var_1_31 - ((((var_1_44) < (var_1_19)) ? (var_1_44) : (var_1_19)))) - ((var_1_58 + var_1_59) - (var_1_60 - var_1_61)));
 }
 if (var_1_22 >= (var_1_93 * var_1_44)) {
  var_1_62 = ((((var_1_55) > (var_1_100)) ? (var_1_55) : (var_1_100)));
 } else {
  var_1_62 = (var_1_55 + var_1_6);
 }
 unsigned long int stepLocal_13 = var_1_62 * var_1_71;
 if (stepLocal_13 >= ((var_1_38 & var_1_6) | var_1_7)) {
  if (var_1_96) {
   var_1_49 = (15.8 - var_1_16);
  }
 }
 signed long int stepLocal_29 = var_1_76 + var_1_68;
 unsigned long int stepLocal_28 = var_1_12 / var_1_70;
 unsigned char stepLocal_27 = var_1_40;
 unsigned char stepLocal_26 = var_1_66 < var_1_49;
 signed char stepLocal_25 = var_1_56;
 signed long int stepLocal_24 = var_1_12 + var_1_55;
 if (stepLocal_27 || (last_1_var_1_86 <= var_1_17)) {
  if (stepLocal_26 && var_1_94) {
   if (stepLocal_28 >= ((- var_1_34) / var_1_38)) {
    var_1_86 = (((((var_1_44) > (24.25)) ? (var_1_44) : (24.25))) + var_1_66);
   }
  }
 } else {
  if (stepLocal_24 >= var_1_38) {
   if (var_1_32 < stepLocal_29) {
    if (stepLocal_25 > var_1_74) {
     var_1_86 = (var_1_61 + var_1_21);
    }
   } else {
    var_1_86 = var_1_15;
   }
  } else {
   var_1_86 = var_1_66;
  }
 }
 if (var_1_28) {
  if (var_1_93 >= (var_1_16 / var_1_31)) {
   if (! (var_1_86 >= var_1_19)) {
    var_1_47 = var_1_19;
   } else {
    var_1_47 = var_1_48;
   }
  }
 } else {
  var_1_47 = var_1_31;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 4611686.018427383000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 assume_abort_if_not(var_1_33 != 0);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 4611686.018427383000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 32767);
 assume_abort_if_not(var_1_38 <= 65534);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 191);
 assume_abort_if_not(var_1_51 <= 255);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 63);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= 31);
 assume_abort_if_not(var_1_55 <= 63);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 31);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 2305843.009213691400e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 2305843.009213691400e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= 2305843.009213691400e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= -461168.6018427383000e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427383000e+12F && var_1_65 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_66 >= -230584.3009213691400e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691400e+12F && var_1_66 >= 1.0e-20F ));
 var_1_68 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_68 >= 49151);
 assume_abort_if_not(var_1_68 <= 65535);
 var_1_70 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_70 >= 1073741823);
 assume_abort_if_not(var_1_70 <= 2147483647);
 var_1_72 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_72 >= 1073741824);
 assume_abort_if_not(var_1_72 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 65534);
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 16383);
 assume_abort_if_not(var_1_76 <= 32767);
 var_1_77 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_77 >= 16384);
 assume_abort_if_not(var_1_77 <= 32767);
 var_1_78 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_78 >= 8192);
 assume_abort_if_not(var_1_78 <= 16384);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 4611686.018427388000e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
 var_1_81 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_81 >= 0.0F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427388000e+12F && var_1_81 >= 1.0e-20F ));
 var_1_97 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_97 >= 1);
 assume_abort_if_not(var_1_97 <= 1);
 var_1_101 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_101 >= 1);
 assume_abort_if_not(var_1_101 <= 15);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_91 = var_1_91;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((- var_1_69) < var_1_71) ? (var_1_1 == ((unsigned char) (((((var_1_4 + (var_1_5 - var_1_6))) < (var_1_7)) ? ((var_1_4 + (var_1_5 - var_1_6))) : (var_1_7))))) : (var_1_1 == ((unsigned char) ((((((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) > (var_1_6)) ? (((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) : (var_1_6)))))) && ((last_1_var_1_8 > ((var_1_7 & -32) | ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4))))) ? (var_1_8 == ((signed long int) (var_1_7 + var_1_6))) : (((var_1_9 - ((((last_1_var_1_30) < 0 ) ? -(last_1_var_1_30) : (last_1_var_1_30)))) >= (0.75f - var_1_11)) ? (var_1_8 == ((signed long int) ((10 - var_1_4) + last_1_var_1_37))) : 1))) && (var_1_12 == ((signed long int) var_1_7))) && (var_1_94 ? ((last_1_var_1_13 == (var_1_11 + 16.75f)) ? (var_1_13 == ((float) (var_1_15 - var_1_16))) : (var_1_13 == ((float) ((((((((2.4f) > (var_1_15)) ? (2.4f) : (var_1_15)))) < (((((1.7f) < (var_1_16)) ? (1.7f) : (var_1_16))))) ? (((((2.4f) > (var_1_15)) ? (2.4f) : (var_1_15)))) : (((((1.7f) < (var_1_16)) ? (1.7f) : (var_1_16))))))))) : (var_1_13 == ((float) (((((var_1_17 + var_1_18)) > (((var_1_19 - var_1_20) + var_1_21))) ? ((var_1_17 + var_1_18)) : (((var_1_19 - var_1_20) + var_1_21)))))))) && ((var_1_39 && var_1_79) ? (var_1_22 == ((double) var_1_18)) : 1)) && ((last_1_var_1_24 < var_1_73) ? (((var_1_46 < var_1_11) || (! var_1_39)) ? (var_1_24 == ((unsigned char) ((((25) < ((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6))) ? (25) : ((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6)))))) : 1) : (var_1_24 == ((unsigned char) (var_1_4 + var_1_5))))) && ((! ((var_1_71 / var_1_5) != var_1_32)) ? (var_1_26 == ((unsigned char) (! ((! var_1_94) || (var_1_82 || var_1_27))))) : (var_1_26 == ((unsigned char) (var_1_28 || var_1_29))))) && ((var_1_75 == (var_1_84 / (var_1_5 + 5))) ? (var_1_30 == ((float) var_1_16)) : (((var_1_5 > var_1_7) && (-4 == 8)) ? ((var_1_28 || var_1_27) ? (var_1_30 == ((float) 0.4f)) : (var_1_30 == ((float) ((var_1_31 - 256.25f) - 1.2f)))) : 1))) && (((var_1_4 * var_1_5) == ((var_1_84 / var_1_33) + (var_1_8 ^ var_1_1))) ? (var_1_32 == ((unsigned long int) (var_1_8 + var_1_1))) : (var_1_32 == ((unsigned long int) (((((((((var_1_34 - var_1_5)) < (var_1_8)) ? ((var_1_34 - var_1_5)) : (var_1_8)))) < (0u)) ? ((((((var_1_34 - var_1_5)) < (var_1_8)) ? ((var_1_34 - var_1_5)) : (var_1_8)))) : (0u))))))) && (((var_1_4 - var_1_6) >= (last_1_var_1_84 + (var_1_7 - var_1_5))) ? (var_1_35 == ((double) ((var_1_20 + var_1_19) - var_1_31))) : (var_1_28 ? (var_1_35 == ((double) var_1_16)) : (((var_1_16 * var_1_18) > last_1_var_1_63) ? (var_1_35 == ((double) ((((var_1_15) < ((var_1_17 + var_1_18))) ? (var_1_15) : ((var_1_17 + var_1_18)))))) : (var_1_35 == ((double) (((((((((var_1_31) > (var_1_15)) ? (var_1_31) : (var_1_15))) - 63.5)) < (((var_1_36 - var_1_20) - (6.502066781597943E18 - var_1_19)))) ? ((((((var_1_31) > (var_1_15)) ? (var_1_31) : (var_1_15))) - 63.5)) : (((var_1_36 - var_1_20) - (6.502066781597943E18 - var_1_19))))))))))) && ((var_1_7 == (- var_1_8)) ? (var_1_37 == ((unsigned short int) (((((var_1_75 + 8)) > ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - last_1_var_1_37))) ? ((var_1_75 + 8)) : ((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) - last_1_var_1_37)))))) : (var_1_37 == ((unsigned short int) (var_1_6 + var_1_75))))) && (((- last_1_var_1_46) <= var_1_31) ? (var_1_39 == ((unsigned char) (var_1_27 || (! var_1_29)))) : (((var_1_27 || last_1_var_1_79) || last_1_var_1_79) ? (var_1_39 == ((unsigned char) ((var_1_27 && var_1_40) && var_1_41))) : (var_1_39 == ((unsigned char) (var_1_29 || var_1_28)))))) && ((var_1_34 > var_1_33) ? ((var_1_37 >= var_1_95) ? (var_1_42 == ((double) ((((((var_1_19 - var_1_20)) < (var_1_21)) ? ((var_1_19 - var_1_20)) : (var_1_21))) + (var_1_43 - ((((var_1_44) < (var_1_45)) ? (var_1_44) : (var_1_45))))))) : 1) : 1)) && (var_1_27 ? ((var_1_9 != var_1_17) ? (var_1_46 == ((double) (var_1_45 - (9.9999999999995E12 + var_1_43)))) : (var_1_46 == ((double) ((((var_1_20) < ((var_1_15 - ((((var_1_36) < (var_1_19)) ? (var_1_36) : (var_1_19)))))) ? (var_1_20) : ((var_1_15 - ((((var_1_36) < (var_1_19)) ? (var_1_36) : (var_1_19)))))))))) : ((((((last_1_var_1_8) < (last_1_var_1_84)) ? (last_1_var_1_8) : (last_1_var_1_84))) > ((((last_1_var_1_12) > (last_1_var_1_69)) ? (last_1_var_1_12) : (last_1_var_1_69)))) ? (last_1_var_1_79 ? ((last_1_var_1_22 >= (var_1_19 * last_1_var_1_22)) ? (((last_1_var_1_69 / var_1_33) > last_1_var_1_24) ? (var_1_46 == ((double) (var_1_43 - var_1_20))) : 1) : (var_1_46 == ((double) (var_1_45 + var_1_17)))) : (var_1_46 == ((double) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))) : ((((-32 * var_1_5) + last_1_var_1_69) > (last_1_var_1_24 % var_1_33)) ? ((((var_1_6 | last_1_var_1_84) * last_1_var_1_24) > last_1_var_1_69) ? (var_1_46 == ((double) (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) + var_1_21))) : (var_1_46 == ((double) ((((var_1_43) < (var_1_36)) ? (var_1_43) : (var_1_36)))))) : 1)))) && (var_1_28 ? ((var_1_93 >= (var_1_16 / var_1_31)) ? ((! (var_1_86 >= var_1_19)) ? (var_1_47 == ((float) var_1_19)) : (var_1_47 == ((float) var_1_48))) : 1) : (var_1_47 == ((float) var_1_31)))) && (((var_1_62 * var_1_71) >= ((var_1_38 & var_1_6) | var_1_7)) ? (var_1_96 ? (var_1_49 == ((double) (15.8 - var_1_16))) : 1) : 1)) && ((var_1_4 >= ((var_1_51 - var_1_6) - var_1_5)) ? (var_1_96 ? (var_1_50 == ((double) ((((var_1_48) > (((((var_1_20) < (499.5)) ? (var_1_20) : (499.5))))) ? (var_1_48) : (((((var_1_20) < (499.5)) ? (var_1_20) : (499.5)))))))) : (var_1_50 == ((double) ((((var_1_18) > (var_1_52)) ? (var_1_18) : (var_1_52)))))) : (((var_1_6 * var_1_71) != (~ (var_1_4 / var_1_33))) ? (var_1_50 == ((double) (var_1_43 - var_1_36))) : 1))) && (((var_1_42 * var_1_20) <= (((((var_1_46 + var_1_35)) < (99.25)) ? ((var_1_46 + var_1_35)) : (99.25)))) ? (var_1_53 == ((signed char) (var_1_6 + (var_1_54 - (var_1_55 - var_1_56))))) : (var_1_53 == ((signed char) ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))))) && ((! var_1_26) ? (var_1_57 == ((float) (((((var_1_20 - 0.8f)) < (((var_1_36 - var_1_43) - (var_1_45 + var_1_44)))) ? ((var_1_20 - 0.8f)) : (((var_1_36 - var_1_43) - (var_1_45 + var_1_44))))))) : (var_1_57 == ((float) ((var_1_31 - ((((var_1_44) < (var_1_19)) ? (var_1_44) : (var_1_19)))) - ((var_1_58 + var_1_59) - (var_1_60 - var_1_61))))))) && ((var_1_22 >= (var_1_93 * var_1_44)) ? (var_1_62 == ((signed short int) ((((var_1_55) > (var_1_100)) ? (var_1_55) : (var_1_100))))) : (var_1_62 == ((signed short int) (var_1_55 + var_1_6))))) && ((((- var_1_59) * (var_1_35 + 100.75f)) != var_1_58) ? (var_1_63 == ((float) (((((var_1_65) < (var_1_18)) ? (var_1_65) : (var_1_18))) + (((((var_1_61) < (32.17f)) ? (var_1_61) : (32.17f))) + var_1_66)))) : (var_1_63 == ((float) ((var_1_20 - var_1_19) + var_1_21))))) && ((((var_1_68 - var_1_4) - (var_1_32 + var_1_7)) >= 5) ? ((var_1_82 || (var_1_43 > 1.5)) ? (var_1_67 == ((float) (var_1_45 - (var_1_31 - var_1_61)))) : (var_1_67 == ((float) (var_1_36 - var_1_44)))) : ((var_1_34 != (var_1_55 * var_1_37)) ? (var_1_82 ? (var_1_67 == ((float) (var_1_19 - var_1_20))) : ((var_1_32 <= ((var_1_51 - var_1_54) - var_1_55)) ? ((var_1_11 <= (- (var_1_91 + var_1_50))) ? ((((((var_1_54) < (var_1_4)) ? (var_1_54) : (var_1_4))) >= var_1_84) ? (var_1_67 == ((float) (var_1_19 - (((((var_1_20 + var_1_59)) < ((var_1_44 + var_1_60))) ? ((var_1_20 + var_1_59)) : ((var_1_44 + var_1_60))))))) : (var_1_67 == ((float) var_1_31))) : (var_1_67 == ((float) ((var_1_59 + ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) - var_1_19)))) : 1)) : 1))) && (((((((var_1_71) > (var_1_8)) ? (var_1_71) : (var_1_8))) + var_1_68) <= var_1_38) ? ((((((var_1_4) > (var_1_51)) ? (var_1_4) : (var_1_51))) > 1) ? (var_1_69 == ((unsigned long int) ((((((var_1_70 - var_1_5)) < (((((var_1_54) < (128u)) ? (var_1_54) : (128u))))) ? ((var_1_70 - var_1_5)) : (((((var_1_54) < (128u)) ? (var_1_54) : (128u)))))) + var_1_68))) : (var_1_69 == ((unsigned long int) ((((var_1_4) < ((var_1_71 + var_1_5))) ? (var_1_4) : ((var_1_71 + var_1_5))))))) : (var_1_69 == ((unsigned long int) var_1_38)))) && (((var_1_66 + var_1_65) != ((((last_1_var_1_91) < ((var_1_20 - var_1_36))) ? (last_1_var_1_91) : ((var_1_20 - var_1_36))))) ? ((last_1_var_1_22 < (((((- last_1_var_1_49)) > (last_1_var_1_42)) ? ((- last_1_var_1_49)) : (last_1_var_1_42)))) ? (var_1_71 == ((unsigned long int) ((((200u) < 0 ) ? -(200u) : (200u))))) : 1) : ((last_1_var_1_71 < last_1_var_1_12) ? (var_1_71 == ((unsigned long int) (((((var_1_34 - ((((var_1_5) > (var_1_51)) ? (var_1_5) : (var_1_51))))) > (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? ((var_1_34 - ((((var_1_5) > (var_1_51)) ? (var_1_5) : (var_1_51))))) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))))) : (var_1_71 == ((unsigned long int) ((((((var_1_70 + 1789358012u)) < ((1787145521u + var_1_72))) ? ((var_1_70 + 1789358012u)) : ((1787145521u + var_1_72)))) - var_1_6)))))) && ((var_1_91 > (var_1_52 / 0.2)) ? (var_1_73 == ((unsigned short int) ((((0) > (((((var_1_54) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_54) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))))) ? (0) : (((((var_1_54) > (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))) ? (var_1_54) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))))))) : (var_1_73 == ((unsigned short int) ((((var_1_7) > (var_1_74)) ? (var_1_7) : (var_1_74))))))) && ((var_1_5 != ((- var_1_95) & var_1_100)) ? (((- var_1_35) <= (- var_1_90)) ? (var_1_75 == ((unsigned short int) ((var_1_76 + var_1_77) - var_1_1))) : 1) : (var_1_75 == ((unsigned short int) (((var_1_78 - var_1_54) + var_1_6) + var_1_7))))) && (var_1_41 ? ((var_1_74 > var_1_98) ? (var_1_79 == ((unsigned char) (((1.000000000000025E13f * var_1_50) > (var_1_21 * var_1_9)) || var_1_40))) : ((((var_1_66 * var_1_36) * var_1_43) != ((var_1_80 - var_1_81) - ((((var_1_61) < (var_1_45)) ? (var_1_61) : (var_1_45))))) ? (var_1_79 == ((unsigned char) var_1_29)) : 1)) : 1)) && (((((((var_1_5) < (var_1_73)) ? (var_1_5) : (var_1_73))) & var_1_51) > (var_1_77 + (32 << var_1_76))) ? ((((var_1_78 + var_1_69) * var_1_77) < (var_1_34 - (var_1_38 + var_1_73))) ? (((((((var_1_19) > (var_1_59)) ? (var_1_19) : (var_1_59))) / var_1_58) < var_1_43) ? ((var_1_41 && var_1_27) ? (((var_1_32 * var_1_51) != var_1_12) ? (var_1_82 == ((unsigned char) (((var_1_95 % var_1_34) < var_1_7) && var_1_29))) : (var_1_82 == ((unsigned char) (var_1_94 && (var_1_79 && (var_1_29 || var_1_28)))))) : (var_1_82 == ((unsigned char) (! ((var_1_40 && var_1_41) && var_1_27))))) : 1) : (var_1_82 == ((unsigned char) (last_1_var_1_82 || (! var_1_28))))) : (var_1_82 == ((unsigned char) var_1_29)))) && ((var_1_71 <= var_1_70) ? (var_1_84 == ((signed long int) (((((var_1_55 + (var_1_51 - 5))) > (var_1_95)) ? ((var_1_55 + (var_1_51 - 5))) : (var_1_95))))) : 1)) && ((var_1_40 || (last_1_var_1_86 <= var_1_17)) ? (((var_1_66 < var_1_49) && var_1_94) ? (((var_1_12 / var_1_70) >= ((- var_1_34) / var_1_38)) ? (var_1_86 == ((double) (((((var_1_44) > (24.25)) ? (var_1_44) : (24.25))) + var_1_66))) : 1) : 1) : (((var_1_12 + var_1_55) >= var_1_38) ? ((var_1_32 < (var_1_76 + var_1_68)) ? ((var_1_56 > var_1_74) ? (var_1_86 == ((double) (var_1_61 + var_1_21))) : 1) : (var_1_86 == ((double) var_1_15))) : (var_1_86 == ((double) var_1_66))))) && (var_1_94 ? (var_1_88 == ((float) var_1_15)) : 1)) && (var_1_96 ? (var_1_89 == ((float) var_1_66)) : (var_1_89 == ((float) var_1_60)))) && (var_1_28 ? (var_1_90 == ((float) var_1_45)) : (var_1_90 == ((float) 32.5f)))) && (var_1_41 ? (var_1_91 == ((double) var_1_81)) : (var_1_91 == ((double) var_1_18)))) && (var_1_92 == ((signed char) -1))) && (var_1_26 ? (var_1_93 == ((double) var_1_21)) : 1)) && (var_1_94 == ((unsigned char) var_1_41))) && (var_1_39 ? (var_1_95 == ((unsigned short int) var_1_78)) : 1)) && (var_1_27 ? (var_1_96 == ((unsigned char) var_1_97)) : (var_1_96 == ((unsigned char) var_1_29)))) && (var_1_28 ? (var_1_98 == ((unsigned char) 5)) : (var_1_98 == ((unsigned char) 10)))) && (var_1_27 ? (var_1_99 == ((signed char) var_1_54)) : (var_1_99 == ((signed char) var_1_51)))) && (((var_1_60 - (var_1_80 - var_1_81)) >= (- 7.5)) ? (((var_1_74 >> var_1_101) != var_1_69) ? (var_1_100 == ((signed char) ((((-64) < ((8 - var_1_56))) ? (-64) : ((8 - var_1_56)))))) : (var_1_100 == ((signed char) var_1_54))) : (var_1_100 == ((signed char) var_1_56)))
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
