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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = -0.5;
double var_1_3 = 64.84;
double var_1_4 = 2.2;
double var_1_5 = 31.875;
signed char var_1_8 = -50;
signed char var_1_9 = 8;
signed char var_1_10 = 16;
unsigned short int var_1_11 = 4;
unsigned short int var_1_12 = 34431;
float var_1_13 = 9999999999999.9;
float var_1_14 = 4.5;
float var_1_15 = 5.9;
float var_1_16 = 5.2;
float var_1_17 = 0.0;
float var_1_18 = 4.125;
float var_1_19 = 4.8;
signed long int var_1_20 = 4;
signed char var_1_21 = 64;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
signed short int var_1_29 = -32;
unsigned char var_1_30 = 0;
unsigned long int var_1_31 = 128;
unsigned long int var_1_32 = 4222478885;
signed short int var_1_34 = -1;
unsigned char var_1_36 = 0;
float var_1_37 = 16.046;
float var_1_38 = 127.2;
unsigned char var_1_39 = 100;
float var_1_40 = 0.0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 25;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 100;
unsigned char var_1_46 = 0;
signed short int var_1_47 = 10;
signed short int var_1_48 = 22621;
unsigned short int var_1_49 = 0;
unsigned long int var_1_50 = 2;
unsigned long int var_1_51 = 3632737153;
signed long int var_1_53 = -5;
unsigned char var_1_56 = 0;
double var_1_57 = 256.875;
double var_1_58 = 0.0;
float var_1_59 = 50.6;
unsigned short int var_1_60 = 19434;
unsigned char var_1_61 = 128;
unsigned short int var_1_62 = 0;
signed long int var_1_63 = 10;
unsigned char last_1_var_1_23 = 1;
signed short int last_1_var_1_29 = -32;
unsigned long int last_1_var_1_31 = 128;
unsigned short int last_1_var_1_49 = 0;
signed long int last_1_var_1_53 = -5;
unsigned char last_1_var_1_56 = 0;
double last_1_var_1_57 = 256.875;
float last_1_var_1_59 = 50.6;
unsigned short int last_1_var_1_62 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_6 = (last_1_var_1_59 / var_1_17) < var_1_18;
 unsigned short int stepLocal_5 = var_1_12;
 if (stepLocal_5 > last_1_var_1_53) {
  if (var_1_25 && stepLocal_6) {
   var_1_30 = (! (! var_1_26));
  } else {
   var_1_30 = ((last_1_var_1_56 && (var_1_26 && var_1_27)) || var_1_25);
  }
 }
 if ((((((var_1_42 + last_1_var_1_53)) > (var_1_44)) ? ((var_1_42 + last_1_var_1_53)) : (var_1_44))) > (last_1_var_1_31 - var_1_48)) {
  var_1_50 = (((((var_1_32) < (var_1_51)) ? (var_1_32) : (var_1_51))) - var_1_46);
 } else {
  if (last_1_var_1_57 >= var_1_19) {
   var_1_50 = (last_1_var_1_31 + var_1_42);
  }
 }
 unsigned long int stepLocal_14 = var_1_50;
 if (((22760 + var_1_60) - var_1_46) >= stepLocal_14) {
  var_1_59 = var_1_4;
 }
 var_1_63 = var_1_50;
 signed long int stepLocal_13 = last_1_var_1_49;
 if (1 >= stepLocal_13) {
  var_1_56 = (! (last_1_var_1_23 && var_1_26));
 } else {
  var_1_56 = ((last_1_var_1_62 < ((((var_1_42) > (var_1_46)) ? (var_1_42) : (var_1_46)))) && var_1_26);
 }
 if (var_1_56) {
  var_1_58 = var_1_15;
 } else {
  var_1_58 = var_1_4;
 }
 if (var_1_56) {
  var_1_11 = (var_1_12 - var_1_10);
 }
 if (var_1_56) {
  var_1_47 = ((var_1_48 - var_1_45) - var_1_43);
 }
 var_1_8 = ((var_1_9 - var_1_10) + -2);
 if (var_1_56) {
  var_1_13 = ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19)));
 } else {
  var_1_13 = (((((var_1_16 - (var_1_14 + var_1_19))) < (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))) ? ((var_1_16 - (var_1_14 + var_1_19))) : (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))));
 }
 if (var_1_26) {
  if (var_1_59 != var_1_15) {
   var_1_36 = ((var_1_18 > var_1_3) || var_1_28);
  } else {
   var_1_36 = var_1_28;
  }
 } else {
  if ((var_1_18 - var_1_16) >= (((((var_1_19) > (var_1_14)) ? (var_1_19) : (var_1_14))) - var_1_3)) {
   var_1_36 = (! var_1_28);
  } else {
   var_1_36 = (! var_1_25);
  }
 }
 var_1_37 = (var_1_3 - var_1_19);
 unsigned char stepLocal_10 = var_1_42;
 if (16 > stepLocal_10) {
  var_1_49 = ((((var_1_10) < (var_1_42)) ? (var_1_10) : (var_1_42)));
 }
 var_1_61 = var_1_42;
 var_1_62 = var_1_46;
 if (var_1_16 == var_1_3) {
  var_1_23 = ((var_1_56 && (var_1_24 || var_1_25)) || (var_1_26 || (var_1_30 && var_1_27)));
 } else {
  var_1_23 = var_1_28;
 }
 unsigned char stepLocal_0 = var_1_30;
 if (var_1_30) {
  var_1_1 = (((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5)));
 } else {
  if (stepLocal_0 && var_1_56) {
   var_1_1 = (var_1_4 - var_1_3);
  }
 }
 unsigned char stepLocal_4 = var_1_30;
 unsigned char stepLocal_3 = var_1_19 <= var_1_59;
 signed long int stepLocal_2 = (var_1_9 / var_1_21) + var_1_10;
 signed long int stepLocal_1 = var_1_8 ^ var_1_47;
 if (stepLocal_4 && var_1_30) {
  if (stepLocal_2 < ((var_1_12 + var_1_47) - 128)) {
   var_1_20 = (((((var_1_47 - var_1_10)) < (var_1_9)) ? ((var_1_47 - var_1_10)) : (var_1_9)));
  } else {
   if (stepLocal_1 > var_1_21) {
    if (var_1_30 || stepLocal_3) {
     var_1_20 = var_1_12;
    }
   } else {
    if (var_1_36) {
     var_1_20 = ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_12)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_12)));
    } else {
     var_1_20 = ((((((16) < 0 ) ? -(16) : (16))) + 256) - ((((0) > (var_1_47)) ? (0) : (var_1_47))));
    }
   }
  }
 }
 if (var_1_59 < ((var_1_40 - var_1_19) - var_1_17)) {
  if (31.5 > (((((5.5) < 0 ) ? -(5.5) : (5.5))) + (- var_1_13))) {
   if (var_1_36 && ((var_1_16 <= var_1_13) && var_1_36)) {
    var_1_39 = (var_1_10 + (((((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) < 0 ) ? -((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) : ((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))))));
   } else {
    var_1_39 = ((((((((4) > (var_1_9)) ? (4) : (var_1_9)))) > (var_1_43)) ? (((((4) > (var_1_9)) ? (4) : (var_1_9)))) : (var_1_43)));
   }
  } else {
   if (-8 > ((var_1_10 + var_1_49) | var_1_50)) {
    var_1_39 = ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) < (var_1_43)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_43)));
   }
  }
 } else {
  if (var_1_59 <= ((- var_1_13) * var_1_3)) {
   var_1_39 = (((var_1_44 + var_1_45) - var_1_10) - (var_1_9 + var_1_46));
  }
 }
 unsigned long int stepLocal_8 = var_1_50;
 unsigned char stepLocal_7 = var_1_26;
 if (stepLocal_8 <= var_1_32) {
  var_1_34 = var_1_11;
 } else {
  if (stepLocal_7 && var_1_23) {
   var_1_34 = ((((((((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) < 0 ) ? -((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) : ((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))))) < 0 ) ? -(((((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) < 0 ) ? -((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) : ((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))))) : (((((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) < 0 ) ? -((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) : ((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11)))))));
  }
 }
 if ((var_1_8 == var_1_21) || (var_1_15 <= var_1_19)) {
  var_1_31 = (var_1_32 - var_1_9);
 } else {
  if (var_1_3 < var_1_15) {
   var_1_31 = (var_1_12 + var_1_9);
  } else {
   if (var_1_10 < var_1_34) {
    var_1_31 = var_1_10;
   } else {
    var_1_31 = var_1_9;
   }
  }
 }
 if (var_1_58 <= ((var_1_15 + var_1_19) + var_1_17)) {
  if (var_1_12 >= ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) {
   if (var_1_17 < var_1_59) {
    var_1_57 = var_1_19;
   }
  } else {
   var_1_57 = var_1_15;
  }
 }
 if ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - var_1_18) > var_1_19) {
  if (var_1_57 >= var_1_15) {
   var_1_29 = (last_1_var_1_29 + -128);
  } else {
   if (var_1_16 <= var_1_58) {
    if (var_1_27) {
     var_1_29 = ((var_1_9 + last_1_var_1_29) + 5);
    }
   } else {
    var_1_29 = var_1_21;
   }
  }
 } else {
  var_1_29 = last_1_var_1_29;
 }
 unsigned long int stepLocal_9 = (((var_1_31) > (var_1_12)) ? (var_1_31) : (var_1_12));
 if (stepLocal_9 == var_1_49) {
  var_1_38 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 }
 signed long int stepLocal_12 = var_1_44 % var_1_45;
 signed long int stepLocal_11 = 10000;
 if (var_1_56) {
  var_1_53 = var_1_47;
 } else {
  if ((var_1_31 ^ ((((last_1_var_1_53) > (last_1_var_1_53)) ? (last_1_var_1_53) : (last_1_var_1_53)))) > stepLocal_11) {
   if (stepLocal_12 == var_1_47) {
    if (var_1_1 != var_1_18) {
     var_1_53 = (var_1_48 - var_1_9);
    } else {
     var_1_53 = (((((((((var_1_47) > (var_1_63)) ? (var_1_47) : (var_1_63)))) > ((var_1_29 + var_1_42))) ? (((((var_1_47) > (var_1_63)) ? (var_1_47) : (var_1_63)))) : ((var_1_29 + var_1_42)))) + var_1_31);
    }
   }
  } else {
   var_1_53 = ((((((25 - var_1_49) + var_1_44)) < (((((-5) > ((var_1_31 + var_1_48))) ? (-5) : ((var_1_31 + var_1_48)))))) ? (((25 - var_1_49) + var_1_44)) : (((((-5) > ((var_1_31 + var_1_48))) ? (-5) : ((var_1_31 + var_1_48)))))));
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 2305843.009213691390e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -128);
 assume_abort_if_not(var_1_21 <= 127);
 assume_abort_if_not(var_1_21 != 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 2147483647);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 4611686.018427387900e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 254);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 95);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 95);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 63);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= 16382);
 assume_abort_if_not(var_1_48 <= 32766);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 2147483647);
 assume_abort_if_not(var_1_51 <= 4294967294);
 var_1_60 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_60 >= 16384);
 assume_abort_if_not(var_1_60 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_23 = var_1_23;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_56 = var_1_56;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_62 = var_1_62;
}
int property() {
 return ((((((((((((((((((((((((var_1_30 ? (var_1_1 == ((double) (((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))))) : ((var_1_30 && var_1_56) ? (var_1_1 == ((double) (var_1_4 - var_1_3))) : 1)) && (var_1_8 == ((signed char) ((var_1_9 - var_1_10) + -2)))) && (var_1_56 ? (var_1_11 == ((unsigned short int) (var_1_12 - var_1_10))) : 1)) && (var_1_56 ? (var_1_13 == ((float) ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19))))) : (var_1_13 == ((float) (((((var_1_16 - (var_1_14 + var_1_19))) < (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))) ? ((var_1_16 - (var_1_14 + var_1_19))) : (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17)))))))))) && ((var_1_30 && var_1_30) ? ((((var_1_9 / var_1_21) + var_1_10) < ((var_1_12 + var_1_47) - 128)) ? (var_1_20 == ((signed long int) (((((var_1_47 - var_1_10)) < (var_1_9)) ? ((var_1_47 - var_1_10)) : (var_1_9))))) : (((var_1_8 ^ var_1_47) > var_1_21) ? ((var_1_30 || (var_1_19 <= var_1_59)) ? (var_1_20 == ((signed long int) var_1_12)) : 1) : (var_1_36 ? (var_1_20 == ((signed long int) ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_12)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_12))))) : (var_1_20 == ((signed long int) ((((((16) < 0 ) ? -(16) : (16))) + 256) - ((((0) > (var_1_47)) ? (0) : (var_1_47))))))))) : 1)) && ((var_1_16 == var_1_3) ? (var_1_23 == ((unsigned char) ((var_1_56 && (var_1_24 || var_1_25)) || (var_1_26 || (var_1_30 && var_1_27))))) : (var_1_23 == ((unsigned char) var_1_28)))) && (((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - var_1_18) > var_1_19) ? ((var_1_57 >= var_1_15) ? (var_1_29 == ((signed short int) (last_1_var_1_29 + -128))) : ((var_1_16 <= var_1_58) ? (var_1_27 ? (var_1_29 == ((signed short int) ((var_1_9 + last_1_var_1_29) + 5))) : 1) : (var_1_29 == ((signed short int) var_1_21)))) : (var_1_29 == ((signed short int) last_1_var_1_29)))) && ((var_1_12 > last_1_var_1_53) ? ((var_1_25 && ((last_1_var_1_59 / var_1_17) < var_1_18)) ? (var_1_30 == ((unsigned char) (! (! var_1_26)))) : (var_1_30 == ((unsigned char) ((last_1_var_1_56 && (var_1_26 && var_1_27)) || var_1_25)))) : 1)) && (((var_1_8 == var_1_21) || (var_1_15 <= var_1_19)) ? (var_1_31 == ((unsigned long int) (var_1_32 - var_1_9))) : ((var_1_3 < var_1_15) ? (var_1_31 == ((unsigned long int) (var_1_12 + var_1_9))) : ((var_1_10 < var_1_34) ? (var_1_31 == ((unsigned long int) var_1_10)) : (var_1_31 == ((unsigned long int) var_1_9)))))) && ((var_1_50 <= var_1_32) ? (var_1_34 == ((signed short int) var_1_11)) : ((var_1_26 && var_1_23) ? (var_1_34 == ((signed short int) ((((((((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) < 0 ) ? -((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) : ((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))))) < 0 ) ? -(((((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) < 0 ) ? -((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) : ((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))))) : (((((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) < 0 ) ? -((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))) : ((((var_1_21) > (var_1_11)) ? (var_1_21) : (var_1_11))))))))) : 1))) && (var_1_26 ? ((var_1_59 != var_1_15) ? (var_1_36 == ((unsigned char) ((var_1_18 > var_1_3) || var_1_28))) : (var_1_36 == ((unsigned char) var_1_28))) : (((var_1_18 - var_1_16) >= (((((var_1_19) > (var_1_14)) ? (var_1_19) : (var_1_14))) - var_1_3)) ? (var_1_36 == ((unsigned char) (! var_1_28))) : (var_1_36 == ((unsigned char) (! var_1_25)))))) && (var_1_37 == ((float) (var_1_3 - var_1_19)))) && ((((((var_1_31) > (var_1_12)) ? (var_1_31) : (var_1_12))) == var_1_49) ? (var_1_38 == ((float) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))) : 1)) && ((var_1_59 < ((var_1_40 - var_1_19) - var_1_17)) ? ((31.5 > (((((5.5) < 0 ) ? -(5.5) : (5.5))) + (- var_1_13))) ? ((var_1_36 && ((var_1_16 <= var_1_13) && var_1_36)) ? (var_1_39 == ((unsigned char) (var_1_10 + (((((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) < 0 ) ? -((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) : ((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42)))))))) : (var_1_39 == ((unsigned char) ((((((((4) > (var_1_9)) ? (4) : (var_1_9)))) > (var_1_43)) ? (((((4) > (var_1_9)) ? (4) : (var_1_9)))) : (var_1_43)))))) : ((-8 > ((var_1_10 + var_1_49) | var_1_50)) ? (var_1_39 == ((unsigned char) ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) < (var_1_43)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_43))))) : 1)) : ((var_1_59 <= ((- var_1_13) * var_1_3)) ? (var_1_39 == ((unsigned char) (((var_1_44 + var_1_45) - var_1_10) - (var_1_9 + var_1_46)))) : 1))) && (var_1_56 ? (var_1_47 == ((signed short int) ((var_1_48 - var_1_45) - var_1_43))) : 1)) && ((16 > var_1_42) ? (var_1_49 == ((unsigned short int) ((((var_1_10) < (var_1_42)) ? (var_1_10) : (var_1_42))))) : 1)) && (((((((var_1_42 + last_1_var_1_53)) > (var_1_44)) ? ((var_1_42 + last_1_var_1_53)) : (var_1_44))) > (last_1_var_1_31 - var_1_48)) ? (var_1_50 == ((unsigned long int) (((((var_1_32) < (var_1_51)) ? (var_1_32) : (var_1_51))) - var_1_46))) : ((last_1_var_1_57 >= var_1_19) ? (var_1_50 == ((unsigned long int) (last_1_var_1_31 + var_1_42))) : 1))) && (var_1_56 ? (var_1_53 == ((signed long int) var_1_47)) : (((var_1_31 ^ ((((last_1_var_1_53) > (last_1_var_1_53)) ? (last_1_var_1_53) : (last_1_var_1_53)))) > 10000) ? (((var_1_44 % var_1_45) == var_1_47) ? ((var_1_1 != var_1_18) ? (var_1_53 == ((signed long int) (var_1_48 - var_1_9))) : (var_1_53 == ((signed long int) (((((((((var_1_47) > (var_1_63)) ? (var_1_47) : (var_1_63)))) > ((var_1_29 + var_1_42))) ? (((((var_1_47) > (var_1_63)) ? (var_1_47) : (var_1_63)))) : ((var_1_29 + var_1_42)))) + var_1_31)))) : 1) : (var_1_53 == ((signed long int) ((((((25 - var_1_49) + var_1_44)) < (((((-5) > ((var_1_31 + var_1_48))) ? (-5) : ((var_1_31 + var_1_48)))))) ? (((25 - var_1_49) + var_1_44)) : (((((-5) > ((var_1_31 + var_1_48))) ? (-5) : ((var_1_31 + var_1_48)))))))))))) && ((1 >= last_1_var_1_49) ? (var_1_56 == ((unsigned char) (! (last_1_var_1_23 && var_1_26)))) : (var_1_56 == ((unsigned char) ((last_1_var_1_62 < ((((var_1_42) > (var_1_46)) ? (var_1_42) : (var_1_46)))) && var_1_26))))) && ((var_1_58 <= ((var_1_15 + var_1_19) + var_1_17)) ? ((var_1_12 >= ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) ? ((var_1_17 < var_1_59) ? (var_1_57 == ((double) var_1_19)) : 1) : (var_1_57 == ((double) var_1_15))) : 1)) && (var_1_56 ? (var_1_58 == ((double) var_1_15)) : (var_1_58 == ((double) var_1_4)))) && ((((22760 + var_1_60) - var_1_46) >= var_1_50) ? (var_1_59 == ((float) var_1_4)) : 1)) && (var_1_61 == ((unsigned char) var_1_42))) && (var_1_62 == ((unsigned short int) var_1_46))) && (var_1_63 == ((signed long int) var_1_50))
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
