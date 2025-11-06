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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 64;
unsigned long int var_1_2 = 3511246143;
unsigned char var_1_3 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed char var_1_8 = -128;
signed char var_1_9 = 10;
signed char var_1_10 = 32;
signed char var_1_11 = 1;
signed char var_1_15 = 25;
signed char var_1_16 = 16;
signed char var_1_17 = 32;
double var_1_18 = 32.25;
signed char var_1_19 = -32;
double var_1_20 = 127.5;
double var_1_21 = 4.2;
double var_1_22 = -0.3;
double var_1_23 = 64.775;
double var_1_24 = 1.6;
float var_1_25 = 64.375;
signed short int var_1_26 = -5;
float var_1_27 = 99.5;
float var_1_28 = 0.5;
float var_1_29 = 5.4;
signed char var_1_30 = -128;
signed long int var_1_31 = 5;
unsigned char var_1_32 = 5;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 50;
unsigned char var_1_36 = 8;
unsigned char var_1_37 = 2;
unsigned char var_1_38 = 16;
float var_1_39 = 24.5;
unsigned long int var_1_40 = 64;
unsigned long int var_1_41 = 1079101399;
unsigned long int var_1_42 = 3748179900;
signed long int var_1_43 = 10;
unsigned char var_1_44 = 8;
float var_1_45 = 0.25;
double var_1_47 = 0.0;
float var_1_48 = 0.0;
unsigned long int var_1_49 = 4;
unsigned char var_1_50 = 4;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 50;
unsigned char var_1_53 = 200;
unsigned char var_1_54 = 32;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 16;
double var_1_57 = 2.875;
unsigned long int var_1_58 = 0;
unsigned long int var_1_59 = 1000000000;
signed char var_1_60 = -4;
unsigned short int var_1_61 = 4;
unsigned short int var_1_62 = 25725;
signed short int var_1_63 = -5;
unsigned short int var_1_64 = 5;
unsigned short int var_1_65 = 57117;
signed char var_1_66 = -8;
unsigned char var_1_68 = 2;
unsigned char var_1_70 = 2;
double var_1_71 = 256.8;
unsigned long int var_1_72 = 10;
unsigned long int var_1_73 = 1797411146;
signed char var_1_74 = -16;
signed long int var_1_75 = 10;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 1;
unsigned short int var_1_78 = 2;
unsigned char var_1_79 = 1;
unsigned char var_1_80 = 1;
double var_1_81 = 0.375;
signed short int var_1_82 = -128;
signed long int var_1_83 = -50;
signed long int var_1_84 = 1547767825;
signed long int var_1_85 = 1000000000;
unsigned char var_1_86 = 16;
unsigned char var_1_87 = 100;
unsigned char var_1_88 = 64;
unsigned long int var_1_89 = 32;
unsigned long int var_1_90 = 1000000000;
unsigned short int var_1_91 = 4;
unsigned short int var_1_92 = 50115;
signed char var_1_93 = 25;
double var_1_94 = 15.4;
double var_1_95 = 7.6;
unsigned long int var_1_96 = 256;
unsigned long int var_1_97 = 25;
signed char var_1_98 = -10;
signed char var_1_99 = -5;
signed char var_1_100 = -128;
unsigned long int var_1_101 = 256;
unsigned char var_1_102 = 5;
unsigned long int var_1_103 = 16;
double var_1_105 = 2.5;
unsigned char var_1_106 = 1;
signed char var_1_107 = -50;
unsigned long int var_1_108 = 16;
signed char var_1_109 = -10;
unsigned long int var_1_110 = 25;
float last_1_var_1_45 = 0.25;
unsigned long int last_1_var_1_49 = 4;
unsigned char last_1_var_1_52 = 50;
signed short int last_1_var_1_63 = -5;
double last_1_var_1_71 = 256.8;
signed long int last_1_var_1_75 = 10;
unsigned char last_1_var_1_76 = 1;
unsigned long int last_1_var_1_89 = 32;
unsigned long int last_1_var_1_96 = 256;
unsigned char last_1_var_1_106 = 1;
unsigned long int last_1_var_1_108 = 16;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_89 > var_1_26) {
  var_1_83 = ((((var_1_17) > ((var_1_15 - var_1_65))) ? (var_1_17) : ((var_1_15 - var_1_65))));
 } else {
  var_1_83 = ((((((last_1_var_1_89 + last_1_var_1_75)) > (var_1_53)) ? ((last_1_var_1_89 + last_1_var_1_75)) : (var_1_53))) - (var_1_84 - (var_1_85 - last_1_var_1_52)));
 }
 if (((- var_1_2) + last_1_var_1_108) != last_1_var_1_49) {
  if (var_1_2 >= last_1_var_1_49) {
   var_1_3 = (! (last_1_var_1_76 && var_1_6));
  } else {
   var_1_3 = (last_1_var_1_76 && var_1_6);
  }
 } else {
  var_1_3 = (var_1_6 && var_1_7);
 }
 if (last_1_var_1_106) {
  var_1_43 = (((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49))) + ((((var_1_15) < (-4)) ? (var_1_15) : (-4))));
 } else {
  var_1_43 = ((25 - var_1_36) + ((((((((last_1_var_1_49) > (last_1_var_1_63)) ? (last_1_var_1_49) : (last_1_var_1_63)))) < (((((var_1_15) > (var_1_33)) ? (var_1_15) : (var_1_33))))) ? (((((last_1_var_1_49) > (last_1_var_1_63)) ? (last_1_var_1_49) : (last_1_var_1_63)))) : (((((var_1_15) > (var_1_33)) ? (var_1_15) : (var_1_33)))))));
 }
 if (((((var_1_22) > (0.2f)) ? (var_1_22) : (0.2f))) > (- (- -0.7))) {
  if (var_1_23 < (last_1_var_1_71 / var_1_48)) {
   var_1_76 = ((var_1_54 > last_1_var_1_96) || var_1_77);
  } else {
   var_1_76 = var_1_77;
  }
 } else {
  var_1_76 = (var_1_7 || var_1_77);
 }
 if (var_1_76) {
  var_1_103 = var_1_56;
 } else {
  var_1_103 = var_1_53;
 }
 if (var_1_27 > (var_1_47 - var_1_23)) {
  if (! var_1_76) {
   if (var_1_6) {
    var_1_50 = (((((((((var_1_34) > (var_1_51)) ? (var_1_34) : (var_1_51))) - 64)) > (var_1_15)) ? ((((((var_1_34) > (var_1_51)) ? (var_1_34) : (var_1_51))) - 64)) : (var_1_15)));
   } else {
    var_1_50 = ((((var_1_38) < ((var_1_37 + var_1_17))) ? (var_1_38) : ((var_1_37 + var_1_17))));
   }
  }
 } else {
  if (var_1_7) {
   var_1_50 = (var_1_34 - (var_1_33 - (2 + var_1_38)));
  } else {
   var_1_50 = ((((var_1_17) < ((var_1_51 - (64 - var_1_38)))) ? (var_1_17) : ((var_1_51 - (64 - var_1_38)))));
  }
 }
 unsigned long int stepLocal_12 = var_1_2;
 if (stepLocal_12 > var_1_83) {
  var_1_71 = ((((256.7 - var_1_48) < 0 ) ? -(256.7 - var_1_48) : (256.7 - var_1_48)));
 }
 if (var_1_76) {
  var_1_97 = var_1_90;
 }
 var_1_1 = (var_1_2 - 8u);
 var_1_8 = ((((var_1_9 + var_1_10) < 0 ) ? -(var_1_9 + var_1_10) : (var_1_9 + var_1_10)));
 if (-10 > var_1_9) {
  if (var_1_15 <= (var_1_17 / var_1_19)) {
   var_1_18 = (var_1_20 + (var_1_21 + var_1_22));
  } else {
   var_1_18 = ((((5.75) < (var_1_22)) ? (5.75) : (var_1_22)));
  }
 } else {
  var_1_18 = (var_1_23 - ((((128.5) < (var_1_24)) ? (128.5) : (var_1_24))));
 }
 var_1_30 = (var_1_15 - var_1_16);
 if (((((var_1_29) < (var_1_20)) ? (var_1_29) : (var_1_20))) >= 127.962) {
  var_1_44 = (var_1_17 + var_1_35);
 } else {
  var_1_44 = ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)));
 }
 if (var_1_28 <= 31.2f) {
  var_1_57 = var_1_24;
 } else {
  var_1_57 = var_1_29;
 }
 unsigned long int stepLocal_4 = var_1_41;
 if ((- var_1_97) >= stepLocal_4) {
  var_1_58 = (((var_1_59 - var_1_34) + var_1_35) + ((((var_1_41 - var_1_15) < 0 ) ? -(var_1_41 - var_1_15) : (var_1_41 - var_1_15))));
 }
 var_1_60 = ((((var_1_35) < (var_1_54)) ? (var_1_35) : (var_1_54)));
 unsigned long int stepLocal_7 = var_1_97;
 if ((var_1_51 / var_1_35) <= stepLocal_7) {
  var_1_66 = var_1_10;
 }
 var_1_75 = (var_1_55 - var_1_17);
 var_1_78 = var_1_51;
 signed long int stepLocal_16 = (((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37));
 if ((var_1_56 + var_1_15) >= stepLocal_16) {
  var_1_86 = var_1_38;
 } else {
  var_1_86 = ((var_1_33 + var_1_87) - (var_1_88 - (var_1_38 + var_1_56)));
 }
 var_1_98 = var_1_38;
 if (var_1_80) {
  var_1_100 = var_1_54;
 } else {
  var_1_100 = var_1_9;
 }
 var_1_101 = var_1_59;
 var_1_106 = var_1_7;
 if (var_1_3) {
  var_1_107 = var_1_9;
 } else {
  var_1_107 = var_1_56;
 }
 if (var_1_106) {
  var_1_109 = var_1_38;
 } else {
  var_1_109 = var_1_16;
 }
 unsigned long int stepLocal_14 = 128u;
 signed long int stepLocal_13 = var_1_53 - var_1_35;
 if (! (var_1_3 && var_1_106)) {
  if (var_1_41 != stepLocal_14) {
   var_1_79 = (var_1_77 || var_1_80);
  } else {
   var_1_79 = (! (! var_1_6));
  }
 } else {
  if (stepLocal_13 <= ((var_1_37 - var_1_65) * (~ var_1_56))) {
   var_1_79 = (var_1_76 || (var_1_80 && var_1_77));
  } else {
   var_1_79 = (! var_1_80);
  }
 }
 if (var_1_79) {
  var_1_108 = var_1_87;
 }
 if ((3.75 > ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) && (var_1_103 != (var_1_15 / var_1_26))) {
  var_1_72 = (var_1_51 + (var_1_41 - (var_1_43 + var_1_36)));
 } else {
  if (var_1_3) {
   var_1_72 = (1u + (((((var_1_41) > (var_1_73)) ? (var_1_41) : (var_1_73))) - var_1_16));
  }
 }
 if (var_1_79) {
  var_1_105 = var_1_95;
 }
 unsigned char stepLocal_1 = var_1_15 >= var_1_97;
 unsigned char stepLocal_0 = var_1_6;
 if (var_1_79 || stepLocal_0) {
  if (stepLocal_1 || (! (var_1_57 >= var_1_27))) {
   var_1_31 = (((((var_1_17) > ((var_1_15 + var_1_16))) ? (var_1_17) : ((var_1_15 + var_1_16)))) - 32);
  } else {
   var_1_31 = (((((((((var_1_19) > (var_1_9)) ? (var_1_19) : (var_1_9)))) < (var_1_15)) ? (((((var_1_19) > (var_1_9)) ? (var_1_19) : (var_1_9)))) : (var_1_15))) + var_1_103);
  }
 } else {
  var_1_31 = (var_1_9 + var_1_26);
 }
 if (var_1_7) {
  if (((var_1_105 * var_1_29) >= ((((var_1_21) > (var_1_57)) ? (var_1_21) : (var_1_57)))) || var_1_76) {
   var_1_32 = ((((((64 + var_1_33)) < (var_1_34)) ? ((64 + var_1_33)) : (var_1_34))) - ((var_1_35 - var_1_36) + (var_1_37 + var_1_38)));
  } else {
   var_1_32 = (var_1_34 - ((((var_1_37) > (((((var_1_38) > (var_1_35)) ? (var_1_38) : (var_1_35))))) ? (var_1_37) : (((((var_1_38) > (var_1_35)) ? (var_1_38) : (var_1_35)))))));
  }
 }
 if (((((var_1_24) < (var_1_105)) ? (var_1_24) : (var_1_105))) < var_1_23) {
  var_1_39 = var_1_24;
 } else {
  var_1_39 = 255.5f;
 }
 if ((1 - var_1_33) > var_1_34) {
  if ((var_1_9 / var_1_35) >= var_1_30) {
   var_1_40 = ((var_1_41 - var_1_86) + (var_1_38 + var_1_15));
  } else {
   var_1_40 = ((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) - var_1_15) - var_1_38);
  }
 }
 if (var_1_36 <= var_1_101) {
  var_1_49 = (var_1_42 - var_1_35);
 }
 unsigned char stepLocal_6 = var_1_79;
 unsigned char stepLocal_5 = var_1_7;
 if (! var_1_79) {
  if (stepLocal_5 && var_1_6) {
   var_1_64 = ((var_1_56 + var_1_15) + var_1_38);
  } else {
   var_1_64 = var_1_17;
  }
 } else {
  if (var_1_76 || stepLocal_6) {
   var_1_64 = (var_1_65 - var_1_72);
  }
 }
 signed long int stepLocal_11 = 256 + 64;
 unsigned long int stepLocal_10 = (~ var_1_101) ^ (var_1_36 * var_1_17);
 signed long int stepLocal_9 = var_1_83;
 unsigned long int stepLocal_8 = var_1_49;
 if (! (var_1_6 || var_1_7)) {
  var_1_68 = (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) + var_1_16);
 } else {
  if (var_1_64 <= stepLocal_9) {
   if (stepLocal_11 > var_1_59) {
    if (var_1_59 == stepLocal_8) {
     if ((var_1_53 - ((((var_1_16) < (var_1_59)) ? (var_1_16) : (var_1_59)))) <= stepLocal_10) {
      var_1_68 = var_1_51;
     }
    } else {
     var_1_68 = ((var_1_38 + (var_1_37 + var_1_70)) + var_1_33);
    }
   } else {
    var_1_68 = ((((var_1_37) < ((var_1_55 + var_1_35))) ? (var_1_37) : ((var_1_55 + var_1_35))));
   }
  }
 }
 if (var_1_79) {
  var_1_74 = (-1 + 25);
 }
 if (! var_1_106) {
  var_1_82 = -1;
 }
 if (var_1_85 >= (~ var_1_49)) {
  var_1_93 = ((((var_1_38) < (((((var_1_55) > (var_1_35)) ? (var_1_55) : (var_1_35))))) ? (var_1_38) : (((((var_1_55) > (var_1_35)) ? (var_1_55) : (var_1_35))))));
 } else {
  if (var_1_82 > var_1_73) {
   var_1_93 = (4 + (var_1_70 + var_1_56));
  } else {
   var_1_93 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
  }
 }
 if (var_1_106) {
  var_1_99 = var_1_15;
 } else {
  var_1_99 = var_1_17;
 }
 if (var_1_79) {
  var_1_102 = var_1_16;
 }
 signed long int stepLocal_17 = ((((32) > (var_1_84)) ? (32) : (var_1_84))) - 100;
 if (stepLocal_17 >= var_1_103) {
  var_1_89 = ((((var_1_53) > (var_1_83)) ? (var_1_53) : (var_1_83)));
 } else {
  var_1_89 = (((((var_1_54) > (var_1_82)) ? (var_1_54) : (var_1_82))) + ((var_1_85 + var_1_90) - var_1_44));
 }
 signed char stepLocal_19 = var_1_16;
 signed char stepLocal_18 = var_1_17;
 if (stepLocal_18 > var_1_97) {
  if (var_1_47 > var_1_105) {
   var_1_94 = (((((var_1_29) > (var_1_95)) ? (var_1_29) : (var_1_95))) + var_1_21);
  } else {
   if (var_1_40 == stepLocal_19) {
    var_1_94 = (var_1_29 + var_1_21);
   } else {
    var_1_94 = ((((var_1_48) < (((((var_1_28) > (8.5)) ? (var_1_28) : (8.5))))) ? (var_1_48) : (((((var_1_28) > (8.5)) ? (var_1_28) : (8.5))))));
   }
  }
 } else {
  var_1_94 = ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) < (((var_1_27 + 255.9) - var_1_48))) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (((var_1_27 + 255.9) - var_1_48))));
 }
 unsigned long int stepLocal_2 = var_1_89;
 if (var_1_6) {
  if (var_1_2 >= stepLocal_2) {
   var_1_45 = (4.05f + var_1_27);
  } else {
   var_1_45 = (((((var_1_27 - var_1_29)) > (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? ((var_1_27 - var_1_29)) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))));
  }
 } else {
  if (var_1_29 == last_1_var_1_45) {
   if ((last_1_var_1_45 + (var_1_24 + var_1_28)) <= ((var_1_47 - var_1_27) - var_1_23)) {
    var_1_45 = ((((var_1_29) < (((var_1_48 - var_1_28) - var_1_27))) ? (var_1_29) : (((var_1_48 - var_1_28) - var_1_27))));
   } else {
    if (var_1_106) {
     var_1_45 = (256.5f + var_1_21);
    }
   }
  } else {
   var_1_45 = var_1_48;
  }
 }
 unsigned long int stepLocal_15 = (var_1_43 / var_1_59) * var_1_16;
 if (((((var_1_101) < (var_1_15)) ? (var_1_101) : (var_1_15))) < stepLocal_15) {
  var_1_81 = (var_1_22 + var_1_27);
 } else {
  if (var_1_94 >= var_1_22) {
   var_1_81 = ((((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27))) + var_1_28) - var_1_48);
  } else {
   var_1_81 = ((((var_1_20) > (((((var_1_28) < (var_1_21)) ? (var_1_28) : (var_1_21))))) ? (var_1_20) : (((((var_1_28) < (var_1_21)) ? (var_1_28) : (var_1_21))))));
  }
 }
 if (var_1_2 != var_1_89) {
  if ((var_1_94 * var_1_81) < var_1_105) {
   var_1_11 = ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)));
  } else {
   if (256 > var_1_10) {
    if (var_1_10 == ((((var_1_72) > (var_1_2)) ? (var_1_72) : (var_1_2)))) {
     if (var_1_7) {
      if (var_1_105 >= var_1_94) {
       var_1_11 = ((((var_1_9) < (((var_1_15 + var_1_16) - var_1_17))) ? (var_1_9) : (((var_1_15 + var_1_16) - var_1_17))));
      } else {
       var_1_11 = var_1_15;
      }
     }
    } else {
     var_1_11 = ((((64) < 0 ) ? -(64) : (64)));
    }
   }
  }
 } else {
  if (var_1_9 < var_1_72) {
   var_1_11 = var_1_16;
  } else {
   var_1_11 = var_1_17;
  }
 }
 if ((var_1_19 / var_1_26) > var_1_9) {
  if (! var_1_6) {
   if (var_1_17 != var_1_26) {
    var_1_25 = ((var_1_27 + var_1_28) - var_1_24);
   } else {
    if (((var_1_81 + var_1_23) / 128.25f) < var_1_21) {
     var_1_25 = ((((8.5f) > ((var_1_21 + var_1_28))) ? (8.5f) : ((var_1_21 + var_1_28))));
    } else {
     var_1_25 = (((5.3f + var_1_29) + var_1_27) - 1.0000000007E9f);
    }
   }
  }
 } else {
  if (var_1_26 >= var_1_9) {
   var_1_25 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
  } else {
   var_1_25 = var_1_29;
  }
 }
 if (var_1_81 <= var_1_21) {
  var_1_91 = (((((var_1_65) > (var_1_92)) ? (var_1_65) : (var_1_92))) - var_1_40);
 } else {
  var_1_91 = ((((var_1_33) > (var_1_92)) ? (var_1_33) : (var_1_92)));
 }
 unsigned char stepLocal_3 = (var_1_37 / var_1_26) <= (var_1_36 + var_1_10);
 if (var_1_27 >= var_1_81) {
  var_1_52 = (var_1_34 - var_1_37);
 } else {
  if (stepLocal_3 && var_1_106) {
   var_1_52 = ((var_1_53 - (var_1_54 - var_1_38)) - (((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16))) + (var_1_55 - var_1_56)));
  }
 }
 unsigned char stepLocal_21 = var_1_52;
 unsigned long int stepLocal_20 = var_1_43 | var_1_72;
 if (stepLocal_21 < var_1_38) {
  if (var_1_106) {
   if (stepLocal_20 > var_1_92) {
    var_1_96 = (var_1_2 - var_1_88);
   }
  } else {
   var_1_96 = ((((((((var_1_33) < (var_1_88)) ? (var_1_33) : (var_1_88)))) > (var_1_62)) ? (((((var_1_33) < (var_1_88)) ? (var_1_33) : (var_1_88)))) : (var_1_62)));
  }
 } else {
  if (var_1_6) {
   var_1_96 = var_1_84;
  }
 }
 if ((32 * var_1_103) > (var_1_51 / var_1_35)) {
  var_1_61 = ((var_1_62 - var_1_96) + (var_1_35 + var_1_15));
 }
 if (var_1_76) {
  if (var_1_76 || (var_1_6 && var_1_7)) {
   var_1_63 = var_1_50;
  } else {
   var_1_63 = ((((((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) < (var_1_51)) ? (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) : (var_1_51)));
  }
 } else {
  var_1_63 = var_1_19;
 }
 unsigned long int stepLocal_22 = var_1_97 % var_1_34;
 if (var_1_48 < (var_1_29 * var_1_20)) {
  if ((var_1_49 + var_1_73) < stepLocal_22) {
   var_1_110 = ((((var_1_63 + var_1_89) < 0 ) ? -(var_1_63 + var_1_89) : (var_1_63 + var_1_89)));
  } else {
   var_1_110 = var_1_92;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 2147483647);
 assume_abort_if_not(var_1_2 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -63);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -63);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32768);
 assume_abort_if_not(var_1_26 <= 32767);
 assume_abort_if_not(var_1_26 != 0);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 64);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 32);
 assume_abort_if_not(var_1_35 <= 64);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 32);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 31);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741823);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 3221225470);
 assume_abort_if_not(var_1_42 <= 4294967294);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 4611686.018427388000e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 4611686.018427383000e+12F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 127);
 assume_abort_if_not(var_1_51 <= 254);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 190);
 assume_abort_if_not(var_1_53 <= 254);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 31);
 assume_abort_if_not(var_1_54 <= 63);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 31);
 assume_abort_if_not(var_1_55 <= 63);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 31);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 536870912);
 assume_abort_if_not(var_1_59 <= 1073741824);
 var_1_62 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_62 >= 16383);
 assume_abort_if_not(var_1_62 <= 32767);
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 32767);
 assume_abort_if_not(var_1_65 <= 65534);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 31);
 var_1_73 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_73 >= 1073741823);
 assume_abort_if_not(var_1_73 <= 2147483647);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 1);
 assume_abort_if_not(var_1_77 <= 1);
 var_1_80 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_80 >= 1);
 assume_abort_if_not(var_1_80 <= 1);
 var_1_84 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_84 >= 1073741823);
 assume_abort_if_not(var_1_84 <= 2147483646);
 var_1_85 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_85 >= 536870911);
 assume_abort_if_not(var_1_85 <= 1073741823);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 64);
 assume_abort_if_not(var_1_87 <= 127);
 var_1_88 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_88 >= 63);
 assume_abort_if_not(var_1_88 <= 127);
 var_1_90 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_90 >= 536870912);
 assume_abort_if_not(var_1_90 <= 1073741823);
 var_1_92 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_92 >= 32767);
 assume_abort_if_not(var_1_92 <= 65534);
 var_1_95 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_95 >= -461168.6018427383000e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 4611686.018427383000e+12F && var_1_95 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_45 = var_1_45;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_76 = var_1_76;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_106 = var_1_106;
 last_1_var_1_108 = var_1_108;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((unsigned long int) (var_1_2 - 8u))) && ((((- var_1_2) + last_1_var_1_108) != last_1_var_1_49) ? ((var_1_2 >= last_1_var_1_49) ? (var_1_3 == ((unsigned char) (! (last_1_var_1_76 && var_1_6)))) : (var_1_3 == ((unsigned char) (last_1_var_1_76 && var_1_6)))) : (var_1_3 == ((unsigned char) (var_1_6 && var_1_7))))) && (var_1_8 == ((signed char) ((((var_1_9 + var_1_10) < 0 ) ? -(var_1_9 + var_1_10) : (var_1_9 + var_1_10)))))) && ((var_1_2 != var_1_89) ? (((var_1_94 * var_1_81) < var_1_105) ? (var_1_11 == ((signed char) ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))))) : ((256 > var_1_10) ? ((var_1_10 == ((((var_1_72) > (var_1_2)) ? (var_1_72) : (var_1_2)))) ? (var_1_7 ? ((var_1_105 >= var_1_94) ? (var_1_11 == ((signed char) ((((var_1_9) < (((var_1_15 + var_1_16) - var_1_17))) ? (var_1_9) : (((var_1_15 + var_1_16) - var_1_17)))))) : (var_1_11 == ((signed char) var_1_15))) : 1) : (var_1_11 == ((signed char) ((((64) < 0 ) ? -(64) : (64)))))) : 1)) : ((var_1_9 < var_1_72) ? (var_1_11 == ((signed char) var_1_16)) : (var_1_11 == ((signed char) var_1_17))))) && ((-10 > var_1_9) ? ((var_1_15 <= (var_1_17 / var_1_19)) ? (var_1_18 == ((double) (var_1_20 + (var_1_21 + var_1_22)))) : (var_1_18 == ((double) ((((5.75) < (var_1_22)) ? (5.75) : (var_1_22)))))) : (var_1_18 == ((double) (var_1_23 - ((((128.5) < (var_1_24)) ? (128.5) : (var_1_24)))))))) && (((var_1_19 / var_1_26) > var_1_9) ? ((! var_1_6) ? ((var_1_17 != var_1_26) ? (var_1_25 == ((float) ((var_1_27 + var_1_28) - var_1_24))) : ((((var_1_81 + var_1_23) / 128.25f) < var_1_21) ? (var_1_25 == ((float) ((((8.5f) > ((var_1_21 + var_1_28))) ? (8.5f) : ((var_1_21 + var_1_28)))))) : (var_1_25 == ((float) (((5.3f + var_1_29) + var_1_27) - 1.0000000007E9f))))) : 1) : ((var_1_26 >= var_1_9) ? (var_1_25 == ((float) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : (var_1_25 == ((float) var_1_29))))) && (var_1_30 == ((signed char) (var_1_15 - var_1_16)))) && ((var_1_79 || var_1_6) ? (((var_1_15 >= var_1_97) || (! (var_1_57 >= var_1_27))) ? (var_1_31 == ((signed long int) (((((var_1_17) > ((var_1_15 + var_1_16))) ? (var_1_17) : ((var_1_15 + var_1_16)))) - 32))) : (var_1_31 == ((signed long int) (((((((((var_1_19) > (var_1_9)) ? (var_1_19) : (var_1_9)))) < (var_1_15)) ? (((((var_1_19) > (var_1_9)) ? (var_1_19) : (var_1_9)))) : (var_1_15))) + var_1_103)))) : (var_1_31 == ((signed long int) (var_1_9 + var_1_26))))) && (var_1_7 ? ((((var_1_105 * var_1_29) >= ((((var_1_21) > (var_1_57)) ? (var_1_21) : (var_1_57)))) || var_1_76) ? (var_1_32 == ((unsigned char) ((((((64 + var_1_33)) < (var_1_34)) ? ((64 + var_1_33)) : (var_1_34))) - ((var_1_35 - var_1_36) + (var_1_37 + var_1_38))))) : (var_1_32 == ((unsigned char) (var_1_34 - ((((var_1_37) > (((((var_1_38) > (var_1_35)) ? (var_1_38) : (var_1_35))))) ? (var_1_37) : (((((var_1_38) > (var_1_35)) ? (var_1_38) : (var_1_35)))))))))) : 1)) && ((((((var_1_24) < (var_1_105)) ? (var_1_24) : (var_1_105))) < var_1_23) ? (var_1_39 == ((float) var_1_24)) : (var_1_39 == ((float) 255.5f)))) && (((1 - var_1_33) > var_1_34) ? (((var_1_9 / var_1_35) >= var_1_30) ? (var_1_40 == ((unsigned long int) ((var_1_41 - var_1_86) + (var_1_38 + var_1_15)))) : (var_1_40 == ((unsigned long int) ((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) - var_1_15) - var_1_38)))) : 1)) && (last_1_var_1_106 ? (var_1_43 == ((signed long int) (((((last_1_var_1_49) < 0 ) ? -(last_1_var_1_49) : (last_1_var_1_49))) + ((((var_1_15) < (-4)) ? (var_1_15) : (-4)))))) : (var_1_43 == ((signed long int) ((25 - var_1_36) + ((((((((last_1_var_1_49) > (last_1_var_1_63)) ? (last_1_var_1_49) : (last_1_var_1_63)))) < (((((var_1_15) > (var_1_33)) ? (var_1_15) : (var_1_33))))) ? (((((last_1_var_1_49) > (last_1_var_1_63)) ? (last_1_var_1_49) : (last_1_var_1_63)))) : (((((var_1_15) > (var_1_33)) ? (var_1_15) : (var_1_33))))))))))) && ((((((var_1_29) < (var_1_20)) ? (var_1_29) : (var_1_20))) >= 127.962) ? (var_1_44 == ((unsigned char) (var_1_17 + var_1_35))) : (var_1_44 == ((unsigned char) ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))) && (var_1_6 ? ((var_1_2 >= var_1_89) ? (var_1_45 == ((float) (4.05f + var_1_27))) : (var_1_45 == ((float) (((((var_1_27 - var_1_29)) > (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))) ? ((var_1_27 - var_1_29)) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))))))) : ((var_1_29 == last_1_var_1_45) ? (((last_1_var_1_45 + (var_1_24 + var_1_28)) <= ((var_1_47 - var_1_27) - var_1_23)) ? (var_1_45 == ((float) ((((var_1_29) < (((var_1_48 - var_1_28) - var_1_27))) ? (var_1_29) : (((var_1_48 - var_1_28) - var_1_27)))))) : (var_1_106 ? (var_1_45 == ((float) (256.5f + var_1_21))) : 1)) : (var_1_45 == ((float) var_1_48))))) && ((var_1_36 <= var_1_101) ? (var_1_49 == ((unsigned long int) (var_1_42 - var_1_35))) : 1)) && ((var_1_27 > (var_1_47 - var_1_23)) ? ((! var_1_76) ? (var_1_6 ? (var_1_50 == ((unsigned char) (((((((((var_1_34) > (var_1_51)) ? (var_1_34) : (var_1_51))) - 64)) > (var_1_15)) ? ((((((var_1_34) > (var_1_51)) ? (var_1_34) : (var_1_51))) - 64)) : (var_1_15))))) : (var_1_50 == ((unsigned char) ((((var_1_38) < ((var_1_37 + var_1_17))) ? (var_1_38) : ((var_1_37 + var_1_17))))))) : 1) : (var_1_7 ? (var_1_50 == ((unsigned char) (var_1_34 - (var_1_33 - (2 + var_1_38))))) : (var_1_50 == ((unsigned char) ((((var_1_17) < ((var_1_51 - (64 - var_1_38)))) ? (var_1_17) : ((var_1_51 - (64 - var_1_38)))))))))) && ((var_1_27 >= var_1_81) ? (var_1_52 == ((unsigned char) (var_1_34 - var_1_37))) : ((((var_1_37 / var_1_26) <= (var_1_36 + var_1_10)) && var_1_106) ? (var_1_52 == ((unsigned char) ((var_1_53 - (var_1_54 - var_1_38)) - (((((var_1_37) > (var_1_16)) ? (var_1_37) : (var_1_16))) + (var_1_55 - var_1_56))))) : 1))) && ((var_1_28 <= 31.2f) ? (var_1_57 == ((double) var_1_24)) : (var_1_57 == ((double) var_1_29)))) && (((- var_1_97) >= var_1_41) ? (var_1_58 == ((unsigned long int) (((var_1_59 - var_1_34) + var_1_35) + ((((var_1_41 - var_1_15) < 0 ) ? -(var_1_41 - var_1_15) : (var_1_41 - var_1_15)))))) : 1)) && (var_1_60 == ((signed char) ((((var_1_35) < (var_1_54)) ? (var_1_35) : (var_1_54)))))) && (((32 * var_1_103) > (var_1_51 / var_1_35)) ? (var_1_61 == ((unsigned short int) ((var_1_62 - var_1_96) + (var_1_35 + var_1_15)))) : 1)) && (var_1_76 ? ((var_1_76 || (var_1_6 && var_1_7)) ? (var_1_63 == ((signed short int) var_1_50)) : (var_1_63 == ((signed short int) ((((((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) < (var_1_51)) ? (((((var_1_61) < 0 ) ? -(var_1_61) : (var_1_61)))) : (var_1_51)))))) : (var_1_63 == ((signed short int) var_1_19)))) && ((! var_1_79) ? ((var_1_7 && var_1_6) ? (var_1_64 == ((unsigned short int) ((var_1_56 + var_1_15) + var_1_38))) : (var_1_64 == ((unsigned short int) var_1_17))) : ((var_1_76 || var_1_79) ? (var_1_64 == ((unsigned short int) (var_1_65 - var_1_72))) : 1))) && (((var_1_51 / var_1_35) <= var_1_97) ? (var_1_66 == ((signed char) var_1_10)) : 1)) && ((! (var_1_6 || var_1_7)) ? (var_1_68 == ((unsigned char) (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) + var_1_16))) : ((var_1_64 <= var_1_83) ? (((256 + 64) > var_1_59) ? ((var_1_59 == var_1_49) ? (((var_1_53 - ((((var_1_16) < (var_1_59)) ? (var_1_16) : (var_1_59)))) <= ((~ var_1_101) ^ (var_1_36 * var_1_17))) ? (var_1_68 == ((unsigned char) var_1_51)) : 1) : (var_1_68 == ((unsigned char) ((var_1_38 + (var_1_37 + var_1_70)) + var_1_33)))) : (var_1_68 == ((unsigned char) ((((var_1_37) < ((var_1_55 + var_1_35))) ? (var_1_37) : ((var_1_55 + var_1_35))))))) : 1))) && ((var_1_2 > var_1_83) ? (var_1_71 == ((double) ((((256.7 - var_1_48) < 0 ) ? -(256.7 - var_1_48) : (256.7 - var_1_48))))) : 1)) && (((3.75 > ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) && (var_1_103 != (var_1_15 / var_1_26))) ? (var_1_72 == ((unsigned long int) (var_1_51 + (var_1_41 - (var_1_43 + var_1_36))))) : (var_1_3 ? (var_1_72 == ((unsigned long int) (1u + (((((var_1_41) > (var_1_73)) ? (var_1_41) : (var_1_73))) - var_1_16)))) : 1))) && (var_1_79 ? (var_1_74 == ((signed char) (-1 + 25))) : 1)) && (var_1_75 == ((signed long int) (var_1_55 - var_1_17)))) && ((((((var_1_22) > (0.2f)) ? (var_1_22) : (0.2f))) > (- (- -0.7))) ? ((var_1_23 < (last_1_var_1_71 / var_1_48)) ? (var_1_76 == ((unsigned char) ((var_1_54 > last_1_var_1_96) || var_1_77))) : (var_1_76 == ((unsigned char) var_1_77))) : (var_1_76 == ((unsigned char) (var_1_7 || var_1_77))))) && (var_1_78 == ((unsigned short int) var_1_51))) && ((! (var_1_3 && var_1_106)) ? ((var_1_41 != 128u) ? (var_1_79 == ((unsigned char) (var_1_77 || var_1_80))) : (var_1_79 == ((unsigned char) (! (! var_1_6))))) : (((var_1_53 - var_1_35) <= ((var_1_37 - var_1_65) * (~ var_1_56))) ? (var_1_79 == ((unsigned char) (var_1_76 || (var_1_80 && var_1_77)))) : (var_1_79 == ((unsigned char) (! var_1_80)))))) && ((((((var_1_101) < (var_1_15)) ? (var_1_101) : (var_1_15))) < ((var_1_43 / var_1_59) * var_1_16)) ? (var_1_81 == ((double) (var_1_22 + var_1_27))) : ((var_1_94 >= var_1_22) ? (var_1_81 == ((double) ((((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27))) + var_1_28) - var_1_48))) : (var_1_81 == ((double) ((((var_1_20) > (((((var_1_28) < (var_1_21)) ? (var_1_28) : (var_1_21))))) ? (var_1_20) : (((((var_1_28) < (var_1_21)) ? (var_1_28) : (var_1_21))))))))))) && ((! var_1_106) ? (var_1_82 == ((signed short int) -1)) : 1)) && ((last_1_var_1_89 > var_1_26) ? (var_1_83 == ((signed long int) ((((var_1_17) > ((var_1_15 - var_1_65))) ? (var_1_17) : ((var_1_15 - var_1_65)))))) : (var_1_83 == ((signed long int) ((((((last_1_var_1_89 + last_1_var_1_75)) > (var_1_53)) ? ((last_1_var_1_89 + last_1_var_1_75)) : (var_1_53))) - (var_1_84 - (var_1_85 - last_1_var_1_52))))))) && (((var_1_56 + var_1_15) >= ((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37)))) ? (var_1_86 == ((unsigned char) var_1_38)) : (var_1_86 == ((unsigned char) ((var_1_33 + var_1_87) - (var_1_88 - (var_1_38 + var_1_56))))))) && (((((((32) > (var_1_84)) ? (32) : (var_1_84))) - 100) >= var_1_103) ? (var_1_89 == ((unsigned long int) ((((var_1_53) > (var_1_83)) ? (var_1_53) : (var_1_83))))) : (var_1_89 == ((unsigned long int) (((((var_1_54) > (var_1_82)) ? (var_1_54) : (var_1_82))) + ((var_1_85 + var_1_90) - var_1_44)))))) && ((var_1_81 <= var_1_21) ? (var_1_91 == ((unsigned short int) (((((var_1_65) > (var_1_92)) ? (var_1_65) : (var_1_92))) - var_1_40))) : (var_1_91 == ((unsigned short int) ((((var_1_33) > (var_1_92)) ? (var_1_33) : (var_1_92))))))) && ((var_1_85 >= (~ var_1_49)) ? (var_1_93 == ((signed char) ((((var_1_38) < (((((var_1_55) > (var_1_35)) ? (var_1_55) : (var_1_35))))) ? (var_1_38) : (((((var_1_55) > (var_1_35)) ? (var_1_55) : (var_1_35)))))))) : ((var_1_82 > var_1_73) ? (var_1_93 == ((signed char) (4 + (var_1_70 + var_1_56)))) : (var_1_93 == ((signed char) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))))) && ((var_1_17 > var_1_97) ? ((var_1_47 > var_1_105) ? (var_1_94 == ((double) (((((var_1_29) > (var_1_95)) ? (var_1_29) : (var_1_95))) + var_1_21))) : ((var_1_40 == var_1_16) ? (var_1_94 == ((double) (var_1_29 + var_1_21))) : (var_1_94 == ((double) ((((var_1_48) < (((((var_1_28) > (8.5)) ? (var_1_28) : (8.5))))) ? (var_1_48) : (((((var_1_28) > (8.5)) ? (var_1_28) : (8.5)))))))))) : (var_1_94 == ((double) ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) < (((var_1_27 + 255.9) - var_1_48))) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (((var_1_27 + 255.9) - var_1_48)))))))) && ((var_1_52 < var_1_38) ? (var_1_106 ? (((var_1_43 | var_1_72) > var_1_92) ? (var_1_96 == ((unsigned long int) (var_1_2 - var_1_88))) : 1) : (var_1_96 == ((unsigned long int) ((((((((var_1_33) < (var_1_88)) ? (var_1_33) : (var_1_88)))) > (var_1_62)) ? (((((var_1_33) < (var_1_88)) ? (var_1_33) : (var_1_88)))) : (var_1_62)))))) : (var_1_6 ? (var_1_96 == ((unsigned long int) var_1_84)) : 1))) && (var_1_76 ? (var_1_97 == ((unsigned long int) var_1_90)) : 1)) && (var_1_98 == ((signed char) var_1_38))) && (var_1_106 ? (var_1_99 == ((signed char) var_1_15)) : (var_1_99 == ((signed char) var_1_17)))) && (var_1_80 ? (var_1_100 == ((signed char) var_1_54)) : (var_1_100 == ((signed char) var_1_9)))) && (var_1_101 == ((unsigned long int) var_1_59))) && (var_1_79 ? (var_1_102 == ((unsigned char) var_1_16)) : 1)) && (var_1_76 ? (var_1_103 == ((unsigned long int) var_1_56)) : (var_1_103 == ((unsigned long int) var_1_53)))) && (var_1_79 ? (var_1_105 == ((double) var_1_95)) : 1)) && (var_1_106 == ((unsigned char) var_1_7))) && (var_1_3 ? (var_1_107 == ((signed char) var_1_9)) : (var_1_107 == ((signed char) var_1_56)))) && (var_1_79 ? (var_1_108 == ((unsigned long int) var_1_87)) : 1)) && (var_1_106 ? (var_1_109 == ((signed char) var_1_38)) : (var_1_109 == ((signed char) var_1_16)))) && ((var_1_48 < (var_1_29 * var_1_20)) ? (((var_1_49 + var_1_73) < (var_1_97 % var_1_34)) ? (var_1_110 == ((unsigned long int) ((((var_1_63 + var_1_89) < 0 ) ? -(var_1_63 + var_1_89) : (var_1_63 + var_1_89))))) : (var_1_110 == ((unsigned long int) var_1_92))) : 1)
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
