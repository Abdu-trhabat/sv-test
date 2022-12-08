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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
signed short int var_1_4 = 31024;
signed long int var_1_8 = 32;
unsigned short int var_1_9 = 41562;
signed short int var_1_10 = 64;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned long int var_1_16 = 64;
signed short int var_1_17 = 200;
signed char var_1_22 = 0;
float var_1_24 = 99.125;
signed char var_1_26 = 8;
signed char var_1_27 = 5;
unsigned long int var_1_28 = 0;
float var_1_29 = 127.5;
float var_1_30 = 1000000.8;
float var_1_31 = 9999999999999.4;
float var_1_32 = 10.6;
float var_1_33 = 127.5;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 16;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 8;
unsigned short int var_1_40 = 64;
unsigned char var_1_41 = 4;
unsigned char var_1_42 = 10;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 64;
unsigned char var_1_45 = 8;
float var_1_46 = 15.2;
float var_1_48 = 256.3;
float var_1_49 = 63.8;
float var_1_50 = 0.0;
float var_1_51 = 24.38;
float var_1_53 = 0.0;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
signed short int var_1_57 = -8;
float var_1_58 = 0.0;
unsigned char var_1_59 = 1;
signed char var_1_60 = 16;
unsigned long int var_1_61 = 32;
unsigned char var_1_62 = 4;
unsigned char var_1_63 = 128;
unsigned char var_1_64 = 128;
unsigned long int var_1_65 = 2;
unsigned short int var_1_66 = 45451;
unsigned long int var_1_67 = 2278310670;
signed short int var_1_68 = 28162;
unsigned long int var_1_69 = 1078709293;
unsigned long int var_1_70 = 128;
double var_1_71 = 128.5;
unsigned long int var_1_73 = 10;
unsigned long int var_1_74 = 1494779512;
unsigned char var_1_75 = 1;
unsigned short int var_1_77 = 4;
unsigned short int var_1_79 = 10000;
signed short int var_1_80 = -32;
unsigned long int var_1_81 = 4;
unsigned long int var_1_82 = 1000000000;
unsigned char var_1_83 = 5;
unsigned char var_1_84 = 0;
double var_1_85 = 5.2;
double var_1_86 = 0.5;
unsigned char var_1_87 = 25;
signed long int var_1_88 = -32;
signed short int var_1_89 = -128;
signed short int var_1_90 = -50;
float var_1_91 = 256.5;
signed char var_1_92 = 4;
signed char var_1_93 = -4;
signed char var_1_94 = 2;
unsigned char var_1_95 = 0;
signed char var_1_96 = -32;
float var_1_97 = 3.25;
unsigned char var_1_98 = 16;
signed short int var_1_99 = 256;
unsigned char var_1_100 = 32;
double var_1_101 = 3.79;
signed short int last_1_var_1_1 = 16;
signed long int last_1_var_1_8 = 32;
signed short int last_1_var_1_10 = 64;
unsigned char last_1_var_1_12 = 1;
signed short int last_1_var_1_17 = 200;
signed char last_1_var_1_22 = 0;
unsigned long int last_1_var_1_28 = 0;
float last_1_var_1_29 = 127.5;
float last_1_var_1_33 = 127.5;
unsigned char last_1_var_1_41 = 4;
unsigned char last_1_var_1_43 = 5;
float last_1_var_1_46 = 15.2;
unsigned char last_1_var_1_54 = 1;
unsigned char last_1_var_1_59 = 1;
unsigned long int last_1_var_1_61 = 32;
unsigned char last_1_var_1_62 = 4;
unsigned long int last_1_var_1_65 = 2;
unsigned long int last_1_var_1_70 = 128;
unsigned short int last_1_var_1_77 = 4;
signed short int last_1_var_1_80 = -32;
unsigned long int last_1_var_1_81 = 4;
unsigned char last_1_var_1_83 = 5;
unsigned char last_1_var_1_84 = 0;
double last_1_var_1_85 = 5.2;
unsigned char last_1_var_1_87 = 25;
signed long int last_1_var_1_88 = -32;
signed short int last_1_var_1_89 = -128;
signed short int last_1_var_1_90 = -50;
unsigned char last_1_var_1_98 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_12 = last_1_var_1_87;
 if (last_1_var_1_87 >= stepLocal_12) {
  var_1_34 = (var_1_35 + (((((1 + var_1_36)) < (var_1_37)) ? ((1 + var_1_36)) : (var_1_37))));
 } else {
  var_1_34 = (((var_1_38 + 100) - ((((var_1_36) > (var_1_39)) ? (var_1_36) : (var_1_39)))) - var_1_37);
 }
 var_1_81 = (var_1_67 - (var_1_64 + (var_1_82 - var_1_34)));
 if (last_1_var_1_29 != ((var_1_58 - var_1_50) - var_1_51)) {
  var_1_57 = ((var_1_45 + 5) + (var_1_36 + last_1_var_1_65));
 }
 signed char stepLocal_19 = var_1_27;
 unsigned char stepLocal_18 = last_1_var_1_12;
 unsigned long int stepLocal_17 = last_1_var_1_61 + (2 - var_1_36);
 unsigned long int stepLocal_16 = last_1_var_1_70;
 signed long int stepLocal_15 = var_1_42 - var_1_35;
 if (stepLocal_17 <= var_1_42) {
  if (var_1_39 < stepLocal_16) {
   var_1_46 = (((((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) > (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49))))) ? ((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) : (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49))))));
  } else {
   if (last_1_var_1_98 < stepLocal_19) {
    var_1_46 = (499.45f - ((var_1_50 - var_1_51) + var_1_48));
   } else {
    if (((((last_1_var_1_62) < (last_1_var_1_89)) ? (last_1_var_1_62) : (last_1_var_1_89))) != stepLocal_15) {
     var_1_46 = ((((var_1_30) < ((var_1_50 - (var_1_53 - var_1_48)))) ? (var_1_30) : ((var_1_50 - (var_1_53 - var_1_48)))));
    } else {
     if (stepLocal_18 && var_1_13) {
      var_1_46 = ((((var_1_51) < (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31)))))) ? (var_1_51) : (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31)))))));
     }
    }
   }
  }
 } else {
  if (last_1_var_1_33 <= var_1_32) {
   var_1_46 = ((((var_1_50 + var_1_48) < 0 ) ? -(var_1_50 + var_1_48) : (var_1_50 + var_1_48)));
  }
 }
 if (last_1_var_1_54) {
  var_1_92 = var_1_42;
 } else {
  var_1_92 = var_1_36;
 }
 signed long int stepLocal_6 = (last_1_var_1_43 / var_1_4) * ((((var_1_9) > (last_1_var_1_62)) ? (var_1_9) : (last_1_var_1_62)));
 if (((last_1_var_1_90 + 10u) * last_1_var_1_43) < stepLocal_6) {
  var_1_16 = ((32u + last_1_var_1_43) + ((((last_1_var_1_43) < (last_1_var_1_41)) ? (last_1_var_1_43) : (last_1_var_1_41))));
 }
 signed long int stepLocal_14 = ((((var_1_37 - last_1_var_1_8)) > (var_1_27)) ? ((var_1_37 - last_1_var_1_8)) : (var_1_27));
 if (((100 + var_1_38) - (var_1_44 - var_1_36)) > stepLocal_14) {
  if (last_1_var_1_84) {
   var_1_43 = var_1_38;
  } else {
   var_1_43 = (var_1_36 + (var_1_44 - var_1_39));
  }
 } else {
  var_1_43 = ((var_1_44 + (var_1_38 - var_1_45)) - var_1_37);
 }
 if (last_1_var_1_59) {
  if (last_1_var_1_12) {
   var_1_83 = (var_1_64 - var_1_37);
  } else {
   var_1_83 = (128 - 16);
  }
 } else {
  if (last_1_var_1_85 >= last_1_var_1_46) {
   var_1_83 = ((((var_1_39) < (var_1_45)) ? (var_1_39) : (var_1_45)));
  } else {
   var_1_83 = ((((var_1_35) < ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))) ? (var_1_35) : ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))));
  }
 }
 signed long int stepLocal_25 = (((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63));
 signed long int stepLocal_24 = last_1_var_1_62 - (var_1_68 - var_1_64);
 signed long int stepLocal_23 = ((((last_1_var_1_83) > (var_1_9)) ? (last_1_var_1_83) : (var_1_9))) / (var_1_66 - var_1_4);
 if (0u <= stepLocal_25) {
  if (stepLocal_23 <= last_1_var_1_88) {
   var_1_65 = (((((((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) > (var_1_42)) ? (((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) : (var_1_42))) + last_1_var_1_10);
  } else {
   var_1_65 = (((((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) > (last_1_var_1_17)) ? ((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) : (last_1_var_1_17)));
  }
 } else {
  if (stepLocal_24 <= -25) {
   if (last_1_var_1_33 < 16.6f) {
    var_1_65 = (((((last_1_var_1_1) > (var_1_36)) ? (last_1_var_1_1) : (var_1_36))) + (var_1_9 + ((((last_1_var_1_81) > (var_1_68)) ? (last_1_var_1_81) : (var_1_68)))));
   } else {
    var_1_65 = ((((last_1_var_1_62) > ((var_1_67 - (var_1_69 - last_1_var_1_43)))) ? (last_1_var_1_62) : ((var_1_67 - (var_1_69 - last_1_var_1_43)))));
   }
  }
 }
 if (((var_1_65 / var_1_44) % var_1_38) <= var_1_64) {
  var_1_70 = (((((var_1_45) > (var_1_39)) ? (var_1_45) : (var_1_39))) + last_1_var_1_70);
 } else {
  var_1_70 = (var_1_67 - (var_1_69 - 25u));
 }
 signed long int stepLocal_13 = last_1_var_1_22;
 if (last_1_var_1_1 <= stepLocal_13) {
  if (last_1_var_1_59) {
   var_1_41 = ((var_1_36 + var_1_39) + var_1_37);
  } else {
   if (var_1_13) {
    var_1_41 = ((((var_1_39) > (var_1_37)) ? (var_1_39) : (var_1_37)));
   } else {
    var_1_41 = ((((((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) > (var_1_38)) ? (((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) : (var_1_38)));
   }
  }
 } else {
  var_1_41 = (var_1_37 + ((((var_1_36) > ((var_1_39 + var_1_42))) ? (var_1_36) : ((var_1_39 + var_1_42)))));
 }
 if (var_1_50 != last_1_var_1_29) {
  var_1_62 = (((((var_1_63 - var_1_37)) > ((var_1_64 - var_1_36))) ? ((var_1_63 - var_1_37)) : ((var_1_64 - var_1_36))));
 }
 if (var_1_31 > 32.5f) {
  var_1_88 = ((((var_1_62) < (-32)) ? (var_1_62) : (-32)));
 }
 var_1_15 = (! var_1_14);
 var_1_40 = var_1_4;
 var_1_59 = (! var_1_14);
 if (((((var_1_32) > (var_1_49)) ? (var_1_32) : (var_1_49))) <= (var_1_50 / var_1_58)) {
  var_1_60 = ((((var_1_42) > (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45))))) ? (var_1_42) : (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45))))));
 }
 var_1_91 = 64.75f;
 if (var_1_15) {
  var_1_93 = var_1_36;
 } else {
  var_1_93 = var_1_42;
 }
 var_1_95 = var_1_56;
 if (var_1_14) {
  var_1_97 = var_1_49;
 } else {
  var_1_97 = var_1_86;
 }
 if (var_1_13) {
  var_1_98 = 100;
 } else {
  var_1_98 = var_1_35;
 }
 if (var_1_15) {
  var_1_100 = var_1_44;
 } else {
  var_1_100 = var_1_35;
 }
 signed short int stepLocal_10 = var_1_4;
 unsigned char stepLocal_9 = var_1_41;
 if (var_1_16 == stepLocal_9) {
  var_1_29 = (var_1_30 + ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32))));
 } else {
  if (var_1_57 < stepLocal_10) {
   var_1_29 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
  } else {
   var_1_29 = var_1_32;
  }
 }
 signed long int stepLocal_26 = var_1_92 + 5;
 if (stepLocal_26 < ((((var_1_88) > (var_1_68)) ? (var_1_88) : (var_1_68)))) {
  var_1_73 = (256u + 16u);
 } else {
  var_1_73 = (var_1_69 + (var_1_74 - ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))));
 }
 unsigned char stepLocal_8 = var_1_62;
 unsigned long int stepLocal_7 = var_1_16 & var_1_83;
 if (last_1_var_1_28 == stepLocal_7) {
  if (var_1_34 <= stepLocal_8) {
   var_1_28 = (3421856207u - (var_1_34 + (var_1_9 + var_1_4)));
  } else {
   if (var_1_13) {
    var_1_28 = (8u + var_1_34);
   } else {
    var_1_28 = ((var_1_34 + var_1_34) + var_1_4);
   }
  }
 }
 unsigned char stepLocal_11 = (var_1_83 * var_1_4) > var_1_65;
 if (stepLocal_11 && var_1_13) {
  var_1_33 = ((((var_1_31) < ((var_1_32 + 9.9999999999965E11f))) ? (var_1_31) : ((var_1_32 + 9.9999999999965E11f))));
 }
 unsigned long int stepLocal_5 = var_1_70;
 if (stepLocal_5 < var_1_34) {
  var_1_12 = (! var_1_13);
 } else {
  var_1_12 = (var_1_13 && var_1_14);
 }
 if (! (var_1_81 >= var_1_88)) {
  var_1_89 = ((((-128) < (((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65))))) ? (-128) : (((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65))))));
 }
 unsigned char stepLocal_2 = var_1_41;
 unsigned char stepLocal_1 = var_1_41;
 unsigned long int stepLocal_0 = var_1_41 * (var_1_70 + var_1_4);
 if (stepLocal_1 <= var_1_70) {
  if ((- var_1_70) > stepLocal_2) {
   var_1_1 = ((var_1_4 - var_1_41) - var_1_62);
  }
 } else {
  if (stepLocal_0 > var_1_62) {
   var_1_1 = (var_1_41 + var_1_34);
  } else {
   var_1_1 = var_1_62;
  }
 }
 if (var_1_63 < last_1_var_1_77) {
  var_1_77 = ((((((((var_1_62) > (var_1_64)) ? (var_1_62) : (var_1_64)))) > (var_1_44)) ? (((((var_1_62) > (var_1_64)) ? (var_1_62) : (var_1_64)))) : (var_1_44)));
 } else {
  if ((var_1_51 + 31.8f) >= (var_1_33 + (var_1_24 + var_1_97))) {
   var_1_77 = (var_1_98 + (var_1_63 + (var_1_79 - var_1_45)));
  } else {
   var_1_77 = ((((var_1_44) < (var_1_35)) ? (var_1_44) : (var_1_35)));
  }
 }
 unsigned short int stepLocal_34 = var_1_40;
 if (((var_1_93 + 32) + (500 - var_1_74)) >= stepLocal_34) {
  var_1_85 = ((((var_1_32) < ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5)))) ? (var_1_32) : ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5)))));
 } else {
  var_1_85 = ((((((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) < (var_1_86)) ? (((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) : (var_1_86)));
 }
 var_1_99 = var_1_28;
 unsigned long int stepLocal_35 = var_1_81;
 if (var_1_85 <= var_1_32) {
  var_1_87 = ((((var_1_38) > (var_1_63)) ? (var_1_38) : (var_1_63)));
 } else {
  if (last_1_var_1_87 > stepLocal_35) {
   var_1_87 = (var_1_63 - var_1_45);
  }
 }
 unsigned long int stepLocal_20 = var_1_36 * (var_1_65 + var_1_89);
 if ((~ ((((var_1_37) < (var_1_41)) ? (var_1_37) : (var_1_41)))) >= stepLocal_20) {
  if ((((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))) - var_1_53) > (var_1_91 * var_1_46)) {
   var_1_54 = (var_1_55 || var_1_56);
  } else {
   var_1_54 = ((! var_1_55) && var_1_14);
  }
 }
 if (var_1_43 >= var_1_41) {
  if ((var_1_12 || var_1_12) && (1.6f > var_1_85)) {
   var_1_101 = var_1_30;
  } else {
   var_1_101 = (var_1_31 + (var_1_51 - var_1_50));
  }
 } else {
  var_1_101 = var_1_48;
 }
 if ((var_1_85 * (var_1_24 - 255.7f)) == var_1_91) {
  var_1_22 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 } else {
  var_1_22 = ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27)));
 }
 if ((var_1_101 / var_1_53) < var_1_58) {
  var_1_71 = (((((var_1_50) > (2.75)) ? (var_1_50) : (2.75))) + var_1_51);
 }
 if ((var_1_35 * var_1_41) <= last_1_var_1_80) {
  var_1_80 = ((((var_1_87) < (var_1_27)) ? (var_1_87) : (var_1_27)));
 } else {
  if (var_1_91 > 0.66f) {
   var_1_80 = (((((var_1_39) > (var_1_35)) ? (var_1_39) : (var_1_35))) + var_1_22);
  }
 }
 unsigned char stepLocal_4 = var_1_41;
 signed long int stepLocal_3 = 5 * var_1_41;
 if (var_1_4 <= stepLocal_4) {
  if ((((((64513) < (var_1_9)) ? (64513) : (var_1_9))) - var_1_4) >= stepLocal_3) {
   var_1_8 = ((((var_1_41) > (var_1_22)) ? (var_1_41) : (var_1_22)));
  } else {
   var_1_8 = (var_1_83 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))));
  }
 } else {
  var_1_8 = var_1_83;
 }
 unsigned char stepLocal_33 = var_1_14;
 unsigned char stepLocal_32 = var_1_98;
 unsigned long int stepLocal_31 = var_1_82;
 if (var_1_69 == stepLocal_32) {
  if ((- var_1_8) < stepLocal_31) {
   var_1_84 = (! var_1_56);
  } else {
   if (var_1_85 == (((((64.25) < (var_1_85)) ? (64.25) : (var_1_85))) + (- var_1_48))) {
    if ((var_1_16 < var_1_64) && stepLocal_33) {
     var_1_84 = var_1_13;
    }
   } else {
    var_1_84 = (var_1_14 && var_1_13);
   }
  }
 } else {
  if (var_1_97 <= (var_1_24 - var_1_58)) {
   var_1_84 = (! (! var_1_14));
  } else {
   var_1_84 = (var_1_14 && var_1_13);
  }
 }
 if (var_1_84) {
  var_1_94 = var_1_27;
 } else {
  var_1_94 = var_1_39;
 }
 unsigned long int stepLocal_30 = var_1_28;
 signed long int stepLocal_29 = 4;
 unsigned char stepLocal_28 = var_1_40 == (var_1_62 / var_1_64);
 signed char stepLocal_27 = var_1_22;
 if (var_1_30 <= (var_1_51 * (var_1_91 * var_1_50))) {
  if (4u < stepLocal_30) {
   if (stepLocal_29 < var_1_69) {
    var_1_75 = (var_1_13 && var_1_56);
   }
  } else {
   if (var_1_42 != stepLocal_27) {
    if (var_1_13) {
     var_1_75 = ((var_1_28 == var_1_73) || var_1_14);
    } else {
     var_1_75 = (var_1_14 && (var_1_15 && var_1_56));
    }
   }
  }
 } else {
  if (stepLocal_28 || var_1_56) {
   var_1_75 = (((var_1_42 * var_1_57) > -32) && (! var_1_14));
  } else {
   var_1_75 = (var_1_84 || var_1_14);
  }
 }
 if (var_1_75) {
  var_1_96 = var_1_39;
 } else {
  var_1_96 = var_1_36;
 }
 if (var_1_13) {
  if ((var_1_4 - ((((var_1_94) < 0 ) ? -(var_1_94) : (var_1_94)))) < (var_1_9 * var_1_28)) {
   var_1_17 = (((var_1_83 + var_1_98) + var_1_41) + var_1_62);
  }
 } else {
  var_1_17 = (((((-2) > (-128)) ? (-2) : (-128))) + (var_1_62 - (10000 - var_1_34)));
 }
 if (((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) > var_1_98) {
  if (var_1_4 > var_1_93) {
   if ((var_1_9 >= (var_1_4 * var_1_17)) && var_1_75) {
    var_1_10 = (var_1_4 - 500);
   }
  } else {
   var_1_10 = var_1_4;
  }
 } else {
  var_1_10 = var_1_4;
 }
 unsigned long int stepLocal_38 = - var_1_73;
 unsigned char stepLocal_37 = var_1_56;
 unsigned char stepLocal_36 = var_1_65 == (var_1_45 << var_1_4);
 if (var_1_59 || stepLocal_37) {
  var_1_90 = (((((((((var_1_96) < (-16)) ? (var_1_96) : (-16))) + var_1_34)) > (var_1_98)) ? ((((((var_1_96) < (-16)) ? (var_1_96) : (-16))) + var_1_34)) : (var_1_98)));
 } else {
  if (stepLocal_36 && var_1_13) {
   var_1_90 = (((((var_1_34 + var_1_64)) > (var_1_42)) ? ((var_1_34 + var_1_64)) : (var_1_42)));
  } else {
   if (var_1_46 < var_1_101) {
    if (stepLocal_38 < var_1_64) {
     if (var_1_49 != var_1_86) {
      if (var_1_13) {
       var_1_90 = ((var_1_60 + (var_1_8 + var_1_92)) + var_1_27);
      } else {
       var_1_90 = ((((var_1_65) > (var_1_34)) ? (var_1_65) : (var_1_34)));
      }
     } else {
      var_1_90 = var_1_34;
     }
    } else {
     var_1_90 = var_1_64;
    }
   }
  }
 }
 unsigned char stepLocal_22 = var_1_45;
 signed char stepLocal_21 = var_1_92;
 if (stepLocal_21 < 1) {
  var_1_61 = (((((var_1_42) < (var_1_4)) ? (var_1_42) : (var_1_4))) + ((((var_1_90) > (((((var_1_35) > (var_1_41)) ? (var_1_35) : (var_1_41))))) ? (var_1_90) : (((((var_1_35) > (var_1_41)) ? (var_1_35) : (var_1_41)))))));
 } else {
  if (stepLocal_22 > var_1_39) {
   var_1_61 = (var_1_62 + var_1_4);
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 16382);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -126);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 95);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 63);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 31);
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -922337.2036854765600e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 2305843.009213691390e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= 4611686.018427382800e+12F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 0);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 4611686.018427387900e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 127);
 assume_abort_if_not(var_1_63 <= 254);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 127);
 assume_abort_if_not(var_1_64 <= 254);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 32767);
 assume_abort_if_not(var_1_66 <= 65535);
 var_1_67 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_67 >= 2147483647);
 assume_abort_if_not(var_1_67 <= 4294967294);
 var_1_68 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_68 >= 16383);
 assume_abort_if_not(var_1_68 <= 32767);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 1073741823);
 assume_abort_if_not(var_1_69 <= 2147483647);
 var_1_74 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_74 >= 1073741823);
 assume_abort_if_not(var_1_74 <= 2147483647);
 var_1_79 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_79 >= 8191);
 assume_abort_if_not(var_1_79 <= 16383);
 var_1_82 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_82 >= 536870911);
 assume_abort_if_not(var_1_82 <= 1073741823);
 var_1_86 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_86 >= -922337.2036854765600e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854765600e+12F && var_1_86 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_70 = var_1_70;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_80 = var_1_80;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_85 = var_1_85;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_98 = var_1_98;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_41 <= var_1_70) ? (((- var_1_70) > var_1_41) ? (var_1_1 == ((signed short int) ((var_1_4 - var_1_41) - var_1_62))) : 1) : (((var_1_41 * (var_1_70 + var_1_4)) > var_1_62) ? (var_1_1 == ((signed short int) (var_1_41 + var_1_34))) : (var_1_1 == ((signed short int) var_1_62)))) && ((var_1_4 <= var_1_41) ? (((((((64513) < (var_1_9)) ? (64513) : (var_1_9))) - var_1_4) >= (5 * var_1_41)) ? (var_1_8 == ((signed long int) ((((var_1_41) > (var_1_22)) ? (var_1_41) : (var_1_22))))) : (var_1_8 == ((signed long int) (var_1_83 - ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))))) : (var_1_8 == ((signed long int) var_1_83)))) && ((((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))) > var_1_98) ? ((var_1_4 > var_1_93) ? (((var_1_9 >= (var_1_4 * var_1_17)) && var_1_75) ? (var_1_10 == ((signed short int) (var_1_4 - 500))) : 1) : (var_1_10 == ((signed short int) var_1_4))) : (var_1_10 == ((signed short int) var_1_4)))) && ((var_1_70 < var_1_34) ? (var_1_12 == ((unsigned char) (! var_1_13))) : (var_1_12 == ((unsigned char) (var_1_13 && var_1_14))))) && (var_1_15 == ((unsigned char) (! var_1_14)))) && ((((last_1_var_1_90 + 10u) * last_1_var_1_43) < ((last_1_var_1_43 / var_1_4) * ((((var_1_9) > (last_1_var_1_62)) ? (var_1_9) : (last_1_var_1_62))))) ? (var_1_16 == ((unsigned long int) ((32u + last_1_var_1_43) + ((((last_1_var_1_43) < (last_1_var_1_41)) ? (last_1_var_1_43) : (last_1_var_1_41)))))) : 1)) && (var_1_13 ? (((var_1_4 - ((((var_1_94) < 0 ) ? -(var_1_94) : (var_1_94)))) < (var_1_9 * var_1_28)) ? (var_1_17 == ((signed short int) (((var_1_83 + var_1_98) + var_1_41) + var_1_62))) : 1) : (var_1_17 == ((signed short int) (((((-2) > (-128)) ? (-2) : (-128))) + (var_1_62 - (10000 - var_1_34))))))) && (((var_1_85 * (var_1_24 - 255.7f)) == var_1_91) ? (var_1_22 == ((signed char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : (var_1_22 == ((signed char) ((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))))))) && ((last_1_var_1_28 == (var_1_16 & var_1_83)) ? ((var_1_34 <= var_1_62) ? (var_1_28 == ((unsigned long int) (3421856207u - (var_1_34 + (var_1_9 + var_1_4))))) : (var_1_13 ? (var_1_28 == ((unsigned long int) (8u + var_1_34))) : (var_1_28 == ((unsigned long int) ((var_1_34 + var_1_34) + var_1_4))))) : 1)) && ((var_1_16 == var_1_41) ? (var_1_29 == ((float) (var_1_30 + ((((var_1_31) < (var_1_32)) ? (var_1_31) : (var_1_32)))))) : ((var_1_57 < var_1_4) ? (var_1_29 == ((float) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) : (var_1_29 == ((float) var_1_32))))) && ((((var_1_83 * var_1_4) > var_1_65) && var_1_13) ? (var_1_33 == ((float) ((((var_1_31) < ((var_1_32 + 9.9999999999965E11f))) ? (var_1_31) : ((var_1_32 + 9.9999999999965E11f)))))) : 1)) && ((last_1_var_1_87 >= last_1_var_1_87) ? (var_1_34 == ((unsigned char) (var_1_35 + (((((1 + var_1_36)) < (var_1_37)) ? ((1 + var_1_36)) : (var_1_37)))))) : (var_1_34 == ((unsigned char) (((var_1_38 + 100) - ((((var_1_36) > (var_1_39)) ? (var_1_36) : (var_1_39)))) - var_1_37))))) && (var_1_40 == ((unsigned short int) var_1_4))) && ((last_1_var_1_1 <= last_1_var_1_22) ? (last_1_var_1_59 ? (var_1_41 == ((unsigned char) ((var_1_36 + var_1_39) + var_1_37))) : (var_1_13 ? (var_1_41 == ((unsigned char) ((((var_1_39) > (var_1_37)) ? (var_1_39) : (var_1_37))))) : (var_1_41 == ((unsigned char) ((((((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) > (var_1_38)) ? (((((25 + var_1_35) < 0 ) ? -(25 + var_1_35) : (25 + var_1_35)))) : (var_1_38))))))) : (var_1_41 == ((unsigned char) (var_1_37 + ((((var_1_36) > ((var_1_39 + var_1_42))) ? (var_1_36) : ((var_1_39 + var_1_42))))))))) && ((((100 + var_1_38) - (var_1_44 - var_1_36)) > (((((var_1_37 - last_1_var_1_8)) > (var_1_27)) ? ((var_1_37 - last_1_var_1_8)) : (var_1_27)))) ? (last_1_var_1_84 ? (var_1_43 == ((unsigned char) var_1_38)) : (var_1_43 == ((unsigned char) (var_1_36 + (var_1_44 - var_1_39))))) : (var_1_43 == ((unsigned char) ((var_1_44 + (var_1_38 - var_1_45)) - var_1_37))))) && (((last_1_var_1_61 + (2 - var_1_36)) <= var_1_42) ? ((var_1_39 < last_1_var_1_70) ? (var_1_46 == ((float) (((((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) > (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49))))) ? ((((((var_1_32) > (var_1_30)) ? (var_1_32) : (var_1_30))) + (9.6f - var_1_48))) : (((((var_1_31) < (var_1_49)) ? (var_1_31) : (var_1_49)))))))) : ((last_1_var_1_98 < var_1_27) ? (var_1_46 == ((float) (499.45f - ((var_1_50 - var_1_51) + var_1_48)))) : ((((((last_1_var_1_62) < (last_1_var_1_89)) ? (last_1_var_1_62) : (last_1_var_1_89))) != (var_1_42 - var_1_35)) ? (var_1_46 == ((float) ((((var_1_30) < ((var_1_50 - (var_1_53 - var_1_48)))) ? (var_1_30) : ((var_1_50 - (var_1_53 - var_1_48))))))) : ((last_1_var_1_12 && var_1_13) ? (var_1_46 == ((float) ((((var_1_51) < (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31)))))) ? (var_1_51) : (((((var_1_48) > ((var_1_50 + var_1_31))) ? (var_1_48) : ((var_1_50 + var_1_31))))))))) : 1)))) : ((last_1_var_1_33 <= var_1_32) ? (var_1_46 == ((float) ((((var_1_50 + var_1_48) < 0 ) ? -(var_1_50 + var_1_48) : (var_1_50 + var_1_48))))) : 1))) && (((~ ((((var_1_37) < (var_1_41)) ? (var_1_37) : (var_1_41)))) >= (var_1_36 * (var_1_65 + var_1_89))) ? (((((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))) - var_1_53) > (var_1_91 * var_1_46)) ? (var_1_54 == ((unsigned char) (var_1_55 || var_1_56))) : (var_1_54 == ((unsigned char) ((! var_1_55) && var_1_14)))) : 1)) && ((last_1_var_1_29 != ((var_1_58 - var_1_50) - var_1_51)) ? (var_1_57 == ((signed short int) ((var_1_45 + 5) + (var_1_36 + last_1_var_1_65)))) : 1)) && (var_1_59 == ((unsigned char) (! var_1_14)))) && ((((((var_1_32) > (var_1_49)) ? (var_1_32) : (var_1_49))) <= (var_1_50 / var_1_58)) ? (var_1_60 == ((signed char) ((((var_1_42) > (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45))))) ? (var_1_42) : (((((var_1_39 - var_1_45) < 0 ) ? -(var_1_39 - var_1_45) : (var_1_39 - var_1_45)))))))) : 1)) && ((var_1_92 < 1) ? (var_1_61 == ((unsigned long int) (((((var_1_42) < (var_1_4)) ? (var_1_42) : (var_1_4))) + ((((var_1_90) > (((((var_1_35) > (var_1_41)) ? (var_1_35) : (var_1_41))))) ? (var_1_90) : (((((var_1_35) > (var_1_41)) ? (var_1_35) : (var_1_41))))))))) : ((var_1_45 > var_1_39) ? (var_1_61 == ((unsigned long int) (var_1_62 + var_1_4))) : 1))) && ((var_1_50 != last_1_var_1_29) ? (var_1_62 == ((unsigned char) (((((var_1_63 - var_1_37)) > ((var_1_64 - var_1_36))) ? ((var_1_63 - var_1_37)) : ((var_1_64 - var_1_36)))))) : 1)) && ((0u <= ((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) ? (((((((last_1_var_1_83) > (var_1_9)) ? (last_1_var_1_83) : (var_1_9))) / (var_1_66 - var_1_4)) <= last_1_var_1_88) ? (var_1_65 == ((unsigned long int) (((((((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) > (var_1_42)) ? (((((var_1_39) > (var_1_63)) ? (var_1_39) : (var_1_63)))) : (var_1_42))) + last_1_var_1_10))) : (var_1_65 == ((unsigned long int) (((((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) > (last_1_var_1_17)) ? ((var_1_67 - ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))) : (last_1_var_1_17)))))) : (((last_1_var_1_62 - (var_1_68 - var_1_64)) <= -25) ? ((last_1_var_1_33 < 16.6f) ? (var_1_65 == ((unsigned long int) (((((last_1_var_1_1) > (var_1_36)) ? (last_1_var_1_1) : (var_1_36))) + (var_1_9 + ((((last_1_var_1_81) > (var_1_68)) ? (last_1_var_1_81) : (var_1_68))))))) : (var_1_65 == ((unsigned long int) ((((last_1_var_1_62) > ((var_1_67 - (var_1_69 - last_1_var_1_43)))) ? (last_1_var_1_62) : ((var_1_67 - (var_1_69 - last_1_var_1_43)))))))) : 1))) && ((((var_1_65 / var_1_44) % var_1_38) <= var_1_64) ? (var_1_70 == ((unsigned long int) (((((var_1_45) > (var_1_39)) ? (var_1_45) : (var_1_39))) + last_1_var_1_70))) : (var_1_70 == ((unsigned long int) (var_1_67 - (var_1_69 - 25u)))))) && (((var_1_101 / var_1_53) < var_1_58) ? (var_1_71 == ((double) (((((var_1_50) > (2.75)) ? (var_1_50) : (2.75))) + var_1_51))) : 1)) && (((var_1_92 + 5) < ((((var_1_88) > (var_1_68)) ? (var_1_88) : (var_1_68)))) ? (var_1_73 == ((unsigned long int) (256u + 16u))) : (var_1_73 == ((unsigned long int) (var_1_69 + (var_1_74 - ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))))))) && ((var_1_30 <= (var_1_51 * (var_1_91 * var_1_50))) ? ((4u < var_1_28) ? ((4 < var_1_69) ? (var_1_75 == ((unsigned char) (var_1_13 && var_1_56))) : 1) : ((var_1_42 != var_1_22) ? (var_1_13 ? (var_1_75 == ((unsigned char) ((var_1_28 == var_1_73) || var_1_14))) : (var_1_75 == ((unsigned char) (var_1_14 && (var_1_15 && var_1_56))))) : 1)) : (((var_1_40 == (var_1_62 / var_1_64)) || var_1_56) ? (var_1_75 == ((unsigned char) (((var_1_42 * var_1_57) > -32) && (! var_1_14)))) : (var_1_75 == ((unsigned char) (var_1_84 || var_1_14)))))) && ((var_1_63 < last_1_var_1_77) ? (var_1_77 == ((unsigned short int) ((((((((var_1_62) > (var_1_64)) ? (var_1_62) : (var_1_64)))) > (var_1_44)) ? (((((var_1_62) > (var_1_64)) ? (var_1_62) : (var_1_64)))) : (var_1_44))))) : (((var_1_51 + 31.8f) >= (var_1_33 + (var_1_24 + var_1_97))) ? (var_1_77 == ((unsigned short int) (var_1_98 + (var_1_63 + (var_1_79 - var_1_45))))) : (var_1_77 == ((unsigned short int) ((((var_1_44) < (var_1_35)) ? (var_1_44) : (var_1_35)))))))) && (((var_1_35 * var_1_41) <= last_1_var_1_80) ? (var_1_80 == ((signed short int) ((((var_1_87) < (var_1_27)) ? (var_1_87) : (var_1_27))))) : ((var_1_91 > 0.66f) ? (var_1_80 == ((signed short int) (((((var_1_39) > (var_1_35)) ? (var_1_39) : (var_1_35))) + var_1_22))) : 1))) && (var_1_81 == ((unsigned long int) (var_1_67 - (var_1_64 + (var_1_82 - var_1_34)))))) && (last_1_var_1_59 ? (last_1_var_1_12 ? (var_1_83 == ((unsigned char) (var_1_64 - var_1_37))) : (var_1_83 == ((unsigned char) (128 - 16)))) : ((last_1_var_1_85 >= last_1_var_1_46) ? (var_1_83 == ((unsigned char) ((((var_1_39) < (var_1_45)) ? (var_1_39) : (var_1_45))))) : (var_1_83 == ((unsigned char) ((((var_1_35) < ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))) ? (var_1_35) : ((((((128) < (var_1_63)) ? (128) : (var_1_63))) - var_1_36))))))))) && ((var_1_69 == var_1_98) ? (((- var_1_8) < var_1_82) ? (var_1_84 == ((unsigned char) (! var_1_56))) : ((var_1_85 == (((((64.25) < (var_1_85)) ? (64.25) : (var_1_85))) + (- var_1_48))) ? (((var_1_16 < var_1_64) && var_1_14) ? (var_1_84 == ((unsigned char) var_1_13)) : 1) : (var_1_84 == ((unsigned char) (var_1_14 && var_1_13))))) : ((var_1_97 <= (var_1_24 - var_1_58)) ? (var_1_84 == ((unsigned char) (! (! var_1_14)))) : (var_1_84 == ((unsigned char) (var_1_14 && var_1_13)))))) && ((((var_1_93 + 32) + (500 - var_1_74)) >= var_1_40) ? (var_1_85 == ((double) ((((var_1_32) < ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5)))) ? (var_1_32) : ((((((31.5) < 0 ) ? -(31.5) : (31.5))) + (var_1_50 - 9999.5))))))) : (var_1_85 == ((double) ((((((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) < (var_1_86)) ? (((((var_1_49) < (var_1_30)) ? (var_1_49) : (var_1_30)))) : (var_1_86))))))) && ((var_1_85 <= var_1_32) ? (var_1_87 == ((unsigned char) ((((var_1_38) > (var_1_63)) ? (var_1_38) : (var_1_63))))) : ((last_1_var_1_87 > var_1_81) ? (var_1_87 == ((unsigned char) (var_1_63 - var_1_45))) : 1))) && ((var_1_31 > 32.5f) ? (var_1_88 == ((signed long int) ((((var_1_62) < (-32)) ? (var_1_62) : (-32))))) : 1)) && ((! (var_1_81 >= var_1_88)) ? (var_1_89 == ((signed short int) ((((-128) < (((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65))))) ? (-128) : (((((var_1_34) > (var_1_65)) ? (var_1_34) : (var_1_65)))))))) : 1)) && ((var_1_59 || var_1_56) ? (var_1_90 == ((signed short int) (((((((((var_1_96) < (-16)) ? (var_1_96) : (-16))) + var_1_34)) > (var_1_98)) ? ((((((var_1_96) < (-16)) ? (var_1_96) : (-16))) + var_1_34)) : (var_1_98))))) : (((var_1_65 == (var_1_45 << var_1_4)) && var_1_13) ? (var_1_90 == ((signed short int) (((((var_1_34 + var_1_64)) > (var_1_42)) ? ((var_1_34 + var_1_64)) : (var_1_42))))) : ((var_1_46 < var_1_101) ? (((- var_1_73) < var_1_64) ? ((var_1_49 != var_1_86) ? (var_1_13 ? (var_1_90 == ((signed short int) ((var_1_60 + (var_1_8 + var_1_92)) + var_1_27))) : (var_1_90 == ((signed short int) ((((var_1_65) > (var_1_34)) ? (var_1_65) : (var_1_34)))))) : (var_1_90 == ((signed short int) var_1_34))) : (var_1_90 == ((signed short int) var_1_64))) : 1)))) && (var_1_91 == ((float) 64.75f))) && (last_1_var_1_54 ? (var_1_92 == ((signed char) var_1_42)) : (var_1_92 == ((signed char) var_1_36)))) && (var_1_15 ? (var_1_93 == ((signed char) var_1_36)) : (var_1_93 == ((signed char) var_1_42)))) && (var_1_84 ? (var_1_94 == ((signed char) var_1_27)) : (var_1_94 == ((signed char) var_1_39)))) && (var_1_95 == ((unsigned char) var_1_56))) && (var_1_75 ? (var_1_96 == ((signed char) var_1_39)) : (var_1_96 == ((signed char) var_1_36)))) && (var_1_14 ? (var_1_97 == ((float) var_1_49)) : (var_1_97 == ((float) var_1_86)))) && (var_1_13 ? (var_1_98 == ((unsigned char) 100)) : (var_1_98 == ((unsigned char) var_1_35)))) && (var_1_99 == ((signed short int) var_1_28))) && (var_1_15 ? (var_1_100 == ((unsigned char) var_1_44)) : (var_1_100 == ((unsigned char) var_1_35)))) && ((var_1_43 >= var_1_41) ? (((var_1_12 || var_1_12) && (1.6f > var_1_85)) ? (var_1_101 == ((double) var_1_30)) : (var_1_101 == ((double) (var_1_31 + (var_1_51 - var_1_50))))) : (var_1_101 == ((double) var_1_48)))
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
