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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch78Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 63223;
unsigned short int var_1_4 = 63229;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 256;
unsigned short int var_1_7 = 10;
double var_1_8 = 128.85;
double var_1_9 = 25.5;
double var_1_10 = 4.4;
signed char var_1_11 = -10;
signed char var_1_13 = -50;
signed char var_1_14 = 64;
signed char var_1_15 = 4;
signed char var_1_16 = 32;
signed char var_1_17 = 4;
unsigned long int var_1_18 = 8;
signed char var_1_19 = 5;
signed char var_1_20 = -32;
float var_1_21 = 127.6;
float var_1_22 = 255.86;
float var_1_23 = 49.8;
float var_1_24 = 7.75;
float var_1_25 = 256.5;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 16;
float var_1_30 = 5.5;
signed long int var_1_31 = -1;
unsigned long int var_1_32 = 4;
unsigned long int var_1_33 = 2019950285;
unsigned long int var_1_34 = 1190553383;
double var_1_35 = 2.5;
double var_1_36 = 63.25;
double var_1_37 = 0.4;
signed char var_1_38 = -8;
signed char var_1_39 = -16;
signed short int var_1_40 = 128;
unsigned char var_1_41 = 0;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 0;
signed char var_1_45 = 64;
unsigned char var_1_46 = 5;
float var_1_47 = -0.5;
unsigned char var_1_48 = 50;
signed long int var_1_49 = -256;
signed long int var_1_50 = 100;
signed long int var_1_51 = 1;
unsigned short int var_1_52 = 16;
unsigned long int var_1_54 = 200;
signed long int var_1_55 = 2;
unsigned short int var_1_56 = 256;
float var_1_57 = 100.5;
signed long int var_1_58 = -32;
signed char var_1_59 = 50;
float last_1_var_1_21 = 127.6;
unsigned char last_1_var_1_26 = 128;
signed char last_1_var_1_38 = -8;
unsigned long int last_1_var_1_44 = 0;
signed long int last_1_var_1_49 = -256;
signed long int last_1_var_1_55 = 2;
signed long int last_1_var_1_58 = -32;
void initially(void) {
}
void step(void) {
 signed char stepLocal_4 = var_1_17;
 signed long int stepLocal_3 = last_1_var_1_49 / var_1_3;
 if (((var_1_4 / var_1_19) ^ (var_1_16 / var_1_20)) < stepLocal_3) {
  var_1_18 = (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_4 + (var_1_17 + var_1_15)));
 } else {
  if ((- var_1_6) >= stepLocal_4) {
   var_1_18 = var_1_4;
  } else {
   var_1_18 = var_1_6;
  }
 }
 signed char stepLocal_12 = var_1_39;
 if (stepLocal_12 > var_1_18) {
  var_1_55 = ((var_1_19 + var_1_29) + last_1_var_1_55);
 } else {
  var_1_55 = ((((var_1_16) < (var_1_3)) ? (var_1_16) : (var_1_3)));
 }
 signed long int stepLocal_6 = (((((((last_1_var_1_58) < (last_1_var_1_26)) ? (last_1_var_1_58) : (last_1_var_1_26)))) < (var_1_29)) ? (((((last_1_var_1_58) < (last_1_var_1_26)) ? (last_1_var_1_58) : (last_1_var_1_26)))) : (var_1_29));
 if (var_1_23 > last_1_var_1_21) {
  if (stepLocal_6 <= (var_1_15 | ((((last_1_var_1_44) > (last_1_var_1_38)) ? (last_1_var_1_44) : (last_1_var_1_38))))) {
   var_1_41 = (! (var_1_2 && var_1_43));
  }
 }
 if (var_1_41) {
  var_1_44 = (((((var_1_7) < (var_1_17)) ? (var_1_7) : (var_1_17))) + var_1_34);
 } else {
  var_1_44 = ((((var_1_34) > (var_1_5)) ? (var_1_34) : (var_1_5)));
 }
 if (var_1_41) {
  var_1_58 = -2;
 }
 if (var_1_25 <= (- var_1_10)) {
  if (var_1_41) {
   var_1_26 = ((((((var_1_27 - var_1_28) + var_1_29)) > (var_1_17)) ? (((var_1_27 - var_1_28) + var_1_29)) : (var_1_17)));
  }
 } else {
  var_1_26 = ((((var_1_17) > (var_1_27)) ? (var_1_17) : (var_1_27)));
 }
 if (var_1_41) {
  var_1_32 = ((var_1_33 + var_1_34) - ((((var_1_4) > (var_1_29)) ? (var_1_4) : (var_1_29))));
 } else {
  var_1_32 = var_1_29;
 }
 if (var_1_41) {
  var_1_35 = var_1_36;
 } else {
  var_1_35 = (var_1_25 + (var_1_24 - var_1_37));
 }
 unsigned short int stepLocal_1 = var_1_4;
 unsigned short int stepLocal_0 = var_1_6;
 if (! var_1_41) {
  var_1_1 = (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7));
 } else {
  if (stepLocal_0 <= (var_1_4 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) {
   if (stepLocal_1 <= 10) {
    var_1_1 = (var_1_4 - var_1_6);
   }
  } else {
   if (var_1_41) {
    var_1_1 = (((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < 0 ) ? -((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) : ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))));
   } else {
    var_1_1 = (1 + (27338 - var_1_7));
   }
  }
 }
 if (var_1_35 > var_1_9) {
  if (var_1_41) {
   if (var_1_41) {
    var_1_11 = var_1_13;
   } else {
    var_1_11 = (var_1_14 - var_1_15);
   }
  } else {
   var_1_11 = ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))));
  }
 }
 if (var_1_41) {
  var_1_31 = (var_1_3 - var_1_5);
 }
 if (var_1_41) {
  var_1_45 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 }
 var_1_46 = ((((((((var_1_28) > ((var_1_15 + 10))) ? (var_1_28) : ((var_1_15 + 10))))) > (((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))))) ? (((((var_1_28) > ((var_1_15 + 10))) ? (var_1_28) : ((var_1_15 + 10))))) : (((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))))));
 signed long int stepLocal_7 = ((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27))) - var_1_17;
 if (var_1_16 > stepLocal_7) {
  var_1_47 = (var_1_24 + ((((var_1_37) < (8.625f)) ? (var_1_37) : (8.625f))));
 }
 if (var_1_41) {
  if (var_1_15 >= ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) {
   var_1_59 = ((((((((((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) < (var_1_28)) ? (((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) : (var_1_28)))) > (var_1_17)) ? (((((((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) < (var_1_28)) ? (((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) : (var_1_28)))) : (var_1_17)));
  } else {
   var_1_59 = var_1_28;
  }
 }
 if ((- var_1_25) > var_1_36) {
  var_1_56 = (((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) < 0 ) ? -((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) : ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))));
 } else {
  if (var_1_43) {
   var_1_56 = var_1_55;
  } else {
   var_1_56 = ((((((((var_1_15) > (var_1_4)) ? (var_1_15) : (var_1_4)))) > (((((var_1_29) < ((var_1_18 + 10))) ? (var_1_29) : ((var_1_18 + 10)))))) ? (((((var_1_15) > (var_1_4)) ? (var_1_15) : (var_1_4)))) : (((((var_1_29) < ((var_1_18 + 10))) ? (var_1_29) : ((var_1_18 + 10)))))));
  }
 }
 unsigned char stepLocal_11 = var_1_44 < var_1_18;
 if ((((((64u) > (var_1_28)) ? (64u) : (var_1_28))) <= var_1_46) || stepLocal_11) {
  var_1_54 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_54 = ((((var_1_27) > (var_1_15)) ? (var_1_27) : (var_1_15)));
 }
 unsigned long int stepLocal_8 = var_1_54;
 if (stepLocal_8 >= (var_1_6 * var_1_18)) {
  var_1_48 = var_1_29;
 }
 unsigned char stepLocal_10 = var_1_48;
 unsigned long int stepLocal_9 = var_1_33 + var_1_3;
 if (stepLocal_9 >= var_1_29) {
  if ((- (- var_1_35)) <= var_1_24) {
   var_1_52 = ((((var_1_6) > ((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - var_1_15))) ? (var_1_6) : ((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - var_1_15))));
  }
 } else {
  if (! (var_1_39 < ((((var_1_16) > (var_1_58)) ? (var_1_16) : (var_1_58))))) {
   if ((var_1_56 * (var_1_50 / var_1_3)) < stepLocal_10) {
    var_1_52 = ((((var_1_7) < (1)) ? (var_1_7) : (1)));
   }
  }
 }
 if ((var_1_14 < var_1_6) || var_1_41) {
  if (var_1_54 <= var_1_6) {
   if (var_1_41) {
    var_1_21 = (var_1_22 - var_1_23);
   } else {
    var_1_21 = 4.3f;
   }
  } else {
   var_1_21 = ((((var_1_22) > (((var_1_24 + var_1_25) - var_1_23))) ? (var_1_22) : (((var_1_24 + var_1_25) - var_1_23))));
  }
 } else {
  var_1_21 = (var_1_9 + var_1_24);
 }
 unsigned char stepLocal_5 = var_1_32 > (var_1_6 << var_1_4);
 if (stepLocal_5 && var_1_41) {
  var_1_30 = ((((((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) < (var_1_22)) ? (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) : (var_1_22)));
 } else {
  if (var_1_41) {
   var_1_30 = (var_1_24 - var_1_22);
  } else {
   var_1_30 = var_1_24;
  }
 }
 unsigned short int stepLocal_2 = var_1_56;
 if (var_1_7 >= stepLocal_2) {
  var_1_8 = (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5)));
 } else {
  var_1_8 = var_1_10;
 }
 if (! ((~ 128u) > var_1_54)) {
  var_1_40 = ((((var_1_7 + var_1_13) < 0 ) ? -(var_1_7 + var_1_13) : (var_1_7 + var_1_13)));
 } else {
  if (var_1_41) {
   var_1_40 = ((((var_1_13) > (var_1_6)) ? (var_1_13) : (var_1_6)));
  }
 }
 if ((-2 + var_1_5) >= var_1_56) {
  if (! var_1_43) {
   var_1_49 = ((((var_1_27) < (var_1_29)) ? (var_1_27) : (var_1_29)));
  } else {
   var_1_49 = ((((var_1_29) < ((((((var_1_27 + var_1_50)) > ((var_1_28 - var_1_51))) ? ((var_1_27 + var_1_50)) : ((var_1_28 - var_1_51)))))) ? (var_1_29) : ((((((var_1_27 + var_1_50)) > ((var_1_28 - var_1_51))) ? ((var_1_27 + var_1_50)) : ((var_1_28 - var_1_51)))))));
  }
 } else {
  var_1_49 = (((((((var_1_52) > (var_1_3)) ? (var_1_52) : (var_1_3))) < 0 ) ? -((((var_1_52) > (var_1_3)) ? (var_1_52) : (var_1_3))) : ((((var_1_52) > (var_1_3)) ? (var_1_52) : (var_1_3)))));
 }
 if (! ((var_1_19 * var_1_27) < var_1_49)) {
  if (var_1_22 <= var_1_30) {
   var_1_38 = (((((var_1_28 + var_1_39)) > (var_1_17)) ? ((var_1_28 + var_1_39)) : (var_1_17)));
  }
 } else {
  var_1_38 = (var_1_39 + var_1_28);
 }
 signed long int stepLocal_14 = var_1_55;
 unsigned char stepLocal_13 = var_1_36 >= (- var_1_23);
 if (stepLocal_13 || ((var_1_48 | var_1_54) <= ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) {
  if (var_1_49 == stepLocal_14) {
   var_1_57 = var_1_9;
  }
 } else {
  var_1_57 = var_1_23;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 32767);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16384);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -128);
 assume_abort_if_not(var_1_20 <= 127);
 assume_abort_if_not(var_1_20 != 0);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 63);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 1073741823);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 1073741824);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_50 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_50 >= -1073741823);
 assume_abort_if_not(var_1_50 <= 1073741823);
 var_1_51 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_var_1_21 = var_1_21;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
}
int property(void) {
 return ((((((((((((((((((((((((((! var_1_41) ? (var_1_1 == ((unsigned short int) (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7)))) : ((var_1_6 <= (var_1_4 - ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? ((var_1_4 <= 10) ? (var_1_1 == ((unsigned short int) (var_1_4 - var_1_6))) : 1) : (var_1_41 ? (var_1_1 == ((unsigned short int) (((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) < 0 ) ? -((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) : ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))) : (var_1_1 == ((unsigned short int) (1 + (27338 - var_1_7))))))) && ((var_1_7 >= var_1_56) ? (var_1_8 == ((double) (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5))))) : (var_1_8 == ((double) var_1_10)))) && ((var_1_35 > var_1_9) ? (var_1_41 ? (var_1_41 ? (var_1_11 == ((signed char) var_1_13)) : (var_1_11 == ((signed char) (var_1_14 - var_1_15)))) : (var_1_11 == ((signed char) ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))))))) : 1)) && ((((var_1_4 / var_1_19) ^ (var_1_16 / var_1_20)) < (last_1_var_1_49 / var_1_3)) ? (var_1_18 == ((unsigned long int) (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) + (var_1_4 + (var_1_17 + var_1_15))))) : (((- var_1_6) >= var_1_17) ? (var_1_18 == ((unsigned long int) var_1_4)) : (var_1_18 == ((unsigned long int) var_1_6))))) && (((var_1_14 < var_1_6) || var_1_41) ? ((var_1_54 <= var_1_6) ? (var_1_41 ? (var_1_21 == ((float) (var_1_22 - var_1_23))) : (var_1_21 == ((float) 4.3f))) : (var_1_21 == ((float) ((((var_1_22) > (((var_1_24 + var_1_25) - var_1_23))) ? (var_1_22) : (((var_1_24 + var_1_25) - var_1_23))))))) : (var_1_21 == ((float) (var_1_9 + var_1_24))))) && ((var_1_25 <= (- var_1_10)) ? (var_1_41 ? (var_1_26 == ((unsigned char) ((((((var_1_27 - var_1_28) + var_1_29)) > (var_1_17)) ? (((var_1_27 - var_1_28) + var_1_29)) : (var_1_17))))) : 1) : (var_1_26 == ((unsigned char) ((((var_1_17) > (var_1_27)) ? (var_1_17) : (var_1_27))))))) && (((var_1_32 > (var_1_6 << var_1_4)) && var_1_41) ? (var_1_30 == ((float) ((((((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) < (var_1_22)) ? (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) : (var_1_22))))) : (var_1_41 ? (var_1_30 == ((float) (var_1_24 - var_1_22))) : (var_1_30 == ((float) var_1_24))))) && (var_1_41 ? (var_1_31 == ((signed long int) (var_1_3 - var_1_5))) : 1)) && (var_1_41 ? (var_1_32 == ((unsigned long int) ((var_1_33 + var_1_34) - ((((var_1_4) > (var_1_29)) ? (var_1_4) : (var_1_29)))))) : (var_1_32 == ((unsigned long int) var_1_29)))) && (var_1_41 ? (var_1_35 == ((double) var_1_36)) : (var_1_35 == ((double) (var_1_25 + (var_1_24 - var_1_37)))))) && ((! ((var_1_19 * var_1_27) < var_1_49)) ? ((var_1_22 <= var_1_30) ? (var_1_38 == ((signed char) (((((var_1_28 + var_1_39)) > (var_1_17)) ? ((var_1_28 + var_1_39)) : (var_1_17))))) : 1) : (var_1_38 == ((signed char) (var_1_39 + var_1_28))))) && ((! ((~ 128u) > var_1_54)) ? (var_1_40 == ((signed short int) ((((var_1_7 + var_1_13) < 0 ) ? -(var_1_7 + var_1_13) : (var_1_7 + var_1_13))))) : (var_1_41 ? (var_1_40 == ((signed short int) ((((var_1_13) > (var_1_6)) ? (var_1_13) : (var_1_6))))) : 1))) && ((var_1_23 > last_1_var_1_21) ? ((((((((((last_1_var_1_58) < (last_1_var_1_26)) ? (last_1_var_1_58) : (last_1_var_1_26)))) < (var_1_29)) ? (((((last_1_var_1_58) < (last_1_var_1_26)) ? (last_1_var_1_58) : (last_1_var_1_26)))) : (var_1_29))) <= (var_1_15 | ((((last_1_var_1_44) > (last_1_var_1_38)) ? (last_1_var_1_44) : (last_1_var_1_38))))) ? (var_1_41 == ((unsigned char) (! (var_1_2 && var_1_43)))) : 1) : 1)) && (var_1_41 ? (var_1_44 == ((unsigned long int) (((((var_1_7) < (var_1_17)) ? (var_1_7) : (var_1_17))) + var_1_34))) : (var_1_44 == ((unsigned long int) ((((var_1_34) > (var_1_5)) ? (var_1_34) : (var_1_5))))))) && (var_1_41 ? (var_1_45 == ((signed char) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : 1)) && (var_1_46 == ((unsigned char) ((((((((var_1_28) > ((var_1_15 + 10))) ? (var_1_28) : ((var_1_15 + 10))))) > (((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))))) ? (((((var_1_28) > ((var_1_15 + 10))) ? (var_1_28) : ((var_1_15 + 10))))) : (((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))))))))) && ((var_1_16 > (((((var_1_29) < (var_1_27)) ? (var_1_29) : (var_1_27))) - var_1_17)) ? (var_1_47 == ((float) (var_1_24 + ((((var_1_37) < (8.625f)) ? (var_1_37) : (8.625f)))))) : 1)) && ((var_1_54 >= (var_1_6 * var_1_18)) ? (var_1_48 == ((unsigned char) var_1_29)) : 1)) && (((-2 + var_1_5) >= var_1_56) ? ((! var_1_43) ? (var_1_49 == ((signed long int) ((((var_1_27) < (var_1_29)) ? (var_1_27) : (var_1_29))))) : (var_1_49 == ((signed long int) ((((var_1_29) < ((((((var_1_27 + var_1_50)) > ((var_1_28 - var_1_51))) ? ((var_1_27 + var_1_50)) : ((var_1_28 - var_1_51)))))) ? (var_1_29) : ((((((var_1_27 + var_1_50)) > ((var_1_28 - var_1_51))) ? ((var_1_27 + var_1_50)) : ((var_1_28 - var_1_51)))))))))) : (var_1_49 == ((signed long int) (((((((var_1_52) > (var_1_3)) ? (var_1_52) : (var_1_3))) < 0 ) ? -((((var_1_52) > (var_1_3)) ? (var_1_52) : (var_1_3))) : ((((var_1_52) > (var_1_3)) ? (var_1_52) : (var_1_3))))))))) && (((var_1_33 + var_1_3) >= var_1_29) ? (((- (- var_1_35)) <= var_1_24) ? (var_1_52 == ((unsigned short int) ((((var_1_6) > ((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - var_1_15))) ? (var_1_6) : ((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))) - var_1_15)))))) : 1) : ((! (var_1_39 < ((((var_1_16) > (var_1_58)) ? (var_1_16) : (var_1_58))))) ? (((var_1_56 * (var_1_50 / var_1_3)) < var_1_48) ? (var_1_52 == ((unsigned short int) ((((var_1_7) < (1)) ? (var_1_7) : (1))))) : 1) : 1))) && (((((((64u) > (var_1_28)) ? (64u) : (var_1_28))) <= var_1_46) || (var_1_44 < var_1_18)) ? (var_1_54 == ((unsigned long int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_54 == ((unsigned long int) ((((var_1_27) > (var_1_15)) ? (var_1_27) : (var_1_15))))))) && ((var_1_39 > var_1_18) ? (var_1_55 == ((signed long int) ((var_1_19 + var_1_29) + last_1_var_1_55))) : (var_1_55 == ((signed long int) ((((var_1_16) < (var_1_3)) ? (var_1_16) : (var_1_3))))))) && (((- var_1_25) > var_1_36) ? (var_1_56 == ((unsigned short int) (((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) < 0 ) ? -((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) : ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) : (var_1_43 ? (var_1_56 == ((unsigned short int) var_1_55)) : (var_1_56 == ((unsigned short int) ((((((((var_1_15) > (var_1_4)) ? (var_1_15) : (var_1_4)))) > (((((var_1_29) < ((var_1_18 + 10))) ? (var_1_29) : ((var_1_18 + 10)))))) ? (((((var_1_15) > (var_1_4)) ? (var_1_15) : (var_1_4)))) : (((((var_1_29) < ((var_1_18 + 10))) ? (var_1_29) : ((var_1_18 + 10)))))))))))) && (((var_1_36 >= (- var_1_23)) || ((var_1_48 | var_1_54) <= ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) ? ((var_1_49 == var_1_55) ? (var_1_57 == ((float) var_1_9)) : 1) : (var_1_57 == ((float) var_1_23)))) && (var_1_41 ? (var_1_58 == ((signed long int) -2)) : 1)) && (var_1_41 ? ((var_1_15 >= ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) ? (var_1_59 == ((signed char) ((((((((((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) < (var_1_28)) ? (((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) : (var_1_28)))) > (var_1_17)) ? (((((((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) < (var_1_28)) ? (((((var_1_16) > (var_1_39)) ? (var_1_16) : (var_1_39)))) : (var_1_28)))) : (var_1_17))))) : (var_1_59 == ((signed char) var_1_28))) : 1)
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
