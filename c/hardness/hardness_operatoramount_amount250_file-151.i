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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned short int var_1_7 = 64;
unsigned short int var_1_8 = 56961;
unsigned short int var_1_9 = 8;
unsigned short int var_1_10 = 0;
unsigned long int var_1_11 = 10;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 1;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 64;
unsigned char var_1_22 = 2;
unsigned char var_1_23 = 64;
signed char var_1_24 = 2;
signed char var_1_25 = 10;
signed char var_1_26 = 50;
signed char var_1_27 = 8;
signed char var_1_28 = 64;
signed char var_1_29 = 1;
signed short int var_1_30 = 4;
unsigned char var_1_31 = 1;
float var_1_32 = 50.5;
float var_1_33 = 63.75;
float var_1_34 = 0.0;
float var_1_35 = 0.25;
double var_1_36 = 0.4;
float var_1_37 = 16.5;
double var_1_38 = 1.75;
double var_1_39 = 63.2;
unsigned char var_1_40 = 5;
signed char var_1_41 = 2;
float var_1_42 = 15.1;
float var_1_43 = 64.3;
unsigned long int var_1_44 = 256;
double var_1_45 = -0.25;
unsigned char var_1_46 = 128;
double var_1_47 = 9.75;
unsigned long int var_1_48 = 32;
signed long int var_1_49 = 256;
float var_1_50 = 1.65;
signed long int var_1_51 = -100;
signed long int var_1_53 = -8;
signed long int var_1_54 = 1;
unsigned char var_1_55 = 32;
unsigned char var_1_57 = 128;
unsigned short int var_1_58 = 8;
unsigned short int var_1_59 = 256;
double var_1_60 = 1.875;
signed long int var_1_61 = 0;
float var_1_62 = 7.3;
signed long int var_1_63 = -64;
double var_1_64 = 0.125;
unsigned char last_1_var_1_13 = 1;
unsigned char last_1_var_1_18 = 0;
double last_1_var_1_36 = 0.4;
unsigned long int last_1_var_1_48 = 32;
unsigned short int last_1_var_1_58 = 8;
double last_1_var_1_60 = 1.875;
signed long int last_1_var_1_61 = 0;
double last_1_var_1_64 = 0.125;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_9 >> var_1_12;
 unsigned char stepLocal_0 = last_1_var_1_13 && last_1_var_1_18;
 if (var_1_10 < stepLocal_1) {
  var_1_11 = ((((var_1_12) > (var_1_8)) ? (var_1_12) : (var_1_8)));
 } else {
  if (stepLocal_0 || (last_1_var_1_48 >= ((((var_1_9) > (10u)) ? (var_1_9) : (10u))))) {
   var_1_11 = ((((var_1_7) < (((((last_1_var_1_61) < (var_1_9)) ? (last_1_var_1_61) : (var_1_9))))) ? (var_1_7) : (((((last_1_var_1_61) < (var_1_9)) ? (last_1_var_1_61) : (var_1_9))))));
  } else {
   var_1_11 = (var_1_10 + last_1_var_1_61);
  }
 }
 if (var_1_9 >= (var_1_8 - var_1_10)) {
  if ((var_1_12 <= (last_1_var_1_58 / var_1_22)) && (last_1_var_1_60 > last_1_var_1_36)) {
   if ((- last_1_var_1_36) > last_1_var_1_64) {
    var_1_21 = ((((last_1_var_1_58) > (((((var_1_12) < (8u)) ? (var_1_12) : (8u))))) ? (last_1_var_1_58) : (((((var_1_12) < (8u)) ? (var_1_12) : (8u))))));
   } else {
    var_1_21 = ((((64u) < 0 ) ? -(64u) : (64u)));
   }
  }
 }
 unsigned long int stepLocal_13 = var_1_21 / var_1_8;
 if (stepLocal_13 != var_1_12) {
  var_1_60 = var_1_43;
 } else {
  var_1_60 = var_1_35;
 }
 if (((((last_1_var_1_36) > (last_1_var_1_60)) ? (last_1_var_1_36) : (last_1_var_1_60))) >= (- last_1_var_1_64)) {
  var_1_13 = (! (var_1_16 && var_1_17));
 }
 if (var_1_17) {
  var_1_23 = var_1_12;
 }
 unsigned char stepLocal_5 = var_1_2;
 if (stepLocal_5 && var_1_3) {
  var_1_44 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
 } else {
  var_1_44 = (var_1_10 + var_1_26);
 }
 var_1_48 = (var_1_41 + var_1_10);
 var_1_63 = -1;
 var_1_64 = var_1_38;
 unsigned long int stepLocal_2 = var_1_11;
 if (var_1_17) {
  if (stepLocal_2 < var_1_12) {
   var_1_18 = (var_1_13 || var_1_16);
  } else {
   var_1_18 = ((! (var_1_13 || var_1_16)) || (var_1_19 || var_1_20));
  }
 }
 if (var_1_37 == (- var_1_64)) {
  var_1_45 = var_1_33;
 } else {
  if (((var_1_46 - var_1_12) + var_1_11) == ((((var_1_44) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_44) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))) {
   var_1_45 = (var_1_43 + (var_1_35 - var_1_47));
  } else {
   var_1_45 = ((((var_1_39) > (var_1_33)) ? (var_1_39) : (var_1_33)));
  }
 }
 signed long int stepLocal_7 = var_1_41 / (var_1_46 - 5);
 unsigned char stepLocal_6 = (var_1_21 != var_1_22) || var_1_2;
 if (var_1_22 != stepLocal_7) {
  if (stepLocal_6 && (var_1_31 || var_1_13)) {
   var_1_51 = ((((((((var_1_46) > ((var_1_41 - var_1_7))) ? (var_1_46) : ((var_1_41 - var_1_7))))) > ((var_1_8 + var_1_53))) ? (((((var_1_46) > ((var_1_41 - var_1_7))) ? (var_1_46) : ((var_1_41 - var_1_7))))) : ((var_1_8 + var_1_53))));
  }
 } else {
  var_1_51 = var_1_54;
 }
 if ((32.4 == var_1_45) || ((var_1_48 > var_1_11) && var_1_13)) {
  var_1_1 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 } else {
  var_1_1 = (var_1_8 - (var_1_9 + var_1_10));
 }
 unsigned long int stepLocal_3 = var_1_11 + var_1_21;
 if ((var_1_51 * (var_1_21 / var_1_8)) < stepLocal_3) {
  var_1_24 = (((((var_1_12) > ((var_1_25 - var_1_26))) ? (var_1_12) : ((var_1_25 - var_1_26)))) + (10 - var_1_27));
 } else {
  var_1_24 = ((var_1_28 - (var_1_12 + var_1_29)) - var_1_27);
 }
 if (((var_1_44 % -2) | var_1_26) > (~ -64)) {
  var_1_32 = (var_1_33 - (var_1_34 - var_1_35));
 }
 if ((var_1_25 ^ ((((var_1_28) > (var_1_10)) ? (var_1_28) : (var_1_10)))) >= (var_1_29 << var_1_41)) {
  if ((((((var_1_28 | 100)) < (var_1_27)) ? ((var_1_28 | 100)) : (var_1_27))) >= ((var_1_7 + var_1_44) / var_1_12)) {
   var_1_40 = var_1_25;
  } else {
   var_1_40 = var_1_28;
  }
 }
 if (! var_1_18) {
  if ((var_1_1 - var_1_63) > var_1_48) {
   var_1_42 = ((((var_1_39) < (var_1_38)) ? (var_1_39) : (var_1_38)));
  } else {
   var_1_42 = (var_1_35 + var_1_43);
  }
 }
 if ((var_1_34 / var_1_50) <= (((((var_1_38 * var_1_64)) < ((var_1_37 - var_1_47))) ? ((var_1_38 * var_1_64)) : ((var_1_37 - var_1_47))))) {
  var_1_49 = (var_1_22 + var_1_41);
 }
 unsigned long int stepLocal_10 = var_1_11;
 unsigned long int stepLocal_9 = var_1_44;
 unsigned long int stepLocal_8 = (var_1_51 * var_1_11) + var_1_63;
 if (var_1_8 < stepLocal_9) {
  if (var_1_20) {
   if (stepLocal_8 <= var_1_7) {
    var_1_55 = ((((((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (128)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (128)))) > (var_1_12)) ? (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (128)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (128)))) : (var_1_12)));
   } else {
    var_1_55 = (((((var_1_41 + var_1_29)) > (var_1_28)) ? ((var_1_41 + var_1_29)) : (var_1_28)));
   }
  } else {
   if (32 != stepLocal_10) {
    var_1_55 = (var_1_29 + var_1_12);
   } else {
    var_1_55 = (5 + (var_1_12 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))));
   }
  }
 }
 unsigned char stepLocal_11 = 256 < var_1_63;
 if (stepLocal_11 && var_1_18) {
  var_1_57 = ((((((var_1_26) < (var_1_41)) ? (var_1_26) : (var_1_41))) + var_1_25) + var_1_28);
 }
 unsigned char stepLocal_14 = var_1_17;
 if (var_1_18 && stepLocal_14) {
  var_1_62 = (((((var_1_43 + ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47))))) > (var_1_38)) ? ((var_1_43 + ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47))))) : (var_1_38)));
 }
 if (var_1_7 != var_1_51) {
  if (var_1_2 || var_1_3) {
   if (var_1_18) {
    var_1_30 = var_1_10;
   } else {
    var_1_30 = ((((var_1_25) < ((var_1_26 + var_1_21))) ? (var_1_25) : ((var_1_26 + var_1_21))));
   }
  } else {
   if (var_1_31) {
    var_1_30 = var_1_22;
   } else {
    var_1_30 = var_1_10;
   }
  }
 }
 signed short int stepLocal_4 = var_1_30;
 if (var_1_10 == stepLocal_4) {
  if (var_1_35 < (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_37)) {
   var_1_36 = ((((var_1_34) < ((var_1_33 - var_1_35))) ? (var_1_34) : ((var_1_33 - var_1_35))));
  } else {
   var_1_36 = (((((var_1_34 - ((((var_1_33) > (var_1_35)) ? (var_1_33) : (var_1_35))))) < (((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))))) ? ((var_1_34 - ((((var_1_33) > (var_1_35)) ? (var_1_33) : (var_1_35))))) : (((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))))));
  }
 } else {
  if (var_1_38 < var_1_35) {
   if (var_1_45 > 64.8) {
    var_1_36 = (((((31.5 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) < (var_1_38)) ? ((31.5 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) : (var_1_38)));
   }
  } else {
   var_1_36 = var_1_34;
  }
 }
 signed long int stepLocal_12 = var_1_49;
 if (var_1_19) {
  if (stepLocal_12 >= var_1_46) {
   if (var_1_64 >= (var_1_35 - var_1_47)) {
    var_1_58 = 1;
   } else {
    var_1_58 = ((((((((var_1_28) < (var_1_27)) ? (var_1_28) : (var_1_27)))) > (var_1_22)) ? (((((var_1_28) < (var_1_27)) ? (var_1_28) : (var_1_27)))) : (var_1_22)));
   }
  }
 } else {
  if (var_1_36 == var_1_39) {
   var_1_58 = (var_1_27 + var_1_59);
  } else {
   if (! var_1_13) {
    var_1_58 = (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))));
   }
  }
 }
 if (var_1_20) {
  var_1_61 = var_1_58;
 } else {
  var_1_61 = var_1_26;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 65534);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16384);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 15);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 255);
 assume_abort_if_not(var_1_22 != 0);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 62);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 31);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 2);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 255);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
 assume_abort_if_not(var_1_50 != 0.0F);
 var_1_53 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_53 >= -1073741823);
 assume_abort_if_not(var_1_53 <= 1073741823);
 var_1_54 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_54 >= -2147483647);
 assume_abort_if_not(var_1_54 <= 2147483646);
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_64 = var_1_64;
}
int property(void) {
 return ((((((((((((((((((((((((((32.4 == var_1_45) || ((var_1_48 > var_1_11) && var_1_13)) ? (var_1_1 == ((unsigned short int) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))) : (var_1_1 == ((unsigned short int) (var_1_8 - (var_1_9 + var_1_10))))) && ((var_1_10 < (var_1_9 >> var_1_12)) ? (var_1_11 == ((unsigned long int) ((((var_1_12) > (var_1_8)) ? (var_1_12) : (var_1_8))))) : (((last_1_var_1_13 && last_1_var_1_18) || (last_1_var_1_48 >= ((((var_1_9) > (10u)) ? (var_1_9) : (10u))))) ? (var_1_11 == ((unsigned long int) ((((var_1_7) < (((((last_1_var_1_61) < (var_1_9)) ? (last_1_var_1_61) : (var_1_9))))) ? (var_1_7) : (((((last_1_var_1_61) < (var_1_9)) ? (last_1_var_1_61) : (var_1_9)))))))) : (var_1_11 == ((unsigned long int) (var_1_10 + last_1_var_1_61)))))) && ((((((last_1_var_1_36) > (last_1_var_1_60)) ? (last_1_var_1_36) : (last_1_var_1_60))) >= (- last_1_var_1_64)) ? (var_1_13 == ((unsigned char) (! (var_1_16 && var_1_17)))) : 1)) && (var_1_17 ? ((var_1_11 < var_1_12) ? (var_1_18 == ((unsigned char) (var_1_13 || var_1_16))) : (var_1_18 == ((unsigned char) ((! (var_1_13 || var_1_16)) || (var_1_19 || var_1_20))))) : 1)) && ((var_1_9 >= (var_1_8 - var_1_10)) ? (((var_1_12 <= (last_1_var_1_58 / var_1_22)) && (last_1_var_1_60 > last_1_var_1_36)) ? (((- last_1_var_1_36) > last_1_var_1_64) ? (var_1_21 == ((unsigned long int) ((((last_1_var_1_58) > (((((var_1_12) < (8u)) ? (var_1_12) : (8u))))) ? (last_1_var_1_58) : (((((var_1_12) < (8u)) ? (var_1_12) : (8u)))))))) : (var_1_21 == ((unsigned long int) ((((64u) < 0 ) ? -(64u) : (64u)))))) : 1) : 1)) && (var_1_17 ? (var_1_23 == ((unsigned char) var_1_12)) : 1)) && (((var_1_51 * (var_1_21 / var_1_8)) < (var_1_11 + var_1_21)) ? (var_1_24 == ((signed char) (((((var_1_12) > ((var_1_25 - var_1_26))) ? (var_1_12) : ((var_1_25 - var_1_26)))) + (10 - var_1_27)))) : (var_1_24 == ((signed char) ((var_1_28 - (var_1_12 + var_1_29)) - var_1_27))))) && ((var_1_7 != var_1_51) ? ((var_1_2 || var_1_3) ? (var_1_18 ? (var_1_30 == ((signed short int) var_1_10)) : (var_1_30 == ((signed short int) ((((var_1_25) < ((var_1_26 + var_1_21))) ? (var_1_25) : ((var_1_26 + var_1_21))))))) : (var_1_31 ? (var_1_30 == ((signed short int) var_1_22)) : (var_1_30 == ((signed short int) var_1_10)))) : 1)) && ((((var_1_44 % -2) | var_1_26) > (~ -64)) ? (var_1_32 == ((float) (var_1_33 - (var_1_34 - var_1_35)))) : 1)) && ((var_1_10 == var_1_30) ? ((var_1_35 < (((((var_1_33) > (var_1_34)) ? (var_1_33) : (var_1_34))) - var_1_37)) ? (var_1_36 == ((double) ((((var_1_34) < ((var_1_33 - var_1_35))) ? (var_1_34) : ((var_1_33 - var_1_35)))))) : (var_1_36 == ((double) (((((var_1_34 - ((((var_1_33) > (var_1_35)) ? (var_1_33) : (var_1_35))))) < (((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))))) ? ((var_1_34 - ((((var_1_33) > (var_1_35)) ? (var_1_33) : (var_1_35))))) : (((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))))))))) : ((var_1_38 < var_1_35) ? ((var_1_45 > 64.8) ? (var_1_36 == ((double) (((((31.5 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) < (var_1_38)) ? ((31.5 - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))) : (var_1_38))))) : 1) : (var_1_36 == ((double) var_1_34))))) && (((var_1_25 ^ ((((var_1_28) > (var_1_10)) ? (var_1_28) : (var_1_10)))) >= (var_1_29 << var_1_41)) ? (((((((var_1_28 | 100)) < (var_1_27)) ? ((var_1_28 | 100)) : (var_1_27))) >= ((var_1_7 + var_1_44) / var_1_12)) ? (var_1_40 == ((unsigned char) var_1_25)) : (var_1_40 == ((unsigned char) var_1_28))) : 1)) && ((! var_1_18) ? (((var_1_1 - var_1_63) > var_1_48) ? (var_1_42 == ((float) ((((var_1_39) < (var_1_38)) ? (var_1_39) : (var_1_38))))) : (var_1_42 == ((float) (var_1_35 + var_1_43)))) : 1)) && ((var_1_2 && var_1_3) ? (var_1_44 == ((unsigned long int) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) : (var_1_44 == ((unsigned long int) (var_1_10 + var_1_26))))) && ((var_1_37 == (- var_1_64)) ? (var_1_45 == ((double) var_1_33)) : ((((var_1_46 - var_1_12) + var_1_11) == ((((var_1_44) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_44) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))) ? (var_1_45 == ((double) (var_1_43 + (var_1_35 - var_1_47)))) : (var_1_45 == ((double) ((((var_1_39) > (var_1_33)) ? (var_1_39) : (var_1_33)))))))) && (var_1_48 == ((unsigned long int) (var_1_41 + var_1_10)))) && (((var_1_34 / var_1_50) <= (((((var_1_38 * var_1_64)) < ((var_1_37 - var_1_47))) ? ((var_1_38 * var_1_64)) : ((var_1_37 - var_1_47))))) ? (var_1_49 == ((signed long int) (var_1_22 + var_1_41))) : 1)) && ((var_1_22 != (var_1_41 / (var_1_46 - 5))) ? ((((var_1_21 != var_1_22) || var_1_2) && (var_1_31 || var_1_13)) ? (var_1_51 == ((signed long int) ((((((((var_1_46) > ((var_1_41 - var_1_7))) ? (var_1_46) : ((var_1_41 - var_1_7))))) > ((var_1_8 + var_1_53))) ? (((((var_1_46) > ((var_1_41 - var_1_7))) ? (var_1_46) : ((var_1_41 - var_1_7))))) : ((var_1_8 + var_1_53)))))) : 1) : (var_1_51 == ((signed long int) var_1_54)))) && ((var_1_8 < var_1_44) ? (var_1_20 ? ((((var_1_51 * var_1_11) + var_1_63) <= var_1_7) ? (var_1_55 == ((unsigned char) ((((((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (128)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (128)))) > (var_1_12)) ? (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (128)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (128)))) : (var_1_12))))) : (var_1_55 == ((unsigned char) (((((var_1_41 + var_1_29)) > (var_1_28)) ? ((var_1_41 + var_1_29)) : (var_1_28)))))) : ((32 != var_1_11) ? (var_1_55 == ((unsigned char) (var_1_29 + var_1_12))) : (var_1_55 == ((unsigned char) (5 + (var_1_12 + ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))))))) : 1)) && (((256 < var_1_63) && var_1_18) ? (var_1_57 == ((unsigned char) ((((((var_1_26) < (var_1_41)) ? (var_1_26) : (var_1_41))) + var_1_25) + var_1_28))) : 1)) && (var_1_19 ? ((var_1_49 >= var_1_46) ? ((var_1_64 >= (var_1_35 - var_1_47)) ? (var_1_58 == ((unsigned short int) 1)) : (var_1_58 == ((unsigned short int) ((((((((var_1_28) < (var_1_27)) ? (var_1_28) : (var_1_27)))) > (var_1_22)) ? (((((var_1_28) < (var_1_27)) ? (var_1_28) : (var_1_27)))) : (var_1_22)))))) : 1) : ((var_1_36 == var_1_39) ? (var_1_58 == ((unsigned short int) (var_1_27 + var_1_59))) : ((! var_1_13) ? (var_1_58 == ((unsigned short int) (((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))) + ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) : 1)))) && (((var_1_21 / var_1_8) != var_1_12) ? (var_1_60 == ((double) var_1_43)) : (var_1_60 == ((double) var_1_35)))) && (var_1_20 ? (var_1_61 == ((signed long int) var_1_58)) : (var_1_61 == ((signed long int) var_1_26)))) && ((var_1_18 && var_1_17) ? (var_1_62 == ((float) (((((var_1_43 + ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47))))) > (var_1_38)) ? ((var_1_43 + ((((var_1_35) < (var_1_47)) ? (var_1_35) : (var_1_47))))) : (var_1_38))))) : 1)) && (var_1_63 == ((signed long int) -1))) && (var_1_64 == ((double) var_1_38))
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
