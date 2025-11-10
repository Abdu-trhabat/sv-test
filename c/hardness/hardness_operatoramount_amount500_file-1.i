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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 2;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 128;
signed short int var_1_16 = -4;
signed short int var_1_17 = 27170;
unsigned char var_1_18 = 200;
signed long int var_1_20 = 5;
unsigned long int var_1_21 = 1000;
unsigned long int var_1_23 = 1926926401;
unsigned long int var_1_24 = 2711750386;
unsigned short int var_1_25 = 32;
unsigned short int var_1_26 = 18084;
unsigned short int var_1_27 = 32996;
unsigned short int var_1_28 = 54045;
unsigned short int var_1_29 = 63951;
signed short int var_1_30 = 16;
signed short int var_1_31 = 10000;
unsigned short int var_1_32 = 2;
unsigned char var_1_34 = 5;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 2;
float var_1_38 = -0.5;
float var_1_40 = 1000000000000000.8;
float var_1_41 = 0.0;
float var_1_42 = 3.52;
signed long int var_1_43 = -64;
signed short int var_1_44 = -32;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 32;
double var_1_50 = 1.2;
unsigned short int var_1_51 = 16;
float var_1_53 = 99.5;
unsigned char var_1_54 = 16;
unsigned char var_1_55 = 4;
float var_1_56 = 25.25;
unsigned long int var_1_57 = 32;
unsigned long int var_1_58 = 2650641706;
unsigned long int var_1_59 = 5;
unsigned long int var_1_60 = 1000000000;
unsigned char var_1_61 = 64;
unsigned long int var_1_62 = 2;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 64;
unsigned char var_1_65 = 10;
unsigned char var_1_66 = 1;
unsigned long int var_1_67 = 256;
unsigned long int var_1_69 = 0;
unsigned char var_1_70 = 128;
unsigned char var_1_71 = 2;
double var_1_72 = 999999999999.4;
signed char var_1_73 = 64;
unsigned short int var_1_74 = 25;
unsigned char var_1_75 = 128;
signed short int var_1_76 = 4;
signed short int var_1_77 = 4;
unsigned char var_1_78 = 16;
double var_1_79 = 5.8;
double var_1_80 = 127.75;
signed char var_1_81 = 5;
unsigned long int var_1_82 = 10;
unsigned long int var_1_83 = 2997346611;
unsigned long int var_1_84 = 4;
unsigned long int var_1_85 = 10;
double var_1_86 = 0.125;
unsigned long int var_1_87 = 4077948447;
signed long int var_1_88 = 4;
double var_1_89 = 32.5;
signed long int var_1_90 = -256;
signed long int var_1_91 = 5;
unsigned long int var_1_92 = 10;
double var_1_94 = 127.6;
double var_1_95 = 15.75;
unsigned char var_1_96 = 1;
double var_1_97 = 7.4;
double var_1_98 = 255.75;
double var_1_99 = 0.0;
unsigned short int var_1_100 = 1;
unsigned char var_1_101 = 1;
signed long int var_1_102 = -128;
double var_1_103 = 1000000.1;
unsigned long int var_1_104 = 1000000;
signed long int var_1_105 = -100;
signed short int var_1_106 = 128;
unsigned char var_1_107 = 25;
unsigned long int var_1_108 = 25;
float var_1_109 = 100.875;
double var_1_110 = 127.5;
signed short int var_1_111 = -32;
unsigned long int var_1_112 = 32;
float var_1_113 = 31.7;
signed char var_1_114 = 32;
unsigned long int var_1_115 = 10;
unsigned long int last_1_var_1_21 = 1000;
unsigned short int last_1_var_1_25 = 32;
unsigned char last_1_var_1_47 = 1;
unsigned char last_1_var_1_48 = 0;
unsigned char last_1_var_1_49 = 32;
double last_1_var_1_50 = 1.2;
unsigned short int last_1_var_1_51 = 16;
unsigned long int last_1_var_1_57 = 32;
unsigned long int last_1_var_1_67 = 256;
double last_1_var_1_72 = 999999999999.4;
unsigned short int last_1_var_1_74 = 25;
double last_1_var_1_79 = 5.8;
unsigned long int last_1_var_1_82 = 10;
unsigned long int last_1_var_1_84 = 4;
unsigned long int last_1_var_1_85 = 10;
unsigned long int last_1_var_1_92 = 10;
double last_1_var_1_94 = 127.6;
double last_1_var_1_97 = 7.4;
double last_1_var_1_103 = 1000000.1;
unsigned long int last_1_var_1_104 = 1000000;
float last_1_var_1_113 = 31.7;
unsigned long int last_1_var_1_115 = 10;
void initially(void) {
}
void step(void) {
 if (((2.4 * last_1_var_1_103) + var_1_42) < last_1_var_1_113) {
  var_1_96 = (! var_1_9);
 } else {
  var_1_96 = ((-16 >= last_1_var_1_57) || var_1_10);
 }
 if (var_1_96) {
  var_1_113 = var_1_80;
 } else {
  var_1_113 = 1.00000000000625E11f;
 }
 unsigned short int stepLocal_16 = var_1_29;
 if (var_1_46 > stepLocal_16) {
  var_1_84 = ((2101242744u + var_1_23) - ((((last_1_var_1_85) < ((var_1_37 + last_1_var_1_57))) ? (last_1_var_1_85) : ((var_1_37 + last_1_var_1_57)))));
 } else {
  var_1_84 = (var_1_27 + last_1_var_1_115);
 }
 unsigned long int stepLocal_10 = last_1_var_1_82 & ((((var_1_12) > (last_1_var_1_84)) ? (var_1_12) : (last_1_var_1_84)));
 signed long int stepLocal_9 = var_1_37 << 2;
 if (last_1_var_1_25 != stepLocal_10) {
  var_1_51 = ((((var_1_17) > (var_1_36)) ? (var_1_17) : (var_1_36)));
 } else {
  if (stepLocal_9 >= last_1_var_1_51) {
   var_1_51 = var_1_31;
  }
 }
 var_1_20 = ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)));
 unsigned char stepLocal_6 = var_1_31 < ((((last_1_var_1_57) > (var_1_13)) ? (last_1_var_1_57) : (var_1_13)));
 signed long int stepLocal_5 = last_1_var_1_49;
 if (stepLocal_6 && last_1_var_1_48) {
  if (var_1_17 > stepLocal_5) {
   var_1_32 = ((var_1_28 - last_1_var_1_74) - last_1_var_1_104);
  }
 }
 if (((((5.8f) > (last_1_var_1_50)) ? (5.8f) : (last_1_var_1_50))) > last_1_var_1_94) {
  if (var_1_17 > var_1_14) {
   var_1_21 = ((var_1_14 + var_1_17) + ((var_1_23 - var_1_15) - ((((var_1_13) > (last_1_var_1_85)) ? (var_1_13) : (last_1_var_1_85)))));
  }
 } else {
  if (last_1_var_1_67 != (var_1_14 - var_1_13)) {
   var_1_21 = (var_1_13 + var_1_17);
  } else {
   var_1_21 = (((((2382252522u) < (var_1_24)) ? (2382252522u) : (var_1_24))) - last_1_var_1_21);
  }
 }
 if ((last_1_var_1_79 * last_1_var_1_72) < (last_1_var_1_94 / var_1_41)) {
  var_1_92 = ((((var_1_64) > (2u)) ? (var_1_64) : (2u)));
 }
 if (last_1_var_1_97 >= 256.8) {
  var_1_115 = ((var_1_23 - var_1_62) + 100u);
 }
 unsigned short int stepLocal_12 = var_1_26;
 if (stepLocal_12 > var_1_115) {
  var_1_63 = ((((var_1_15) < ((var_1_46 + (var_1_64 - var_1_37)))) ? (var_1_15) : ((var_1_46 + (var_1_64 - var_1_37)))));
 } else {
  var_1_63 = (((((var_1_64) < (var_1_62)) ? (var_1_64) : (var_1_62))) + var_1_65);
 }
 if (last_1_var_1_47) {
  var_1_108 = last_1_var_1_74;
 } else {
  var_1_108 = var_1_23;
 }
 if (var_1_24 >= last_1_var_1_92) {
  var_1_72 = ((var_1_41 + var_1_42) - var_1_40);
 } else {
  var_1_72 = (var_1_40 + var_1_42);
 }
 if (! (var_1_42 >= last_1_var_1_50)) {
  var_1_85 = ((((0u) < ((var_1_27 + var_1_71))) ? (0u) : ((var_1_27 + var_1_71))));
 }
 if (var_1_9) {
  var_1_106 = var_1_85;
 } else {
  var_1_106 = var_1_71;
 }
 var_1_44 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
 unsigned char stepLocal_8 = var_1_6;
 unsigned long int stepLocal_7 = var_1_23 - var_1_31;
 if (stepLocal_8 || var_1_9) {
  if ((var_1_14 - (var_1_37 + var_1_46)) > stepLocal_7) {
   var_1_45 = var_1_7;
  } else {
   var_1_45 = (var_1_7 || var_1_6);
  }
 }
 if (var_1_8) {
  if (var_1_6) {
   var_1_47 = var_1_7;
  } else {
   var_1_47 = ((! 0) && var_1_10);
  }
 } else {
  var_1_47 = (var_1_10 || (! var_1_7));
 }
 var_1_48 = (! var_1_7);
 var_1_53 = var_1_42;
 if (var_1_26 > var_1_28) {
  var_1_56 = var_1_41;
 } else {
  var_1_56 = ((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41)));
 }
 unsigned long int stepLocal_14 = var_1_21 >> (var_1_76 + var_1_77);
 if (stepLocal_14 >= -64) {
  var_1_75 = (var_1_15 - var_1_78);
 } else {
  var_1_75 = (var_1_78 + (var_1_64 - var_1_46));
 }
 if (var_1_45) {
  var_1_100 = var_1_13;
 } else {
  var_1_100 = var_1_36;
 }
 if (var_1_9) {
  var_1_101 = var_1_78;
 } else {
  var_1_101 = var_1_13;
 }
 var_1_102 = var_1_26;
 var_1_103 = 255.8;
 var_1_104 = last_1_var_1_104;
 var_1_105 = var_1_71;
 var_1_107 = var_1_14;
 if (var_1_8) {
  var_1_109 = var_1_41;
 } else {
  var_1_109 = var_1_99;
 }
 if (var_1_47) {
  var_1_110 = var_1_41;
 }
 var_1_111 = var_1_77;
 var_1_114 = (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - (var_1_46 + var_1_76));
 if (var_1_84 == (var_1_23 + var_1_92)) {
  var_1_94 = ((var_1_40 - var_1_41) + var_1_95);
 } else {
  var_1_94 = (var_1_41 - var_1_40);
 }
 if (((var_1_41 - 0.2f) * var_1_42) > (var_1_94 + var_1_110)) {
  var_1_43 = ((((var_1_100) < (var_1_108)) ? (var_1_100) : (var_1_108)));
 } else {
  var_1_43 = (((((((((var_1_32) < (var_1_13)) ? (var_1_32) : (var_1_13))) - var_1_92)) < (var_1_108)) ? ((((((var_1_32) < (var_1_13)) ? (var_1_32) : (var_1_13))) - var_1_92)) : (var_1_108)));
 }
 if ((var_1_46 - var_1_108) == var_1_21) {
  var_1_97 = (var_1_40 - ((var_1_42 + var_1_98) + var_1_41));
 } else {
  if (var_1_6) {
   var_1_97 = (var_1_40 + (var_1_42 - var_1_98));
  } else {
   var_1_97 = (((((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) < ((var_1_99 - 64.7))) ? (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) : ((var_1_99 - 64.7)))) - var_1_41);
  }
 }
 if (var_1_110 <= (var_1_97 * var_1_110)) {
  if (var_1_15 >= var_1_104) {
   var_1_38 = (4.75f - (var_1_40 + (var_1_41 - var_1_42)));
  } else {
   var_1_38 = (var_1_41 - var_1_40);
  }
 } else {
  if ((var_1_36 - var_1_37) <= var_1_14) {
   var_1_38 = (((((var_1_42 - ((((4.8f) < 0 ) ? -(4.8f) : (4.8f))))) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? ((var_1_42 - ((((4.8f) < 0 ) ? -(4.8f) : (4.8f))))) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))));
  }
 }
 var_1_112 = var_1_63;
 if (var_1_112 <= (- 2)) {
  var_1_49 = ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > ((var_1_14 - var_1_37))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : ((var_1_14 - var_1_37))));
 }
 if (var_1_76 >= var_1_112) {
  var_1_79 = ((((((var_1_42 + var_1_41) - ((((2.2) > (var_1_80)) ? (2.2) : (var_1_80))))) > (var_1_40)) ? (((var_1_42 + var_1_41) - ((((2.2) > (var_1_80)) ? (2.2) : (var_1_80))))) : (var_1_40)));
 }
 if (var_1_111 > var_1_28) {
  var_1_34 = ((((var_1_14) < (((var_1_36 + var_1_37) + ((((var_1_13) < (16)) ? (var_1_13) : (16)))))) ? (var_1_14) : (((var_1_36 + var_1_37) + ((((var_1_13) < (16)) ? (var_1_13) : (16)))))));
 } else {
  if (var_1_115 == var_1_17) {
   var_1_34 = var_1_15;
  } else {
   var_1_34 = ((((((((var_1_36) > (var_1_15)) ? (var_1_36) : (var_1_15)))) < (var_1_13)) ? (((((var_1_36) > (var_1_15)) ? (var_1_36) : (var_1_15)))) : (var_1_13)));
  }
 }
 signed short int stepLocal_18 = var_1_31;
 unsigned long int stepLocal_17 = ((((var_1_87) < (var_1_24)) ? (var_1_87) : (var_1_24))) - (var_1_23 - var_1_85);
 if (! (! (var_1_111 <= var_1_13))) {
  if (((((var_1_40) < (127.152f)) ? (var_1_40) : (127.152f))) >= var_1_72) {
   if (var_1_69 <= stepLocal_17) {
    var_1_86 = ((((9.5) < ((var_1_80 - var_1_40))) ? (9.5) : ((var_1_80 - var_1_40))));
   }
  } else {
   if (stepLocal_18 != (var_1_62 / 32)) {
    var_1_86 = ((((var_1_42) < (9999999.2)) ? (var_1_42) : (9999999.2)));
   }
  }
 }
 if (64.5 >= var_1_86) {
  var_1_18 = (var_1_14 - var_1_13);
 }
 unsigned char stepLocal_13 = var_1_8;
 if (var_1_6) {
  var_1_70 = (var_1_37 + var_1_71);
 } else {
  if ((31.02f + var_1_40) == var_1_86) {
   if (var_1_48 || stepLocal_13) {
    var_1_70 = ((((var_1_55) < (var_1_64)) ? (var_1_55) : (var_1_64)));
   }
  } else {
   var_1_70 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  }
 }
 if (var_1_20 <= var_1_43) {
  if ((var_1_20 ^ (var_1_43 ^ var_1_21)) < var_1_104) {
   var_1_1 = (var_1_6 || var_1_7);
  } else {
   if ((var_1_104 == var_1_20) || (var_1_7 && (var_1_43 <= 64))) {
    var_1_1 = ((var_1_8 && (! var_1_7)) && (var_1_9 && var_1_10));
   } else {
    if (var_1_10) {
     var_1_1 = (var_1_7 || var_1_6);
    }
   }
  }
 }
 if ((var_1_72 / ((((var_1_41) > (var_1_89)) ? (var_1_41) : (var_1_89)))) >= var_1_79) {
  if (var_1_78 > var_1_21) {
   var_1_88 = (var_1_31 + (var_1_115 - var_1_12));
  } else {
   var_1_88 = var_1_104;
  }
 } else {
  var_1_88 = var_1_105;
 }
 signed long int stepLocal_1 = var_1_88 * 16;
 unsigned long int stepLocal_0 = var_1_92;
 if (var_1_85 <= stepLocal_1) {
  if (var_1_7) {
   if (var_1_6) {
    if (stepLocal_0 >= (var_1_108 + var_1_88)) {
     var_1_11 = var_1_12;
    }
   } else {
    if (var_1_10) {
     var_1_11 = ((((var_1_12) > ((25 + var_1_13))) ? (var_1_12) : ((25 + var_1_13))));
    } else {
     var_1_11 = (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_13);
    }
   }
  }
 }
 if (var_1_10) {
  var_1_16 = (((16 + var_1_13) - 32) + ((((var_1_14) < ((var_1_49 + var_1_12))) ? (var_1_14) : ((var_1_49 + var_1_12)))));
 } else {
  var_1_16 = (-1 - (var_1_17 - var_1_88));
 }
 if (var_1_11 >= var_1_16) {
  var_1_66 = (((0 < var_1_13) && var_1_7) || var_1_6);
 } else {
  var_1_66 = (var_1_1 || (var_1_10 || (! var_1_6)));
 }
 if (! var_1_6) {
  var_1_90 = var_1_91;
 } else {
  var_1_90 = (var_1_13 + var_1_88);
 }
 unsigned long int stepLocal_15 = (var_1_77 / var_1_31) % var_1_23;
 if (var_1_6) {
  var_1_82 = (((((((((var_1_24 - var_1_105)) > ((var_1_83 - var_1_46))) ? ((var_1_24 - var_1_105)) : ((var_1_83 - var_1_46))))) > (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))))) ? ((((((var_1_24 - var_1_105)) > ((var_1_83 - var_1_46))) ? ((var_1_24 - var_1_105)) : ((var_1_83 - var_1_46))))) : (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))))));
 } else {
  if (stepLocal_15 >= var_1_34) {
   var_1_82 = var_1_37;
  } else {
   var_1_82 = (((((var_1_83 - var_1_55)) > (var_1_65)) ? ((var_1_83 - var_1_55)) : (var_1_65)));
  }
 }
 if ((var_1_9 || var_1_7) || var_1_1) {
  var_1_73 = (var_1_62 - 64);
 } else {
  var_1_73 = (var_1_46 + var_1_62);
 }
 if ((var_1_104 / var_1_15) <= var_1_88) {
  var_1_81 = ((((var_1_62) > (var_1_76)) ? (var_1_62) : (var_1_76)));
 } else {
  var_1_81 = ((((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) + var_1_62) + var_1_46);
 }
 if ((var_1_38 > 32.8f) && var_1_1) {
  if (((var_1_72 * var_1_97) == var_1_97) && ((var_1_64 * var_1_32) != var_1_36)) {
   if (var_1_82 > (var_1_100 ^ var_1_108)) {
    var_1_67 = ((((var_1_17) < (var_1_69)) ? (var_1_17) : (var_1_69)));
   } else {
    var_1_67 = (((var_1_60 - var_1_37) + var_1_108) + var_1_36);
   }
  }
 } else {
  var_1_67 = (var_1_112 + 4u);
 }
 if ((~ var_1_82) < var_1_28) {
  if (var_1_82 > var_1_51) {
   var_1_54 = ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55)));
  } else {
   var_1_54 = ((((5) > ((var_1_13 + var_1_36))) ? (5) : ((var_1_13 + var_1_36))));
  }
 } else {
  if (var_1_82 >= ((((var_1_28) < ((128 / var_1_26))) ? (var_1_28) : ((128 / var_1_26))))) {
   var_1_54 = var_1_13;
  } else {
   if ((var_1_29 - var_1_21) > var_1_28) {
    var_1_54 = var_1_12;
   }
  }
 }
 if (var_1_90 <= var_1_106) {
  var_1_74 = (var_1_37 + var_1_115);
 } else {
  var_1_74 = (var_1_27 - var_1_92);
 }
 if (var_1_66 || (4 < var_1_82)) {
  var_1_50 = (var_1_41 + ((var_1_42 + 24.4) - var_1_40));
 } else {
  var_1_50 = ((((((var_1_42 + 9.999999999999962E13)) > (var_1_40)) ? ((var_1_42 + 9.999999999999962E13)) : (var_1_40))) + var_1_41);
 }
 unsigned long int stepLocal_11 = var_1_67 >> var_1_62;
 if ((var_1_51 * (var_1_15 * var_1_115)) < stepLocal_11) {
  var_1_61 = (((((((((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) < (var_1_62)) ? (((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) : (var_1_62))) < 0 ) ? -((((((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) < (var_1_62)) ? (((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) : (var_1_62))) : ((((((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) < (var_1_62)) ? (((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) : (var_1_62)))));
 }
 if ((var_1_24 - var_1_18) <= (var_1_58 - var_1_17)) {
  var_1_57 = (((((var_1_67) < (((((last_1_var_1_57) < (var_1_70)) ? (last_1_var_1_57) : (var_1_70))))) ? (var_1_67) : (((((last_1_var_1_57) < (var_1_70)) ? (last_1_var_1_57) : (var_1_70)))))) + var_1_59);
 } else {
  if (var_1_102 <= var_1_74) {
   var_1_57 = (var_1_108 + ((var_1_60 - var_1_31) + 500u));
  } else {
   var_1_57 = (2956407358u - (((((var_1_85) < 0 ) ? -(var_1_85) : (var_1_85))) + var_1_70));
  }
 }
 unsigned long int stepLocal_3 = var_1_15 + var_1_23;
 unsigned short int stepLocal_2 = var_1_26;
 if (10u == stepLocal_3) {
  if ((- var_1_72) < 63.83) {
   var_1_25 = ((((var_1_54) < (((var_1_17 + var_1_26) - 128))) ? (var_1_54) : (((var_1_17 + var_1_26) - 128))));
  } else {
   if (((var_1_13 * 2) | var_1_104) < stepLocal_2) {
    var_1_25 = (var_1_27 - var_1_14);
   }
  }
 } else {
  if (! var_1_48) {
   var_1_25 = ((((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))) - ((((2) < (var_1_14)) ? (2) : (var_1_14)))) - var_1_26);
  } else {
   var_1_25 = (var_1_29 - var_1_85);
  }
 }
 unsigned long int stepLocal_4 = var_1_108;
 if (((((var_1_13) < (var_1_32)) ? (var_1_13) : (var_1_32))) <= stepLocal_4) {
  var_1_30 = (((var_1_31 - 50) - (var_1_44 + var_1_25)) + var_1_107);
 } else {
  var_1_30 = ((var_1_15 + 4) - var_1_85);
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 127);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 16383);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 1610612735);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 16384);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 32767);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 49150);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 49150);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 8191);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 64);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 2305843.009213691400e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 254);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 2147483647);
 assume_abort_if_not(var_1_58 <= 4294967295);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 2147483647);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 536870912);
 assume_abort_if_not(var_1_60 <= 1073741824);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 1);
 assume_abort_if_not(var_1_62 <= 15);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 63);
 assume_abort_if_not(var_1_64 <= 127);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 127);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 4294967294);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 0);
 assume_abort_if_not(var_1_71 <= 127);
 var_1_76 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 7);
 var_1_77 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_77 >= 1);
 assume_abort_if_not(var_1_77 <= 7);
 var_1_78 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_78 >= 0);
 assume_abort_if_not(var_1_78 <= 127);
 var_1_80 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854766000e+12F && var_1_80 >= 1.0e-20F ));
 var_1_83 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_83 >= 2147483647);
 assume_abort_if_not(var_1_83 <= 4294967294);
 var_1_87 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_87 >= 2147483647);
 assume_abort_if_not(var_1_87 <= 4294967295);
 var_1_89 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_89 >= -922337.2036854776000e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854776000e+12F && var_1_89 >= 1.0e-20F ));
 assume_abort_if_not(var_1_89 != 0.0F);
 var_1_91 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_91 >= -2147483647);
 assume_abort_if_not(var_1_91 <= 2147483646);
 var_1_95 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_95 >= -461168.6018427383000e+13F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 4611686.018427383000e+12F && var_1_95 >= 1.0e-20F ));
 var_1_98 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_98 >= 0.0F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 2305843.009213691400e+12F && var_1_98 >= 1.0e-20F ));
 var_1_99 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_99 >= 4611686.018427383000e+12F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854766000e+12F && var_1_99 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_21 = var_1_21;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_74 = var_1_74;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_82 = var_1_82;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_97 = var_1_97;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_104 = var_1_104;
 last_1_var_1_113 = var_1_113;
 last_1_var_1_115 = var_1_115;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_20 <= var_1_43) ? (((var_1_20 ^ (var_1_43 ^ var_1_21)) < var_1_104) ? (var_1_1 == ((unsigned char) (var_1_6 || var_1_7))) : (((var_1_104 == var_1_20) || (var_1_7 && (var_1_43 <= 64))) ? (var_1_1 == ((unsigned char) ((var_1_8 && (! var_1_7)) && (var_1_9 && var_1_10)))) : (var_1_10 ? (var_1_1 == ((unsigned char) (var_1_7 || var_1_6))) : 1))) : 1) && ((var_1_85 <= (var_1_88 * 16)) ? (var_1_7 ? (var_1_6 ? ((var_1_92 >= (var_1_108 + var_1_88)) ? (var_1_11 == ((unsigned char) var_1_12)) : 1) : (var_1_10 ? (var_1_11 == ((unsigned char) ((((var_1_12) > ((25 + var_1_13))) ? (var_1_12) : ((25 + var_1_13)))))) : (var_1_11 == ((unsigned char) (((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_13))))) : 1) : 1)) && (var_1_10 ? (var_1_16 == ((signed short int) (((16 + var_1_13) - 32) + ((((var_1_14) < ((var_1_49 + var_1_12))) ? (var_1_14) : ((var_1_49 + var_1_12))))))) : (var_1_16 == ((signed short int) (-1 - (var_1_17 - var_1_88)))))) && ((64.5 >= var_1_86) ? (var_1_18 == ((unsigned char) (var_1_14 - var_1_13))) : 1)) && (var_1_20 == ((signed long int) ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) && ((((((5.8f) > (last_1_var_1_50)) ? (5.8f) : (last_1_var_1_50))) > last_1_var_1_94) ? ((var_1_17 > var_1_14) ? (var_1_21 == ((unsigned long int) ((var_1_14 + var_1_17) + ((var_1_23 - var_1_15) - ((((var_1_13) > (last_1_var_1_85)) ? (var_1_13) : (last_1_var_1_85))))))) : 1) : ((last_1_var_1_67 != (var_1_14 - var_1_13)) ? (var_1_21 == ((unsigned long int) (var_1_13 + var_1_17))) : (var_1_21 == ((unsigned long int) (((((2382252522u) < (var_1_24)) ? (2382252522u) : (var_1_24))) - last_1_var_1_21)))))) && ((10u == (var_1_15 + var_1_23)) ? (((- var_1_72) < 63.83) ? (var_1_25 == ((unsigned short int) ((((var_1_54) < (((var_1_17 + var_1_26) - 128))) ? (var_1_54) : (((var_1_17 + var_1_26) - 128)))))) : ((((var_1_13 * 2) | var_1_104) < var_1_26) ? (var_1_25 == ((unsigned short int) (var_1_27 - var_1_14))) : 1)) : ((! var_1_48) ? (var_1_25 == ((unsigned short int) ((((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))) - ((((2) < (var_1_14)) ? (2) : (var_1_14)))) - var_1_26))) : (var_1_25 == ((unsigned short int) (var_1_29 - var_1_85)))))) && ((((((var_1_13) < (var_1_32)) ? (var_1_13) : (var_1_32))) <= var_1_108) ? (var_1_30 == ((signed short int) (((var_1_31 - 50) - (var_1_44 + var_1_25)) + var_1_107))) : (var_1_30 == ((signed short int) ((var_1_15 + 4) - var_1_85))))) && (((var_1_31 < ((((last_1_var_1_57) > (var_1_13)) ? (last_1_var_1_57) : (var_1_13)))) && last_1_var_1_48) ? ((var_1_17 > last_1_var_1_49) ? (var_1_32 == ((unsigned short int) ((var_1_28 - last_1_var_1_74) - last_1_var_1_104))) : 1) : 1)) && ((var_1_111 > var_1_28) ? (var_1_34 == ((unsigned char) ((((var_1_14) < (((var_1_36 + var_1_37) + ((((var_1_13) < (16)) ? (var_1_13) : (16)))))) ? (var_1_14) : (((var_1_36 + var_1_37) + ((((var_1_13) < (16)) ? (var_1_13) : (16))))))))) : ((var_1_115 == var_1_17) ? (var_1_34 == ((unsigned char) var_1_15)) : (var_1_34 == ((unsigned char) ((((((((var_1_36) > (var_1_15)) ? (var_1_36) : (var_1_15)))) < (var_1_13)) ? (((((var_1_36) > (var_1_15)) ? (var_1_36) : (var_1_15)))) : (var_1_13)))))))) && ((var_1_110 <= (var_1_97 * var_1_110)) ? ((var_1_15 >= var_1_104) ? (var_1_38 == ((float) (4.75f - (var_1_40 + (var_1_41 - var_1_42))))) : (var_1_38 == ((float) (var_1_41 - var_1_40)))) : (((var_1_36 - var_1_37) <= var_1_14) ? (var_1_38 == ((float) (((((var_1_42 - ((((4.8f) < 0 ) ? -(4.8f) : (4.8f))))) < (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) ? ((var_1_42 - ((((4.8f) < 0 ) ? -(4.8f) : (4.8f))))) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))))))) : 1))) && ((((var_1_41 - 0.2f) * var_1_42) > (var_1_94 + var_1_110)) ? (var_1_43 == ((signed long int) ((((var_1_100) < (var_1_108)) ? (var_1_100) : (var_1_108))))) : (var_1_43 == ((signed long int) (((((((((var_1_32) < (var_1_13)) ? (var_1_32) : (var_1_13))) - var_1_92)) < (var_1_108)) ? ((((((var_1_32) < (var_1_13)) ? (var_1_32) : (var_1_13))) - var_1_92)) : (var_1_108))))))) && (var_1_44 == ((signed short int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) && ((var_1_6 || var_1_9) ? (((var_1_14 - (var_1_37 + var_1_46)) > (var_1_23 - var_1_31)) ? (var_1_45 == ((unsigned char) var_1_7)) : (var_1_45 == ((unsigned char) (var_1_7 || var_1_6)))) : 1)) && (var_1_8 ? (var_1_6 ? (var_1_47 == ((unsigned char) var_1_7)) : (var_1_47 == ((unsigned char) ((! 0) && var_1_10)))) : (var_1_47 == ((unsigned char) (var_1_10 || (! var_1_7)))))) && (var_1_48 == ((unsigned char) (! var_1_7)))) && ((var_1_112 <= (- 2)) ? (var_1_49 == ((unsigned char) ((((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) > ((var_1_14 - var_1_37))) ? (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) : ((var_1_14 - var_1_37)))))) : 1)) && ((var_1_66 || (4 < var_1_82)) ? (var_1_50 == ((double) (var_1_41 + ((var_1_42 + 24.4) - var_1_40)))) : (var_1_50 == ((double) ((((((var_1_42 + 9.999999999999962E13)) > (var_1_40)) ? ((var_1_42 + 9.999999999999962E13)) : (var_1_40))) + var_1_41))))) && ((last_1_var_1_25 != (last_1_var_1_82 & ((((var_1_12) > (last_1_var_1_84)) ? (var_1_12) : (last_1_var_1_84))))) ? (var_1_51 == ((unsigned short int) ((((var_1_17) > (var_1_36)) ? (var_1_17) : (var_1_36))))) : (((var_1_37 << 2) >= last_1_var_1_51) ? (var_1_51 == ((unsigned short int) var_1_31)) : 1))) && (var_1_53 == ((float) var_1_42))) && (((~ var_1_82) < var_1_28) ? ((var_1_82 > var_1_51) ? (var_1_54 == ((unsigned char) ((((var_1_55) < 0 ) ? -(var_1_55) : (var_1_55))))) : (var_1_54 == ((unsigned char) ((((5) > ((var_1_13 + var_1_36))) ? (5) : ((var_1_13 + var_1_36))))))) : ((var_1_82 >= ((((var_1_28) < ((128 / var_1_26))) ? (var_1_28) : ((128 / var_1_26))))) ? (var_1_54 == ((unsigned char) var_1_13)) : (((var_1_29 - var_1_21) > var_1_28) ? (var_1_54 == ((unsigned char) var_1_12)) : 1)))) && ((var_1_26 > var_1_28) ? (var_1_56 == ((float) var_1_41)) : (var_1_56 == ((float) ((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41))))))) && (((var_1_24 - var_1_18) <= (var_1_58 - var_1_17)) ? (var_1_57 == ((unsigned long int) (((((var_1_67) < (((((last_1_var_1_57) < (var_1_70)) ? (last_1_var_1_57) : (var_1_70))))) ? (var_1_67) : (((((last_1_var_1_57) < (var_1_70)) ? (last_1_var_1_57) : (var_1_70)))))) + var_1_59))) : ((var_1_102 <= var_1_74) ? (var_1_57 == ((unsigned long int) (var_1_108 + ((var_1_60 - var_1_31) + 500u)))) : (var_1_57 == ((unsigned long int) (2956407358u - (((((var_1_85) < 0 ) ? -(var_1_85) : (var_1_85))) + var_1_70))))))) && (((var_1_51 * (var_1_15 * var_1_115)) < (var_1_67 >> var_1_62)) ? (var_1_61 == ((unsigned char) (((((((((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) < (var_1_62)) ? (((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) : (var_1_62))) < 0 ) ? -((((((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) < (var_1_62)) ? (((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) : (var_1_62))) : ((((((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) < (var_1_62)) ? (((((var_1_12) < (var_1_46)) ? (var_1_12) : (var_1_46)))) : (var_1_62))))))) : 1)) && ((var_1_26 > var_1_115) ? (var_1_63 == ((unsigned char) ((((var_1_15) < ((var_1_46 + (var_1_64 - var_1_37)))) ? (var_1_15) : ((var_1_46 + (var_1_64 - var_1_37))))))) : (var_1_63 == ((unsigned char) (((((var_1_64) < (var_1_62)) ? (var_1_64) : (var_1_62))) + var_1_65))))) && ((var_1_11 >= var_1_16) ? (var_1_66 == ((unsigned char) (((0 < var_1_13) && var_1_7) || var_1_6))) : (var_1_66 == ((unsigned char) (var_1_1 || (var_1_10 || (! var_1_6))))))) && (((var_1_38 > 32.8f) && var_1_1) ? ((((var_1_72 * var_1_97) == var_1_97) && ((var_1_64 * var_1_32) != var_1_36)) ? ((var_1_82 > (var_1_100 ^ var_1_108)) ? (var_1_67 == ((unsigned long int) ((((var_1_17) < (var_1_69)) ? (var_1_17) : (var_1_69))))) : (var_1_67 == ((unsigned long int) (((var_1_60 - var_1_37) + var_1_108) + var_1_36)))) : 1) : (var_1_67 == ((unsigned long int) (var_1_112 + 4u))))) && (var_1_6 ? (var_1_70 == ((unsigned char) (var_1_37 + var_1_71))) : (((31.02f + var_1_40) == var_1_86) ? ((var_1_48 || var_1_8) ? (var_1_70 == ((unsigned char) ((((var_1_55) < (var_1_64)) ? (var_1_55) : (var_1_64))))) : 1) : (var_1_70 == ((unsigned char) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))))) && ((var_1_24 >= last_1_var_1_92) ? (var_1_72 == ((double) ((var_1_41 + var_1_42) - var_1_40))) : (var_1_72 == ((double) (var_1_40 + var_1_42))))) && (((var_1_9 || var_1_7) || var_1_1) ? (var_1_73 == ((signed char) (var_1_62 - 64))) : (var_1_73 == ((signed char) (var_1_46 + var_1_62))))) && ((var_1_90 <= var_1_106) ? (var_1_74 == ((unsigned short int) (var_1_37 + var_1_115))) : (var_1_74 == ((unsigned short int) (var_1_27 - var_1_92))))) && (((var_1_21 >> (var_1_76 + var_1_77)) >= -64) ? (var_1_75 == ((unsigned char) (var_1_15 - var_1_78))) : (var_1_75 == ((unsigned char) (var_1_78 + (var_1_64 - var_1_46)))))) && ((var_1_76 >= var_1_112) ? (var_1_79 == ((double) ((((((var_1_42 + var_1_41) - ((((2.2) > (var_1_80)) ? (2.2) : (var_1_80))))) > (var_1_40)) ? (((var_1_42 + var_1_41) - ((((2.2) > (var_1_80)) ? (2.2) : (var_1_80))))) : (var_1_40))))) : 1)) && (((var_1_104 / var_1_15) <= var_1_88) ? (var_1_81 == ((signed char) ((((var_1_62) > (var_1_76)) ? (var_1_62) : (var_1_76))))) : (var_1_81 == ((signed char) ((((((var_1_76) < 0 ) ? -(var_1_76) : (var_1_76))) + var_1_62) + var_1_46))))) && (var_1_6 ? (var_1_82 == ((unsigned long int) (((((((((var_1_24 - var_1_105)) > ((var_1_83 - var_1_46))) ? ((var_1_24 - var_1_105)) : ((var_1_83 - var_1_46))))) > (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))))) ? ((((((var_1_24 - var_1_105)) > ((var_1_83 - var_1_46))) ? ((var_1_24 - var_1_105)) : ((var_1_83 - var_1_46))))) : (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))))))) : ((((var_1_77 / var_1_31) % var_1_23) >= var_1_34) ? (var_1_82 == ((unsigned long int) var_1_37)) : (var_1_82 == ((unsigned long int) (((((var_1_83 - var_1_55)) > (var_1_65)) ? ((var_1_83 - var_1_55)) : (var_1_65)))))))) && ((var_1_46 > var_1_29) ? (var_1_84 == ((unsigned long int) ((2101242744u + var_1_23) - ((((last_1_var_1_85) < ((var_1_37 + last_1_var_1_57))) ? (last_1_var_1_85) : ((var_1_37 + last_1_var_1_57))))))) : (var_1_84 == ((unsigned long int) (var_1_27 + last_1_var_1_115))))) && ((! (var_1_42 >= last_1_var_1_50)) ? (var_1_85 == ((unsigned long int) ((((0u) < ((var_1_27 + var_1_71))) ? (0u) : ((var_1_27 + var_1_71)))))) : 1)) && ((! (! (var_1_111 <= var_1_13))) ? ((((((var_1_40) < (127.152f)) ? (var_1_40) : (127.152f))) >= var_1_72) ? ((var_1_69 <= (((((var_1_87) < (var_1_24)) ? (var_1_87) : (var_1_24))) - (var_1_23 - var_1_85))) ? (var_1_86 == ((double) ((((9.5) < ((var_1_80 - var_1_40))) ? (9.5) : ((var_1_80 - var_1_40)))))) : 1) : ((var_1_31 != (var_1_62 / 32)) ? (var_1_86 == ((double) ((((var_1_42) < (9999999.2)) ? (var_1_42) : (9999999.2))))) : 1)) : 1)) && (((var_1_72 / ((((var_1_41) > (var_1_89)) ? (var_1_41) : (var_1_89)))) >= var_1_79) ? ((var_1_78 > var_1_21) ? (var_1_88 == ((signed long int) (var_1_31 + (var_1_115 - var_1_12)))) : (var_1_88 == ((signed long int) var_1_104))) : (var_1_88 == ((signed long int) var_1_105)))) && ((! var_1_6) ? (var_1_90 == ((signed long int) var_1_91)) : (var_1_90 == ((signed long int) (var_1_13 + var_1_88))))) && (((last_1_var_1_79 * last_1_var_1_72) < (last_1_var_1_94 / var_1_41)) ? (var_1_92 == ((unsigned long int) ((((var_1_64) > (2u)) ? (var_1_64) : (2u))))) : 1)) && ((var_1_84 == (var_1_23 + var_1_92)) ? (var_1_94 == ((double) ((var_1_40 - var_1_41) + var_1_95))) : (var_1_94 == ((double) (var_1_41 - var_1_40))))) && ((((2.4 * last_1_var_1_103) + var_1_42) < last_1_var_1_113) ? (var_1_96 == ((unsigned char) (! var_1_9))) : (var_1_96 == ((unsigned char) ((-16 >= last_1_var_1_57) || var_1_10))))) && (((var_1_46 - var_1_108) == var_1_21) ? (var_1_97 == ((double) (var_1_40 - ((var_1_42 + var_1_98) + var_1_41)))) : (var_1_6 ? (var_1_97 == ((double) (var_1_40 + (var_1_42 - var_1_98)))) : (var_1_97 == ((double) (((((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) < ((var_1_99 - 64.7))) ? (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))) : ((var_1_99 - 64.7)))) - var_1_41)))))) && (var_1_45 ? (var_1_100 == ((unsigned short int) var_1_13)) : (var_1_100 == ((unsigned short int) var_1_36)))) && (var_1_9 ? (var_1_101 == ((unsigned char) var_1_78)) : (var_1_101 == ((unsigned char) var_1_13)))) && (var_1_102 == ((signed long int) var_1_26))) && (var_1_103 == ((double) 255.8))) && (var_1_104 == ((unsigned long int) last_1_var_1_104))) && (var_1_105 == ((signed long int) var_1_71))) && (var_1_9 ? (var_1_106 == ((signed short int) var_1_85)) : (var_1_106 == ((signed short int) var_1_71)))) && (var_1_107 == ((unsigned char) var_1_14))) && (last_1_var_1_47 ? (var_1_108 == ((unsigned long int) last_1_var_1_74)) : (var_1_108 == ((unsigned long int) var_1_23)))) && (var_1_8 ? (var_1_109 == ((float) var_1_41)) : (var_1_109 == ((float) var_1_99)))) && (var_1_47 ? (var_1_110 == ((double) var_1_41)) : 1)) && (var_1_111 == ((signed short int) var_1_77))) && (var_1_112 == ((unsigned long int) var_1_63))) && (var_1_96 ? (var_1_113 == ((float) var_1_80)) : (var_1_113 == ((float) 1.00000000000625E11f)))) && (var_1_114 == ((signed char) (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) - (var_1_46 + var_1_76))))) && ((last_1_var_1_97 >= 256.8) ? (var_1_115 == ((unsigned long int) ((var_1_23 - var_1_62) + 100u))) : 1)
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
