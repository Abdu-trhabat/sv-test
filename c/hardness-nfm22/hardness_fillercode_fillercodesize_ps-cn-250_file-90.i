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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -32;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 8;
unsigned short int var_1_13 = 5;
signed short int var_1_14 = 8;
unsigned short int var_1_15 = 62763;
unsigned long int var_1_16 = 25;
float var_1_18 = 63.25;
unsigned char var_1_20 = 0;
float var_1_21 = 7.8;
float var_1_22 = 32.1;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -16;
signed short int var_1_26 = 16;
unsigned char var_1_27 = 1;
signed short int var_1_28 = -64;
signed short int var_1_29 = 1;
unsigned char var_1_30 = 0;
signed short int var_1_31 = -2;
unsigned char var_1_32 = 0;
unsigned long int var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 64;
unsigned long int var_1_36 = 25;
double var_1_37 = 16.125;
double var_1_38 = 1.8;
signed char var_1_39 = 10;
signed char var_1_40 = 10;
signed char var_1_41 = 10;
signed char var_1_42 = 5;
double var_1_43 = 5.4;
double var_1_44 = 0.0;
double var_1_45 = 49.5;
unsigned char var_1_46 = 10;
signed char var_1_47 = 50;
unsigned char var_1_48 = 1;
unsigned long int var_1_49 = 3700209424;
float var_1_50 = 64.25;
unsigned long int var_1_51 = 4;
signed long int var_1_52 = 16;
signed long int var_1_53 = -100;
unsigned short int var_1_54 = 1;
unsigned long int var_1_55 = 256;
float var_1_56 = 25.32;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 2;
signed long int var_1_59 = -100000;
signed short int var_1_60 = -64;
signed short int var_1_61 = 64;
signed short int var_1_62 = -16;
signed long int var_1_63 = 5;
unsigned long int var_1_64 = 25;
unsigned long int var_1_65 = 4094619378;
unsigned long int var_1_66 = 1;
unsigned long int var_1_67 = 16;
unsigned short int var_1_68 = 25;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
signed long int var_1_71 = 4;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 2;
unsigned long int var_1_74 = 10;
float var_1_75 = 255.125;
signed long int last_1_var_1_1 = -32;
unsigned short int last_1_var_1_11 = 64;
signed short int last_1_var_1_14 = 8;
unsigned long int last_1_var_1_16 = 25;
float last_1_var_1_18 = 63.25;
void initially(void) {
}
void step(void) {
 if (var_1_27) {
  var_1_26 = (var_1_28 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))));
 } else {
  var_1_26 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 if (var_1_28 >= (((((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31))) < 0 ) ? -((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31))) : ((((var_1_29) > (var_1_31)) ? (var_1_29) : (var_1_31)))))) {
  if (-4 > ((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) < (var_1_31)) ? (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) : (var_1_31)))) {
   var_1_30 = var_1_32;
  } else {
   if (var_1_28 < (var_1_29 << ((((1u) < (var_1_33)) ? (1u) : (var_1_33))))) {
    var_1_30 = (var_1_34 && var_1_32);
   }
  }
 }
 var_1_35 = var_1_33;
 if (var_1_33 >= (1000000u * var_1_35)) {
  var_1_36 = (((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))));
 }
 if (var_1_35 < var_1_36) {
  var_1_37 = (100.74 - var_1_38);
 }
 if ((- (var_1_33 ^ var_1_36)) >= var_1_35) {
  if (((((var_1_26) < (8)) ? (var_1_26) : (8))) < var_1_28) {
   var_1_39 = (((((((var_1_41) > (var_1_40)) ? (var_1_41) : (var_1_40))) < 0 ) ? -((((var_1_41) > (var_1_40)) ? (var_1_41) : (var_1_40))) : ((((var_1_41) > (var_1_40)) ? (var_1_41) : (var_1_40)))));
  } else {
   var_1_39 = (((((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) < (var_1_41)) ? (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) : (var_1_41))) + ((((-2) < 0 ) ? -(-2) : (-2))));
  }
 } else {
  var_1_39 = 32;
 }
 if (var_1_40 > ((var_1_39 & var_1_26) + ((((var_1_31) > (var_1_42)) ? (var_1_31) : (var_1_42))))) {
  var_1_43 = ((10.7 - (var_1_44 - 9.6)) + var_1_45);
 }
 if ((var_1_26 == ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) || var_1_27) {
  if ((var_1_42 / var_1_47) < var_1_39) {
   var_1_46 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
  } else {
   var_1_46 = var_1_42;
  }
 }
 if ((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) - var_1_35) < ((var_1_33 >> var_1_41) >> 4)) {
  var_1_48 = var_1_32;
 }
 if (var_1_49 >= var_1_35) {
  if ((var_1_41 % var_1_47) >= var_1_35) {
   var_1_50 = ((((var_1_45) < (var_1_38)) ? (var_1_45) : (var_1_38)));
  } else {
   if (var_1_48) {
    if (var_1_39 <= var_1_49) {
     var_1_50 = var_1_38;
    }
   }
  }
 }
 if (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) <= (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) - ((((var_1_35) > (var_1_46)) ? (var_1_35) : (var_1_46))))) {
  if (var_1_31 < (var_1_33 % -128)) {
   var_1_51 = var_1_42;
  } else {
   var_1_51 = ((((var_1_46) > (var_1_33)) ? (var_1_46) : (var_1_33)));
  }
 } else {
  var_1_51 = var_1_42;
 }
 if ((((((3925527555u) < (var_1_49)) ? (3925527555u) : (var_1_49))) - ((((200u) < 0 ) ? -(200u) : (200u)))) <= var_1_42) {
  if (var_1_34) {
   var_1_52 = ((((-64) < 0 ) ? -(-64) : (-64)));
  }
 }
 if (var_1_26 >= var_1_41) {
  if ((- var_1_37) != (((((var_1_44 - 5.75)) > ((var_1_50 + var_1_45))) ? ((var_1_44 - 5.75)) : ((var_1_50 + var_1_45))))) {
   var_1_53 = ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46)));
  }
 }
 if (((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) <= (var_1_40 + var_1_41)) {
  var_1_54 = ((((var_1_46) < (256)) ? (var_1_46) : (256)));
 } else {
  if (var_1_33 < ((- var_1_49) % var_1_55)) {
   var_1_54 = (((((((((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42)))) > (var_1_33)) ? (((((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42)))) : (var_1_33))) + var_1_35);
  }
 }
 if (var_1_41 != var_1_42) {
  if (var_1_27 || (var_1_35 <= var_1_51)) {
   if (var_1_57) {
    if ((var_1_36 * (50u + var_1_52)) >= var_1_55) {
     var_1_56 = (((8.2258617449185178E18f - 31.8f) - 63.5f) - var_1_38);
    } else {
     var_1_56 = ((((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) < (1.00000000009E10f)) ? (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) : (1.00000000009E10f)));
    }
   } else {
    var_1_56 = (var_1_38 - var_1_44);
   }
  }
 }
 if (var_1_46 == var_1_55) {
  var_1_58 = (var_1_33 + ((((0) > (var_1_42)) ? (0) : (var_1_42))));
 } else {
  if (var_1_48) {
   var_1_58 = (((((((1) < (var_1_42)) ? (1) : (var_1_42))) < 0 ) ? -((((1) < (var_1_42)) ? (1) : (var_1_42))) : ((((1) < (var_1_42)) ? (1) : (var_1_42)))));
  } else {
   var_1_58 = var_1_42;
  }
 }
 if (var_1_58 >= 4) {
  var_1_59 = ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)));
 }
 if (var_1_27) {
  if (var_1_38 > 5.25) {
   if ((var_1_58 ^ var_1_31) <= ((-16 & var_1_41) | var_1_51)) {
    var_1_60 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
   }
  } else {
   var_1_60 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
  }
 } else {
  var_1_60 = var_1_29;
 }
 if (var_1_31 == var_1_55) {
  if (var_1_42 >= var_1_40) {
   var_1_61 = ((var_1_39 + (var_1_41 + var_1_58)) + var_1_42);
  }
 }
 if ((var_1_42 >= var_1_28) || var_1_34) {
  if (var_1_57) {
   var_1_62 = (var_1_58 - ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))));
  }
 } else {
  if (var_1_34) {
   var_1_62 = (((((var_1_58) < (var_1_46)) ? (var_1_58) : (var_1_46))) - var_1_42);
  }
 }
 if ((((((var_1_45) > (var_1_43)) ? (var_1_45) : (var_1_43))) + var_1_38) <= var_1_56) {
  var_1_63 = (((((2 - var_1_46)) > (var_1_42)) ? ((2 - var_1_46)) : (var_1_42)));
 }
 if ((var_1_46 / ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))) <= (var_1_60 ^ var_1_28)) {
  if (((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) >= (((((var_1_54) < (-1)) ? (var_1_54) : (-1))) - var_1_33)) {
   var_1_64 = (var_1_65 - var_1_35);
  }
 }
 if (var_1_57) {
  var_1_66 = (var_1_35 + var_1_42);
 }
 if (var_1_62 < (((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) < 0 ) ? -((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) : ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) {
  if ((var_1_39 ^ var_1_47) == ((((var_1_29) > (var_1_61)) ? (var_1_29) : (var_1_61)))) {
   var_1_67 = ((((var_1_58) > (((var_1_46 + var_1_35) + var_1_33))) ? (var_1_58) : (((var_1_46 + var_1_35) + var_1_33))));
  }
 } else {
  var_1_67 = ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)));
 }
 if (var_1_48) {
  var_1_68 = var_1_42;
 } else {
  var_1_68 = var_1_35;
 }
 if (var_1_48) {
  var_1_69 = var_1_32;
 } else {
  var_1_69 = var_1_32;
 }
 var_1_70 = 0;
 if (var_1_27) {
  var_1_71 = var_1_33;
 } else {
  var_1_71 = var_1_39;
 }
 if (var_1_69 && ((var_1_38 + var_1_56) <= var_1_43)) {
  var_1_72 = (((((var_1_33) > (var_1_42)) ? (var_1_33) : (var_1_42))) + var_1_73);
 }
 var_1_74 = var_1_54;
 var_1_75 = 1.000000000000008E14f;
 if ((last_1_var_1_14 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (last_1_var_1_1 | last_1_var_1_16)) {
  if ((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) {
   var_1_1 = last_1_var_1_11;
  } else {
   var_1_1 = last_1_var_1_11;
  }
 } else {
  var_1_1 = last_1_var_1_11;
 }
 if ((- (- last_1_var_1_18)) != last_1_var_1_18) {
  if (var_1_12 <= ((((last_1_var_1_14) > ((- last_1_var_1_14))) ? (last_1_var_1_14) : ((- last_1_var_1_14))))) {
   var_1_24 = -50;
  } else {
   var_1_24 = last_1_var_1_14;
  }
 } else {
  var_1_24 = last_1_var_1_14;
 }
 if (((var_1_15 - var_1_12) + var_1_24) < var_1_24) {
  var_1_14 = var_1_12;
 }
 unsigned short int stepLocal_0 = var_1_13;
 if (var_1_24 < stepLocal_0) {
  if (var_1_20) {
   var_1_18 = (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) + var_1_22);
  } else {
   if (var_1_23) {
    var_1_18 = (var_1_22 + var_1_21);
   } else {
    var_1_18 = -0.75f;
   }
  }
 } else {
  var_1_18 = var_1_21;
 }
 if (var_1_18 != (var_1_18 + var_1_18)) {
  var_1_11 = ((var_1_12 + var_1_13) + 32);
 }
 if (((var_1_1 * var_1_4) + var_1_1) > var_1_1) {
  if (var_1_14 < var_1_1) {
   var_1_16 = var_1_12;
  }
 } else {
  var_1_16 = 0u;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16384);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65535);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -16383);
 assume_abort_if_not(var_1_28 <= 16383);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -16383);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -32767);
 assume_abort_if_not(var_1_31 <= 32767);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -63);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -63);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 2305843.009213691390e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -128);
 assume_abort_if_not(var_1_47 <= 127);
 assume_abort_if_not(var_1_47 != 0);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 2147483647);
 assume_abort_if_not(var_1_49 <= 4294967295);
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 4294967295);
 assume_abort_if_not(var_1_55 != 0);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 1);
 var_1_65 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_65 >= 2147483647);
 assume_abort_if_not(var_1_65 <= 4294967294);
 var_1_73 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_73 >= 0);
 assume_abort_if_not(var_1_73 <= 127);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_18 = var_1_18;
}
int property() {
 return (((((((last_1_var_1_14 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (last_1_var_1_1 | last_1_var_1_16)) ? (((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) ? (var_1_1 == ((signed long int) last_1_var_1_11)) : (var_1_1 == ((signed long int) last_1_var_1_11))) : (var_1_1 == ((signed long int) last_1_var_1_11))) && ((var_1_18 != (var_1_18 + var_1_18)) ? (var_1_11 == ((unsigned short int) ((var_1_12 + var_1_13) + 32))) : 1)) && ((((var_1_15 - var_1_12) + var_1_24) < var_1_24) ? (var_1_14 == ((signed short int) var_1_12)) : 1)) && ((((var_1_1 * var_1_4) + var_1_1) > var_1_1) ? ((var_1_14 < var_1_1) ? (var_1_16 == ((unsigned long int) var_1_12)) : 1) : (var_1_16 == ((unsigned long int) 0u)))) && ((var_1_24 < var_1_13) ? (var_1_20 ? (var_1_18 == ((float) (((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) + var_1_22))) : (var_1_23 ? (var_1_18 == ((float) (var_1_22 + var_1_21))) : (var_1_18 == ((float) -0.75f)))) : (var_1_18 == ((float) var_1_21)))) && (((- (- last_1_var_1_18)) != last_1_var_1_18) ? ((var_1_12 <= ((((last_1_var_1_14) > ((- last_1_var_1_14))) ? (last_1_var_1_14) : ((- last_1_var_1_14))))) ? (var_1_24 == ((signed long int) -50)) : (var_1_24 == ((signed long int) last_1_var_1_14))) : (var_1_24 == ((signed long int) last_1_var_1_14)))
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
