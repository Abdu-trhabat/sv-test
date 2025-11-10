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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.8;
float var_1_6 = 16.375;
float var_1_7 = 0.25;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 128;
unsigned long int var_1_12 = 256;
double var_1_13 = 255.5;
double var_1_14 = 0.0;
double var_1_15 = 0.0;
double var_1_16 = 100.3;
signed short int var_1_17 = 64;
signed short int var_1_18 = 16;
double var_1_20 = 7.3;
unsigned short int var_1_21 = 64;
signed short int var_1_22 = 8;
float var_1_23 = 255.75;
unsigned char var_1_24 = 128;
unsigned short int var_1_25 = 56585;
unsigned short int var_1_26 = 61922;
unsigned short int var_1_27 = 18146;
unsigned long int var_1_28 = 4;
unsigned long int var_1_29 = 0;
unsigned long int var_1_30 = 4;
unsigned short int var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
float var_1_34 = 2.75;
signed long int var_1_35 = -4;
signed short int var_1_37 = -8;
double var_1_38 = 2.5;
double var_1_39 = 1.129;
double var_1_40 = 15.75;
double var_1_41 = 10000000.9;
double var_1_42 = 9999999999.4;
double var_1_43 = 16.65;
signed short int var_1_44 = 5;
unsigned long int var_1_45 = 200;
unsigned long int var_1_47 = 2677322573;
signed short int var_1_48 = -5;
unsigned short int var_1_49 = 128;
unsigned short int var_1_50 = 30091;
float var_1_51 = 4.6;
unsigned short int var_1_52 = 128;
signed short int var_1_53 = -4;
signed short int var_1_54 = 4;
signed short int var_1_55 = 64;
unsigned long int var_1_56 = 5;
signed long int var_1_57 = 8;
signed char var_1_58 = -2;
unsigned char var_1_59 = 1;
signed char var_1_60 = 16;
signed char var_1_61 = 5;
signed char var_1_62 = -8;
signed char var_1_63 = 64;
signed char var_1_64 = 64;
unsigned short int var_1_65 = 5;
unsigned short int var_1_66 = 64;
unsigned char last_1_var_1_8 = 1;
unsigned long int last_1_var_1_11 = 128;
double last_1_var_1_13 = 255.5;
unsigned short int last_1_var_1_21 = 64;
unsigned long int last_1_var_1_28 = 4;
unsigned char last_1_var_1_32 = 1;
double last_1_var_1_38 = 2.5;
unsigned long int last_1_var_1_45 = 200;
signed short int last_1_var_1_53 = -4;
unsigned long int last_1_var_1_56 = 5;
signed long int last_1_var_1_57 = 8;
unsigned char last_1_var_1_59 = 1;
unsigned short int last_1_var_1_66 = 64;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = last_1_var_1_45 + (- 8u);
 if (var_1_7 != (last_1_var_1_38 * var_1_6)) {
  var_1_13 = ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7);
 } else {
  if ((var_1_14 - 100000.01f) > last_1_var_1_38) {
   if (var_1_9) {
    if (var_1_10) {
     if ((var_1_18 + last_1_var_1_11) >= stepLocal_1) {
      if (! last_1_var_1_8) {
       var_1_13 = var_1_14;
      } else {
       var_1_13 = (var_1_16 + var_1_20);
      }
     }
    } else {
     var_1_13 = (var_1_14 - var_1_15);
    }
   }
  } else {
   var_1_13 = ((((0.775) < 0 ) ? -(0.775) : (0.775)));
  }
 }
 if (last_1_var_1_13 <= ((var_1_40 + var_1_23) * var_1_39)) {
  var_1_57 = (var_1_18 - ((((var_1_26) < (last_1_var_1_28)) ? (var_1_26) : (last_1_var_1_28))));
 } else {
  var_1_57 = (last_1_var_1_66 + last_1_var_1_21);
 }
 unsigned char stepLocal_4 = var_1_10;
 if (stepLocal_4 || last_1_var_1_32) {
  var_1_28 = 100000000u;
 }
 unsigned long int stepLocal_11 = last_1_var_1_56;
 if (! var_1_9) {
  if (last_1_var_1_53 < stepLocal_11) {
   var_1_45 = (((((var_1_47 - var_1_24)) < (((((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57))))) ? ((var_1_47 - var_1_24)) : (((((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57))))));
  }
 } else {
  if (! last_1_var_1_32) {
   var_1_45 = var_1_47;
  }
 }
 if (var_1_9) {
  var_1_11 = 0u;
 } else {
  if (var_1_10) {
   var_1_11 = ((((8u + var_1_12) < 0 ) ? -(8u + var_1_12) : (8u + var_1_12)));
  } else {
   if (var_1_6 < 127.5f) {
    var_1_11 = var_1_12;
   }
  }
 }
 var_1_31 = ((var_1_24 + var_1_22) + var_1_27);
 if (var_1_20 > (var_1_39 * (var_1_6 - var_1_42))) {
  var_1_48 = (-2 + (64 - var_1_24));
 } else {
  var_1_48 = (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))));
 }
 signed short int stepLocal_12 = var_1_17;
 if (var_1_12 <= stepLocal_12) {
  var_1_49 = (var_1_17 + var_1_27);
 } else {
  var_1_49 = ((var_1_27 + var_1_50) - var_1_24);
 }
 unsigned long int stepLocal_14 = 2u;
 signed long int stepLocal_13 = var_1_35;
 if (var_1_11 == stepLocal_14) {
  var_1_51 = var_1_41;
 } else {
  if (var_1_27 >= stepLocal_13) {
   var_1_51 = 63.4f;
  } else {
   if (var_1_20 == var_1_6) {
    var_1_51 = ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)));
   }
  }
 }
 if (var_1_11 <= -5) {
  var_1_52 = ((((((((var_1_24) < (25)) ? (var_1_24) : (25))) < 0 ) ? -((((var_1_24) < (25)) ? (var_1_24) : (25))) : ((((var_1_24) < (25)) ? (var_1_24) : (25))))) + var_1_50);
 }
 if (var_1_10) {
  var_1_58 = var_1_22;
 }
 if (last_1_var_1_59) {
  var_1_59 = var_1_33;
 } else {
  var_1_59 = var_1_9;
 }
 var_1_60 = ((((((var_1_22 + var_1_61) + var_1_62)) > ((((((var_1_63) > (var_1_64)) ? (var_1_63) : (var_1_64))) - 2))) ? (((var_1_22 + var_1_61) + var_1_62)) : ((((((var_1_63) > (var_1_64)) ? (var_1_63) : (var_1_64))) - 2))));
 var_1_65 = var_1_26;
 var_1_66 = var_1_27;
 unsigned long int stepLocal_3 = var_1_12;
 unsigned long int stepLocal_2 = var_1_45 * (var_1_17 >> var_1_22);
 if (stepLocal_2 != (var_1_45 + (var_1_18 / 5u))) {
  if (var_1_13 < var_1_15) {
   if ((((((var_1_14 / var_1_23)) < (((((127.25f) < (var_1_7)) ? (127.25f) : (var_1_7))))) ? ((var_1_14 / var_1_23)) : (((((127.25f) < (var_1_7)) ? (127.25f) : (var_1_7)))))) <= var_1_20) {
    var_1_21 = (var_1_17 + var_1_22);
   } else {
    if ((var_1_24 - var_1_22) > stepLocal_3) {
     var_1_21 = (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_22);
    } else {
     var_1_21 = ((((var_1_24) > (var_1_17)) ? (var_1_24) : (var_1_17)));
    }
   }
  } else {
   var_1_21 = ((((var_1_18) > (var_1_26)) ? (var_1_18) : (var_1_26)));
  }
 } else {
  var_1_21 = (var_1_22 + (var_1_27 - var_1_24));
 }
 unsigned long int stepLocal_6 = var_1_28 * ((((0) < (-16)) ? (0) : (-16)));
 unsigned long int stepLocal_5 = var_1_28 + var_1_27;
 if (stepLocal_5 <= var_1_28) {
  var_1_29 = var_1_22;
 } else {
  if (1 != stepLocal_6) {
   var_1_29 = ((((((((((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) < (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) ? (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) : (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))))) < ((var_1_27 + var_1_24))) ? (((((((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) < (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) ? (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) : (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))))) : ((var_1_27 + var_1_24))));
  } else {
   var_1_29 = ((((var_1_21) < (var_1_12)) ? (var_1_21) : (var_1_12)));
  }
 }
 if ((var_1_18 * (var_1_11 + var_1_29)) > ((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) {
  var_1_43 = (((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))));
 }
 unsigned long int stepLocal_7 = var_1_29;
 if (stepLocal_7 < var_1_25) {
  var_1_32 = var_1_33;
 }
 if (var_1_11 < var_1_45) {
  var_1_53 = ((((var_1_24) < (var_1_22)) ? (var_1_24) : (var_1_22)));
 } else {
  var_1_53 = (var_1_24 + ((((var_1_22) < ((var_1_54 - var_1_55))) ? (var_1_22) : ((var_1_54 - var_1_55)))));
 }
 if ((64.3f * var_1_43) >= var_1_14) {
  var_1_37 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 } else {
  var_1_37 = (var_1_22 - var_1_24);
 }
 signed long int stepLocal_10 = (var_1_18 >> 2u) * var_1_27;
 unsigned short int stepLocal_9 = var_1_26;
 if ((((((8) > (var_1_29)) ? (8) : (var_1_29))) / 16) > stepLocal_9) {
  if (((((var_1_57) < ((var_1_12 << var_1_57))) ? (var_1_57) : ((var_1_12 << var_1_57)))) < stepLocal_10) {
   var_1_44 = (var_1_22 + var_1_24);
  } else {
   var_1_44 = ((((((var_1_24 + var_1_22) + 4)) < (-10000)) ? (((var_1_24 + var_1_22) + 4)) : (-10000)));
  }
 }
 unsigned long int stepLocal_15 = (((var_1_66) < (var_1_11)) ? (var_1_66) : (var_1_11));
 if (stepLocal_15 <= (~ var_1_30)) {
  var_1_56 = (var_1_26 + (var_1_31 + var_1_54));
 } else {
  var_1_56 = ((((var_1_30) < (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (var_1_54)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (var_1_54))))) ? (var_1_30) : (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (var_1_54)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (var_1_54))))));
 }
 signed long int stepLocal_0 = var_1_57;
 if (((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))) <= var_1_6) {
  if (1u < stepLocal_0) {
   var_1_8 = (var_1_9 && var_1_10);
  }
 }
 unsigned long int stepLocal_8 = (((8) > (var_1_28)) ? (8) : (var_1_28));
 if (stepLocal_8 > var_1_57) {
  var_1_38 = (((((((var_1_7) < (16.4)) ? (var_1_7) : (16.4))) < 0 ) ? -((((var_1_7) < (16.4)) ? (var_1_7) : (16.4))) : ((((var_1_7) < (16.4)) ? (var_1_7) : (16.4)))));
 } else {
  if (var_1_16 > ((var_1_39 + var_1_40) - (var_1_41 + var_1_42))) {
   if (! (var_1_45 == var_1_56)) {
    var_1_38 = (((((var_1_41 - (5.6 + var_1_16))) < (var_1_39)) ? ((var_1_41 - (5.6 + var_1_16))) : (var_1_39)));
   }
  }
 }
 if (((~ var_1_56) + (var_1_56 + var_1_45)) <= var_1_45) {
  var_1_1 = (var_1_6 - var_1_7);
 }
 if (((var_1_18 / 2) / var_1_22) < ((var_1_29 ^ var_1_56) / ((((var_1_35) < (var_1_25)) ? (var_1_35) : (var_1_25))))) {
  if (var_1_30 == (((((var_1_45) < (var_1_28)) ? (var_1_45) : (var_1_28))) + var_1_18)) {
   var_1_34 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
  } else {
   var_1_34 = 0.64f;
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 4611686.018427383000e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 4611686.018427383000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 14);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 assume_abort_if_not(var_1_23 != 0.0F);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 127);
 assume_abort_if_not(var_1_24 <= 255);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 32767);
 assume_abort_if_not(var_1_25 <= 65534);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 16383);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -2147483648);
 assume_abort_if_not(var_1_35 <= 2147483647);
 assume_abort_if_not(var_1_35 != 0);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427388000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427388000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427388000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427388000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 2147483647);
 assume_abort_if_not(var_1_47 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 16384);
 assume_abort_if_not(var_1_50 <= 32767);
 var_1_54 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 16383);
 var_1_55 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 16383);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= -31);
 assume_abort_if_not(var_1_61 <= 31);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -63);
 assume_abort_if_not(var_1_62 <= 63);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= -1);
 assume_abort_if_not(var_1_63 <= 126);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= -1);
 assume_abort_if_not(var_1_64 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_66 = var_1_66;
}
int property(void) {
 return (((((((((((((((((((((((((((((~ var_1_56) + (var_1_56 + var_1_45)) <= var_1_45) ? (var_1_1 == ((float) (var_1_6 - var_1_7))) : 1) && ((((((var_1_7) < (var_1_43)) ? (var_1_7) : (var_1_43))) <= var_1_6) ? ((1u < var_1_57) ? (var_1_8 == ((unsigned char) (var_1_9 && var_1_10))) : 1) : 1)) && (var_1_9 ? (var_1_11 == ((unsigned long int) 0u)) : (var_1_10 ? (var_1_11 == ((unsigned long int) ((((8u + var_1_12) < 0 ) ? -(8u + var_1_12) : (8u + var_1_12))))) : ((var_1_6 < 127.5f) ? (var_1_11 == ((unsigned long int) var_1_12)) : 1)))) && ((var_1_7 != (last_1_var_1_38 * var_1_6)) ? (var_1_13 == ((double) ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7))) : (((var_1_14 - 100000.01f) > last_1_var_1_38) ? (var_1_9 ? (var_1_10 ? (((var_1_18 + last_1_var_1_11) >= (last_1_var_1_45 + (- 8u))) ? ((! last_1_var_1_8) ? (var_1_13 == ((double) var_1_14)) : (var_1_13 == ((double) (var_1_16 + var_1_20)))) : 1) : (var_1_13 == ((double) (var_1_14 - var_1_15)))) : 1) : (var_1_13 == ((double) ((((0.775) < 0 ) ? -(0.775) : (0.775)))))))) && (((var_1_45 * (var_1_17 >> var_1_22)) != (var_1_45 + (var_1_18 / 5u))) ? ((var_1_13 < var_1_15) ? (((((((var_1_14 / var_1_23)) < (((((127.25f) < (var_1_7)) ? (127.25f) : (var_1_7))))) ? ((var_1_14 / var_1_23)) : (((((127.25f) < (var_1_7)) ? (127.25f) : (var_1_7)))))) <= var_1_20) ? (var_1_21 == ((unsigned short int) (var_1_17 + var_1_22))) : (((var_1_24 - var_1_22) > var_1_12) ? (var_1_21 == ((unsigned short int) (((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_22))) : (var_1_21 == ((unsigned short int) ((((var_1_24) > (var_1_17)) ? (var_1_24) : (var_1_17))))))) : (var_1_21 == ((unsigned short int) ((((var_1_18) > (var_1_26)) ? (var_1_18) : (var_1_26)))))) : (var_1_21 == ((unsigned short int) (var_1_22 + (var_1_27 - var_1_24)))))) && ((var_1_10 || last_1_var_1_32) ? (var_1_28 == ((unsigned long int) 100000000u)) : 1)) && (((var_1_28 + var_1_27) <= var_1_28) ? (var_1_29 == ((unsigned long int) var_1_22)) : ((1 != (var_1_28 * ((((0) < (-16)) ? (0) : (-16))))) ? (var_1_29 == ((unsigned long int) ((((((((((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) < (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) ? (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) : (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))))) < ((var_1_27 + var_1_24))) ? (((((((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) < (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))) ? (((((var_1_25) < (var_1_21)) ? (var_1_25) : (var_1_21)))) : (((((var_1_12) < (var_1_30)) ? (var_1_12) : (var_1_30))))))) : ((var_1_27 + var_1_24)))))) : (var_1_29 == ((unsigned long int) ((((var_1_21) < (var_1_12)) ? (var_1_21) : (var_1_12)))))))) && (var_1_31 == ((unsigned short int) ((var_1_24 + var_1_22) + var_1_27)))) && ((var_1_29 < var_1_25) ? (var_1_32 == ((unsigned char) var_1_33)) : 1)) && ((((var_1_18 / 2) / var_1_22) < ((var_1_29 ^ var_1_56) / ((((var_1_35) < (var_1_25)) ? (var_1_35) : (var_1_25))))) ? ((var_1_30 == (((((var_1_45) < (var_1_28)) ? (var_1_45) : (var_1_28))) + var_1_18)) ? (var_1_34 == ((float) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : (var_1_34 == ((float) 0.64f))) : 1)) && (((64.3f * var_1_43) >= var_1_14) ? (var_1_37 == ((signed short int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : (var_1_37 == ((signed short int) (var_1_22 - var_1_24))))) && ((((((8) > (var_1_28)) ? (8) : (var_1_28))) > var_1_57) ? (var_1_38 == ((double) (((((((var_1_7) < (16.4)) ? (var_1_7) : (16.4))) < 0 ) ? -((((var_1_7) < (16.4)) ? (var_1_7) : (16.4))) : ((((var_1_7) < (16.4)) ? (var_1_7) : (16.4))))))) : ((var_1_16 > ((var_1_39 + var_1_40) - (var_1_41 + var_1_42))) ? ((! (var_1_45 == var_1_56)) ? (var_1_38 == ((double) (((((var_1_41 - (5.6 + var_1_16))) < (var_1_39)) ? ((var_1_41 - (5.6 + var_1_16))) : (var_1_39))))) : 1) : 1))) && (((var_1_18 * (var_1_11 + var_1_29)) > ((((-10) < (var_1_35)) ? (-10) : (var_1_35)))) ? (var_1_43 == ((double) (((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))))) : 1)) && (((((((8) > (var_1_29)) ? (8) : (var_1_29))) / 16) > var_1_26) ? ((((((var_1_57) < ((var_1_12 << var_1_57))) ? (var_1_57) : ((var_1_12 << var_1_57)))) < ((var_1_18 >> 2u) * var_1_27)) ? (var_1_44 == ((signed short int) (var_1_22 + var_1_24))) : (var_1_44 == ((signed short int) ((((((var_1_24 + var_1_22) + 4)) < (-10000)) ? (((var_1_24 + var_1_22) + 4)) : (-10000)))))) : 1)) && ((! var_1_9) ? ((last_1_var_1_53 < last_1_var_1_56) ? (var_1_45 == ((unsigned long int) (((((var_1_47 - var_1_24)) < (((((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57))))) ? ((var_1_47 - var_1_24)) : (((((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57)))))))) : 1) : ((! last_1_var_1_32) ? (var_1_45 == ((unsigned long int) var_1_47)) : 1))) && ((var_1_20 > (var_1_39 * (var_1_6 - var_1_42))) ? (var_1_48 == ((signed short int) (-2 + (64 - var_1_24)))) : (var_1_48 == ((signed short int) (((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) < 0 ) ? -((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) : ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))))) && ((var_1_12 <= var_1_17) ? (var_1_49 == ((unsigned short int) (var_1_17 + var_1_27))) : (var_1_49 == ((unsigned short int) ((var_1_27 + var_1_50) - var_1_24))))) && ((var_1_11 == 2u) ? (var_1_51 == ((float) var_1_41)) : ((var_1_27 >= var_1_35) ? (var_1_51 == ((float) 63.4f)) : ((var_1_20 == var_1_6) ? (var_1_51 == ((float) ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))))) : 1)))) && ((var_1_11 <= -5) ? (var_1_52 == ((unsigned short int) ((((((((var_1_24) < (25)) ? (var_1_24) : (25))) < 0 ) ? -((((var_1_24) < (25)) ? (var_1_24) : (25))) : ((((var_1_24) < (25)) ? (var_1_24) : (25))))) + var_1_50))) : 1)) && ((var_1_11 < var_1_45) ? (var_1_53 == ((signed short int) ((((var_1_24) < (var_1_22)) ? (var_1_24) : (var_1_22))))) : (var_1_53 == ((signed short int) (var_1_24 + ((((var_1_22) < ((var_1_54 - var_1_55))) ? (var_1_22) : ((var_1_54 - var_1_55))))))))) && ((((((var_1_66) < (var_1_11)) ? (var_1_66) : (var_1_11))) <= (~ var_1_30)) ? (var_1_56 == ((unsigned long int) (var_1_26 + (var_1_31 + var_1_54)))) : (var_1_56 == ((unsigned long int) ((((var_1_30) < (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (var_1_54)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (var_1_54))))) ? (var_1_30) : (((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) > (var_1_54)) ? (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (var_1_54)))))))))) && ((last_1_var_1_13 <= ((var_1_40 + var_1_23) * var_1_39)) ? (var_1_57 == ((signed long int) (var_1_18 - ((((var_1_26) < (last_1_var_1_28)) ? (var_1_26) : (last_1_var_1_28)))))) : (var_1_57 == ((signed long int) (last_1_var_1_66 + last_1_var_1_21))))) && (var_1_10 ? (var_1_58 == ((signed char) var_1_22)) : 1)) && (last_1_var_1_59 ? (var_1_59 == ((unsigned char) var_1_33)) : (var_1_59 == ((unsigned char) var_1_9)))) && (var_1_60 == ((signed char) ((((((var_1_22 + var_1_61) + var_1_62)) > ((((((var_1_63) > (var_1_64)) ? (var_1_63) : (var_1_64))) - 2))) ? (((var_1_22 + var_1_61) + var_1_62)) : ((((((var_1_63) > (var_1_64)) ? (var_1_63) : (var_1_64))) - 2))))))) && (var_1_65 == ((unsigned short int) var_1_26))) && (var_1_66 == ((unsigned short int) var_1_27))
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
