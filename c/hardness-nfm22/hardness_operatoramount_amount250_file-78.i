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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 100;
unsigned short int var_1_3 = 63223;
unsigned short int var_1_4 = 63229;
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
unsigned char var_1_42 = 1;
float var_1_43 = 16.3;
float var_1_44 = 4.595;
float var_1_45 = 16.5;
signed char var_1_46 = -5;
signed short int var_1_47 = 4;
unsigned long int var_1_49 = 8;
unsigned long int var_1_50 = 2726017052;
unsigned long int var_1_51 = 1914727122;
float var_1_52 = 100000000000.75;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 1;
signed short int var_1_57 = 100;
signed long int var_1_58 = -16;
double var_1_59 = 32.75;
signed short int var_1_60 = -5;
signed short int var_1_61 = 0;
unsigned char var_1_63 = 0;
double last_1_var_1_8 = 128.85;
unsigned char last_1_var_1_26 = 128;
unsigned char last_1_var_1_41 = 0;
unsigned char last_1_var_1_53 = 1;
signed long int last_1_var_1_58 = -16;
signed short int last_1_var_1_60 = -5;
unsigned char last_1_var_1_63 = 0;
void initially(void) {
}
void step(void) {
 if ((var_1_9 * last_1_var_1_8) >= (var_1_10 * (- 255.25))) {
  var_1_41 = (! var_1_42);
 }
 unsigned char stepLocal_11 = var_1_54;
 unsigned long int stepLocal_10 = last_1_var_1_26 % var_1_34;
 if (var_1_42) {
  if (stepLocal_10 > 25u) {
   var_1_53 = (last_1_var_1_53 && var_1_54);
  } else {
   if (stepLocal_11 || last_1_var_1_63) {
    var_1_53 = (var_1_54 && var_1_55);
   } else {
    var_1_53 = (! (last_1_var_1_41 || var_1_56));
   }
  }
 }
 if (var_1_25 <= (- var_1_10)) {
  if (last_1_var_1_41) {
   var_1_26 = ((((((var_1_27 - var_1_28) + var_1_29)) > (var_1_17)) ? (((var_1_27 - var_1_28) + var_1_29)) : (var_1_17)));
  }
 } else {
  var_1_26 = ((((var_1_17) > (var_1_27)) ? (var_1_17) : (var_1_27)));
 }
 unsigned char stepLocal_8 = var_1_27;
 if (var_1_15 > stepLocal_8) {
  var_1_49 = (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - ((((var_1_33 - var_1_26) < 0 ) ? -(var_1_33 - var_1_26) : (var_1_33 - var_1_26))));
 } else {
  var_1_49 = (var_1_50 - ((var_1_51 - var_1_29) - var_1_4));
 }
 if (var_1_41) {
  var_1_31 = (var_1_3 - var_1_26);
 }
 if (var_1_53) {
  var_1_32 = ((var_1_33 + var_1_34) - ((((var_1_4) > (var_1_29)) ? (var_1_4) : (var_1_29))));
 } else {
  var_1_32 = var_1_29;
 }
 if (var_1_53) {
  var_1_35 = var_1_36;
 } else {
  var_1_35 = (var_1_25 + (var_1_24 - var_1_37));
 }
 var_1_46 = ((((var_1_14) < (var_1_28)) ? (var_1_14) : (var_1_28)));
 unsigned char stepLocal_9 = var_1_27;
 if (var_1_51 >= stepLocal_9) {
  var_1_52 = var_1_36;
 }
 unsigned char stepLocal_12 = var_1_56;
 if ((var_1_44 / ((((3.2) < (var_1_59)) ? (3.2) : (var_1_59)))) <= var_1_45) {
  var_1_58 = ((var_1_15 + ((((last_1_var_1_58) < (var_1_3)) ? (last_1_var_1_58) : (var_1_3)))) - var_1_26);
 } else {
  if (stepLocal_12 && var_1_54) {
   if (var_1_53) {
    var_1_58 = var_1_19;
   } else {
    var_1_58 = (var_1_28 + var_1_13);
   }
  } else {
   var_1_58 = ((((((var_1_17) > (var_1_27)) ? (var_1_17) : (var_1_27))) - var_1_29) + var_1_46);
  }
 }
 signed long int stepLocal_1 = 10;
 unsigned char stepLocal_0 = var_1_26;
 if (! var_1_53) {
  var_1_1 = (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_26) < (var_1_26)) ? (var_1_26) : (var_1_26))) + var_1_26));
 } else {
  if (stepLocal_0 <= (var_1_4 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) {
   if (var_1_4 <= stepLocal_1) {
    var_1_1 = (var_1_4 - var_1_26);
   }
  } else {
   if (var_1_53) {
    var_1_1 = (((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) < 0 ) ? -((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) : ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))));
   } else {
    var_1_1 = (1 + (27338 - var_1_26));
   }
  }
 }
 unsigned char stepLocal_5 = var_1_1 > (var_1_26 << var_1_4);
 if (stepLocal_5 && var_1_41) {
  var_1_30 = ((((((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) < (var_1_22)) ? (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) : (var_1_22)));
 } else {
  if (var_1_53) {
   var_1_30 = (var_1_24 - var_1_22);
  } else {
   var_1_30 = var_1_24;
  }
 }
 if (! var_1_54) {
  if (var_1_30 >= var_1_30) {
   var_1_63 = var_1_56;
  } else {
   var_1_63 = (var_1_53 && (var_1_42 && var_1_54));
  }
 }
 signed long int stepLocal_4 = (var_1_4 / var_1_19) ^ (var_1_16 / var_1_20);
 signed char stepLocal_3 = var_1_17;
 if (stepLocal_4 < (var_1_49 / var_1_3)) {
  var_1_18 = (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) + (var_1_4 + (var_1_17 + var_1_15)));
 } else {
  if ((- var_1_26) >= stepLocal_3) {
   var_1_18 = var_1_4;
  } else {
   var_1_18 = var_1_26;
  }
 }
 if (var_1_52 > var_1_9) {
  if (var_1_41) {
   if (var_1_53) {
    var_1_11 = var_1_13;
   } else {
    var_1_11 = (var_1_14 - var_1_15);
   }
  } else {
   var_1_11 = ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))));
  }
 }
 if ((var_1_14 < var_1_26) || var_1_53) {
  if (var_1_18 <= var_1_26) {
   if (var_1_53) {
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
 if (! ((var_1_19 * var_1_27) < var_1_26)) {
  if (var_1_22 <= var_1_52) {
   var_1_38 = (((((var_1_28 + var_1_39)) > (var_1_17)) ? ((var_1_28 + var_1_39)) : (var_1_17)));
  }
 } else {
  var_1_38 = (var_1_39 + var_1_28);
 }
 if (var_1_52 >= 31.5f) {
  var_1_43 = (var_1_37 + var_1_25);
 } else {
  if ((((((var_1_58) < (var_1_4)) ? (var_1_58) : (var_1_4))) == var_1_32) || (var_1_14 > var_1_16)) {
   var_1_43 = (var_1_24 + (var_1_44 + var_1_45));
  }
 }
 if (((var_1_31 ^ var_1_49) / ((((var_1_4) < (2)) ? (var_1_4) : (2)))) != var_1_27) {
  if (((var_1_15 - var_1_26) / var_1_19) == var_1_51) {
   if (var_1_15 != last_1_var_1_60) {
    var_1_60 = (((((var_1_29 - var_1_15)) > (((((var_1_27 - var_1_26) < 0 ) ? -(var_1_27 - var_1_26) : (var_1_27 - var_1_26))))) ? ((var_1_29 - var_1_15)) : (((((var_1_27 - var_1_26) < 0 ) ? -(var_1_27 - var_1_26) : (var_1_27 - var_1_26))))));
   } else {
    if (var_1_4 == var_1_38) {
     var_1_60 = (var_1_15 - var_1_17);
    }
   }
  } else {
   var_1_60 = var_1_27;
  }
 } else {
  var_1_60 = var_1_15;
 }
 if (var_1_53) {
  var_1_61 = var_1_13;
 } else {
  var_1_61 = var_1_11;
 }
 if (! ((~ 128u) > var_1_18)) {
  var_1_40 = ((((var_1_26 + var_1_13) < 0 ) ? -(var_1_26 + var_1_13) : (var_1_26 + var_1_13)));
 } else {
  if (var_1_41) {
   var_1_40 = ((((var_1_13) > (var_1_26)) ? (var_1_13) : (var_1_26)));
  }
 }
 signed short int stepLocal_7 = var_1_60;
 signed long int stepLocal_6 = (((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26));
 if ((- var_1_43) == ((3.5f - var_1_37) * var_1_30)) {
  if (var_1_14 == stepLocal_7) {
   var_1_47 = 0;
  }
 } else {
  if ((var_1_1 | var_1_27) < stepLocal_6) {
   var_1_47 = (var_1_15 - var_1_26);
  } else {
   var_1_47 = ((((((((1) < (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))) ? (1) : (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))))) > (var_1_14)) ? (((((1) < (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))) ? (1) : (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))))) : (var_1_14)));
  }
 }
 if (var_1_24 >= var_1_45) {
  var_1_57 = ((((var_1_15) < (var_1_13)) ? (var_1_15) : (var_1_13)));
 } else {
  var_1_57 = ((((var_1_28) < (var_1_60)) ? (var_1_28) : (var_1_60)));
 }
 unsigned char stepLocal_2 = var_1_26;
 if (stepLocal_2 >= var_1_40) {
  var_1_8 = (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5)));
 } else {
  var_1_8 = var_1_10;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 32767);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 32767);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427382800e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
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
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
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
 assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -63);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -230584.3009213691390e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691390e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -230584.3009213691390e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691390e+12F && var_1_45 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 2147483647);
 assume_abort_if_not(var_1_50 <= 4294967294);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 1610612735);
 assume_abort_if_not(var_1_51 <= 2147483647);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 0);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_59 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_59 >= -922337.2036854776000e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
 assume_abort_if_not(var_1_59 != 0.0F);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_63 = var_1_63;
}
int property() {
 return ((((((((((((((((((((((((! var_1_53) ? (var_1_1 == ((unsigned short int) (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) - (((((var_1_26) < (var_1_26)) ? (var_1_26) : (var_1_26))) + var_1_26)))) : ((var_1_26 <= (var_1_4 - ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? ((var_1_4 <= 10) ? (var_1_1 == ((unsigned short int) (var_1_4 - var_1_26))) : 1) : (var_1_53 ? (var_1_1 == ((unsigned short int) (((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) < 0 ) ? -((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) : ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))) : (var_1_1 == ((unsigned short int) (1 + (27338 - var_1_26))))))) && ((var_1_26 >= var_1_40) ? (var_1_8 == ((double) (((((var_1_9 + 32.9)) > (100000.5)) ? ((var_1_9 + 32.9)) : (100000.5))))) : (var_1_8 == ((double) var_1_10)))) && ((var_1_52 > var_1_9) ? (var_1_41 ? (var_1_53 ? (var_1_11 == ((signed char) var_1_13)) : (var_1_11 == ((signed char) (var_1_14 - var_1_15)))) : (var_1_11 == ((signed char) ((((var_1_15) < ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))) ? (var_1_15) : ((((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))) - var_1_17))))))) : 1)) && ((((var_1_4 / var_1_19) ^ (var_1_16 / var_1_20)) < (var_1_49 / var_1_3)) ? (var_1_18 == ((unsigned long int) (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) + (var_1_4 + (var_1_17 + var_1_15))))) : (((- var_1_26) >= var_1_17) ? (var_1_18 == ((unsigned long int) var_1_4)) : (var_1_18 == ((unsigned long int) var_1_26))))) && (((var_1_14 < var_1_26) || var_1_53) ? ((var_1_18 <= var_1_26) ? (var_1_53 ? (var_1_21 == ((float) (var_1_22 - var_1_23))) : (var_1_21 == ((float) 4.3f))) : (var_1_21 == ((float) ((((var_1_22) > (((var_1_24 + var_1_25) - var_1_23))) ? (var_1_22) : (((var_1_24 + var_1_25) - var_1_23))))))) : (var_1_21 == ((float) (var_1_9 + var_1_24))))) && ((var_1_25 <= (- var_1_10)) ? (last_1_var_1_41 ? (var_1_26 == ((unsigned char) ((((((var_1_27 - var_1_28) + var_1_29)) > (var_1_17)) ? (((var_1_27 - var_1_28) + var_1_29)) : (var_1_17))))) : 1) : (var_1_26 == ((unsigned char) ((((var_1_17) > (var_1_27)) ? (var_1_17) : (var_1_27))))))) && (((var_1_1 > (var_1_26 << var_1_4)) && var_1_41) ? (var_1_30 == ((float) ((((((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) < (var_1_22)) ? (((((var_1_23) > ((var_1_24 - var_1_25))) ? (var_1_23) : ((var_1_24 - var_1_25))))) : (var_1_22))))) : (var_1_53 ? (var_1_30 == ((float) (var_1_24 - var_1_22))) : (var_1_30 == ((float) var_1_24))))) && (var_1_41 ? (var_1_31 == ((signed long int) (var_1_3 - var_1_26))) : 1)) && (var_1_53 ? (var_1_32 == ((unsigned long int) ((var_1_33 + var_1_34) - ((((var_1_4) > (var_1_29)) ? (var_1_4) : (var_1_29)))))) : (var_1_32 == ((unsigned long int) var_1_29)))) && (var_1_53 ? (var_1_35 == ((double) var_1_36)) : (var_1_35 == ((double) (var_1_25 + (var_1_24 - var_1_37)))))) && ((! ((var_1_19 * var_1_27) < var_1_26)) ? ((var_1_22 <= var_1_52) ? (var_1_38 == ((signed char) (((((var_1_28 + var_1_39)) > (var_1_17)) ? ((var_1_28 + var_1_39)) : (var_1_17))))) : 1) : (var_1_38 == ((signed char) (var_1_39 + var_1_28))))) && ((! ((~ 128u) > var_1_18)) ? (var_1_40 == ((signed short int) ((((var_1_26 + var_1_13) < 0 ) ? -(var_1_26 + var_1_13) : (var_1_26 + var_1_13))))) : (var_1_41 ? (var_1_40 == ((signed short int) ((((var_1_13) > (var_1_26)) ? (var_1_13) : (var_1_26))))) : 1))) && (((var_1_9 * last_1_var_1_8) >= (var_1_10 * (- 255.25))) ? (var_1_41 == ((unsigned char) (! var_1_42))) : 1)) && ((var_1_52 >= 31.5f) ? (var_1_43 == ((float) (var_1_37 + var_1_25))) : (((((((var_1_58) < (var_1_4)) ? (var_1_58) : (var_1_4))) == var_1_32) || (var_1_14 > var_1_16)) ? (var_1_43 == ((float) (var_1_24 + (var_1_44 + var_1_45)))) : 1))) && (var_1_46 == ((signed char) ((((var_1_14) < (var_1_28)) ? (var_1_14) : (var_1_28)))))) && (((- var_1_43) == ((3.5f - var_1_37) * var_1_30)) ? ((var_1_14 == var_1_60) ? (var_1_47 == ((signed short int) 0)) : 1) : (((var_1_1 | var_1_27) < ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) ? (var_1_47 == ((signed short int) (var_1_15 - var_1_26))) : (var_1_47 == ((signed short int) ((((((((1) < (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))) ? (1) : (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))))) > (var_1_14)) ? (((((1) < (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))) ? (1) : (((((-256) > (var_1_26)) ? (-256) : (var_1_26))))))) : (var_1_14)))))))) && ((var_1_15 > var_1_27) ? (var_1_49 == ((unsigned long int) (((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))) - ((((var_1_33 - var_1_26) < 0 ) ? -(var_1_33 - var_1_26) : (var_1_33 - var_1_26)))))) : (var_1_49 == ((unsigned long int) (var_1_50 - ((var_1_51 - var_1_29) - var_1_4)))))) && ((var_1_51 >= var_1_27) ? (var_1_52 == ((float) var_1_36)) : 1)) && (var_1_42 ? (((last_1_var_1_26 % var_1_34) > 25u) ? (var_1_53 == ((unsigned char) (last_1_var_1_53 && var_1_54))) : ((var_1_54 || last_1_var_1_63) ? (var_1_53 == ((unsigned char) (var_1_54 && var_1_55))) : (var_1_53 == ((unsigned char) (! (last_1_var_1_41 || var_1_56)))))) : 1)) && ((var_1_24 >= var_1_45) ? (var_1_57 == ((signed short int) ((((var_1_15) < (var_1_13)) ? (var_1_15) : (var_1_13))))) : (var_1_57 == ((signed short int) ((((var_1_28) < (var_1_60)) ? (var_1_28) : (var_1_60))))))) && (((var_1_44 / ((((3.2) < (var_1_59)) ? (3.2) : (var_1_59)))) <= var_1_45) ? (var_1_58 == ((signed long int) ((var_1_15 + ((((last_1_var_1_58) < (var_1_3)) ? (last_1_var_1_58) : (var_1_3)))) - var_1_26))) : ((var_1_56 && var_1_54) ? (var_1_53 ? (var_1_58 == ((signed long int) var_1_19)) : (var_1_58 == ((signed long int) (var_1_28 + var_1_13)))) : (var_1_58 == ((signed long int) ((((((var_1_17) > (var_1_27)) ? (var_1_17) : (var_1_27))) - var_1_29) + var_1_46)))))) && ((((var_1_31 ^ var_1_49) / ((((var_1_4) < (2)) ? (var_1_4) : (2)))) != var_1_27) ? ((((var_1_15 - var_1_26) / var_1_19) == var_1_51) ? ((var_1_15 != last_1_var_1_60) ? (var_1_60 == ((signed short int) (((((var_1_29 - var_1_15)) > (((((var_1_27 - var_1_26) < 0 ) ? -(var_1_27 - var_1_26) : (var_1_27 - var_1_26))))) ? ((var_1_29 - var_1_15)) : (((((var_1_27 - var_1_26) < 0 ) ? -(var_1_27 - var_1_26) : (var_1_27 - var_1_26)))))))) : ((var_1_4 == var_1_38) ? (var_1_60 == ((signed short int) (var_1_15 - var_1_17))) : 1)) : (var_1_60 == ((signed short int) var_1_27))) : (var_1_60 == ((signed short int) var_1_15)))) && (var_1_53 ? (var_1_61 == ((signed short int) var_1_13)) : (var_1_61 == ((signed short int) var_1_11)))) && ((! var_1_54) ? ((var_1_30 >= var_1_30) ? (var_1_63 == ((unsigned char) var_1_56)) : (var_1_63 == ((unsigned char) (var_1_53 && (var_1_42 && var_1_54))))) : 1)
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
