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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 31.7;
double var_1_3 = 1.0350000000000001;
unsigned short int var_1_4 = 8;
unsigned short int var_1_11 = 26575;
signed long int var_1_13 = 25;
signed short int var_1_14 = 64;
signed long int var_1_15 = -32;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 8;
signed long int var_1_20 = -128;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
float var_1_26 = 5.6;
float var_1_27 = 999.76;
float var_1_28 = 0.0;
float var_1_29 = 255.5;
unsigned short int var_1_30 = 0;
signed long int var_1_31 = -16;
unsigned short int var_1_32 = 25;
unsigned short int var_1_34 = 43569;
unsigned short int var_1_35 = 61430;
unsigned short int var_1_36 = 60322;
unsigned short int var_1_37 = 54308;
unsigned long int var_1_38 = 0;
double var_1_39 = 128.6;
double var_1_40 = 5.75;
double var_1_41 = 16.625;
unsigned char var_1_42 = 8;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 128;
unsigned char var_1_45 = 10;
unsigned char var_1_46 = 0;
signed short int var_1_47 = 128;
signed short int var_1_48 = 21321;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned long int var_1_51 = 100000;
unsigned long int var_1_52 = 3095251641;
float var_1_53 = 4.2;
float var_1_54 = 9.125;
float var_1_55 = 1.5;
float var_1_56 = 10000000000000.75;
float var_1_57 = 63.25;
unsigned short int var_1_58 = 10;
float var_1_59 = 5.125;
float var_1_61 = 999999.5;
float var_1_62 = 16.5;
double var_1_63 = 8.5;
unsigned short int var_1_64 = 100;
signed short int var_1_65 = 4;
signed long int var_1_66 = 100;
unsigned char var_1_68 = 32;
unsigned char var_1_70 = 64;
unsigned char var_1_71 = 64;
unsigned char var_1_72 = 50;
signed short int var_1_73 = -16;
double var_1_74 = 99999999999.6;
double var_1_75 = 1000000000.6;
double var_1_76 = 32.5;
unsigned short int var_1_77 = 16;
float var_1_78 = 7.7;
unsigned long int var_1_79 = 1;
signed char var_1_80 = 4;
signed long int var_1_81 = 500;
signed short int var_1_82 = 128;
double var_1_83 = 0.35;
unsigned char var_1_84 = 5;
unsigned char var_1_85 = 50;
unsigned char var_1_86 = 5;
unsigned char var_1_87 = 100;
unsigned char var_1_88 = 128;
float var_1_89 = 49.8;
float var_1_90 = 10.4;
unsigned short int var_1_91 = 5;
unsigned short int var_1_93 = 10;
float var_1_94 = 127.2;
unsigned short int var_1_95 = 8;
signed short int var_1_96 = -50;
unsigned char var_1_97 = 1;
unsigned short int var_1_98 = 10000;
unsigned long int var_1_99 = 1000000000;
unsigned char var_1_100 = 0;
unsigned long int var_1_101 = 4;
signed long int var_1_102 = 5;
signed char var_1_103 = 1;
unsigned char var_1_104 = 0;
float var_1_105 = 9.625;
signed short int var_1_106 = 16;
float var_1_107 = 2.5;
signed short int var_1_108 = -256;
unsigned char var_1_109 = 1;
unsigned long int var_1_110 = 32;
unsigned short int last_1_var_1_4 = 8;
unsigned char last_1_var_1_16 = 10;
signed long int last_1_var_1_31 = -16;
unsigned short int last_1_var_1_32 = 25;
unsigned char last_1_var_1_43 = 1;
float last_1_var_1_62 = 16.5;
signed long int last_1_var_1_66 = 100;
unsigned short int last_1_var_1_77 = 16;
signed short int last_1_var_1_82 = 128;
double last_1_var_1_83 = 0.35;
unsigned char last_1_var_1_84 = 5;
unsigned short int last_1_var_1_91 = 5;
unsigned short int last_1_var_1_93 = 10;
signed short int last_1_var_1_96 = -50;
unsigned char last_1_var_1_109 = 1;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_17 = var_1_48;
 if (stepLocal_17 != (last_1_var_1_43 / var_1_44)) {
  var_1_66 = (last_1_var_1_82 + (((((var_1_17 - last_1_var_1_84)) > (var_1_35)) ? ((var_1_17 - last_1_var_1_84)) : (var_1_35))));
 } else {
  var_1_66 = (last_1_var_1_16 + 1);
 }
 signed long int stepLocal_16 = last_1_var_1_66;
 if (last_1_var_1_83 < var_1_29) {
  var_1_65 = ((((var_1_19 - last_1_var_1_32) < 0 ) ? -(var_1_19 - last_1_var_1_32) : (var_1_19 - last_1_var_1_32)));
 } else {
  if (stepLocal_16 > (var_1_18 + (var_1_44 - var_1_45))) {
   var_1_65 = ((((var_1_48) > (var_1_18)) ? (var_1_48) : (var_1_18)));
  } else {
   var_1_65 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
  }
 }
 signed long int stepLocal_10 = var_1_19 / var_1_34;
 if (! (last_1_var_1_96 > last_1_var_1_96)) {
  var_1_46 = (! var_1_23);
 } else {
  if (last_1_var_1_91 <= stepLocal_10) {
   var_1_46 = (last_1_var_1_109 || var_1_25);
  } else {
   if (var_1_28 >= var_1_27) {
    var_1_46 = (((var_1_19 * last_1_var_1_77) == (~ last_1_var_1_4)) && (! var_1_25));
   } else {
    var_1_46 = (var_1_24 && (! (! var_1_23)));
   }
  }
 }
 if ((last_1_var_1_16 + (last_1_var_1_84 - var_1_11)) == (16 & last_1_var_1_16)) {
  var_1_16 = ((((var_1_17) < (5)) ? (var_1_17) : (5)));
 } else {
  var_1_16 = (var_1_18 - var_1_19);
 }
 signed long int stepLocal_19 = last_1_var_1_43;
 unsigned char stepLocal_18 = last_1_var_1_109;
 if ((last_1_var_1_93 / -10) < stepLocal_19) {
  if (var_1_61 <= last_1_var_1_62) {
   var_1_68 = (((((5 + ((((var_1_45) < (var_1_19)) ? (var_1_45) : (var_1_19))))) > (var_1_18)) ? ((5 + ((((var_1_45) < (var_1_19)) ? (var_1_45) : (var_1_19))))) : (var_1_18)));
  } else {
   var_1_68 = (var_1_44 - var_1_19);
  }
 } else {
  if (last_1_var_1_109 && stepLocal_18) {
   var_1_68 = ((var_1_70 + var_1_71) - var_1_19);
  } else {
   if (var_1_61 < (- (var_1_26 - var_1_29))) {
    var_1_68 = (var_1_45 + var_1_19);
   } else {
    var_1_68 = ((64 + ((((var_1_71) < (64)) ? (var_1_71) : (64)))) - (var_1_70 - var_1_72));
   }
  }
 }
 if (var_1_50) {
  var_1_101 = var_1_68;
 }
 var_1_110 = var_1_101;
 unsigned short int stepLocal_9 = var_1_37;
 if (stepLocal_9 <= (var_1_35 - (var_1_11 - var_1_19))) {
  var_1_43 = ((((var_1_18 - var_1_19) < 0 ) ? -(var_1_18 - var_1_19) : (var_1_18 - var_1_19)));
 } else {
  var_1_43 = ((((((((((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) < (var_1_18)) ? (((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) : (var_1_18)))) > ((var_1_44 - var_1_45))) ? (((((((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) < (var_1_18)) ? (((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) : (var_1_18)))) : ((var_1_44 - var_1_45))));
 }
 if ((var_1_29 - var_1_54) >= (var_1_41 * var_1_27)) {
  var_1_53 = (var_1_40 + var_1_41);
 }
 var_1_55 = (((127.8f + 1.00000000006E10f) - (var_1_56 + var_1_57)) + 1.6f);
 if (var_1_44 >= (var_1_19 / var_1_70)) {
  var_1_79 = ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)));
 }
 var_1_80 = (2 - var_1_72);
 var_1_93 = last_1_var_1_93;
 if (var_1_50) {
  var_1_95 = var_1_71;
 } else {
  var_1_95 = var_1_48;
 }
 var_1_97 = var_1_87;
 var_1_98 = 64;
 if (var_1_24) {
  var_1_99 = var_1_71;
 } else {
  var_1_99 = var_1_43;
 }
 var_1_100 = var_1_50;
 var_1_105 = var_1_29;
 if (var_1_70 <= (var_1_34 + var_1_99)) {
  var_1_107 = ((((var_1_40) < (3.5f)) ? (var_1_40) : (3.5f)));
 } else {
  var_1_107 = (var_1_56 + (var_1_40 + var_1_57));
 }
 var_1_109 = var_1_50;
 if (var_1_46) {
  var_1_14 = (((((var_1_43) < (var_1_68)) ? (var_1_43) : (var_1_68))) - (var_1_95 + var_1_110));
 }
 if (! (var_1_50 && var_1_46)) {
  var_1_77 = ((((var_1_99) > (var_1_44)) ? (var_1_99) : (var_1_44)));
 }
 var_1_15 = (var_1_43 + var_1_68);
 if (var_1_109) {
  var_1_1 = (4.2 - ((((9.5) > (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? (9.5) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))));
 } else {
  var_1_1 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
 }
 var_1_13 = ((((var_1_95) < 0 ) ? -(var_1_95) : (var_1_95)));
 var_1_30 = ((((var_1_97) < ((55371 - var_1_18))) ? (var_1_97) : ((55371 - var_1_18))));
 if (var_1_109) {
  var_1_42 = (var_1_18 - var_1_19);
 }
 if (var_1_61 > var_1_56) {
  var_1_81 = var_1_15;
 }
 if (var_1_107 <= (- var_1_26)) {
  var_1_89 = ((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) < ((((((var_1_57) < (7.5f)) ? (var_1_57) : (7.5f))) + (var_1_56 - var_1_90)))) ? (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : ((((((var_1_57) < (7.5f)) ? (var_1_57) : (7.5f))) + (var_1_56 - var_1_90)))));
 }
 if (var_1_100) {
  var_1_96 = var_1_48;
 } else {
  var_1_96 = var_1_72;
 }
 if (var_1_109) {
  var_1_104 = var_1_25;
 } else {
  var_1_104 = var_1_50;
 }
 var_1_108 = var_1_14;
 unsigned short int stepLocal_6 = var_1_35;
 if (var_1_13 > stepLocal_6) {
  if (var_1_104) {
   var_1_38 = var_1_36;
  } else {
   var_1_38 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
  }
 }
 if (var_1_104 || var_1_25) {
  var_1_49 = (var_1_23 || var_1_24);
 } else {
  var_1_49 = (var_1_24 || (! (! var_1_50)));
 }
 if (var_1_49) {
  var_1_58 = (var_1_43 + ((((var_1_43) < ((var_1_11 - 8))) ? (var_1_43) : ((var_1_11 - 8)))));
 } else {
  var_1_58 = ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)));
 }
 if (var_1_49) {
  var_1_94 = var_1_29;
 } else {
  var_1_94 = var_1_61;
 }
 signed short int stepLocal_11 = var_1_48;
 if (stepLocal_11 >= var_1_15) {
  if (var_1_23) {
   var_1_51 = (var_1_66 + var_1_58);
  } else {
   if (! var_1_24) {
    var_1_51 = (var_1_101 + var_1_42);
   } else {
    var_1_51 = (var_1_14 + ((((var_1_95) > (var_1_36)) ? (var_1_95) : (var_1_36))));
   }
  }
 } else {
  if (var_1_49) {
   var_1_51 = (var_1_52 - var_1_48);
  } else {
   var_1_51 = (((((var_1_11) > (var_1_36)) ? (var_1_11) : (var_1_36))) + (var_1_101 + var_1_42));
  }
 }
 if (var_1_109) {
  if (var_1_49) {
   var_1_20 = (var_1_43 + var_1_66);
  } else {
   var_1_20 = 128;
  }
 } else {
  var_1_20 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
 }
 if (((((var_1_36) > (var_1_70)) ? (var_1_36) : (var_1_70))) <= (var_1_11 / var_1_48)) {
  if (var_1_104 || (var_1_23 && var_1_109)) {
   if (! (var_1_57 > var_1_26)) {
    var_1_82 = (var_1_30 + last_1_var_1_82);
   } else {
    var_1_82 = (var_1_48 - var_1_70);
   }
  } else {
   if (var_1_104 || var_1_109) {
    var_1_82 = (64 - var_1_17);
   } else {
    if (var_1_98 != var_1_72) {
     var_1_82 = ((((((((var_1_20) < (256)) ? (var_1_20) : (256)))) > (var_1_72)) ? (((((var_1_20) < (256)) ? (var_1_20) : (256)))) : (var_1_72)));
    } else {
     var_1_82 = (var_1_72 - (var_1_48 - ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))));
    }
   }
  }
 } else {
  var_1_82 = var_1_16;
 }
 unsigned short int stepLocal_3 = var_1_93;
 unsigned char stepLocal_2 = var_1_104;
 if (((var_1_11 & var_1_65) <= (-25 * var_1_51)) && stepLocal_2) {
  if (var_1_104) {
   var_1_22 = ((var_1_100 && var_1_23) || var_1_24);
  } else {
   var_1_22 = (! (var_1_100 || var_1_25));
  }
 } else {
  if (var_1_68 >= stepLocal_3) {
   if (((var_1_26 + var_1_27) - (var_1_28 - var_1_29)) > var_1_3) {
    var_1_22 = var_1_25;
   } else {
    var_1_22 = (! var_1_25);
   }
  } else {
   var_1_22 = (var_1_23 || var_1_25);
  }
 }
 if ((var_1_23 && var_1_22) && var_1_46) {
  if ((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - 0.2f) >= var_1_29) {
   var_1_83 = ((var_1_40 + var_1_57) + 64.25);
  } else {
   var_1_83 = (var_1_26 - var_1_29);
  }
 }
 unsigned char stepLocal_8 = var_1_19;
 unsigned char stepLocal_7 = var_1_23;
 if (stepLocal_8 == var_1_35) {
  var_1_39 = 63.8;
 } else {
  if (stepLocal_7 || var_1_49) {
   var_1_39 = ((((((((var_1_27 - var_1_26)) > (var_1_29)) ? ((var_1_27 - var_1_26)) : (var_1_29))) < 0 ) ? -(((((var_1_27 - var_1_26)) > (var_1_29)) ? ((var_1_27 - var_1_26)) : (var_1_29))) : (((((var_1_27 - var_1_26)) > (var_1_29)) ? ((var_1_27 - var_1_26)) : (var_1_29)))));
  } else {
   var_1_39 = ((var_1_40 + 127.5) + var_1_41);
  }
 }
 if (var_1_17 > (var_1_82 % var_1_44)) {
  var_1_78 = (var_1_57 - var_1_27);
 }
 if (var_1_23) {
  var_1_102 = var_1_20;
 } else {
  var_1_102 = var_1_45;
 }
 if (var_1_22) {
  var_1_103 = var_1_86;
 }
 if (var_1_49) {
  var_1_106 = var_1_42;
 } else {
  var_1_106 = var_1_20;
 }
 unsigned char stepLocal_24 = var_1_17;
 signed long int stepLocal_23 = var_1_68 / ((((4) > (-64)) ? (4) : (-64)));
 unsigned char stepLocal_22 = var_1_19;
 signed long int stepLocal_21 = ((((-128 + var_1_45)) > ((var_1_11 - var_1_34))) ? ((-128 + var_1_45)) : ((var_1_11 - var_1_34)));
 if (stepLocal_24 < (var_1_14 + (var_1_58 / var_1_71))) {
  if ((var_1_72 - var_1_19) > stepLocal_21) {
   var_1_84 = (128 - (var_1_72 + (var_1_85 - var_1_86)));
  } else {
   if (var_1_104) {
    var_1_84 = var_1_18;
   } else {
    if ((last_1_var_1_84 ^ var_1_51) <= stepLocal_22) {
     var_1_84 = ((((var_1_18) > (((((var_1_17) > (var_1_45)) ? (var_1_17) : (var_1_45))))) ? (var_1_18) : (((((var_1_17) > (var_1_45)) ? (var_1_17) : (var_1_45))))));
    }
   }
  }
 } else {
  if (((var_1_96 + var_1_14) * (var_1_16 * var_1_86)) >= stepLocal_23) {
   if (! var_1_46) {
    var_1_84 = ((((((var_1_71 + var_1_87)) > (var_1_88)) ? ((var_1_71 + var_1_87)) : (var_1_88))) - var_1_19);
   } else {
    var_1_84 = ((((100) > (2)) ? (100) : (2)));
   }
  } else {
   var_1_84 = ((8 + var_1_86) + var_1_87);
  }
 }
 unsigned char stepLocal_5 = var_1_97;
 if (var_1_29 == var_1_3) {
  var_1_32 = ((var_1_11 - ((((var_1_84) < (var_1_19)) ? (var_1_84) : (var_1_19)))) + var_1_65);
 } else {
  if (var_1_58 <= stepLocal_5) {
   var_1_32 = (((((var_1_34) > (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) ? (var_1_34) : (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))))) - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))));
  } else {
   var_1_32 = ((((((var_1_37 - 16)) < (var_1_36)) ? ((var_1_37 - 16)) : (var_1_36))) - (((((var_1_11 - var_1_17)) < (var_1_42)) ? ((var_1_11 - var_1_17)) : (var_1_42))));
  }
 }
 signed long int stepLocal_1 = ((((32 * var_1_95)) > (var_1_93)) ? ((32 * var_1_95)) : (var_1_93));
 unsigned char stepLocal_0 = var_1_84 <= (var_1_68 + var_1_95);
 if (! var_1_49) {
  if (stepLocal_1 <= var_1_65) {
   var_1_4 = ((var_1_95 + (var_1_93 + var_1_43)) + ((((var_1_68) > (var_1_84)) ? (var_1_68) : (var_1_84))));
  } else {
   if (stepLocal_0 || (var_1_43 < (var_1_93 % 25))) {
    var_1_4 = ((var_1_43 + var_1_95) + (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - var_1_93));
   } else {
    var_1_4 = ((var_1_95 + var_1_93) + ((var_1_43 + var_1_43) + 1));
   }
  }
 } else {
  var_1_4 = var_1_95;
 }
 unsigned char stepLocal_25 = var_1_19;
 if (stepLocal_25 < var_1_32) {
  var_1_91 = var_1_35;
 } else {
  var_1_91 = var_1_16;
 }
 if (var_1_28 < var_1_40) {
  if (var_1_49) {
   var_1_47 = (var_1_84 + var_1_44);
  }
 } else {
  var_1_47 = (var_1_16 - (var_1_48 - 25));
 }
 signed long int stepLocal_13 = (var_1_44 / var_1_11) * (var_1_18 * var_1_4);
 if (var_1_22) {
  if (stepLocal_13 < var_1_47) {
   var_1_62 = ((((var_1_41) < (((7.8f - 32.8f) + var_1_40))) ? (var_1_41) : (((7.8f - 32.8f) + var_1_40))));
  }
 } else {
  var_1_62 = (var_1_56 + 99.125f);
 }
 unsigned char stepLocal_4 = var_1_17;
 if (var_1_28 <= (var_1_107 + ((((var_1_3) > (var_1_27)) ? (var_1_3) : (var_1_27))))) {
  var_1_31 = (var_1_84 + last_1_var_1_31);
 } else {
  if (stepLocal_4 <= ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) {
   var_1_31 = 0;
  } else {
   var_1_31 = -16;
  }
 }
 signed long int stepLocal_14 = var_1_15;
 if (var_1_102 < stepLocal_14) {
  var_1_63 = (var_1_56 + var_1_61);
 }
 signed short int stepLocal_15 = var_1_47;
 if (stepLocal_15 >= var_1_48) {
  var_1_64 = ((((var_1_35 - ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102)))) < 0 ) ? -(var_1_35 - ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102)))) : (var_1_35 - ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102))))));
 }
 signed long int stepLocal_20 = var_1_35 - ((((var_1_42) < (var_1_42)) ? (var_1_42) : (var_1_42)));
 if (var_1_42 > stepLocal_20) {
  if (var_1_54 <= var_1_78) {
   if (var_1_23) {
    var_1_73 = (var_1_71 + var_1_13);
   } else {
    var_1_73 = (var_1_64 - ((((((((var_1_16) > (var_1_70)) ? (var_1_16) : (var_1_70)))) > (var_1_84)) ? (((((var_1_16) > (var_1_70)) ? (var_1_16) : (var_1_70)))) : (var_1_84))));
   }
  }
 } else {
  var_1_73 = 8;
 }
 if (var_1_24 && var_1_104) {
  if ((var_1_54 - ((((var_1_29) < (var_1_28)) ? (var_1_29) : (var_1_28)))) < (var_1_107 + ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) {
   var_1_74 = ((((var_1_40) > (var_1_75)) ? (var_1_40) : (var_1_75)));
  } else {
   if (var_1_49 && var_1_23) {
    var_1_74 = var_1_3;
   } else {
    var_1_74 = ((((var_1_56) < (var_1_41)) ? (var_1_56) : (var_1_41)));
   }
  }
 } else {
  if ((((((var_1_110 | var_1_97)) < (var_1_102)) ? ((var_1_110 | var_1_97)) : (var_1_102))) < ((var_1_4 / var_1_36) / var_1_48)) {
   var_1_74 = var_1_76;
  }
 }
 signed long int stepLocal_12 = var_1_106 % var_1_18;
 if (var_1_49) {
  if (var_1_56 >= var_1_63) {
   if (var_1_43 > stepLocal_12) {
    var_1_59 = ((var_1_56 + var_1_57) - var_1_29);
   }
  } else {
   var_1_59 = (var_1_41 + ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))));
  }
 } else {
  var_1_59 = (var_1_40 + var_1_61);
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 16383);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427387900e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427387900e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 4611686.018427387900e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427387900e+12F && var_1_29 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 32767);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 32767);
 assume_abort_if_not(var_1_36 <= 65534);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 49150);
 assume_abort_if_not(var_1_37 <= 65534);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -230584.3009213691390e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691390e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 127);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= 16383);
 assume_abort_if_not(var_1_48 <= 32766);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_52 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_52 >= 2147483647);
 assume_abort_if_not(var_1_52 <= 4294967294);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 63);
 assume_abort_if_not(var_1_70 <= 127);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 64);
 assume_abort_if_not(var_1_71 <= 127);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 63);
 var_1_75 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_75 >= -922337.2036854765600e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_76 >= -922337.2036854765600e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854765600e+12F && var_1_76 >= 1.0e-20F ));
 var_1_85 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_85 >= 31);
 assume_abort_if_not(var_1_85 <= 63);
 var_1_86 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_86 >= 0);
 assume_abort_if_not(var_1_86 <= 31);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 64);
 assume_abort_if_not(var_1_87 <= 127);
 var_1_88 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_88 >= 127);
 assume_abort_if_not(var_1_88 <= 254);
 var_1_90 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 4611686.018427382800e+12F && var_1_90 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_4 = var_1_4;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_91 = var_1_91;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_109 = var_1_109;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_109 ? (var_1_1 == ((double) (4.2 - ((((9.5) > (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? (9.5) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))))) : (var_1_1 == ((double) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) && ((! var_1_49) ? (((((((32 * var_1_95)) > (var_1_93)) ? ((32 * var_1_95)) : (var_1_93))) <= var_1_65) ? (var_1_4 == ((unsigned short int) ((var_1_95 + (var_1_93 + var_1_43)) + ((((var_1_68) > (var_1_84)) ? (var_1_68) : (var_1_84)))))) : (((var_1_84 <= (var_1_68 + var_1_95)) || (var_1_43 < (var_1_93 % 25))) ? (var_1_4 == ((unsigned short int) ((var_1_43 + var_1_95) + (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - var_1_93)))) : (var_1_4 == ((unsigned short int) ((var_1_95 + var_1_93) + ((var_1_43 + var_1_43) + 1)))))) : (var_1_4 == ((unsigned short int) var_1_95)))) && (var_1_13 == ((signed long int) ((((var_1_95) < 0 ) ? -(var_1_95) : (var_1_95)))))) && (var_1_46 ? (var_1_14 == ((signed short int) (((((var_1_43) < (var_1_68)) ? (var_1_43) : (var_1_68))) - (var_1_95 + var_1_110)))) : 1)) && (var_1_15 == ((signed long int) (var_1_43 + var_1_68)))) && (((last_1_var_1_16 + (last_1_var_1_84 - var_1_11)) == (16 & last_1_var_1_16)) ? (var_1_16 == ((unsigned char) ((((var_1_17) < (5)) ? (var_1_17) : (5))))) : (var_1_16 == ((unsigned char) (var_1_18 - var_1_19))))) && (var_1_109 ? (var_1_49 ? (var_1_20 == ((signed long int) (var_1_43 + var_1_66))) : (var_1_20 == ((signed long int) 128))) : (var_1_20 == ((signed long int) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))) && ((((var_1_11 & var_1_65) <= (-25 * var_1_51)) && var_1_104) ? (var_1_104 ? (var_1_22 == ((unsigned char) ((var_1_100 && var_1_23) || var_1_24))) : (var_1_22 == ((unsigned char) (! (var_1_100 || var_1_25))))) : ((var_1_68 >= var_1_93) ? ((((var_1_26 + var_1_27) - (var_1_28 - var_1_29)) > var_1_3) ? (var_1_22 == ((unsigned char) var_1_25)) : (var_1_22 == ((unsigned char) (! var_1_25)))) : (var_1_22 == ((unsigned char) (var_1_23 || var_1_25)))))) && (var_1_30 == ((unsigned short int) ((((var_1_97) < ((55371 - var_1_18))) ? (var_1_97) : ((55371 - var_1_18))))))) && ((var_1_28 <= (var_1_107 + ((((var_1_3) > (var_1_27)) ? (var_1_3) : (var_1_27))))) ? (var_1_31 == ((signed long int) (var_1_84 + last_1_var_1_31))) : ((var_1_17 <= ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) ? (var_1_31 == ((signed long int) 0)) : (var_1_31 == ((signed long int) -16))))) && ((var_1_29 == var_1_3) ? (var_1_32 == ((unsigned short int) ((var_1_11 - ((((var_1_84) < (var_1_19)) ? (var_1_84) : (var_1_19)))) + var_1_65))) : ((var_1_58 <= var_1_97) ? (var_1_32 == ((unsigned short int) (((((var_1_34) > (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) ? (var_1_34) : (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))))) - ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) : (var_1_32 == ((unsigned short int) ((((((var_1_37 - 16)) < (var_1_36)) ? ((var_1_37 - 16)) : (var_1_36))) - (((((var_1_11 - var_1_17)) < (var_1_42)) ? ((var_1_11 - var_1_17)) : (var_1_42))))))))) && ((var_1_13 > var_1_35) ? (var_1_104 ? (var_1_38 == ((unsigned long int) var_1_36)) : (var_1_38 == ((unsigned long int) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) : 1)) && ((var_1_19 == var_1_35) ? (var_1_39 == ((double) 63.8)) : ((var_1_23 || var_1_49) ? (var_1_39 == ((double) ((((((((var_1_27 - var_1_26)) > (var_1_29)) ? ((var_1_27 - var_1_26)) : (var_1_29))) < 0 ) ? -(((((var_1_27 - var_1_26)) > (var_1_29)) ? ((var_1_27 - var_1_26)) : (var_1_29))) : (((((var_1_27 - var_1_26)) > (var_1_29)) ? ((var_1_27 - var_1_26)) : (var_1_29))))))) : (var_1_39 == ((double) ((var_1_40 + 127.5) + var_1_41)))))) && (var_1_109 ? (var_1_42 == ((unsigned char) (var_1_18 - var_1_19))) : 1)) && ((var_1_37 <= (var_1_35 - (var_1_11 - var_1_19))) ? (var_1_43 == ((unsigned char) ((((var_1_18 - var_1_19) < 0 ) ? -(var_1_18 - var_1_19) : (var_1_18 - var_1_19))))) : (var_1_43 == ((unsigned char) ((((((((((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) < (var_1_18)) ? (((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) : (var_1_18)))) > ((var_1_44 - var_1_45))) ? (((((((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) < (var_1_18)) ? (((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19)))) : (var_1_18)))) : ((var_1_44 - var_1_45)))))))) && ((! (last_1_var_1_96 > last_1_var_1_96)) ? (var_1_46 == ((unsigned char) (! var_1_23))) : ((last_1_var_1_91 <= (var_1_19 / var_1_34)) ? (var_1_46 == ((unsigned char) (last_1_var_1_109 || var_1_25))) : ((var_1_28 >= var_1_27) ? (var_1_46 == ((unsigned char) (((var_1_19 * last_1_var_1_77) == (~ last_1_var_1_4)) && (! var_1_25)))) : (var_1_46 == ((unsigned char) (var_1_24 && (! (! var_1_23))))))))) && ((var_1_28 < var_1_40) ? (var_1_49 ? (var_1_47 == ((signed short int) (var_1_84 + var_1_44))) : 1) : (var_1_47 == ((signed short int) (var_1_16 - (var_1_48 - 25)))))) && ((var_1_104 || var_1_25) ? (var_1_49 == ((unsigned char) (var_1_23 || var_1_24))) : (var_1_49 == ((unsigned char) (var_1_24 || (! (! var_1_50))))))) && ((var_1_48 >= var_1_15) ? (var_1_23 ? (var_1_51 == ((unsigned long int) (var_1_66 + var_1_58))) : ((! var_1_24) ? (var_1_51 == ((unsigned long int) (var_1_101 + var_1_42))) : (var_1_51 == ((unsigned long int) (var_1_14 + ((((var_1_95) > (var_1_36)) ? (var_1_95) : (var_1_36)))))))) : (var_1_49 ? (var_1_51 == ((unsigned long int) (var_1_52 - var_1_48))) : (var_1_51 == ((unsigned long int) (((((var_1_11) > (var_1_36)) ? (var_1_11) : (var_1_36))) + (var_1_101 + var_1_42))))))) && (((var_1_29 - var_1_54) >= (var_1_41 * var_1_27)) ? (var_1_53 == ((float) (var_1_40 + var_1_41))) : 1)) && (var_1_55 == ((float) (((127.8f + 1.00000000006E10f) - (var_1_56 + var_1_57)) + 1.6f)))) && (var_1_49 ? (var_1_58 == ((unsigned short int) (var_1_43 + ((((var_1_43) < ((var_1_11 - 8))) ? (var_1_43) : ((var_1_11 - 8))))))) : (var_1_58 == ((unsigned short int) ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44))))))) && (var_1_49 ? ((var_1_56 >= var_1_63) ? ((var_1_43 > (var_1_106 % var_1_18)) ? (var_1_59 == ((float) ((var_1_56 + var_1_57) - var_1_29))) : 1) : (var_1_59 == ((float) (var_1_41 + ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))))) : (var_1_59 == ((float) (var_1_40 + var_1_61))))) && (var_1_22 ? ((((var_1_44 / var_1_11) * (var_1_18 * var_1_4)) < var_1_47) ? (var_1_62 == ((float) ((((var_1_41) < (((7.8f - 32.8f) + var_1_40))) ? (var_1_41) : (((7.8f - 32.8f) + var_1_40)))))) : 1) : (var_1_62 == ((float) (var_1_56 + 99.125f))))) && ((var_1_102 < var_1_15) ? (var_1_63 == ((double) (var_1_56 + var_1_61))) : 1)) && ((var_1_47 >= var_1_48) ? (var_1_64 == ((unsigned short int) ((((var_1_35 - ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102)))) < 0 ) ? -(var_1_35 - ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102)))) : (var_1_35 - ((((var_1_18) < (var_1_102)) ? (var_1_18) : (var_1_102)))))))) : 1)) && ((last_1_var_1_83 < var_1_29) ? (var_1_65 == ((signed short int) ((((var_1_19 - last_1_var_1_32) < 0 ) ? -(var_1_19 - last_1_var_1_32) : (var_1_19 - last_1_var_1_32))))) : ((last_1_var_1_66 > (var_1_18 + (var_1_44 - var_1_45))) ? (var_1_65 == ((signed short int) ((((var_1_48) > (var_1_18)) ? (var_1_48) : (var_1_18))))) : (var_1_65 == ((signed short int) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) && ((var_1_48 != (last_1_var_1_43 / var_1_44)) ? (var_1_66 == ((signed long int) (last_1_var_1_82 + (((((var_1_17 - last_1_var_1_84)) > (var_1_35)) ? ((var_1_17 - last_1_var_1_84)) : (var_1_35)))))) : (var_1_66 == ((signed long int) (last_1_var_1_16 + 1))))) && (((last_1_var_1_93 / -10) < last_1_var_1_43) ? ((var_1_61 <= last_1_var_1_62) ? (var_1_68 == ((unsigned char) (((((5 + ((((var_1_45) < (var_1_19)) ? (var_1_45) : (var_1_19))))) > (var_1_18)) ? ((5 + ((((var_1_45) < (var_1_19)) ? (var_1_45) : (var_1_19))))) : (var_1_18))))) : (var_1_68 == ((unsigned char) (var_1_44 - var_1_19)))) : ((last_1_var_1_109 && last_1_var_1_109) ? (var_1_68 == ((unsigned char) ((var_1_70 + var_1_71) - var_1_19))) : ((var_1_61 < (- (var_1_26 - var_1_29))) ? (var_1_68 == ((unsigned char) (var_1_45 + var_1_19))) : (var_1_68 == ((unsigned char) ((64 + ((((var_1_71) < (64)) ? (var_1_71) : (64)))) - (var_1_70 - var_1_72)))))))) && ((var_1_42 > (var_1_35 - ((((var_1_42) < (var_1_42)) ? (var_1_42) : (var_1_42))))) ? ((var_1_54 <= var_1_78) ? (var_1_23 ? (var_1_73 == ((signed short int) (var_1_71 + var_1_13))) : (var_1_73 == ((signed short int) (var_1_64 - ((((((((var_1_16) > (var_1_70)) ? (var_1_16) : (var_1_70)))) > (var_1_84)) ? (((((var_1_16) > (var_1_70)) ? (var_1_16) : (var_1_70)))) : (var_1_84))))))) : 1) : (var_1_73 == ((signed short int) 8)))) && ((var_1_24 && var_1_104) ? (((var_1_54 - ((((var_1_29) < (var_1_28)) ? (var_1_29) : (var_1_28)))) < (var_1_107 + ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? (var_1_74 == ((double) ((((var_1_40) > (var_1_75)) ? (var_1_40) : (var_1_75))))) : ((var_1_49 && var_1_23) ? (var_1_74 == ((double) var_1_3)) : (var_1_74 == ((double) ((((var_1_56) < (var_1_41)) ? (var_1_56) : (var_1_41))))))) : (((((((var_1_110 | var_1_97)) < (var_1_102)) ? ((var_1_110 | var_1_97)) : (var_1_102))) < ((var_1_4 / var_1_36) / var_1_48)) ? (var_1_74 == ((double) var_1_76)) : 1))) && ((! (var_1_50 && var_1_46)) ? (var_1_77 == ((unsigned short int) ((((var_1_99) > (var_1_44)) ? (var_1_99) : (var_1_44))))) : 1)) && ((var_1_17 > (var_1_82 % var_1_44)) ? (var_1_78 == ((float) (var_1_57 - var_1_27))) : 1)) && ((var_1_44 >= (var_1_19 / var_1_70)) ? (var_1_79 == ((unsigned long int) ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) : 1)) && (var_1_80 == ((signed char) (2 - var_1_72)))) && ((var_1_61 > var_1_56) ? (var_1_81 == ((signed long int) var_1_15)) : 1)) && ((((((var_1_36) > (var_1_70)) ? (var_1_36) : (var_1_70))) <= (var_1_11 / var_1_48)) ? ((var_1_104 || (var_1_23 && var_1_109)) ? ((! (var_1_57 > var_1_26)) ? (var_1_82 == ((signed short int) (var_1_30 + last_1_var_1_82))) : (var_1_82 == ((signed short int) (var_1_48 - var_1_70)))) : ((var_1_104 || var_1_109) ? (var_1_82 == ((signed short int) (64 - var_1_17))) : ((var_1_98 != var_1_72) ? (var_1_82 == ((signed short int) ((((((((var_1_20) < (256)) ? (var_1_20) : (256)))) > (var_1_72)) ? (((((var_1_20) < (256)) ? (var_1_20) : (256)))) : (var_1_72))))) : (var_1_82 == ((signed short int) (var_1_72 - (var_1_48 - ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))))))) : (var_1_82 == ((signed short int) var_1_16)))) && (((var_1_23 && var_1_22) && var_1_46) ? (((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) - 0.2f) >= var_1_29) ? (var_1_83 == ((double) ((var_1_40 + var_1_57) + 64.25))) : (var_1_83 == ((double) (var_1_26 - var_1_29)))) : 1)) && ((var_1_17 < (var_1_14 + (var_1_58 / var_1_71))) ? (((var_1_72 - var_1_19) > (((((-128 + var_1_45)) > ((var_1_11 - var_1_34))) ? ((-128 + var_1_45)) : ((var_1_11 - var_1_34))))) ? (var_1_84 == ((unsigned char) (128 - (var_1_72 + (var_1_85 - var_1_86))))) : (var_1_104 ? (var_1_84 == ((unsigned char) var_1_18)) : (((last_1_var_1_84 ^ var_1_51) <= var_1_19) ? (var_1_84 == ((unsigned char) ((((var_1_18) > (((((var_1_17) > (var_1_45)) ? (var_1_17) : (var_1_45))))) ? (var_1_18) : (((((var_1_17) > (var_1_45)) ? (var_1_17) : (var_1_45)))))))) : 1))) : ((((var_1_96 + var_1_14) * (var_1_16 * var_1_86)) >= (var_1_68 / ((((4) > (-64)) ? (4) : (-64))))) ? ((! var_1_46) ? (var_1_84 == ((unsigned char) ((((((var_1_71 + var_1_87)) > (var_1_88)) ? ((var_1_71 + var_1_87)) : (var_1_88))) - var_1_19))) : (var_1_84 == ((unsigned char) ((((100) > (2)) ? (100) : (2)))))) : (var_1_84 == ((unsigned char) ((8 + var_1_86) + var_1_87)))))) && ((var_1_107 <= (- var_1_26)) ? (var_1_89 == ((float) ((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) < ((((((var_1_57) < (7.5f)) ? (var_1_57) : (7.5f))) + (var_1_56 - var_1_90)))) ? (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : ((((((var_1_57) < (7.5f)) ? (var_1_57) : (7.5f))) + (var_1_56 - var_1_90))))))) : 1)) && ((var_1_19 < var_1_32) ? (var_1_91 == ((unsigned short int) var_1_35)) : (var_1_91 == ((unsigned short int) var_1_16)))) && (var_1_93 == ((unsigned short int) last_1_var_1_93))) && (var_1_49 ? (var_1_94 == ((float) var_1_29)) : (var_1_94 == ((float) var_1_61)))) && (var_1_50 ? (var_1_95 == ((unsigned short int) var_1_71)) : (var_1_95 == ((unsigned short int) var_1_48)))) && (var_1_100 ? (var_1_96 == ((signed short int) var_1_48)) : (var_1_96 == ((signed short int) var_1_72)))) && (var_1_97 == ((unsigned char) var_1_87))) && (var_1_98 == ((unsigned short int) 64))) && (var_1_24 ? (var_1_99 == ((unsigned long int) var_1_71)) : (var_1_99 == ((unsigned long int) var_1_43)))) && (var_1_100 == ((unsigned char) var_1_50))) && (var_1_50 ? (var_1_101 == ((unsigned long int) var_1_68)) : 1)) && (var_1_23 ? (var_1_102 == ((signed long int) var_1_20)) : (var_1_102 == ((signed long int) var_1_45)))) && (var_1_22 ? (var_1_103 == ((signed char) var_1_86)) : 1)) && (var_1_109 ? (var_1_104 == ((unsigned char) var_1_25)) : (var_1_104 == ((unsigned char) var_1_50)))) && (var_1_105 == ((float) var_1_29))) && (var_1_49 ? (var_1_106 == ((signed short int) var_1_42)) : (var_1_106 == ((signed short int) var_1_20)))) && ((var_1_70 <= (var_1_34 + var_1_99)) ? (var_1_107 == ((float) ((((var_1_40) < (3.5f)) ? (var_1_40) : (3.5f))))) : (var_1_107 == ((float) (var_1_56 + (var_1_40 + var_1_57)))))) && (var_1_108 == ((signed short int) var_1_14))) && (var_1_109 == ((unsigned char) var_1_50))) && (var_1_110 == ((unsigned long int) var_1_101))
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
