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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 99999999999.75;
float var_1_4 = 31.25;
float var_1_5 = 0.0;
float var_1_6 = 99.5;
float var_1_7 = 500.5;
double var_1_8 = 199.96;
double var_1_9 = 99.8;
unsigned char var_1_10 = 5;
unsigned char var_1_12 = 128;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 5;
unsigned short int var_1_18 = 5;
unsigned short int var_1_20 = 61418;
unsigned char var_1_22 = 8;
unsigned char var_1_24 = 200;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 64;
unsigned long int var_1_29 = 4;
signed short int var_1_31 = -5;
signed short int var_1_32 = 28865;
double var_1_33 = 100.1;
float var_1_34 = 31.5;
float var_1_35 = 199.95;
float var_1_36 = 64.55;
float var_1_37 = 8.25;
float var_1_38 = 15.5;
float var_1_39 = 16.65;
double var_1_40 = 10.4;
unsigned char var_1_41 = 0;
signed char var_1_42 = 1;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 1;
double var_1_45 = 7.5;
double var_1_46 = 1.2;
unsigned char var_1_47 = 100;
float var_1_48 = 63.2;
float var_1_49 = 256.2;
unsigned char var_1_51 = 0;
signed short int var_1_52 = 10;
signed short int var_1_53 = 27581;
signed short int var_1_54 = 27026;
unsigned long int var_1_55 = 4;
unsigned char var_1_57 = 64;
unsigned long int var_1_58 = 2775519025;
unsigned long int var_1_59 = 3758996034;
unsigned long int var_1_60 = 2757593566;
unsigned long int var_1_61 = 32;
unsigned long int var_1_62 = 1852264272;
double var_1_63 = -0.4;
unsigned char var_1_64 = 32;
unsigned char var_1_65 = 16;
unsigned char var_1_66 = 5;
unsigned char var_1_67 = 1;
unsigned short int var_1_68 = 32;
unsigned short int var_1_69 = 30338;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
signed char var_1_75 = 100;
unsigned long int var_1_77 = 5;
unsigned short int var_1_79 = 2;
unsigned short int var_1_80 = 59237;
unsigned short int var_1_81 = 51684;
unsigned short int var_1_82 = 62787;
unsigned char var_1_83 = 5;
float var_1_84 = 3.2;
signed long int var_1_86 = 10;
unsigned short int var_1_87 = 32;
float var_1_88 = 63.5;
unsigned short int var_1_89 = 5;
unsigned short int var_1_90 = 0;
signed short int var_1_91 = 10;
unsigned char var_1_92 = 16;
unsigned short int var_1_93 = 8;
signed short int var_1_94 = 50;
unsigned char var_1_95 = 0;
unsigned short int var_1_96 = 2;
unsigned char var_1_97 = 0;
signed long int var_1_98 = 64;
unsigned short int var_1_99 = 0;
unsigned long int var_1_101 = 10000000;
float last_1_var_1_1 = 99999999999.75;
double last_1_var_1_8 = 199.96;
unsigned short int last_1_var_1_18 = 5;
unsigned char last_1_var_1_22 = 8;
signed short int last_1_var_1_31 = -5;
double last_1_var_1_45 = 7.5;
unsigned char last_1_var_1_47 = 100;
float last_1_var_1_48 = 63.2;
unsigned char last_1_var_1_51 = 0;
unsigned long int last_1_var_1_61 = 32;
unsigned char last_1_var_1_64 = 32;
unsigned char last_1_var_1_67 = 1;
unsigned short int last_1_var_1_68 = 32;
unsigned char last_1_var_1_71 = 0;
signed char last_1_var_1_75 = 100;
unsigned long int last_1_var_1_77 = 5;
unsigned short int last_1_var_1_79 = 2;
signed long int last_1_var_1_86 = 10;
unsigned short int last_1_var_1_87 = 32;
unsigned short int last_1_var_1_90 = 0;
unsigned char last_1_var_1_92 = 16;
unsigned short int last_1_var_1_96 = 2;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_7 = var_1_15;
 if ((last_1_var_1_92 / var_1_42) > stepLocal_7) {
  var_1_41 = (! var_1_43);
 } else {
  if (! var_1_43) {
   var_1_41 = (var_1_43 && var_1_44);
  }
 }
 if (var_1_41) {
  var_1_92 = var_1_24;
 } else {
  var_1_92 = var_1_27;
 }
 unsigned char stepLocal_17 = last_1_var_1_51;
 unsigned char stepLocal_16 = var_1_28;
 if (last_1_var_1_51 || stepLocal_17) {
  var_1_61 = ((((((var_1_26 + var_1_24)) > ((var_1_54 + var_1_28))) ? ((var_1_26 + var_1_24)) : ((var_1_54 + var_1_28)))) + var_1_27);
 } else {
  if (last_1_var_1_51) {
   var_1_61 = last_1_var_1_47;
  } else {
   if ((var_1_46 * var_1_7) <= last_1_var_1_48) {
    if (last_1_var_1_61 >= stepLocal_16) {
     var_1_61 = (((((var_1_59) < ((var_1_62 + 1789059612u))) ? (var_1_59) : ((var_1_62 + 1789059612u)))) - ((((((((last_1_var_1_67) < (var_1_53)) ? (last_1_var_1_67) : (var_1_53)))) > (last_1_var_1_87)) ? (((((last_1_var_1_67) < (var_1_53)) ? (last_1_var_1_67) : (var_1_53)))) : (last_1_var_1_87))));
    } else {
     var_1_61 = var_1_26;
    }
   } else {
    var_1_61 = (last_1_var_1_67 + var_1_12);
   }
  }
 }
 if (var_1_14 <= var_1_61) {
  var_1_45 = ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)));
 } else {
  if (var_1_41 || var_1_44) {
   var_1_45 = var_1_36;
  } else {
   if ((last_1_var_1_45 + (last_1_var_1_45 + var_1_4)) == var_1_36) {
    var_1_45 = (((((var_1_39) < (0.5)) ? (var_1_39) : (0.5))) + (var_1_38 + var_1_46));
   }
  }
 }
 signed long int stepLocal_0 = last_1_var_1_64;
 if ((~ last_1_var_1_22) <= stepLocal_0) {
  var_1_1 = (var_1_4 - (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))));
 }
 if (last_1_var_1_92 <= ((((last_1_var_1_92) > (var_1_12)) ? (last_1_var_1_92) : (var_1_12)))) {
  if (last_1_var_1_92 != 32) {
   var_1_22 = var_1_14;
  } else {
   if (var_1_13 > var_1_15) {
    if (last_1_var_1_71 && last_1_var_1_71) {
     var_1_22 = ((((var_1_15) < ((((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14))) - var_1_16))) ? (var_1_15) : ((((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14))) - var_1_16))));
    } else {
     var_1_22 = (((((var_1_14 - ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) < (var_1_15)) ? ((var_1_14 - ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_15)));
    }
   } else {
    var_1_22 = ((var_1_24 - 32) - var_1_17);
   }
  }
 } else {
  if (var_1_24 >= last_1_var_1_67) {
   if (var_1_5 >= last_1_var_1_1) {
    if (last_1_var_1_1 == var_1_5) {
     var_1_22 = (var_1_13 + var_1_16);
    } else {
     var_1_22 = ((var_1_16 + (var_1_26 + var_1_27)) - (var_1_28 - var_1_17));
    }
   } else {
    if (! last_1_var_1_71) {
     var_1_22 = var_1_16;
    }
   }
  }
 }
 var_1_99 = var_1_22;
 signed long int stepLocal_9 = ~ last_1_var_1_90;
 if (stepLocal_9 > (var_1_16 + last_1_var_1_31)) {
  var_1_51 = (! var_1_44);
 } else {
  var_1_51 = (! var_1_43);
 }
 if (var_1_51) {
  var_1_97 = var_1_15;
 }
 var_1_86 = ((var_1_69 + (var_1_97 - var_1_16)) + ((((var_1_14 + last_1_var_1_86) < 0 ) ? -(var_1_14 + last_1_var_1_86) : (var_1_14 + last_1_var_1_86))));
 if (var_1_51) {
  var_1_94 = var_1_57;
 } else {
  var_1_94 = var_1_26;
 }
 if (var_1_51) {
  var_1_40 = ((((var_1_7) > (var_1_37)) ? (var_1_7) : (var_1_37)));
 } else {
  if (! var_1_51) {
   var_1_40 = (var_1_38 + var_1_39);
  } else {
   var_1_40 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  }
 }
 if (var_1_73) {
  var_1_83 = ((((var_1_16) > (64)) ? (var_1_16) : (64)));
 }
 if (var_1_73) {
  var_1_89 = var_1_57;
 } else {
  var_1_89 = 500;
 }
 if (var_1_41) {
  var_1_90 = var_1_24;
 }
 if (var_1_73) {
  var_1_91 = var_1_16;
 }
 var_1_93 = var_1_27;
 if (var_1_74) {
  var_1_95 = var_1_73;
 } else {
  var_1_95 = var_1_72;
 }
 if (var_1_95) {
  var_1_96 = last_1_var_1_96;
 } else {
  var_1_96 = last_1_var_1_96;
 }
 if (var_1_73) {
  var_1_98 = 4;
 } else {
  var_1_98 = var_1_24;
 }
 signed short int stepLocal_19 = var_1_54;
 unsigned long int stepLocal_18 = var_1_60;
 if (! ((var_1_26 + var_1_12) <= var_1_61)) {
  if (var_1_51) {
   var_1_64 = ((((var_1_65 + var_1_57) < 0 ) ? -(var_1_65 + var_1_57) : (var_1_65 + var_1_57)));
  } else {
   var_1_64 = (var_1_17 + (var_1_27 + var_1_66));
  }
 } else {
  if (stepLocal_19 <= var_1_24) {
   var_1_64 = ((((((var_1_16 + var_1_57) - var_1_26)) > (((((((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) > (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14))))) ? (((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) : (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14)))))))) ? (((var_1_16 + var_1_57) - var_1_26)) : (((((((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) > (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14))))) ? (((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) : (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14)))))))));
  } else {
   if (stepLocal_18 > ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) {
    var_1_64 = ((((var_1_27) > (var_1_66)) ? (var_1_27) : (var_1_66)));
   } else {
    var_1_64 = (128 - var_1_57);
   }
  }
 }
 unsigned short int stepLocal_2 = var_1_99;
 if (stepLocal_2 > ((var_1_27 % var_1_15) + (var_1_89 * 4))) {
  var_1_29 = var_1_97;
 } else {
  var_1_29 = ((((var_1_22) < (var_1_99)) ? (var_1_22) : (var_1_99)));
 }
 if (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) >= var_1_97) {
  var_1_77 = last_1_var_1_77;
 } else {
  var_1_77 = (var_1_69 + var_1_29);
 }
 signed short int stepLocal_1 = var_1_94;
 if (var_1_4 < (last_1_var_1_8 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) {
  if (stepLocal_1 < var_1_91) {
   var_1_8 = (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_7);
  } else {
   var_1_8 = (var_1_7 - var_1_4);
  }
 } else {
  var_1_8 = (((((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) > (var_1_6)) ? ((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) : (var_1_6)));
 }
 unsigned char stepLocal_6 = var_1_51;
 unsigned char stepLocal_5 = var_1_26;
 if (stepLocal_5 < (var_1_14 - var_1_28)) {
  if (var_1_95 || stepLocal_6) {
   var_1_34 = (var_1_6 + var_1_7);
  } else {
   var_1_34 = ((var_1_35 + var_1_36) + (var_1_37 + var_1_38));
  }
 } else {
  var_1_34 = (var_1_39 + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 }
 if (var_1_93 != var_1_86) {
  if ((var_1_4 / ((((var_1_5) > (var_1_88)) ? (var_1_5) : (var_1_88)))) <= var_1_35) {
   var_1_87 = (8 + var_1_13);
  }
 } else {
  if (var_1_39 < ((var_1_6 - var_1_49) / var_1_88)) {
   var_1_87 = (var_1_53 + ((((1) < (var_1_91)) ? (1) : (var_1_91))));
  }
 }
 if (var_1_95) {
  var_1_10 = (var_1_12 - var_1_13);
 } else {
  if ((var_1_6 - var_1_9) == var_1_7) {
   var_1_10 = (((((((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) > (var_1_15)) ? (((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) : (var_1_15))) - ((((var_1_13) > ((var_1_16 - var_1_17))) ? (var_1_13) : ((var_1_16 - var_1_17)))));
  } else {
   var_1_10 = ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)));
  }
 }
 signed long int stepLocal_22 = var_1_97 - var_1_54;
 signed long int stepLocal_21 = var_1_16 - ((((10) > (var_1_66)) ? (10) : (var_1_66)));
 if (stepLocal_21 < (var_1_13 * last_1_var_1_75)) {
  if (var_1_96 > stepLocal_22) {
   var_1_75 = (var_1_27 + var_1_17);
  }
 }
 unsigned long int stepLocal_8 = var_1_15 * (var_1_77 | var_1_16);
 if (stepLocal_8 <= var_1_77) {
  var_1_48 = (var_1_36 + (var_1_7 - ((((var_1_6) < (var_1_49)) ? (var_1_6) : (var_1_49)))));
 } else {
  if (var_1_49 >= (var_1_6 + var_1_7)) {
   if (! var_1_51) {
    var_1_48 = (((((var_1_39) > (var_1_6)) ? (var_1_39) : (var_1_6))) + (((((var_1_7 - var_1_49)) > (var_1_35)) ? ((var_1_7 - var_1_49)) : (var_1_35))));
   }
  } else {
   var_1_48 = (var_1_39 + var_1_7);
  }
 }
 if (var_1_87 > (var_1_96 | var_1_32)) {
  var_1_47 = ((((var_1_28) < (var_1_13)) ? (var_1_28) : (var_1_13)));
 } else {
  var_1_47 = (((((var_1_26 + ((((var_1_16) < (var_1_28)) ? (var_1_16) : (var_1_28))))) > (var_1_13)) ? ((var_1_26 + ((((var_1_16) < (var_1_28)) ? (var_1_16) : (var_1_28))))) : (var_1_13)));
 }
 if ((var_1_28 / var_1_32) != (last_1_var_1_79 & var_1_47)) {
  if (var_1_58 < 10u) {
   if (1000 > var_1_99) {
    var_1_79 = (var_1_28 + var_1_22);
   }
  } else {
   var_1_79 = (((((((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))) - var_1_93)) > (var_1_27)) ? ((((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))) - var_1_93)) : (var_1_27)));
  }
 } else {
  if ((((((var_1_99) < (var_1_47)) ? (var_1_99) : (var_1_47))) / var_1_15) >= (var_1_20 / ((((var_1_62) > (var_1_12)) ? (var_1_62) : (var_1_12))))) {
   if (1 != var_1_57) {
    var_1_79 = ((var_1_82 - var_1_26) - ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) > ((var_1_17 + var_1_15))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : ((var_1_17 + var_1_15)))));
   }
  } else {
   var_1_79 = (var_1_82 - (var_1_32 - var_1_12));
  }
 }
 if ((var_1_91 + var_1_96) > (var_1_24 % -100)) {
  var_1_63 = ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)));
 } else {
  if (var_1_83 > (- (~ var_1_79))) {
   var_1_63 = (((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < 0 ) ? -((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) : ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))));
  }
 }
 if (var_1_7 > (var_1_4 + var_1_9)) {
  if (var_1_7 < (var_1_34 * (- var_1_6))) {
   if ((- last_1_var_1_18) < var_1_13) {
    if (var_1_79 <= (var_1_20 - var_1_15)) {
     var_1_18 = ((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17)));
    } else {
     var_1_18 = (last_1_var_1_18 + var_1_16);
    }
   }
  } else {
   var_1_18 = var_1_64;
  }
 }
 if (((var_1_1 * var_1_36) <= (var_1_1 * 1.75)) && var_1_74) {
  if (var_1_8 >= var_1_5) {
   if (var_1_51) {
    var_1_101 = var_1_14;
   } else {
    var_1_101 = var_1_18;
   }
  }
 }
 if (var_1_83 > var_1_101) {
  var_1_33 = ((((var_1_4 - var_1_5) < 0 ) ? -(var_1_4 - var_1_5) : (var_1_4 - var_1_5)));
 }
 signed long int stepLocal_11 = -4;
 unsigned char stepLocal_10 = var_1_26;
 if ((((((var_1_28 * var_1_20)) < ((var_1_86 / var_1_16))) ? ((var_1_28 * var_1_20)) : ((var_1_86 / var_1_16)))) <= stepLocal_10) {
  if ((var_1_16 >> 1) < stepLocal_11) {
   if (var_1_33 < var_1_38) {
    var_1_52 = ((((var_1_27) > (var_1_24)) ? (var_1_27) : (var_1_24)));
   } else {
    var_1_52 = (var_1_28 + ((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))));
   }
  } else {
   var_1_52 = ((var_1_53 - 4) - (var_1_54 - var_1_13));
  }
 } else {
  if (var_1_38 <= var_1_7) {
   var_1_52 = (var_1_97 - var_1_12);
  } else {
   var_1_52 = (((((((((var_1_94) > (var_1_53)) ? (var_1_94) : (var_1_53))) - var_1_27)) < (var_1_54)) ? ((((((var_1_94) > (var_1_53)) ? (var_1_94) : (var_1_53))) - var_1_27)) : (var_1_54)));
  }
 }
 if (var_1_37 != ((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8)))) {
  if ((- (var_1_38 + var_1_40)) >= (var_1_1 * var_1_34)) {
   if (var_1_45 <= (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))) / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) {
    var_1_71 = (! (var_1_72 || (var_1_73 || var_1_74)));
   } else {
    if ((var_1_6 / ((((24.5) < (200.4)) ? (24.5) : (200.4)))) > (- var_1_40)) {
     var_1_71 = (var_1_41 || (var_1_43 && var_1_44));
    }
   }
  } else {
   if (var_1_33 == ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) {
    var_1_71 = (var_1_74 || var_1_73);
   } else {
    var_1_71 = (var_1_74 || var_1_44);
   }
  }
 }
 signed long int stepLocal_4 = var_1_17 * var_1_52;
 unsigned char stepLocal_3 = var_1_15;
 if ((var_1_12 - (var_1_32 - var_1_13)) == stepLocal_4) {
  if (stepLocal_3 < var_1_26) {
   var_1_31 = (var_1_24 + (((((var_1_12) < (var_1_16)) ? (var_1_12) : (var_1_16))) - var_1_61));
  } else {
   var_1_31 = (((((64) < (var_1_16)) ? (64) : (var_1_16))) - var_1_24);
  }
 } else {
  if (! var_1_41) {
   var_1_31 = ((var_1_15 - var_1_61) + var_1_17);
  }
 }
 unsigned char stepLocal_23 = var_1_71;
 if (stepLocal_23 || ((var_1_54 * var_1_24) == var_1_27)) {
  var_1_84 = var_1_9;
 } else {
  var_1_84 = (var_1_37 + var_1_49);
 }
 unsigned char stepLocal_20 = var_1_65;
 if ((var_1_97 + var_1_83) < stepLocal_20) {
  if (var_1_71) {
   var_1_67 = (((((var_1_14 - var_1_27)) < (((((var_1_28) < (var_1_65)) ? (var_1_28) : (var_1_65))))) ? ((var_1_14 - var_1_27)) : (((((var_1_28) < (var_1_65)) ? (var_1_28) : (var_1_65))))));
  }
 }
 unsigned char stepLocal_15 = var_1_12;
 unsigned short int stepLocal_14 = var_1_20;
 unsigned char stepLocal_13 = var_1_14;
 signed long int stepLocal_12 = var_1_26 * var_1_75;
 if (stepLocal_12 < var_1_20) {
  if (((var_1_28 + var_1_57) - var_1_27) <= stepLocal_15) {
   var_1_55 = (var_1_58 - var_1_14);
  }
 } else {
  if ((var_1_16 * var_1_58) > stepLocal_14) {
   var_1_55 = (var_1_57 + var_1_61);
  } else {
   if (stepLocal_13 >= (~ var_1_67)) {
    var_1_55 = (((((var_1_28) > (var_1_54)) ? (var_1_28) : (var_1_54))) + 100u);
   } else {
    var_1_55 = ((((((var_1_59 - var_1_101)) < (((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60))))) ? ((var_1_59 - var_1_101)) : (((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60)))))) - var_1_54);
   }
  }
 }
 if (var_1_4 != ((var_1_45 / var_1_5) + var_1_33)) {
  if (! (var_1_14 != (var_1_28 << var_1_83))) {
   var_1_68 = (var_1_94 + var_1_26);
  } else {
   if (var_1_84 < var_1_35) {
    var_1_68 = (((((var_1_12) < (var_1_15)) ? (var_1_12) : (var_1_15))) + var_1_32);
   } else {
    var_1_68 = ((((var_1_28) < (var_1_54)) ? (var_1_28) : (var_1_54)));
   }
  }
 } else {
  if (var_1_95) {
   var_1_68 = (((((((((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) < 0 ) ? -((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) : ((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68)))))) < (((var_1_32 + var_1_69) - 10))) ? ((((((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) < 0 ) ? -((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) : ((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68)))))) : (((var_1_32 + var_1_69) - 10))));
  } else {
   var_1_68 = ((((var_1_67) > (var_1_22)) ? (var_1_67) : (var_1_22)));
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 4611686.018427382800e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
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
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 63);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65535);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 190);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 32);
 assume_abort_if_not(var_1_26 <= 64);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 32);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 63);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 16383);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -230584.3009213691390e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -230584.3009213691390e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -230584.3009213691390e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -230584.3009213691390e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -461168.6018427382800e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -128);
 assume_abort_if_not(var_1_42 <= 127);
 assume_abort_if_not(var_1_42 != 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -230584.3009213691390e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691390e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_53 >= 16382);
 assume_abort_if_not(var_1_53 <= 32766);
 var_1_54 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_54 >= 16383);
 assume_abort_if_not(var_1_54 <= 32766);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 64);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 2147483647);
 assume_abort_if_not(var_1_58 <= 4294967294);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 3221225470);
 assume_abort_if_not(var_1_59 <= 4294967294);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 2147483647);
 assume_abort_if_not(var_1_60 <= 4294967294);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 1073741823);
 assume_abort_if_not(var_1_62 <= 2147483647);
 var_1_65 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_65 >= 0);
 assume_abort_if_not(var_1_65 <= 127);
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 63);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 16384);
 assume_abort_if_not(var_1_69 <= 32767);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 0);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 0);
 var_1_74 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_74 >= 0);
 assume_abort_if_not(var_1_74 <= 0);
 var_1_80 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_80 >= 32767);
 assume_abort_if_not(var_1_80 <= 65534);
 var_1_81 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_81 >= 32767);
 assume_abort_if_not(var_1_81 <= 65534);
 var_1_82 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_82 >= 49150);
 assume_abort_if_not(var_1_82 <= 65534);
 var_1_88 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_88 >= -922337.2036854776000e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854776000e+12F && var_1_88 >= 1.0e-20F ));
 assume_abort_if_not(var_1_88 != 0.0F);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_64 = var_1_64;
 last_1_var_1_67 = var_1_67;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_77 = var_1_77;
 last_1_var_1_79 = var_1_79;
 last_1_var_1_86 = var_1_86;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_90 = var_1_90;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_96 = var_1_96;
}
int property() {
 return (((((((((((((((((((((((((((((((((((((((((((~ last_1_var_1_22) <= last_1_var_1_64) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 - ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))))) : 1) && ((var_1_4 < (last_1_var_1_8 + ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) ? ((var_1_94 < var_1_91) ? (var_1_8 == ((double) (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + var_1_7))) : (var_1_8 == ((double) (var_1_7 - var_1_4)))) : (var_1_8 == ((double) (((((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) > (var_1_6)) ? ((var_1_7 - ((((var_1_5) > (var_1_9)) ? (var_1_5) : (var_1_9))))) : (var_1_6))))))) && (var_1_95 ? (var_1_10 == ((unsigned char) (var_1_12 - var_1_13))) : (((var_1_6 - var_1_9) == var_1_7) ? (var_1_10 == ((unsigned char) (((((((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) > (var_1_15)) ? (((((var_1_12) > (var_1_14)) ? (var_1_12) : (var_1_14)))) : (var_1_15))) - ((((var_1_13) > ((var_1_16 - var_1_17))) ? (var_1_13) : ((var_1_16 - var_1_17))))))) : (var_1_10 == ((unsigned char) ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))))))) && ((var_1_7 > (var_1_4 + var_1_9)) ? ((var_1_7 < (var_1_34 * (- var_1_6))) ? (((- last_1_var_1_18) < var_1_13) ? ((var_1_79 <= (var_1_20 - var_1_15)) ? (var_1_18 == ((unsigned short int) ((((var_1_14) > (var_1_17)) ? (var_1_14) : (var_1_17))))) : (var_1_18 == ((unsigned short int) (last_1_var_1_18 + var_1_16)))) : 1) : (var_1_18 == ((unsigned short int) var_1_64))) : 1)) && ((last_1_var_1_92 <= ((((last_1_var_1_92) > (var_1_12)) ? (last_1_var_1_92) : (var_1_12)))) ? ((last_1_var_1_92 != 32) ? (var_1_22 == ((unsigned char) var_1_14)) : ((var_1_13 > var_1_15) ? ((last_1_var_1_71 && last_1_var_1_71) ? (var_1_22 == ((unsigned char) ((((var_1_15) < ((((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14))) - var_1_16))) ? (var_1_15) : ((((((var_1_12) < (var_1_14)) ? (var_1_12) : (var_1_14))) - var_1_16)))))) : (var_1_22 == ((unsigned char) (((((var_1_14 - ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) < (var_1_15)) ? ((var_1_14 - ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_15)))))) : (var_1_22 == ((unsigned char) ((var_1_24 - 32) - var_1_17))))) : ((var_1_24 >= last_1_var_1_67) ? ((var_1_5 >= last_1_var_1_1) ? ((last_1_var_1_1 == var_1_5) ? (var_1_22 == ((unsigned char) (var_1_13 + var_1_16))) : (var_1_22 == ((unsigned char) ((var_1_16 + (var_1_26 + var_1_27)) - (var_1_28 - var_1_17))))) : ((! last_1_var_1_71) ? (var_1_22 == ((unsigned char) var_1_16)) : 1)) : 1))) && ((var_1_99 > ((var_1_27 % var_1_15) + (var_1_89 * 4))) ? (var_1_29 == ((unsigned long int) var_1_97)) : (var_1_29 == ((unsigned long int) ((((var_1_22) < (var_1_99)) ? (var_1_22) : (var_1_99))))))) && (((var_1_12 - (var_1_32 - var_1_13)) == (var_1_17 * var_1_52)) ? ((var_1_15 < var_1_26) ? (var_1_31 == ((signed short int) (var_1_24 + (((((var_1_12) < (var_1_16)) ? (var_1_12) : (var_1_16))) - var_1_61)))) : (var_1_31 == ((signed short int) (((((64) < (var_1_16)) ? (64) : (var_1_16))) - var_1_24)))) : ((! var_1_41) ? (var_1_31 == ((signed short int) ((var_1_15 - var_1_61) + var_1_17))) : 1))) && ((var_1_83 > var_1_101) ? (var_1_33 == ((double) ((((var_1_4 - var_1_5) < 0 ) ? -(var_1_4 - var_1_5) : (var_1_4 - var_1_5))))) : 1)) && ((var_1_26 < (var_1_14 - var_1_28)) ? ((var_1_95 || var_1_51) ? (var_1_34 == ((float) (var_1_6 + var_1_7))) : (var_1_34 == ((float) ((var_1_35 + var_1_36) + (var_1_37 + var_1_38))))) : (var_1_34 == ((float) (var_1_39 + ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))))) && (var_1_51 ? (var_1_40 == ((double) ((((var_1_7) > (var_1_37)) ? (var_1_7) : (var_1_37))))) : ((! var_1_51) ? (var_1_40 == ((double) (var_1_38 + var_1_39))) : (var_1_40 == ((double) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))))) && (((last_1_var_1_92 / var_1_42) > var_1_15) ? (var_1_41 == ((unsigned char) (! var_1_43))) : ((! var_1_43) ? (var_1_41 == ((unsigned char) (var_1_43 && var_1_44))) : 1))) && ((var_1_14 <= var_1_61) ? (var_1_45 == ((double) ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) : ((var_1_41 || var_1_44) ? (var_1_45 == ((double) var_1_36)) : (((last_1_var_1_45 + (last_1_var_1_45 + var_1_4)) == var_1_36) ? (var_1_45 == ((double) (((((var_1_39) < (0.5)) ? (var_1_39) : (0.5))) + (var_1_38 + var_1_46)))) : 1)))) && ((var_1_87 > (var_1_96 | var_1_32)) ? (var_1_47 == ((unsigned char) ((((var_1_28) < (var_1_13)) ? (var_1_28) : (var_1_13))))) : (var_1_47 == ((unsigned char) (((((var_1_26 + ((((var_1_16) < (var_1_28)) ? (var_1_16) : (var_1_28))))) > (var_1_13)) ? ((var_1_26 + ((((var_1_16) < (var_1_28)) ? (var_1_16) : (var_1_28))))) : (var_1_13))))))) && (((var_1_15 * (var_1_77 | var_1_16)) <= var_1_77) ? (var_1_48 == ((float) (var_1_36 + (var_1_7 - ((((var_1_6) < (var_1_49)) ? (var_1_6) : (var_1_49))))))) : ((var_1_49 >= (var_1_6 + var_1_7)) ? ((! var_1_51) ? (var_1_48 == ((float) (((((var_1_39) > (var_1_6)) ? (var_1_39) : (var_1_6))) + (((((var_1_7 - var_1_49)) > (var_1_35)) ? ((var_1_7 - var_1_49)) : (var_1_35)))))) : 1) : (var_1_48 == ((float) (var_1_39 + var_1_7)))))) && (((~ last_1_var_1_90) > (var_1_16 + last_1_var_1_31)) ? (var_1_51 == ((unsigned char) (! var_1_44))) : (var_1_51 == ((unsigned char) (! var_1_43))))) && (((((((var_1_28 * var_1_20)) < ((var_1_86 / var_1_16))) ? ((var_1_28 * var_1_20)) : ((var_1_86 / var_1_16)))) <= var_1_26) ? (((var_1_16 >> 1) < -4) ? ((var_1_33 < var_1_38) ? (var_1_52 == ((signed short int) ((((var_1_27) > (var_1_24)) ? (var_1_27) : (var_1_24))))) : (var_1_52 == ((signed short int) (var_1_28 + ((((var_1_97) < 0 ) ? -(var_1_97) : (var_1_97))))))) : (var_1_52 == ((signed short int) ((var_1_53 - 4) - (var_1_54 - var_1_13))))) : ((var_1_38 <= var_1_7) ? (var_1_52 == ((signed short int) (var_1_97 - var_1_12))) : (var_1_52 == ((signed short int) (((((((((var_1_94) > (var_1_53)) ? (var_1_94) : (var_1_53))) - var_1_27)) < (var_1_54)) ? ((((((var_1_94) > (var_1_53)) ? (var_1_94) : (var_1_53))) - var_1_27)) : (var_1_54)))))))) && (((var_1_26 * var_1_75) < var_1_20) ? ((((var_1_28 + var_1_57) - var_1_27) <= var_1_12) ? (var_1_55 == ((unsigned long int) (var_1_58 - var_1_14))) : 1) : (((var_1_16 * var_1_58) > var_1_20) ? (var_1_55 == ((unsigned long int) (var_1_57 + var_1_61))) : ((var_1_14 >= (~ var_1_67)) ? (var_1_55 == ((unsigned long int) (((((var_1_28) > (var_1_54)) ? (var_1_28) : (var_1_54))) + 100u))) : (var_1_55 == ((unsigned long int) ((((((var_1_59 - var_1_101)) < (((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60))))) ? ((var_1_59 - var_1_101)) : (((((var_1_58) < (var_1_60)) ? (var_1_58) : (var_1_60)))))) - var_1_54))))))) && ((last_1_var_1_51 || last_1_var_1_51) ? (var_1_61 == ((unsigned long int) ((((((var_1_26 + var_1_24)) > ((var_1_54 + var_1_28))) ? ((var_1_26 + var_1_24)) : ((var_1_54 + var_1_28)))) + var_1_27))) : (last_1_var_1_51 ? (var_1_61 == ((unsigned long int) last_1_var_1_47)) : (((var_1_46 * var_1_7) <= last_1_var_1_48) ? ((last_1_var_1_61 >= var_1_28) ? (var_1_61 == ((unsigned long int) (((((var_1_59) < ((var_1_62 + 1789059612u))) ? (var_1_59) : ((var_1_62 + 1789059612u)))) - ((((((((last_1_var_1_67) < (var_1_53)) ? (last_1_var_1_67) : (var_1_53)))) > (last_1_var_1_87)) ? (((((last_1_var_1_67) < (var_1_53)) ? (last_1_var_1_67) : (var_1_53)))) : (last_1_var_1_87)))))) : (var_1_61 == ((unsigned long int) var_1_26))) : (var_1_61 == ((unsigned long int) (last_1_var_1_67 + var_1_12))))))) && (((var_1_91 + var_1_96) > (var_1_24 % -100)) ? (var_1_63 == ((double) ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))) : ((var_1_83 > (- (~ var_1_79))) ? (var_1_63 == ((double) (((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) < 0 ) ? -((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) : ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))))))) : 1))) && ((! ((var_1_26 + var_1_12) <= var_1_61)) ? (var_1_51 ? (var_1_64 == ((unsigned char) ((((var_1_65 + var_1_57) < 0 ) ? -(var_1_65 + var_1_57) : (var_1_65 + var_1_57))))) : (var_1_64 == ((unsigned char) (var_1_17 + (var_1_27 + var_1_66))))) : ((var_1_54 <= var_1_24) ? (var_1_64 == ((unsigned char) ((((((var_1_16 + var_1_57) - var_1_26)) > (((((((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) > (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14))))) ? (((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) : (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14)))))))) ? (((var_1_16 + var_1_57) - var_1_26)) : (((((((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) > (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14))))) ? (((((var_1_12) < (var_1_24)) ? (var_1_12) : (var_1_24)))) : (((((var_1_27) < (var_1_14)) ? (var_1_27) : (var_1_14))))))))))) : ((var_1_60 > ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) ? (var_1_64 == ((unsigned char) ((((var_1_27) > (var_1_66)) ? (var_1_27) : (var_1_66))))) : (var_1_64 == ((unsigned char) (128 - var_1_57))))))) && (((var_1_97 + var_1_83) < var_1_65) ? (var_1_71 ? (var_1_67 == ((unsigned char) (((((var_1_14 - var_1_27)) < (((((var_1_28) < (var_1_65)) ? (var_1_28) : (var_1_65))))) ? ((var_1_14 - var_1_27)) : (((((var_1_28) < (var_1_65)) ? (var_1_28) : (var_1_65)))))))) : 1) : 1)) && ((var_1_4 != ((var_1_45 / var_1_5) + var_1_33)) ? ((! (var_1_14 != (var_1_28 << var_1_83))) ? (var_1_68 == ((unsigned short int) (var_1_94 + var_1_26))) : ((var_1_84 < var_1_35) ? (var_1_68 == ((unsigned short int) (((((var_1_12) < (var_1_15)) ? (var_1_12) : (var_1_15))) + var_1_32))) : (var_1_68 == ((unsigned short int) ((((var_1_28) < (var_1_54)) ? (var_1_28) : (var_1_54))))))) : (var_1_95 ? (var_1_68 == ((unsigned short int) (((((((((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) < 0 ) ? -((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) : ((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68)))))) < (((var_1_32 + var_1_69) - 10))) ? ((((((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) < 0 ) ? -((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68))) : ((((var_1_17) < (last_1_var_1_68)) ? (var_1_17) : (last_1_var_1_68)))))) : (((var_1_32 + var_1_69) - 10)))))) : (var_1_68 == ((unsigned short int) ((((var_1_67) > (var_1_22)) ? (var_1_67) : (var_1_22)))))))) && ((var_1_37 != ((((var_1_38) > (var_1_8)) ? (var_1_38) : (var_1_8)))) ? (((- (var_1_38 + var_1_40)) >= (var_1_1 * var_1_34)) ? ((var_1_45 <= (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))) / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? (var_1_71 == ((unsigned char) (! (var_1_72 || (var_1_73 || var_1_74))))) : (((var_1_6 / ((((24.5) < (200.4)) ? (24.5) : (200.4)))) > (- var_1_40)) ? (var_1_71 == ((unsigned char) (var_1_41 || (var_1_43 && var_1_44)))) : 1)) : ((var_1_33 == ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))) ? (var_1_71 == ((unsigned char) (var_1_74 || var_1_73))) : (var_1_71 == ((unsigned char) (var_1_74 || var_1_44))))) : 1)) && (((var_1_16 - ((((10) > (var_1_66)) ? (10) : (var_1_66)))) < (var_1_13 * last_1_var_1_75)) ? ((var_1_96 > (var_1_97 - var_1_54)) ? (var_1_75 == ((signed char) (var_1_27 + var_1_17))) : 1) : 1)) && ((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) >= var_1_97) ? (var_1_77 == ((unsigned long int) last_1_var_1_77)) : (var_1_77 == ((unsigned long int) (var_1_69 + var_1_29))))) && (((var_1_28 / var_1_32) != (last_1_var_1_79 & var_1_47)) ? ((var_1_58 < 10u) ? ((1000 > var_1_99) ? (var_1_79 == ((unsigned short int) (var_1_28 + var_1_22))) : 1) : (var_1_79 == ((unsigned short int) (((((((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))) - var_1_93)) > (var_1_27)) ? ((((((var_1_80) > (var_1_81)) ? (var_1_80) : (var_1_81))) - var_1_93)) : (var_1_27)))))) : (((((((var_1_99) < (var_1_47)) ? (var_1_99) : (var_1_47))) / var_1_15) >= (var_1_20 / ((((var_1_62) > (var_1_12)) ? (var_1_62) : (var_1_12))))) ? ((1 != var_1_57) ? (var_1_79 == ((unsigned short int) ((var_1_82 - var_1_26) - ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) > ((var_1_17 + var_1_15))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : ((var_1_17 + var_1_15))))))) : 1) : (var_1_79 == ((unsigned short int) (var_1_82 - (var_1_32 - var_1_12))))))) && (var_1_73 ? (var_1_83 == ((unsigned char) ((((var_1_16) > (64)) ? (var_1_16) : (64))))) : 1)) && ((var_1_71 || ((var_1_54 * var_1_24) == var_1_27)) ? (var_1_84 == ((float) var_1_9)) : (var_1_84 == ((float) (var_1_37 + var_1_49))))) && (var_1_86 == ((signed long int) ((var_1_69 + (var_1_97 - var_1_16)) + ((((var_1_14 + last_1_var_1_86) < 0 ) ? -(var_1_14 + last_1_var_1_86) : (var_1_14 + last_1_var_1_86))))))) && ((var_1_93 != var_1_86) ? (((var_1_4 / ((((var_1_5) > (var_1_88)) ? (var_1_5) : (var_1_88)))) <= var_1_35) ? (var_1_87 == ((unsigned short int) (8 + var_1_13))) : 1) : ((var_1_39 < ((var_1_6 - var_1_49) / var_1_88)) ? (var_1_87 == ((unsigned short int) (var_1_53 + ((((1) < (var_1_91)) ? (1) : (var_1_91)))))) : 1))) && (var_1_73 ? (var_1_89 == ((unsigned short int) var_1_57)) : (var_1_89 == ((unsigned short int) 500)))) && (var_1_41 ? (var_1_90 == ((unsigned short int) var_1_24)) : 1)) && (var_1_73 ? (var_1_91 == ((signed short int) var_1_16)) : 1)) && (var_1_41 ? (var_1_92 == ((unsigned char) var_1_24)) : (var_1_92 == ((unsigned char) var_1_27)))) && (var_1_93 == ((unsigned short int) var_1_27))) && (var_1_51 ? (var_1_94 == ((signed short int) var_1_57)) : (var_1_94 == ((signed short int) var_1_26)))) && (var_1_74 ? (var_1_95 == ((unsigned char) var_1_73)) : (var_1_95 == ((unsigned char) var_1_72)))) && (var_1_95 ? (var_1_96 == ((unsigned short int) last_1_var_1_96)) : (var_1_96 == ((unsigned short int) last_1_var_1_96)))) && (var_1_51 ? (var_1_97 == ((unsigned char) var_1_15)) : 1)) && (var_1_73 ? (var_1_98 == ((signed long int) 4)) : (var_1_98 == ((signed long int) var_1_24)))) && (var_1_99 == ((unsigned short int) var_1_22))) && ((((var_1_1 * var_1_36) <= (var_1_1 * 1.75)) && var_1_74) ? ((var_1_8 >= var_1_5) ? (var_1_51 ? (var_1_101 == ((unsigned long int) var_1_14)) : (var_1_101 == ((unsigned long int) var_1_18))) : 1) : 1)
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
