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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 10.53;
float var_1_5 = 15.75;
float var_1_6 = 15.25;
float var_1_8 = 1.5;
float var_1_9 = 1.35;
float var_1_10 = 49.2;
float var_1_11 = 256.5;
signed short int var_1_13 = 4;
signed short int var_1_14 = 25;
signed short int var_1_15 = 500;
signed short int var_1_16 = -32;
signed char var_1_17 = 0;
signed char var_1_18 = -2;
signed char var_1_19 = 5;
signed char var_1_20 = 25;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 1;
unsigned char var_1_27 = 1;
signed short int var_1_28 = -8;
unsigned char var_1_29 = 1;
unsigned char var_1_31 = 0;
signed short int var_1_32 = 64;
signed short int var_1_33 = -256;
signed long int var_1_34 = 32;
float var_1_35 = 16.8;
unsigned char var_1_36 = 0;
double var_1_37 = -0.5;
signed short int var_1_38 = 0;
unsigned long int var_1_39 = 5;
unsigned long int var_1_40 = 3951792564;
unsigned long int var_1_41 = 0;
signed long int var_1_42 = -32;
signed long int var_1_43 = 10;
signed char var_1_44 = 5;
signed char var_1_45 = 16;
float var_1_46 = 10.25;
float var_1_47 = 3.8;
float var_1_48 = 4.84;
signed char var_1_49 = -4;
signed char var_1_50 = 8;
signed char var_1_51 = 8;
signed char var_1_52 = 0;
signed char var_1_53 = 1;
signed char var_1_54 = 32;
signed char var_1_55 = 50;
signed short int var_1_56 = 200;
float var_1_57 = 15.5;
float var_1_58 = 2.55;
signed char var_1_59 = 2;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 0;
float var_1_62 = -0.5;
unsigned long int var_1_63 = 3104340563;
float var_1_64 = 24.4;
float var_1_65 = 32.5;
unsigned short int var_1_66 = 50;
unsigned short int var_1_67 = 10000;
unsigned short int var_1_68 = 256;
unsigned short int var_1_70 = 2;
unsigned short int var_1_71 = 40886;
unsigned short int var_1_72 = 128;
signed char var_1_73 = -10;
signed char var_1_74 = 8;
unsigned long int var_1_75 = 256;
double var_1_76 = 16.95;
unsigned long int var_1_77 = 1624136162;
float var_1_79 = 0.0;
unsigned long int var_1_80 = 1249497773;
signed short int var_1_81 = -64;
unsigned char var_1_82 = 0;
unsigned long int var_1_84 = 64;
unsigned long int var_1_85 = 0;
unsigned long int var_1_87 = 3938699514;
unsigned long int var_1_88 = 2042395053;
float var_1_89 = 49.5;
signed short int var_1_92 = -32;
signed char var_1_93 = -8;
double var_1_94 = 50.5;
unsigned char var_1_95 = 1;
unsigned char var_1_96 = 10;
float var_1_97 = 8.7;
unsigned char var_1_98 = 1;
unsigned char var_1_99 = 64;
signed char var_1_100 = 4;
signed char var_1_101 = 1;
signed short int var_1_102 = -16;
unsigned short int var_1_103 = 200;
float var_1_104 = 0.9;
unsigned char var_1_105 = 32;
unsigned short int var_1_106 = 64;
unsigned short int var_1_107 = 128;
float last_1_var_1_1 = 10.53;
unsigned char last_1_var_1_21 = 0;
signed long int last_1_var_1_34 = 32;
unsigned char last_1_var_1_36 = 0;
double last_1_var_1_37 = -0.5;
signed short int last_1_var_1_38 = 0;
unsigned long int last_1_var_1_39 = 5;
signed long int last_1_var_1_42 = -32;
signed char last_1_var_1_59 = 2;
unsigned char last_1_var_1_60 = 1;
float last_1_var_1_62 = -0.5;
unsigned short int last_1_var_1_66 = 50;
unsigned short int last_1_var_1_72 = 128;
unsigned long int last_1_var_1_75 = 256;
signed short int last_1_var_1_81 = -64;
unsigned long int last_1_var_1_84 = 64;
float last_1_var_1_89 = 49.5;
signed short int last_1_var_1_92 = -32;
double last_1_var_1_94 = 50.5;
unsigned char last_1_var_1_98 = 1;
signed short int last_1_var_1_102 = -16;
unsigned short int last_1_var_1_103 = 200;
float last_1_var_1_104 = 0.9;
unsigned short int last_1_var_1_106 = 64;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_37 >= 199.5f) {
  if ((var_1_6 <= var_1_9) && last_1_var_1_36) {
   if (var_1_20 < (64 << last_1_var_1_42)) {
    if (var_1_11 <= var_1_6) {
     var_1_29 = 0;
    } else {
     if (var_1_11 > last_1_var_1_104) {
      var_1_29 = ((! var_1_31) && (var_1_27 && var_1_23));
     } else {
      var_1_29 = ((var_1_22 < last_1_var_1_38) && var_1_31);
     }
    }
   } else {
    if (var_1_9 >= var_1_5) {
     var_1_29 = ((128 > var_1_19) && var_1_31);
    } else {
     var_1_29 = var_1_31;
    }
   }
  }
 } else {
  var_1_29 = var_1_31;
 }
 if (var_1_29) {
  var_1_38 = (var_1_15 - (var_1_20 + var_1_22));
 } else {
  var_1_38 = (var_1_15 - (((((4) < 0 ) ? -(4) : (4))) + ((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22)))));
 }
 signed long int stepLocal_9 = var_1_19 - var_1_20;
 if (stepLocal_9 >= (((((last_1_var_1_92 / var_1_22)) < (var_1_15)) ? ((last_1_var_1_92 / var_1_22)) : (var_1_15)))) {
  var_1_42 = -2;
 } else {
  var_1_42 = last_1_var_1_59;
 }
 if ((var_1_8 + 9.4f) >= last_1_var_1_89) {
  if (last_1_var_1_66 <= last_1_var_1_75) {
   var_1_39 = (var_1_40 - ((((32u) < 0 ) ? -(32u) : (32u))));
  } else {
   var_1_39 = var_1_20;
  }
 } else {
  var_1_39 = (var_1_40 - var_1_41);
 }
 if (last_1_var_1_72 < (last_1_var_1_84 + var_1_53)) {
  if (last_1_var_1_21 || var_1_25) {
   if ((last_1_var_1_37 <= var_1_58) || (var_1_33 < last_1_var_1_75)) {
    var_1_62 = ((128.5f + var_1_11) - ((((var_1_10) < (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_10) : (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))));
   }
  } else {
   var_1_62 = (24.8f + 5.2f);
  }
 } else {
  if ((((((var_1_40) < (var_1_63)) ? (var_1_40) : (var_1_63))) - var_1_15) >= last_1_var_1_75) {
   if (var_1_51 <= var_1_45) {
    var_1_62 = (var_1_11 - var_1_8);
   }
  } else {
   if ((var_1_10 - (var_1_11 + var_1_64)) > (- last_1_var_1_37)) {
    var_1_62 = ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - var_1_65) + var_1_48);
   } else {
    var_1_62 = var_1_47;
   }
  }
 }
 if (var_1_25) {
  if ((- ((((last_1_var_1_37) < 0 ) ? -(last_1_var_1_37) : (last_1_var_1_37)))) < var_1_9) {
   var_1_82 = (! var_1_61);
  } else {
   var_1_82 = var_1_27;
  }
 } else {
  if (last_1_var_1_62 > ((((var_1_79) < 0 ) ? -(var_1_79) : (var_1_79)))) {
   var_1_82 = (last_1_var_1_60 && (last_1_var_1_98 && var_1_61));
  }
 }
 unsigned long int stepLocal_18 = var_1_70 % (var_1_63 - 256u);
 unsigned long int stepLocal_17 = 128u;
 if (last_1_var_1_36) {
  if (stepLocal_17 <= ((var_1_63 - var_1_85) * last_1_var_1_75)) {
   var_1_84 = (((((var_1_40) > (((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87))))) ? (var_1_40) : (((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87)))))) - (2052788344u - var_1_67));
  } else {
   if (stepLocal_18 == var_1_52) {
    var_1_84 = ((var_1_80 + var_1_88) - (var_1_77 - ((((last_1_var_1_103) < (var_1_22)) ? (last_1_var_1_103) : (var_1_22)))));
   } else {
    var_1_84 = ((last_1_var_1_103 + var_1_52) + var_1_20);
   }
  }
 } else {
  var_1_84 = (var_1_70 + var_1_20);
 }
 unsigned char stepLocal_15 = var_1_27;
 if (((var_1_84 / var_1_67) < var_1_41) || stepLocal_15) {
  var_1_72 = (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) + var_1_67);
 } else {
  var_1_72 = (var_1_67 + var_1_20);
 }
 signed long int stepLocal_16 = ~ (var_1_67 * var_1_33);
 if (((- last_1_var_1_1) / var_1_76) < (var_1_8 - (var_1_10 + var_1_64))) {
  if ((var_1_11 - ((((var_1_65) < (128.1)) ? (var_1_65) : (128.1)))) >= last_1_var_1_1) {
   if (last_1_var_1_102 < stepLocal_16) {
    var_1_75 = ((((last_1_var_1_66) > ((last_1_var_1_39 + var_1_52))) ? (last_1_var_1_66) : ((last_1_var_1_39 + var_1_52))));
   }
  } else {
   var_1_75 = (last_1_var_1_75 + (((((var_1_77 - var_1_45)) > (var_1_68)) ? ((var_1_77 - var_1_45)) : (var_1_68))));
  }
 } else {
  if ((var_1_65 + last_1_var_1_94) == ((var_1_79 - var_1_11) - var_1_10)) {
   var_1_75 = ((var_1_77 + var_1_80) - var_1_22);
  } else {
   var_1_75 = ((((((((((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) < (var_1_77)) ? (((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) : (var_1_77)))) < (var_1_20)) ? (((((((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) < (var_1_77)) ? (((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) : (var_1_77)))) : (var_1_20)));
  }
 }
 var_1_13 = (((((var_1_14 + (32 - var_1_15))) > (var_1_16)) ? ((var_1_14 + (32 - var_1_15))) : (var_1_16)));
 unsigned char stepLocal_3 = var_1_84 >= ((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84)));
 if (((var_1_15 + var_1_39) > var_1_16) && stepLocal_3) {
  var_1_17 = ((((-1) > (((((((((64) < 0 ) ? -(64) : (64)))) < (0)) ? (((((64) < 0 ) ? -(64) : (64)))) : (0))))) ? (-1) : (((((((((64) < 0 ) ? -(64) : (64)))) < (0)) ? (((((64) < 0 ) ? -(64) : (64)))) : (0))))));
 }
 if (var_1_16 > ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) {
  var_1_28 = (var_1_22 + ((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))));
 }
 var_1_35 = (var_1_10 + 5.25f);
 var_1_37 = (var_1_10 + 200.5);
 unsigned long int stepLocal_12 = var_1_52 + var_1_84;
 if (((57225 - var_1_15) / var_1_22) >= stepLocal_12) {
  var_1_54 = ((((var_1_19) > (var_1_50)) ? (var_1_19) : (var_1_50)));
 } else {
  var_1_54 = (25 + -10);
 }
 var_1_95 = 0;
 var_1_96 = var_1_45;
 var_1_97 = var_1_6;
 if (last_1_var_1_98) {
  var_1_98 = var_1_61;
 }
 var_1_102 = -128;
 if (var_1_25) {
  var_1_103 = var_1_22;
 }
 if (var_1_98) {
  var_1_104 = var_1_6;
 } else {
  var_1_104 = var_1_64;
 }
 if (var_1_95) {
  var_1_105 = var_1_52;
 } else {
  var_1_105 = var_1_45;
 }
 unsigned char stepLocal_25 = var_1_82;
 unsigned short int stepLocal_24 = var_1_70;
 if (var_1_85 < stepLocal_24) {
  if ((((((var_1_72) < (last_1_var_1_106)) ? (var_1_72) : (last_1_var_1_106))) > var_1_67) || stepLocal_25) {
   if (var_1_64 > var_1_47) {
    var_1_106 = var_1_20;
   }
  }
 } else {
  var_1_106 = var_1_107;
 }
 if (var_1_24) {
  if (var_1_10 < var_1_35) {
   var_1_60 = (! (var_1_82 && (var_1_31 || var_1_61)));
  } else {
   var_1_60 = ((var_1_52 < var_1_45) && ((var_1_20 != var_1_16) && var_1_31));
  }
 } else {
  var_1_60 = (! var_1_61);
 }
 unsigned long int stepLocal_20 = var_1_84;
 signed long int stepLocal_19 = -32;
 if ((var_1_15 ^ var_1_80) >= stepLocal_20) {
  if (var_1_75 != stepLocal_19) {
   var_1_92 = ((((200) > (var_1_74)) ? (200) : (var_1_74)));
  } else {
   var_1_92 = last_1_var_1_92;
  }
 }
 unsigned char stepLocal_7 = var_1_95;
 unsigned long int stepLocal_6 = (((var_1_84) < (var_1_19)) ? (var_1_84) : (var_1_19));
 unsigned char stepLocal_5 = var_1_24;
 if (stepLocal_7 && ((var_1_8 - var_1_9) < (var_1_37 * var_1_104))) {
  if (stepLocal_5 && (var_1_104 > var_1_5)) {
   if (4 <= stepLocal_6) {
    var_1_32 = (var_1_33 + var_1_20);
   } else {
    var_1_32 = ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17)));
   }
  }
 } else {
  var_1_32 = ((((var_1_20 - var_1_15) < 0 ) ? -(var_1_20 - var_1_15) : (var_1_20 - var_1_15)));
 }
 if (var_1_9 >= var_1_6) {
  var_1_34 = var_1_103;
 } else {
  var_1_34 = last_1_var_1_34;
 }
 if (! (! var_1_23)) {
  if (var_1_39 != -100) {
   if (var_1_84 != (var_1_16 * (var_1_15 + var_1_92))) {
    var_1_44 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
   }
  } else {
   var_1_44 = (var_1_20 - var_1_45);
  }
 } else {
  var_1_44 = var_1_20;
 }
 if (! var_1_60) {
  var_1_46 = ((var_1_47 + var_1_48) + ((((var_1_10 - var_1_11) < 0 ) ? -(var_1_10 - var_1_11) : (var_1_10 - var_1_11))));
 }
 if ((- var_1_104) == (0.8f * (var_1_37 * var_1_47))) {
  var_1_55 = ((((var_1_50) < (((((-10) > (var_1_20)) ? (-10) : (var_1_20))))) ? (var_1_50) : (((((-10) > (var_1_20)) ? (-10) : (var_1_20))))));
 } else {
  var_1_55 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
 }
 if (var_1_6 == (- ((((var_1_47) > (var_1_104)) ? (var_1_47) : (var_1_104))))) {
  var_1_57 = var_1_58;
 }
 unsigned long int stepLocal_14 = 256u;
 signed short int stepLocal_13 = var_1_28;
 if (stepLocal_14 >= var_1_63) {
  var_1_66 = ((64520 - (var_1_67 - var_1_22)) - var_1_68);
 } else {
  if (! var_1_95) {
   if (var_1_58 < var_1_9) {
    if (stepLocal_13 == (var_1_103 + var_1_45)) {
     var_1_66 = var_1_70;
    } else {
     var_1_66 = (var_1_71 - ((((var_1_20) < (5)) ? (var_1_20) : (5))));
    }
   } else {
    var_1_66 = ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)));
   }
  } else {
   var_1_66 = (var_1_71 - (var_1_52 + var_1_15));
  }
 }
 if ((((((var_1_64) < (var_1_57)) ? (var_1_64) : (var_1_57))) + var_1_8) <= var_1_10) {
  var_1_73 = (var_1_74 + var_1_52);
 } else {
  var_1_73 = (((((var_1_50) < (var_1_53)) ? (var_1_50) : (var_1_53))) + var_1_74);
 }
 signed short int stepLocal_23 = var_1_13;
 unsigned char stepLocal_22 = var_1_95;
 signed long int stepLocal_21 = var_1_71 - var_1_45;
 if (var_1_31 && stepLocal_22) {
  if (var_1_34 <= stepLocal_23) {
   if (stepLocal_21 >= var_1_19) {
    var_1_94 = var_1_9;
   }
  } else {
   var_1_94 = var_1_9;
  }
 } else {
  var_1_94 = var_1_48;
 }
 if (var_1_60) {
  var_1_100 = var_1_51;
 } else {
  var_1_100 = var_1_52;
 }
 if ((- var_1_8) > var_1_37) {
  var_1_43 = (2 - var_1_66);
 } else {
  var_1_43 = ((var_1_22 + var_1_20) - var_1_66);
 }
 unsigned char stepLocal_11 = var_1_27;
 signed short int stepLocal_10 = var_1_38;
 if ((var_1_43 <= (~ var_1_38)) && stepLocal_11) {
  if ((64 - var_1_20) >= stepLocal_10) {
   var_1_49 = (var_1_50 + ((var_1_51 - var_1_52) + var_1_53));
  }
 } else {
  var_1_49 = ((((var_1_20) > (var_1_50)) ? (var_1_20) : (var_1_50)));
 }
 var_1_56 = var_1_66;
 if (var_1_43 > (var_1_14 + var_1_72)) {
  if (var_1_102 == (last_1_var_1_81 + var_1_51)) {
   if (var_1_43 <= var_1_75) {
    var_1_81 = (((((((last_1_var_1_81) < 0 ) ? -(last_1_var_1_81) : (last_1_var_1_81))) < 0 ) ? -((((last_1_var_1_81) < 0 ) ? -(last_1_var_1_81) : (last_1_var_1_81))) : ((((last_1_var_1_81) < 0 ) ? -(last_1_var_1_81) : (last_1_var_1_81)))));
   } else {
    var_1_81 = ((((((var_1_45) < (var_1_22)) ? (var_1_45) : (var_1_22))) + (10000 - var_1_52)) - var_1_15);
   }
  }
 }
 if (((((var_1_20) < ((var_1_85 + var_1_68))) ? (var_1_20) : ((var_1_85 + var_1_68)))) >= var_1_39) {
  if (var_1_95) {
   if (var_1_94 <= var_1_11) {
    var_1_93 = (var_1_50 + var_1_53);
   } else {
    var_1_93 = ((((var_1_52) < (var_1_51)) ? (var_1_52) : (var_1_51)));
   }
  } else {
   var_1_93 = var_1_19;
  }
 } else {
  if ((-128 + (var_1_19 / -1)) < ((var_1_42 + var_1_44) * var_1_39)) {
   var_1_93 = ((((var_1_74) > (var_1_51)) ? (var_1_74) : (var_1_51)));
  } else {
   var_1_93 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
  }
 }
 if (var_1_23) {
  if (var_1_41 >= (((((var_1_42) > (var_1_80)) ? (var_1_42) : (var_1_80))) + var_1_75)) {
   var_1_89 = var_1_47;
  } else {
   if (((var_1_84 + var_1_43) * 4) > ((((var_1_75) < (var_1_39)) ? (var_1_75) : (var_1_39)))) {
    var_1_89 = ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - var_1_65) + var_1_47);
   } else {
    var_1_89 = (var_1_9 - var_1_11);
   }
  }
 }
 signed long int stepLocal_8 = (((var_1_92) < (var_1_33)) ? (var_1_92) : (var_1_33));
 if (var_1_43 <= stepLocal_8) {
  if (! var_1_25) {
   if ((- var_1_9) > (- var_1_62)) {
    var_1_36 = ((var_1_24 && var_1_27) && var_1_25);
   }
  }
 } else {
  var_1_36 = (! var_1_25);
 }
 unsigned short int stepLocal_4 = var_1_106;
 if ((var_1_22 - var_1_20) != stepLocal_4) {
  var_1_21 = ((var_1_36 || (var_1_95 || var_1_23)) && ((var_1_24 && var_1_25) && (var_1_98 || var_1_27)));
 }
 unsigned long int stepLocal_2 = var_1_84;
 unsigned long int stepLocal_1 = var_1_75;
 unsigned long int stepLocal_0 = var_1_84;
 if (var_1_75 <= stepLocal_0) {
  if (var_1_82) {
   if (stepLocal_1 == ((((1000000000) > (var_1_84)) ? (1000000000) : (var_1_84)))) {
    var_1_1 = (((((((var_1_5) < (3.7f)) ? (var_1_5) : (3.7f))) < 0 ) ? -((((var_1_5) < (3.7f)) ? (var_1_5) : (3.7f))) : ((((var_1_5) < (3.7f)) ? (var_1_5) : (3.7f)))));
   }
  } else {
   var_1_1 = ((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_6)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_6)));
  }
 } else {
  if (var_1_6 <= var_1_5) {
   if (var_1_106 >= stepLocal_2) {
    var_1_1 = (var_1_8 - var_1_9);
   } else {
    var_1_1 = (var_1_8 - (((((var_1_10 + var_1_11)) > (64.5f)) ? ((var_1_10 + var_1_11)) : (64.5f))));
   }
  } else {
   if (var_1_21) {
    var_1_1 = ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8)));
   }
  }
 }
 if (var_1_8 <= (15.9f + (var_1_9 * var_1_11))) {
  if (! var_1_21) {
   var_1_18 = (((((var_1_19) < (10)) ? (var_1_19) : (10))) - var_1_20);
  } else {
   var_1_18 = var_1_20;
  }
 }
 if (var_1_36) {
  var_1_99 = 4;
 } else {
  var_1_99 = 8;
 }
 if (var_1_36) {
  var_1_101 = var_1_52;
 } else {
  var_1_101 = var_1_51;
 }
 if (! var_1_36) {
  if (! ((var_1_50 / var_1_22) <= var_1_42)) {
   var_1_59 = (var_1_51 - (64 - var_1_52));
  }
 } else {
  var_1_59 = ((((var_1_19) > (var_1_52)) ? (var_1_19) : (var_1_52)));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -16383);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= -32767);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -1);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 127);
 assume_abort_if_not(var_1_22 <= 255);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -16383);
 assume_abort_if_not(var_1_33 <= 16383);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -230584.3009213691400e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691400e+12F && var_1_48 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -63);
 assume_abort_if_not(var_1_50 <= 63);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 32);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 0);
 assume_abort_if_not(var_1_52 <= 31);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -31);
 assume_abort_if_not(var_1_53 <= 31);
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= -922337.2036854766000e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 0);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 2147483647);
 assume_abort_if_not(var_1_63 <= 4294967295);
 var_1_64 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427388000e+12F && var_1_64 >= 1.0e-20F ));
 var_1_65 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 4611686.018427383000e+12F && var_1_65 >= 1.0e-20F ));
 var_1_67 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_67 >= 8191);
 assume_abort_if_not(var_1_67 <= 16383);
 var_1_68 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_68 >= 0);
 assume_abort_if_not(var_1_68 <= 32767);
 var_1_70 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_70 >= 0);
 assume_abort_if_not(var_1_70 <= 65534);
 var_1_71 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_71 >= 32767);
 assume_abort_if_not(var_1_71 <= 65534);
 var_1_74 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_74 >= -63);
 assume_abort_if_not(var_1_74 <= 63);
 var_1_76 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_76 >= -922337.2036854776000e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854776000e+12F && var_1_76 >= 1.0e-20F ));
 assume_abort_if_not(var_1_76 != 0.0F);
 var_1_77 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_77 >= 1073741823);
 assume_abort_if_not(var_1_77 <= 2147483647);
 var_1_79 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_79 >= 4611686.018427388000e+12F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
 var_1_80 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_80 >= 1073741824);
 assume_abort_if_not(var_1_80 <= 2147483647);
 var_1_85 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_85 >= 0);
 assume_abort_if_not(var_1_85 <= 2147483647);
 var_1_87 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_87 >= 2147483647);
 assume_abort_if_not(var_1_87 <= 4294967294);
 var_1_88 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_88 >= 1073741824);
 assume_abort_if_not(var_1_88 <= 2147483647);
 var_1_107 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_107 >= 0);
 assume_abort_if_not(var_1_107 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_66 = var_1_66;
 last_1_var_1_72 = var_1_72;
 last_1_var_1_75 = var_1_75;
 last_1_var_1_81 = var_1_81;
 last_1_var_1_84 = var_1_84;
 last_1_var_1_89 = var_1_89;
 last_1_var_1_92 = var_1_92;
 last_1_var_1_94 = var_1_94;
 last_1_var_1_98 = var_1_98;
 last_1_var_1_102 = var_1_102;
 last_1_var_1_103 = var_1_103;
 last_1_var_1_104 = var_1_104;
 last_1_var_1_106 = var_1_106;
}
int property(void) {
 return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_75 <= var_1_84) ? (var_1_82 ? ((var_1_75 == ((((1000000000) > (var_1_84)) ? (1000000000) : (var_1_84)))) ? (var_1_1 == ((float) (((((((var_1_5) < (3.7f)) ? (var_1_5) : (3.7f))) < 0 ) ? -((((var_1_5) < (3.7f)) ? (var_1_5) : (3.7f))) : ((((var_1_5) < (3.7f)) ? (var_1_5) : (3.7f))))))) : 1) : (var_1_1 == ((float) ((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_6)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_6)))))) : ((var_1_6 <= var_1_5) ? ((var_1_106 >= var_1_84) ? (var_1_1 == ((float) (var_1_8 - var_1_9))) : (var_1_1 == ((float) (var_1_8 - (((((var_1_10 + var_1_11)) > (64.5f)) ? ((var_1_10 + var_1_11)) : (64.5f))))))) : (var_1_21 ? (var_1_1 == ((float) ((((var_1_10) < (var_1_8)) ? (var_1_10) : (var_1_8))))) : 1))) && (var_1_13 == ((signed short int) (((((var_1_14 + (32 - var_1_15))) > (var_1_16)) ? ((var_1_14 + (32 - var_1_15))) : (var_1_16)))))) && ((((var_1_15 + var_1_39) > var_1_16) && (var_1_84 >= ((((var_1_84) < 0 ) ? -(var_1_84) : (var_1_84))))) ? (var_1_17 == ((signed char) ((((-1) > (((((((((64) < 0 ) ? -(64) : (64)))) < (0)) ? (((((64) < 0 ) ? -(64) : (64)))) : (0))))) ? (-1) : (((((((((64) < 0 ) ? -(64) : (64)))) < (0)) ? (((((64) < 0 ) ? -(64) : (64)))) : (0)))))))) : 1)) && ((var_1_8 <= (15.9f + (var_1_9 * var_1_11))) ? ((! var_1_21) ? (var_1_18 == ((signed char) (((((var_1_19) < (10)) ? (var_1_19) : (10))) - var_1_20))) : (var_1_18 == ((signed char) var_1_20))) : 1)) && (((var_1_22 - var_1_20) != var_1_106) ? (var_1_21 == ((unsigned char) ((var_1_36 || (var_1_95 || var_1_23)) && ((var_1_24 && var_1_25) && (var_1_98 || var_1_27))))) : 1)) && ((var_1_16 > ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))) ? (var_1_28 == ((signed short int) (var_1_22 + ((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20)))))) : 1)) && ((last_1_var_1_37 >= 199.5f) ? (((var_1_6 <= var_1_9) && last_1_var_1_36) ? ((var_1_20 < (64 << last_1_var_1_42)) ? ((var_1_11 <= var_1_6) ? (var_1_29 == ((unsigned char) 0)) : ((var_1_11 > last_1_var_1_104) ? (var_1_29 == ((unsigned char) ((! var_1_31) && (var_1_27 && var_1_23)))) : (var_1_29 == ((unsigned char) ((var_1_22 < last_1_var_1_38) && var_1_31))))) : ((var_1_9 >= var_1_5) ? (var_1_29 == ((unsigned char) ((128 > var_1_19) && var_1_31))) : (var_1_29 == ((unsigned char) var_1_31)))) : 1) : (var_1_29 == ((unsigned char) var_1_31)))) && ((var_1_95 && ((var_1_8 - var_1_9) < (var_1_37 * var_1_104))) ? ((var_1_24 && (var_1_104 > var_1_5)) ? ((4 <= ((((var_1_84) < (var_1_19)) ? (var_1_84) : (var_1_19)))) ? (var_1_32 == ((signed short int) (var_1_33 + var_1_20))) : (var_1_32 == ((signed short int) ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17)))))) : 1) : (var_1_32 == ((signed short int) ((((var_1_20 - var_1_15) < 0 ) ? -(var_1_20 - var_1_15) : (var_1_20 - var_1_15))))))) && ((var_1_9 >= var_1_6) ? (var_1_34 == ((signed long int) var_1_103)) : (var_1_34 == ((signed long int) last_1_var_1_34)))) && (var_1_35 == ((float) (var_1_10 + 5.25f)))) && ((var_1_43 <= ((((var_1_92) < (var_1_33)) ? (var_1_92) : (var_1_33)))) ? ((! var_1_25) ? (((- var_1_9) > (- var_1_62)) ? (var_1_36 == ((unsigned char) ((var_1_24 && var_1_27) && var_1_25))) : 1) : 1) : (var_1_36 == ((unsigned char) (! var_1_25))))) && (var_1_37 == ((double) (var_1_10 + 200.5)))) && (var_1_29 ? (var_1_38 == ((signed short int) (var_1_15 - (var_1_20 + var_1_22)))) : (var_1_38 == ((signed short int) (var_1_15 - (((((4) < 0 ) ? -(4) : (4))) + ((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22))))))))) && (((var_1_8 + 9.4f) >= last_1_var_1_89) ? ((last_1_var_1_66 <= last_1_var_1_75) ? (var_1_39 == ((unsigned long int) (var_1_40 - ((((32u) < 0 ) ? -(32u) : (32u)))))) : (var_1_39 == ((unsigned long int) var_1_20))) : (var_1_39 == ((unsigned long int) (var_1_40 - var_1_41))))) && (((var_1_19 - var_1_20) >= (((((last_1_var_1_92 / var_1_22)) < (var_1_15)) ? ((last_1_var_1_92 / var_1_22)) : (var_1_15)))) ? (var_1_42 == ((signed long int) -2)) : (var_1_42 == ((signed long int) last_1_var_1_59)))) && (((- var_1_8) > var_1_37) ? (var_1_43 == ((signed long int) (2 - var_1_66))) : (var_1_43 == ((signed long int) ((var_1_22 + var_1_20) - var_1_66))))) && ((! (! var_1_23)) ? ((var_1_39 != -100) ? ((var_1_84 != (var_1_16 * (var_1_15 + var_1_92))) ? (var_1_44 == ((signed char) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : 1) : (var_1_44 == ((signed char) (var_1_20 - var_1_45)))) : (var_1_44 == ((signed char) var_1_20)))) && ((! var_1_60) ? (var_1_46 == ((float) ((var_1_47 + var_1_48) + ((((var_1_10 - var_1_11) < 0 ) ? -(var_1_10 - var_1_11) : (var_1_10 - var_1_11)))))) : 1)) && (((var_1_43 <= (~ var_1_38)) && var_1_27) ? (((64 - var_1_20) >= var_1_38) ? (var_1_49 == ((signed char) (var_1_50 + ((var_1_51 - var_1_52) + var_1_53)))) : 1) : (var_1_49 == ((signed char) ((((var_1_20) > (var_1_50)) ? (var_1_20) : (var_1_50))))))) && ((((57225 - var_1_15) / var_1_22) >= (var_1_52 + var_1_84)) ? (var_1_54 == ((signed char) ((((var_1_19) > (var_1_50)) ? (var_1_19) : (var_1_50))))) : (var_1_54 == ((signed char) (25 + -10))))) && (((- var_1_104) == (0.8f * (var_1_37 * var_1_47))) ? (var_1_55 == ((signed char) ((((var_1_50) < (((((-10) > (var_1_20)) ? (-10) : (var_1_20))))) ? (var_1_50) : (((((-10) > (var_1_20)) ? (-10) : (var_1_20)))))))) : (var_1_55 == ((signed char) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))) && (var_1_56 == ((signed short int) var_1_66))) && ((var_1_6 == (- ((((var_1_47) > (var_1_104)) ? (var_1_47) : (var_1_104))))) ? (var_1_57 == ((float) var_1_58)) : 1)) && ((! var_1_36) ? ((! ((var_1_50 / var_1_22) <= var_1_42)) ? (var_1_59 == ((signed char) (var_1_51 - (64 - var_1_52)))) : 1) : (var_1_59 == ((signed char) ((((var_1_19) > (var_1_52)) ? (var_1_19) : (var_1_52))))))) && (var_1_24 ? ((var_1_10 < var_1_35) ? (var_1_60 == ((unsigned char) (! (var_1_82 && (var_1_31 || var_1_61))))) : (var_1_60 == ((unsigned char) ((var_1_52 < var_1_45) && ((var_1_20 != var_1_16) && var_1_31))))) : (var_1_60 == ((unsigned char) (! var_1_61))))) && ((last_1_var_1_72 < (last_1_var_1_84 + var_1_53)) ? ((last_1_var_1_21 || var_1_25) ? (((last_1_var_1_37 <= var_1_58) || (var_1_33 < last_1_var_1_75)) ? (var_1_62 == ((float) ((128.5f + var_1_11) - ((((var_1_10) < (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_10) : (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))))))) : 1) : (var_1_62 == ((float) (24.8f + 5.2f)))) : (((((((var_1_40) < (var_1_63)) ? (var_1_40) : (var_1_63))) - var_1_15) >= last_1_var_1_75) ? ((var_1_51 <= var_1_45) ? (var_1_62 == ((float) (var_1_11 - var_1_8))) : 1) : (((var_1_10 - (var_1_11 + var_1_64)) > (- last_1_var_1_37)) ? (var_1_62 == ((float) ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - var_1_65) + var_1_48))) : (var_1_62 == ((float) var_1_47)))))) && ((256u >= var_1_63) ? (var_1_66 == ((unsigned short int) ((64520 - (var_1_67 - var_1_22)) - var_1_68))) : ((! var_1_95) ? ((var_1_58 < var_1_9) ? ((var_1_28 == (var_1_103 + var_1_45)) ? (var_1_66 == ((unsigned short int) var_1_70)) : (var_1_66 == ((unsigned short int) (var_1_71 - ((((var_1_20) < (5)) ? (var_1_20) : (5))))))) : (var_1_66 == ((unsigned short int) ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) : (var_1_66 == ((unsigned short int) (var_1_71 - (var_1_52 + var_1_15))))))) && ((((var_1_84 / var_1_67) < var_1_41) || var_1_27) ? (var_1_72 == ((unsigned short int) (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) + var_1_67))) : (var_1_72 == ((unsigned short int) (var_1_67 + var_1_20))))) && (((((((var_1_64) < (var_1_57)) ? (var_1_64) : (var_1_57))) + var_1_8) <= var_1_10) ? (var_1_73 == ((signed char) (var_1_74 + var_1_52))) : (var_1_73 == ((signed char) (((((var_1_50) < (var_1_53)) ? (var_1_50) : (var_1_53))) + var_1_74))))) && ((((- last_1_var_1_1) / var_1_76) < (var_1_8 - (var_1_10 + var_1_64))) ? (((var_1_11 - ((((var_1_65) < (128.1)) ? (var_1_65) : (128.1)))) >= last_1_var_1_1) ? ((last_1_var_1_102 < (~ (var_1_67 * var_1_33))) ? (var_1_75 == ((unsigned long int) ((((last_1_var_1_66) > ((last_1_var_1_39 + var_1_52))) ? (last_1_var_1_66) : ((last_1_var_1_39 + var_1_52)))))) : 1) : (var_1_75 == ((unsigned long int) (last_1_var_1_75 + (((((var_1_77 - var_1_45)) > (var_1_68)) ? ((var_1_77 - var_1_45)) : (var_1_68))))))) : (((var_1_65 + last_1_var_1_94) == ((var_1_79 - var_1_11) - var_1_10)) ? (var_1_75 == ((unsigned long int) ((var_1_77 + var_1_80) - var_1_22))) : (var_1_75 == ((unsigned long int) ((((((((((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) < (var_1_77)) ? (((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) : (var_1_77)))) < (var_1_20)) ? (((((((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) < (var_1_77)) ? (((((var_1_15) < (var_1_71)) ? (var_1_15) : (var_1_71)))) : (var_1_77)))) : (var_1_20)))))))) && ((var_1_43 > (var_1_14 + var_1_72)) ? ((var_1_102 == (last_1_var_1_81 + var_1_51)) ? ((var_1_43 <= var_1_75) ? (var_1_81 == ((signed short int) (((((((last_1_var_1_81) < 0 ) ? -(last_1_var_1_81) : (last_1_var_1_81))) < 0 ) ? -((((last_1_var_1_81) < 0 ) ? -(last_1_var_1_81) : (last_1_var_1_81))) : ((((last_1_var_1_81) < 0 ) ? -(last_1_var_1_81) : (last_1_var_1_81))))))) : (var_1_81 == ((signed short int) ((((((var_1_45) < (var_1_22)) ? (var_1_45) : (var_1_22))) + (10000 - var_1_52)) - var_1_15)))) : 1) : 1)) && (var_1_25 ? (((- ((((last_1_var_1_37) < 0 ) ? -(last_1_var_1_37) : (last_1_var_1_37)))) < var_1_9) ? (var_1_82 == ((unsigned char) (! var_1_61))) : (var_1_82 == ((unsigned char) var_1_27))) : ((last_1_var_1_62 > ((((var_1_79) < 0 ) ? -(var_1_79) : (var_1_79)))) ? (var_1_82 == ((unsigned char) (last_1_var_1_60 && (last_1_var_1_98 && var_1_61)))) : 1))) && (last_1_var_1_36 ? ((128u <= ((var_1_63 - var_1_85) * last_1_var_1_75)) ? (var_1_84 == ((unsigned long int) (((((var_1_40) > (((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87))))) ? (var_1_40) : (((((var_1_87) < 0 ) ? -(var_1_87) : (var_1_87)))))) - (2052788344u - var_1_67)))) : (((var_1_70 % (var_1_63 - 256u)) == var_1_52) ? (var_1_84 == ((unsigned long int) ((var_1_80 + var_1_88) - (var_1_77 - ((((last_1_var_1_103) < (var_1_22)) ? (last_1_var_1_103) : (var_1_22))))))) : (var_1_84 == ((unsigned long int) ((last_1_var_1_103 + var_1_52) + var_1_20))))) : (var_1_84 == ((unsigned long int) (var_1_70 + var_1_20))))) && (var_1_23 ? ((var_1_41 >= (((((var_1_42) > (var_1_80)) ? (var_1_42) : (var_1_80))) + var_1_75)) ? (var_1_89 == ((float) var_1_47)) : ((((var_1_84 + var_1_43) * 4) > ((((var_1_75) < (var_1_39)) ? (var_1_75) : (var_1_39)))) ? (var_1_89 == ((float) ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - var_1_65) + var_1_47))) : (var_1_89 == ((float) (var_1_9 - var_1_11))))) : 1)) && (((var_1_15 ^ var_1_80) >= var_1_84) ? ((var_1_75 != -32) ? (var_1_92 == ((signed short int) ((((200) > (var_1_74)) ? (200) : (var_1_74))))) : (var_1_92 == ((signed short int) last_1_var_1_92))) : 1)) && ((((((var_1_20) < ((var_1_85 + var_1_68))) ? (var_1_20) : ((var_1_85 + var_1_68)))) >= var_1_39) ? (var_1_95 ? ((var_1_94 <= var_1_11) ? (var_1_93 == ((signed char) (var_1_50 + var_1_53))) : (var_1_93 == ((signed char) ((((var_1_52) < (var_1_51)) ? (var_1_52) : (var_1_51)))))) : (var_1_93 == ((signed char) var_1_19))) : (((-128 + (var_1_19 / -1)) < ((var_1_42 + var_1_44) * var_1_39)) ? (var_1_93 == ((signed char) ((((var_1_74) > (var_1_51)) ? (var_1_74) : (var_1_51))))) : (var_1_93 == ((signed char) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))))) && ((var_1_31 && var_1_95) ? ((var_1_34 <= var_1_13) ? (((var_1_71 - var_1_45) >= var_1_19) ? (var_1_94 == ((double) var_1_9)) : 1) : (var_1_94 == ((double) var_1_9))) : (var_1_94 == ((double) var_1_48)))) && (var_1_95 == ((unsigned char) 0))) && (var_1_96 == ((unsigned char) var_1_45))) && (var_1_97 == ((float) var_1_6))) && (last_1_var_1_98 ? (var_1_98 == ((unsigned char) var_1_61)) : 1)) && (var_1_36 ? (var_1_99 == ((unsigned char) 4)) : (var_1_99 == ((unsigned char) 8)))) && (var_1_60 ? (var_1_100 == ((signed char) var_1_51)) : (var_1_100 == ((signed char) var_1_52)))) && (var_1_36 ? (var_1_101 == ((signed char) var_1_52)) : (var_1_101 == ((signed char) var_1_51)))) && (var_1_102 == ((signed short int) -128))) && (var_1_25 ? (var_1_103 == ((unsigned short int) var_1_22)) : 1)) && (var_1_98 ? (var_1_104 == ((float) var_1_6)) : (var_1_104 == ((float) var_1_64)))) && (var_1_95 ? (var_1_105 == ((unsigned char) var_1_52)) : (var_1_105 == ((unsigned char) var_1_45)))) && ((var_1_85 < var_1_70) ? (((((((var_1_72) < (last_1_var_1_106)) ? (var_1_72) : (last_1_var_1_106))) > var_1_67) || var_1_82) ? ((var_1_64 > var_1_47) ? (var_1_106 == ((unsigned short int) var_1_20)) : 1) : 1) : (var_1_106 == ((unsigned short int) var_1_107)))
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
