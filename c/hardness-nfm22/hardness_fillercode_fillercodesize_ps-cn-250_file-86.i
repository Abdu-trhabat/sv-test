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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;
signed char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 50;
signed char var_1_27 = -1;
signed char var_1_28 = 2;
signed char var_1_29 = 5;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 8;
unsigned long int var_1_32 = 1;
signed char var_1_33 = 32;
signed char var_1_34 = 32;
signed char var_1_35 = 25;
unsigned char var_1_36 = 0;
float var_1_37 = 5.35;
unsigned short int var_1_38 = 4;
float var_1_39 = 500.8;
unsigned short int var_1_40 = 58652;
float var_1_41 = 1000000.375;
float var_1_42 = 3.75;
signed short int var_1_43 = -64;
signed long int var_1_44 = 1;
unsigned long int var_1_45 = 32;
signed short int var_1_46 = 0;
unsigned char var_1_47 = 64;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
float var_1_51 = 1.8;
signed long int var_1_52 = -1;
float var_1_53 = 32.2;
signed char var_1_54 = -100;
signed char var_1_55 = -10;
signed char var_1_56 = -2;
unsigned short int var_1_57 = 25;
signed char var_1_58 = 2;
signed char var_1_59 = -4;
unsigned char var_1_60 = 5;
signed long int var_1_61 = 2;
signed short int var_1_62 = 256;
unsigned long int var_1_63 = 10;
unsigned long int var_1_64 = 1819782138;
unsigned long int var_1_65 = 1380585487;
double var_1_66 = 9.5;
double var_1_67 = 255.25;
signed char var_1_68 = 32;
unsigned short int var_1_69 = 5;
unsigned short int var_1_70 = 5;
unsigned short int var_1_71 = 64;
unsigned short int var_1_72 = 32776;
unsigned short int var_1_73 = 55176;
double var_1_74 = 999999999999999.5;
double var_1_75 = 15.75;
double var_1_76 = 31.5;
signed short int var_1_77 = -64;
unsigned long int var_1_78 = 32;
float var_1_79 = 15.25;
signed long int var_1_80 = -5;
signed short int var_1_81 = 50;
signed char var_1_82 = -10;
float var_1_83 = 5.125;
unsigned short int last_1_var_1_1 = 128;
unsigned char last_1_var_1_6 = 0;
signed long int last_1_var_1_10 = 500;
signed long int last_1_var_1_14 = 256;
unsigned char last_1_var_1_16 = 64;
unsigned short int last_1_var_1_22 = 100;
void initially(void) {
}
void step(void) {
 if (var_1_24) {
  var_1_23 = (((((var_1_25 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) < ((var_1_27 - var_1_28))) ? ((var_1_25 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : ((var_1_27 - var_1_28))));
 }
 if ((var_1_23 / (var_1_30 + var_1_31)) >= var_1_27) {
  if (var_1_24 || ((var_1_27 >> var_1_26) > (var_1_30 | 10))) {
   if ((var_1_30 * (2602482040u - var_1_31)) > var_1_32) {
    var_1_29 = (var_1_27 - ((var_1_33 + var_1_34) - var_1_35));
   } else {
    var_1_29 = var_1_33;
   }
  }
 } else {
  var_1_29 = var_1_27;
 }
 var_1_36 = ((((((((64) < (var_1_31)) ? (64) : (var_1_31))) + var_1_34) < 0 ) ? -(((((64) < (var_1_31)) ? (64) : (var_1_31))) + var_1_34) : (((((64) < (var_1_31)) ? (64) : (var_1_31))) + var_1_34)));
 if (var_1_38 > var_1_31) {
  if (var_1_24) {
   var_1_37 = (63.971f + var_1_39);
  }
 } else {
  if (var_1_29 > var_1_38) {
   if (var_1_38 != (var_1_40 - ((((var_1_33) > (var_1_36)) ? (var_1_33) : (var_1_36))))) {
    var_1_37 = ((((var_1_39) > (var_1_41)) ? (var_1_39) : (var_1_41)));
   } else {
    var_1_37 = (((((((256.5f - var_1_42) < 0 ) ? -(256.5f - var_1_42) : (256.5f - var_1_42))) < 0 ) ? -((((256.5f - var_1_42) < 0 ) ? -(256.5f - var_1_42) : (256.5f - var_1_42))) : ((((256.5f - var_1_42) < 0 ) ? -(256.5f - var_1_42) : (256.5f - var_1_42)))));
   }
  } else {
   var_1_37 = var_1_39;
  }
 }
 if (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) < var_1_30) {
  if (var_1_33 <= 4) {
   var_1_43 = var_1_34;
  } else {
   var_1_43 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
  }
 } else {
  var_1_43 = (((((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < (var_1_35)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_35))) < 0 ) ? -((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < (var_1_35)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_35))) : ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < (var_1_35)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_35)))));
 }
 if (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))) > ((((var_1_41) > (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? (var_1_41) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))))) {
  var_1_44 = (4 + ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))));
 } else {
  var_1_44 = (var_1_30 + var_1_34);
 }
 if (-0.5f < var_1_39) {
  var_1_45 = ((((((((var_1_31 + var_1_38)) > (var_1_40)) ? ((var_1_31 + var_1_38)) : (var_1_40))) < 0 ) ? -(((((var_1_31 + var_1_38)) > (var_1_40)) ? ((var_1_31 + var_1_38)) : (var_1_40))) : (((((var_1_31 + var_1_38)) > (var_1_40)) ? ((var_1_31 + var_1_38)) : (var_1_40)))));
 }
 if (var_1_24) {
  if (var_1_28 <= var_1_32) {
   var_1_46 = var_1_25;
  }
 } else {
  var_1_46 = (var_1_35 - var_1_30);
 }
 var_1_47 = var_1_33;
 if (1 >= (var_1_29 / var_1_30)) {
  var_1_48 = (var_1_49 && var_1_50);
 }
 if (-1000000000 <= (var_1_27 | var_1_52)) {
  var_1_51 = ((((var_1_39) > (var_1_41)) ? (var_1_39) : (var_1_41)));
 } else {
  var_1_51 = (var_1_39 + var_1_53);
 }
 if (var_1_26 < (((((var_1_35 + var_1_52)) > (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? ((var_1_35 + var_1_52)) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))))) {
  var_1_54 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
 }
 if (var_1_48 || var_1_50) {
  var_1_55 = (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) + (25 - ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))));
 } else {
  var_1_55 = (var_1_35 - ((((var_1_33) < (((((var_1_34) > (var_1_28)) ? (var_1_34) : (var_1_28))))) ? (var_1_33) : (((((var_1_34) > (var_1_28)) ? (var_1_34) : (var_1_28)))))));
 }
 if (var_1_40 >= ((~ var_1_36) / ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57))))) {
  var_1_56 = (var_1_34 + var_1_35);
 } else {
  if (var_1_50) {
   var_1_56 = (((((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))) < 0 ) ? -((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))) : ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))));
  }
 }
 if (var_1_23 >= (var_1_45 & (var_1_38 | var_1_26))) {
  var_1_58 = (var_1_28 - var_1_35);
 } else {
  if (var_1_42 >= var_1_37) {
   var_1_58 = ((((var_1_33) < (var_1_28)) ? (var_1_33) : (var_1_28)));
  } else {
   var_1_58 = ((((var_1_25) > ((((((var_1_59) < (5)) ? (var_1_59) : (5))) + (var_1_34 - var_1_33)))) ? (var_1_25) : ((((((var_1_59) < (5)) ? (var_1_59) : (5))) + (var_1_34 - var_1_33)))));
  }
 }
 if (var_1_48) {
  if (var_1_49) {
   if (var_1_42 >= var_1_37) {
    var_1_60 = ((((var_1_33) < (var_1_35)) ? (var_1_33) : (var_1_35)));
   } else {
    var_1_60 = (var_1_31 + var_1_34);
   }
  }
 }
 if (var_1_52 >= (var_1_43 & var_1_32)) {
  if (var_1_25 <= (var_1_31 ^ var_1_52)) {
   var_1_61 = (var_1_59 + ((((var_1_54) < (var_1_47)) ? (var_1_54) : (var_1_47))));
  } else {
   if (var_1_27 < var_1_34) {
    var_1_61 = var_1_38;
   }
  }
 } else {
  if (var_1_59 <= (~ var_1_31)) {
   var_1_61 = ((var_1_38 + ((((-1) > (var_1_59)) ? (-1) : (var_1_59)))) + var_1_33);
  } else {
   var_1_61 = (((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) < 0 ) ? -((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) : ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))));
  }
 }
 if (var_1_44 < var_1_29) {
  var_1_62 = (var_1_28 - var_1_30);
 }
 if ((var_1_61 | 4) < 256) {
  var_1_63 = ((var_1_64 + var_1_65) - var_1_40);
 }
 if (var_1_46 <= var_1_60) {
  var_1_66 = (var_1_39 + ((((var_1_53) < (var_1_67)) ? (var_1_53) : (var_1_67))));
 }
 if (var_1_53 <= var_1_67) {
  var_1_68 = (((((((((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33)))) > (var_1_34)) ? (((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33)))) : (var_1_34))) < 0 ) ? -((((((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33)))) > (var_1_34)) ? (((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33)))) : (var_1_34))) : ((((((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33)))) > (var_1_34)) ? (((((var_1_26) < (var_1_33)) ? (var_1_26) : (var_1_33)))) : (var_1_34)))));
 }
 if (var_1_41 > var_1_37) {
  var_1_69 = var_1_35;
 }
 if (var_1_58 <= var_1_60) {
  var_1_70 = (((((var_1_34 + var_1_33)) > ((38981 - var_1_60))) ? ((var_1_34 + var_1_33)) : ((38981 - var_1_60))));
 } else {
  if (var_1_48) {
   var_1_70 = var_1_35;
  }
 }
 if (-50 > var_1_57) {
  if (! (var_1_26 <= ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) {
   var_1_71 = (((((var_1_72) > (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73))))) ? (var_1_72) : (((((var_1_73) < 0 ) ? -(var_1_73) : (var_1_73)))))) - var_1_33);
  }
 }
 if (var_1_68 > var_1_45) {
  var_1_74 = ((((var_1_41) < (var_1_67)) ? (var_1_41) : (var_1_67)));
 } else {
  var_1_74 = ((((((((64.5) < 0 ) ? -(64.5) : (64.5)))) < ((var_1_39 + (var_1_75 + var_1_76)))) ? (((((64.5) < 0 ) ? -(64.5) : (64.5)))) : ((var_1_39 + (var_1_75 + var_1_76)))));
 }
 if (var_1_34 < -5) {
  if (((((var_1_69) < 0 ) ? -(var_1_69) : (var_1_69))) > var_1_65) {
   if ((var_1_52 < ((((var_1_40) < (var_1_47)) ? (var_1_40) : (var_1_47)))) && var_1_48) {
    if (var_1_50) {
     var_1_77 = var_1_33;
    }
   }
  }
 } else {
  if (var_1_25 <= var_1_47) {
   var_1_77 = var_1_23;
  }
 }
 if (var_1_48) {
  var_1_78 = var_1_35;
 }
 if (var_1_48) {
  var_1_79 = var_1_76;
 } else {
  var_1_79 = var_1_67;
 }
 if (var_1_48) {
  var_1_80 = var_1_70;
 }
 if (var_1_23 < (var_1_72 | (var_1_28 * var_1_61))) {
  if ((-128 ^ (var_1_82 | var_1_33)) >= var_1_56) {
   var_1_81 = var_1_47;
  }
 }
 var_1_83 = var_1_39;
 signed long int stepLocal_0 = last_1_var_1_16 / -2;
 if (last_1_var_1_10 <= stepLocal_0) {
  var_1_1 = (57907 - (last_1_var_1_16 + last_1_var_1_16));
 } else {
  var_1_1 = 1;
 }
 unsigned long int stepLocal_5 = (last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20);
 if (stepLocal_5 != last_1_var_1_10) {
  var_1_19 = var_1_9;
 } else {
  if (! (! last_1_var_1_6)) {
   var_1_19 = ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21));
  }
 }
 if (var_1_19) {
  var_1_6 = (last_1_var_1_6 || var_1_9);
 }
 signed char stepLocal_2 = var_1_11;
 if (! var_1_19) {
  if (((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= stepLocal_2) {
   var_1_14 = var_1_11;
  }
 }
 var_1_22 = var_1_15;
 unsigned short int stepLocal_4 = var_1_22;
 unsigned short int stepLocal_3 = var_1_22;
 if (stepLocal_3 >= var_1_12) {
  var_1_16 = (var_1_12 + var_1_17);
 } else {
  if (stepLocal_4 > var_1_22) {
   var_1_16 = ((((var_1_17) < (var_1_12)) ? (var_1_17) : (var_1_12)));
  } else {
   var_1_16 = var_1_12;
  }
 }
 signed long int stepLocal_1 = var_1_11 - var_1_12;
 if (stepLocal_1 < (((((((32) < (var_1_1)) ? (32) : (var_1_1))) < 0 ) ? -((((32) < (var_1_1)) ? (32) : (var_1_1))) : ((((32) < (var_1_1)) ? (32) : (var_1_1)))))) {
  var_1_10 = var_1_11;
 } else {
  if (var_1_19) {
   var_1_10 = var_1_16;
  } else {
   var_1_10 = var_1_16;
  }
 }
}
void updateVariables() {
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 4294967295);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -126);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -1);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 128);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 31);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 32);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 65535);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -461168.6018427382800e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65535);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 1);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= -2147483648);
 assume_abort_if_not(var_1_52 <= 2147483647);
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 65535);
 assume_abort_if_not(var_1_57 != 0);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -63);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 1073741823);
 assume_abort_if_not(var_1_64 <= 2147483647);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 1073741824);
 assume_abort_if_not(var_1_65 <= 2147483647);
 var_1_67 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_67 >= -461168.6018427382800e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427382800e+12F && var_1_67 >= 1.0e-20F ));
 var_1_72 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_72 >= 32767);
 assume_abort_if_not(var_1_72 <= 65534);
 var_1_73 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_73 >= 32767);
 assume_abort_if_not(var_1_73 <= 65534);
 var_1_75 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_75 >= -230584.3009213691390e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 2305843.009213691390e+12F && var_1_75 >= 1.0e-20F ));
 var_1_76 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_76 >= -230584.3009213691390e+13F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 2305843.009213691390e+12F && var_1_76 >= 1.0e-20F ));
 var_1_82 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_82 >= -128);
 assume_abort_if_not(var_1_82 <= 127);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_22 = var_1_22;
}
int property() {
 return (((((((last_1_var_1_10 <= (last_1_var_1_16 / -2)) ? (var_1_1 == ((unsigned short int) (57907 - (last_1_var_1_16 + last_1_var_1_16)))) : (var_1_1 == ((unsigned short int) 1))) && (var_1_19 ? (var_1_6 == ((unsigned char) (last_1_var_1_6 || var_1_9))) : 1)) && (((var_1_11 - var_1_12) < (((((((32) < (var_1_1)) ? (32) : (var_1_1))) < 0 ) ? -((((32) < (var_1_1)) ? (32) : (var_1_1))) : ((((32) < (var_1_1)) ? (32) : (var_1_1)))))) ? (var_1_10 == ((signed long int) var_1_11)) : (var_1_19 ? (var_1_10 == ((signed long int) var_1_16)) : (var_1_10 == ((signed long int) var_1_16))))) && ((! var_1_19) ? ((((var_1_15 - var_1_12) * (- last_1_var_1_14)) <= var_1_11) ? (var_1_14 == ((signed long int) var_1_11)) : 1) : 1)) && ((var_1_22 >= var_1_12) ? (var_1_16 == ((unsigned char) (var_1_12 + var_1_17))) : ((var_1_22 > var_1_22) ? (var_1_16 == ((unsigned char) ((((var_1_17) < (var_1_12)) ? (var_1_17) : (var_1_12))))) : (var_1_16 == ((unsigned char) var_1_12))))) && ((((last_1_var_1_16 % var_1_15) + (last_1_var_1_22 / var_1_20)) != last_1_var_1_10) ? (var_1_19 == ((unsigned char) var_1_9)) : ((! (! last_1_var_1_6)) ? (var_1_19 == ((unsigned char) ((last_1_var_1_1 >= var_1_15) || (var_1_9 && var_1_21)))) : 1))) && (var_1_22 == ((unsigned short int) var_1_15))
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
