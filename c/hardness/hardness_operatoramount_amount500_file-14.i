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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
unsigned long int var_1_4 = 4042214920;
unsigned long int var_1_5 = 10;
signed long int var_1_6 = 10;
signed long int var_1_7 = -32;
unsigned long int var_1_8 = 25;
unsigned long int var_1_9 = 4046303146;
double var_1_10 = 127.2;
double var_1_12 = 9.2;
double var_1_13 = 100000000.5;
double var_1_14 = 3.5;
float var_1_15 = 32.6;
float var_1_16 = 3.9;
float var_1_17 = 1.875;
float var_1_18 = 16.05;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 200;
unsigned char var_1_21 = 200;
unsigned char var_1_22 = 10;
unsigned char var_1_23 = 32;
signed char var_1_24 = 1;
signed char var_1_25 = 32;
unsigned short int var_1_26 = 8;
signed long int var_1_27 = 10;
unsigned short int var_1_29 = 40533;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned short int var_1_33 = 64;
unsigned short int var_1_34 = 21850;
unsigned short int var_1_35 = 29458;
double var_1_36 = 15.2;
unsigned char var_1_37 = 128;
float var_1_38 = 64.072;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
double var_1_41 = 499.6;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 25;
unsigned char var_1_45 = 8;
unsigned long int var_1_46 = 1295847497;
unsigned long int var_1_47 = 1000000000;
unsigned char var_1_48 = 1;
signed short int var_1_49 = 8;
signed short int var_1_50 = 10000;
signed long int var_1_51 = -50;
unsigned char var_1_52 = 5;
signed long int var_1_53 = 1;
unsigned char var_1_54 = 50;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 32;
unsigned char var_1_57 = 64;
unsigned char var_1_58 = 64;
unsigned char var_1_59 = 32;
unsigned char var_1_60 = 1;
signed short int var_1_61 = 2;
signed short int var_1_62 = 50;
signed char var_1_63 = 16;
unsigned short int var_1_65 = 256;
signed char var_1_66 = -1;
unsigned char var_1_67 = 0;
unsigned long int var_1_69 = 5;
unsigned long int var_1_70 = 1000000000;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
double var_1_74 = 9.25;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 0;
float var_1_77 = 50.4;
signed short int var_1_78 = 2;
signed long int var_1_79 = -200;
unsigned long int var_1_80 = 32;
unsigned long int var_1_81 = 32;
unsigned long int var_1_82 = 1455182979;
unsigned char var_1_83 = 0;
unsigned char var_1_84 = 1;
unsigned long int var_1_85 = 2;
unsigned short int var_1_86 = 128;
unsigned long int var_1_87 = 25;
unsigned short int var_1_88 = 4;
double var_1_89 = -0.3;
unsigned char var_1_90 = 1;
double var_1_91 = 10.2;
float var_1_92 = 25.5;
double var_1_93 = 64.75;
double var_1_94 = 999999999.5;
float var_1_95 = 10.7;
float var_1_96 = 0.19999999999999996;
signed short int var_1_97 = 100;
double var_1_98 = 7.919;
unsigned long int var_1_99 = 0;
unsigned short int var_1_100 = 5;
signed long int var_1_101 = 50;
unsigned char var_1_102 = 4;
unsigned long int last_1_var_1_1 = 16;
unsigned char last_1_var_1_19 = 0;
unsigned char last_1_var_1_39 = 1;
unsigned long int last_1_var_1_44 = 25;
unsigned char last_1_var_1_48 = 1;
unsigned char last_1_var_1_54 = 50;
double last_1_var_1_74 = 9.25;
unsigned char last_1_var_1_84 = 1;
unsigned short int last_1_var_1_88 = 4;
signed long int last_1_var_1_101 = 50;
unsigned char last_1_var_1_102 = 4;
void initially(void) {
}
void step(void) {
 var_1_81 = ((var_1_82 + var_1_46) - last_1_var_1_54);
 unsigned char stepLocal_5 = var_1_22;
 unsigned char stepLocal_4 = last_1_var_1_48;
 signed long int stepLocal_3 = (var_1_27 + var_1_23) - var_1_22;
 if (last_1_var_1_101 > stepLocal_3) {
  if (last_1_var_1_84) {
   if (! last_1_var_1_48) {
    var_1_26 = (((((var_1_29 - var_1_25)) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? ((var_1_29 - var_1_25)) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))));
   } else {
    if (stepLocal_4 || ((- last_1_var_1_74) <= 2.5)) {
     var_1_26 = ((var_1_23 + var_1_21) + 128);
    } else {
     if ((var_1_29 + var_1_23) > stepLocal_5) {
      if (var_1_14 <= var_1_17) {
       var_1_26 = var_1_21;
      } else {
       var_1_26 = var_1_29;
      }
     }
    }
   }
  }
 }
 var_1_101 = var_1_26;
 unsigned long int stepLocal_24 = var_1_81;
 unsigned long int stepLocal_23 = var_1_9;
 if (stepLocal_24 > var_1_55) {
  if (var_1_20 != stepLocal_23) {
   var_1_74 = var_1_14;
  } else {
   var_1_74 = ((((var_1_13) < (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))) ? (var_1_13) : (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))));
  }
 } else {
  var_1_74 = ((((var_1_13) > ((var_1_18 - var_1_14))) ? (var_1_13) : ((var_1_18 - var_1_14))));
 }
 signed long int stepLocal_26 = last_1_var_1_102;
 if (var_1_27 < stepLocal_26) {
  var_1_80 = (((((100000000u + var_1_23)) > (last_1_var_1_19)) ? ((100000000u + var_1_23)) : (last_1_var_1_19)));
 } else {
  var_1_80 = ((((var_1_62) > (var_1_4)) ? (var_1_62) : (var_1_4)));
 }
 if (var_1_80 == var_1_8) {
  var_1_48 = ((var_1_17 > var_1_13) && (var_1_43 || var_1_42));
 } else {
  var_1_48 = (! var_1_31);
 }
 if (var_1_80 >= last_1_var_1_1) {
  var_1_1 = (var_1_4 - var_1_5);
 } else {
  if (((var_1_5 << var_1_4) / ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) <= (last_1_var_1_1 >> ((((var_1_8) > (10u)) ? (var_1_8) : (10u))))) {
   var_1_1 = (((((var_1_4) < (var_1_9)) ? (var_1_4) : (var_1_9))) - var_1_8);
  } else {
   if (-10 > (var_1_5 << last_1_var_1_1)) {
    var_1_1 = (((((var_1_5 + var_1_8)) > (var_1_4)) ? ((var_1_5 + var_1_8)) : (var_1_4)));
   }
  }
 }
 signed long int stepLocal_0 = var_1_7;
 if (var_1_48) {
  if (stepLocal_0 >= (var_1_5 / var_1_6)) {
   var_1_10 = var_1_12;
  } else {
   var_1_10 = (var_1_13 - var_1_14);
  }
 }
 if (var_1_48) {
  var_1_90 = 0;
 } else {
  var_1_90 = var_1_40;
 }
 signed long int stepLocal_28 = last_1_var_1_19;
 if (stepLocal_28 != var_1_59) {
  var_1_85 = ((((((last_1_var_1_101 + var_1_35) + (1422943038u - var_1_57))) > (var_1_21)) ? (((last_1_var_1_101 + var_1_35) + (1422943038u - var_1_57))) : (var_1_21)));
 } else {
  if (! last_1_var_1_84) {
   var_1_85 = (var_1_50 + 1u);
  } else {
   var_1_85 = ((((((((256u) < (var_1_35)) ? (256u) : (var_1_35)))) < (var_1_25)) ? (((((256u) < (var_1_35)) ? (256u) : (var_1_35)))) : (var_1_25)));
  }
 }
 var_1_15 = (((var_1_16 + var_1_17) + (var_1_18 - 16.8f)) + 7.375f);
 var_1_30 = (! var_1_31);
 if (var_1_12 < var_1_18) {
  var_1_32 = 0;
 }
 var_1_33 = ((var_1_34 + var_1_35) - var_1_80);
 if ((var_1_16 + var_1_18) >= var_1_13) {
  var_1_37 = ((((var_1_20) < (var_1_25)) ? (var_1_20) : (var_1_25)));
 }
 unsigned long int stepLocal_9 = var_1_9 - var_1_46;
 if ((((((var_1_8) < (var_1_23)) ? (var_1_8) : (var_1_23))) - ((((var_1_25) < (var_1_45)) ? (var_1_25) : (var_1_45)))) <= stepLocal_9) {
  var_1_51 = (((200 - var_1_20) + ((((32) < (var_1_25)) ? (32) : (var_1_25)))) + (((((var_1_23 - var_1_22)) > (var_1_21)) ? ((var_1_23 - var_1_22)) : (var_1_21))));
 } else {
  var_1_51 = (var_1_8 + var_1_20);
 }
 signed long int stepLocal_11 = var_1_25 - var_1_22;
 signed long int stepLocal_10 = var_1_50 * -100000000;
 if (stepLocal_11 == var_1_20) {
  var_1_52 = ((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23)));
 } else {
  if ((var_1_20 * (var_1_22 - var_1_45)) < stepLocal_10) {
   var_1_52 = var_1_23;
  }
 }
 unsigned char stepLocal_21 = var_1_48;
 if (! var_1_30) {
  var_1_65 = ((((var_1_58 + var_1_62) < 0 ) ? -(var_1_58 + var_1_62) : (var_1_58 + var_1_62)));
 } else {
  if ((var_1_5 >= var_1_57) || stepLocal_21) {
   var_1_65 = ((((var_1_57) < ((var_1_29 - var_1_59))) ? (var_1_57) : ((var_1_29 - var_1_59))));
  } else {
   var_1_65 = var_1_34;
  }
 }
 var_1_77 = ((((1.8f) > (((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (1.8f) : (((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))));
 var_1_87 = var_1_58;
 if (var_1_43) {
  var_1_88 = last_1_var_1_88;
 }
 var_1_89 = 4.75;
 var_1_91 = var_1_14;
 var_1_92 = var_1_12;
 var_1_93 = var_1_94;
 var_1_95 = var_1_16;
 var_1_96 = var_1_17;
 if (var_1_76) {
  var_1_98 = var_1_13;
 } else {
  var_1_98 = var_1_14;
 }
 if (var_1_48) {
  var_1_99 = var_1_25;
 } else {
  var_1_99 = var_1_4;
 }
 var_1_100 = var_1_50;
 signed long int stepLocal_30 = 10000 * var_1_26;
 if ((var_1_77 * (var_1_14 - 32.2)) < (var_1_18 - var_1_13)) {
  if (var_1_85 <= stepLocal_30) {
   var_1_102 = var_1_23;
  } else {
   var_1_102 = var_1_58;
  }
 } else {
  var_1_102 = var_1_22;
 }
 if (! var_1_90) {
  var_1_71 = ((var_1_42 || var_1_72) || (var_1_43 || var_1_73));
 }
 if (var_1_50 >= ((var_1_22 - var_1_62) * var_1_100)) {
  var_1_61 = ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > ((var_1_57 - (var_1_51 + var_1_21)))) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : ((var_1_57 - (var_1_51 + var_1_21)))));
 } else {
  var_1_61 = ((((((((var_1_21) > (var_1_55)) ? (var_1_21) : (var_1_55)))) > ((100 - var_1_85))) ? (((((var_1_21) > (var_1_55)) ? (var_1_21) : (var_1_55)))) : ((100 - var_1_85))));
 }
 signed long int stepLocal_7 = - var_1_7;
 unsigned char stepLocal_6 = var_1_48;
 if (stepLocal_7 >= (((((var_1_27) > (var_1_22)) ? (var_1_27) : (var_1_22))) - var_1_99)) {
  var_1_38 = (var_1_16 + var_1_17);
 } else {
  if (stepLocal_6 && (var_1_27 < var_1_35)) {
   var_1_38 = ((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)));
  }
 }
 if (var_1_38 > ((((var_1_98) > (var_1_13)) ? (var_1_98) : (var_1_13)))) {
  var_1_60 = ((((var_1_59 + (var_1_58 - 32)) < 0 ) ? -(var_1_59 + (var_1_58 - 32)) : (var_1_59 + (var_1_58 - 32))));
 } else {
  if (var_1_90 && var_1_40) {
   if ((0 & var_1_26) > var_1_34) {
    var_1_60 = (((((((((2 + var_1_58)) < (var_1_8)) ? ((2 + var_1_58)) : (var_1_8)))) > (var_1_59)) ? ((((((2 + var_1_58)) < (var_1_8)) ? ((2 + var_1_58)) : (var_1_8)))) : (var_1_59)));
   } else {
    var_1_60 = (var_1_20 - var_1_8);
   }
  } else {
   var_1_60 = ((((var_1_58) < (var_1_23)) ? (var_1_58) : (var_1_23)));
  }
 }
 unsigned long int stepLocal_25 = var_1_4;
 if (var_1_89 < var_1_14) {
  if (var_1_52 != stepLocal_25) {
   var_1_75 = (! var_1_73);
  } else {
   var_1_75 = var_1_76;
  }
 }
 var_1_79 = (-5 + var_1_87);
 unsigned long int stepLocal_27 = var_1_46;
 if (stepLocal_27 > var_1_56) {
  var_1_83 = (((var_1_81 + var_1_99) < var_1_88) || var_1_40);
 } else {
  var_1_83 = (! (! var_1_31));
 }
 if (var_1_75) {
  var_1_97 = var_1_37;
 } else {
  var_1_97 = var_1_100;
 }
 if (! (var_1_87 <= var_1_102)) {
  var_1_84 = (var_1_32 && (var_1_40 && var_1_43));
 }
 if (var_1_12 > var_1_14) {
  if (var_1_100 <= var_1_25) {
   if (var_1_27 != var_1_35) {
    var_1_39 = (last_1_var_1_39 || ((var_1_71 || var_1_31) && var_1_40));
   } else {
    var_1_39 = (last_1_var_1_39 && (! var_1_40));
   }
  } else {
   var_1_39 = (var_1_40 && var_1_31);
  }
 } else {
  if (((var_1_77 / var_1_41) * var_1_10) >= var_1_13) {
   var_1_39 = var_1_40;
  } else {
   var_1_39 = (var_1_42 || var_1_43);
  }
 }
 signed long int stepLocal_2 = var_1_7;
 unsigned long int stepLocal_1 = var_1_5;
 if (stepLocal_1 < (var_1_79 * var_1_7)) {
  var_1_19 = ((((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - (var_1_8 + var_1_22)) - var_1_23);
 } else {
  if (stepLocal_2 <= (var_1_85 | var_1_5)) {
   var_1_19 = (var_1_23 + var_1_8);
  }
 }
 if (var_1_75) {
  var_1_36 = 0.4;
 }
 unsigned short int stepLocal_8 = var_1_34;
 if (var_1_30) {
  if (var_1_5 < stepLocal_8) {
   var_1_49 = (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + ((((var_1_79) < (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_79) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))));
  } else {
   var_1_49 = (((((((25) > ((var_1_45 - var_1_22))) ? (25) : ((var_1_45 - var_1_22)))) < 0 ) ? -((((25) > ((var_1_45 - var_1_22))) ? (25) : ((var_1_45 - var_1_22)))) : ((((25) > ((var_1_45 - var_1_22))) ? (25) : ((var_1_45 - var_1_22))))));
  }
 } else {
  var_1_49 = ((var_1_79 - (var_1_50 - var_1_23)) + (var_1_20 - var_1_22));
 }
 if (var_1_31) {
  var_1_69 = ((((4u) < 0 ) ? -(4u) : (4u)));
 } else {
  if (var_1_84) {
   var_1_69 = ((var_1_46 + (var_1_47 + var_1_70)) - var_1_87);
  } else {
   var_1_69 = ((((var_1_20) > (((((var_1_21) < (var_1_56)) ? (var_1_21) : (var_1_56))))) ? (var_1_20) : (((((var_1_21) < (var_1_56)) ? (var_1_21) : (var_1_56))))));
  }
 }
 if (((var_1_80 * last_1_var_1_44) > var_1_35) && (var_1_26 != var_1_69)) {
  if (var_1_6 > var_1_26) {
   var_1_44 = ((((var_1_9) < (var_1_21)) ? (var_1_9) : (var_1_21)));
  } else {
   if (var_1_37 == (var_1_21 % (200 - var_1_45))) {
    var_1_44 = (((((var_1_27 + 25u)) > ((last_1_var_1_44 + 128u))) ? ((var_1_27 + 25u)) : ((last_1_var_1_44 + 128u))));
   } else {
    if (((2131045880u + var_1_46) - 64u) < (var_1_4 / var_1_20)) {
     var_1_44 = (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) - ((var_1_47 - 10u) + (1000000000u - var_1_22)));
    } else {
     var_1_44 = (var_1_35 + var_1_23);
    }
   }
  }
 } else {
  if (! var_1_42) {
   var_1_44 = var_1_35;
  } else {
   var_1_44 = var_1_21;
  }
 }
 if ((var_1_20 - var_1_44) == var_1_8) {
  var_1_24 = ((64 - var_1_22) - var_1_25);
 }
 unsigned long int stepLocal_29 = var_1_44;
 if (var_1_22 != stepLocal_29) {
  var_1_86 = ((((0) < (var_1_21)) ? (0) : (var_1_21)));
 } else {
  var_1_86 = var_1_23;
 }
 unsigned long int stepLocal_22 = (var_1_44 / var_1_59) / var_1_6;
 if ((var_1_81 + 5u) <= stepLocal_22) {
  var_1_67 = (! (var_1_31 && var_1_40));
 }
 unsigned long int stepLocal_20 = var_1_49 / var_1_8;
 unsigned char stepLocal_19 = var_1_67;
 if (! (0u <= var_1_87)) {
  if (stepLocal_19 || var_1_83) {
   if (stepLocal_20 > (((((128u) < (var_1_34)) ? (128u) : (var_1_34))) << var_1_23)) {
    var_1_63 = ((var_1_56 - 32) + var_1_25);
   }
  } else {
   var_1_63 = var_1_55;
  }
 } else {
  var_1_63 = (var_1_8 - ((((var_1_25) < (var_1_56)) ? (var_1_25) : (var_1_56))));
 }
 if (var_1_40) {
  if (! (var_1_90 || var_1_39)) {
   if (var_1_25 < var_1_50) {
    var_1_66 = (((((((var_1_25) > (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8))))) ? (var_1_25) : (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8)))))) < 0 ) ? -((((var_1_25) > (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8))))) ? (var_1_25) : (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8)))))) : ((((var_1_25) > (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8))))) ? (var_1_25) : (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8))))))));
   } else {
    var_1_66 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
   }
  }
 } else {
  if (var_1_86 >= var_1_47) {
   if (var_1_44 <= (~ (var_1_6 / var_1_34))) {
    var_1_66 = (((((5) < 0 ) ? -(5) : (5))) - var_1_55);
   } else {
    var_1_66 = ((((var_1_56) > (var_1_45)) ? (var_1_56) : (var_1_45)));
   }
  } else {
   var_1_66 = ((((var_1_8) > (((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))))) ? (var_1_8) : (((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))))));
  }
 }
 unsigned char stepLocal_12 = var_1_39;
 if (var_1_67 && stepLocal_12) {
  if (var_1_13 <= var_1_12) {
   var_1_53 = (var_1_81 + (var_1_52 - var_1_23));
  } else {
   var_1_53 = ((((50) > (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (50) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))));
  }
 } else {
  var_1_53 = ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)));
 }
 if (var_1_53 == (var_1_52 - var_1_85)) {
  var_1_78 = var_1_80;
 } else {
  var_1_78 = (var_1_61 + var_1_69);
 }
 unsigned char stepLocal_18 = (var_1_13 - var_1_14) != var_1_91;
 unsigned long int stepLocal_17 = var_1_47;
 unsigned long int stepLocal_16 = var_1_1;
 unsigned char stepLocal_15 = var_1_21;
 signed long int stepLocal_14 = var_1_51;
 unsigned long int stepLocal_13 = var_1_51 * (var_1_27 * var_1_9);
 if (stepLocal_14 < (((((((var_1_78) < (var_1_25)) ? (var_1_78) : (var_1_25))) < 0 ) ? -((((var_1_78) < (var_1_25)) ? (var_1_78) : (var_1_25))) : ((((var_1_78) < (var_1_25)) ? (var_1_78) : (var_1_25)))))) {
  if (var_1_78 <= stepLocal_17) {
   var_1_54 = (var_1_20 - ((var_1_55 + var_1_56) - (50 - 5)));
  } else {
   var_1_54 = ((((((var_1_57) > (64)) ? (var_1_57) : (64))) + var_1_58) - var_1_8);
  }
 } else {
  if ((-8 / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) <= stepLocal_15) {
   if (((var_1_85 | var_1_46) > var_1_69) || stepLocal_18) {
    if (var_1_56 == stepLocal_16) {
     if ((var_1_14 / var_1_41) < var_1_93) {
      if (stepLocal_13 <= (var_1_87 + var_1_23)) {
       var_1_54 = ((((((((8) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (8) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))) > (var_1_25)) ? (((((8) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (8) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))) : (var_1_25)));
      } else {
       if ((var_1_17 * var_1_18) <= 500.25f) {
        var_1_54 = ((var_1_58 + (var_1_56 + var_1_59)) - var_1_45);
       } else {
        var_1_54 = (var_1_21 - ((((var_1_58) < (((((var_1_57) < (var_1_8)) ? (var_1_57) : (var_1_8))))) ? (var_1_58) : (((((var_1_57) < (var_1_8)) ? (var_1_57) : (var_1_8)))))));
       }
      }
     }
    } else {
     var_1_54 = ((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) < 0 ) ? -((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) : ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) + ((((var_1_25) > (var_1_59)) ? (var_1_25) : (var_1_59))));
    }
   }
  } else {
   var_1_54 = ((var_1_20 - var_1_25) - ((((var_1_8) < (var_1_56)) ? (var_1_8) : (var_1_56))));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 2147483647);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 30);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -115292.1504606845700e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 1152921.504606845700e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -115292.1504606845700e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 1152921.504606845700e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 190);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 190);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 31);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1073741824);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 16383);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 16384);
 assume_abort_if_not(var_1_35 <= 32767);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 assume_abort_if_not(var_1_41 != 0.0F);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 126);
 assume_abort_if_not(var_1_45 != 127);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1073741824);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 536870912);
 assume_abort_if_not(var_1_47 <= 1073741824);
 var_1_50 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_50 >= 8191);
 assume_abort_if_not(var_1_50 <= 16383);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 31);
 assume_abort_if_not(var_1_55 <= 64);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 32);
 assume_abort_if_not(var_1_56 <= 63);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 63);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 64);
 assume_abort_if_not(var_1_58 <= 127);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 32);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_62 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 32767);
 var_1_70 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_70 >= 536870912);
 assume_abort_if_not(var_1_70 <= 1073741823);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 0);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 0);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 0);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 1073741823);
 assume_abort_if_not(var_1_82 <= 2147483647);
 var_1_94 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_94 >= -922337.2036854766000e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 9223372.036854766000e+12F && var_1_94 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_101 = var_1_101;
 last_1_var_1_102 = var_1_102;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_80 >= last_1_var_1_1) ? (var_1_1 == ((unsigned long int) (var_1_4 - var_1_5))) : ((((var_1_5 << var_1_4) / ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) <= (last_1_var_1_1 >> ((((var_1_8) > (10u)) ? (var_1_8) : (10u))))) ? (var_1_1 == ((unsigned long int) (((((var_1_4) < (var_1_9)) ? (var_1_4) : (var_1_9))) - var_1_8))) : ((-10 > (var_1_5 << last_1_var_1_1)) ? (var_1_1 == ((unsigned long int) (((((var_1_5 + var_1_8)) > (var_1_4)) ? ((var_1_5 + var_1_8)) : (var_1_4))))) : 1))) && (var_1_48 ? ((var_1_7 >= (var_1_5 / var_1_6)) ? (var_1_10 == ((double) var_1_12)) : (var_1_10 == ((double) (var_1_13 - var_1_14)))) : 1)) && (var_1_15 == ((float) (((var_1_16 + var_1_17) + (var_1_18 - 16.8f)) + 7.375f)))) && ((var_1_5 < (var_1_79 * var_1_7)) ? (var_1_19 == ((unsigned char) ((((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - (var_1_8 + var_1_22)) - var_1_23))) : ((var_1_7 <= (var_1_85 | var_1_5)) ? (var_1_19 == ((unsigned char) (var_1_23 + var_1_8))) : 1))) && (((var_1_20 - var_1_44) == var_1_8) ? (var_1_24 == ((signed char) ((64 - var_1_22) - var_1_25))) : 1)) && ((last_1_var_1_101 > ((var_1_27 + var_1_23) - var_1_22)) ? (last_1_var_1_84 ? ((! last_1_var_1_48) ? (var_1_26 == ((unsigned short int) (((((var_1_29 - var_1_25)) > (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? ((var_1_29 - var_1_25)) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))))) : ((last_1_var_1_48 || ((- last_1_var_1_74) <= 2.5)) ? (var_1_26 == ((unsigned short int) ((var_1_23 + var_1_21) + 128))) : (((var_1_29 + var_1_23) > var_1_22) ? ((var_1_14 <= var_1_17) ? (var_1_26 == ((unsigned short int) var_1_21)) : (var_1_26 == ((unsigned short int) var_1_29))) : 1))) : 1) : 1)) && (var_1_30 == ((unsigned char) (! var_1_31)))) && ((var_1_12 < var_1_18) ? (var_1_32 == ((unsigned char) 0)) : 1)) && (var_1_33 == ((unsigned short int) ((var_1_34 + var_1_35) - var_1_80)))) && (var_1_75 ? (var_1_36 == ((double) 0.4)) : 1)) && (((var_1_16 + var_1_18) >= var_1_13) ? (var_1_37 == ((unsigned char) ((((var_1_20) < (var_1_25)) ? (var_1_20) : (var_1_25))))) : 1)) && (((- var_1_7) >= (((((var_1_27) > (var_1_22)) ? (var_1_27) : (var_1_22))) - var_1_99)) ? (var_1_38 == ((float) (var_1_16 + var_1_17))) : ((var_1_48 && (var_1_27 < var_1_35)) ? (var_1_38 == ((float) ((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12))))) : 1))) && ((var_1_12 > var_1_14) ? ((var_1_100 <= var_1_25) ? ((var_1_27 != var_1_35) ? (var_1_39 == ((unsigned char) (last_1_var_1_39 || ((var_1_71 || var_1_31) && var_1_40)))) : (var_1_39 == ((unsigned char) (last_1_var_1_39 && (! var_1_40))))) : (var_1_39 == ((unsigned char) (var_1_40 && var_1_31)))) : ((((var_1_77 / var_1_41) * var_1_10) >= var_1_13) ? (var_1_39 == ((unsigned char) var_1_40)) : (var_1_39 == ((unsigned char) (var_1_42 || var_1_43)))))) && ((((var_1_80 * last_1_var_1_44) > var_1_35) && (var_1_26 != var_1_69)) ? ((var_1_6 > var_1_26) ? (var_1_44 == ((unsigned long int) ((((var_1_9) < (var_1_21)) ? (var_1_9) : (var_1_21))))) : ((var_1_37 == (var_1_21 % (200 - var_1_45))) ? (var_1_44 == ((unsigned long int) (((((var_1_27 + 25u)) > ((last_1_var_1_44 + 128u))) ? ((var_1_27 + 25u)) : ((last_1_var_1_44 + 128u)))))) : ((((2131045880u + var_1_46) - 64u) < (var_1_4 / var_1_20)) ? (var_1_44 == ((unsigned long int) (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) - ((var_1_47 - 10u) + (1000000000u - var_1_22))))) : (var_1_44 == ((unsigned long int) (var_1_35 + var_1_23)))))) : ((! var_1_42) ? (var_1_44 == ((unsigned long int) var_1_35)) : (var_1_44 == ((unsigned long int) var_1_21))))) && ((var_1_80 == var_1_8) ? (var_1_48 == ((unsigned char) ((var_1_17 > var_1_13) && (var_1_43 || var_1_42)))) : (var_1_48 == ((unsigned char) (! var_1_31))))) && (var_1_30 ? ((var_1_5 < var_1_34) ? (var_1_49 == ((signed short int) (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) + ((((var_1_79) < (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) ? (var_1_79) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))))) : (var_1_49 == ((signed short int) (((((((25) > ((var_1_45 - var_1_22))) ? (25) : ((var_1_45 - var_1_22)))) < 0 ) ? -((((25) > ((var_1_45 - var_1_22))) ? (25) : ((var_1_45 - var_1_22)))) : ((((25) > ((var_1_45 - var_1_22))) ? (25) : ((var_1_45 - var_1_22))))))))) : (var_1_49 == ((signed short int) ((var_1_79 - (var_1_50 - var_1_23)) + (var_1_20 - var_1_22)))))) && (((((((var_1_8) < (var_1_23)) ? (var_1_8) : (var_1_23))) - ((((var_1_25) < (var_1_45)) ? (var_1_25) : (var_1_45)))) <= (var_1_9 - var_1_46)) ? (var_1_51 == ((signed long int) (((200 - var_1_20) + ((((32) < (var_1_25)) ? (32) : (var_1_25)))) + (((((var_1_23 - var_1_22)) > (var_1_21)) ? ((var_1_23 - var_1_22)) : (var_1_21)))))) : (var_1_51 == ((signed long int) (var_1_8 + var_1_20))))) && (((var_1_25 - var_1_22) == var_1_20) ? (var_1_52 == ((unsigned char) ((((var_1_20) > (var_1_23)) ? (var_1_20) : (var_1_23))))) : (((var_1_20 * (var_1_22 - var_1_45)) < (var_1_50 * -100000000)) ? (var_1_52 == ((unsigned char) var_1_23)) : 1))) && ((var_1_67 && var_1_39) ? ((var_1_13 <= var_1_12) ? (var_1_53 == ((signed long int) (var_1_81 + (var_1_52 - var_1_23)))) : (var_1_53 == ((signed long int) ((((50) > (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) ? (50) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))))) : (var_1_53 == ((signed long int) ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))))) && ((var_1_51 < (((((((var_1_78) < (var_1_25)) ? (var_1_78) : (var_1_25))) < 0 ) ? -((((var_1_78) < (var_1_25)) ? (var_1_78) : (var_1_25))) : ((((var_1_78) < (var_1_25)) ? (var_1_78) : (var_1_25)))))) ? ((var_1_78 <= var_1_47) ? (var_1_54 == ((unsigned char) (var_1_20 - ((var_1_55 + var_1_56) - (50 - 5))))) : (var_1_54 == ((unsigned char) ((((((var_1_57) > (64)) ? (var_1_57) : (64))) + var_1_58) - var_1_8)))) : (((-8 / ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) <= var_1_21) ? ((((var_1_85 | var_1_46) > var_1_69) || ((var_1_13 - var_1_14) != var_1_91)) ? ((var_1_56 == var_1_1) ? (((var_1_14 / var_1_41) < var_1_93) ? (((var_1_51 * (var_1_27 * var_1_9)) <= (var_1_87 + var_1_23)) ? (var_1_54 == ((unsigned char) ((((((((8) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (8) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))) > (var_1_25)) ? (((((8) > (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) ? (8) : (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))) : (var_1_25))))) : (((var_1_17 * var_1_18) <= 500.25f) ? (var_1_54 == ((unsigned char) ((var_1_58 + (var_1_56 + var_1_59)) - var_1_45))) : (var_1_54 == ((unsigned char) (var_1_21 - ((((var_1_58) < (((((var_1_57) < (var_1_8)) ? (var_1_57) : (var_1_8))))) ? (var_1_58) : (((((var_1_57) < (var_1_8)) ? (var_1_57) : (var_1_8))))))))))) : 1) : (var_1_54 == ((unsigned char) ((((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) < 0 ) ? -((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) : ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))) + ((((var_1_25) > (var_1_59)) ? (var_1_25) : (var_1_59))))))) : 1) : (var_1_54 == ((unsigned char) ((var_1_20 - var_1_25) - ((((var_1_8) < (var_1_56)) ? (var_1_8) : (var_1_56))))))))) && ((var_1_38 > ((((var_1_98) > (var_1_13)) ? (var_1_98) : (var_1_13)))) ? (var_1_60 == ((unsigned char) ((((var_1_59 + (var_1_58 - 32)) < 0 ) ? -(var_1_59 + (var_1_58 - 32)) : (var_1_59 + (var_1_58 - 32)))))) : ((var_1_90 && var_1_40) ? (((0 & var_1_26) > var_1_34) ? (var_1_60 == ((unsigned char) (((((((((2 + var_1_58)) < (var_1_8)) ? ((2 + var_1_58)) : (var_1_8)))) > (var_1_59)) ? ((((((2 + var_1_58)) < (var_1_8)) ? ((2 + var_1_58)) : (var_1_8)))) : (var_1_59))))) : (var_1_60 == ((unsigned char) (var_1_20 - var_1_8)))) : (var_1_60 == ((unsigned char) ((((var_1_58) < (var_1_23)) ? (var_1_58) : (var_1_23)))))))) && ((var_1_50 >= ((var_1_22 - var_1_62) * var_1_100)) ? (var_1_61 == ((signed short int) ((((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) > ((var_1_57 - (var_1_51 + var_1_21)))) ? (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) : ((var_1_57 - (var_1_51 + var_1_21))))))) : (var_1_61 == ((signed short int) ((((((((var_1_21) > (var_1_55)) ? (var_1_21) : (var_1_55)))) > ((100 - var_1_85))) ? (((((var_1_21) > (var_1_55)) ? (var_1_21) : (var_1_55)))) : ((100 - var_1_85)))))))) && ((! (0u <= var_1_87)) ? ((var_1_67 || var_1_83) ? (((var_1_49 / var_1_8) > (((((128u) < (var_1_34)) ? (128u) : (var_1_34))) << var_1_23)) ? (var_1_63 == ((signed char) ((var_1_56 - 32) + var_1_25))) : 1) : (var_1_63 == ((signed char) var_1_55))) : (var_1_63 == ((signed char) (var_1_8 - ((((var_1_25) < (var_1_56)) ? (var_1_25) : (var_1_56)))))))) && ((! var_1_30) ? (var_1_65 == ((unsigned short int) ((((var_1_58 + var_1_62) < 0 ) ? -(var_1_58 + var_1_62) : (var_1_58 + var_1_62))))) : (((var_1_5 >= var_1_57) || var_1_48) ? (var_1_65 == ((unsigned short int) ((((var_1_57) < ((var_1_29 - var_1_59))) ? (var_1_57) : ((var_1_29 - var_1_59)))))) : (var_1_65 == ((unsigned short int) var_1_34))))) && (var_1_40 ? ((! (var_1_90 || var_1_39)) ? ((var_1_25 < var_1_50) ? (var_1_66 == ((signed char) (((((((var_1_25) > (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8))))) ? (var_1_25) : (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8)))))) < 0 ) ? -((((var_1_25) > (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8))))) ? (var_1_25) : (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8)))))) : ((((var_1_25) > (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8))))) ? (var_1_25) : (((((var_1_59) < (var_1_8)) ? (var_1_59) : (var_1_8)))))))))) : (var_1_66 == ((signed char) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) : 1) : ((var_1_86 >= var_1_47) ? ((var_1_44 <= (~ (var_1_6 / var_1_34))) ? (var_1_66 == ((signed char) (((((5) < 0 ) ? -(5) : (5))) - var_1_55))) : (var_1_66 == ((signed char) ((((var_1_56) > (var_1_45)) ? (var_1_56) : (var_1_45)))))) : (var_1_66 == ((signed char) ((((var_1_8) > (((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))))) ? (var_1_8) : (((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))))))))))) && (((var_1_81 + 5u) <= ((var_1_44 / var_1_59) / var_1_6)) ? (var_1_67 == ((unsigned char) (! (var_1_31 && var_1_40)))) : 1)) && (var_1_31 ? (var_1_69 == ((unsigned long int) ((((4u) < 0 ) ? -(4u) : (4u))))) : (var_1_84 ? (var_1_69 == ((unsigned long int) ((var_1_46 + (var_1_47 + var_1_70)) - var_1_87))) : (var_1_69 == ((unsigned long int) ((((var_1_20) > (((((var_1_21) < (var_1_56)) ? (var_1_21) : (var_1_56))))) ? (var_1_20) : (((((var_1_21) < (var_1_56)) ? (var_1_21) : (var_1_56))))))))))) && ((! var_1_90) ? (var_1_71 == ((unsigned char) ((var_1_42 || var_1_72) || (var_1_43 || var_1_73)))) : 1)) && ((var_1_81 > var_1_55) ? ((var_1_20 != var_1_9) ? (var_1_74 == ((double) var_1_14)) : (var_1_74 == ((double) ((((var_1_13) < (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))) ? (var_1_13) : (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))))))) : (var_1_74 == ((double) ((((var_1_13) > ((var_1_18 - var_1_14))) ? (var_1_13) : ((var_1_18 - var_1_14)))))))) && ((var_1_89 < var_1_14) ? ((var_1_52 != var_1_4) ? (var_1_75 == ((unsigned char) (! var_1_73))) : (var_1_75 == ((unsigned char) var_1_76))) : 1)) && (var_1_77 == ((float) ((((1.8f) > (((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))) ? (1.8f) : (((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18))))))))) && ((var_1_53 == (var_1_52 - var_1_85)) ? (var_1_78 == ((signed short int) var_1_80)) : (var_1_78 == ((signed short int) (var_1_61 + var_1_69))))) && (var_1_79 == ((signed long int) (-5 + var_1_87)))) && ((var_1_27 < last_1_var_1_102) ? (var_1_80 == ((unsigned long int) (((((100000000u + var_1_23)) > (last_1_var_1_19)) ? ((100000000u + var_1_23)) : (last_1_var_1_19))))) : (var_1_80 == ((unsigned long int) ((((var_1_62) > (var_1_4)) ? (var_1_62) : (var_1_4))))))) && (var_1_81 == ((unsigned long int) ((var_1_82 + var_1_46) - last_1_var_1_54)))) && ((var_1_46 > var_1_56) ? (var_1_83 == ((unsigned char) (((var_1_81 + var_1_99) < var_1_88) || var_1_40))) : (var_1_83 == ((unsigned char) (! (! var_1_31)))))) && ((! (var_1_87 <= var_1_102)) ? (var_1_84 == ((unsigned char) (var_1_32 && (var_1_40 && var_1_43)))) : 1)) && ((last_1_var_1_19 != var_1_59) ? (var_1_85 == ((unsigned long int) ((((((last_1_var_1_101 + var_1_35) + (1422943038u - var_1_57))) > (var_1_21)) ? (((last_1_var_1_101 + var_1_35) + (1422943038u - var_1_57))) : (var_1_21))))) : ((! last_1_var_1_84) ? (var_1_85 == ((unsigned long int) (var_1_50 + 1u))) : (var_1_85 == ((unsigned long int) ((((((((256u) < (var_1_35)) ? (256u) : (var_1_35)))) < (var_1_25)) ? (((((256u) < (var_1_35)) ? (256u) : (var_1_35)))) : (var_1_25)))))))) && ((var_1_22 != var_1_44) ? (var_1_86 == ((unsigned short int) ((((0) < (var_1_21)) ? (0) : (var_1_21))))) : (var_1_86 == ((unsigned short int) var_1_23)))) && (var_1_87 == ((unsigned long int) var_1_58))) && (var_1_43 ? (var_1_88 == ((unsigned short int) last_1_var_1_88)) : 1)) && (var_1_89 == ((double) 4.75))) && (var_1_48 ? (var_1_90 == ((unsigned char) 0)) : (var_1_90 == ((unsigned char) var_1_40)))) && (var_1_91 == ((double) var_1_14))) && (var_1_92 == ((float) var_1_12))) && (var_1_93 == ((double) var_1_94))) && (var_1_95 == ((float) var_1_16))) && (var_1_96 == ((float) var_1_17))) && (var_1_75 ? (var_1_97 == ((signed short int) var_1_37)) : (var_1_97 == ((signed short int) var_1_100)))) && (var_1_76 ? (var_1_98 == ((double) var_1_13)) : (var_1_98 == ((double) var_1_14)))) && (var_1_48 ? (var_1_99 == ((unsigned long int) var_1_25)) : (var_1_99 == ((unsigned long int) var_1_4)))) && (var_1_100 == ((unsigned short int) var_1_50))) && (var_1_101 == ((signed long int) var_1_26))) && (((var_1_77 * (var_1_14 - 32.2)) < (var_1_18 - var_1_13)) ? ((var_1_85 <= (10000 * var_1_26)) ? (var_1_102 == ((unsigned char) var_1_23)) : (var_1_102 == ((unsigned char) var_1_58))) : (var_1_102 == ((unsigned char) var_1_22)))
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
