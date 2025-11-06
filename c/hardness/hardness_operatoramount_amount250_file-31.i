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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 200;
unsigned char var_1_2 = 1;
unsigned long int var_1_3 = 0;
unsigned long int var_1_4 = 32;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 16;
unsigned char var_1_8 = 100;
unsigned char var_1_9 = 200;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 32;
double var_1_13 = 9.5;
double var_1_14 = 9.545;
double var_1_15 = 99.5;
double var_1_16 = 1.25;
unsigned char var_1_17 = 0;
double var_1_18 = 0.0;
double var_1_19 = 128.9;
double var_1_20 = 7.8;
float var_1_21 = 32.6;
float var_1_22 = 9999999999.5;
float var_1_23 = 256.5;
float var_1_24 = 15.5;
float var_1_25 = 99.7;
unsigned long int var_1_26 = 2149704737;
float var_1_27 = 63.5;
float var_1_28 = 49.7;
unsigned long int var_1_29 = 8;
unsigned long int var_1_30 = 8;
double var_1_31 = 8.98;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 50;
unsigned char var_1_36 = 1;
double var_1_37 = 0.0;
unsigned char var_1_38 = 1;
signed short int var_1_39 = 16;
signed char var_1_41 = 4;
signed char var_1_42 = -4;
signed char var_1_43 = 4;
signed char var_1_44 = 2;
signed char var_1_46 = -16;
signed char var_1_47 = 16;
unsigned long int var_1_48 = 10;
unsigned long int var_1_50 = 2;
unsigned long int var_1_51 = 3615055717;
double var_1_52 = 200.5;
double var_1_53 = 1.875;
double var_1_54 = 0.6;
unsigned short int var_1_55 = 0;
unsigned short int var_1_56 = 60035;
unsigned char var_1_57 = 64;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 50;
unsigned char var_1_60 = 100;
unsigned char var_1_61 = 8;
signed char var_1_62 = 4;
double last_1_var_1_13 = 9.5;
float last_1_var_1_21 = 32.6;
float last_1_var_1_25 = 99.7;
void initially(void) {
}
void step(void) {
 if (((last_1_var_1_21 * var_1_15) * var_1_24) < last_1_var_1_25) {
  var_1_48 = var_1_12;
 } else {
  if (((- var_1_18) * var_1_19) > last_1_var_1_13) {
   var_1_48 = ((var_1_8 + var_1_7) + var_1_50);
  } else {
   var_1_48 = (var_1_51 - ((((var_1_11) < (var_1_50)) ? (var_1_11) : (var_1_50))));
  }
 }
 if (var_1_17 || (var_1_9 >= var_1_8)) {
  var_1_29 = (5u + (32u + var_1_12));
 } else {
  if (! (var_1_17 && var_1_2)) {
   var_1_29 = (((((32u) < 0 ) ? -(32u) : (32u))) + var_1_8);
  } else {
   var_1_29 = ((((((var_1_12 + var_1_6)) < (var_1_8)) ? ((var_1_12 + var_1_6)) : (var_1_8))) + ((((var_1_30) < (var_1_7)) ? (var_1_30) : (var_1_7))));
  }
 }
 var_1_31 = (var_1_23 + var_1_19);
 if (var_1_7 >= (var_1_29 + var_1_11)) {
  if (var_1_6 >= var_1_11) {
   var_1_32 = (! var_1_33);
  } else {
   var_1_32 = (var_1_33 && var_1_34);
  }
 }
 if (var_1_32) {
  var_1_39 = ((var_1_8 - var_1_9) + var_1_36);
 }
 unsigned char stepLocal_10 = var_1_38;
 if (var_1_48 != stepLocal_10) {
  var_1_41 = ((((1) < (var_1_42)) ? (1) : (var_1_42)));
 }
 if ((var_1_38 + ((((32) < (var_1_12)) ? (32) : (var_1_12)))) >= var_1_48) {
  var_1_43 = ((((var_1_42) > (5)) ? (var_1_42) : (5)));
 } else {
  var_1_43 = -2;
 }
 signed long int stepLocal_12 = var_1_38 / ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
 if ((16 & (var_1_7 + var_1_36)) != stepLocal_12) {
  var_1_52 = ((((var_1_15) < (((((var_1_22) > (var_1_53)) ? (var_1_22) : (var_1_53))))) ? (var_1_15) : (((((var_1_22) > (var_1_53)) ? (var_1_22) : (var_1_53))))));
 } else {
  if (var_1_37 >= (100.4 + (var_1_19 - var_1_18))) {
   var_1_52 = (var_1_20 - (var_1_23 + var_1_22));
  } else {
   var_1_52 = (((((var_1_20 - ((((var_1_22) > (var_1_54)) ? (var_1_22) : (var_1_54))))) > (var_1_18)) ? ((var_1_20 - ((((var_1_22) > (var_1_54)) ? (var_1_22) : (var_1_54))))) : (var_1_18)));
  }
 }
 if (! ((var_1_29 ^ var_1_48) > var_1_48)) {
  if (((var_1_11 - var_1_38) / var_1_10) >= var_1_48) {
   if (var_1_32) {
    if (! (var_1_42 != var_1_47)) {
     var_1_55 = ((((var_1_6) > ((var_1_11 + var_1_12))) ? (var_1_6) : ((var_1_11 + var_1_12))));
    }
   } else {
    var_1_55 = (((((var_1_56 - var_1_36)) > ((32989 - (var_1_6 + 4)))) ? ((var_1_56 - var_1_36)) : ((32989 - (var_1_6 + 4)))));
   }
  } else {
   if (((100 + var_1_57) - var_1_12) == (var_1_29 + var_1_48)) {
    var_1_55 = (((((2) < ((256 + 1))) ? (2) : ((256 + 1)))) + var_1_11);
   } else {
    if (var_1_20 <= (- var_1_31)) {
     var_1_55 = ((((var_1_12) > (var_1_36)) ? (var_1_12) : (var_1_36)));
    }
   }
  }
 }
 unsigned long int stepLocal_2 = var_1_48;
 unsigned long int stepLocal_1 = var_1_6 + var_1_48;
 unsigned char stepLocal_0 = var_1_48 < var_1_4;
 if ((var_1_48 % var_1_4) >= stepLocal_2) {
  if (var_1_32 && stepLocal_0) {
   var_1_1 = var_1_6;
  }
 } else {
  if (stepLocal_1 > var_1_48) {
   var_1_1 = ((((((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) < (var_1_9)) ? (((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) : (var_1_9)));
  } else {
   var_1_1 = (((((var_1_10) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_10) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) - var_1_12);
  }
 }
 if (var_1_29 != var_1_8) {
  var_1_13 = (((((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) < (((((64.4) < 0 ) ? -(64.4) : (64.4))))) ? ((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) : (((((64.4) < 0 ) ? -(64.4) : (64.4))))));
 } else {
  if (var_1_32) {
   var_1_13 = ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_15)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_15)));
  } else {
   if (! var_1_32) {
    var_1_13 = (((((((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) < ((var_1_18 - var_1_19))) ? (((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) : ((var_1_18 - var_1_19)))) - ((((var_1_16) > (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))))) ? (var_1_16) : (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20)))))));
   } else {
    var_1_13 = var_1_19;
   }
  }
 }
 signed long int stepLocal_7 = 0;
 if (stepLocal_7 > var_1_39) {
  var_1_28 = ((((99.2f) < (var_1_16)) ? (99.2f) : (var_1_16)));
 }
 unsigned char stepLocal_9 = var_1_33;
 signed long int stepLocal_8 = var_1_6 / 1;
 if (var_1_32) {
  if (stepLocal_8 <= var_1_30) {
   var_1_35 = ((((var_1_36) < (var_1_8)) ? (var_1_36) : (var_1_8)));
  }
 } else {
  if (! var_1_34) {
   var_1_35 = ((((var_1_36) < (var_1_8)) ? (var_1_36) : (var_1_8)));
  } else {
   if (var_1_34 && stepLocal_9) {
    if ((var_1_18 - (var_1_37 - var_1_19)) <= var_1_52) {
     var_1_35 = (var_1_12 + var_1_38);
    } else {
     var_1_35 = (var_1_11 - var_1_12);
    }
   } else {
    if (var_1_14 > (- var_1_15)) {
     var_1_35 = (var_1_11 - (((((10 + 16)) > (5)) ? ((10 + 16)) : (5))));
    } else {
     var_1_35 = var_1_36;
    }
   }
  }
 }
 unsigned char stepLocal_11 = var_1_8;
 if (var_1_15 == (- (- var_1_52))) {
  if (! var_1_34) {
   var_1_44 = var_1_42;
  } else {
   if (var_1_29 <= stepLocal_11) {
    var_1_44 = ((((var_1_42) > (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))) ? (var_1_42) : (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))));
   } else {
    var_1_44 = -10;
   }
  }
 }
 signed long int stepLocal_4 = -2;
 unsigned char stepLocal_3 = var_1_8;
 if (stepLocal_3 == (- var_1_55)) {
  var_1_21 = ((var_1_19 + var_1_22) - (var_1_23 + var_1_24));
 } else {
  if (stepLocal_4 < ((var_1_12 * var_1_11) | var_1_7)) {
   var_1_21 = 127.4f;
  } else {
   var_1_21 = var_1_18;
  }
 }
 unsigned long int stepLocal_13 = var_1_35 + ((((var_1_26) < (var_1_3)) ? (var_1_26) : (var_1_3)));
 if (var_1_32) {
  if ((((((var_1_48) > (var_1_29)) ? (var_1_48) : (var_1_29))) / 1) > stepLocal_13) {
   if (var_1_32) {
    var_1_58 = ((var_1_57 - var_1_59) + 4);
   } else {
    var_1_58 = (var_1_38 + var_1_57);
   }
  } else {
   var_1_58 = ((var_1_57 + (var_1_60 - var_1_61)) - var_1_59);
  }
 } else {
  var_1_58 = var_1_38;
 }
 signed long int stepLocal_15 = var_1_9 - (var_1_61 + var_1_57);
 unsigned long int stepLocal_14 = var_1_29;
 if (256 < stepLocal_14) {
  if (stepLocal_15 >= var_1_58) {
   var_1_62 = ((((var_1_47) > (var_1_61)) ? (var_1_47) : (var_1_61)));
  }
 } else {
  var_1_62 = var_1_46;
 }
 signed long int stepLocal_6 = var_1_12 + var_1_11;
 unsigned long int stepLocal_5 = (var_1_26 - var_1_58) / var_1_10;
 if (stepLocal_6 <= -100) {
  if (stepLocal_5 < var_1_11) {
   var_1_25 = ((((var_1_27) > (var_1_15)) ? (var_1_27) : (var_1_15)));
  } else {
   var_1_25 = ((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18)));
  }
 } else {
  var_1_25 = (((((16.2f - (var_1_22 + var_1_24))) > (var_1_14)) ? ((16.2f - (var_1_22 + var_1_24))) : (var_1_14)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 127);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 2147483647);
 assume_abort_if_not(var_1_26 <= 4294967295);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 4611686.018427388000e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -127);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -127);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967294);
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -922337.2036854766000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 32767);
 assume_abort_if_not(var_1_56 <= 65534);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 64);
 assume_abort_if_not(var_1_57 <= 127);
 var_1_59 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 63);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 95);
 assume_abort_if_not(var_1_60 <= 127);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_25 = var_1_25;
}
int property(void) {
 return (((((((((((((((((((var_1_48 % var_1_4) >= var_1_48) ? ((var_1_32 && (var_1_48 < var_1_4)) ? (var_1_1 == ((unsigned char) var_1_6)) : 1) : (((var_1_6 + var_1_48) > var_1_48) ? (var_1_1 == ((unsigned char) ((((((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) < (var_1_9)) ? (((((((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) < (var_1_8)) ? (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)))) : (var_1_8)))) : (var_1_9))))) : (var_1_1 == ((unsigned char) (((((var_1_10) > (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_10) : (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))))) - var_1_12))))) && ((var_1_29 != var_1_8) ? (var_1_13 == ((double) (((((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) < (((((64.4) < 0 ) ? -(64.4) : (64.4))))) ? ((var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))) : (((((64.4) < 0 ) ? -(64.4) : (64.4)))))))) : (var_1_32 ? (var_1_13 == ((double) ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) > (var_1_15)) ? (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) : (var_1_15))))) : ((! var_1_32) ? (var_1_13 == ((double) (((((((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) < ((var_1_18 - var_1_19))) ? (((((199.75) > (var_1_15)) ? (199.75) : (var_1_15)))) : ((var_1_18 - var_1_19)))) - ((((var_1_16) > (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))))) ? (var_1_16) : (((((var_1_14) < (var_1_20)) ? (var_1_14) : (var_1_20))))))))) : (var_1_13 == ((double) var_1_19)))))) && ((var_1_8 == (- var_1_55)) ? (var_1_21 == ((float) ((var_1_19 + var_1_22) - (var_1_23 + var_1_24)))) : ((-2 < ((var_1_12 * var_1_11) | var_1_7)) ? (var_1_21 == ((float) 127.4f)) : (var_1_21 == ((float) var_1_18))))) && (((var_1_12 + var_1_11) <= -100) ? ((((var_1_26 - var_1_58) / var_1_10) < var_1_11) ? (var_1_25 == ((float) ((((var_1_27) > (var_1_15)) ? (var_1_27) : (var_1_15))))) : (var_1_25 == ((float) ((((var_1_14) < (var_1_18)) ? (var_1_14) : (var_1_18)))))) : (var_1_25 == ((float) (((((16.2f - (var_1_22 + var_1_24))) > (var_1_14)) ? ((16.2f - (var_1_22 + var_1_24))) : (var_1_14))))))) && ((0 > var_1_39) ? (var_1_28 == ((float) ((((99.2f) < (var_1_16)) ? (99.2f) : (var_1_16))))) : 1)) && ((var_1_17 || (var_1_9 >= var_1_8)) ? (var_1_29 == ((unsigned long int) (5u + (32u + var_1_12)))) : ((! (var_1_17 && var_1_2)) ? (var_1_29 == ((unsigned long int) (((((32u) < 0 ) ? -(32u) : (32u))) + var_1_8))) : (var_1_29 == ((unsigned long int) ((((((var_1_12 + var_1_6)) < (var_1_8)) ? ((var_1_12 + var_1_6)) : (var_1_8))) + ((((var_1_30) < (var_1_7)) ? (var_1_30) : (var_1_7))))))))) && (var_1_31 == ((double) (var_1_23 + var_1_19)))) && ((var_1_7 >= (var_1_29 + var_1_11)) ? ((var_1_6 >= var_1_11) ? (var_1_32 == ((unsigned char) (! var_1_33))) : (var_1_32 == ((unsigned char) (var_1_33 && var_1_34)))) : 1)) && (var_1_32 ? (((var_1_6 / 1) <= var_1_30) ? (var_1_35 == ((unsigned char) ((((var_1_36) < (var_1_8)) ? (var_1_36) : (var_1_8))))) : 1) : ((! var_1_34) ? (var_1_35 == ((unsigned char) ((((var_1_36) < (var_1_8)) ? (var_1_36) : (var_1_8))))) : ((var_1_34 && var_1_33) ? (((var_1_18 - (var_1_37 - var_1_19)) <= var_1_52) ? (var_1_35 == ((unsigned char) (var_1_12 + var_1_38))) : (var_1_35 == ((unsigned char) (var_1_11 - var_1_12)))) : ((var_1_14 > (- var_1_15)) ? (var_1_35 == ((unsigned char) (var_1_11 - (((((10 + 16)) > (5)) ? ((10 + 16)) : (5)))))) : (var_1_35 == ((unsigned char) var_1_36))))))) && (var_1_32 ? (var_1_39 == ((signed short int) ((var_1_8 - var_1_9) + var_1_36))) : 1)) && ((var_1_48 != var_1_38) ? (var_1_41 == ((signed char) ((((1) < (var_1_42)) ? (1) : (var_1_42))))) : 1)) && (((var_1_38 + ((((32) < (var_1_12)) ? (32) : (var_1_12)))) >= var_1_48) ? (var_1_43 == ((signed char) ((((var_1_42) > (5)) ? (var_1_42) : (5))))) : (var_1_43 == ((signed char) -2)))) && ((var_1_15 == (- (- var_1_52))) ? ((! var_1_34) ? (var_1_44 == ((signed char) var_1_42)) : ((var_1_29 <= var_1_8) ? (var_1_44 == ((signed char) ((((var_1_42) > (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47))))) ? (var_1_42) : (((((var_1_46) < (var_1_47)) ? (var_1_46) : (var_1_47)))))))) : (var_1_44 == ((signed char) -10)))) : 1)) && ((((last_1_var_1_21 * var_1_15) * var_1_24) < last_1_var_1_25) ? (var_1_48 == ((unsigned long int) var_1_12)) : ((((- var_1_18) * var_1_19) > last_1_var_1_13) ? (var_1_48 == ((unsigned long int) ((var_1_8 + var_1_7) + var_1_50))) : (var_1_48 == ((unsigned long int) (var_1_51 - ((((var_1_11) < (var_1_50)) ? (var_1_11) : (var_1_50))))))))) && (((16 & (var_1_7 + var_1_36)) != (var_1_38 / ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? (var_1_52 == ((double) ((((var_1_15) < (((((var_1_22) > (var_1_53)) ? (var_1_22) : (var_1_53))))) ? (var_1_15) : (((((var_1_22) > (var_1_53)) ? (var_1_22) : (var_1_53)))))))) : ((var_1_37 >= (100.4 + (var_1_19 - var_1_18))) ? (var_1_52 == ((double) (var_1_20 - (var_1_23 + var_1_22)))) : (var_1_52 == ((double) (((((var_1_20 - ((((var_1_22) > (var_1_54)) ? (var_1_22) : (var_1_54))))) > (var_1_18)) ? ((var_1_20 - ((((var_1_22) > (var_1_54)) ? (var_1_22) : (var_1_54))))) : (var_1_18)))))))) && ((! ((var_1_29 ^ var_1_48) > var_1_48)) ? ((((var_1_11 - var_1_38) / var_1_10) >= var_1_48) ? (var_1_32 ? ((! (var_1_42 != var_1_47)) ? (var_1_55 == ((unsigned short int) ((((var_1_6) > ((var_1_11 + var_1_12))) ? (var_1_6) : ((var_1_11 + var_1_12)))))) : 1) : (var_1_55 == ((unsigned short int) (((((var_1_56 - var_1_36)) > ((32989 - (var_1_6 + 4)))) ? ((var_1_56 - var_1_36)) : ((32989 - (var_1_6 + 4)))))))) : ((((100 + var_1_57) - var_1_12) == (var_1_29 + var_1_48)) ? (var_1_55 == ((unsigned short int) (((((2) < ((256 + 1))) ? (2) : ((256 + 1)))) + var_1_11))) : ((var_1_20 <= (- var_1_31)) ? (var_1_55 == ((unsigned short int) ((((var_1_12) > (var_1_36)) ? (var_1_12) : (var_1_36))))) : 1))) : 1)) && (var_1_32 ? (((((((var_1_48) > (var_1_29)) ? (var_1_48) : (var_1_29))) / 1) > (var_1_35 + ((((var_1_26) < (var_1_3)) ? (var_1_26) : (var_1_3))))) ? (var_1_32 ? (var_1_58 == ((unsigned char) ((var_1_57 - var_1_59) + 4))) : (var_1_58 == ((unsigned char) (var_1_38 + var_1_57)))) : (var_1_58 == ((unsigned char) ((var_1_57 + (var_1_60 - var_1_61)) - var_1_59)))) : (var_1_58 == ((unsigned char) var_1_38)))) && ((256 < var_1_29) ? (((var_1_9 - (var_1_61 + var_1_57)) >= var_1_58) ? (var_1_62 == ((signed char) ((((var_1_47) > (var_1_61)) ? (var_1_47) : (var_1_61))))) : 1) : (var_1_62 == ((signed char) var_1_46)))
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
