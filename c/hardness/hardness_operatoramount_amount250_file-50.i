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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 9.5;
double var_1_4 = 16.5;
unsigned short int var_1_5 = 5;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25268;
unsigned short int var_1_10 = 10;
unsigned short int var_1_11 = 52309;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -2;
signed long int var_1_15 = 64;
double var_1_16 = 9.25;
unsigned long int var_1_17 = 10;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 5;
unsigned long int var_1_20 = 100;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 4015996534;
float var_1_24 = 128.575;
float var_1_25 = 64.4;
float var_1_26 = 1.5;
float var_1_27 = 4.4;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 2;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 2;
signed char var_1_37 = 2;
unsigned long int var_1_38 = 32;
unsigned short int var_1_39 = 64;
unsigned short int var_1_40 = 8;
float var_1_41 = 9.8;
float var_1_42 = 999.25;
float var_1_43 = 63.4;
signed long int var_1_44 = -10;
signed short int var_1_45 = 64;
unsigned char var_1_46 = 10;
unsigned short int var_1_47 = 128;
signed short int var_1_50 = -8;
signed short int var_1_51 = 4;
unsigned char var_1_52 = 64;
signed char var_1_53 = 16;
signed long int var_1_54 = -64;
double var_1_55 = 128.2;
unsigned short int var_1_56 = 2;
unsigned short int var_1_57 = 53052;
float var_1_58 = 2.5;
signed char var_1_59 = 8;
float var_1_60 = 31.5;
double var_1_61 = 16.375;
signed char var_1_62 = 10;
signed char var_1_63 = -1;
unsigned long int last_1_var_1_20 = 100;
unsigned long int last_1_var_1_38 = 32;
unsigned char last_1_var_1_52 = 64;
double last_1_var_1_61 = 16.375;
void initially(void) {
}
void step(void) {
 if (var_1_7 || var_1_21) {
  var_1_20 = (var_1_18 + last_1_var_1_20);
 } else {
  if ((last_1_var_1_38 / (var_1_22 - var_1_8)) < (last_1_var_1_38 / var_1_9)) {
   var_1_20 = (64u + var_1_10);
  } else {
   var_1_20 = ((((var_1_9) < (last_1_var_1_52)) ? (var_1_9) : (last_1_var_1_52)));
  }
 }
 if ((last_1_var_1_61 / ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) < var_1_4) {
  var_1_15 = (((((last_1_var_1_38 - var_1_9)) > (last_1_var_1_38)) ? ((last_1_var_1_38 - var_1_9)) : (last_1_var_1_38)));
 } else {
  var_1_15 = ((((var_1_8) < (var_1_13)) ? (var_1_8) : (var_1_13)));
 }
 var_1_12 = var_1_13;
 var_1_14 = (var_1_13 + (var_1_8 + var_1_9));
 var_1_17 = (var_1_10 + ((var_1_9 + var_1_18) + var_1_13));
 if (-16 <= var_1_13) {
  var_1_19 = 100;
 } else {
  var_1_19 = 8;
 }
 var_1_24 = (var_1_25 - (var_1_26 + var_1_27));
 unsigned char stepLocal_3 = var_1_34;
 unsigned char stepLocal_2 = var_1_11 > 25;
 if (var_1_7 || stepLocal_3) {
  if (((((var_1_4) < (var_1_27)) ? (var_1_4) : (var_1_27))) >= var_1_24) {
   if (var_1_34 && stepLocal_2) {
    var_1_33 = ((var_1_35 - (32 - var_1_36)) + var_1_32);
   } else {
    var_1_33 = (var_1_35 + var_1_30);
   }
  } else {
   var_1_33 = ((((var_1_29 - var_1_35) < 0 ) ? -(var_1_29 - var_1_35) : (var_1_29 - var_1_35)));
  }
 } else {
  var_1_33 = var_1_13;
 }
 unsigned char stepLocal_5 = var_1_21;
 signed long int stepLocal_4 = var_1_14;
 if (stepLocal_5 && var_1_7) {
  if (stepLocal_4 != ((var_1_30 << 1) + (var_1_8 << var_1_36))) {
   var_1_37 = (-50 + ((((var_1_32) < (var_1_36)) ? (var_1_32) : (var_1_36))));
  }
 }
 var_1_38 = ((((var_1_8) < (var_1_32)) ? (var_1_8) : (var_1_32)));
 if ((var_1_19 % var_1_9) != var_1_20) {
  var_1_41 = (127.76f + 64.2f);
 }
 unsigned char stepLocal_9 = var_1_15 == var_1_30;
 if ((var_1_26 - ((((var_1_27) < (var_1_25)) ? (var_1_27) : (var_1_25)))) == (var_1_43 / var_1_16)) {
  if (var_1_34 && stepLocal_9) {
   if (! (var_1_36 >= (var_1_17 ^ var_1_11))) {
    var_1_46 = var_1_30;
   } else {
    var_1_46 = (((((var_1_29 - 10)) < ((var_1_36 + var_1_35))) ? ((var_1_29 - 10)) : ((var_1_36 + var_1_35))));
   }
  }
 }
 unsigned long int stepLocal_13 = var_1_17;
 unsigned long int stepLocal_12 = var_1_11 * var_1_20;
 if (stepLocal_12 > 5u) {
  var_1_50 = (((((var_1_32 + var_1_51)) < (var_1_31)) ? ((var_1_32 + var_1_51)) : (var_1_31)));
 } else {
  if ((10 - var_1_32) > stepLocal_13) {
   var_1_50 = ((var_1_40 - var_1_31) + ((((var_1_13 - var_1_36) < 0 ) ? -(var_1_13 - var_1_36) : (var_1_13 - var_1_36))));
  }
 }
 unsigned long int stepLocal_16 = 16u + (var_1_38 ^ var_1_15);
 if (stepLocal_16 >= var_1_50) {
  var_1_58 = (((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))) - var_1_27);
 }
 if (var_1_21) {
  var_1_59 = var_1_30;
 } else {
  var_1_59 = var_1_32;
 }
 if (var_1_34) {
  var_1_60 = 1.000000000004E11f;
 } else {
  var_1_60 = 3.5f;
 }
 var_1_63 = var_1_30;
 signed long int stepLocal_17 = var_1_51 / ((((var_1_35) < (var_1_62)) ? (var_1_35) : (var_1_62)));
 if (stepLocal_17 >= (var_1_17 ^ var_1_20)) {
  var_1_61 = ((var_1_26 - 4.8) + var_1_27);
 } else {
  var_1_61 = var_1_27;
 }
 if (((((-10) < (var_1_20)) ? (-10) : (var_1_20))) >= (var_1_32 * (1 / var_1_29))) {
  var_1_54 = ((((var_1_9) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_9) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))));
 } else {
  var_1_54 = var_1_18;
 }
 signed long int stepLocal_1 = var_1_54;
 if (var_1_7) {
  var_1_28 = (var_1_29 - (var_1_30 + ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32)))));
 } else {
  if (stepLocal_1 < (var_1_30 / var_1_29)) {
   var_1_28 = var_1_30;
  } else {
   var_1_28 = ((((var_1_13) < (var_1_29)) ? (var_1_13) : (var_1_29)));
  }
 }
 if (((((var_1_60) < ((var_1_27 - var_1_26))) ? (var_1_60) : ((var_1_27 - var_1_26)))) > var_1_61) {
  var_1_42 = (var_1_43 + var_1_27);
 }
 signed long int stepLocal_11 = var_1_54;
 unsigned char stepLocal_10 = var_1_7;
 if (var_1_14 < stepLocal_11) {
  if ((var_1_34 && (var_1_41 <= var_1_42)) || stepLocal_10) {
   var_1_47 = var_1_9;
  }
 } else {
  var_1_47 = (((((var_1_9 - var_1_35) < 0 ) ? -(var_1_9 - var_1_35) : (var_1_9 - var_1_35))) + 25);
 }
 signed long int stepLocal_0 = var_1_54;
 if (var_1_15 > stepLocal_0) {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 } else {
  var_1_1 = var_1_4;
 }
 if ((var_1_4 * var_1_61) == var_1_1) {
  if (var_1_7) {
   var_1_5 = (((10000 + var_1_8) + var_1_9) - var_1_10);
  } else {
   var_1_5 = (var_1_11 - var_1_8);
  }
 } else {
  if (var_1_61 >= (var_1_4 + 7.75)) {
   var_1_5 = var_1_9;
  } else {
   var_1_5 = var_1_11;
  }
 }
 if ((var_1_11 - var_1_5) > var_1_36) {
  var_1_52 = ((((8) < (var_1_13)) ? (8) : (var_1_13)));
 }
 unsigned char stepLocal_8 = var_1_19;
 if (var_1_7) {
  if (var_1_15 > stepLocal_8) {
   var_1_44 = var_1_18;
  } else {
   var_1_44 = (((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < 0 ) ? -((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) : ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))));
  }
 }
 signed long int stepLocal_7 = var_1_44;
 unsigned short int stepLocal_6 = var_1_11;
 if (var_1_21) {
  if (2 >= stepLocal_6) {
   if (stepLocal_7 >= (var_1_22 * var_1_38)) {
    var_1_39 = (var_1_11 - (var_1_36 + (var_1_44 + var_1_40)));
   } else {
    var_1_39 = ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (var_1_32)) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (var_1_32)));
   }
  } else {
   var_1_39 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
  }
 }
 if (var_1_39 <= var_1_8) {
  var_1_55 = ((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) > (var_1_27)) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (var_1_27)));
 }
 if (var_1_39 >= var_1_30) {
  if (var_1_7 && var_1_34) {
   var_1_56 = (64 + var_1_31);
  } else {
   if (1.000000002E8 > (var_1_25 * var_1_4)) {
    var_1_56 = (((((var_1_11) < (var_1_57)) ? (var_1_11) : (var_1_57))) - var_1_15);
   } else {
    var_1_56 = var_1_39;
   }
  }
 }
 if (var_1_16 > var_1_43) {
  if (var_1_34) {
   var_1_45 = (var_1_56 - var_1_40);
  }
 }
 unsigned char stepLocal_15 = (var_1_43 / var_1_16) < var_1_60;
 unsigned long int stepLocal_14 = var_1_20;
 if (var_1_56 < stepLocal_14) {
  if ((var_1_20 > 4) && stepLocal_15) {
   var_1_53 = ((((var_1_32) < (((((var_1_36 + var_1_31) < 0 ) ? -(var_1_36 + var_1_31) : (var_1_36 + var_1_31))))) ? (var_1_32) : (((((var_1_36 + var_1_31) < 0 ) ? -(var_1_36 + var_1_31) : (var_1_36 + var_1_31))))));
  } else {
   var_1_53 = (var_1_31 - (var_1_36 + var_1_32));
  }
 } else {
  var_1_53 = (((((var_1_32) < (var_1_31)) ? (var_1_32) : (var_1_31))) - var_1_30);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 8192);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 16384);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 536870912);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 127);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 64);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 63);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 31);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 8191);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_51 >= -16383);
 assume_abort_if_not(var_1_51 <= 16383);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 32767);
 assume_abort_if_not(var_1_57 <= 65534);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -128);
 assume_abort_if_not(var_1_62 <= 127);
 assume_abort_if_not(var_1_62 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return (((((((((((((((((((((((((((((((var_1_15 > var_1_54) ? (var_1_1 == ((double) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_1 == ((double) var_1_4))) && (((var_1_4 * var_1_61) == var_1_1) ? (var_1_7 ? (var_1_5 == ((unsigned short int) (((10000 + var_1_8) + var_1_9) - var_1_10))) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_8)))) : ((var_1_61 >= (var_1_4 + 7.75)) ? (var_1_5 == ((unsigned short int) var_1_9)) : (var_1_5 == ((unsigned short int) var_1_11))))) && (var_1_12 == ((unsigned char) var_1_13))) && (var_1_14 == ((signed long int) (var_1_13 + (var_1_8 + var_1_9))))) && (((last_1_var_1_61 / ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) < var_1_4) ? (var_1_15 == ((signed long int) (((((last_1_var_1_38 - var_1_9)) > (last_1_var_1_38)) ? ((last_1_var_1_38 - var_1_9)) : (last_1_var_1_38))))) : (var_1_15 == ((signed long int) ((((var_1_8) < (var_1_13)) ? (var_1_8) : (var_1_13))))))) && (var_1_17 == ((unsigned long int) (var_1_10 + ((var_1_9 + var_1_18) + var_1_13))))) && ((-16 <= var_1_13) ? (var_1_19 == ((unsigned char) 100)) : (var_1_19 == ((unsigned char) 8)))) && ((var_1_7 || var_1_21) ? (var_1_20 == ((unsigned long int) (var_1_18 + last_1_var_1_20))) : (((last_1_var_1_38 / (var_1_22 - var_1_8)) < (last_1_var_1_38 / var_1_9)) ? (var_1_20 == ((unsigned long int) (64u + var_1_10))) : (var_1_20 == ((unsigned long int) ((((var_1_9) < (last_1_var_1_52)) ? (var_1_9) : (last_1_var_1_52)))))))) && (var_1_24 == ((float) (var_1_25 - (var_1_26 + var_1_27))))) && (var_1_7 ? (var_1_28 == ((unsigned char) (var_1_29 - (var_1_30 + ((((var_1_31) > (var_1_32)) ? (var_1_31) : (var_1_32))))))) : ((var_1_54 < (var_1_30 / var_1_29)) ? (var_1_28 == ((unsigned char) var_1_30)) : (var_1_28 == ((unsigned char) ((((var_1_13) < (var_1_29)) ? (var_1_13) : (var_1_29)))))))) && ((var_1_7 || var_1_34) ? ((((((var_1_4) < (var_1_27)) ? (var_1_4) : (var_1_27))) >= var_1_24) ? ((var_1_34 && (var_1_11 > 25)) ? (var_1_33 == ((unsigned char) ((var_1_35 - (32 - var_1_36)) + var_1_32))) : (var_1_33 == ((unsigned char) (var_1_35 + var_1_30)))) : (var_1_33 == ((unsigned char) ((((var_1_29 - var_1_35) < 0 ) ? -(var_1_29 - var_1_35) : (var_1_29 - var_1_35)))))) : (var_1_33 == ((unsigned char) var_1_13)))) && ((var_1_21 && var_1_7) ? ((var_1_14 != ((var_1_30 << 1) + (var_1_8 << var_1_36))) ? (var_1_37 == ((signed char) (-50 + ((((var_1_32) < (var_1_36)) ? (var_1_32) : (var_1_36)))))) : 1) : 1)) && (var_1_38 == ((unsigned long int) ((((var_1_8) < (var_1_32)) ? (var_1_8) : (var_1_32)))))) && (var_1_21 ? ((2 >= var_1_11) ? ((var_1_44 >= (var_1_22 * var_1_38)) ? (var_1_39 == ((unsigned short int) (var_1_11 - (var_1_36 + (var_1_44 + var_1_40))))) : (var_1_39 == ((unsigned short int) ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (var_1_32)) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (var_1_32)))))) : (var_1_39 == ((unsigned short int) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))) : 1)) && (((var_1_19 % var_1_9) != var_1_20) ? (var_1_41 == ((float) (127.76f + 64.2f))) : 1)) && ((((((var_1_60) < ((var_1_27 - var_1_26))) ? (var_1_60) : ((var_1_27 - var_1_26)))) > var_1_61) ? (var_1_42 == ((float) (var_1_43 + var_1_27))) : 1)) && (var_1_7 ? ((var_1_15 > var_1_19) ? (var_1_44 == ((signed long int) var_1_18)) : (var_1_44 == ((signed long int) (((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < 0 ) ? -((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) : ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))))))) : 1)) && ((var_1_16 > var_1_43) ? (var_1_34 ? (var_1_45 == ((signed short int) (var_1_56 - var_1_40))) : 1) : 1)) && (((var_1_26 - ((((var_1_27) < (var_1_25)) ? (var_1_27) : (var_1_25)))) == (var_1_43 / var_1_16)) ? ((var_1_34 && (var_1_15 == var_1_30)) ? ((! (var_1_36 >= (var_1_17 ^ var_1_11))) ? (var_1_46 == ((unsigned char) var_1_30)) : (var_1_46 == ((unsigned char) (((((var_1_29 - 10)) < ((var_1_36 + var_1_35))) ? ((var_1_29 - 10)) : ((var_1_36 + var_1_35))))))) : 1) : 1)) && ((var_1_14 < var_1_54) ? (((var_1_34 && (var_1_41 <= var_1_42)) || var_1_7) ? (var_1_47 == ((unsigned short int) var_1_9)) : 1) : (var_1_47 == ((unsigned short int) (((((var_1_9 - var_1_35) < 0 ) ? -(var_1_9 - var_1_35) : (var_1_9 - var_1_35))) + 25))))) && (((var_1_11 * var_1_20) > 5u) ? (var_1_50 == ((signed short int) (((((var_1_32 + var_1_51)) < (var_1_31)) ? ((var_1_32 + var_1_51)) : (var_1_31))))) : (((10 - var_1_32) > var_1_17) ? (var_1_50 == ((signed short int) ((var_1_40 - var_1_31) + ((((var_1_13 - var_1_36) < 0 ) ? -(var_1_13 - var_1_36) : (var_1_13 - var_1_36)))))) : 1))) && (((var_1_11 - var_1_5) > var_1_36) ? (var_1_52 == ((unsigned char) ((((8) < (var_1_13)) ? (8) : (var_1_13))))) : 1)) && ((var_1_56 < var_1_20) ? (((var_1_20 > 4) && ((var_1_43 / var_1_16) < var_1_60)) ? (var_1_53 == ((signed char) ((((var_1_32) < (((((var_1_36 + var_1_31) < 0 ) ? -(var_1_36 + var_1_31) : (var_1_36 + var_1_31))))) ? (var_1_32) : (((((var_1_36 + var_1_31) < 0 ) ? -(var_1_36 + var_1_31) : (var_1_36 + var_1_31)))))))) : (var_1_53 == ((signed char) (var_1_31 - (var_1_36 + var_1_32))))) : (var_1_53 == ((signed char) (((((var_1_32) < (var_1_31)) ? (var_1_32) : (var_1_31))) - var_1_30))))) && ((((((-10) < (var_1_20)) ? (-10) : (var_1_20))) >= (var_1_32 * (1 / var_1_29))) ? (var_1_54 == ((signed long int) ((((var_1_9) > (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_9) : (((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))))) : (var_1_54 == ((signed long int) var_1_18)))) && ((var_1_39 <= var_1_8) ? (var_1_55 == ((double) ((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) > (var_1_27)) ? (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (var_1_27))))) : 1)) && ((var_1_39 >= var_1_30) ? ((var_1_7 && var_1_34) ? (var_1_56 == ((unsigned short int) (64 + var_1_31))) : ((1.000000002E8 > (var_1_25 * var_1_4)) ? (var_1_56 == ((unsigned short int) (((((var_1_11) < (var_1_57)) ? (var_1_11) : (var_1_57))) - var_1_15))) : (var_1_56 == ((unsigned short int) var_1_39)))) : 1)) && (((16u + (var_1_38 ^ var_1_15)) >= var_1_50) ? (var_1_58 == ((float) (((((var_1_26) > (var_1_25)) ? (var_1_26) : (var_1_25))) - var_1_27))) : 1)) && (var_1_21 ? (var_1_59 == ((signed char) var_1_30)) : (var_1_59 == ((signed char) var_1_32)))) && (var_1_34 ? (var_1_60 == ((float) 1.000000000004E11f)) : (var_1_60 == ((float) 3.5f)))) && (((var_1_51 / ((((var_1_35) < (var_1_62)) ? (var_1_35) : (var_1_62)))) >= (var_1_17 ^ var_1_20)) ? (var_1_61 == ((double) ((var_1_26 - 4.8) + var_1_27))) : (var_1_61 == ((double) var_1_27)))) && (var_1_63 == ((signed char) var_1_30))
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
