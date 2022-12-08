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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 2;
unsigned short int var_1_3 = 47136;
unsigned long int var_1_6 = 1660677957;
float var_1_9 = 31.6;
float var_1_10 = 2.75;
float var_1_11 = 3.5;
float var_1_12 = 3.2;
float var_1_13 = 4.85;
float var_1_14 = 3.5;
signed char var_1_15 = 4;
signed char var_1_16 = 64;
signed char var_1_17 = 64;
signed char var_1_18 = 0;
signed char var_1_19 = 10;
signed char var_1_20 = 50;
signed short int var_1_21 = 5;
unsigned short int var_1_23 = 1;
unsigned short int var_1_24 = 43575;
unsigned short int var_1_25 = 22964;
unsigned short int var_1_26 = 10000;
signed long int var_1_27 = 32;
unsigned short int var_1_29 = 128;
unsigned short int var_1_30 = 56230;
float var_1_31 = 31.2;
float var_1_32 = 3.25;
float var_1_33 = -0.875;
float var_1_34 = 256.5;
float var_1_35 = 0.0;
float var_1_36 = 0.0;
float var_1_37 = 25.25;
unsigned char var_1_38 = 32;
unsigned char var_1_39 = 128;
signed char var_1_40 = -4;
signed char var_1_41 = 2;
signed short int var_1_42 = 2;
signed short int var_1_43 = -4;
unsigned short int var_1_44 = 4;
unsigned short int var_1_45 = 19049;
signed short int var_1_47 = 4;
signed char var_1_48 = -32;
signed char var_1_49 = 32;
signed char var_1_50 = 1;
signed char var_1_51 = 1;
unsigned long int var_1_52 = 100;
unsigned long int var_1_53 = 3595694395;
unsigned long int var_1_54 = 4;
signed short int var_1_55 = 2;
signed short int var_1_56 = 1;
signed short int var_1_57 = 2;
float var_1_58 = 16.8;
float var_1_59 = 0.0;
unsigned char var_1_60 = 1;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
signed char var_1_64 = 25;
unsigned short int var_1_66 = 1;
double var_1_67 = 50.2;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 1;
float var_1_73 = 64.6;
float var_1_74 = 0.0;
unsigned short int var_1_75 = 100;
unsigned short int var_1_76 = 29448;
signed char var_1_77 = -64;
signed char var_1_78 = 10;
double var_1_79 = 1.4;
unsigned short int var_1_80 = 128;
signed char var_1_81 = 4;
unsigned short int var_1_82 = 8;
unsigned char var_1_85 = 1;
signed short int var_1_86 = 4;
float var_1_87 = 99.25;
double var_1_88 = 16.25;
double var_1_89 = 255.8;
unsigned char var_1_91 = 0;
signed char var_1_92 = -64;
unsigned short int var_1_93 = 8;
double var_1_94 = 256.75;
unsigned char var_1_95 = 1;
unsigned long int var_1_96 = 16;
unsigned long int var_1_97 = 16;
unsigned long int var_1_98 = 10000;
signed long int var_1_99 = 4;
signed long int last_1_var_1_27 = 32;
float last_1_var_1_31 = 31.2;
signed char last_1_var_1_48 = -32;
unsigned long int last_1_var_1_52 = 100;
unsigned char last_1_var_1_60 = 1;
unsigned char last_1_var_1_69 = 0;
float last_1_var_1_87 = 99.25;
unsigned short int last_1_var_1_93 = 8;
unsigned char last_1_var_1_95 = 1;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_95) {
  var_1_85 = (! (var_1_70 && (var_1_71 && var_1_72)));
 }
 if (var_1_85) {
  var_1_95 = var_1_70;
 } else {
  var_1_95 = var_1_63;
 }
 unsigned char stepLocal_14 = last_1_var_1_69;
 signed long int stepLocal_13 = last_1_var_1_48;
 if ((var_1_13 != var_1_59) || stepLocal_14) {
  if (last_1_var_1_69) {
   if (last_1_var_1_69) {
    var_1_60 = (last_1_var_1_60 && var_1_62);
   } else {
    if (var_1_19 <= stepLocal_13) {
     var_1_60 = (var_1_62 || var_1_63);
    } else {
     var_1_60 = (last_1_var_1_60 && (var_1_62 && var_1_63));
    }
   }
  }
 }
 if (last_1_var_1_87 == (var_1_34 / 999999.2f)) {
  var_1_54 = ((var_1_25 + 64u) + var_1_6);
 }
 signed long int stepLocal_23 = last_1_var_1_93;
 signed long int stepLocal_22 = -4;
 signed long int stepLocal_21 = var_1_56 / var_1_39;
 unsigned char stepLocal_20 = var_1_57 > (last_1_var_1_93 + last_1_var_1_27);
 if (stepLocal_23 == last_1_var_1_93) {
  var_1_69 = (! var_1_70);
 } else {
  if (last_1_var_1_31 > var_1_35) {
   if (last_1_var_1_27 >= stepLocal_22) {
    var_1_69 = (((last_1_var_1_93 + var_1_53) != var_1_3) && var_1_62);
   } else {
    if (var_1_25 > stepLocal_21) {
     if ((var_1_19 == var_1_25) && stepLocal_20) {
      var_1_69 = (var_1_70 && var_1_71);
     } else {
      var_1_69 = (! var_1_71);
     }
    } else {
     var_1_69 = (var_1_71 && (var_1_70 || var_1_72));
    }
   }
  }
 }
 if (last_1_var_1_60) {
  var_1_91 = var_1_71;
 }
 if (var_1_91) {
  var_1_96 = var_1_26;
 } else {
  var_1_96 = var_1_39;
 }
 if (var_1_19 > (-100 * (var_1_20 / var_1_17))) {
  if (last_1_var_1_69 || last_1_var_1_95) {
   var_1_38 = ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)));
  } else {
   var_1_38 = (var_1_39 - var_1_17);
  }
 }
 if (var_1_10 != (- var_1_12)) {
  var_1_15 = (((((var_1_16) > ((var_1_17 - var_1_18))) ? (var_1_16) : ((var_1_17 - var_1_18)))) - var_1_19);
 } else {
  var_1_15 = (var_1_18 + var_1_20);
 }
 if (var_1_10 >= var_1_13) {
  if (16.6 > var_1_14) {
   var_1_23 = (var_1_24 - (var_1_25 - (var_1_26 - var_1_18)));
  }
 }
 var_1_29 = (((((var_1_24) < (var_1_30)) ? (var_1_24) : (var_1_30))) - (var_1_25 - var_1_18));
 var_1_40 = (((((var_1_18 + var_1_41) - var_1_17) < 0 ) ? -((var_1_18 + var_1_41) - var_1_17) : ((var_1_18 + var_1_41) - var_1_17)));
 var_1_79 = (((var_1_36 - var_1_13) + (64.25 + var_1_37)) - (var_1_14 + var_1_74));
 var_1_80 = (var_1_24 - var_1_39);
 var_1_86 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
 var_1_92 = var_1_57;
 var_1_93 = var_1_57;
 var_1_94 = var_1_36;
 if ((60969 - var_1_19) < var_1_3) {
  if (var_1_91) {
   var_1_21 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
  } else {
   var_1_21 = var_1_19;
  }
 } else {
  if (((var_1_93 / var_1_17) << var_1_6) < var_1_38) {
   var_1_21 = var_1_20;
  } else {
   if (var_1_60) {
    var_1_21 = (var_1_16 - (var_1_17 + ((((var_1_18) < (10)) ? (var_1_18) : (10)))));
   }
  }
 }
 if (((var_1_49 >= var_1_80) || var_1_71) && var_1_91) {
  if (var_1_91) {
   if ((var_1_18 & (var_1_54 & var_1_80)) <= var_1_26) {
    var_1_99 = var_1_57;
   }
  }
 }
 unsigned char stepLocal_16 = var_1_63;
 if (var_1_95) {
  if (var_1_69 || stepLocal_16) {
   var_1_66 = (var_1_26 + (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) - var_1_19));
  } else {
   var_1_66 = (((((((((var_1_25 + var_1_17)) > (var_1_38)) ? ((var_1_25 + var_1_17)) : (var_1_38)))) < (((var_1_49 + var_1_39) + var_1_45))) ? ((((((var_1_25 + var_1_17)) > (var_1_38)) ? ((var_1_25 + var_1_17)) : (var_1_38)))) : (((var_1_49 + var_1_39) + var_1_45))));
  }
 } else {
  var_1_66 = (var_1_30 - ((((var_1_45 - var_1_41) < 0 ) ? -(var_1_45 - var_1_41) : (var_1_45 - var_1_41))));
 }
 if (var_1_69) {
  var_1_98 = var_1_86;
 } else {
  var_1_98 = var_1_19;
 }
 var_1_43 = var_1_93;
 unsigned char stepLocal_9 = var_1_33 >= var_1_79;
 if (var_1_85 || stepLocal_9) {
  var_1_47 = (var_1_19 - (((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) < 0 ) ? -((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) : ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))));
 } else {
  var_1_47 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 }
 signed char stepLocal_10 = var_1_20;
 if ((var_1_92 / 50) == stepLocal_10) {
  var_1_51 = var_1_50;
 }
 unsigned long int stepLocal_12 = var_1_53 - var_1_23;
 if ((var_1_80 % var_1_17) < stepLocal_12) {
  var_1_58 = ((((((var_1_35) > (var_1_59)) ? (var_1_35) : (var_1_59))) - (var_1_13 + var_1_37)) - var_1_14);
 } else {
  var_1_58 = (var_1_14 + var_1_36);
 }
 unsigned char stepLocal_15 = var_1_98 > var_1_98;
 if (stepLocal_15 && (var_1_37 != 128.5f)) {
  var_1_64 = (var_1_19 - var_1_18);
 }
 unsigned short int stepLocal_24 = var_1_93;
 if (stepLocal_24 >= var_1_57) {
  var_1_73 = ((((var_1_14) > (((var_1_13 - var_1_36) + var_1_37))) ? (var_1_14) : (((var_1_13 - var_1_36) + var_1_37))));
 } else {
  var_1_73 = (((var_1_36 + var_1_74) - var_1_37) - var_1_14);
 }
 if ((var_1_10 * var_1_94) < var_1_34) {
  var_1_81 = (var_1_17 - var_1_50);
 } else {
  var_1_81 = ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)));
 }
 if (var_1_60) {
  var_1_97 = var_1_30;
 } else {
  var_1_97 = var_1_99;
 }
 if (var_1_25 < var_1_98) {
  if ((- var_1_47) <= var_1_29) {
   if (var_1_96 >= var_1_97) {
    var_1_88 = ((((var_1_13) > (var_1_32)) ? (var_1_13) : (var_1_32)));
   }
  } else {
   var_1_88 = var_1_36;
  }
 } else {
  var_1_88 = (var_1_37 + var_1_36);
 }
 signed long int stepLocal_27 = ((((var_1_39) > (var_1_43)) ? (var_1_39) : (var_1_43))) & var_1_21;
 if (stepLocal_27 < (var_1_43 * var_1_3)) {
  var_1_87 = ((((var_1_11) < (var_1_32)) ? (var_1_11) : (var_1_32)));
 }
 if (var_1_93 > var_1_23) {
  if (16u > ((((var_1_80) > (var_1_38)) ? (var_1_80) : (var_1_38)))) {
   var_1_82 = var_1_38;
  } else {
   var_1_82 = (var_1_41 + var_1_39);
  }
 } else {
  var_1_82 = ((((((((var_1_19) > (var_1_66)) ? (var_1_19) : (var_1_66)))) > ((var_1_24 - var_1_26))) ? (((((var_1_19) > (var_1_66)) ? (var_1_19) : (var_1_66)))) : ((var_1_24 - var_1_26))));
 }
 signed char stepLocal_3 = var_1_20;
 unsigned char stepLocal_2 = var_1_38;
 unsigned short int stepLocal_1 = var_1_23;
 unsigned char stepLocal_0 = ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) <= var_1_16;
 if (var_1_60) {
  if (stepLocal_2 <= var_1_23) {
   var_1_27 = (var_1_24 + var_1_97);
  } else {
   if (var_1_79 > ((((var_1_79 + var_1_13) < 0 ) ? -(var_1_79 + var_1_13) : (var_1_79 + var_1_13)))) {
    var_1_27 = var_1_97;
   } else {
    if (stepLocal_1 <= (- ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) {
     if (stepLocal_0 && (var_1_3 <= var_1_82)) {
      if (stepLocal_3 > var_1_6) {
       var_1_27 = (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - ((((var_1_82) < (var_1_38)) ? (var_1_82) : (var_1_38))));
      } else {
       var_1_27 = (var_1_16 - 16);
      }
     } else {
      var_1_27 = ((((-64) < (var_1_24)) ? (-64) : (var_1_24)));
     }
    } else {
     var_1_27 = (var_1_26 + ((((((((var_1_24) > (var_1_18)) ? (var_1_24) : (var_1_18)))) > (var_1_16)) ? (((((var_1_24) > (var_1_18)) ? (var_1_24) : (var_1_18)))) : (var_1_16))));
    }
   }
  }
 }
 if (var_1_15 <= (var_1_6 | ((((10) < (var_1_82)) ? (10) : (var_1_82))))) {
  var_1_9 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
 } else {
  if (var_1_85) {
   if (var_1_6 < ((var_1_38 << var_1_98) + var_1_38)) {
    var_1_9 = ((((2.75f) > (var_1_10)) ? (2.75f) : (var_1_10)));
   } else {
    var_1_9 = var_1_11;
   }
  } else {
   var_1_9 = (var_1_12 - ((24.625f + var_1_13) + var_1_14));
  }
 }
 signed long int stepLocal_11 = (((var_1_15) < (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_15) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))));
 if (stepLocal_11 < ((var_1_27 * var_1_96) << (var_1_56 + var_1_57))) {
  var_1_55 = var_1_16;
 }
 if ((((((var_1_12) > (var_1_59)) ? (var_1_12) : (var_1_59))) - var_1_74) >= var_1_94) {
  if ((((((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) < 0 ) ? -((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) : ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) <= ((((var_1_3) < (var_1_97)) ? (var_1_3) : (var_1_97)))) {
   if (var_1_56 < ((((var_1_45) < ((2 * var_1_6))) ? (var_1_45) : ((2 * var_1_6))))) {
    if (((((var_1_38) < (var_1_3)) ? (var_1_38) : (var_1_3))) <= (var_1_29 | var_1_23)) {
     if (var_1_95 && (var_1_98 > var_1_20)) {
      if (var_1_50 <= (var_1_97 / var_1_17)) {
       var_1_89 = ((((((((var_1_74) > ((var_1_37 - 0.8))) ? (var_1_74) : ((var_1_37 - 0.8))))) < (var_1_13)) ? (((((var_1_74) > ((var_1_37 - 0.8))) ? (var_1_74) : ((var_1_37 - 0.8))))) : (var_1_13)));
      } else {
       var_1_89 = var_1_13;
      }
     }
    } else {
     var_1_89 = var_1_37;
    }
   } else {
    var_1_89 = var_1_59;
   }
  }
 } else {
  var_1_89 = var_1_10;
 }
 unsigned char stepLocal_8 = var_1_13 > (var_1_58 * var_1_36);
 unsigned short int stepLocal_7 = var_1_24;
 unsigned short int stepLocal_6 = var_1_26;
 unsigned short int stepLocal_5 = var_1_82;
 if (stepLocal_6 == (var_1_29 % var_1_3)) {
  if (var_1_91) {
   if (stepLocal_5 == var_1_17) {
    var_1_44 = ((((((var_1_25) > (var_1_45)) ? (var_1_25) : (var_1_45))) - (var_1_18 + var_1_39)) + var_1_17);
   }
  }
 } else {
  if (stepLocal_8 && (var_1_45 < (var_1_54 + var_1_41))) {
   if (var_1_37 <= var_1_10) {
    var_1_44 = (var_1_24 - 256);
   }
  } else {
   if (stepLocal_7 >= var_1_29) {
    var_1_44 = (var_1_30 - var_1_19);
   } else {
    var_1_44 = ((25320 - ((((var_1_18) > (var_1_41)) ? (var_1_18) : (var_1_41)))) + ((var_1_39 + var_1_19) + var_1_17));
   }
  }
 }
 if (var_1_85 && ((var_1_3 - var_1_38) <= var_1_93)) {
  var_1_1 = ((((((var_1_3 + var_1_38)) > ((var_1_6 - var_1_82))) ? ((var_1_3 + var_1_38)) : ((var_1_6 - var_1_82)))) + var_1_44);
 } else {
  var_1_1 = ((((var_1_3) > (100u)) ? (var_1_3) : (100u)));
 }
 unsigned long int stepLocal_19 = var_1_1;
 unsigned char stepLocal_18 = var_1_13 < var_1_34;
 unsigned char stepLocal_17 = var_1_18 < (var_1_49 - var_1_50);
 if (var_1_26 < stepLocal_19) {
  if (var_1_11 >= var_1_33) {
   if (stepLocal_17 || (var_1_51 <= 64)) {
    if (stepLocal_18 && var_1_85) {
     if (var_1_91) {
      var_1_67 = (var_1_14 + ((((var_1_13) > (var_1_32)) ? (var_1_13) : (var_1_32))));
     }
    }
   } else {
    var_1_67 = (var_1_36 - ((((var_1_37) > (((((var_1_13) > (var_1_35)) ? (var_1_13) : (var_1_35))))) ? (var_1_37) : (((((var_1_13) > (var_1_35)) ? (var_1_13) : (var_1_35)))))));
   }
  }
 } else {
  var_1_67 = ((((var_1_10) < (4.5)) ? (var_1_10) : (4.5)));
 }
 signed long int stepLocal_26 = var_1_19 * var_1_17;
 unsigned short int stepLocal_25 = var_1_44;
 if (var_1_35 >= var_1_88) {
  var_1_77 = ((((16) < 0 ) ? -(16) : (16)));
 } else {
  if (stepLocal_25 >= var_1_3) {
   if (var_1_70) {
    if (var_1_54 < stepLocal_26) {
     var_1_77 = ((var_1_57 + 16) + var_1_56);
    } else {
     if (var_1_79 < var_1_37) {
      var_1_77 = (-2 + (var_1_78 + (var_1_56 + var_1_57)));
     }
    }
   } else {
    var_1_77 = ((((var_1_78) > (var_1_41)) ? (var_1_78) : (var_1_41)));
   }
  } else {
   var_1_77 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
  }
 }
 unsigned char stepLocal_4 = var_1_38;
 if (var_1_69) {
  if (var_1_26 >= stepLocal_4) {
   var_1_31 = ((((var_1_14) < ((var_1_32 + var_1_13))) ? (var_1_14) : ((var_1_32 + var_1_13))));
  } else {
   if ((var_1_14 / ((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34)))) > (7.5f * (var_1_11 * var_1_67))) {
    var_1_31 = 7.5f;
   } else {
    var_1_31 = (var_1_12 - (var_1_35 - var_1_14));
   }
  }
 } else {
  if (var_1_91) {
   var_1_31 = (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - (var_1_14 + (var_1_36 - var_1_37)));
  } else {
   var_1_31 = (((((var_1_36 - var_1_37)) < (var_1_11)) ? ((var_1_36 - var_1_37)) : (var_1_11)));
  }
 }
 if (var_1_13 < (- var_1_11)) {
  if ((var_1_39 | var_1_18) > var_1_20) {
   var_1_52 = ((var_1_53 - var_1_38) - ((((var_1_50) > (((((var_1_19) < (var_1_49)) ? (var_1_19) : (var_1_49))))) ? (var_1_50) : (((((var_1_19) < (var_1_49)) ? (var_1_19) : (var_1_49)))))));
  }
 } else {
  if (var_1_23 >= var_1_29) {
   if (var_1_53 <= var_1_77) {
    var_1_52 = (var_1_23 + (last_1_var_1_52 + var_1_38));
   } else {
    var_1_52 = ((var_1_53 - (var_1_18 + var_1_39)) - (var_1_26 + last_1_var_1_52));
   }
  }
 }
 if ((last_1_var_1_48 / ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) >= ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))) {
  if (var_1_85) {
   var_1_48 = ((((-2) < (var_1_16)) ? (-2) : (var_1_16)));
  } else {
   var_1_48 = ((var_1_41 - var_1_18) + var_1_20);
  }
 } else {
  if (var_1_12 >= var_1_10) {
   var_1_48 = (((var_1_49 + 10) - (var_1_50 + 25)) + var_1_18);
  }
 }
 if ((var_1_36 - var_1_14) >= var_1_67) {
  if (var_1_3 >= ((64 * var_1_93) / var_1_24)) {
   var_1_42 = ((((((var_1_41 - var_1_26)) > ((var_1_48 + var_1_19))) ? ((var_1_41 - var_1_26)) : ((var_1_48 + var_1_19)))) + var_1_44);
  }
 }
 if (var_1_48 <= (-16 >> var_1_52)) {
  var_1_75 = (((((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))) < 0 ) ? -((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))) : ((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56)))));
 } else {
  var_1_75 = ((var_1_25 + var_1_76) - 128);
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 62);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 32767);
 assume_abort_if_not(var_1_24 <= 65534);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 16383);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 8191);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 32767);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 assume_abort_if_not(var_1_33 != 0.0F);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 2305843.009213691390e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 16383);
 assume_abort_if_not(var_1_45 <= 32767);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 32);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 32);
 var_1_53 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_53 >= 3221225470);
 assume_abort_if_not(var_1_53 <= 4294967294);
 var_1_56 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 8);
 var_1_57 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 8);
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 4611686.018427382800e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 0);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 0);
 var_1_70 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_70 >= 1);
 assume_abort_if_not(var_1_70 <= 1);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 1);
 assume_abort_if_not(var_1_71 <= 1);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 1);
 assume_abort_if_not(var_1_72 <= 1);
 var_1_74 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_74 >= 2305843.009213691390e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427382800e+12F && var_1_74 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_76 >= 16384);
 assume_abort_if_not(var_1_76 <= 32767);
 var_1_78 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_78 >= -31);
 assume_abort_if_not(var_1_78 <= 32);
}
void updateLastVariables() {
 last_1_var_1_27 = var_1_27;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_69 = var_1_69;
 last_1_var_1_87 = var_1_87;
 last_1_var_1_93 = var_1_93;
 last_1_var_1_95 = var_1_95;
}
int property() {
 return ((((((((((((((((((((((((((((((((((((((((((((((var_1_85 && ((var_1_3 - var_1_38) <= var_1_93)) ? (var_1_1 == ((unsigned long int) ((((((var_1_3 + var_1_38)) > ((var_1_6 - var_1_82))) ? ((var_1_3 + var_1_38)) : ((var_1_6 - var_1_82)))) + var_1_44))) : (var_1_1 == ((unsigned long int) ((((var_1_3) > (100u)) ? (var_1_3) : (100u)))))) && ((var_1_15 <= (var_1_6 | ((((10) < (var_1_82)) ? (10) : (var_1_82))))) ? (var_1_9 == ((float) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) : (var_1_85 ? ((var_1_6 < ((var_1_38 << var_1_98) + var_1_38)) ? (var_1_9 == ((float) ((((2.75f) > (var_1_10)) ? (2.75f) : (var_1_10))))) : (var_1_9 == ((float) var_1_11))) : (var_1_9 == ((float) (var_1_12 - ((24.625f + var_1_13) + var_1_14))))))) && ((var_1_10 != (- var_1_12)) ? (var_1_15 == ((signed char) (((((var_1_16) > ((var_1_17 - var_1_18))) ? (var_1_16) : ((var_1_17 - var_1_18)))) - var_1_19))) : (var_1_15 == ((signed char) (var_1_18 + var_1_20))))) && (((60969 - var_1_19) < var_1_3) ? (var_1_91 ? (var_1_21 == ((signed short int) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : (var_1_21 == ((signed short int) var_1_19))) : ((((var_1_93 / var_1_17) << var_1_6) < var_1_38) ? (var_1_21 == ((signed short int) var_1_20)) : (var_1_60 ? (var_1_21 == ((signed short int) (var_1_16 - (var_1_17 + ((((var_1_18) < (10)) ? (var_1_18) : (10))))))) : 1)))) && ((var_1_10 >= var_1_13) ? ((16.6 > var_1_14) ? (var_1_23 == ((unsigned short int) (var_1_24 - (var_1_25 - (var_1_26 - var_1_18))))) : 1) : 1)) && (var_1_60 ? ((var_1_38 <= var_1_23) ? (var_1_27 == ((signed long int) (var_1_24 + var_1_97))) : ((var_1_79 > ((((var_1_79 + var_1_13) < 0 ) ? -(var_1_79 + var_1_13) : (var_1_79 + var_1_13)))) ? (var_1_27 == ((signed long int) var_1_97)) : ((var_1_23 <= (- ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) <= var_1_16) && (var_1_3 <= var_1_82)) ? ((var_1_20 > var_1_6) ? (var_1_27 == ((signed long int) (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) - ((((var_1_82) < (var_1_38)) ? (var_1_82) : (var_1_38)))))) : (var_1_27 == ((signed long int) (var_1_16 - 16)))) : (var_1_27 == ((signed long int) ((((-64) < (var_1_24)) ? (-64) : (var_1_24)))))) : (var_1_27 == ((signed long int) (var_1_26 + ((((((((var_1_24) > (var_1_18)) ? (var_1_24) : (var_1_18)))) > (var_1_16)) ? (((((var_1_24) > (var_1_18)) ? (var_1_24) : (var_1_18)))) : (var_1_16))))))))) : 1)) && (var_1_29 == ((unsigned short int) (((((var_1_24) < (var_1_30)) ? (var_1_24) : (var_1_30))) - (var_1_25 - var_1_18))))) && (var_1_69 ? ((var_1_26 >= var_1_38) ? (var_1_31 == ((float) ((((var_1_14) < ((var_1_32 + var_1_13))) ? (var_1_14) : ((var_1_32 + var_1_13)))))) : (((var_1_14 / ((((var_1_33) < (var_1_34)) ? (var_1_33) : (var_1_34)))) > (7.5f * (var_1_11 * var_1_67))) ? (var_1_31 == ((float) 7.5f)) : (var_1_31 == ((float) (var_1_12 - (var_1_35 - var_1_14)))))) : (var_1_91 ? (var_1_31 == ((float) (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - (var_1_14 + (var_1_36 - var_1_37))))) : (var_1_31 == ((float) (((((var_1_36 - var_1_37)) < (var_1_11)) ? ((var_1_36 - var_1_37)) : (var_1_11)))))))) && ((var_1_19 > (-100 * (var_1_20 / var_1_17))) ? ((last_1_var_1_69 || last_1_var_1_95) ? (var_1_38 == ((unsigned char) ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) : (var_1_38 == ((unsigned char) (var_1_39 - var_1_17)))) : 1)) && (var_1_40 == ((signed char) (((((var_1_18 + var_1_41) - var_1_17) < 0 ) ? -((var_1_18 + var_1_41) - var_1_17) : ((var_1_18 + var_1_41) - var_1_17)))))) && (((var_1_36 - var_1_14) >= var_1_67) ? ((var_1_3 >= ((64 * var_1_93) / var_1_24)) ? (var_1_42 == ((signed short int) ((((((var_1_41 - var_1_26)) > ((var_1_48 + var_1_19))) ? ((var_1_41 - var_1_26)) : ((var_1_48 + var_1_19)))) + var_1_44))) : 1) : 1)) && (var_1_43 == ((signed short int) var_1_93))) && ((var_1_26 == (var_1_29 % var_1_3)) ? (var_1_91 ? ((var_1_82 == var_1_17) ? (var_1_44 == ((unsigned short int) ((((((var_1_25) > (var_1_45)) ? (var_1_25) : (var_1_45))) - (var_1_18 + var_1_39)) + var_1_17))) : 1) : 1) : (((var_1_13 > (var_1_58 * var_1_36)) && (var_1_45 < (var_1_54 + var_1_41))) ? ((var_1_37 <= var_1_10) ? (var_1_44 == ((unsigned short int) (var_1_24 - 256))) : 1) : ((var_1_24 >= var_1_29) ? (var_1_44 == ((unsigned short int) (var_1_30 - var_1_19))) : (var_1_44 == ((unsigned short int) ((25320 - ((((var_1_18) > (var_1_41)) ? (var_1_18) : (var_1_41)))) + ((var_1_39 + var_1_19) + var_1_17)))))))) && ((var_1_85 || (var_1_33 >= var_1_79)) ? (var_1_47 == ((signed short int) (var_1_19 - (((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) < 0 ) ? -((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) : ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))))) : (var_1_47 == ((signed short int) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))))) && (((last_1_var_1_48 / ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) >= ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)))) ? (var_1_85 ? (var_1_48 == ((signed char) ((((-2) < (var_1_16)) ? (-2) : (var_1_16))))) : (var_1_48 == ((signed char) ((var_1_41 - var_1_18) + var_1_20)))) : ((var_1_12 >= var_1_10) ? (var_1_48 == ((signed char) (((var_1_49 + 10) - (var_1_50 + 25)) + var_1_18))) : 1))) && (((var_1_92 / 50) == var_1_20) ? (var_1_51 == ((signed char) var_1_50)) : 1)) && ((var_1_13 < (- var_1_11)) ? (((var_1_39 | var_1_18) > var_1_20) ? (var_1_52 == ((unsigned long int) ((var_1_53 - var_1_38) - ((((var_1_50) > (((((var_1_19) < (var_1_49)) ? (var_1_19) : (var_1_49))))) ? (var_1_50) : (((((var_1_19) < (var_1_49)) ? (var_1_19) : (var_1_49))))))))) : 1) : ((var_1_23 >= var_1_29) ? ((var_1_53 <= var_1_77) ? (var_1_52 == ((unsigned long int) (var_1_23 + (last_1_var_1_52 + var_1_38)))) : (var_1_52 == ((unsigned long int) ((var_1_53 - (var_1_18 + var_1_39)) - (var_1_26 + last_1_var_1_52))))) : 1))) && ((last_1_var_1_87 == (var_1_34 / 999999.2f)) ? (var_1_54 == ((unsigned long int) ((var_1_25 + 64u) + var_1_6))) : 1)) && ((((((var_1_15) < (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_15) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) < ((var_1_27 * var_1_96) << (var_1_56 + var_1_57))) ? (var_1_55 == ((signed short int) var_1_16)) : 1)) && (((var_1_80 % var_1_17) < (var_1_53 - var_1_23)) ? (var_1_58 == ((float) ((((((var_1_35) > (var_1_59)) ? (var_1_35) : (var_1_59))) - (var_1_13 + var_1_37)) - var_1_14))) : (var_1_58 == ((float) (var_1_14 + var_1_36))))) && (((var_1_13 != var_1_59) || last_1_var_1_69) ? (last_1_var_1_69 ? (last_1_var_1_69 ? (var_1_60 == ((unsigned char) (last_1_var_1_60 && var_1_62))) : ((var_1_19 <= last_1_var_1_48) ? (var_1_60 == ((unsigned char) (var_1_62 || var_1_63))) : (var_1_60 == ((unsigned char) (last_1_var_1_60 && (var_1_62 && var_1_63)))))) : 1) : 1)) && (((var_1_98 > var_1_98) && (var_1_37 != 128.5f)) ? (var_1_64 == ((signed char) (var_1_19 - var_1_18))) : 1)) && (var_1_95 ? ((var_1_69 || var_1_63) ? (var_1_66 == ((unsigned short int) (var_1_26 + (((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) - var_1_19)))) : (var_1_66 == ((unsigned short int) (((((((((var_1_25 + var_1_17)) > (var_1_38)) ? ((var_1_25 + var_1_17)) : (var_1_38)))) < (((var_1_49 + var_1_39) + var_1_45))) ? ((((((var_1_25 + var_1_17)) > (var_1_38)) ? ((var_1_25 + var_1_17)) : (var_1_38)))) : (((var_1_49 + var_1_39) + var_1_45))))))) : (var_1_66 == ((unsigned short int) (var_1_30 - ((((var_1_45 - var_1_41) < 0 ) ? -(var_1_45 - var_1_41) : (var_1_45 - var_1_41)))))))) && ((var_1_26 < var_1_1) ? ((var_1_11 >= var_1_33) ? (((var_1_18 < (var_1_49 - var_1_50)) || (var_1_51 <= 64)) ? (((var_1_13 < var_1_34) && var_1_85) ? (var_1_91 ? (var_1_67 == ((double) (var_1_14 + ((((var_1_13) > (var_1_32)) ? (var_1_13) : (var_1_32)))))) : 1) : 1) : (var_1_67 == ((double) (var_1_36 - ((((var_1_37) > (((((var_1_13) > (var_1_35)) ? (var_1_13) : (var_1_35))))) ? (var_1_37) : (((((var_1_13) > (var_1_35)) ? (var_1_13) : (var_1_35)))))))))) : 1) : (var_1_67 == ((double) ((((var_1_10) < (4.5)) ? (var_1_10) : (4.5))))))) && ((last_1_var_1_93 == last_1_var_1_93) ? (var_1_69 == ((unsigned char) (! var_1_70))) : ((last_1_var_1_31 > var_1_35) ? ((last_1_var_1_27 >= -4) ? (var_1_69 == ((unsigned char) (((last_1_var_1_93 + var_1_53) != var_1_3) && var_1_62))) : ((var_1_25 > (var_1_56 / var_1_39)) ? (((var_1_19 == var_1_25) && (var_1_57 > (last_1_var_1_93 + last_1_var_1_27))) ? (var_1_69 == ((unsigned char) (var_1_70 && var_1_71))) : (var_1_69 == ((unsigned char) (! var_1_71)))) : (var_1_69 == ((unsigned char) (var_1_71 && (var_1_70 || var_1_72)))))) : 1))) && ((var_1_93 >= var_1_57) ? (var_1_73 == ((float) ((((var_1_14) > (((var_1_13 - var_1_36) + var_1_37))) ? (var_1_14) : (((var_1_13 - var_1_36) + var_1_37)))))) : (var_1_73 == ((float) (((var_1_36 + var_1_74) - var_1_37) - var_1_14))))) && ((var_1_48 <= (-16 >> var_1_52)) ? (var_1_75 == ((unsigned short int) (((((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))) < 0 ) ? -((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))) : ((((var_1_25) > (var_1_56)) ? (var_1_25) : (var_1_56))))))) : (var_1_75 == ((unsigned short int) ((var_1_25 + var_1_76) - 128))))) && ((var_1_35 >= var_1_88) ? (var_1_77 == ((signed char) ((((16) < 0 ) ? -(16) : (16))))) : ((var_1_44 >= var_1_3) ? (var_1_70 ? ((var_1_54 < (var_1_19 * var_1_17)) ? (var_1_77 == ((signed char) ((var_1_57 + 16) + var_1_56))) : ((var_1_79 < var_1_37) ? (var_1_77 == ((signed char) (-2 + (var_1_78 + (var_1_56 + var_1_57))))) : 1)) : (var_1_77 == ((signed char) ((((var_1_78) > (var_1_41)) ? (var_1_78) : (var_1_41)))))) : (var_1_77 == ((signed char) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))))) && (var_1_79 == ((double) (((var_1_36 - var_1_13) + (64.25 + var_1_37)) - (var_1_14 + var_1_74))))) && (var_1_80 == ((unsigned short int) (var_1_24 - var_1_39)))) && (((var_1_10 * var_1_94) < var_1_34) ? (var_1_81 == ((signed char) (var_1_17 - var_1_50))) : (var_1_81 == ((signed char) ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))))))) && ((var_1_93 > var_1_23) ? ((16u > ((((var_1_80) > (var_1_38)) ? (var_1_80) : (var_1_38)))) ? (var_1_82 == ((unsigned short int) var_1_38)) : (var_1_82 == ((unsigned short int) (var_1_41 + var_1_39)))) : (var_1_82 == ((unsigned short int) ((((((((var_1_19) > (var_1_66)) ? (var_1_19) : (var_1_66)))) > ((var_1_24 - var_1_26))) ? (((((var_1_19) > (var_1_66)) ? (var_1_19) : (var_1_66)))) : ((var_1_24 - var_1_26)))))))) && (last_1_var_1_95 ? (var_1_85 == ((unsigned char) (! (var_1_70 && (var_1_71 && var_1_72))))) : 1)) && (var_1_86 == ((signed short int) ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))))) && (((((((var_1_39) > (var_1_43)) ? (var_1_39) : (var_1_43))) & var_1_21) < (var_1_43 * var_1_3)) ? (var_1_87 == ((float) ((((var_1_11) < (var_1_32)) ? (var_1_11) : (var_1_32))))) : 1)) && ((var_1_25 < var_1_98) ? (((- var_1_47) <= var_1_29) ? ((var_1_96 >= var_1_97) ? (var_1_88 == ((double) ((((var_1_13) > (var_1_32)) ? (var_1_13) : (var_1_32))))) : 1) : (var_1_88 == ((double) var_1_36))) : (var_1_88 == ((double) (var_1_37 + var_1_36))))) && (((((((var_1_12) > (var_1_59)) ? (var_1_12) : (var_1_59))) - var_1_74) >= var_1_94) ? (((((((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) < 0 ) ? -((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) : ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) <= ((((var_1_3) < (var_1_97)) ? (var_1_3) : (var_1_97)))) ? ((var_1_56 < ((((var_1_45) < ((2 * var_1_6))) ? (var_1_45) : ((2 * var_1_6))))) ? ((((((var_1_38) < (var_1_3)) ? (var_1_38) : (var_1_3))) <= (var_1_29 | var_1_23)) ? ((var_1_95 && (var_1_98 > var_1_20)) ? ((var_1_50 <= (var_1_97 / var_1_17)) ? (var_1_89 == ((double) ((((((((var_1_74) > ((var_1_37 - 0.8))) ? (var_1_74) : ((var_1_37 - 0.8))))) < (var_1_13)) ? (((((var_1_74) > ((var_1_37 - 0.8))) ? (var_1_74) : ((var_1_37 - 0.8))))) : (var_1_13))))) : (var_1_89 == ((double) var_1_13))) : 1) : (var_1_89 == ((double) var_1_37))) : (var_1_89 == ((double) var_1_59))) : 1) : (var_1_89 == ((double) var_1_10)))) && (last_1_var_1_60 ? (var_1_91 == ((unsigned char) var_1_71)) : 1)) && (var_1_92 == ((signed char) var_1_57))) && (var_1_93 == ((unsigned short int) var_1_57))) && (var_1_94 == ((double) var_1_36))) && (var_1_85 ? (var_1_95 == ((unsigned char) var_1_70)) : (var_1_95 == ((unsigned char) var_1_63)))) && (var_1_91 ? (var_1_96 == ((unsigned long int) var_1_26)) : (var_1_96 == ((unsigned long int) var_1_39)))) && (var_1_60 ? (var_1_97 == ((unsigned long int) var_1_30)) : (var_1_97 == ((unsigned long int) var_1_99)))) && (var_1_69 ? (var_1_98 == ((unsigned long int) var_1_86)) : (var_1_98 == ((unsigned long int) var_1_19)))) && ((((var_1_49 >= var_1_80) || var_1_71) && var_1_91) ? (var_1_91 ? (((var_1_18 & (var_1_54 & var_1_80)) <= var_1_26) ? (var_1_99 == ((signed long int) var_1_57)) : 1) : 1) : 1)
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
