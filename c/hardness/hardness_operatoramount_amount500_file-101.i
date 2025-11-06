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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
unsigned long int var_1_5 = 16;
unsigned long int var_1_6 = 3027753518;
signed char var_1_7 = 1;
double var_1_8 = 7.92;
double var_1_9 = 10.534;
double var_1_10 = 5.5;
double var_1_11 = 9.5;
double var_1_12 = 9.7;
signed char var_1_13 = 2;
signed char var_1_14 = 1;
signed char var_1_15 = 100;
signed char var_1_16 = 25;
signed char var_1_17 = 0;
double var_1_18 = 100000000.5;
double var_1_19 = 5.2;
double var_1_20 = 24.4;
double var_1_21 = 0.75;
signed long int var_1_22 = -256;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 40137;
unsigned short int var_1_27 = 128;
double var_1_28 = 7.25;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
signed long int var_1_33 = -32;
unsigned char var_1_34 = 8;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 25;
unsigned char var_1_37 = 1;
signed short int var_1_38 = 1;
unsigned short int var_1_39 = 500;
unsigned short int var_1_40 = 56510;
unsigned short int var_1_41 = 16;
unsigned short int var_1_42 = 16939;
unsigned short int var_1_43 = 25;
signed char var_1_44 = 64;
signed char var_1_46 = 4;
signed short int var_1_47 = 5;
double var_1_49 = 199.375;
double var_1_50 = 0.0;
double var_1_51 = 1000000000.1;
unsigned short int var_1_52 = 64;
unsigned char var_1_53 = 0;
double var_1_54 = 9.75;
double var_1_55 = 0.0;
double var_1_56 = 16.4;
float var_1_57 = 0.2;
double var_1_58 = 15.5;
unsigned char var_1_59 = 1;
signed long int var_1_60 = 128;
signed long int var_1_61 = -1;
unsigned long int var_1_62 = 4;
unsigned char var_1_63 = 10;
unsigned short int var_1_64 = 2;
unsigned short int var_1_65 = 49937;
signed short int var_1_66 = 5;
signed char var_1_67 = -2;
signed long int var_1_68 = -10;
unsigned short int var_1_69 = 1;
unsigned short int var_1_70 = 5;
signed long int var_1_71 = -8;
signed short int var_1_72 = 1;
signed short int var_1_73 = -100;
double var_1_74 = 127.2;
signed short int var_1_75 = -8;
unsigned short int var_1_76 = 4;
float var_1_77 = 4.2;
unsigned char var_1_78 = 25;
unsigned long int var_1_79 = 32;
unsigned char var_1_80 = 1;
signed char var_1_81 = -10;
float var_1_82 = 49.625;
float var_1_83 = 1.75;
unsigned char var_1_84 = 0;
unsigned char var_1_85 = 16;
unsigned char var_1_86 = 1;
float var_1_87 = 256.2;
signed long int var_1_88 = -16;
signed long int var_1_89 = 64;
signed short int var_1_90 = -32;
signed short int var_1_91 = 128;
float var_1_92 = 2.5;
float var_1_93 = 3.25;
float var_1_94 = 4.2;
signed long int var_1_95 = -16;
unsigned char var_1_96 = 0;
float var_1_97 = 49.75;
unsigned short int var_1_98 = 10;
signed short int var_1_99 = 5;
unsigned long int last_1_var_1_1 = 16;
signed long int last_1_var_1_22 = -256;
signed short int last_1_var_1_47 = 5;
signed long int last_1_var_1_68 = -10;
signed short int last_1_var_1_73 = -100;
unsigned short int last_1_var_1_76 = 4;
void initially(void) {
}
void step(void) {
 if (var_1_40 >= last_1_var_1_22) {
  var_1_49 = ((((((((var_1_20) < ((var_1_21 - 0.25))) ? (var_1_20) : ((var_1_21 - 0.25))))) > (var_1_19)) ? (((((var_1_20) < ((var_1_21 - 0.25))) ? (var_1_20) : ((var_1_21 - 0.25))))) : (var_1_19)));
 } else {
  if ((var_1_36 * last_1_var_1_76) > var_1_16) {
   var_1_49 = (var_1_21 - (var_1_50 - var_1_51));
  }
 }
 if (var_1_49 == var_1_10) {
  var_1_63 = (var_1_35 - (var_1_36 + var_1_37));
 }
 var_1_53 = (! ((last_1_var_1_1 != var_1_40) || var_1_31));
 if (var_1_53) {
  var_1_84 = var_1_25;
 } else {
  var_1_84 = var_1_32;
 }
 if (! var_1_30) {
  if ((var_1_9 - var_1_8) >= (var_1_10 - var_1_21)) {
   if (var_1_84) {
    var_1_38 = ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)));
   }
  } else {
   var_1_38 = var_1_36;
  }
 } else {
  var_1_38 = var_1_36;
 }
 if (var_1_30) {
  var_1_34 = ((((var_1_16) > ((((((128) < 0 ) ? -(128) : (128))) - var_1_15))) ? (var_1_16) : ((((((128) < 0 ) ? -(128) : (128))) - var_1_15))));
 } else {
  if (var_1_12 >= var_1_8) {
   var_1_34 = (var_1_35 - (var_1_16 + (var_1_36 + var_1_37)));
  }
 }
 var_1_39 = ((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) - var_1_41) - (var_1_42 - var_1_43));
 if (! var_1_30) {
  var_1_57 = (var_1_21 - 2.2f);
 } else {
  var_1_57 = (((((var_1_21) < (var_1_55)) ? (var_1_21) : (var_1_55))) - ((((var_1_50) > (var_1_56)) ? (var_1_50) : (var_1_56))));
 }
 var_1_59 = var_1_31;
 unsigned char stepLocal_15 = var_1_59;
 if (var_1_31 || stepLocal_15) {
  var_1_70 = (((((var_1_40) < (((((40575) < (var_1_65)) ? (40575) : (var_1_65))))) ? (var_1_40) : (((((40575) < (var_1_65)) ? (40575) : (var_1_65)))))) - var_1_36);
 }
 if (var_1_84) {
  var_1_72 = var_1_17;
 } else {
  var_1_72 = (var_1_17 - ((((var_1_16) < (var_1_39)) ? (var_1_16) : (var_1_39))));
 }
 var_1_85 = var_1_35;
 var_1_86 = var_1_16;
 var_1_87 = 4.9f;
 var_1_88 = var_1_46;
 var_1_90 = var_1_91;
 var_1_92 = var_1_56;
 var_1_93 = var_1_55;
 if (var_1_29) {
  var_1_95 = var_1_75;
 } else {
  var_1_95 = var_1_15;
 }
 var_1_96 = var_1_24;
 if (var_1_84) {
  var_1_97 = var_1_20;
 }
 signed char stepLocal_4 = var_1_16;
 if (var_1_6 >= stepLocal_4) {
  var_1_23 = (var_1_24 || (var_1_84 && var_1_25));
 } else {
  if (var_1_12 <= (var_1_10 / var_1_11)) {
   if (var_1_12 >= var_1_11) {
    if (var_1_8 > (var_1_12 / ((((var_1_11) < (var_1_28)) ? (var_1_11) : (var_1_28))))) {
     if (! var_1_24) {
      var_1_23 = var_1_24;
     } else {
      var_1_23 = (! var_1_29);
     }
    }
   }
  } else {
   var_1_23 = ((var_1_29 && (var_1_30 && var_1_31)) && var_1_32);
  }
 }
 if (var_1_23) {
  var_1_89 = var_1_17;
 }
 unsigned char stepLocal_2 = var_1_84;
 unsigned char stepLocal_1 = var_1_96;
 if ((var_1_11 < (var_1_9 + var_1_8)) || stepLocal_1) {
  if ((var_1_8 != var_1_10) && stepLocal_2) {
   var_1_18 = (var_1_19 + (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))));
  }
 } else {
  var_1_18 = (var_1_21 - 7.25);
 }
 if ((var_1_70 % -5) <= (var_1_35 / ((((var_1_15) < (5)) ? (var_1_15) : (5))))) {
  if (var_1_30) {
   var_1_52 = (((((var_1_42 + var_1_43)) > ((var_1_40 - var_1_17))) ? ((var_1_42 + var_1_43)) : ((var_1_40 - var_1_17))));
  } else {
   var_1_52 = ((((var_1_35) > (var_1_40)) ? (var_1_35) : (var_1_40)));
  }
 }
 if (var_1_96) {
  var_1_94 = var_1_56;
 } else {
  var_1_94 = var_1_55;
 }
 if ((var_1_89 >= (var_1_16 << last_1_var_1_68)) && var_1_24) {
  if (var_1_65 >= var_1_41) {
   var_1_68 = (((((((var_1_27) < ((var_1_52 - var_1_16))) ? (var_1_27) : ((var_1_52 - var_1_16)))) < 0 ) ? -((((var_1_27) < ((var_1_52 - var_1_16))) ? (var_1_27) : ((var_1_52 - var_1_16)))) : ((((var_1_27) < ((var_1_52 - var_1_16))) ? (var_1_27) : ((var_1_52 - var_1_16))))));
  } else {
   if (var_1_35 >= var_1_88) {
    var_1_68 = 32;
   } else {
    var_1_68 = (last_1_var_1_68 + var_1_36);
   }
  }
 } else {
  if ((var_1_14 - ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) != (128 - ((((var_1_37) < (var_1_88)) ? (var_1_37) : (var_1_88))))) {
   var_1_68 = ((((var_1_52 + var_1_27) < 0 ) ? -(var_1_52 + var_1_27) : (var_1_52 + var_1_27)));
  } else {
   if (var_1_27 < var_1_6) {
    if ((- var_1_17) >= (var_1_40 >> var_1_69)) {
     var_1_68 = ((((var_1_46) > (var_1_89)) ? (var_1_46) : (var_1_89)));
    } else {
     if (((var_1_17 & var_1_6) * var_1_37) < var_1_36) {
      var_1_68 = (var_1_40 + (((((var_1_69 - var_1_15)) > ((var_1_37 - var_1_26))) ? ((var_1_69 - var_1_15)) : ((var_1_37 - var_1_26)))));
     }
    }
   } else {
    var_1_68 = (((var_1_35 + var_1_88) - (var_1_37 + var_1_26)) + (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_40));
   }
  }
 }
 if (((var_1_36 % var_1_15) * (var_1_86 + var_1_16)) == var_1_68) {
  var_1_71 = (4 - var_1_68);
 }
 unsigned char stepLocal_3 = ! (var_1_23 || var_1_96);
 if ((var_1_71 > var_1_16) && stepLocal_3) {
  if (var_1_21 > (- 256.6)) {
   var_1_22 = var_1_17;
  }
 } else {
  var_1_22 = var_1_71;
 }
 if (var_1_96) {
  if (! var_1_31) {
   var_1_64 = ((var_1_42 + 16521) - var_1_41);
  } else {
   var_1_64 = (var_1_65 - (((((var_1_16 + var_1_37)) > (var_1_41)) ? ((var_1_16 + var_1_37)) : (var_1_41))));
  }
 } else {
  if (var_1_71 > ((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90)))) {
   var_1_64 = var_1_41;
  }
 }
 signed long int stepLocal_14 = var_1_22;
 if (var_1_41 <= stepLocal_14) {
  var_1_67 = ((((var_1_37) < ((var_1_16 + var_1_36))) ? (var_1_37) : ((var_1_16 + var_1_36))));
 }
 if (((~ var_1_22) / ((((var_1_69) < (var_1_15)) ? (var_1_69) : (var_1_15)))) > var_1_42) {
  var_1_77 = ((((var_1_19) > (var_1_50)) ? (var_1_19) : (var_1_50)));
 } else {
  var_1_77 = (var_1_56 + var_1_51);
 }
 if (var_1_59) {
  var_1_98 = var_1_71;
 } else {
  var_1_98 = var_1_63;
 }
 if (var_1_19 != (((((var_1_51) < (var_1_8)) ? (var_1_51) : (var_1_8))) - (var_1_56 + var_1_74))) {
  var_1_73 = (((((var_1_43) < (((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35))))) ? (var_1_43) : (((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35)))))) - var_1_68);
 } else {
  if (((var_1_10 / var_1_12) == (var_1_8 / var_1_11)) || ((var_1_53 && var_1_31) || var_1_30)) {
   var_1_73 = ((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35)));
  } else {
   if (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) > (var_1_26 + (var_1_46 * -8))) {
    var_1_73 = (((((var_1_68 + var_1_64)) < (var_1_46)) ? ((var_1_68 + var_1_64)) : (var_1_46)));
   } else {
    var_1_73 = ((((((var_1_75 + var_1_14)) < (var_1_68)) ? ((var_1_75 + var_1_14)) : (var_1_68))) + (2 + last_1_var_1_73));
   }
  }
 }
 signed long int stepLocal_11 = ((((var_1_15 - 32)) > (var_1_73)) ? ((var_1_15 - 32)) : (var_1_73));
 signed long int stepLocal_10 = 128;
 if (var_1_35 >= stepLocal_10) {
  if ((- var_1_49) == (64.4f / var_1_55)) {
   if (stepLocal_11 < ((var_1_35 + -5) / var_1_42)) {
    var_1_58 = ((((var_1_50) < (7.8)) ? (var_1_50) : (7.8)));
   }
  } else {
   var_1_58 = var_1_51;
  }
 }
 if ((((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - ((((3.2) < (var_1_10)) ? (3.2) : (var_1_10)))) < ((var_1_58 / var_1_11) / var_1_12)) {
  if (var_1_9 == (- ((((8.375) > (var_1_12)) ? (8.375) : (var_1_12))))) {
   if (var_1_53) {
    var_1_7 = var_1_13;
   } else {
    var_1_7 = 1;
   }
  } else {
   var_1_7 = (var_1_14 - (var_1_15 - var_1_16));
  }
 } else {
  var_1_7 = (var_1_16 - ((((var_1_15) > (var_1_17)) ? (var_1_15) : (var_1_17))));
 }
 if ((var_1_68 * var_1_65) >= var_1_27) {
  if (16 > ((((var_1_15) < ((4 / var_1_35))) ? (var_1_15) : ((4 / var_1_35))))) {
   if ((var_1_28 != var_1_58) && var_1_25) {
    var_1_81 = (var_1_69 + ((((var_1_36) > (var_1_16)) ? (var_1_36) : (var_1_16))));
   } else {
    var_1_81 = (var_1_36 + var_1_69);
   }
  } else {
   var_1_81 = var_1_13;
  }
 } else {
  if (var_1_21 <= (var_1_74 * var_1_8)) {
   var_1_81 = (2 - (var_1_15 - var_1_37));
  } else {
   var_1_81 = -4;
  }
 }
 if (var_1_58 <= (63.8 - (var_1_56 + var_1_74))) {
  var_1_83 = (var_1_56 + var_1_51);
 } else {
  var_1_83 = var_1_74;
 }
 var_1_33 = (((((((var_1_98) < 0 ) ? -(var_1_98) : (var_1_98))) < 0 ) ? -((((var_1_98) < 0 ) ? -(var_1_98) : (var_1_98))) : ((((var_1_98) < 0 ) ? -(var_1_98) : (var_1_98)))));
 signed long int stepLocal_16 = var_1_33 + var_1_38;
 if ((-8 + last_1_var_1_76) != stepLocal_16) {
  var_1_76 = var_1_35;
 } else {
  var_1_76 = ((((var_1_73) > (var_1_15)) ? (var_1_73) : (var_1_15)));
 }
 unsigned char stepLocal_0 = var_1_96;
 if (stepLocal_0 || var_1_53) {
  if ((- var_1_58) <= -0.033) {
   var_1_1 = (3824271162u - var_1_5);
  } else {
   var_1_1 = ((((128u) < ((var_1_6 - var_1_5))) ? (128u) : ((var_1_6 - var_1_5))));
  }
 }
 signed long int stepLocal_5 = 0;
 if ((var_1_8 - var_1_9) != var_1_18) {
  var_1_44 = (((((var_1_14) > (var_1_36)) ? (var_1_14) : (var_1_36))) - var_1_15);
 } else {
  if (stepLocal_5 <= ((((var_1_36) < (var_1_33)) ? (var_1_36) : (var_1_33)))) {
   var_1_44 = ((((var_1_14) > (((((var_1_36) < (var_1_16)) ? (var_1_36) : (var_1_16))))) ? (var_1_14) : (((((var_1_36) < (var_1_16)) ? (var_1_36) : (var_1_16))))));
  } else {
   var_1_44 = (var_1_46 - var_1_37);
  }
 }
 if (var_1_25) {
  if (var_1_1 <= (((((2591392793u) > (var_1_6)) ? (2591392793u) : (var_1_6))) - var_1_43)) {
   var_1_78 = var_1_36;
  }
 }
 unsigned char stepLocal_20 = var_1_35;
 if (stepLocal_20 > var_1_33) {
  var_1_82 = var_1_20;
 } else {
  if (var_1_8 <= ((((var_1_21) > (var_1_49)) ? (var_1_21) : (var_1_49)))) {
   var_1_82 = var_1_21;
  } else {
   var_1_82 = (4.4f + var_1_19);
  }
 }
 if ((((((var_1_65) < (var_1_26)) ? (var_1_65) : (var_1_26))) - var_1_98) < var_1_33) {
  var_1_99 = ((((var_1_75) > ((var_1_38 + -16))) ? (var_1_75) : ((var_1_38 + -16))));
 } else {
  if (var_1_25 && var_1_32) {
   var_1_99 = var_1_17;
  } else {
   var_1_99 = var_1_68;
  }
 }
 signed long int stepLocal_17 = var_1_89;
 if (var_1_55 < (- (var_1_50 * var_1_12))) {
  if (stepLocal_17 > var_1_99) {
   var_1_79 = (var_1_6 - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))));
  } else {
   var_1_79 = ((var_1_39 + var_1_17) + var_1_69);
  }
 } else {
  var_1_79 = ((((((((var_1_76) < (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))) ? (var_1_76) : (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))))) > (32u)) ? (((((var_1_76) < (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))) ? (var_1_76) : (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))))) : (32u)));
 }
 unsigned long int stepLocal_19 = var_1_79;
 unsigned char stepLocal_18 = var_1_24;
 if (stepLocal_18 || var_1_96) {
  if (var_1_26 == stepLocal_19) {
   var_1_80 = (! (var_1_30 && (var_1_23 || var_1_29)));
  } else {
   var_1_80 = (! (var_1_23 && var_1_25));
  }
 } else {
  var_1_80 = ((var_1_79 >= (var_1_40 % 256)) && var_1_24);
 }
 signed long int stepLocal_8 = var_1_37 + (var_1_38 + var_1_13);
 unsigned char stepLocal_7 = var_1_32;
 unsigned char stepLocal_6 = var_1_80;
 if (var_1_31) {
  if (stepLocal_8 >= (var_1_38 * last_1_var_1_47)) {
   var_1_47 = ((var_1_35 + var_1_15) + var_1_16);
  }
 } else {
  if (var_1_23 && stepLocal_7) {
   if (var_1_53) {
    if (stepLocal_6 && var_1_29) {
     var_1_47 = (var_1_17 - last_1_var_1_47);
    }
   } else {
    var_1_47 = (((var_1_17 - var_1_35) + var_1_46) + var_1_13);
   }
  } else {
   var_1_47 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  }
 }
 unsigned long int stepLocal_12 = var_1_79;
 if (var_1_59) {
  if (stepLocal_12 <= ((var_1_15 + var_1_52) * var_1_40)) {
   var_1_60 = (var_1_61 - var_1_17);
  } else {
   if (var_1_25) {
    var_1_60 = ((((((var_1_16) < (2)) ? (var_1_16) : (2))) - var_1_52) + (var_1_43 - var_1_40));
   }
  }
 }
 unsigned char stepLocal_13 = var_1_23;
 if (var_1_96 || stepLocal_13) {
  if (var_1_18 < var_1_55) {
   var_1_62 = var_1_60;
  }
 } else {
  var_1_62 = ((((var_1_17) > ((var_1_26 + var_1_35))) ? (var_1_17) : ((var_1_26 + var_1_35))));
 }
 if (var_1_65 > (- (var_1_15 & var_1_78))) {
  if (var_1_96) {
   var_1_66 = var_1_46;
  } else {
   var_1_66 = (var_1_13 + -256);
  }
 } else {
  if (! ((var_1_15 - var_1_37) < (var_1_68 * var_1_14))) {
   if (var_1_99 >= var_1_79) {
    var_1_66 = ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)));
   } else {
    var_1_66 = (var_1_16 + var_1_99);
   }
  } else {
   var_1_66 = ((((var_1_16 + var_1_14) < 0 ) ? -(var_1_16 + var_1_14) : (var_1_16 + var_1_14)));
  }
 }
 unsigned long int stepLocal_9 = var_1_79;
 if (var_1_53) {
  var_1_54 = (((((var_1_21 - var_1_51)) < ((var_1_50 - (var_1_55 - var_1_56)))) ? ((var_1_21 - var_1_51)) : ((var_1_50 - (var_1_55 - var_1_56)))));
 } else {
  if (stepLocal_9 != ((((var_1_62) > (var_1_15)) ? (var_1_62) : (var_1_15)))) {
   var_1_54 = (((((var_1_50 - var_1_51)) > (((var_1_55 - var_1_56) - 8.8))) ? ((var_1_50 - var_1_51)) : (((var_1_55 - var_1_56) - 8.8))));
  } else {
   var_1_54 = (var_1_21 - var_1_55);
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 2147483647);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65535);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 assume_abort_if_not(var_1_28 != 0.0F);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 31);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 49150);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 16383);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 16383);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 16383);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -1);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 4611686.018427383000e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= 4611686.018427383000e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854766000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427383000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_61 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_61 >= -1);
 assume_abort_if_not(var_1_61 <= 2147483646);
 var_1_65 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_65 >= 32767);
 assume_abort_if_not(var_1_65 <= 65534);
 var_1_69 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_69 >= 1);
 assume_abort_if_not(var_1_69 <= 15);
 var_1_74 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427388000e+12F && var_1_74 >= 1.0e-20F ));
 var_1_75 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_75 >= -8191);
 assume_abort_if_not(var_1_75 <= 8192);
 var_1_91 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_91 >= -32767);
 assume_abort_if_not(var_1_91 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_68 = var_1_68;
 last_1_var_1_73 = var_1_73;
 last_1_var_1_76 = var_1_76;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_96 || var_1_53) ? (((- var_1_58) <= -0.033) ? (var_1_1 == ((unsigned long int) (3824271162u - var_1_5))) : (var_1_1 == ((unsigned long int) ((((128u) < ((var_1_6 - var_1_5))) ? (128u) : ((var_1_6 - var_1_5))))))) : 1) && (((((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))) - ((((3.2) < (var_1_10)) ? (3.2) : (var_1_10)))) < ((var_1_58 / var_1_11) / var_1_12)) ? ((var_1_9 == (- ((((8.375) > (var_1_12)) ? (8.375) : (var_1_12))))) ? (var_1_53 ? (var_1_7 == ((signed char) var_1_13)) : (var_1_7 == ((signed char) 1))) : (var_1_7 == ((signed char) (var_1_14 - (var_1_15 - var_1_16))))) : (var_1_7 == ((signed char) (var_1_16 - ((((var_1_15) > (var_1_17)) ? (var_1_15) : (var_1_17)))))))) && (((var_1_11 < (var_1_9 + var_1_8)) || var_1_96) ? (((var_1_8 != var_1_10) && var_1_84) ? (var_1_18 == ((double) (var_1_19 + (((((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) < 0 ) ? -((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) : ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))))) : 1) : (var_1_18 == ((double) (var_1_21 - 7.25))))) && (((var_1_71 > var_1_16) && (! (var_1_23 || var_1_96))) ? ((var_1_21 > (- 256.6)) ? (var_1_22 == ((signed long int) var_1_17)) : 1) : (var_1_22 == ((signed long int) var_1_71)))) && ((var_1_6 >= var_1_16) ? (var_1_23 == ((unsigned char) (var_1_24 || (var_1_84 && var_1_25)))) : ((var_1_12 <= (var_1_10 / var_1_11)) ? ((var_1_12 >= var_1_11) ? ((var_1_8 > (var_1_12 / ((((var_1_11) < (var_1_28)) ? (var_1_11) : (var_1_28))))) ? ((! var_1_24) ? (var_1_23 == ((unsigned char) var_1_24)) : (var_1_23 == ((unsigned char) (! var_1_29)))) : 1) : 1) : (var_1_23 == ((unsigned char) ((var_1_29 && (var_1_30 && var_1_31)) && var_1_32)))))) && (var_1_33 == ((signed long int) (((((((var_1_98) < 0 ) ? -(var_1_98) : (var_1_98))) < 0 ) ? -((((var_1_98) < 0 ) ? -(var_1_98) : (var_1_98))) : ((((var_1_98) < 0 ) ? -(var_1_98) : (var_1_98)))))))) && (var_1_30 ? (var_1_34 == ((unsigned char) ((((var_1_16) > ((((((128) < 0 ) ? -(128) : (128))) - var_1_15))) ? (var_1_16) : ((((((128) < 0 ) ? -(128) : (128))) - var_1_15)))))) : ((var_1_12 >= var_1_8) ? (var_1_34 == ((unsigned char) (var_1_35 - (var_1_16 + (var_1_36 + var_1_37))))) : 1))) && ((! var_1_30) ? (((var_1_9 - var_1_8) >= (var_1_10 - var_1_21)) ? (var_1_84 ? (var_1_38 == ((signed short int) ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))) : 1) : (var_1_38 == ((signed short int) var_1_36))) : (var_1_38 == ((signed short int) var_1_36)))) && (var_1_39 == ((unsigned short int) ((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) - var_1_41) - (var_1_42 - var_1_43))))) && (((var_1_8 - var_1_9) != var_1_18) ? (var_1_44 == ((signed char) (((((var_1_14) > (var_1_36)) ? (var_1_14) : (var_1_36))) - var_1_15))) : ((0 <= ((((var_1_36) < (var_1_33)) ? (var_1_36) : (var_1_33)))) ? (var_1_44 == ((signed char) ((((var_1_14) > (((((var_1_36) < (var_1_16)) ? (var_1_36) : (var_1_16))))) ? (var_1_14) : (((((var_1_36) < (var_1_16)) ? (var_1_36) : (var_1_16)))))))) : (var_1_44 == ((signed char) (var_1_46 - var_1_37)))))) && (var_1_31 ? (((var_1_37 + (var_1_38 + var_1_13)) >= (var_1_38 * last_1_var_1_47)) ? (var_1_47 == ((signed short int) ((var_1_35 + var_1_15) + var_1_16))) : 1) : ((var_1_23 && var_1_32) ? (var_1_53 ? ((var_1_80 && var_1_29) ? (var_1_47 == ((signed short int) (var_1_17 - last_1_var_1_47))) : 1) : (var_1_47 == ((signed short int) (((var_1_17 - var_1_35) + var_1_46) + var_1_13)))) : (var_1_47 == ((signed short int) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))))) && ((var_1_40 >= last_1_var_1_22) ? (var_1_49 == ((double) ((((((((var_1_20) < ((var_1_21 - 0.25))) ? (var_1_20) : ((var_1_21 - 0.25))))) > (var_1_19)) ? (((((var_1_20) < ((var_1_21 - 0.25))) ? (var_1_20) : ((var_1_21 - 0.25))))) : (var_1_19))))) : (((var_1_36 * last_1_var_1_76) > var_1_16) ? (var_1_49 == ((double) (var_1_21 - (var_1_50 - var_1_51)))) : 1))) && (((var_1_70 % -5) <= (var_1_35 / ((((var_1_15) < (5)) ? (var_1_15) : (5))))) ? (var_1_30 ? (var_1_52 == ((unsigned short int) (((((var_1_42 + var_1_43)) > ((var_1_40 - var_1_17))) ? ((var_1_42 + var_1_43)) : ((var_1_40 - var_1_17)))))) : (var_1_52 == ((unsigned short int) ((((var_1_35) > (var_1_40)) ? (var_1_35) : (var_1_40)))))) : 1)) && (var_1_53 == ((unsigned char) (! ((last_1_var_1_1 != var_1_40) || var_1_31))))) && (var_1_53 ? (var_1_54 == ((double) (((((var_1_21 - var_1_51)) < ((var_1_50 - (var_1_55 - var_1_56)))) ? ((var_1_21 - var_1_51)) : ((var_1_50 - (var_1_55 - var_1_56))))))) : ((var_1_79 != ((((var_1_62) > (var_1_15)) ? (var_1_62) : (var_1_15)))) ? (var_1_54 == ((double) (((((var_1_50 - var_1_51)) > (((var_1_55 - var_1_56) - 8.8))) ? ((var_1_50 - var_1_51)) : (((var_1_55 - var_1_56) - 8.8)))))) : (var_1_54 == ((double) (var_1_21 - var_1_55)))))) && ((! var_1_30) ? (var_1_57 == ((float) (var_1_21 - 2.2f))) : (var_1_57 == ((float) (((((var_1_21) < (var_1_55)) ? (var_1_21) : (var_1_55))) - ((((var_1_50) > (var_1_56)) ? (var_1_50) : (var_1_56)))))))) && ((var_1_35 >= 128) ? (((- var_1_49) == (64.4f / var_1_55)) ? (((((((var_1_15 - 32)) > (var_1_73)) ? ((var_1_15 - 32)) : (var_1_73))) < ((var_1_35 + -5) / var_1_42)) ? (var_1_58 == ((double) ((((var_1_50) < (7.8)) ? (var_1_50) : (7.8))))) : 1) : (var_1_58 == ((double) var_1_51))) : 1)) && (var_1_59 == ((unsigned char) var_1_31))) && (var_1_59 ? ((var_1_79 <= ((var_1_15 + var_1_52) * var_1_40)) ? (var_1_60 == ((signed long int) (var_1_61 - var_1_17))) : (var_1_25 ? (var_1_60 == ((signed long int) ((((((var_1_16) < (2)) ? (var_1_16) : (2))) - var_1_52) + (var_1_43 - var_1_40)))) : 1)) : 1)) && ((var_1_96 || var_1_23) ? ((var_1_18 < var_1_55) ? (var_1_62 == ((unsigned long int) var_1_60)) : 1) : (var_1_62 == ((unsigned long int) ((((var_1_17) > ((var_1_26 + var_1_35))) ? (var_1_17) : ((var_1_26 + var_1_35)))))))) && ((var_1_49 == var_1_10) ? (var_1_63 == ((unsigned char) (var_1_35 - (var_1_36 + var_1_37)))) : 1)) && (var_1_96 ? ((! var_1_31) ? (var_1_64 == ((unsigned short int) ((var_1_42 + 16521) - var_1_41))) : (var_1_64 == ((unsigned short int) (var_1_65 - (((((var_1_16 + var_1_37)) > (var_1_41)) ? ((var_1_16 + var_1_37)) : (var_1_41))))))) : ((var_1_71 > ((((var_1_90) < 0 ) ? -(var_1_90) : (var_1_90)))) ? (var_1_64 == ((unsigned short int) var_1_41)) : 1))) && ((var_1_65 > (- (var_1_15 & var_1_78))) ? (var_1_96 ? (var_1_66 == ((signed short int) var_1_46)) : (var_1_66 == ((signed short int) (var_1_13 + -256)))) : ((! ((var_1_15 - var_1_37) < (var_1_68 * var_1_14))) ? ((var_1_99 >= var_1_79) ? (var_1_66 == ((signed short int) ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))) : (var_1_66 == ((signed short int) (var_1_16 + var_1_99)))) : (var_1_66 == ((signed short int) ((((var_1_16 + var_1_14) < 0 ) ? -(var_1_16 + var_1_14) : (var_1_16 + var_1_14)))))))) && ((var_1_41 <= var_1_22) ? (var_1_67 == ((signed char) ((((var_1_37) < ((var_1_16 + var_1_36))) ? (var_1_37) : ((var_1_16 + var_1_36)))))) : 1)) && (((var_1_89 >= (var_1_16 << last_1_var_1_68)) && var_1_24) ? ((var_1_65 >= var_1_41) ? (var_1_68 == ((signed long int) (((((((var_1_27) < ((var_1_52 - var_1_16))) ? (var_1_27) : ((var_1_52 - var_1_16)))) < 0 ) ? -((((var_1_27) < ((var_1_52 - var_1_16))) ? (var_1_27) : ((var_1_52 - var_1_16)))) : ((((var_1_27) < ((var_1_52 - var_1_16))) ? (var_1_27) : ((var_1_52 - var_1_16)))))))) : ((var_1_35 >= var_1_88) ? (var_1_68 == ((signed long int) 32)) : (var_1_68 == ((signed long int) (last_1_var_1_68 + var_1_36))))) : (((var_1_14 - ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) != (128 - ((((var_1_37) < (var_1_88)) ? (var_1_37) : (var_1_88))))) ? (var_1_68 == ((signed long int) ((((var_1_52 + var_1_27) < 0 ) ? -(var_1_52 + var_1_27) : (var_1_52 + var_1_27))))) : ((var_1_27 < var_1_6) ? (((- var_1_17) >= (var_1_40 >> var_1_69)) ? (var_1_68 == ((signed long int) ((((var_1_46) > (var_1_89)) ? (var_1_46) : (var_1_89))))) : ((((var_1_17 & var_1_6) * var_1_37) < var_1_36) ? (var_1_68 == ((signed long int) (var_1_40 + (((((var_1_69 - var_1_15)) > ((var_1_37 - var_1_26))) ? ((var_1_69 - var_1_15)) : ((var_1_37 - var_1_26))))))) : 1)) : (var_1_68 == ((signed long int) (((var_1_35 + var_1_88) - (var_1_37 + var_1_26)) + (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - var_1_40)))))))) && ((var_1_31 || var_1_59) ? (var_1_70 == ((unsigned short int) (((((var_1_40) < (((((40575) < (var_1_65)) ? (40575) : (var_1_65))))) ? (var_1_40) : (((((40575) < (var_1_65)) ? (40575) : (var_1_65)))))) - var_1_36))) : 1)) && ((((var_1_36 % var_1_15) * (var_1_86 + var_1_16)) == var_1_68) ? (var_1_71 == ((signed long int) (4 - var_1_68))) : 1)) && (var_1_84 ? (var_1_72 == ((signed short int) var_1_17)) : (var_1_72 == ((signed short int) (var_1_17 - ((((var_1_16) < (var_1_39)) ? (var_1_16) : (var_1_39)))))))) && ((var_1_19 != (((((var_1_51) < (var_1_8)) ? (var_1_51) : (var_1_8))) - (var_1_56 + var_1_74))) ? (var_1_73 == ((signed short int) (((((var_1_43) < (((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35))))) ? (var_1_43) : (((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35)))))) - var_1_68))) : ((((var_1_10 / var_1_12) == (var_1_8 / var_1_11)) || ((var_1_53 && var_1_31) || var_1_30)) ? (var_1_73 == ((signed short int) ((((var_1_17) < (var_1_35)) ? (var_1_17) : (var_1_35))))) : ((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) > (var_1_26 + (var_1_46 * -8))) ? (var_1_73 == ((signed short int) (((((var_1_68 + var_1_64)) < (var_1_46)) ? ((var_1_68 + var_1_64)) : (var_1_46))))) : (var_1_73 == ((signed short int) ((((((var_1_75 + var_1_14)) < (var_1_68)) ? ((var_1_75 + var_1_14)) : (var_1_68))) + (2 + last_1_var_1_73)))))))) && (((-8 + last_1_var_1_76) != (var_1_33 + var_1_38)) ? (var_1_76 == ((unsigned short int) var_1_35)) : (var_1_76 == ((unsigned short int) ((((var_1_73) > (var_1_15)) ? (var_1_73) : (var_1_15))))))) && ((((~ var_1_22) / ((((var_1_69) < (var_1_15)) ? (var_1_69) : (var_1_15)))) > var_1_42) ? (var_1_77 == ((float) ((((var_1_19) > (var_1_50)) ? (var_1_19) : (var_1_50))))) : (var_1_77 == ((float) (var_1_56 + var_1_51))))) && (var_1_25 ? ((var_1_1 <= (((((2591392793u) > (var_1_6)) ? (2591392793u) : (var_1_6))) - var_1_43)) ? (var_1_78 == ((unsigned char) var_1_36)) : 1) : 1)) && ((var_1_55 < (- (var_1_50 * var_1_12))) ? ((var_1_89 > var_1_99) ? (var_1_79 == ((unsigned long int) (var_1_6 - ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))) : (var_1_79 == ((unsigned long int) ((var_1_39 + var_1_17) + var_1_69)))) : (var_1_79 == ((unsigned long int) ((((((((var_1_76) < (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))) ? (var_1_76) : (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))))) > (32u)) ? (((((var_1_76) < (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))) ? (var_1_76) : (((((var_1_69) < (var_1_41)) ? (var_1_69) : (var_1_41))))))) : (32u))))))) && ((var_1_24 || var_1_96) ? ((var_1_26 == var_1_79) ? (var_1_80 == ((unsigned char) (! (var_1_30 && (var_1_23 || var_1_29))))) : (var_1_80 == ((unsigned char) (! (var_1_23 && var_1_25))))) : (var_1_80 == ((unsigned char) ((var_1_79 >= (var_1_40 % 256)) && var_1_24))))) && (((var_1_68 * var_1_65) >= var_1_27) ? ((16 > ((((var_1_15) < ((4 / var_1_35))) ? (var_1_15) : ((4 / var_1_35))))) ? (((var_1_28 != var_1_58) && var_1_25) ? (var_1_81 == ((signed char) (var_1_69 + ((((var_1_36) > (var_1_16)) ? (var_1_36) : (var_1_16)))))) : (var_1_81 == ((signed char) (var_1_36 + var_1_69)))) : (var_1_81 == ((signed char) var_1_13))) : ((var_1_21 <= (var_1_74 * var_1_8)) ? (var_1_81 == ((signed char) (2 - (var_1_15 - var_1_37)))) : (var_1_81 == ((signed char) -4))))) && ((var_1_35 > var_1_33) ? (var_1_82 == ((float) var_1_20)) : ((var_1_8 <= ((((var_1_21) > (var_1_49)) ? (var_1_21) : (var_1_49)))) ? (var_1_82 == ((float) var_1_21)) : (var_1_82 == ((float) (4.4f + var_1_19)))))) && ((var_1_58 <= (63.8 - (var_1_56 + var_1_74))) ? (var_1_83 == ((float) (var_1_56 + var_1_51))) : (var_1_83 == ((float) var_1_74)))) && (var_1_53 ? (var_1_84 == ((unsigned char) var_1_25)) : (var_1_84 == ((unsigned char) var_1_32)))) && (var_1_85 == ((unsigned char) var_1_35))) && (var_1_86 == ((unsigned char) var_1_16))) && (var_1_87 == ((float) 4.9f))) && (var_1_88 == ((signed long int) var_1_46))) && (var_1_23 ? (var_1_89 == ((signed long int) var_1_17)) : 1)) && (var_1_90 == ((signed short int) var_1_91))) && (var_1_92 == ((float) var_1_56))) && (var_1_93 == ((float) var_1_55))) && (var_1_96 ? (var_1_94 == ((float) var_1_56)) : (var_1_94 == ((float) var_1_55)))) && (var_1_29 ? (var_1_95 == ((signed long int) var_1_75)) : (var_1_95 == ((signed long int) var_1_15)))) && (var_1_96 == ((unsigned char) var_1_24))) && (var_1_84 ? (var_1_97 == ((float) var_1_20)) : 1)) && (var_1_59 ? (var_1_98 == ((unsigned short int) var_1_71)) : (var_1_98 == ((unsigned short int) var_1_63)))) && (((((((var_1_65) < (var_1_26)) ? (var_1_65) : (var_1_26))) - var_1_98) < var_1_33) ? (var_1_99 == ((signed short int) ((((var_1_75) > ((var_1_38 + -16))) ? (var_1_75) : ((var_1_38 + -16)))))) : ((var_1_25 && var_1_32) ? (var_1_99 == ((signed short int) var_1_17)) : (var_1_99 == ((signed short int) var_1_68))))
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
