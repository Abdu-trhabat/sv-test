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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch81PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 10;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned long int var_1_10 = 0;
unsigned short int var_1_11 = 4;
unsigned short int var_1_12 = 54828;
unsigned short int var_1_13 = 61894;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_15 = 10000;
signed short int var_1_16 = 0;
signed char var_1_17 = 32;
signed char var_1_18 = 64;
signed char var_1_19 = 10;
signed char var_1_20 = 8;
signed char var_1_21 = 5;
signed char var_1_22 = 2;
signed char var_1_23 = 64;
signed long int var_1_24 = -5;
unsigned short int var_1_25 = 8;
unsigned char var_1_26 = 0;
unsigned short int var_1_27 = 2;
unsigned short int var_1_28 = 4;
unsigned short int var_1_29 = 0;
unsigned short int var_1_30 = 45797;
unsigned short int var_1_31 = 2;
unsigned char var_1_32 = 16;
unsigned char var_1_33 = 100;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 1;
float var_1_36 = 5.25;
float var_1_37 = 15.238;
float var_1_38 = 24.5;
float var_1_39 = 0.5;
float var_1_40 = 3.5;
float var_1_41 = 4.15;
unsigned char var_1_42 = 1;
float var_1_43 = 128.75;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
signed short int var_1_47 = 4;
unsigned short int var_1_48 = 10;
unsigned short int var_1_49 = 18374;
float var_1_50 = 128.75;
unsigned long int var_1_51 = 10;
float var_1_52 = 32.3;
float var_1_53 = -0.4;
unsigned char var_1_54 = 2;
unsigned short int var_1_55 = 2;
signed char var_1_56 = -5;
unsigned short int var_1_57 = 16;
unsigned short int var_1_58 = 200;
signed char var_1_59 = -8;
signed char var_1_60 = -4;
unsigned char var_1_61 = 25;
unsigned char var_1_62 = 128;
unsigned char var_1_63 = 100;
signed long int var_1_64 = -64;
unsigned char var_1_65 = 0;
unsigned long int var_1_66 = 3515112314;
unsigned long int var_1_67 = 100000000;
unsigned char var_1_68 = 10;
unsigned char var_1_69 = 1;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 0;
signed short int var_1_73 = 256;
double var_1_74 = 10.75;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 5;
unsigned char var_1_77 = 0;
unsigned short int var_1_78 = 2;
unsigned short int var_1_79 = 8;
signed char var_1_80 = -4;
signed char var_1_81 = -64;
signed long int var_1_82 = 16;
unsigned char last_1_var_1_1 = 5;
unsigned char last_1_var_1_7 = 10;
unsigned short int last_1_var_1_11 = 4;
signed char last_1_var_1_17 = 32;
void initially(void) {
}
void step(void) {
 if (var_1_26) {
  var_1_25 = ((((((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) > (var_1_29)) ? (((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) : (var_1_29)));
 } else {
  var_1_25 = ((((var_1_28) > ((var_1_30 - var_1_31))) ? (var_1_28) : ((var_1_30 - var_1_31))));
 }
 if (! (var_1_28 > (25 % var_1_30))) {
  var_1_32 = (((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) < 0 ) ? -((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) : ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))));
 } else {
  var_1_32 = ((64 - var_1_34) + var_1_35);
 }
 if (var_1_29 != var_1_28) {
  var_1_36 = ((((var_1_37) > (((((((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))) < (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))) ? (((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))) : (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41)))))))) ? (var_1_37) : (((((((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))) < (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41))))) ? (((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39)))) : (((((var_1_40) > (var_1_41)) ? (var_1_40) : (var_1_41)))))))));
 }
 if (var_1_29 < var_1_25) {
  if (var_1_39 <= (((((var_1_40 * var_1_41)) > ((var_1_43 - 200.4f))) ? ((var_1_40 * var_1_41)) : ((var_1_43 - 200.4f))))) {
   if ((var_1_35 * var_1_33) < (var_1_31 + var_1_34)) {
    var_1_42 = (! (var_1_26 && var_1_44));
   }
  } else {
   var_1_42 = ((! (! var_1_45)) && ((var_1_30 < var_1_33) || var_1_46));
  }
 }
 if (var_1_26) {
  var_1_47 = ((((var_1_35 + var_1_34) < 0 ) ? -(var_1_35 + var_1_34) : (var_1_35 + var_1_34)));
 }
 if (var_1_41 > var_1_40) {
  if (var_1_27 <= ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) {
   var_1_48 = (var_1_31 + (var_1_49 - var_1_34));
  }
 }
 if ((var_1_30 + var_1_51) >= var_1_35) {
  var_1_50 = (var_1_52 + var_1_53);
 } else {
  if (! (var_1_41 < (var_1_38 + var_1_52))) {
   var_1_50 = var_1_38;
  }
 }
 if (var_1_51 >= var_1_25) {
  var_1_54 = (var_1_34 + 10);
 }
 if (var_1_56 > ((((var_1_34) < (var_1_28)) ? (var_1_34) : (var_1_28)))) {
  if (var_1_36 > (var_1_39 + 9.999999999925E10f)) {
   var_1_55 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  }
 }
 if (((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) > (var_1_54)) ? (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) : (var_1_54))) <= var_1_32) {
  var_1_57 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 } else {
  if (var_1_31 >= var_1_55) {
   if (1.0000000000000025E14 > var_1_40) {
    var_1_57 = (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) - var_1_33);
   }
  } else {
   var_1_57 = ((((((((2) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (2) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))))) > (4)) ? (((((2) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (2) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))))) : (4)));
  }
 }
 if (var_1_26) {
  if (var_1_46) {
   if (var_1_28 >= ((((var_1_51) > (var_1_30)) ? (var_1_51) : (var_1_30)))) {
    var_1_58 = (var_1_30 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))));
   } else {
    var_1_58 = (((((var_1_35 + ((((var_1_49) < (var_1_54)) ? (var_1_49) : (var_1_54))))) < (var_1_27)) ? ((var_1_35 + ((((var_1_49) < (var_1_54)) ? (var_1_49) : (var_1_54))))) : (var_1_27)));
   }
  } else {
   var_1_58 = 10;
  }
 }
 if (0 < var_1_29) {
  var_1_59 = ((((((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) < 0 ) ? -(((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) : (((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) < 0 ) ? -((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) : ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))));
 } else {
  var_1_59 = ((((var_1_34) > (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))))) ? (var_1_34) : (((((var_1_60) < 0 ) ? -(var_1_60) : (var_1_60))))));
 }
 if (! (var_1_36 < var_1_37)) {
  var_1_61 = (var_1_62 - var_1_35);
 } else {
  var_1_61 = (var_1_62 - ((((16) > ((var_1_63 - var_1_34))) ? (16) : ((var_1_63 - var_1_34)))));
 }
 if (var_1_53 != var_1_39) {
  if (var_1_32 <= var_1_55) {
   if (var_1_33 <= ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))) {
    var_1_64 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
   }
  } else {
   var_1_64 = var_1_58;
  }
 }
 if (var_1_39 != var_1_41) {
  if ((var_1_66 - var_1_55) >= (var_1_25 * (var_1_64 >> var_1_56))) {
   if (var_1_42) {
    if (var_1_64 < ((((var_1_56) < (var_1_47)) ? (var_1_56) : (var_1_47)))) {
     var_1_65 = (var_1_46 || var_1_45);
    }
   } else {
    var_1_65 = (var_1_44 || var_1_46);
   }
  }
 }
 if ((- ((((var_1_39) < (var_1_50)) ? (var_1_39) : (var_1_50)))) >= (- var_1_52)) {
  var_1_67 = 10u;
 } else {
  if (var_1_61 <= var_1_34) {
   var_1_67 = 0u;
  }
 }
 if (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62))) >= -200) {
  if (var_1_48 > ((((var_1_34) > (((((var_1_47) > (var_1_63)) ? (var_1_47) : (var_1_63))))) ? (var_1_34) : (((((var_1_47) > (var_1_63)) ? (var_1_47) : (var_1_63))))))) {
   if ((var_1_51 * var_1_31) == (var_1_29 >> var_1_28)) {
    if (var_1_34 <= var_1_27) {
     var_1_68 = ((((((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) < (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) ? (((((var_1_62) < 0 ) ? -(var_1_62) : (var_1_62)))) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))));
    }
   }
  }
 }
 if (var_1_65) {
  if (var_1_56 < ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) {
   var_1_69 = (var_1_46 && (var_1_45 && var_1_71));
  } else {
   if (((((8.75f) < 0 ) ? -(8.75f) : (8.75f))) <= var_1_39) {
    var_1_69 = var_1_44;
   } else {
    var_1_69 = (var_1_45 || (var_1_46 && (var_1_42 || var_1_71)));
   }
  }
 } else {
  if ((((((var_1_55) > (var_1_28)) ? (var_1_55) : (var_1_28))) < var_1_63) || var_1_44) {
   var_1_69 = (var_1_71 || ((var_1_58 > var_1_33) || var_1_45));
  } else {
   var_1_69 = var_1_72;
  }
 }
 if (var_1_49 >= (var_1_63 >> var_1_35)) {
  if (var_1_44) {
   var_1_73 = (((((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) < 0 ) ? -((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56))) : ((((var_1_56) < 0 ) ? -(var_1_56) : (var_1_56)))));
  } else {
   var_1_73 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
  }
 } else {
  var_1_73 = var_1_62;
 }
 if (var_1_32 <= ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) {
  if (var_1_56 >= var_1_58) {
   var_1_74 = (var_1_53 + var_1_52);
  } else {
   var_1_74 = (var_1_53 + var_1_52);
  }
 }
 if (var_1_30 <= var_1_32) {
  var_1_75 = ((((((100) < 0 ) ? -(100) : (100))) - var_1_34) + ((var_1_76 + 32) + var_1_77));
 } else {
  var_1_75 = ((((((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) < (var_1_77)) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : (var_1_77)))) > (var_1_33)) ? (((((((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) < (var_1_77)) ? (((((var_1_63) < 0 ) ? -(var_1_63) : (var_1_63)))) : (var_1_77)))) : (var_1_33)));
 }
 if (var_1_44) {
  var_1_78 = var_1_27;
 }
 if (var_1_69) {
  var_1_79 = var_1_30;
 }
 if (var_1_65) {
  var_1_80 = var_1_77;
 } else {
  var_1_80 = var_1_77;
 }
 if (var_1_57 >= var_1_67) {
  var_1_81 = (var_1_76 + ((((var_1_77) < 0 ) ? -(var_1_77) : (var_1_77))));
 }
 if (((var_1_76 >= var_1_75) && var_1_46) && var_1_71) {
  if (var_1_62 > var_1_51) {
   var_1_82 = var_1_47;
  }
 } else {
  var_1_82 = var_1_48;
 }
 var_1_16 = (last_1_var_1_17 - 1);
 unsigned char stepLocal_2 = var_1_8;
 unsigned char stepLocal_1 = var_1_8;
 if (((var_1_6 / var_1_5) != ((((var_1_16) < (last_1_var_1_7)) ? (var_1_16) : (last_1_var_1_7)))) && stepLocal_1) {
  var_1_7 = var_1_5;
 } else {
  if ((last_1_var_1_7 > var_1_5) || stepLocal_2) {
   var_1_7 = var_1_5;
  } else {
   var_1_7 = var_1_6;
  }
 }
 if (var_1_16 > ((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5)))) {
  var_1_17 = (var_1_18 - var_1_19);
 } else {
  var_1_17 = (var_1_20 - (var_1_21 + var_1_22));
 }
 signed long int stepLocal_0 = var_1_7 + var_1_16;
 if (last_1_var_1_1 != stepLocal_0) {
  var_1_1 = (var_1_5 - ((((0) < (var_1_6)) ? (0) : (var_1_6))));
 }
 if (! var_1_9) {
  var_1_10 = ((((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5)));
 }
 if (var_1_8) {
  var_1_11 = (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - ((var_1_14 + var_1_15) - last_1_var_1_11));
 }
 var_1_24 = var_1_12;
 if (! ((var_1_13 & var_1_7) != var_1_24)) {
  var_1_23 = ((((var_1_20) < ((((((var_1_21 + -4)) < (var_1_22)) ? ((var_1_21 + -4)) : (var_1_22))))) ? (var_1_20) : ((((((var_1_21 + -4)) < (var_1_22)) ? ((var_1_21 + -4)) : (var_1_22))))));
 } else {
  if (! var_1_8) {
   var_1_23 = (var_1_22 + var_1_21);
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 8191);
 assume_abort_if_not(var_1_14 <= 16384);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 8192);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 32767);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 16383);
 assume_abort_if_not(var_1_49 <= 32767);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 4294967295);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -461168.6018427382800e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -128);
 assume_abort_if_not(var_1_56 <= 127);
 var_1_60 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_60 >= -126);
 assume_abort_if_not(var_1_60 <= 126);
 var_1_62 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_62 >= 127);
 assume_abort_if_not(var_1_62 <= 254);
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 63);
 assume_abort_if_not(var_1_63 <= 127);
 var_1_66 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_66 >= 2147483647);
 assume_abort_if_not(var_1_66 <= 4294967295);
 var_1_71 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_71 >= 1);
 assume_abort_if_not(var_1_71 <= 1);
 var_1_72 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_72 >= 0);
 assume_abort_if_not(var_1_72 <= 0);
 var_1_76 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_76 >= 0);
 assume_abort_if_not(var_1_76 <= 32);
 var_1_77 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_77 >= 0);
 assume_abort_if_not(var_1_77 <= 63);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_17 = var_1_17;
}
int property() {
 return ((((((((last_1_var_1_1 != (var_1_7 + var_1_16)) ? (var_1_1 == ((unsigned char) (var_1_5 - ((((0) < (var_1_6)) ? (0) : (var_1_6)))))) : 1) && ((((var_1_6 / var_1_5) != ((((var_1_16) < (last_1_var_1_7)) ? (var_1_16) : (last_1_var_1_7)))) && var_1_8) ? (var_1_7 == ((unsigned char) var_1_5)) : (((last_1_var_1_7 > var_1_5) || var_1_8) ? (var_1_7 == ((unsigned char) var_1_5)) : (var_1_7 == ((unsigned char) var_1_6))))) && ((! var_1_9) ? (var_1_10 == ((unsigned long int) ((((var_1_1) < (var_1_5)) ? (var_1_1) : (var_1_5))))) : 1)) && (var_1_8 ? (var_1_11 == ((unsigned short int) (((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))) - ((var_1_14 + var_1_15) - last_1_var_1_11)))) : 1)) && (var_1_16 == ((signed short int) (last_1_var_1_17 - 1)))) && ((var_1_16 > ((((var_1_7) > (var_1_5)) ? (var_1_7) : (var_1_5)))) ? (var_1_17 == ((signed char) (var_1_18 - var_1_19))) : (var_1_17 == ((signed char) (var_1_20 - (var_1_21 + var_1_22)))))) && ((! ((var_1_13 & var_1_7) != var_1_24)) ? (var_1_23 == ((signed char) ((((var_1_20) < ((((((var_1_21 + -4)) < (var_1_22)) ? ((var_1_21 + -4)) : (var_1_22))))) ? (var_1_20) : ((((((var_1_21 + -4)) < (var_1_22)) ? ((var_1_21 + -4)) : (var_1_22)))))))) : ((! var_1_8) ? (var_1_23 == ((signed char) (var_1_22 + var_1_21))) : 1))) && (var_1_24 == ((signed long int) var_1_12))
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
