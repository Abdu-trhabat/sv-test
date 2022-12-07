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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch60Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
signed short int var_1_8 = 28520;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 1;
double var_1_14 = 255.25;
float var_1_15 = 64.75;
double var_1_16 = 128.25;
double var_1_17 = 0.0;
double var_1_18 = 256.375;
double var_1_19 = 15.8;
double var_1_20 = 99.65;
double var_1_21 = 0.0;
double var_1_22 = 8.75;
float var_1_23 = 10.2;
float var_1_24 = 9.25;
float var_1_25 = 499.6;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
signed long int var_1_32 = 256;
signed short int var_1_33 = 1;
float var_1_34 = 1.625;
unsigned short int var_1_35 = 16;
signed char var_1_36 = 1;
signed char var_1_37 = -4;
signed char var_1_38 = -1;
signed char var_1_39 = 2;
unsigned long int var_1_40 = 8;
unsigned long int var_1_42 = 1;
unsigned long int var_1_43 = 1460897009;
unsigned char var_1_44 = 8;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 32;
unsigned char var_1_48 = 5;
unsigned char var_1_49 = 0;
double var_1_50 = 256.49;
signed long int var_1_51 = 64;
double var_1_52 = 1000000000000000.6;
signed long int var_1_54 = 0;
signed long int var_1_55 = 1000000000;
signed short int var_1_57 = 32;
signed short int var_1_60 = -25;
unsigned long int var_1_61 = 2265505711;
signed char var_1_62 = -1;
signed char var_1_63 = 4;
signed char var_1_64 = 16;
signed char var_1_65 = 8;
unsigned long int var_1_66 = 64;
unsigned char var_1_67 = 8;
signed char var_1_68 = 2;
signed long int var_1_69 = -2;
unsigned short int var_1_70 = 256;
unsigned short int var_1_71 = 55782;
double var_1_72 = 99999999.2;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 1;
unsigned char var_1_75 = 0;
unsigned char var_1_76 = 1;
unsigned long int var_1_77 = 64;
unsigned long int var_1_78 = 4147784183;
unsigned long int var_1_79 = 3879136688;
float var_1_80 = 127.6;
unsigned short int var_1_81 = 2;
unsigned short int var_1_82 = 16722;
unsigned short int var_1_83 = 256;
unsigned short int var_1_84 = 61841;
signed char var_1_85 = 1;
signed char var_1_86 = 4;
unsigned char var_1_87 = 1;
double var_1_88 = 99.25;
unsigned short int var_1_89 = 8;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 1;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 32;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 0;
unsigned char var_1_97 = 0;
unsigned char var_1_98 = 0;
signed char var_1_99 = -5;
unsigned char var_1_100 = 10;
unsigned short int var_1_101 = 128;
unsigned char var_1_102 = 0;
float var_1_103 = 256.8;
signed char var_1_104 = 32;
unsigned short int var_1_105 = 0;
unsigned char var_1_106 = 10;
signed char var_1_107 = 10;
double last_1_var_1_14 = 255.25;
unsigned char last_1_var_1_26 = 32;
float last_1_var_1_34 = 1.625;
signed char last_1_var_1_36 = 1;
double last_1_var_1_50 = 256.49;
signed long int last_1_var_1_51 = 64;
double last_1_var_1_52 = 1000000000000000.6;
signed long int last_1_var_1_54 = 0;
unsigned long int last_1_var_1_66 = 64;
signed long int last_1_var_1_69 = -2;
unsigned char last_1_var_1_73 = 0;
float last_1_var_1_80 = 127.6;
unsigned short int last_1_var_1_81 = 2;
unsigned char last_1_var_1_90 = 0;
unsigned char last_1_var_1_94 = 32;
unsigned char last_1_var_1_96 = 0;
unsigned char last_1_var_1_102 = 0;
signed char last_1_var_1_104 = 32;
unsigned char last_1_var_1_106 = 10;
signed char last_1_var_1_107 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_28 < last_1_var_1_104) {
  if (last_1_var_1_102 && last_1_var_1_96) {
   var_1_91 = var_1_31;
  } else {
   var_1_91 = var_1_13;
  }
 }
 if (var_1_91) {
  var_1_104 = var_1_49;
 }
 if (((((last_1_var_1_69) < (var_1_12)) ? (last_1_var_1_69) : (var_1_12))) >= ((((last_1_var_1_36) < ((var_1_38 - var_1_29))) ? (last_1_var_1_36) : ((var_1_38 - var_1_29))))) {
  if (last_1_var_1_106 >= var_1_37) {
   var_1_42 = (((((last_1_var_1_94) < ((var_1_43 - var_1_39))) ? (last_1_var_1_94) : ((var_1_43 - var_1_39)))) + var_1_8);
  } else {
   var_1_42 = ((((var_1_43) < (((((1u) < (var_1_39)) ? (1u) : (var_1_39))))) ? (var_1_43) : (((((1u) < (var_1_39)) ? (1u) : (var_1_39))))));
  }
 }
 unsigned long int stepLocal_29 = (var_1_47 << last_1_var_1_54) + 256u;
 unsigned char stepLocal_28 = var_1_12;
 if (stepLocal_29 >= (var_1_78 - var_1_12)) {
  if (stepLocal_28 <= last_1_var_1_26) {
   var_1_88 = (var_1_21 + var_1_22);
  } else {
   var_1_88 = (((((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (var_1_22)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_22))) < 0 ) ? -((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (var_1_22)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_22))) : ((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (var_1_22)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_22)))));
  }
 } else {
  var_1_88 = 7.25;
 }
 unsigned char stepLocal_19 = last_1_var_1_90;
 if ((var_1_21 >= last_1_var_1_80) || stepLocal_19) {
  if ((last_1_var_1_50 + last_1_var_1_34) <= 100.25) {
   var_1_67 = var_1_27;
  }
 }
 if (((var_1_67 - var_1_28) < (var_1_42 & var_1_27)) && var_1_31) {
  var_1_34 = (var_1_24 - var_1_17);
 } else {
  var_1_34 = (var_1_19 + var_1_22);
 }
 signed long int stepLocal_9 = last_1_var_1_81;
 if (last_1_var_1_94 > stepLocal_9) {
  if (var_1_13) {
   if (last_1_var_1_52 > (var_1_17 - var_1_24)) {
    var_1_52 = (var_1_19 + var_1_21);
   }
  } else {
   var_1_52 = var_1_19;
  }
 } else {
  if (var_1_31) {
   var_1_52 = ((((var_1_16) < (var_1_24)) ? (var_1_16) : (var_1_24)));
  }
 }
 if (last_1_var_1_14 <= last_1_var_1_14) {
  if (last_1_var_1_96) {
   var_1_26 = (var_1_27 + ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))));
  }
 } else {
  var_1_26 = var_1_27;
 }
 if (128.125f <= (last_1_var_1_50 / var_1_15)) {
  var_1_74 = (! (last_1_var_1_73 || var_1_13));
 } else {
  if (last_1_var_1_96) {
   var_1_74 = var_1_31;
  } else {
   var_1_74 = (! (! var_1_13));
  }
 }
 if (var_1_74) {
  var_1_99 = var_1_86;
 } else {
  var_1_99 = var_1_49;
 }
 signed long int stepLocal_5 = -10 % 5;
 if (stepLocal_5 > var_1_28) {
  var_1_32 = ((((var_1_27) > (((var_1_29 + var_1_28) - var_1_8))) ? (var_1_27) : (((var_1_29 + var_1_28) - var_1_8))));
 } else {
  var_1_32 = (var_1_29 - var_1_42);
 }
 unsigned char stepLocal_7 = var_1_28;
 if (stepLocal_7 == var_1_39) {
  var_1_50 = var_1_16;
 }
 unsigned char stepLocal_30 = var_1_27;
 if (var_1_50 > var_1_34) {
  var_1_89 = (5 + ((((var_1_63) < (var_1_28)) ? (var_1_63) : (var_1_28))));
 } else {
  if (stepLocal_30 > (var_1_32 / var_1_47)) {
   var_1_89 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
  }
 }
 var_1_94 = var_1_28;
 var_1_96 = var_1_76;
 if (var_1_31) {
  var_1_97 = var_1_98;
 }
 if (var_1_31) {
  var_1_102 = var_1_13;
 }
 if (var_1_31) {
  var_1_103 = var_1_24;
 } else {
  var_1_103 = var_1_17;
 }
 var_1_105 = var_1_64;
 if (var_1_97) {
  var_1_106 = 8;
 } else {
  var_1_106 = var_1_48;
 }
 signed long int stepLocal_27 = var_1_105 + var_1_28;
 if ((var_1_94 + (var_1_79 / -1)) <= stepLocal_27) {
  var_1_85 = (((((var_1_86) < (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))))) ? (var_1_86) : (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49)))))) + 25);
 } else {
  if (var_1_16 >= var_1_88) {
   var_1_85 = ((((var_1_38) < (var_1_65)) ? (var_1_38) : (var_1_65)));
  } else {
   var_1_85 = ((((-64) > (((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))))) ? (-64) : (((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))))));
  }
 }
 unsigned char stepLocal_4 = var_1_96;
 if (((var_1_25 - var_1_17) <= var_1_20) && stepLocal_4) {
  var_1_30 = ((! var_1_13) || var_1_31);
 } else {
  var_1_30 = (! 0);
 }
 if ((var_1_27 & var_1_39) <= var_1_49) {
  var_1_68 = (var_1_49 - var_1_47);
 } else {
  if ((var_1_46 + var_1_55) > (var_1_8 - var_1_94)) {
   var_1_68 = ((((((((var_1_38) < ((var_1_64 + var_1_65))) ? (var_1_38) : ((var_1_64 + var_1_65))))) < ((var_1_49 - var_1_63))) ? (((((var_1_38) < ((var_1_64 + var_1_65))) ? (var_1_38) : ((var_1_64 + var_1_65))))) : ((var_1_49 - var_1_63))));
  } else {
   var_1_68 = (((((((((var_1_64) < (var_1_49)) ? (var_1_64) : (var_1_49))) + var_1_65)) < (((((var_1_39 - var_1_47) < 0 ) ? -(var_1_39 - var_1_47) : (var_1_39 - var_1_47))))) ? ((((((var_1_64) < (var_1_49)) ? (var_1_64) : (var_1_49))) + var_1_65)) : (((((var_1_39 - var_1_47) < 0 ) ? -(var_1_39 - var_1_47) : (var_1_39 - var_1_47))))));
  }
 }
 if (var_1_30) {
  var_1_72 = var_1_21;
 } else {
  var_1_72 = (var_1_24 - 5.8);
 }
 if (var_1_30) {
  var_1_87 = (var_1_63 + var_1_47);
 } else {
  var_1_87 = var_1_27;
 }
 if (var_1_102) {
  var_1_100 = 2;
 }
 if (var_1_102) {
  var_1_101 = var_1_12;
 } else {
  var_1_101 = 25;
 }
 signed long int stepLocal_3 = (((var_1_94) < 0 ) ? -(var_1_94) : (var_1_94));
 signed char stepLocal_2 = var_1_85;
 if (var_1_12 < stepLocal_2) {
  if (var_1_103 >= ((var_1_103 + var_1_103) / var_1_15)) {
   var_1_14 = var_1_16;
  } else {
   if (var_1_8 == stepLocal_3) {
    var_1_14 = var_1_16;
   }
  }
 } else {
  var_1_14 = ((var_1_17 - 9.75) - 31.25);
 }
 unsigned char stepLocal_21 = var_1_30;
 if (var_1_74 && stepLocal_21) {
  var_1_75 = (var_1_13 && var_1_76);
 } else {
  var_1_75 = var_1_76;
 }
 if ((var_1_100 + var_1_8) < (var_1_99 & var_1_12)) {
  var_1_36 = ((((var_1_37) > ((var_1_38 - var_1_39))) ? (var_1_37) : ((var_1_38 - var_1_39))));
 } else {
  var_1_36 = ((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) > ((var_1_39 - 5))) ? (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) : ((var_1_39 - 5))));
 }
 if (var_1_74) {
  var_1_44 = 25;
 } else {
  if (((((var_1_37) < (var_1_101)) ? (var_1_37) : (var_1_101))) > (((((var_1_8) > (5)) ? (var_1_8) : (5))) - var_1_12)) {
   var_1_44 = (var_1_46 - ((var_1_47 - 2) + ((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49)))));
  }
 }
 var_1_33 = (var_1_12 - (var_1_44 + var_1_89));
 unsigned char stepLocal_17 = var_1_31 || var_1_74;
 unsigned char stepLocal_16 = var_1_47;
 unsigned char stepLocal_15 = var_1_87;
 if (var_1_48 > stepLocal_16) {
  if (stepLocal_17 && (! var_1_75)) {
   var_1_62 = ((var_1_49 + var_1_48) - var_1_47);
  }
 } else {
  if (var_1_38 >= stepLocal_15) {
   var_1_62 = (var_1_48 + ((var_1_63 - var_1_64) + ((((0) < (var_1_65)) ? (0) : (var_1_65)))));
  } else {
   var_1_62 = (var_1_39 - ((((var_1_49) > (var_1_48)) ? (var_1_49) : (var_1_48))));
  }
 }
 signed long int stepLocal_18 = var_1_87 & var_1_106;
 if (4 <= stepLocal_18) {
  var_1_66 = 256u;
 } else {
  var_1_66 = last_1_var_1_66;
 }
 signed char stepLocal_26 = var_1_63;
 if (stepLocal_26 < var_1_67) {
  if (var_1_75) {
   var_1_80 = var_1_19;
  }
 } else {
  var_1_80 = var_1_17;
 }
 if (var_1_75) {
  if (var_1_47 > var_1_44) {
   var_1_90 = (! var_1_13);
  }
 } else {
  var_1_90 = (((! var_1_31) && var_1_13) && var_1_76);
 }
 if (var_1_90) {
  var_1_95 = var_1_29;
 } else {
  var_1_95 = var_1_29;
 }
 if ((var_1_87 % var_1_12) >= var_1_95) {
  var_1_18 = (var_1_19 + var_1_20);
 } else {
  if (! var_1_13) {
   if (128.7 <= var_1_80) {
    var_1_18 = ((((var_1_17) > ((var_1_20 + var_1_19))) ? (var_1_17) : ((var_1_20 + var_1_19))));
   } else {
    var_1_18 = ((var_1_21 + var_1_22) + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))));
   }
  } else {
   var_1_18 = 200.125;
  }
 }
 if (var_1_16 != (var_1_18 / var_1_17)) {
  var_1_73 = ((! (var_1_91 && var_1_31)) && (! 0));
 }
 signed long int stepLocal_1 = (32 % var_1_12) * var_1_104;
 if (stepLocal_1 >= (var_1_33 + ((((var_1_8) > (var_1_94)) ? (var_1_8) : (var_1_94))))) {
  var_1_11 = var_1_13;
 }
 if (var_1_22 < var_1_18) {
  var_1_83 = ((var_1_84 - var_1_39) - var_1_27);
 }
 if (var_1_90) {
  var_1_93 = var_1_13;
 } else {
  var_1_93 = var_1_13;
 }
 if (! var_1_13) {
  var_1_35 = ((((((((var_1_28) < (var_1_42)) ? (var_1_28) : (var_1_42)))) > (var_1_95)) ? (((((var_1_28) < (var_1_42)) ? (var_1_28) : (var_1_42)))) : (var_1_95)));
 } else {
  var_1_35 = (((((((var_1_12) > (var_1_95)) ? (var_1_12) : (var_1_95))) < 0 ) ? -((((var_1_12) > (var_1_95)) ? (var_1_12) : (var_1_95))) : ((((var_1_12) > (var_1_95)) ? (var_1_12) : (var_1_95)))));
 }
 signed long int stepLocal_20 = (((var_1_100) < ((var_1_35 + var_1_55))) ? (var_1_100) : ((var_1_35 + var_1_55)));
 if (stepLocal_20 == (var_1_47 & last_1_var_1_69)) {
  var_1_69 = ((((var_1_99) > (((var_1_8 - var_1_48) + var_1_106))) ? (var_1_99) : (((var_1_8 - var_1_48) + var_1_106))));
 }
 if (var_1_90) {
  if (var_1_103 >= var_1_22) {
   var_1_23 = (var_1_17 - var_1_24);
  }
 } else {
  if ((- var_1_52) < var_1_103) {
   var_1_23 = (((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17))) - var_1_24);
  } else {
   var_1_23 = 5.2f;
  }
 }
 if (var_1_25 <= (- (var_1_23 * 100.5f))) {
  if ((- var_1_14) <= (var_1_52 * var_1_88)) {
   var_1_70 = (var_1_71 - (var_1_8 - var_1_48));
  } else {
   var_1_70 = (((((((((var_1_8 + var_1_48)) > (var_1_27)) ? ((var_1_8 + var_1_48)) : (var_1_27)))) < (var_1_47)) ? ((((((var_1_8 + var_1_48)) > (var_1_27)) ? ((var_1_8 + var_1_48)) : (var_1_27)))) : (var_1_47)));
  }
 } else {
  var_1_70 = var_1_27;
 }
 if (var_1_21 > (- var_1_25)) {
  var_1_81 = ((var_1_95 + var_1_70) + (((((var_1_8) < (var_1_82)) ? (var_1_8) : (var_1_82))) - var_1_63));
 }
 unsigned char stepLocal_0 = var_1_52 <= ((((var_1_72) > (var_1_34)) ? (var_1_72) : (var_1_34)));
 if (var_1_11) {
  if (var_1_97 && stepLocal_0) {
   if (var_1_52 >= var_1_34) {
    var_1_1 = (var_1_100 - (var_1_8 - var_1_26));
   } else {
    var_1_1 = (((((var_1_26) > (var_1_67)) ? (var_1_26) : (var_1_67))) + -1);
   }
  } else {
   var_1_1 = (var_1_67 + var_1_26);
  }
 }
 unsigned long int stepLocal_6 = 25u ^ var_1_27;
 if (((var_1_15 + var_1_22) / 50.5f) < var_1_23) {
  if (! (var_1_15 >= var_1_25)) {
   if (var_1_88 > -0.06f) {
    var_1_40 = (var_1_89 + (var_1_29 + var_1_28));
   } else {
    var_1_40 = (5u + var_1_28);
   }
  } else {
   if (stepLocal_6 >= var_1_12) {
    if (var_1_31) {
     var_1_40 = ((var_1_29 + ((((var_1_87) > (var_1_28)) ? (var_1_87) : (var_1_28)))) + var_1_27);
    }
   } else {
    var_1_40 = (var_1_35 + var_1_87);
   }
  }
 } else {
  var_1_40 = ((((var_1_28 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) < 0 ) ? -(var_1_28 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) : (var_1_28 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))));
 }
 unsigned char stepLocal_8 = var_1_44;
 if (var_1_80 == (var_1_21 / var_1_17)) {
  var_1_51 = (var_1_38 + var_1_69);
 } else {
  if (stepLocal_8 == var_1_37) {
   var_1_51 = (var_1_37 + ((((((((var_1_39) > (var_1_29)) ? (var_1_39) : (var_1_29)))) > (var_1_100)) ? (((((var_1_39) > (var_1_29)) ? (var_1_39) : (var_1_29)))) : (var_1_100))));
  } else {
   var_1_51 = (var_1_39 - ((((var_1_104) < (last_1_var_1_51)) ? (var_1_104) : (last_1_var_1_51))));
  }
 }
 signed long int stepLocal_13 = (var_1_94 ^ var_1_35) * (var_1_62 % var_1_46);
 if (stepLocal_13 >= (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) % ((((var_1_8) > (var_1_55)) ? (var_1_8) : (var_1_55))))) {
  var_1_57 = var_1_94;
 }
 unsigned long int stepLocal_14 = (var_1_61 - var_1_29) % var_1_8;
 if (stepLocal_14 > ((((var_1_57) > (var_1_94)) ? (var_1_57) : (var_1_94)))) {
  if (var_1_73) {
   var_1_60 = var_1_44;
  }
 }
 signed long int stepLocal_33 = (((var_1_60) < (var_1_51)) ? (var_1_60) : (var_1_51));
 signed long int stepLocal_32 = var_1_65 * 256;
 signed char stepLocal_31 = var_1_38;
 if (stepLocal_32 <= var_1_35) {
  if (stepLocal_31 < var_1_63) {
   if (last_1_var_1_107 > stepLocal_33) {
    var_1_107 = var_1_38;
   } else {
    var_1_107 = var_1_65;
   }
  } else {
   var_1_107 = var_1_47;
  }
 }
 unsigned short int stepLocal_12 = var_1_83;
 signed long int stepLocal_11 = (var_1_28 % var_1_47) / var_1_12;
 unsigned char stepLocal_10 = var_1_13;
 if (var_1_22 >= var_1_88) {
  if (stepLocal_10 && ((16 > last_1_var_1_54) && var_1_96)) {
   var_1_54 = (((((var_1_27) > (-32)) ? (var_1_27) : (-32))) + var_1_60);
  } else {
   var_1_54 = ((var_1_49 - (var_1_55 - var_1_28)) + (var_1_12 + var_1_38));
  }
 } else {
  if (stepLocal_11 > var_1_104) {
   if (stepLocal_12 <= (var_1_48 - var_1_28)) {
    var_1_54 = ((((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) < 0 ) ? -((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) : ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) + ((((var_1_49) > ((var_1_48 - var_1_26))) ? (var_1_49) : ((var_1_48 - var_1_26)))));
   } else {
    var_1_54 = (10 - var_1_55);
   }
  } else {
   var_1_54 = ((var_1_8 + var_1_49) - var_1_104);
  }
 }
 signed long int stepLocal_25 = var_1_36 & var_1_51;
 signed short int stepLocal_24 = var_1_33;
 signed long int stepLocal_23 = var_1_51 / var_1_46;
 unsigned char stepLocal_22 = var_1_12 >= var_1_107;
 if (stepLocal_23 == var_1_62) {
  if (var_1_12 == stepLocal_25) {
   var_1_77 = var_1_29;
  } else {
   var_1_77 = (var_1_35 + (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) - ((((var_1_87) < (var_1_48)) ? (var_1_87) : (var_1_48)))));
  }
 } else {
  if ((((((var_1_105) > (var_1_48)) ? (var_1_105) : (var_1_48))) * var_1_66) == stepLocal_24) {
   if (var_1_93 || stepLocal_22) {
    var_1_77 = ((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) - var_1_87) + ((((var_1_12) < (var_1_44)) ? (var_1_12) : (var_1_44))));
   } else {
    var_1_77 = (var_1_78 - var_1_66);
   }
  } else {
   var_1_77 = ((var_1_79 - var_1_71) - (var_1_39 + var_1_28));
  }
 }
}
void updateVariables() {
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 255);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -127);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -1);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 1073741823);
 assume_abort_if_not(var_1_43 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 32);
 assume_abort_if_not(var_1_47 <= 64);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 63);
 var_1_55 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_55 >= 536870911);
 assume_abort_if_not(var_1_55 <= 1073741823);
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 2147483647);
 assume_abort_if_not(var_1_61 <= 4294967295);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 32);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 31);
 var_1_65 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_65 >= -31);
 assume_abort_if_not(var_1_65 <= 31);
 var_1_71 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_71 >= 32767);
 assume_abort_if_not(var_1_71 <= 65534);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 1);
 assume_abort_if_not(var_1_76 <= 1);
 var_1_78 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_78 >= 2147483647);
 assume_abort_if_not(var_1_78 <= 4294967294);
 var_1_79 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_79 >= 3221225470);
 assume_abort_if_not(var_1_79 <= 4294967294);
 var_1_82 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_82 >= 16383);
 assume_abort_if_not(var_1_82 <= 32767);
 var_1_84 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_84 >= 49150);
 assume_abort_if_not(var_1_84 <= 65534);
 var_1_86 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_86 >= -63);
 assume_abort_if_not(var_1_86 <= 63);
 var_1_98 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_98 >= 0);
 assume_abort_if_not(var_1_98 <= 0);
}
void updateLastVariables() {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_104 = var_1_104;
 last_1_var_1_106 = var_1_106;
 last_1_var_1_107 = var_1_107;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_11 ? ((var_1_97 && (var_1_52 <= ((((var_1_72) > (var_1_34)) ? (var_1_72) : (var_1_34))))) ? ((var_1_52 >= var_1_34) ? (var_1_1 == ((signed short int) (var_1_100 - (var_1_8 - var_1_26)))) : (var_1_1 == ((signed short int) (((((var_1_26) > (var_1_67)) ? (var_1_26) : (var_1_67))) + -1)))) : (var_1_1 == ((signed short int) (var_1_67 + var_1_26)))) : 1) && ((((32 % var_1_12) * var_1_104) >= (var_1_33 + ((((var_1_8) > (var_1_94)) ? (var_1_8) : (var_1_94))))) ? (var_1_11 == ((unsigned char) var_1_13)) : 1)) && ((var_1_12 < var_1_85) ? ((var_1_103 >= ((var_1_103 + var_1_103) / var_1_15)) ? (var_1_14 == ((double) var_1_16)) : ((var_1_8 == ((((var_1_94) < 0 ) ? -(var_1_94) : (var_1_94)))) ? (var_1_14 == ((double) var_1_16)) : 1)) : (var_1_14 == ((double) ((var_1_17 - 9.75) - 31.25))))) && (((var_1_87 % var_1_12) >= var_1_95) ? (var_1_18 == ((double) (var_1_19 + var_1_20))) : ((! var_1_13) ? ((128.7 <= var_1_80) ? (var_1_18 == ((double) ((((var_1_17) > ((var_1_20 + var_1_19))) ? (var_1_17) : ((var_1_20 + var_1_19)))))) : (var_1_18 == ((double) ((var_1_21 + var_1_22) + ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))))) : (var_1_18 == ((double) 200.125))))) && (var_1_90 ? ((var_1_103 >= var_1_22) ? (var_1_23 == ((float) (var_1_17 - var_1_24))) : 1) : (((- var_1_52) < var_1_103) ? (var_1_23 == ((float) (((((var_1_25) > (var_1_17)) ? (var_1_25) : (var_1_17))) - var_1_24))) : (var_1_23 == ((float) 5.2f))))) && ((last_1_var_1_14 <= last_1_var_1_14) ? (last_1_var_1_96 ? (var_1_26 == ((unsigned char) (var_1_27 + ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29)))))) : 1) : (var_1_26 == ((unsigned char) var_1_27)))) && ((((var_1_25 - var_1_17) <= var_1_20) && var_1_96) ? (var_1_30 == ((unsigned char) ((! var_1_13) || var_1_31))) : (var_1_30 == ((unsigned char) (! 0))))) && (((-10 % 5) > var_1_28) ? (var_1_32 == ((signed long int) ((((var_1_27) > (((var_1_29 + var_1_28) - var_1_8))) ? (var_1_27) : (((var_1_29 + var_1_28) - var_1_8)))))) : (var_1_32 == ((signed long int) (var_1_29 - var_1_42))))) && (var_1_33 == ((signed short int) (var_1_12 - (var_1_44 + var_1_89))))) && ((((var_1_67 - var_1_28) < (var_1_42 & var_1_27)) && var_1_31) ? (var_1_34 == ((float) (var_1_24 - var_1_17))) : (var_1_34 == ((float) (var_1_19 + var_1_22))))) && ((! var_1_13) ? (var_1_35 == ((unsigned short int) ((((((((var_1_28) < (var_1_42)) ? (var_1_28) : (var_1_42)))) > (var_1_95)) ? (((((var_1_28) < (var_1_42)) ? (var_1_28) : (var_1_42)))) : (var_1_95))))) : (var_1_35 == ((unsigned short int) (((((((var_1_12) > (var_1_95)) ? (var_1_12) : (var_1_95))) < 0 ) ? -((((var_1_12) > (var_1_95)) ? (var_1_12) : (var_1_95))) : ((((var_1_12) > (var_1_95)) ? (var_1_12) : (var_1_95))))))))) && (((var_1_100 + var_1_8) < (var_1_99 & var_1_12)) ? (var_1_36 == ((signed char) ((((var_1_37) > ((var_1_38 - var_1_39))) ? (var_1_37) : ((var_1_38 - var_1_39)))))) : (var_1_36 == ((signed char) ((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) > ((var_1_39 - 5))) ? (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) : ((var_1_39 - 5)))))))) && ((((var_1_15 + var_1_22) / 50.5f) < var_1_23) ? ((! (var_1_15 >= var_1_25)) ? ((var_1_88 > -0.06f) ? (var_1_40 == ((unsigned long int) (var_1_89 + (var_1_29 + var_1_28)))) : (var_1_40 == ((unsigned long int) (5u + var_1_28)))) : (((25u ^ var_1_27) >= var_1_12) ? (var_1_31 ? (var_1_40 == ((unsigned long int) ((var_1_29 + ((((var_1_87) > (var_1_28)) ? (var_1_87) : (var_1_28)))) + var_1_27))) : 1) : (var_1_40 == ((unsigned long int) (var_1_35 + var_1_87))))) : (var_1_40 == ((unsigned long int) ((((var_1_28 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) < 0 ) ? -(var_1_28 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) : (var_1_28 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))))))) && ((((((last_1_var_1_69) < (var_1_12)) ? (last_1_var_1_69) : (var_1_12))) >= ((((last_1_var_1_36) < ((var_1_38 - var_1_29))) ? (last_1_var_1_36) : ((var_1_38 - var_1_29))))) ? ((last_1_var_1_106 >= var_1_37) ? (var_1_42 == ((unsigned long int) (((((last_1_var_1_94) < ((var_1_43 - var_1_39))) ? (last_1_var_1_94) : ((var_1_43 - var_1_39)))) + var_1_8))) : (var_1_42 == ((unsigned long int) ((((var_1_43) < (((((1u) < (var_1_39)) ? (1u) : (var_1_39))))) ? (var_1_43) : (((((1u) < (var_1_39)) ? (1u) : (var_1_39))))))))) : 1)) && (var_1_74 ? (var_1_44 == ((unsigned char) 25)) : ((((((var_1_37) < (var_1_101)) ? (var_1_37) : (var_1_101))) > (((((var_1_8) > (5)) ? (var_1_8) : (5))) - var_1_12)) ? (var_1_44 == ((unsigned char) (var_1_46 - ((var_1_47 - 2) + ((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))))))) : 1))) && ((var_1_28 == var_1_39) ? (var_1_50 == ((double) var_1_16)) : 1)) && ((var_1_80 == (var_1_21 / var_1_17)) ? (var_1_51 == ((signed long int) (var_1_38 + var_1_69))) : ((var_1_44 == var_1_37) ? (var_1_51 == ((signed long int) (var_1_37 + ((((((((var_1_39) > (var_1_29)) ? (var_1_39) : (var_1_29)))) > (var_1_100)) ? (((((var_1_39) > (var_1_29)) ? (var_1_39) : (var_1_29)))) : (var_1_100)))))) : (var_1_51 == ((signed long int) (var_1_39 - ((((var_1_104) < (last_1_var_1_51)) ? (var_1_104) : (last_1_var_1_51))))))))) && ((last_1_var_1_94 > last_1_var_1_81) ? (var_1_13 ? ((last_1_var_1_52 > (var_1_17 - var_1_24)) ? (var_1_52 == ((double) (var_1_19 + var_1_21))) : 1) : (var_1_52 == ((double) var_1_19))) : (var_1_31 ? (var_1_52 == ((double) ((((var_1_16) < (var_1_24)) ? (var_1_16) : (var_1_24))))) : 1))) && ((var_1_22 >= var_1_88) ? ((var_1_13 && ((16 > last_1_var_1_54) && var_1_96)) ? (var_1_54 == ((signed long int) (((((var_1_27) > (-32)) ? (var_1_27) : (-32))) + var_1_60))) : (var_1_54 == ((signed long int) ((var_1_49 - (var_1_55 - var_1_28)) + (var_1_12 + var_1_38))))) : ((((var_1_28 % var_1_47) / var_1_12) > var_1_104) ? ((var_1_83 <= (var_1_48 - var_1_28)) ? (var_1_54 == ((signed long int) ((((((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) < 0 ) ? -((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) : ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) + ((((var_1_49) > ((var_1_48 - var_1_26))) ? (var_1_49) : ((var_1_48 - var_1_26))))))) : (var_1_54 == ((signed long int) (10 - var_1_55)))) : (var_1_54 == ((signed long int) ((var_1_8 + var_1_49) - var_1_104)))))) && ((((var_1_94 ^ var_1_35) * (var_1_62 % var_1_46)) >= (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) % ((((var_1_8) > (var_1_55)) ? (var_1_8) : (var_1_55))))) ? (var_1_57 == ((signed short int) var_1_94)) : 1)) && ((((var_1_61 - var_1_29) % var_1_8) > ((((var_1_57) > (var_1_94)) ? (var_1_57) : (var_1_94)))) ? (var_1_73 ? (var_1_60 == ((signed short int) var_1_44)) : 1) : 1)) && ((var_1_48 > var_1_47) ? (((var_1_31 || var_1_74) && (! var_1_75)) ? (var_1_62 == ((signed char) ((var_1_49 + var_1_48) - var_1_47))) : 1) : ((var_1_38 >= var_1_87) ? (var_1_62 == ((signed char) (var_1_48 + ((var_1_63 - var_1_64) + ((((0) < (var_1_65)) ? (0) : (var_1_65))))))) : (var_1_62 == ((signed char) (var_1_39 - ((((var_1_49) > (var_1_48)) ? (var_1_49) : (var_1_48))))))))) && ((4 <= (var_1_87 & var_1_106)) ? (var_1_66 == ((unsigned long int) 256u)) : (var_1_66 == ((unsigned long int) last_1_var_1_66)))) && (((var_1_21 >= last_1_var_1_80) || last_1_var_1_90) ? (((last_1_var_1_50 + last_1_var_1_34) <= 100.25) ? (var_1_67 == ((unsigned char) var_1_27)) : 1) : 1)) && (((var_1_27 & var_1_39) <= var_1_49) ? (var_1_68 == ((signed char) (var_1_49 - var_1_47))) : (((var_1_46 + var_1_55) > (var_1_8 - var_1_94)) ? (var_1_68 == ((signed char) ((((((((var_1_38) < ((var_1_64 + var_1_65))) ? (var_1_38) : ((var_1_64 + var_1_65))))) < ((var_1_49 - var_1_63))) ? (((((var_1_38) < ((var_1_64 + var_1_65))) ? (var_1_38) : ((var_1_64 + var_1_65))))) : ((var_1_49 - var_1_63)))))) : (var_1_68 == ((signed char) (((((((((var_1_64) < (var_1_49)) ? (var_1_64) : (var_1_49))) + var_1_65)) < (((((var_1_39 - var_1_47) < 0 ) ? -(var_1_39 - var_1_47) : (var_1_39 - var_1_47))))) ? ((((((var_1_64) < (var_1_49)) ? (var_1_64) : (var_1_49))) + var_1_65)) : (((((var_1_39 - var_1_47) < 0 ) ? -(var_1_39 - var_1_47) : (var_1_39 - var_1_47))))))))))) && ((((((var_1_100) < ((var_1_35 + var_1_55))) ? (var_1_100) : ((var_1_35 + var_1_55)))) == (var_1_47 & last_1_var_1_69)) ? (var_1_69 == ((signed long int) ((((var_1_99) > (((var_1_8 - var_1_48) + var_1_106))) ? (var_1_99) : (((var_1_8 - var_1_48) + var_1_106)))))) : 1)) && ((var_1_25 <= (- (var_1_23 * 100.5f))) ? (((- var_1_14) <= (var_1_52 * var_1_88)) ? (var_1_70 == ((unsigned short int) (var_1_71 - (var_1_8 - var_1_48)))) : (var_1_70 == ((unsigned short int) (((((((((var_1_8 + var_1_48)) > (var_1_27)) ? ((var_1_8 + var_1_48)) : (var_1_27)))) < (var_1_47)) ? ((((((var_1_8 + var_1_48)) > (var_1_27)) ? ((var_1_8 + var_1_48)) : (var_1_27)))) : (var_1_47)))))) : (var_1_70 == ((unsigned short int) var_1_27)))) && (var_1_30 ? (var_1_72 == ((double) var_1_21)) : (var_1_72 == ((double) (var_1_24 - 5.8))))) && ((var_1_16 != (var_1_18 / var_1_17)) ? (var_1_73 == ((unsigned char) ((! (var_1_91 && var_1_31)) && (! 0)))) : 1)) && ((128.125f <= (last_1_var_1_50 / var_1_15)) ? (var_1_74 == ((unsigned char) (! (last_1_var_1_73 || var_1_13)))) : (last_1_var_1_96 ? (var_1_74 == ((unsigned char) var_1_31)) : (var_1_74 == ((unsigned char) (! (! var_1_13))))))) && ((var_1_74 && var_1_30) ? (var_1_75 == ((unsigned char) (var_1_13 && var_1_76))) : (var_1_75 == ((unsigned char) var_1_76)))) && (((var_1_51 / var_1_46) == var_1_62) ? ((var_1_12 == (var_1_36 & var_1_51)) ? (var_1_77 == ((unsigned long int) var_1_29)) : (var_1_77 == ((unsigned long int) (var_1_35 + (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) - ((((var_1_87) < (var_1_48)) ? (var_1_87) : (var_1_48)))))))) : (((((((var_1_105) > (var_1_48)) ? (var_1_105) : (var_1_48))) * var_1_66) == var_1_33) ? ((var_1_93 || (var_1_12 >= var_1_107)) ? (var_1_77 == ((unsigned long int) ((((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) - var_1_87) + ((((var_1_12) < (var_1_44)) ? (var_1_12) : (var_1_44)))))) : (var_1_77 == ((unsigned long int) (var_1_78 - var_1_66)))) : (var_1_77 == ((unsigned long int) ((var_1_79 - var_1_71) - (var_1_39 + var_1_28))))))) && ((var_1_63 < var_1_67) ? (var_1_75 ? (var_1_80 == ((float) var_1_19)) : 1) : (var_1_80 == ((float) var_1_17)))) && ((var_1_21 > (- var_1_25)) ? (var_1_81 == ((unsigned short int) ((var_1_95 + var_1_70) + (((((var_1_8) < (var_1_82)) ? (var_1_8) : (var_1_82))) - var_1_63)))) : 1)) && ((var_1_22 < var_1_18) ? (var_1_83 == ((unsigned short int) ((var_1_84 - var_1_39) - var_1_27))) : 1)) && (((var_1_94 + (var_1_79 / -1)) <= (var_1_105 + var_1_28)) ? (var_1_85 == ((signed char) (((((var_1_86) < (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))))) ? (var_1_86) : (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49)))))) + 25))) : ((var_1_16 >= var_1_88) ? (var_1_85 == ((signed char) ((((var_1_38) < (var_1_65)) ? (var_1_38) : (var_1_65))))) : (var_1_85 == ((signed char) ((((-64) > (((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))))) ? (-64) : (((((var_1_86) < 0 ) ? -(var_1_86) : (var_1_86))))))))))) && (var_1_30 ? (var_1_87 == ((unsigned char) (var_1_63 + var_1_47))) : (var_1_87 == ((unsigned char) var_1_27)))) && ((((var_1_47 << last_1_var_1_54) + 256u) >= (var_1_78 - var_1_12)) ? ((var_1_12 <= last_1_var_1_26) ? (var_1_88 == ((double) (var_1_21 + var_1_22))) : (var_1_88 == ((double) (((((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (var_1_22)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_22))) < 0 ) ? -((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (var_1_22)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_22))) : ((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) > (var_1_22)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_22)))))))) : (var_1_88 == ((double) 7.25)))) && ((var_1_50 > var_1_34) ? (var_1_89 == ((unsigned short int) (5 + ((((var_1_63) < (var_1_28)) ? (var_1_63) : (var_1_28)))))) : ((var_1_27 > (var_1_32 / var_1_47)) ? (var_1_89 == ((unsigned short int) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) : 1))) && (var_1_75 ? ((var_1_47 > var_1_44) ? (var_1_90 == ((unsigned char) (! var_1_13))) : 1) : (var_1_90 == ((unsigned char) (((! var_1_31) && var_1_13) && var_1_76))))) && ((var_1_28 < last_1_var_1_104) ? ((last_1_var_1_102 && last_1_var_1_96) ? (var_1_91 == ((unsigned char) var_1_31)) : (var_1_91 == ((unsigned char) var_1_13))) : 1)) && (var_1_90 ? (var_1_93 == ((unsigned char) var_1_13)) : (var_1_93 == ((unsigned char) var_1_13)))) && (var_1_94 == ((unsigned char) var_1_28))) && (var_1_90 ? (var_1_95 == ((unsigned char) var_1_29)) : (var_1_95 == ((unsigned char) var_1_29)))) && (var_1_96 == ((unsigned char) var_1_76))) && (var_1_31 ? (var_1_97 == ((unsigned char) var_1_98)) : 1)) && (var_1_74 ? (var_1_99 == ((signed char) var_1_86)) : (var_1_99 == ((signed char) var_1_49)))) && (var_1_102 ? (var_1_100 == ((unsigned char) 2)) : 1)) && (var_1_102 ? (var_1_101 == ((unsigned short int) var_1_12)) : (var_1_101 == ((unsigned short int) 25)))) && (var_1_31 ? (var_1_102 == ((unsigned char) var_1_13)) : 1)) && (var_1_31 ? (var_1_103 == ((float) var_1_24)) : (var_1_103 == ((float) var_1_17)))) && (var_1_91 ? (var_1_104 == ((signed char) var_1_49)) : 1)) && (var_1_105 == ((unsigned short int) var_1_64))) && (var_1_97 ? (var_1_106 == ((unsigned char) 8)) : (var_1_106 == ((unsigned char) var_1_48)))) && (((var_1_65 * 256) <= var_1_35) ? ((var_1_38 < var_1_63) ? ((last_1_var_1_107 > ((((var_1_60) < (var_1_51)) ? (var_1_60) : (var_1_51)))) ? (var_1_107 == ((signed char) var_1_38)) : (var_1_107 == ((signed char) var_1_65))) : (var_1_107 == ((signed char) var_1_47))) : 1)
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
