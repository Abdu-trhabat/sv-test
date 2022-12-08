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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 100;
signed short int var_1_9 = -1;
signed long int var_1_11 = 100000;
float var_1_12 = 1.6;
float var_1_13 = 100.66;
float var_1_14 = 16.95;
float var_1_15 = 15.5;
unsigned char var_1_17 = 1;
float var_1_18 = -0.8;
float var_1_19 = 0.0;
signed short int var_1_20 = -5;
unsigned long int var_1_21 = 2;
signed short int var_1_23 = -128;
signed long int var_1_24 = 1;
float var_1_25 = 8.4;
signed char var_1_26 = 32;
double var_1_27 = 255.5;
double var_1_28 = 9999.5;
float var_1_29 = 7.625;
unsigned long int var_1_30 = 0;
unsigned long int var_1_31 = 2518039272;
unsigned long int var_1_33 = 1085424033;
unsigned long int var_1_34 = 1698662291;
unsigned long int var_1_36 = 200;
float var_1_37 = 0.8;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 64;
float var_1_40 = 255.5;
unsigned long int var_1_41 = 0;
unsigned long int var_1_43 = 4119510085;
float var_1_44 = 32.25;
unsigned short int var_1_46 = 8;
unsigned short int var_1_47 = 61147;
unsigned short int var_1_48 = 57949;
float var_1_49 = 99999999.25;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 200;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned short int var_1_54 = 5;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
signed short int var_1_58 = -200;
float var_1_61 = 100.75;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned long int var_1_64 = 200;
signed long int var_1_65 = 64;
unsigned char var_1_66 = 1;
unsigned char var_1_67 = 1;
unsigned char var_1_68 = 1;
float var_1_69 = 0.7;
float var_1_72 = 31.5;
signed char var_1_73 = 10;
signed char var_1_74 = 32;
signed char var_1_75 = 8;
signed char var_1_76 = 1;
signed char var_1_77 = 50;
signed char var_1_78 = -1;
signed char var_1_79 = 2;
signed char var_1_80 = 25;
signed char var_1_82 = 2;
signed long int var_1_83 = -10;
unsigned char var_1_86 = 8;
unsigned char var_1_87 = 128;
double var_1_88 = 5.4;
signed short int var_1_89 = -128;
double var_1_90 = 0.4;
double var_1_91 = 4.875;
double var_1_92 = 50.25;
unsigned char var_1_93 = 0;
unsigned char var_1_94 = 10;
float var_1_95 = -0.625;
unsigned char var_1_96 = 8;
unsigned char var_1_97 = 1;
signed char var_1_98 = 32;
signed short int var_1_99 = 256;
float var_1_100 = 256.8;
unsigned char var_1_101 = 1;
double var_1_102 = 3.15;
unsigned char var_1_103 = 8;
float var_1_104 = 64.375;
signed short int var_1_105 = -1;
double var_1_106 = 99.5;
unsigned char var_1_107 = 16;
unsigned char var_1_108 = 1;
signed long int last_1_var_1_11 = 100000;
signed short int last_1_var_1_20 = -5;
unsigned long int last_1_var_1_21 = 2;
signed short int last_1_var_1_23 = -128;
float last_1_var_1_29 = 7.625;
unsigned long int last_1_var_1_36 = 200;
float last_1_var_1_37 = 0.8;
unsigned long int last_1_var_1_41 = 0;
float last_1_var_1_49 = 99999999.25;
unsigned char last_1_var_1_55 = 1;
unsigned char last_1_var_1_62 = 0;
unsigned long int last_1_var_1_64 = 200;
signed long int last_1_var_1_65 = 64;
unsigned char last_1_var_1_66 = 1;
unsigned char last_1_var_1_68 = 1;
signed long int last_1_var_1_83 = -10;
unsigned char last_1_var_1_86 = 8;
unsigned char last_1_var_1_93 = 0;
unsigned char last_1_var_1_96 = 8;
signed char last_1_var_1_98 = 32;
signed short int last_1_var_1_99 = 256;
float last_1_var_1_100 = 256.8;
unsigned char last_1_var_1_103 = 8;
unsigned char last_1_var_1_107 = 16;
void initially(void) {
}
void step(void) {
 if (var_1_56 || (last_1_var_1_64 != 10)) {
  if (last_1_var_1_103 >= last_1_var_1_86) {
   var_1_108 = (! var_1_67);
  } else {
   if (last_1_var_1_21 >= (var_1_77 << var_1_51)) {
    var_1_108 = var_1_56;
   } else {
    var_1_108 = var_1_63;
   }
  }
 } else {
  var_1_108 = var_1_67;
 }
 unsigned long int stepLocal_12 = last_1_var_1_21;
 signed long int stepLocal_11 = last_1_var_1_23;
 if (! last_1_var_1_66) {
  if (last_1_var_1_99 <= stepLocal_12) {
   if ((((((last_1_var_1_49 / var_1_19)) < (var_1_18)) ? ((last_1_var_1_49 / var_1_19)) : (var_1_18))) != last_1_var_1_29) {
    var_1_30 = (var_1_31 - last_1_var_1_107);
   }
  } else {
   var_1_30 = ((((last_1_var_1_23) < 0 ) ? -(last_1_var_1_23) : (last_1_var_1_23)));
  }
 } else {
  if (last_1_var_1_21 <= stepLocal_11) {
   var_1_30 = (((((var_1_33 + var_1_34) - last_1_var_1_93) < 0 ) ? -((var_1_33 + var_1_34) - last_1_var_1_93) : ((var_1_33 + var_1_34) - last_1_var_1_93)));
  } else {
   var_1_30 = (last_1_var_1_107 + last_1_var_1_107);
  }
 }
 if ((4 >> var_1_30) >= var_1_30) {
  if ((- var_1_30) > var_1_38) {
   var_1_49 = (((((var_1_40) < ((var_1_14 + var_1_13))) ? (var_1_40) : ((var_1_14 + var_1_13)))) - var_1_15);
  } else {
   var_1_49 = 4.375f;
  }
 }
 signed long int stepLocal_4 = last_1_var_1_98;
 unsigned char stepLocal_3 = (last_1_var_1_36 * last_1_var_1_93) >= last_1_var_1_98;
 unsigned long int stepLocal_2 = (last_1_var_1_64 / var_1_9) + last_1_var_1_93;
 signed long int stepLocal_1 = last_1_var_1_65;
 unsigned long int stepLocal_0 = 4 + last_1_var_1_36;
 if (stepLocal_3 && (! last_1_var_1_68)) {
  var_1_1 = (last_1_var_1_93 - ((((last_1_var_1_36) > (last_1_var_1_93)) ? (last_1_var_1_36) : (last_1_var_1_93))));
 } else {
  if ((65169 - last_1_var_1_36) < stepLocal_1) {
   var_1_1 = (((((last_1_var_1_36) < (last_1_var_1_93)) ? (last_1_var_1_36) : (last_1_var_1_93))) - last_1_var_1_93);
  } else {
   if (stepLocal_0 != (16 * last_1_var_1_93)) {
    if (last_1_var_1_93 != stepLocal_4) {
     if (stepLocal_2 >= last_1_var_1_93) {
      var_1_1 = last_1_var_1_96;
     }
    } else {
     var_1_1 = last_1_var_1_36;
    }
   }
  }
 }
 var_1_20 = ((((last_1_var_1_20) > ((((((var_1_17) < (var_1_1)) ? (var_1_17) : (var_1_1))) + last_1_var_1_20))) ? (last_1_var_1_20) : ((((((var_1_17) < (var_1_1)) ? (var_1_17) : (var_1_1))) + last_1_var_1_20))));
 unsigned long int stepLocal_30 = (var_1_80 + last_1_var_1_41) << var_1_34;
 if (! (var_1_63 || last_1_var_1_55)) {
  if (stepLocal_30 < last_1_var_1_93) {
   var_1_86 = (16 + var_1_76);
  }
 } else {
  var_1_86 = (((((var_1_87 - var_1_39)) > (((var_1_79 + var_1_80) + 10))) ? ((var_1_87 - var_1_39)) : (((var_1_79 + var_1_80) + 10))));
 }
 if (last_1_var_1_37 >= var_1_40) {
  if (last_1_var_1_100 <= 49.06f) {
   var_1_62 = (var_1_53 || (! var_1_63));
  }
 }
 if ((! var_1_62) || var_1_62) {
  var_1_27 = ((((var_1_14) > ((4.2 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) ? (var_1_14) : ((4.2 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))));
 }
 if (! var_1_56) {
  if (var_1_62) {
   var_1_68 = (! (var_1_67 || var_1_56));
  } else {
   var_1_68 = var_1_57;
  }
 } else {
  var_1_68 = (! 0);
 }
 if (var_1_62) {
  var_1_102 = var_1_72;
 }
 signed char stepLocal_36 = var_1_75;
 unsigned char stepLocal_35 = last_1_var_1_66;
 if (last_1_var_1_62 || stepLocal_35) {
  if (! last_1_var_1_66) {
   if (last_1_var_1_83 >= stepLocal_36) {
    var_1_93 = (((((4 + ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))))) > (var_1_75)) ? ((4 + ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))))) : (var_1_75)));
   } else {
    var_1_93 = var_1_75;
   }
  } else {
   var_1_93 = var_1_80;
  }
 } else {
  var_1_93 = var_1_94;
 }
 var_1_29 = (var_1_14 - var_1_15);
 if (var_1_44 >= 4.625f) {
  var_1_55 = var_1_56;
 } else {
  var_1_55 = (! (var_1_56 && var_1_57));
 }
 unsigned short int stepLocal_32 = var_1_47;
 signed long int stepLocal_31 = var_1_86 / 5;
 if (var_1_48 >= stepLocal_31) {
  var_1_88 = ((var_1_13 - var_1_14) + var_1_40);
 } else {
  if ((4 - var_1_52) > stepLocal_32) {
   var_1_88 = ((5.8963147746434488E18 - var_1_14) - (((((49.7) > (var_1_13)) ? (49.7) : (var_1_13))) + var_1_40));
  } else {
   var_1_88 = (var_1_19 - var_1_14);
  }
 }
 if (var_1_67) {
  var_1_95 = var_1_18;
 } else {
  var_1_95 = var_1_19;
 }
 if (var_1_67) {
  var_1_97 = 0;
 } else {
  var_1_97 = var_1_56;
 }
 var_1_98 = var_1_52;
 var_1_99 = var_1_87;
 var_1_100 = var_1_92;
 var_1_101 = var_1_57;
 var_1_103 = var_1_87;
 var_1_104 = var_1_14;
 if (var_1_53) {
  var_1_105 = var_1_87;
 } else {
  var_1_105 = -100;
 }
 if (var_1_67) {
  var_1_107 = var_1_39;
 }
 unsigned char stepLocal_29 = var_1_93;
 unsigned char stepLocal_28 = var_1_62;
 if (stepLocal_28 && (var_1_86 >= var_1_93)) {
  if (stepLocal_29 >= var_1_99) {
   var_1_83 = ((((((((last_1_var_1_83) > (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))) ? (last_1_var_1_83) : (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))))) < (((((var_1_75) > (var_1_9)) ? (var_1_75) : (var_1_9))))) ? (((((last_1_var_1_83) > (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))) ? (last_1_var_1_83) : (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))))) : (((((var_1_75) > (var_1_9)) ? (var_1_75) : (var_1_9))))));
  }
 } else {
  var_1_83 = var_1_98;
 }
 unsigned char stepLocal_18 = var_1_107;
 if (stepLocal_18 <= ((var_1_51 - var_1_52) - var_1_39)) {
  var_1_50 = (var_1_97 && var_1_53);
 }
 unsigned char stepLocal_21 = var_1_93;
 if (var_1_107 != stepLocal_21) {
  var_1_61 = (((((((var_1_14) < ((var_1_13 + 128.125f))) ? (var_1_14) : ((var_1_13 + 128.125f)))) < 0 ) ? -((((var_1_14) < ((var_1_13 + 128.125f))) ? (var_1_14) : ((var_1_13 + 128.125f)))) : ((((var_1_14) < ((var_1_13 + 128.125f))) ? (var_1_14) : ((var_1_13 + 128.125f))))));
 } else {
  var_1_61 = (var_1_15 - 0.6f);
 }
 unsigned char stepLocal_22 = var_1_63;
 if (stepLocal_22 && (var_1_40 >= var_1_95)) {
  var_1_65 = (((((50 + (var_1_99 + -5))) < (var_1_9)) ? ((50 + (var_1_99 + -5))) : (var_1_9)));
 } else {
  var_1_65 = var_1_38;
 }
 if (var_1_50) {
  var_1_96 = var_1_52;
 }
 if (var_1_50) {
  var_1_106 = var_1_40;
 } else {
  var_1_106 = var_1_15;
 }
 unsigned char stepLocal_19 = var_1_108;
 if (stepLocal_19 && (var_1_65 < var_1_39)) {
  var_1_54 = (var_1_47 - (28744 - var_1_38));
 }
 signed long int stepLocal_10 = var_1_96 >> var_1_30;
 if (stepLocal_10 <= (var_1_65 + var_1_30)) {
  if (var_1_97) {
   var_1_25 = var_1_15;
  }
 }
 if (var_1_50) {
  var_1_46 = (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - 64);
 } else {
  var_1_46 = var_1_105;
 }
 unsigned char stepLocal_8 = var_1_62;
 if (stepLocal_8 || var_1_97) {
  var_1_21 = ((((((((200u) > (var_1_20)) ? (200u) : (var_1_20)))) < (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) ? (((((200u) > (var_1_20)) ? (200u) : (var_1_20)))) : (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))));
 }
 if (var_1_108 || (! var_1_97)) {
  if (((var_1_30 + var_1_103) + var_1_21) < -32) {
   var_1_28 = ((((15.4) > (var_1_13)) ? (15.4) : (var_1_13)));
  } else {
   var_1_28 = var_1_14;
  }
 } else {
  var_1_28 = var_1_15;
 }
 if (var_1_34 > var_1_47) {
  var_1_89 = (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) - var_1_65);
 } else {
  var_1_89 = ((((var_1_46) > ((var_1_74 + (var_1_20 - var_1_93)))) ? (var_1_46) : ((var_1_74 + (var_1_20 - var_1_93)))));
 }
 unsigned short int stepLocal_23 = var_1_46;
 if (var_1_63) {
  if ((var_1_93 | var_1_39) >= stepLocal_23) {
   var_1_66 = ((var_1_55 || var_1_56) && (var_1_57 && var_1_67));
  } else {
   var_1_66 = (! var_1_53);
  }
 } else {
  var_1_66 = (! var_1_56);
 }
 signed long int stepLocal_17 = (var_1_39 ^ 128) / var_1_17;
 unsigned char stepLocal_16 = var_1_108;
 unsigned char stepLocal_15 = var_1_50 && var_1_66;
 unsigned char stepLocal_14 = (63.625f / var_1_19) <= (var_1_100 / var_1_44);
 if (var_1_108 || stepLocal_15) {
  if (var_1_66 && stepLocal_16) {
   var_1_41 = (((((var_1_31 - var_1_17)) < ((((((var_1_43 - var_1_39)) < (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86))))) ? ((var_1_43 - var_1_39)) : (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86)))))))) ? ((var_1_31 - var_1_17)) : ((((((var_1_43 - var_1_39)) < (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86))))) ? ((var_1_43 - var_1_39)) : (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86)))))))));
  } else {
   if ((! var_1_50) && stepLocal_14) {
    var_1_41 = ((((8u) > (50u)) ? (8u) : (50u)));
   } else {
    if (var_1_38 >= stepLocal_17) {
     var_1_41 = ((((((((var_1_31) > (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))) ? (var_1_31) : (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))))) > (var_1_1)) ? (((((var_1_31) > (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))) ? (var_1_31) : (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))))) : (var_1_1)));
    }
   }
  }
 } else {
  var_1_41 = (((((var_1_1) < (var_1_30)) ? (var_1_1) : (var_1_30))) + var_1_17);
 }
 if (var_1_50) {
  var_1_23 = ((-8 + -4) + var_1_20);
 } else {
  var_1_23 = (var_1_41 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))));
 }
 unsigned long int stepLocal_27 = var_1_31;
 if (var_1_23 == stepLocal_27) {
  var_1_82 = (var_1_80 + var_1_74);
 } else {
  var_1_82 = var_1_52;
 }
 signed long int stepLocal_9 = (((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65));
 if (var_1_1 > stepLocal_9) {
  if (var_1_18 > ((((var_1_28) < (var_1_13)) ? (var_1_28) : (var_1_13)))) {
   var_1_24 = ((((var_1_105) > ((var_1_107 + var_1_103))) ? (var_1_105) : ((var_1_107 + var_1_103))));
  } else {
   var_1_24 = (var_1_107 + var_1_105);
  }
 } else {
  var_1_24 = var_1_82;
 }
 if (var_1_105 <= ((0 ^ var_1_82) & var_1_46)) {
  if (var_1_103 <= var_1_93) {
   if (var_1_86 != last_1_var_1_64) {
    if (var_1_101 || var_1_56) {
     var_1_64 = (var_1_43 - ((((last_1_var_1_64) < (var_1_105)) ? (last_1_var_1_64) : (var_1_105))));
    }
   } else {
    var_1_64 = ((((last_1_var_1_64) < (var_1_31)) ? (last_1_var_1_64) : (var_1_31)));
   }
  } else {
   var_1_64 = 4u;
  }
 }
 unsigned char stepLocal_34 = var_1_67;
 unsigned char stepLocal_33 = var_1_62;
 if (((var_1_80 * var_1_64) >= var_1_31) && stepLocal_33) {
  var_1_90 = 2.75;
 } else {
  if (var_1_101 || stepLocal_34) {
   var_1_90 = ((0.25 - var_1_13) + var_1_14);
  } else {
   var_1_90 = (((var_1_91 + var_1_92) - var_1_14) + var_1_40);
  }
 }
 signed long int stepLocal_26 = var_1_20 + var_1_17;
 unsigned char stepLocal_25 = var_1_17;
 unsigned long int stepLocal_24 = var_1_33 + var_1_24;
 if (stepLocal_24 != var_1_17) {
  if (stepLocal_26 >= var_1_96) {
   if (var_1_24 >= stepLocal_25) {
    if (((((var_1_14) < (var_1_27)) ? (var_1_14) : (var_1_27))) < ((((var_1_106) < (var_1_28)) ? (var_1_106) : (var_1_28)))) {
     var_1_69 = ((((var_1_13) > (var_1_40)) ? (var_1_13) : (var_1_40)));
    }
   } else {
    if ((var_1_90 + (var_1_28 / var_1_19)) >= var_1_15) {
     var_1_69 = ((((((var_1_40 + var_1_13) - var_1_15)) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (((var_1_40 + var_1_13) - var_1_15)) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))));
    } else {
     var_1_69 = (var_1_40 - var_1_14);
    }
   }
  } else {
   var_1_69 = ((((16.125f) > (((((var_1_40) > (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18))))) ? (var_1_40) : (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18)))))))) ? (16.125f) : (((((var_1_40) > (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18))))) ? (var_1_40) : (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18)))))))));
  }
 } else {
  var_1_69 = var_1_18;
 }
 if (((((var_1_106) < (10.075)) ? (var_1_106) : (10.075))) > (var_1_72 * var_1_69)) {
  if ((var_1_38 - var_1_46) == var_1_39) {
   var_1_73 = ((var_1_74 + var_1_75) - (var_1_76 + var_1_77));
  } else {
   var_1_73 = (var_1_78 - ((var_1_79 + var_1_80) + var_1_77));
  }
 } else {
  if (var_1_104 < ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) {
   if ((var_1_74 + var_1_103) > var_1_48) {
    var_1_73 = (var_1_77 + var_1_76);
   } else {
    var_1_73 = ((var_1_80 + var_1_74) - (var_1_75 + var_1_77));
   }
  }
 }
 if (var_1_18 >= var_1_69) {
  if (var_1_93 == (var_1_96 / ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) {
   var_1_26 = ((((1) < 0 ) ? -(1) : (1)));
  }
 }
 signed long int stepLocal_7 = var_1_93 + var_1_99;
 signed short int stepLocal_6 = var_1_105;
 signed long int stepLocal_5 = -4;
 if (((last_1_var_1_11 * var_1_105) / var_1_9) > stepLocal_7) {
  if (stepLocal_5 < var_1_99) {
   var_1_11 = var_1_73;
  } else {
   if (stepLocal_6 >= (var_1_1 | var_1_105)) {
    var_1_11 = (var_1_105 + (var_1_107 - last_1_var_1_11));
   }
  }
 }
 if (var_1_99 <= var_1_105) {
  var_1_12 = ((var_1_13 + var_1_14) - var_1_15);
 } else {
  if ((16 + (var_1_11 % var_1_17)) <= var_1_107) {
   var_1_12 = (((((var_1_13 - var_1_15)) < (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18))))) ? ((var_1_13 - var_1_15)) : (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18))))));
  } else {
   if (! var_1_66) {
    var_1_12 = (((((var_1_13) > (9999.375f)) ? (var_1_13) : (9999.375f))) - (var_1_19 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))));
   } else {
    var_1_12 = ((((var_1_19) < (256.1f)) ? (var_1_19) : (256.1f)));
   }
  }
 }
 unsigned short int stepLocal_20 = var_1_48;
 if (((((var_1_102) > ((var_1_15 - var_1_19))) ? (var_1_102) : ((var_1_15 - var_1_19)))) > var_1_12) {
  var_1_58 = (var_1_17 - ((((((((var_1_51) < (var_1_86)) ? (var_1_51) : (var_1_86)))) > ((21375 - var_1_98))) ? (((((var_1_51) < (var_1_86)) ? (var_1_51) : (var_1_86)))) : ((21375 - var_1_98)))));
 } else {
  if (stepLocal_20 < var_1_9) {
   var_1_58 = ((var_1_52 - var_1_89) + (var_1_51 + (var_1_38 + var_1_65)));
  } else {
   var_1_58 = ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)));
  }
 }
 if (! var_1_101) {
  if (var_1_98 == var_1_96) {
   if (last_1_var_1_37 == (var_1_14 + var_1_100)) {
    if (((var_1_38 + var_1_39) - ((((1) > (2)) ? (1) : (2)))) <= ((var_1_11 & var_1_98) / ((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))))) {
     var_1_37 = (var_1_13 + (var_1_14 - var_1_40));
    }
   } else {
    var_1_37 = (9.999999999999995E14f - (((((var_1_14 + var_1_13)) > (var_1_15)) ? ((var_1_14 + var_1_13)) : (var_1_15))));
   }
  }
 }
 unsigned long int stepLocal_13 = var_1_54 & var_1_34;
 if (var_1_14 == var_1_106) {
  if (var_1_62) {
   if (var_1_66) {
    var_1_36 = (3142275971u - 128u);
   } else {
    var_1_36 = var_1_93;
   }
  } else {
   var_1_36 = (((((var_1_31) > (2448004024u)) ? (var_1_31) : (2448004024u))) - last_1_var_1_36);
  }
 } else {
  if (var_1_58 == stepLocal_13) {
   var_1_36 = (((((var_1_31 - var_1_46)) < (((((var_1_17) < (var_1_93)) ? (var_1_17) : (var_1_93))))) ? ((var_1_31 - var_1_46)) : (((((var_1_17) < (var_1_93)) ? (var_1_17) : (var_1_93))))));
  }
 }
}
void updateVariables() {
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32768);
 assume_abort_if_not(var_1_9 <= 32767);
 assume_abort_if_not(var_1_9 != 0);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 255);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427382800e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 1073741823);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 1073741824);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 128);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 64);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 2147483647);
 assume_abort_if_not(var_1_43 <= 4294967294);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 assume_abort_if_not(var_1_44 != 0.0F);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 32767);
 assume_abort_if_not(var_1_47 <= 65534);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 32767);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 191);
 assume_abort_if_not(var_1_51 <= 255);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 64);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 1);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 0);
 var_1_67 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_67 >= 1);
 assume_abort_if_not(var_1_67 <= 1);
 var_1_72 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_72 >= -922337.2036854765600e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854765600e+12F && var_1_72 >= 1.0e-20F ));
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 63);
 var_1_75 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_75 >= 0);
 assume_abort_if_not(var_1_75 <= 63);
 var_1_76 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 63);
 var_1_77 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 63);
 var_1_78 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_78 >= -1);
 assume_abort_if_not(var_1_78 <= 126);
 var_1_79 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_79 >= 0);
 assume_abort_if_not(var_1_79 <= 32);
 var_1_80 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_80 >= 0);
 assume_abort_if_not(var_1_80 <= 31);
 var_1_87 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_87 >= 127);
 assume_abort_if_not(var_1_87 <= 254);
 var_1_91 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_91 >= 0.0F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 2305843.009213691390e+12F && var_1_91 >= 1.0e-20F ));
 var_1_92 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_92 >= 0.0F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 2305843.009213691390e+12F && var_1_92 >= 1.0e-20F ));
 var_1_94 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_94 >= 0);
 assume_abort_if_not(var_1_94 <= 254);
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_83 = var_1_83;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_96 = var_1_96;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_99 = var_1_99;
 last_1_var_1_100 = var_1_100;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_107 = var_1_107;
}
int property() {
 return (((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_36 * last_1_var_1_93) >= last_1_var_1_98) && (! last_1_var_1_68)) ? (var_1_1 == ((signed short int) (last_1_var_1_93 - ((((last_1_var_1_36) > (last_1_var_1_93)) ? (last_1_var_1_36) : (last_1_var_1_93)))))) : (((65169 - last_1_var_1_36) < last_1_var_1_65) ? (var_1_1 == ((signed short int) (((((last_1_var_1_36) < (last_1_var_1_93)) ? (last_1_var_1_36) : (last_1_var_1_93))) - last_1_var_1_93))) : (((4 + last_1_var_1_36) != (16 * last_1_var_1_93)) ? ((last_1_var_1_93 != last_1_var_1_98) ? ((((last_1_var_1_64 / var_1_9) + last_1_var_1_93) >= last_1_var_1_93) ? (var_1_1 == ((signed short int) last_1_var_1_96)) : 1) : (var_1_1 == ((signed short int) last_1_var_1_36))) : 1))) && ((((last_1_var_1_11 * var_1_105) / var_1_9) > (var_1_93 + var_1_99)) ? ((-4 < var_1_99) ? (var_1_11 == ((signed long int) var_1_73)) : ((var_1_105 >= (var_1_1 | var_1_105)) ? (var_1_11 == ((signed long int) (var_1_105 + (var_1_107 - last_1_var_1_11)))) : 1)) : 1)) && ((var_1_99 <= var_1_105) ? (var_1_12 == ((float) ((var_1_13 + var_1_14) - var_1_15))) : (((16 + (var_1_11 % var_1_17)) <= var_1_107) ? (var_1_12 == ((float) (((((var_1_13 - var_1_15)) < (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18))))) ? ((var_1_13 - var_1_15)) : (((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18)))))))) : ((! var_1_66) ? (var_1_12 == ((float) (((((var_1_13) > (9999.375f)) ? (var_1_13) : (9999.375f))) - (var_1_19 - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))))) : (var_1_12 == ((float) ((((var_1_19) < (256.1f)) ? (var_1_19) : (256.1f))))))))) && (var_1_20 == ((signed short int) ((((last_1_var_1_20) > ((((((var_1_17) < (var_1_1)) ? (var_1_17) : (var_1_1))) + last_1_var_1_20))) ? (last_1_var_1_20) : ((((((var_1_17) < (var_1_1)) ? (var_1_17) : (var_1_1))) + last_1_var_1_20))))))) && ((var_1_62 || var_1_97) ? (var_1_21 == ((unsigned long int) ((((((((200u) > (var_1_20)) ? (200u) : (var_1_20)))) < (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) ? (((((200u) > (var_1_20)) ? (200u) : (var_1_20)))) : (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)))))))) : 1)) && (var_1_50 ? (var_1_23 == ((signed short int) ((-8 + -4) + var_1_20))) : (var_1_23 == ((signed short int) (var_1_41 + ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))) && ((var_1_1 > ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))) ? ((var_1_18 > ((((var_1_28) < (var_1_13)) ? (var_1_28) : (var_1_13)))) ? (var_1_24 == ((signed long int) ((((var_1_105) > ((var_1_107 + var_1_103))) ? (var_1_105) : ((var_1_107 + var_1_103)))))) : (var_1_24 == ((signed long int) (var_1_107 + var_1_105)))) : (var_1_24 == ((signed long int) var_1_82)))) && (((var_1_96 >> var_1_30) <= (var_1_65 + var_1_30)) ? (var_1_97 ? (var_1_25 == ((float) var_1_15)) : 1) : 1)) && ((var_1_18 >= var_1_69) ? ((var_1_93 == (var_1_96 / ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? (var_1_26 == ((signed char) ((((1) < 0 ) ? -(1) : (1))))) : 1) : 1)) && (((! var_1_62) || var_1_62) ? (var_1_27 == ((double) ((((var_1_14) > ((4.2 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))) ? (var_1_14) : ((4.2 + ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))))))) : 1)) && ((var_1_108 || (! var_1_97)) ? ((((var_1_30 + var_1_103) + var_1_21) < -32) ? (var_1_28 == ((double) ((((15.4) > (var_1_13)) ? (15.4) : (var_1_13))))) : (var_1_28 == ((double) var_1_14))) : (var_1_28 == ((double) var_1_15)))) && (var_1_29 == ((float) (var_1_14 - var_1_15)))) && ((! last_1_var_1_66) ? ((last_1_var_1_99 <= last_1_var_1_21) ? (((((((last_1_var_1_49 / var_1_19)) < (var_1_18)) ? ((last_1_var_1_49 / var_1_19)) : (var_1_18))) != last_1_var_1_29) ? (var_1_30 == ((unsigned long int) (var_1_31 - last_1_var_1_107))) : 1) : (var_1_30 == ((unsigned long int) ((((last_1_var_1_23) < 0 ) ? -(last_1_var_1_23) : (last_1_var_1_23)))))) : ((last_1_var_1_21 <= last_1_var_1_23) ? (var_1_30 == ((unsigned long int) (((((var_1_33 + var_1_34) - last_1_var_1_93) < 0 ) ? -((var_1_33 + var_1_34) - last_1_var_1_93) : ((var_1_33 + var_1_34) - last_1_var_1_93))))) : (var_1_30 == ((unsigned long int) (last_1_var_1_107 + last_1_var_1_107)))))) && ((var_1_14 == var_1_106) ? (var_1_62 ? (var_1_66 ? (var_1_36 == ((unsigned long int) (3142275971u - 128u))) : (var_1_36 == ((unsigned long int) var_1_93))) : (var_1_36 == ((unsigned long int) (((((var_1_31) > (2448004024u)) ? (var_1_31) : (2448004024u))) - last_1_var_1_36)))) : ((var_1_58 == (var_1_54 & var_1_34)) ? (var_1_36 == ((unsigned long int) (((((var_1_31 - var_1_46)) < (((((var_1_17) < (var_1_93)) ? (var_1_17) : (var_1_93))))) ? ((var_1_31 - var_1_46)) : (((((var_1_17) < (var_1_93)) ? (var_1_17) : (var_1_93)))))))) : 1))) && ((! var_1_101) ? ((var_1_98 == var_1_96) ? ((last_1_var_1_37 == (var_1_14 + var_1_100)) ? ((((var_1_38 + var_1_39) - ((((1) > (2)) ? (1) : (2)))) <= ((var_1_11 & var_1_98) / ((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34))))) ? (var_1_37 == ((float) (var_1_13 + (var_1_14 - var_1_40)))) : 1) : (var_1_37 == ((float) (9.999999999999995E14f - (((((var_1_14 + var_1_13)) > (var_1_15)) ? ((var_1_14 + var_1_13)) : (var_1_15))))))) : 1) : 1)) && ((var_1_108 || (var_1_50 && var_1_66)) ? ((var_1_66 && var_1_108) ? (var_1_41 == ((unsigned long int) (((((var_1_31 - var_1_17)) < ((((((var_1_43 - var_1_39)) < (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86))))) ? ((var_1_43 - var_1_39)) : (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86)))))))) ? ((var_1_31 - var_1_17)) : ((((((var_1_43 - var_1_39)) < (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86))))) ? ((var_1_43 - var_1_39)) : (((((var_1_30) < (var_1_86)) ? (var_1_30) : (var_1_86))))))))))) : (((! var_1_50) && ((63.625f / var_1_19) <= (var_1_100 / var_1_44))) ? (var_1_41 == ((unsigned long int) ((((8u) > (50u)) ? (8u) : (50u))))) : ((var_1_38 >= ((var_1_39 ^ 128) / var_1_17)) ? (var_1_41 == ((unsigned long int) ((((((((var_1_31) > (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))) ? (var_1_31) : (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))))) > (var_1_1)) ? (((((var_1_31) > (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))) ? (var_1_31) : (((((var_1_54) < (var_1_107)) ? (var_1_54) : (var_1_107))))))) : (var_1_1))))) : 1))) : (var_1_41 == ((unsigned long int) (((((var_1_1) < (var_1_30)) ? (var_1_1) : (var_1_30))) + var_1_17))))) && (var_1_50 ? (var_1_46 == ((unsigned short int) (((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48))) - 64))) : (var_1_46 == ((unsigned short int) var_1_105)))) && (((4 >> var_1_30) >= var_1_30) ? (((- var_1_30) > var_1_38) ? (var_1_49 == ((float) (((((var_1_40) < ((var_1_14 + var_1_13))) ? (var_1_40) : ((var_1_14 + var_1_13)))) - var_1_15))) : (var_1_49 == ((float) 4.375f))) : 1)) && ((var_1_107 <= ((var_1_51 - var_1_52) - var_1_39)) ? (var_1_50 == ((unsigned char) (var_1_97 && var_1_53))) : 1)) && ((var_1_108 && (var_1_65 < var_1_39)) ? (var_1_54 == ((unsigned short int) (var_1_47 - (28744 - var_1_38)))) : 1)) && ((var_1_44 >= 4.625f) ? (var_1_55 == ((unsigned char) var_1_56)) : (var_1_55 == ((unsigned char) (! (var_1_56 && var_1_57)))))) && ((((((var_1_102) > ((var_1_15 - var_1_19))) ? (var_1_102) : ((var_1_15 - var_1_19)))) > var_1_12) ? (var_1_58 == ((signed short int) (var_1_17 - ((((((((var_1_51) < (var_1_86)) ? (var_1_51) : (var_1_86)))) > ((21375 - var_1_98))) ? (((((var_1_51) < (var_1_86)) ? (var_1_51) : (var_1_86)))) : ((21375 - var_1_98))))))) : ((var_1_48 < var_1_9) ? (var_1_58 == ((signed short int) ((var_1_52 - var_1_89) + (var_1_51 + (var_1_38 + var_1_65))))) : (var_1_58 == ((signed short int) ((((var_1_65) < 0 ) ? -(var_1_65) : (var_1_65)))))))) && ((var_1_107 != var_1_93) ? (var_1_61 == ((float) (((((((var_1_14) < ((var_1_13 + 128.125f))) ? (var_1_14) : ((var_1_13 + 128.125f)))) < 0 ) ? -((((var_1_14) < ((var_1_13 + 128.125f))) ? (var_1_14) : ((var_1_13 + 128.125f)))) : ((((var_1_14) < ((var_1_13 + 128.125f))) ? (var_1_14) : ((var_1_13 + 128.125f)))))))) : (var_1_61 == ((float) (var_1_15 - 0.6f))))) && ((last_1_var_1_37 >= var_1_40) ? ((last_1_var_1_100 <= 49.06f) ? (var_1_62 == ((unsigned char) (var_1_53 || (! var_1_63)))) : 1) : 1)) && ((var_1_105 <= ((0 ^ var_1_82) & var_1_46)) ? ((var_1_103 <= var_1_93) ? ((var_1_86 != last_1_var_1_64) ? ((var_1_101 || var_1_56) ? (var_1_64 == ((unsigned long int) (var_1_43 - ((((last_1_var_1_64) < (var_1_105)) ? (last_1_var_1_64) : (var_1_105)))))) : 1) : (var_1_64 == ((unsigned long int) ((((last_1_var_1_64) < (var_1_31)) ? (last_1_var_1_64) : (var_1_31)))))) : (var_1_64 == ((unsigned long int) 4u))) : 1)) && ((var_1_63 && (var_1_40 >= var_1_95)) ? (var_1_65 == ((signed long int) (((((50 + (var_1_99 + -5))) < (var_1_9)) ? ((50 + (var_1_99 + -5))) : (var_1_9))))) : (var_1_65 == ((signed long int) var_1_38)))) && (var_1_63 ? (((var_1_93 | var_1_39) >= var_1_46) ? (var_1_66 == ((unsigned char) ((var_1_55 || var_1_56) && (var_1_57 && var_1_67)))) : (var_1_66 == ((unsigned char) (! var_1_53)))) : (var_1_66 == ((unsigned char) (! var_1_56))))) && ((! var_1_56) ? (var_1_62 ? (var_1_68 == ((unsigned char) (! (var_1_67 || var_1_56)))) : (var_1_68 == ((unsigned char) var_1_57))) : (var_1_68 == ((unsigned char) (! 0))))) && (((var_1_33 + var_1_24) != var_1_17) ? (((var_1_20 + var_1_17) >= var_1_96) ? ((var_1_24 >= var_1_17) ? ((((((var_1_14) < (var_1_27)) ? (var_1_14) : (var_1_27))) < ((((var_1_106) < (var_1_28)) ? (var_1_106) : (var_1_28)))) ? (var_1_69 == ((float) ((((var_1_13) > (var_1_40)) ? (var_1_13) : (var_1_40))))) : 1) : (((var_1_90 + (var_1_28 / var_1_19)) >= var_1_15) ? (var_1_69 == ((float) ((((((var_1_40 + var_1_13) - var_1_15)) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (((var_1_40 + var_1_13) - var_1_15)) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))))) : (var_1_69 == ((float) (var_1_40 - var_1_14))))) : (var_1_69 == ((float) ((((16.125f) > (((((var_1_40) > (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18))))) ? (var_1_40) : (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18)))))))) ? (16.125f) : (((((var_1_40) > (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18))))) ? (var_1_40) : (((((var_1_72) > (var_1_18)) ? (var_1_72) : (var_1_18)))))))))))) : (var_1_69 == ((float) var_1_18)))) && ((((((var_1_106) < (10.075)) ? (var_1_106) : (10.075))) > (var_1_72 * var_1_69)) ? (((var_1_38 - var_1_46) == var_1_39) ? (var_1_73 == ((signed char) ((var_1_74 + var_1_75) - (var_1_76 + var_1_77)))) : (var_1_73 == ((signed char) (var_1_78 - ((var_1_79 + var_1_80) + var_1_77))))) : ((var_1_104 < ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) ? (((var_1_74 + var_1_103) > var_1_48) ? (var_1_73 == ((signed char) (var_1_77 + var_1_76))) : (var_1_73 == ((signed char) ((var_1_80 + var_1_74) - (var_1_75 + var_1_77))))) : 1))) && ((var_1_23 == var_1_31) ? (var_1_82 == ((signed char) (var_1_80 + var_1_74))) : (var_1_82 == ((signed char) var_1_52)))) && ((var_1_62 && (var_1_86 >= var_1_93)) ? ((var_1_93 >= var_1_99) ? (var_1_83 == ((signed long int) ((((((((last_1_var_1_83) > (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))) ? (last_1_var_1_83) : (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))))) < (((((var_1_75) > (var_1_9)) ? (var_1_75) : (var_1_9))))) ? (((((last_1_var_1_83) > (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))) ? (last_1_var_1_83) : (((((var_1_39) < (var_1_99)) ? (var_1_39) : (var_1_99))))))) : (((((var_1_75) > (var_1_9)) ? (var_1_75) : (var_1_9)))))))) : 1) : (var_1_83 == ((signed long int) var_1_98)))) && ((! (var_1_63 || last_1_var_1_55)) ? ((((var_1_80 + last_1_var_1_41) << var_1_34) < last_1_var_1_93) ? (var_1_86 == ((unsigned char) (16 + var_1_76))) : 1) : (var_1_86 == ((unsigned char) (((((var_1_87 - var_1_39)) > (((var_1_79 + var_1_80) + 10))) ? ((var_1_87 - var_1_39)) : (((var_1_79 + var_1_80) + 10)))))))) && ((var_1_48 >= (var_1_86 / 5)) ? (var_1_88 == ((double) ((var_1_13 - var_1_14) + var_1_40))) : (((4 - var_1_52) > var_1_47) ? (var_1_88 == ((double) ((5.8963147746434488E18 - var_1_14) - (((((49.7) > (var_1_13)) ? (49.7) : (var_1_13))) + var_1_40)))) : (var_1_88 == ((double) (var_1_19 - var_1_14)))))) && ((var_1_34 > var_1_47) ? (var_1_89 == ((signed short int) (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) - var_1_65))) : (var_1_89 == ((signed short int) ((((var_1_46) > ((var_1_74 + (var_1_20 - var_1_93)))) ? (var_1_46) : ((var_1_74 + (var_1_20 - var_1_93))))))))) && ((((var_1_80 * var_1_64) >= var_1_31) && var_1_62) ? (var_1_90 == ((double) 2.75)) : ((var_1_101 || var_1_67) ? (var_1_90 == ((double) ((0.25 - var_1_13) + var_1_14))) : (var_1_90 == ((double) (((var_1_91 + var_1_92) - var_1_14) + var_1_40)))))) && ((last_1_var_1_62 || last_1_var_1_66) ? ((! last_1_var_1_66) ? ((last_1_var_1_83 >= var_1_75) ? (var_1_93 == ((unsigned char) (((((4 + ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))))) > (var_1_75)) ? ((4 + ((((var_1_74) < 0 ) ? -(var_1_74) : (var_1_74))))) : (var_1_75))))) : (var_1_93 == ((unsigned char) var_1_75))) : (var_1_93 == ((unsigned char) var_1_80))) : (var_1_93 == ((unsigned char) var_1_94)))) && (var_1_67 ? (var_1_95 == ((float) var_1_18)) : (var_1_95 == ((float) var_1_19)))) && (var_1_50 ? (var_1_96 == ((unsigned char) var_1_52)) : 1)) && (var_1_67 ? (var_1_97 == ((unsigned char) 0)) : (var_1_97 == ((unsigned char) var_1_56)))) && (var_1_98 == ((signed char) var_1_52))) && (var_1_99 == ((signed short int) var_1_87))) && (var_1_100 == ((float) var_1_92))) && (var_1_101 == ((unsigned char) var_1_57))) && (var_1_62 ? (var_1_102 == ((double) var_1_72)) : 1)) && (var_1_103 == ((unsigned char) var_1_87))) && (var_1_104 == ((float) var_1_14))) && (var_1_53 ? (var_1_105 == ((signed short int) var_1_87)) : (var_1_105 == ((signed short int) -100)))) && (var_1_50 ? (var_1_106 == ((double) var_1_40)) : (var_1_106 == ((double) var_1_15)))) && (var_1_67 ? (var_1_107 == ((unsigned char) var_1_39)) : 1)) && ((var_1_56 || (last_1_var_1_64 != 10)) ? ((last_1_var_1_103 >= last_1_var_1_86) ? (var_1_108 == ((unsigned char) (! var_1_67))) : ((last_1_var_1_21 >= (var_1_77 << var_1_51)) ? (var_1_108 == ((unsigned char) var_1_56)) : (var_1_108 == ((unsigned char) var_1_63)))) : (var_1_108 == ((unsigned char) var_1_67)))
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
