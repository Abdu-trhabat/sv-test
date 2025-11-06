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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.8;
float var_1_6 = 16.375;
float var_1_7 = 0.25;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 128;
unsigned long int var_1_12 = 256;
double var_1_13 = 255.5;
double var_1_14 = 0.0;
double var_1_15 = 0.0;
double var_1_16 = 100.3;
signed short int var_1_17 = 64;
signed short int var_1_18 = 16;
double var_1_20 = 7.3;
double var_1_21 = 0.8;
float var_1_22 = 5.5;
float var_1_23 = 16.6;
signed short int var_1_24 = 500;
signed short int var_1_25 = -16;
signed long int var_1_26 = 10;
signed short int var_1_27 = 64;
unsigned short int var_1_28 = 39157;
signed short int var_1_29 = 25;
signed short int var_1_30 = -50;
signed short int var_1_31 = 1;
signed short int var_1_32 = 50;
signed short int var_1_33 = 5;
signed short int var_1_34 = 8;
signed long int var_1_35 = 1;
signed long int var_1_36 = 1000000000;
signed short int var_1_37 = -4;
double var_1_38 = 5.5;
double var_1_39 = 0.4;
unsigned char var_1_40 = 1;
unsigned char var_1_42 = 0;
signed char var_1_43 = -10;
unsigned long int var_1_44 = 2060382693;
unsigned long int var_1_45 = 1361450086;
signed char var_1_46 = 25;
signed char var_1_47 = 4;
signed char var_1_48 = 100;
signed char var_1_49 = 64;
signed char var_1_50 = 2;
signed char var_1_51 = 0;
signed char var_1_52 = 2;
double var_1_53 = 10000000000.5;
signed long int var_1_54 = -256;
unsigned long int var_1_55 = 3628372594;
signed long int var_1_56 = 1749416928;
float var_1_57 = 31.25;
float var_1_58 = 0.75;
double var_1_59 = 99.5;
unsigned short int var_1_60 = 16;
double var_1_61 = 127.5;
double var_1_62 = 63.4;
double var_1_63 = 4.92;
unsigned short int var_1_64 = 64;
unsigned short int var_1_65 = 59988;
signed short int var_1_66 = -4;
signed short int var_1_67 = 10000;
signed short int var_1_68 = 10000;
double var_1_69 = 99.5;
double var_1_70 = 4.75;
float var_1_71 = 31.75;
double var_1_72 = 0.0;
unsigned long int var_1_73 = 0;
unsigned long int var_1_74 = 2748403585;
signed char var_1_75 = 0;
signed char var_1_76 = 4;
unsigned char var_1_77 = 50;
unsigned char var_1_78 = 50;
unsigned short int var_1_79 = 100;
signed long int var_1_80 = 0;
signed long int var_1_81 = 1;
signed char var_1_82 = -64;
unsigned long int var_1_83 = 1;
float var_1_85 = 31.5;
unsigned char var_1_86 = 4;
signed short int var_1_87 = 16;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 64;
unsigned char var_1_90 = 100;
unsigned char var_1_91 = 100;
float var_1_92 = 499.6;
signed long int var_1_93 = -64;
unsigned char var_1_94 = 5;
unsigned char var_1_95 = 200;
unsigned char var_1_96 = 128;
signed short int var_1_97 = 5;
float var_1_98 = 128.25;
unsigned char var_1_99 = 50;
signed short int var_1_100 = 4;
signed short int var_1_101 = 32;
double var_1_102 = 16.75;
unsigned char var_1_103 = 1;
signed short int var_1_104 = -2;
unsigned char var_1_105 = 1;
signed long int var_1_106 = -2;
unsigned char var_1_107 = 5;
signed short int var_1_108 = 50;
unsigned char var_1_109 = 25;
unsigned short int var_1_110 = 128;
unsigned long int var_1_111 = 100;
double var_1_112 = 15.25;
float var_1_113 = 25.95;
signed char var_1_114 = -16;
double last_1_var_1_13 = 255.5;
signed long int last_1_var_1_35 = 1;
signed short int last_1_var_1_97 = 5;
unsigned long int last_1_var_1_111 = 100;
void initially(void) {
}
void step(void) {
 if (var_1_9) {
  var_1_11 = 0u;
 } else {
  if (var_1_10) {
   var_1_11 = ((((8u + var_1_12) < 0 ) ? -(8u + var_1_12) : (8u + var_1_12)));
  } else {
   if (var_1_6 < 127.5f) {
    var_1_11 = var_1_12;
   }
  }
 }
 var_1_22 = (((((99999.25f) < (((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20))))) ? (99999.25f) : (((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20)))))) + var_1_23);
 if (var_1_6 >= 127.75f) {
  var_1_35 = (((var_1_36 - var_1_17) + var_1_18) - ((((((((var_1_32) > (2)) ? (var_1_32) : (2)))) < (var_1_28)) ? (((((var_1_32) > (2)) ? (var_1_32) : (2)))) : (var_1_28))));
 } else {
  if (var_1_10) {
   var_1_35 = ((((last_1_var_1_35) < ((var_1_17 + (var_1_28 + var_1_34)))) ? (last_1_var_1_35) : ((var_1_17 + (var_1_28 + var_1_34)))));
  } else {
   var_1_35 = var_1_32;
  }
 }
 if (-1 < (var_1_34 << 1u)) {
  if (var_1_15 >= var_1_20) {
   var_1_37 = ((((var_1_34) > (var_1_30)) ? (var_1_34) : (var_1_30)));
  } else {
   var_1_37 = (((((var_1_33 + var_1_29)) > (var_1_30)) ? ((var_1_33 + var_1_29)) : (var_1_30)));
  }
 } else {
  var_1_37 = ((((((((-16) < 0 ) ? -(-16) : (-16)))) < (var_1_34)) ? (((((-16) < 0 ) ? -(-16) : (-16)))) : (var_1_34)));
 }
 if (var_1_46 >= 1) {
  var_1_53 = (((((var_1_23 + 63.75)) < (var_1_20)) ? ((var_1_23 + 63.75)) : (var_1_20)));
 } else {
  var_1_53 = ((((var_1_6) > ((((((var_1_23 + var_1_20)) < (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3))))) ? ((var_1_23 + var_1_20)) : (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3)))))))) ? (var_1_6) : ((((((var_1_23 + var_1_20)) < (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3))))) ? ((var_1_23 + var_1_20)) : (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3)))))))));
 }
 signed long int stepLocal_8 = var_1_31 - var_1_32;
 if (stepLocal_8 > var_1_17) {
  var_1_69 = (((((((((var_1_20) < (var_1_23)) ? (var_1_20) : (var_1_23)))) > ((var_1_16 - var_1_70))) ? (((((var_1_20) < (var_1_23)) ? (var_1_20) : (var_1_23)))) : ((var_1_16 - var_1_70)))) + var_1_62);
 }
 unsigned long int stepLocal_11 = var_1_45;
 if (var_1_33 == stepLocal_11) {
  var_1_77 = (8 + (((((var_1_75) > (var_1_60)) ? (var_1_75) : (var_1_60))) + (var_1_78 - var_1_76)));
 } else {
  var_1_77 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
 }
 var_1_79 = ((((((((var_1_68) < (var_1_49)) ? (var_1_68) : (var_1_49)))) < (var_1_17)) ? (((((var_1_68) < (var_1_49)) ? (var_1_68) : (var_1_49)))) : (var_1_17)));
 signed long int stepLocal_12 = var_1_46 / -500;
 if (stepLocal_12 > var_1_29) {
  var_1_80 = ((var_1_68 + var_1_48) - (var_1_56 - var_1_81));
 } else {
  var_1_80 = ((var_1_67 - 1) + ((((var_1_46) > (var_1_60)) ? (var_1_46) : (var_1_60))));
 }
 if (var_1_70 != 7.25) {
  if (var_1_7 > var_1_58) {
   var_1_82 = ((8 + -2) + var_1_75);
  }
 }
 var_1_101 = ((((var_1_68) < (((((var_1_50) < (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96))))) ? (var_1_50) : (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96)))))))) ? (var_1_68) : (((((var_1_50) < (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96))))) ? (var_1_50) : (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96)))))))));
 signed short int stepLocal_18 = var_1_34;
 if (stepLocal_18 <= ((((((((-256) < (var_1_96)) ? (-256) : (var_1_96)))) > (var_1_25)) ? (((((-256) < (var_1_96)) ? (-256) : (var_1_96)))) : (var_1_25)))) {
  if (var_1_10) {
   var_1_102 = var_1_14;
  } else {
   var_1_102 = var_1_63;
  }
 } else {
  var_1_102 = var_1_7;
 }
 if (var_1_42) {
  var_1_105 = var_1_96;
 }
 if (var_1_9) {
  var_1_106 = var_1_95;
 } else {
  var_1_106 = var_1_60;
 }
 if (var_1_9) {
  var_1_107 = var_1_76;
 } else {
  var_1_107 = var_1_89;
 }
 if (var_1_9) {
  var_1_108 = var_1_89;
 }
 var_1_110 = var_1_95;
 signed long int stepLocal_2 = - (var_1_28 - var_1_18);
 if (stepLocal_2 <= var_1_25) {
  if (var_1_15 == var_1_69) {
   var_1_27 = (((((var_1_29 + (-10 + var_1_30))) > (((var_1_31 - var_1_32) + var_1_33))) ? ((var_1_29 + (-10 + var_1_30))) : (((var_1_31 - var_1_32) + var_1_33))));
  } else {
   var_1_27 = ((var_1_31 + ((((var_1_32) > (200)) ? (var_1_32) : (200)))) - (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) + var_1_34));
  }
 } else {
  var_1_27 = (((((var_1_34) > (((((var_1_29) < (var_1_33)) ? (var_1_29) : (var_1_33))))) ? (var_1_34) : (((((var_1_29) < (var_1_33)) ? (var_1_29) : (var_1_33)))))) + 16);
 }
 unsigned long int stepLocal_3 = var_1_12 ^ (var_1_18 - var_1_32);
 if (var_1_9) {
  if (stepLocal_3 > (var_1_31 & (100u + var_1_80))) {
   var_1_39 = (((((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20))) < 0 ) ? -((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20))) : ((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20)))));
  }
 }
 if (var_1_18 <= var_1_106) {
  var_1_57 = (var_1_20 + ((((((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16)))) < (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) ? (((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16)))) : (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))))));
 } else {
  var_1_57 = (var_1_20 + var_1_16);
 }
 unsigned long int stepLocal_0 = 1u;
 if (((((var_1_7) < (var_1_57)) ? (var_1_7) : (var_1_57))) <= var_1_6) {
  if (stepLocal_0 < var_1_80) {
   var_1_8 = (var_1_9 && var_1_10);
  }
 }
 var_1_26 = ((((var_1_27) < (var_1_17)) ? (var_1_27) : (var_1_17)));
 if (! var_1_8) {
  var_1_38 = (((((((var_1_23) < ((var_1_7 - 10.5))) ? (var_1_23) : ((var_1_7 - 10.5)))) < 0 ) ? -((((var_1_23) < ((var_1_7 - 10.5))) ? (var_1_23) : ((var_1_7 - 10.5)))) : ((((var_1_23) < ((var_1_7 - 10.5))) ? (var_1_23) : ((var_1_7 - 10.5))))));
 }
 unsigned long int stepLocal_4 = var_1_11;
 if ((var_1_20 + var_1_16) <= var_1_38) {
  var_1_40 = ((((((0) > (var_1_31)) ? (0) : (var_1_31))) < var_1_35) || var_1_9);
 } else {
  if (stepLocal_4 < (((((var_1_29) < (var_1_32)) ? (var_1_29) : (var_1_32))) + var_1_26)) {
   var_1_40 = (var_1_42 && var_1_10);
  } else {
   var_1_40 = var_1_10;
  }
 }
 if (var_1_40) {
  var_1_103 = var_1_75;
 }
 if (var_1_8) {
  var_1_104 = -200;
 } else {
  var_1_104 = var_1_46;
 }
 if (var_1_8) {
  var_1_109 = var_1_75;
 } else {
  var_1_109 = var_1_78;
 }
 if (var_1_8) {
  var_1_111 = last_1_var_1_111;
 }
 if (var_1_8) {
  var_1_112 = var_1_15;
 } else {
  var_1_112 = var_1_16;
 }
 if (var_1_40) {
  var_1_113 = var_1_14;
 }
 if (! var_1_40) {
  var_1_21 = (((((var_1_6 - var_1_7)) > (var_1_14)) ? ((var_1_6 - var_1_7)) : (var_1_14)));
 }
 if (! var_1_40) {
  if (var_1_9) {
   if (var_1_20 > (var_1_6 - var_1_14)) {
    var_1_24 = ((((var_1_25) < (64)) ? (var_1_25) : (64)));
   }
  } else {
   var_1_24 = var_1_25;
  }
 }
 if (((var_1_111 >> var_1_60) % var_1_28) == var_1_46) {
  var_1_59 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  if (var_1_51 <= (var_1_77 / var_1_60)) {
   var_1_59 = (var_1_16 + var_1_20);
  } else {
   if (var_1_10 || (var_1_80 < var_1_49)) {
    if (((((var_1_111) > (var_1_26)) ? (var_1_111) : (var_1_26))) >= var_1_12) {
     var_1_59 = ((63.75 + (var_1_61 + var_1_62)) + var_1_23);
    } else {
     var_1_59 = ((((((((((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) < (var_1_16)) ? (((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) : (var_1_16)))) < ((var_1_23 + var_1_61))) ? (((((((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) < (var_1_16)) ? (((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) : (var_1_16)))) : ((var_1_23 + var_1_61))));
    }
   } else {
    var_1_59 = ((((var_1_6) < (var_1_63)) ? (var_1_6) : (var_1_63)));
   }
  }
 }
 if (((var_1_72 - var_1_16) - var_1_6) < var_1_21) {
  var_1_71 = ((((var_1_14) > ((var_1_16 + var_1_70))) ? (var_1_14) : ((var_1_16 + var_1_70))));
 }
 signed long int stepLocal_10 = var_1_28 / var_1_60;
 unsigned short int stepLocal_9 = var_1_110;
 if (var_1_61 == ((var_1_16 - var_1_6) + var_1_70)) {
  if (var_1_21 <= ((((var_1_23) < (var_1_7)) ? (var_1_23) : (var_1_7)))) {
   var_1_73 = (((((100u) > (((((var_1_28) < (var_1_110)) ? (var_1_28) : (var_1_110))))) ? (100u) : (((((var_1_28) < (var_1_110)) ? (var_1_28) : (var_1_110)))))) + var_1_36);
  } else {
   var_1_73 = ((var_1_56 - var_1_67) + var_1_34);
  }
 } else {
  if (var_1_26 != stepLocal_9) {
   var_1_73 = (var_1_74 - (((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) < 0 ) ? -((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) : ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))))));
  } else {
   if (stepLocal_10 > (100 << ((((var_1_75) < (var_1_76)) ? (var_1_75) : (var_1_76))))) {
    var_1_73 = var_1_60;
   }
  }
 }
 if (((((var_1_112) < (((((var_1_58) > (var_1_59)) ? (var_1_58) : (var_1_59))))) ? (var_1_112) : (((((var_1_58) > (var_1_59)) ? (var_1_58) : (var_1_59)))))) >= var_1_23) {
  var_1_85 = (var_1_14 - var_1_7);
 } else {
  var_1_85 = (var_1_70 - 9.25f);
 }
 if ((var_1_29 * var_1_32) > var_1_73) {
  var_1_98 = (var_1_14 - (var_1_16 + var_1_70));
 } else {
  var_1_98 = ((((var_1_62) > (((((var_1_15) < (1.75f)) ? (var_1_15) : (1.75f))))) ? (var_1_62) : (((((var_1_15) < (1.75f)) ? (var_1_15) : (1.75f))))));
 }
 signed long int stepLocal_17 = ((((var_1_48) < (var_1_91)) ? (var_1_48) : (var_1_91))) - var_1_31;
 unsigned char stepLocal_16 = (var_1_8 && var_1_42) || var_1_40;
 if (! var_1_10) {
  if (var_1_18 > stepLocal_17) {
   var_1_100 = var_1_29;
  } else {
   var_1_100 = (var_1_24 - var_1_48);
  }
 } else {
  if (stepLocal_16 && (var_1_14 == (- var_1_15))) {
   var_1_100 = (((((var_1_11 + var_1_32)) < (var_1_67)) ? ((var_1_11 + var_1_32)) : (var_1_67)));
  }
 }
 signed long int stepLocal_14 = var_1_35 % 10;
 unsigned long int stepLocal_13 = var_1_111;
 if (stepLocal_13 != var_1_34) {
  var_1_83 = ((((((((var_1_48) < (var_1_80)) ? (var_1_48) : (var_1_80)))) < (((((var_1_75 + var_1_26) < 0 ) ? -(var_1_75 + var_1_26) : (var_1_75 + var_1_26))))) ? (((((var_1_48) < (var_1_80)) ? (var_1_48) : (var_1_80)))) : (((((var_1_75 + var_1_26) < 0 ) ? -(var_1_75 + var_1_26) : (var_1_75 + var_1_26))))));
 } else {
  if ((var_1_100 % 50) < stepLocal_14) {
   var_1_83 = ((((var_1_28) > (var_1_76)) ? (var_1_28) : (var_1_76)));
  } else {
   var_1_83 = var_1_26;
  }
 }
 if (var_1_33 <= (var_1_44 + var_1_83)) {
  if ((- var_1_26) < var_1_49) {
   var_1_86 = ((((var_1_47) > (((((var_1_48) > ((128 - var_1_78))) ? (var_1_48) : ((128 - var_1_78)))))) ? (var_1_47) : (((((var_1_48) > ((128 - var_1_78))) ? (var_1_48) : ((128 - var_1_78)))))));
  }
 }
 if (((((var_1_83) > (var_1_17)) ? (var_1_83) : (var_1_17))) < var_1_44) {
  var_1_94 = ((((((var_1_95 - var_1_60)) < (128)) ? ((var_1_95 - var_1_60)) : (128))) - var_1_90);
 } else {
  var_1_94 = (((((var_1_95) < (var_1_96)) ? (var_1_95) : (var_1_96))) - var_1_91);
 }
 if (var_1_40) {
  var_1_97 = ((((last_1_var_1_97) < ((var_1_78 - var_1_103))) ? (last_1_var_1_97) : ((var_1_78 - var_1_103))));
 } else {
  var_1_97 = (var_1_86 + var_1_60);
 }
 unsigned long int stepLocal_1 = var_1_18 + var_1_83;
 if (var_1_7 != (last_1_var_1_13 * var_1_6)) {
  var_1_13 = ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7);
 } else {
  if ((var_1_14 - 100000.01f) > last_1_var_1_13) {
   if (var_1_9) {
    if (var_1_10) {
     if (stepLocal_1 >= (var_1_11 + (- 8u))) {
      if (! var_1_8) {
       var_1_13 = var_1_14;
      } else {
       var_1_13 = (var_1_16 + var_1_20);
      }
     }
    } else {
     var_1_13 = var_1_7;
    }
   }
  } else {
   var_1_13 = var_1_16;
  }
 }
 if (var_1_44 >= (var_1_55 - (var_1_45 - var_1_31))) {
  var_1_54 = ((var_1_31 - var_1_47) + ((((var_1_46) < (var_1_50)) ? (var_1_46) : (var_1_50))));
 } else {
  if (var_1_10 && var_1_42) {
   if ((var_1_47 + var_1_83) <= (var_1_80 + var_1_50)) {
    var_1_54 = (((((((((2) > (var_1_30)) ? (2) : (var_1_30))) + var_1_50)) < (var_1_111)) ? ((((((2) > (var_1_30)) ? (2) : (var_1_30))) + var_1_50)) : (var_1_111)));
   }
  } else {
   var_1_54 = (var_1_47 - (((((var_1_56 - 5)) > (var_1_31)) ? ((var_1_56 - 5)) : (var_1_31))));
  }
 }
 unsigned long int stepLocal_5 = var_1_32 + var_1_12;
 if (stepLocal_5 < var_1_54) {
  var_1_64 = (var_1_65 - var_1_18);
 } else {
  var_1_64 = ((((var_1_17) < ((var_1_47 + var_1_48))) ? (var_1_17) : ((var_1_47 + var_1_48))));
 }
 unsigned char stepLocal_7 = var_1_8;
 signed long int stepLocal_6 = var_1_106;
 if ((var_1_17 >= var_1_60) && stepLocal_7) {
  var_1_66 = (((((((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) > ((var_1_33 + var_1_27))) ? (((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) : ((var_1_33 + var_1_27)))) < 0 ) ? -((((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) > ((var_1_33 + var_1_27))) ? (((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) : ((var_1_33 + var_1_27)))) : ((((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) > ((var_1_33 + var_1_27))) ? (((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) : ((var_1_33 + var_1_27))))));
 } else {
  if (((var_1_83 / var_1_44) / var_1_56) < stepLocal_6) {
   var_1_66 = (((var_1_67 + var_1_68) - var_1_60) - var_1_31);
  } else {
   var_1_66 = (((var_1_51 + var_1_52) + (var_1_60 - var_1_48)) + (var_1_50 + (var_1_47 - var_1_49)));
  }
 }
 var_1_87 = (((((var_1_97 + var_1_50)) > (-25)) ? ((var_1_97 + var_1_50)) : (-25)));
 unsigned char stepLocal_15 = var_1_54 > var_1_67;
 if (stepLocal_15 && var_1_40) {
  var_1_92 = ((((((((var_1_7) > (var_1_14)) ? (var_1_7) : (var_1_14)))) < (var_1_63)) ? (((((var_1_7) > (var_1_14)) ? (var_1_7) : (var_1_14)))) : (var_1_63)));
 } else {
  var_1_92 = (var_1_16 + (255.5f + var_1_62));
 }
 if ((- var_1_36) == ((((-128) > (-5)) ? (-128) : (-5)))) {
  if (var_1_49 < var_1_75) {
   if (var_1_8 || (var_1_10 && var_1_42)) {
    var_1_93 = (var_1_90 - var_1_94);
   }
  }
 }
 if ((var_1_44 / var_1_90) >= var_1_64) {
  var_1_99 = var_1_78;
 } else {
  var_1_99 = ((((var_1_49) < (((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90))))) ? (var_1_49) : (((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90))))));
 }
 if (((~ var_1_11) + (var_1_11 + var_1_73)) <= var_1_93) {
  var_1_1 = (var_1_6 - var_1_7);
 }
 if (var_1_80 < (var_1_54 * var_1_32)) {
  if (((var_1_44 + var_1_45) - var_1_31) >= (((((var_1_18 * 8u)) > (var_1_54)) ? ((var_1_18 * 8u)) : (var_1_54)))) {
   if (var_1_10) {
    var_1_43 = (var_1_46 - ((((var_1_47) < (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))))) ? (var_1_47) : (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49)))))));
   }
  } else {
   var_1_43 = ((var_1_50 + (2 + var_1_51)) + var_1_52);
  }
 }
 if ((((((var_1_1) < (var_1_38)) ? (var_1_1) : (var_1_38))) * var_1_61) <= 49.725) {
  var_1_88 = (var_1_48 + var_1_89);
 } else {
  var_1_88 = (((var_1_90 + var_1_91) - ((((var_1_60) < (var_1_75)) ? (var_1_60) : (var_1_75)))) - var_1_49);
 }
 signed long int stepLocal_19 = (var_1_95 + 128) - ((((var_1_88) > (var_1_17)) ? (var_1_88) : (var_1_17)));
 if (var_1_59 >= var_1_63) {
  var_1_114 = var_1_75;
 } else {
  if (var_1_11 <= stepLocal_19) {
   var_1_114 = ((((var_1_76) < (var_1_75)) ? (var_1_76) : (var_1_75)));
  } else {
   var_1_114 = var_1_47;
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 4611686.018427383000e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 4611686.018427383000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32767);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 32767);
 assume_abort_if_not(var_1_28 <= 65535);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -16383);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -8191);
 assume_abort_if_not(var_1_30 <= 8191);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 16383);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -16383);
 assume_abort_if_not(var_1_33 <= 16383);
 var_1_34 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 16383);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 536870911);
 assume_abort_if_not(var_1_36 <= 1073741823);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 1073741823);
 assume_abort_if_not(var_1_44 <= 2147483648);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1073741824);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -1);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 126);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -31);
 assume_abort_if_not(var_1_50 <= 32);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -15);
 assume_abort_if_not(var_1_51 <= 15);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -63);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 2147483647);
 assume_abort_if_not(var_1_55 <= 4294967295);
 var_1_56 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_56 >= 1073741823);
 assume_abort_if_not(var_1_56 <= 2147483646);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -461168.6018427383000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 1);
 assume_abort_if_not(var_1_60 <= 30);
 var_1_61 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_61 >= -115292.1504606845700e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 1152921.504606845700e+12F && var_1_61 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= -115292.1504606845700e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 1152921.504606845700e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_63 >= -922337.2036854766000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854766000e+12F && var_1_63 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 32767);
 assume_abort_if_not(var_1_65 <= 65534);
 var_1_67 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_67 >= 8191);
 assume_abort_if_not(var_1_67 <= 16383);
 var_1_68 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_68 >= 8191);
 assume_abort_if_not(var_1_68 <= 16383);
 var_1_70 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_72 >= 4611686.018427388000e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 2147483647);
 assume_abort_if_not(var_1_74 <= 4294967294);
 var_1_75 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 24);
 var_1_76 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 24);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 31);
 assume_abort_if_not(var_1_78 <= 63);
 var_1_81 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_81 >= 0);
 assume_abort_if_not(var_1_81 <= 1073741823);
 var_1_89 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_89 >= 0);
 assume_abort_if_not(var_1_89 <= 127);
 var_1_90 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_90 >= 95);
 assume_abort_if_not(var_1_90 <= 127);
 var_1_91 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_91 >= 95);
 assume_abort_if_not(var_1_91 <= 127);
 var_1_95 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_95 >= 190);
 assume_abort_if_not(var_1_95 <= 254);
 var_1_96 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_96 >= 127);
 assume_abort_if_not(var_1_96 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_111 = var_1_111;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((~ var_1_11) + (var_1_11 + var_1_73)) <= var_1_93) ? (var_1_1 == ((float) (var_1_6 - var_1_7))) : 1) && ((((((var_1_7) < (var_1_57)) ? (var_1_7) : (var_1_57))) <= var_1_6) ? ((1u < var_1_80) ? (var_1_8 == ((unsigned char) (var_1_9 && var_1_10))) : 1) : 1)) && (var_1_9 ? (var_1_11 == ((unsigned long int) 0u)) : (var_1_10 ? (var_1_11 == ((unsigned long int) ((((8u + var_1_12) < 0 ) ? -(8u + var_1_12) : (8u + var_1_12))))) : ((var_1_6 < 127.5f) ? (var_1_11 == ((unsigned long int) var_1_12)) : 1)))) && ((var_1_7 != (last_1_var_1_13 * var_1_6)) ? (var_1_13 == ((double) ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7))) : (((var_1_14 - 100000.01f) > last_1_var_1_13) ? (var_1_9 ? (var_1_10 ? (((var_1_18 + var_1_83) >= (var_1_11 + (- 8u))) ? ((! var_1_8) ? (var_1_13 == ((double) var_1_14)) : (var_1_13 == ((double) (var_1_16 + var_1_20)))) : 1) : (var_1_13 == ((double) var_1_7))) : 1) : (var_1_13 == ((double) var_1_16))))) && ((! var_1_40) ? (var_1_21 == ((double) (((((var_1_6 - var_1_7)) > (var_1_14)) ? ((var_1_6 - var_1_7)) : (var_1_14))))) : 1)) && (var_1_22 == ((float) (((((99999.25f) < (((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20))))) ? (99999.25f) : (((((var_1_16) < (var_1_20)) ? (var_1_16) : (var_1_20)))))) + var_1_23)))) && ((! var_1_40) ? (var_1_9 ? ((var_1_20 > (var_1_6 - var_1_14)) ? (var_1_24 == ((signed short int) ((((var_1_25) < (64)) ? (var_1_25) : (64))))) : 1) : (var_1_24 == ((signed short int) var_1_25))) : 1)) && (var_1_26 == ((signed long int) ((((var_1_27) < (var_1_17)) ? (var_1_27) : (var_1_17)))))) && (((- (var_1_28 - var_1_18)) <= var_1_25) ? ((var_1_15 == var_1_69) ? (var_1_27 == ((signed short int) (((((var_1_29 + (-10 + var_1_30))) > (((var_1_31 - var_1_32) + var_1_33))) ? ((var_1_29 + (-10 + var_1_30))) : (((var_1_31 - var_1_32) + var_1_33)))))) : (var_1_27 == ((signed short int) ((var_1_31 + ((((var_1_32) > (200)) ? (var_1_32) : (200)))) - (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) + var_1_34))))) : (var_1_27 == ((signed short int) (((((var_1_34) > (((((var_1_29) < (var_1_33)) ? (var_1_29) : (var_1_33))))) ? (var_1_34) : (((((var_1_29) < (var_1_33)) ? (var_1_29) : (var_1_33)))))) + 16))))) && ((var_1_6 >= 127.75f) ? (var_1_35 == ((signed long int) (((var_1_36 - var_1_17) + var_1_18) - ((((((((var_1_32) > (2)) ? (var_1_32) : (2)))) < (var_1_28)) ? (((((var_1_32) > (2)) ? (var_1_32) : (2)))) : (var_1_28)))))) : (var_1_10 ? (var_1_35 == ((signed long int) ((((last_1_var_1_35) < ((var_1_17 + (var_1_28 + var_1_34)))) ? (last_1_var_1_35) : ((var_1_17 + (var_1_28 + var_1_34))))))) : (var_1_35 == ((signed long int) var_1_32))))) && ((-1 < (var_1_34 << 1u)) ? ((var_1_15 >= var_1_20) ? (var_1_37 == ((signed short int) ((((var_1_34) > (var_1_30)) ? (var_1_34) : (var_1_30))))) : (var_1_37 == ((signed short int) (((((var_1_33 + var_1_29)) > (var_1_30)) ? ((var_1_33 + var_1_29)) : (var_1_30)))))) : (var_1_37 == ((signed short int) ((((((((-16) < 0 ) ? -(-16) : (-16)))) < (var_1_34)) ? (((((-16) < 0 ) ? -(-16) : (-16)))) : (var_1_34))))))) && ((! var_1_8) ? (var_1_38 == ((double) (((((((var_1_23) < ((var_1_7 - 10.5))) ? (var_1_23) : ((var_1_7 - 10.5)))) < 0 ) ? -((((var_1_23) < ((var_1_7 - 10.5))) ? (var_1_23) : ((var_1_7 - 10.5)))) : ((((var_1_23) < ((var_1_7 - 10.5))) ? (var_1_23) : ((var_1_7 - 10.5)))))))) : 1)) && (var_1_9 ? (((var_1_12 ^ (var_1_18 - var_1_32)) > (var_1_31 & (100u + var_1_80))) ? (var_1_39 == ((double) (((((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20))) < 0 ) ? -((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20))) : ((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20))))))) : 1) : 1)) && (((var_1_20 + var_1_16) <= var_1_38) ? (var_1_40 == ((unsigned char) ((((((0) > (var_1_31)) ? (0) : (var_1_31))) < var_1_35) || var_1_9))) : ((var_1_11 < (((((var_1_29) < (var_1_32)) ? (var_1_29) : (var_1_32))) + var_1_26)) ? (var_1_40 == ((unsigned char) (var_1_42 && var_1_10))) : (var_1_40 == ((unsigned char) var_1_10))))) && ((var_1_80 < (var_1_54 * var_1_32)) ? ((((var_1_44 + var_1_45) - var_1_31) >= (((((var_1_18 * 8u)) > (var_1_54)) ? ((var_1_18 * 8u)) : (var_1_54)))) ? (var_1_10 ? (var_1_43 == ((signed char) (var_1_46 - ((((var_1_47) < (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))))) ? (var_1_47) : (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))))))))) : 1) : (var_1_43 == ((signed char) ((var_1_50 + (2 + var_1_51)) + var_1_52)))) : 1)) && ((var_1_46 >= 1) ? (var_1_53 == ((double) (((((var_1_23 + 63.75)) < (var_1_20)) ? ((var_1_23 + 63.75)) : (var_1_20))))) : (var_1_53 == ((double) ((((var_1_6) > ((((((var_1_23 + var_1_20)) < (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3))))) ? ((var_1_23 + var_1_20)) : (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3)))))))) ? (var_1_6) : ((((((var_1_23 + var_1_20)) < (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3))))) ? ((var_1_23 + var_1_20)) : (((((var_1_15) < (31.3)) ? (var_1_15) : (31.3))))))))))))) && ((var_1_44 >= (var_1_55 - (var_1_45 - var_1_31))) ? (var_1_54 == ((signed long int) ((var_1_31 - var_1_47) + ((((var_1_46) < (var_1_50)) ? (var_1_46) : (var_1_50)))))) : ((var_1_10 && var_1_42) ? (((var_1_47 + var_1_83) <= (var_1_80 + var_1_50)) ? (var_1_54 == ((signed long int) (((((((((2) > (var_1_30)) ? (2) : (var_1_30))) + var_1_50)) < (var_1_111)) ? ((((((2) > (var_1_30)) ? (2) : (var_1_30))) + var_1_50)) : (var_1_111))))) : 1) : (var_1_54 == ((signed long int) (var_1_47 - (((((var_1_56 - 5)) > (var_1_31)) ? ((var_1_56 - 5)) : (var_1_31))))))))) && ((var_1_18 <= var_1_106) ? (var_1_57 == ((float) (var_1_20 + ((((((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16)))) < (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))) ? (((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16)))) : (((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58))))))))) : (var_1_57 == ((float) (var_1_20 + var_1_16))))) && ((((var_1_111 >> var_1_60) % var_1_28) == var_1_46) ? (var_1_59 == ((double) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : ((var_1_51 <= (var_1_77 / var_1_60)) ? (var_1_59 == ((double) (var_1_16 + var_1_20))) : ((var_1_10 || (var_1_80 < var_1_49)) ? ((((((var_1_111) > (var_1_26)) ? (var_1_111) : (var_1_26))) >= var_1_12) ? (var_1_59 == ((double) ((63.75 + (var_1_61 + var_1_62)) + var_1_23))) : (var_1_59 == ((double) ((((((((((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) < (var_1_16)) ? (((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) : (var_1_16)))) < ((var_1_23 + var_1_61))) ? (((((((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) < (var_1_16)) ? (((((var_1_58) < (var_1_14)) ? (var_1_58) : (var_1_14)))) : (var_1_16)))) : ((var_1_23 + var_1_61))))))) : (var_1_59 == ((double) ((((var_1_6) < (var_1_63)) ? (var_1_6) : (var_1_63))))))))) && (((var_1_32 + var_1_12) < var_1_54) ? (var_1_64 == ((unsigned short int) (var_1_65 - var_1_18))) : (var_1_64 == ((unsigned short int) ((((var_1_17) < ((var_1_47 + var_1_48))) ? (var_1_17) : ((var_1_47 + var_1_48)))))))) && (((var_1_17 >= var_1_60) && var_1_8) ? (var_1_66 == ((signed short int) (((((((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) > ((var_1_33 + var_1_27))) ? (((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) : ((var_1_33 + var_1_27)))) < 0 ) ? -((((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) > ((var_1_33 + var_1_27))) ? (((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) : ((var_1_33 + var_1_27)))) : ((((((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) > ((var_1_33 + var_1_27))) ? (((((var_1_30) > (var_1_29)) ? (var_1_30) : (var_1_29)))) : ((var_1_33 + var_1_27)))))))) : ((((var_1_83 / var_1_44) / var_1_56) < var_1_106) ? (var_1_66 == ((signed short int) (((var_1_67 + var_1_68) - var_1_60) - var_1_31))) : (var_1_66 == ((signed short int) (((var_1_51 + var_1_52) + (var_1_60 - var_1_48)) + (var_1_50 + (var_1_47 - var_1_49)))))))) && (((var_1_31 - var_1_32) > var_1_17) ? (var_1_69 == ((double) (((((((((var_1_20) < (var_1_23)) ? (var_1_20) : (var_1_23)))) > ((var_1_16 - var_1_70))) ? (((((var_1_20) < (var_1_23)) ? (var_1_20) : (var_1_23)))) : ((var_1_16 - var_1_70)))) + var_1_62))) : 1)) && ((((var_1_72 - var_1_16) - var_1_6) < var_1_21) ? (var_1_71 == ((float) ((((var_1_14) > ((var_1_16 + var_1_70))) ? (var_1_14) : ((var_1_16 + var_1_70)))))) : 1)) && ((var_1_61 == ((var_1_16 - var_1_6) + var_1_70)) ? ((var_1_21 <= ((((var_1_23) < (var_1_7)) ? (var_1_23) : (var_1_7)))) ? (var_1_73 == ((unsigned long int) (((((100u) > (((((var_1_28) < (var_1_110)) ? (var_1_28) : (var_1_110))))) ? (100u) : (((((var_1_28) < (var_1_110)) ? (var_1_28) : (var_1_110)))))) + var_1_36))) : (var_1_73 == ((unsigned long int) ((var_1_56 - var_1_67) + var_1_34)))) : ((var_1_26 != var_1_110) ? (var_1_73 == ((unsigned long int) (var_1_74 - (((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) < 0 ) ? -((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) : ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))))))) : (((var_1_28 / var_1_60) > (100 << ((((var_1_75) < (var_1_76)) ? (var_1_75) : (var_1_76))))) ? (var_1_73 == ((unsigned long int) var_1_60)) : 1)))) && ((var_1_33 == var_1_45) ? (var_1_77 == ((unsigned char) (8 + (((((var_1_75) > (var_1_60)) ? (var_1_75) : (var_1_60))) + (var_1_78 - var_1_76))))) : (var_1_77 == ((unsigned char) ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))))) && (var_1_79 == ((unsigned short int) ((((((((var_1_68) < (var_1_49)) ? (var_1_68) : (var_1_49)))) < (var_1_17)) ? (((((var_1_68) < (var_1_49)) ? (var_1_68) : (var_1_49)))) : (var_1_17)))))) && (((var_1_46 / -500) > var_1_29) ? (var_1_80 == ((signed long int) ((var_1_68 + var_1_48) - (var_1_56 - var_1_81)))) : (var_1_80 == ((signed long int) ((var_1_67 - 1) + ((((var_1_46) > (var_1_60)) ? (var_1_46) : (var_1_60)))))))) && ((var_1_70 != 7.25) ? ((var_1_7 > var_1_58) ? (var_1_82 == ((signed char) ((8 + -2) + var_1_75))) : 1) : 1)) && ((var_1_111 != var_1_34) ? (var_1_83 == ((unsigned long int) ((((((((var_1_48) < (var_1_80)) ? (var_1_48) : (var_1_80)))) < (((((var_1_75 + var_1_26) < 0 ) ? -(var_1_75 + var_1_26) : (var_1_75 + var_1_26))))) ? (((((var_1_48) < (var_1_80)) ? (var_1_48) : (var_1_80)))) : (((((var_1_75 + var_1_26) < 0 ) ? -(var_1_75 + var_1_26) : (var_1_75 + var_1_26)))))))) : (((var_1_100 % 50) < (var_1_35 % 10)) ? (var_1_83 == ((unsigned long int) ((((var_1_28) > (var_1_76)) ? (var_1_28) : (var_1_76))))) : (var_1_83 == ((unsigned long int) var_1_26))))) && ((((((var_1_112) < (((((var_1_58) > (var_1_59)) ? (var_1_58) : (var_1_59))))) ? (var_1_112) : (((((var_1_58) > (var_1_59)) ? (var_1_58) : (var_1_59)))))) >= var_1_23) ? (var_1_85 == ((float) (var_1_14 - var_1_7))) : (var_1_85 == ((float) (var_1_70 - 9.25f))))) && ((var_1_33 <= (var_1_44 + var_1_83)) ? (((- var_1_26) < var_1_49) ? (var_1_86 == ((unsigned char) ((((var_1_47) > (((((var_1_48) > ((128 - var_1_78))) ? (var_1_48) : ((128 - var_1_78)))))) ? (var_1_47) : (((((var_1_48) > ((128 - var_1_78))) ? (var_1_48) : ((128 - var_1_78))))))))) : 1) : 1)) && (var_1_87 == ((signed short int) (((((var_1_97 + var_1_50)) > (-25)) ? ((var_1_97 + var_1_50)) : (-25)))))) && (((((((var_1_1) < (var_1_38)) ? (var_1_1) : (var_1_38))) * var_1_61) <= 49.725) ? (var_1_88 == ((unsigned char) (var_1_48 + var_1_89))) : (var_1_88 == ((unsigned char) (((var_1_90 + var_1_91) - ((((var_1_60) < (var_1_75)) ? (var_1_60) : (var_1_75)))) - var_1_49))))) && (((var_1_54 > var_1_67) && var_1_40) ? (var_1_92 == ((float) ((((((((var_1_7) > (var_1_14)) ? (var_1_7) : (var_1_14)))) < (var_1_63)) ? (((((var_1_7) > (var_1_14)) ? (var_1_7) : (var_1_14)))) : (var_1_63))))) : (var_1_92 == ((float) (var_1_16 + (255.5f + var_1_62)))))) && (((- var_1_36) == ((((-128) > (-5)) ? (-128) : (-5)))) ? ((var_1_49 < var_1_75) ? ((var_1_8 || (var_1_10 && var_1_42)) ? (var_1_93 == ((signed long int) (var_1_90 - var_1_94))) : 1) : 1) : 1)) && ((((((var_1_83) > (var_1_17)) ? (var_1_83) : (var_1_17))) < var_1_44) ? (var_1_94 == ((unsigned char) ((((((var_1_95 - var_1_60)) < (128)) ? ((var_1_95 - var_1_60)) : (128))) - var_1_90))) : (var_1_94 == ((unsigned char) (((((var_1_95) < (var_1_96)) ? (var_1_95) : (var_1_96))) - var_1_91))))) && (var_1_40 ? (var_1_97 == ((signed short int) ((((last_1_var_1_97) < ((var_1_78 - var_1_103))) ? (last_1_var_1_97) : ((var_1_78 - var_1_103)))))) : (var_1_97 == ((signed short int) (var_1_86 + var_1_60))))) && (((var_1_29 * var_1_32) > var_1_73) ? (var_1_98 == ((float) (var_1_14 - (var_1_16 + var_1_70)))) : (var_1_98 == ((float) ((((var_1_62) > (((((var_1_15) < (1.75f)) ? (var_1_15) : (1.75f))))) ? (var_1_62) : (((((var_1_15) < (1.75f)) ? (var_1_15) : (1.75f)))))))))) && (((var_1_44 / var_1_90) >= var_1_64) ? (var_1_99 == ((unsigned char) var_1_78)) : (var_1_99 == ((unsigned char) ((((var_1_49) < (((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90))))) ? (var_1_49) : (((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90)))))))))) && ((! var_1_10) ? ((var_1_18 > (((((var_1_48) < (var_1_91)) ? (var_1_48) : (var_1_91))) - var_1_31)) ? (var_1_100 == ((signed short int) var_1_29)) : (var_1_100 == ((signed short int) (var_1_24 - var_1_48)))) : ((((var_1_8 && var_1_42) || var_1_40) && (var_1_14 == (- var_1_15))) ? (var_1_100 == ((signed short int) (((((var_1_11 + var_1_32)) < (var_1_67)) ? ((var_1_11 + var_1_32)) : (var_1_67))))) : 1))) && (var_1_101 == ((signed short int) ((((var_1_68) < (((((var_1_50) < (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96))))) ? (var_1_50) : (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96)))))))) ? (var_1_68) : (((((var_1_50) < (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96))))) ? (var_1_50) : (((((var_1_60) > (var_1_96)) ? (var_1_60) : (var_1_96)))))))))))) && ((var_1_34 <= ((((((((-256) < (var_1_96)) ? (-256) : (var_1_96)))) > (var_1_25)) ? (((((-256) < (var_1_96)) ? (-256) : (var_1_96)))) : (var_1_25)))) ? (var_1_10 ? (var_1_102 == ((double) var_1_14)) : (var_1_102 == ((double) var_1_63))) : (var_1_102 == ((double) var_1_7)))) && (var_1_40 ? (var_1_103 == ((unsigned char) var_1_75)) : 1)) && (var_1_8 ? (var_1_104 == ((signed short int) -200)) : (var_1_104 == ((signed short int) var_1_46)))) && (var_1_42 ? (var_1_105 == ((unsigned char) var_1_96)) : 1)) && (var_1_9 ? (var_1_106 == ((signed long int) var_1_95)) : (var_1_106 == ((signed long int) var_1_60)))) && (var_1_9 ? (var_1_107 == ((unsigned char) var_1_76)) : (var_1_107 == ((unsigned char) var_1_89)))) && (var_1_9 ? (var_1_108 == ((signed short int) var_1_89)) : 1)) && (var_1_8 ? (var_1_109 == ((unsigned char) var_1_75)) : (var_1_109 == ((unsigned char) var_1_78)))) && (var_1_110 == ((unsigned short int) var_1_95))) && (var_1_8 ? (var_1_111 == ((unsigned long int) last_1_var_1_111)) : 1)) && (var_1_8 ? (var_1_112 == ((double) var_1_15)) : (var_1_112 == ((double) var_1_16)))) && (var_1_40 ? (var_1_113 == ((float) var_1_14)) : 1)) && ((var_1_59 >= var_1_63) ? (var_1_114 == ((signed char) var_1_75)) : ((var_1_11 <= ((var_1_95 + 128) - ((((var_1_88) > (var_1_17)) ? (var_1_88) : (var_1_17))))) ? (var_1_114 == ((signed char) ((((var_1_76) < (var_1_75)) ? (var_1_76) : (var_1_75))))) : (var_1_114 == ((signed char) var_1_47))))
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
