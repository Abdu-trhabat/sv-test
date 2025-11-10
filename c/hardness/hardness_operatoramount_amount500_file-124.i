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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 2.8;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 2144133384;
unsigned long int var_1_5 = 1;
float var_1_6 = 7.25;
unsigned char var_1_7 = 1;
double var_1_9 = 4.9;
double var_1_10 = 16.5;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 50;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 56557;
unsigned short int var_1_16 = 28923;
unsigned short int var_1_17 = 0;
unsigned short int var_1_18 = 25;
unsigned short int var_1_19 = 42175;
unsigned short int var_1_20 = 0;
unsigned short int var_1_21 = 10;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned long int var_1_25 = 16;
unsigned long int var_1_26 = 1000000000;
unsigned long int var_1_27 = 1000000000;
unsigned long int var_1_28 = 1590927776;
unsigned long int var_1_30 = 3904579907;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 251;
unsigned char var_1_33 = 4;
unsigned char var_1_34 = 10;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 100;
signed long int var_1_37 = 0;
unsigned long int var_1_38 = 100;
unsigned short int var_1_39 = 2;
unsigned short int var_1_40 = 55801;
signed short int var_1_41 = -100;
double var_1_42 = -0.75;
double var_1_43 = -0.5;
double var_1_44 = 0.25;
double var_1_45 = 0.0;
double var_1_46 = 255.7;
double var_1_47 = 4.375;
double var_1_48 = 9.7;
unsigned short int var_1_49 = 0;
signed long int var_1_52 = -4;
unsigned char var_1_53 = 2;
unsigned short int var_1_54 = 1;
unsigned char var_1_55 = 4;
double var_1_56 = 0.0;
unsigned char var_1_57 = 1;
float var_1_58 = 8.5;
signed short int var_1_59 = 1000;
float var_1_60 = 128.85;
signed long int var_1_61 = 256;
signed long int var_1_62 = 1931443556;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
signed short int var_1_68 = -5;
unsigned long int var_1_69 = 32;
signed short int var_1_70 = -16;
signed short int var_1_71 = 128;
unsigned char var_1_72 = 1;
float var_1_73 = 5.7;
float var_1_74 = 100.8;
float var_1_75 = 99.025;
signed long int var_1_76 = -5;
unsigned long int var_1_77 = 5;
unsigned char var_1_78 = 8;
unsigned char var_1_79 = 128;
unsigned char var_1_80 = 200;
unsigned short int var_1_81 = 10;
float var_1_82 = 0.5;
unsigned char var_1_83 = 1;
float var_1_84 = 4.125;
float var_1_85 = 25.4;
unsigned char var_1_86 = 4;
signed char var_1_87 = 10;
unsigned long int var_1_88 = 1;
unsigned char var_1_89 = 1;
unsigned long int var_1_90 = 128;
signed char var_1_91 = -5;
unsigned short int var_1_92 = 128;
unsigned short int var_1_93 = 256;
signed char var_1_94 = -5;
unsigned short int var_1_95 = 64;
signed long int var_1_96 = -8;
signed long int var_1_97 = 50;
float var_1_98 = 2.7;
unsigned char last_1_var_1_7 = 1;
unsigned short int last_1_var_1_20 = 0;
unsigned char last_1_var_1_22 = 1;
unsigned long int last_1_var_1_25 = 16;
signed long int last_1_var_1_52 = -4;
unsigned char last_1_var_1_63 = 0;
signed short int last_1_var_1_68 = -5;
unsigned char last_1_var_1_72 = 1;
unsigned char last_1_var_1_83 = 1;
unsigned char last_1_var_1_86 = 4;
unsigned long int last_1_var_1_88 = 1;
unsigned long int last_1_var_1_90 = 128;
signed long int last_1_var_1_96 = -8;
void initially(void) {
}
void step(void) {
 if (-8 > var_1_19) {
  var_1_77 = (var_1_57 + last_1_var_1_68);
 }
 unsigned long int stepLocal_10 = (((var_1_15) < (last_1_var_1_90)) ? (var_1_15) : (last_1_var_1_90));
 if (! last_1_var_1_7) {
  if (! var_1_11) {
   var_1_42 = ((((var_1_6) < (999999.5)) ? (var_1_6) : (999999.5)));
  }
 } else {
  if (stepLocal_10 > var_1_34) {
   var_1_42 = (var_1_43 + var_1_44);
  } else {
   var_1_42 = ((var_1_45 - var_1_46) - (var_1_47 + var_1_48));
  }
 }
 unsigned short int stepLocal_17 = var_1_15;
 if (var_1_33 < stepLocal_17) {
  if (49.875f <= var_1_43) {
   var_1_52 = ((last_1_var_1_52 + -5) + (100 - var_1_33));
  } else {
   if (var_1_24) {
    var_1_52 = (var_1_27 - var_1_16);
   }
  }
 } else {
  if (var_1_47 >= ((((var_1_42) > (((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43))))) ? (var_1_42) : (((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43))))))) {
   var_1_52 = ((((((((var_1_35) > (0)) ? (var_1_35) : (0)))) < (var_1_33)) ? (((((var_1_35) > (0)) ? (var_1_35) : (0)))) : (var_1_33)));
  } else {
   var_1_52 = var_1_16;
  }
 }
 unsigned long int stepLocal_21 = last_1_var_1_25;
 if (! last_1_var_1_72) {
  if (last_1_var_1_22) {
   if ((var_1_21 % -64) != stepLocal_21) {
    var_1_76 = last_1_var_1_25;
   } else {
    var_1_76 = var_1_40;
   }
  } else {
   var_1_76 = var_1_26;
  }
 } else {
  var_1_76 = var_1_16;
 }
 if (var_1_65 && last_1_var_1_63) {
  if (var_1_79 <= var_1_33) {
   var_1_83 = (((var_1_69 == last_1_var_1_88) || var_1_23) && (last_1_var_1_7 || var_1_24));
  } else {
   if (last_1_var_1_20 > last_1_var_1_25) {
    if (last_1_var_1_86 >= (var_1_17 / var_1_36)) {
     var_1_83 = (var_1_67 || (var_1_24 || var_1_23));
    } else {
     var_1_83 = (! (var_1_67 && var_1_65));
    }
   } else {
    var_1_83 = ((last_1_var_1_7 || var_1_24) && var_1_23);
   }
  }
 } else {
  var_1_83 = var_1_67;
 }
 if (! last_1_var_1_83) {
  if (! ((var_1_21 - var_1_57) >= (last_1_var_1_52 ^ var_1_34))) {
   if (var_1_23) {
    var_1_63 = (last_1_var_1_83 || (! (var_1_24 && var_1_11)));
   }
  } else {
   var_1_63 = var_1_11;
  }
 } else {
  var_1_63 = ((var_1_11 || var_1_64) || ((var_1_65 || var_1_66) || var_1_67));
 }
 if (var_1_63) {
  var_1_93 = var_1_19;
 } else {
  var_1_93 = var_1_16;
 }
 unsigned char stepLocal_3 = 500 != last_1_var_1_96;
 if (var_1_11) {
  var_1_25 = (((var_1_26 + var_1_27) + var_1_28) - var_1_21);
 } else {
  if (var_1_6 > (- 7.75f)) {
   var_1_25 = (((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) < 0 ) ? -((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) : ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))));
  } else {
   if (stepLocal_3 && last_1_var_1_63) {
    var_1_25 = (var_1_30 - var_1_16);
   } else {
    var_1_25 = (var_1_5 + var_1_21);
   }
  }
 }
 if (var_1_77 >= var_1_5) {
  var_1_12 = ((((var_1_14) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (var_1_14) : ((var_1_15 - (var_1_16 - var_1_17)))));
 } else {
  var_1_12 = ((((((54291) < 0 ) ? -(54291) : (54291))) - var_1_17) - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))));
 }
 if (var_1_11) {
  var_1_53 = (128 - var_1_34);
 } else {
  var_1_53 = (var_1_32 - ((((var_1_35) > (var_1_34)) ? (var_1_35) : (var_1_34))));
 }
 if (((var_1_56 - var_1_47) - var_1_45) != var_1_46) {
  var_1_55 = var_1_36;
 } else {
  var_1_55 = ((((((var_1_34 + var_1_33)) > ((var_1_57 + 32))) ? ((var_1_34 + var_1_33)) : ((var_1_57 + 32)))) + 4);
 }
 var_1_72 = (var_1_24 && var_1_23);
 if (var_1_56 >= var_1_47) {
  if (var_1_11) {
   var_1_73 = ((var_1_45 - ((((var_1_47) > (var_1_46)) ? (var_1_47) : (var_1_46)))) - var_1_6);
  } else {
   var_1_73 = ((((var_1_44) > ((var_1_46 + (var_1_74 + var_1_75)))) ? (var_1_44) : ((var_1_46 + (var_1_74 + var_1_75)))));
  }
 } else {
  var_1_73 = ((((var_1_45) > (var_1_6)) ? (var_1_45) : (var_1_6)));
 }
 if (! var_1_66) {
  var_1_81 = (100 + var_1_16);
 } else {
  var_1_81 = (var_1_19 - var_1_34);
 }
 var_1_84 = var_1_85;
 var_1_86 = var_1_33;
 if (var_1_72) {
  var_1_87 = var_1_33;
 } else {
  var_1_87 = 4;
 }
 if (var_1_23) {
  var_1_89 = var_1_24;
 }
 if (var_1_72) {
  var_1_90 = 0u;
 } else {
  var_1_90 = var_1_40;
 }
 if (var_1_24) {
  var_1_91 = var_1_33;
 }
 var_1_92 = var_1_57;
 var_1_94 = var_1_32;
 var_1_95 = var_1_33;
 if (var_1_65) {
  if ((var_1_84 / ((((var_1_56) < (var_1_98)) ? (var_1_56) : (var_1_98)))) == var_1_44) {
   if (var_1_47 < var_1_74) {
    var_1_97 = (var_1_17 - 100);
   } else {
    var_1_97 = var_1_26;
   }
  } else {
   var_1_97 = -32;
  }
 } else {
  var_1_97 = var_1_33;
 }
 unsigned long int stepLocal_18 = var_1_77 * var_1_92;
 if (var_1_52 > stepLocal_18) {
  if (var_1_63) {
   var_1_58 = (((((var_1_48 - (var_1_46 + var_1_47))) < (var_1_45)) ? ((var_1_48 - (var_1_46 + var_1_47))) : (var_1_45)));
  } else {
   var_1_58 = (var_1_47 + var_1_43);
  }
 } else {
  var_1_58 = var_1_46;
 }
 if (var_1_83) {
  if (var_1_23 || var_1_72) {
   var_1_54 = ((((var_1_76) > (4)) ? (var_1_76) : (4)));
  } else {
   var_1_54 = (var_1_40 - var_1_35);
  }
 } else {
  var_1_54 = var_1_32;
 }
 var_1_96 = var_1_54;
 if (var_1_27 > 128u) {
  if (! var_1_83) {
   var_1_38 = (var_1_3 + (((((var_1_28 - var_1_93)) > ((var_1_36 + var_1_34))) ? ((var_1_28 - var_1_93)) : ((var_1_36 + var_1_34)))));
  } else {
   var_1_38 = ((((((((var_1_36) < (0u)) ? (var_1_36) : (0u)))) > (var_1_5)) ? (((((var_1_36) < (0u)) ? (var_1_36) : (0u)))) : (var_1_5)));
  }
 } else {
  var_1_38 = ((((var_1_26) < (0u)) ? (var_1_26) : (0u)));
 }
 if (var_1_63) {
  var_1_88 = var_1_25;
 }
 if ((var_1_38 * (3669925837u - var_1_3)) > (2965407302u - (var_1_4 - var_1_5))) {
  var_1_1 = (var_1_6 - 32.25f);
 }
 unsigned long int stepLocal_16 = 32 * var_1_4;
 unsigned char stepLocal_15 = var_1_63;
 unsigned long int stepLocal_14 = ((((var_1_15 / var_1_4)) > (var_1_16)) ? ((var_1_15 / var_1_4)) : (var_1_16));
 unsigned long int stepLocal_13 = var_1_4 << var_1_36;
 unsigned long int stepLocal_12 = var_1_90 * var_1_5;
 unsigned short int stepLocal_11 = var_1_21;
 if (var_1_44 < (var_1_48 + var_1_46)) {
  if (stepLocal_15 || var_1_11) {
   var_1_49 = (var_1_33 + var_1_35);
  } else {
   var_1_49 = (var_1_32 + var_1_36);
  }
 } else {
  if (stepLocal_13 <= (var_1_90 + (var_1_28 | var_1_27))) {
   if (stepLocal_12 != var_1_93) {
    var_1_49 = (var_1_19 - var_1_93);
   } else {
    var_1_49 = ((((var_1_14) > (var_1_93)) ? (var_1_14) : (var_1_93)));
   }
  } else {
   if (stepLocal_14 <= var_1_88) {
    if (! (var_1_72 && var_1_24)) {
     var_1_49 = (((((((((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) < 0 ) ? -((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) : ((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16)))))) > (((((var_1_34) < ((64 + var_1_32))) ? (var_1_34) : ((64 + var_1_32)))))) ? ((((((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) < 0 ) ? -((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) : ((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16)))))) : (((((var_1_34) < ((64 + var_1_32))) ? (var_1_34) : ((64 + var_1_32)))))));
    } else {
     var_1_49 = (59519 - 16);
    }
   } else {
    if (stepLocal_11 < var_1_17) {
     if (0 >= stepLocal_16) {
      var_1_49 = ((((var_1_34) > ((var_1_21 + var_1_32))) ? (var_1_34) : ((var_1_21 + var_1_32))));
     } else {
      var_1_49 = ((((var_1_33) > (var_1_16)) ? (var_1_33) : (var_1_16)));
     }
    }
   }
  }
 }
 if ((((((((var_1_43) < (199.6)) ? (var_1_43) : (199.6))) < 0 ) ? -((((var_1_43) < (199.6)) ? (var_1_43) : (199.6))) : ((((var_1_43) < (199.6)) ? (var_1_43) : (199.6))))) >= (var_1_58 / 9.875)) {
  var_1_60 = (var_1_48 + var_1_46);
 }
 if (var_1_65) {
  var_1_78 = (var_1_32 - var_1_33);
 } else {
  if (var_1_73 < (((((- var_1_1)) < (var_1_73)) ? ((- var_1_1)) : (var_1_73)))) {
   var_1_78 = (((((((((var_1_32) > (var_1_79)) ? (var_1_32) : (var_1_79)))) > (var_1_80)) ? (((((var_1_32) > (var_1_79)) ? (var_1_32) : (var_1_79)))) : (var_1_80))) - var_1_57);
  }
 }
 unsigned char stepLocal_0 = var_1_88 < var_1_3;
 if (var_1_89 && stepLocal_0) {
  if (((var_1_58 + var_1_6) / var_1_9) < var_1_42) {
   var_1_7 = (! (! var_1_11));
  }
 } else {
  var_1_7 = ((var_1_5 == 32u) && var_1_11);
 }
 unsigned char stepLocal_2 = var_1_24;
 unsigned short int stepLocal_1 = var_1_14;
 if (! (var_1_25 <= var_1_19)) {
  var_1_22 = (var_1_7 || (! var_1_11));
 } else {
  if (stepLocal_1 == (- ((((var_1_25) > (var_1_54)) ? (var_1_25) : (var_1_54))))) {
   var_1_22 = (var_1_23 && var_1_24);
  } else {
   if (stepLocal_2 && (var_1_14 > (var_1_21 << var_1_15))) {
    var_1_22 = var_1_24;
   } else {
    var_1_22 = var_1_23;
   }
  }
 }
 if ((var_1_17 != (var_1_5 / var_1_16)) && var_1_22) {
  if (var_1_22) {
   var_1_20 = (((((10 + var_1_17)) > (var_1_14)) ? ((10 + var_1_17)) : (var_1_14)));
  } else {
   var_1_20 = (((((var_1_17 + var_1_16)) > (var_1_15)) ? ((var_1_17 + var_1_16)) : (var_1_15)));
  }
 } else {
  if (var_1_22) {
   if (var_1_9 >= (var_1_6 - ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) {
    var_1_20 = (var_1_16 + ((((var_1_17) > (var_1_21)) ? (var_1_17) : (var_1_21))));
   }
  }
 }
 if ((var_1_32 - var_1_57) < var_1_38) {
  if (var_1_83 && (var_1_25 != var_1_36)) {
   var_1_61 = ((((var_1_81) < ((var_1_40 + 1000))) ? (var_1_81) : ((var_1_40 + 1000))));
  }
 } else {
  var_1_61 = (var_1_88 - (((((var_1_62 - var_1_93)) > (var_1_90)) ? ((var_1_62 - var_1_93)) : (var_1_90))));
 }
 if (! var_1_7) {
  var_1_39 = ((((0) > (var_1_19)) ? (0) : (var_1_19)));
 } else {
  if (var_1_42 >= var_1_9) {
   var_1_39 = (500 + (var_1_16 - var_1_17));
  } else {
   var_1_39 = ((((((var_1_40 - var_1_32)) > (var_1_19)) ? ((var_1_40 - var_1_32)) : (var_1_19))) - var_1_35);
  }
 }
 if (! var_1_23) {
  if (var_1_23) {
   var_1_41 = ((((((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35)))) < (var_1_40)) ? (((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35)))) : (var_1_40)));
  }
 } else {
  if (var_1_52 < var_1_35) {
   var_1_41 = ((var_1_17 + var_1_20) - ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))));
  } else {
   var_1_41 = ((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35)));
  }
 }
 if (((var_1_45 + var_1_58) + (var_1_48 - var_1_46)) <= var_1_42) {
  var_1_70 = var_1_35;
 } else {
  if (var_1_66 || var_1_67) {
   if (! var_1_22) {
    if (var_1_22) {
     var_1_70 = ((((((var_1_17 - var_1_33)) > (((((var_1_61) < (var_1_34)) ? (var_1_61) : (var_1_34))))) ? ((var_1_17 - var_1_33)) : (((((var_1_61) < (var_1_34)) ? (var_1_61) : (var_1_34)))))) + var_1_35);
    } else {
     var_1_70 = (-256 + var_1_35);
    }
   } else {
    var_1_70 = ((((var_1_71) > ((var_1_33 - var_1_57))) ? (var_1_71) : ((var_1_33 - var_1_57))));
   }
  } else {
   var_1_70 = ((((var_1_33) < ((((((var_1_86 - 2)) > (var_1_34)) ? ((var_1_86 - 2)) : (var_1_34))))) ? (var_1_33) : ((((((var_1_86 - 2)) > (var_1_34)) ? ((var_1_86 - 2)) : (var_1_34))))));
  }
 }
 if (var_1_23) {
  if (var_1_61 > ((var_1_88 * var_1_90) / var_1_62)) {
   if (var_1_88 > ((~ var_1_96) * var_1_76)) {
    if (((((var_1_47) < (var_1_9)) ? (var_1_47) : (var_1_9))) != var_1_56) {
     var_1_82 = (var_1_47 - var_1_46);
    } else {
     var_1_82 = var_1_75;
    }
   } else {
    var_1_82 = 9.74f;
   }
  }
 } else {
  var_1_82 = ((((var_1_6 - var_1_45) < 0 ) ? -(var_1_6 - var_1_45) : (var_1_6 - var_1_45)));
 }
 if (var_1_82 <= var_1_10) {
  var_1_18 = (((((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))) < ((var_1_19 - var_1_17))) ? ((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))) : ((var_1_19 - var_1_17))));
 } else {
  var_1_18 = ((((var_1_15 - var_1_17) < 0 ) ? -(var_1_15 - var_1_17) : (var_1_15 - var_1_17)));
 }
 unsigned long int stepLocal_20 = var_1_77 / ((((var_1_69) > (var_1_40)) ? (var_1_69) : (var_1_40)));
 if ((var_1_27 * var_1_35) <= stepLocal_20) {
  var_1_68 = ((((((var_1_57 - var_1_33)) < (var_1_76)) ? ((var_1_57 - var_1_33)) : (var_1_76))) + ((((((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) < (var_1_32)) ? (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) : (var_1_32))));
 } else {
  var_1_68 = var_1_32;
 }
 signed long int stepLocal_9 = (var_1_19 - var_1_68) / var_1_36;
 if (var_1_15 <= stepLocal_9) {
  var_1_37 = ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)));
 }
 unsigned long int stepLocal_19 = var_1_5;
 if (var_1_33 < stepLocal_19) {
  var_1_59 = (((((var_1_68 + var_1_34)) > ((var_1_36 - var_1_33))) ? ((var_1_68 + var_1_34)) : ((var_1_36 - var_1_33))));
 }
 unsigned char stepLocal_8 = var_1_7;
 unsigned long int stepLocal_7 = var_1_16 * var_1_38;
 unsigned long int stepLocal_6 = (var_1_26 - var_1_3) | (var_1_34 * var_1_15);
 signed long int stepLocal_5 = var_1_37;
 unsigned long int stepLocal_4 = 50u & (var_1_30 - var_1_37);
 if (var_1_15 < stepLocal_7) {
  if (var_1_18 > stepLocal_5) {
   var_1_31 = (((var_1_32 - var_1_33) - var_1_34) - var_1_35);
  } else {
   var_1_31 = (((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))));
  }
 } else {
  if (stepLocal_8 && var_1_11) {
   var_1_31 = ((((((((2) < 0 ) ? -(2) : (2)))) > (128)) ? (((((2) < 0 ) ? -(2) : (2)))) : (128)));
  } else {
   if (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < stepLocal_4) {
    var_1_31 = ((((((var_1_32 - 50)) < ((200 - 10))) ? ((var_1_32 - 50)) : ((200 - 10)))) - var_1_35);
   } else {
    if ((5 - var_1_35) < stepLocal_6) {
     var_1_31 = (var_1_32 - ((((var_1_33) > ((var_1_36 - var_1_34))) ? (var_1_33) : ((var_1_36 - var_1_34)))));
    } else {
     var_1_31 = ((((var_1_33) < (var_1_36)) ? (var_1_33) : (var_1_36)));
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 32767);
 assume_abort_if_not(var_1_19 <= 65534);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 536870911);
 assume_abort_if_not(var_1_26 <= 1073741824);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 536870912);
 assume_abort_if_not(var_1_27 <= 1073741823);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1073741824);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 2147483647);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 222);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 63);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 49150);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 4611686.018427383000e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427383000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 4611686.018427388000e+12F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 64);
 var_1_62 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_62 >= 1073741823);
 assume_abort_if_not(var_1_62 <= 2147483646);
 var_1_64 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 0);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 0);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 0);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 0);
 assume_abort_if_not(var_1_67 <= 0);
 var_1_69 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_69 >= 0);
 assume_abort_if_not(var_1_69 <= 4294967295);
 assume_abort_if_not(var_1_69 != 0);
 var_1_71 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_71 >= -32767);
 assume_abort_if_not(var_1_71 <= 32766);
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= -230584.3009213691400e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_75 >= -230584.3009213691400e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691400e+12F && var_1_75 >= 1.0e-20F ));
 var_1_79 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_79 >= 127);
 assume_abort_if_not(var_1_79 <= 254);
 var_1_80 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_80 >= 127);
 assume_abort_if_not(var_1_80 <= 254);
 var_1_85 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_85 >= -922337.2036854766000e+13F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854766000e+12F && var_1_85 >= 1.0e-20F ));
 var_1_98 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_98 >= -922337.2036854776000e+13F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 9223372.036854776000e+12F && var_1_98 >= 1.0e-20F ));
 assume_abort_if_not(var_1_98 != 0.0F);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_63 = var_1_63;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_88 = var_1_88;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_96 = var_1_96;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((var_1_38 * (3669925837u - var_1_3)) > (2965407302u - (var_1_4 - var_1_5))) ? (var_1_1 == ((float) (var_1_6 - 32.25f))) : 1) && ((var_1_89 && (var_1_88 < var_1_3)) ? ((((var_1_58 + var_1_6) / var_1_9) < var_1_42) ? (var_1_7 == ((unsigned char) (! (! var_1_11)))) : 1) : (var_1_7 == ((unsigned char) ((var_1_5 == 32u) && var_1_11))))) && ((var_1_77 >= var_1_5) ? (var_1_12 == ((unsigned short int) ((((var_1_14) < ((var_1_15 - (var_1_16 - var_1_17)))) ? (var_1_14) : ((var_1_15 - (var_1_16 - var_1_17))))))) : (var_1_12 == ((unsigned short int) ((((((54291) < 0 ) ? -(54291) : (54291))) - var_1_17) - ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))) && ((var_1_82 <= var_1_10) ? (var_1_18 == ((unsigned short int) (((((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))) < ((var_1_19 - var_1_17))) ? ((((((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) < 0 ) ? -((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15))) : ((((var_1_14) > (var_1_15)) ? (var_1_14) : (var_1_15)))))) : ((var_1_19 - var_1_17)))))) : (var_1_18 == ((unsigned short int) ((((var_1_15 - var_1_17) < 0 ) ? -(var_1_15 - var_1_17) : (var_1_15 - var_1_17))))))) && (((var_1_17 != (var_1_5 / var_1_16)) && var_1_22) ? (var_1_22 ? (var_1_20 == ((unsigned short int) (((((10 + var_1_17)) > (var_1_14)) ? ((10 + var_1_17)) : (var_1_14))))) : (var_1_20 == ((unsigned short int) (((((var_1_17 + var_1_16)) > (var_1_15)) ? ((var_1_17 + var_1_16)) : (var_1_15)))))) : (var_1_22 ? ((var_1_9 >= (var_1_6 - ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) ? (var_1_20 == ((unsigned short int) (var_1_16 + ((((var_1_17) > (var_1_21)) ? (var_1_17) : (var_1_21)))))) : 1) : 1))) && ((! (var_1_25 <= var_1_19)) ? (var_1_22 == ((unsigned char) (var_1_7 || (! var_1_11)))) : ((var_1_14 == (- ((((var_1_25) > (var_1_54)) ? (var_1_25) : (var_1_54))))) ? (var_1_22 == ((unsigned char) (var_1_23 && var_1_24))) : ((var_1_24 && (var_1_14 > (var_1_21 << var_1_15))) ? (var_1_22 == ((unsigned char) var_1_24)) : (var_1_22 == ((unsigned char) var_1_23)))))) && (var_1_11 ? (var_1_25 == ((unsigned long int) (((var_1_26 + var_1_27) + var_1_28) - var_1_21))) : ((var_1_6 > (- 7.75f)) ? (var_1_25 == ((unsigned long int) (((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) < 0 ) ? -((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) : ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) : (((500 != last_1_var_1_96) && last_1_var_1_63) ? (var_1_25 == ((unsigned long int) (var_1_30 - var_1_16))) : (var_1_25 == ((unsigned long int) (var_1_5 + var_1_21))))))) && ((var_1_15 < (var_1_16 * var_1_38)) ? ((var_1_18 > var_1_37) ? (var_1_31 == ((unsigned char) (((var_1_32 - var_1_33) - var_1_34) - var_1_35))) : (var_1_31 == ((unsigned char) (((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))))) : ((var_1_7 && var_1_11) ? (var_1_31 == ((unsigned char) ((((((((2) < 0 ) ? -(2) : (2)))) > (128)) ? (((((2) < 0 ) ? -(2) : (2)))) : (128))))) : ((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) < (50u & (var_1_30 - var_1_37))) ? (var_1_31 == ((unsigned char) ((((((var_1_32 - 50)) < ((200 - 10))) ? ((var_1_32 - 50)) : ((200 - 10)))) - var_1_35))) : (((5 - var_1_35) < ((var_1_26 - var_1_3) | (var_1_34 * var_1_15))) ? (var_1_31 == ((unsigned char) (var_1_32 - ((((var_1_33) > ((var_1_36 - var_1_34))) ? (var_1_33) : ((var_1_36 - var_1_34))))))) : (var_1_31 == ((unsigned char) ((((var_1_33) < (var_1_36)) ? (var_1_33) : (var_1_36)))))))))) && ((var_1_15 <= ((var_1_19 - var_1_68) / var_1_36)) ? (var_1_37 == ((signed long int) ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) : 1)) && ((var_1_27 > 128u) ? ((! var_1_83) ? (var_1_38 == ((unsigned long int) (var_1_3 + (((((var_1_28 - var_1_93)) > ((var_1_36 + var_1_34))) ? ((var_1_28 - var_1_93)) : ((var_1_36 + var_1_34))))))) : (var_1_38 == ((unsigned long int) ((((((((var_1_36) < (0u)) ? (var_1_36) : (0u)))) > (var_1_5)) ? (((((var_1_36) < (0u)) ? (var_1_36) : (0u)))) : (var_1_5)))))) : (var_1_38 == ((unsigned long int) ((((var_1_26) < (0u)) ? (var_1_26) : (0u))))))) && ((! var_1_7) ? (var_1_39 == ((unsigned short int) ((((0) > (var_1_19)) ? (0) : (var_1_19))))) : ((var_1_42 >= var_1_9) ? (var_1_39 == ((unsigned short int) (500 + (var_1_16 - var_1_17)))) : (var_1_39 == ((unsigned short int) ((((((var_1_40 - var_1_32)) > (var_1_19)) ? ((var_1_40 - var_1_32)) : (var_1_19))) - var_1_35)))))) && ((! var_1_23) ? (var_1_23 ? (var_1_41 == ((signed short int) ((((((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35)))) < (var_1_40)) ? (((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35)))) : (var_1_40))))) : 1) : ((var_1_52 < var_1_35) ? (var_1_41 == ((signed short int) ((var_1_17 + var_1_20) - ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))))) : (var_1_41 == ((signed short int) ((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35)))))))) && ((! last_1_var_1_7) ? ((! var_1_11) ? (var_1_42 == ((double) ((((var_1_6) < (999999.5)) ? (var_1_6) : (999999.5))))) : 1) : ((((((var_1_15) < (last_1_var_1_90)) ? (var_1_15) : (last_1_var_1_90))) > var_1_34) ? (var_1_42 == ((double) (var_1_43 + var_1_44))) : (var_1_42 == ((double) ((var_1_45 - var_1_46) - (var_1_47 + var_1_48))))))) && ((var_1_44 < (var_1_48 + var_1_46)) ? ((var_1_63 || var_1_11) ? (var_1_49 == ((unsigned short int) (var_1_33 + var_1_35))) : (var_1_49 == ((unsigned short int) (var_1_32 + var_1_36)))) : (((var_1_4 << var_1_36) <= (var_1_90 + (var_1_28 | var_1_27))) ? (((var_1_90 * var_1_5) != var_1_93) ? (var_1_49 == ((unsigned short int) (var_1_19 - var_1_93))) : (var_1_49 == ((unsigned short int) ((((var_1_14) > (var_1_93)) ? (var_1_14) : (var_1_93)))))) : (((((((var_1_15 / var_1_4)) > (var_1_16)) ? ((var_1_15 / var_1_4)) : (var_1_16))) <= var_1_88) ? ((! (var_1_72 && var_1_24)) ? (var_1_49 == ((unsigned short int) (((((((((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) < 0 ) ? -((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) : ((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16)))))) > (((((var_1_34) < ((64 + var_1_32))) ? (var_1_34) : ((64 + var_1_32)))))) ? ((((((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) < 0 ) ? -((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16))) : ((((var_1_19) < (var_1_16)) ? (var_1_19) : (var_1_16)))))) : (((((var_1_34) < ((64 + var_1_32))) ? (var_1_34) : ((64 + var_1_32))))))))) : (var_1_49 == ((unsigned short int) (59519 - 16)))) : ((var_1_21 < var_1_17) ? ((0 >= (32 * var_1_4)) ? (var_1_49 == ((unsigned short int) ((((var_1_34) > ((var_1_21 + var_1_32))) ? (var_1_34) : ((var_1_21 + var_1_32)))))) : (var_1_49 == ((unsigned short int) ((((var_1_33) > (var_1_16)) ? (var_1_33) : (var_1_16)))))) : 1))))) && ((var_1_33 < var_1_15) ? ((49.875f <= var_1_43) ? (var_1_52 == ((signed long int) ((last_1_var_1_52 + -5) + (100 - var_1_33)))) : (var_1_24 ? (var_1_52 == ((signed long int) (var_1_27 - var_1_16))) : 1)) : ((var_1_47 >= ((((var_1_42) > (((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43))))) ? (var_1_42) : (((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43))))))) ? (var_1_52 == ((signed long int) ((((((((var_1_35) > (0)) ? (var_1_35) : (0)))) < (var_1_33)) ? (((((var_1_35) > (0)) ? (var_1_35) : (0)))) : (var_1_33))))) : (var_1_52 == ((signed long int) var_1_16))))) && (var_1_11 ? (var_1_53 == ((unsigned char) (128 - var_1_34))) : (var_1_53 == ((unsigned char) (var_1_32 - ((((var_1_35) > (var_1_34)) ? (var_1_35) : (var_1_34)))))))) && (var_1_83 ? ((var_1_23 || var_1_72) ? (var_1_54 == ((unsigned short int) ((((var_1_76) > (4)) ? (var_1_76) : (4))))) : (var_1_54 == ((unsigned short int) (var_1_40 - var_1_35)))) : (var_1_54 == ((unsigned short int) var_1_32)))) && ((((var_1_56 - var_1_47) - var_1_45) != var_1_46) ? (var_1_55 == ((unsigned char) var_1_36)) : (var_1_55 == ((unsigned char) ((((((var_1_34 + var_1_33)) > ((var_1_57 + 32))) ? ((var_1_34 + var_1_33)) : ((var_1_57 + 32)))) + 4))))) && ((var_1_52 > (var_1_77 * var_1_92)) ? (var_1_63 ? (var_1_58 == ((float) (((((var_1_48 - (var_1_46 + var_1_47))) < (var_1_45)) ? ((var_1_48 - (var_1_46 + var_1_47))) : (var_1_45))))) : (var_1_58 == ((float) (var_1_47 + var_1_43)))) : (var_1_58 == ((float) var_1_46)))) && ((var_1_33 < var_1_5) ? (var_1_59 == ((signed short int) (((((var_1_68 + var_1_34)) > ((var_1_36 - var_1_33))) ? ((var_1_68 + var_1_34)) : ((var_1_36 - var_1_33)))))) : 1)) && (((((((((var_1_43) < (199.6)) ? (var_1_43) : (199.6))) < 0 ) ? -((((var_1_43) < (199.6)) ? (var_1_43) : (199.6))) : ((((var_1_43) < (199.6)) ? (var_1_43) : (199.6))))) >= (var_1_58 / 9.875)) ? (var_1_60 == ((float) (var_1_48 + var_1_46))) : 1)) && (((var_1_32 - var_1_57) < var_1_38) ? ((var_1_83 && (var_1_25 != var_1_36)) ? (var_1_61 == ((signed long int) ((((var_1_81) < ((var_1_40 + 1000))) ? (var_1_81) : ((var_1_40 + 1000)))))) : 1) : (var_1_61 == ((signed long int) (var_1_88 - (((((var_1_62 - var_1_93)) > (var_1_90)) ? ((var_1_62 - var_1_93)) : (var_1_90)))))))) && ((! last_1_var_1_83) ? ((! ((var_1_21 - var_1_57) >= (last_1_var_1_52 ^ var_1_34))) ? (var_1_23 ? (var_1_63 == ((unsigned char) (last_1_var_1_83 || (! (var_1_24 && var_1_11))))) : 1) : (var_1_63 == ((unsigned char) var_1_11))) : (var_1_63 == ((unsigned char) ((var_1_11 || var_1_64) || ((var_1_65 || var_1_66) || var_1_67)))))) && (((var_1_27 * var_1_35) <= (var_1_77 / ((((var_1_69) > (var_1_40)) ? (var_1_69) : (var_1_40))))) ? (var_1_68 == ((signed short int) ((((((var_1_57 - var_1_33)) < (var_1_76)) ? ((var_1_57 - var_1_33)) : (var_1_76))) + ((((((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) < (var_1_32)) ? (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) : (var_1_32)))))) : (var_1_68 == ((signed short int) var_1_32)))) && ((((var_1_45 + var_1_58) + (var_1_48 - var_1_46)) <= var_1_42) ? (var_1_70 == ((signed short int) var_1_35)) : ((var_1_66 || var_1_67) ? ((! var_1_22) ? (var_1_22 ? (var_1_70 == ((signed short int) ((((((var_1_17 - var_1_33)) > (((((var_1_61) < (var_1_34)) ? (var_1_61) : (var_1_34))))) ? ((var_1_17 - var_1_33)) : (((((var_1_61) < (var_1_34)) ? (var_1_61) : (var_1_34)))))) + var_1_35))) : (var_1_70 == ((signed short int) (-256 + var_1_35)))) : (var_1_70 == ((signed short int) ((((var_1_71) > ((var_1_33 - var_1_57))) ? (var_1_71) : ((var_1_33 - var_1_57))))))) : (var_1_70 == ((signed short int) ((((var_1_33) < ((((((var_1_86 - 2)) > (var_1_34)) ? ((var_1_86 - 2)) : (var_1_34))))) ? (var_1_33) : ((((((var_1_86 - 2)) > (var_1_34)) ? ((var_1_86 - 2)) : (var_1_34))))))))))) && (var_1_72 == ((unsigned char) (var_1_24 && var_1_23)))) && ((var_1_56 >= var_1_47) ? (var_1_11 ? (var_1_73 == ((float) ((var_1_45 - ((((var_1_47) > (var_1_46)) ? (var_1_47) : (var_1_46)))) - var_1_6))) : (var_1_73 == ((float) ((((var_1_44) > ((var_1_46 + (var_1_74 + var_1_75)))) ? (var_1_44) : ((var_1_46 + (var_1_74 + var_1_75)))))))) : (var_1_73 == ((float) ((((var_1_45) > (var_1_6)) ? (var_1_45) : (var_1_6))))))) && ((! last_1_var_1_72) ? (last_1_var_1_22 ? (((var_1_21 % -64) != last_1_var_1_25) ? (var_1_76 == ((signed long int) last_1_var_1_25)) : (var_1_76 == ((signed long int) var_1_40))) : (var_1_76 == ((signed long int) var_1_26))) : (var_1_76 == ((signed long int) var_1_16)))) && ((-8 > var_1_19) ? (var_1_77 == ((unsigned long int) (var_1_57 + last_1_var_1_68))) : 1)) && (var_1_65 ? (var_1_78 == ((unsigned char) (var_1_32 - var_1_33))) : ((var_1_73 < (((((- var_1_1)) < (var_1_73)) ? ((- var_1_1)) : (var_1_73)))) ? (var_1_78 == ((unsigned char) (((((((((var_1_32) > (var_1_79)) ? (var_1_32) : (var_1_79)))) > (var_1_80)) ? (((((var_1_32) > (var_1_79)) ? (var_1_32) : (var_1_79)))) : (var_1_80))) - var_1_57))) : 1))) && ((! var_1_66) ? (var_1_81 == ((unsigned short int) (100 + var_1_16))) : (var_1_81 == ((unsigned short int) (var_1_19 - var_1_34))))) && (var_1_23 ? ((var_1_61 > ((var_1_88 * var_1_90) / var_1_62)) ? ((var_1_88 > ((~ var_1_96) * var_1_76)) ? ((((((var_1_47) < (var_1_9)) ? (var_1_47) : (var_1_9))) != var_1_56) ? (var_1_82 == ((float) (var_1_47 - var_1_46))) : (var_1_82 == ((float) var_1_75))) : (var_1_82 == ((float) 9.74f))) : 1) : (var_1_82 == ((float) ((((var_1_6 - var_1_45) < 0 ) ? -(var_1_6 - var_1_45) : (var_1_6 - var_1_45))))))) && ((var_1_65 && last_1_var_1_63) ? ((var_1_79 <= var_1_33) ? (var_1_83 == ((unsigned char) (((var_1_69 == last_1_var_1_88) || var_1_23) && (last_1_var_1_7 || var_1_24)))) : ((last_1_var_1_20 > last_1_var_1_25) ? ((last_1_var_1_86 >= (var_1_17 / var_1_36)) ? (var_1_83 == ((unsigned char) (var_1_67 || (var_1_24 || var_1_23)))) : (var_1_83 == ((unsigned char) (! (var_1_67 && var_1_65))))) : (var_1_83 == ((unsigned char) ((last_1_var_1_7 || var_1_24) && var_1_23))))) : (var_1_83 == ((unsigned char) var_1_67)))) && (var_1_84 == ((float) var_1_85))) && (var_1_86 == ((unsigned char) var_1_33))) && (var_1_72 ? (var_1_87 == ((signed char) var_1_33)) : (var_1_87 == ((signed char) 4)))) && (var_1_63 ? (var_1_88 == ((unsigned long int) var_1_25)) : 1)) && (var_1_23 ? (var_1_89 == ((unsigned char) var_1_24)) : 1)) && (var_1_72 ? (var_1_90 == ((unsigned long int) 0u)) : (var_1_90 == ((unsigned long int) var_1_40)))) && (var_1_24 ? (var_1_91 == ((signed char) var_1_33)) : 1)) && (var_1_92 == ((unsigned short int) var_1_57))) && (var_1_63 ? (var_1_93 == ((unsigned short int) var_1_19)) : (var_1_93 == ((unsigned short int) var_1_16)))) && (var_1_94 == ((signed char) var_1_32))) && (var_1_95 == ((unsigned short int) var_1_33))) && (var_1_96 == ((signed long int) var_1_54))) && (var_1_65 ? (((var_1_84 / ((((var_1_56) < (var_1_98)) ? (var_1_56) : (var_1_98)))) == var_1_44) ? ((var_1_47 < var_1_74) ? (var_1_97 == ((signed long int) (var_1_17 - 100))) : (var_1_97 == ((signed long int) var_1_26))) : (var_1_97 == ((signed long int) -32))) : (var_1_97 == ((signed long int) var_1_33)))
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
