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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
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
unsigned short int var_1_50 = 32;
unsigned short int var_1_51 = 16746;
double var_1_52 = 4.375;
double var_1_53 = 255.4;
double var_1_54 = 5.6;
float var_1_55 = 64.5;
unsigned char var_1_56 = 0;
signed long int var_1_57 = -8;
signed short int var_1_58 = -1;
signed long int var_1_60 = -5;
float var_1_61 = 63.375;
unsigned short int last_1_var_1_11 = 4;
float last_1_var_1_13 = 9999999999999.9;
unsigned char last_1_var_1_23 = 1;
unsigned char last_1_var_1_30 = 0;
unsigned long int last_1_var_1_31 = 128;
signed short int last_1_var_1_34 = -1;
unsigned char last_1_var_1_36 = 0;
unsigned char last_1_var_1_39 = 100;
unsigned short int last_1_var_1_50 = 32;
double last_1_var_1_54 = 5.6;
unsigned char last_1_var_1_56 = 0;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_50 == var_1_21) || (var_1_15 <= var_1_19)) {
  var_1_31 = (var_1_32 - var_1_9);
 } else {
  if (var_1_3 < var_1_15) {
   var_1_31 = (var_1_12 + var_1_9);
  } else {
   if (var_1_10 < last_1_var_1_31) {
    var_1_31 = var_1_10;
   } else {
    var_1_31 = var_1_9;
   }
  }
 }
 if (last_1_var_1_36) {
  var_1_13 = ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19)));
 } else {
  var_1_13 = (((((var_1_16 - (var_1_14 + var_1_19))) < (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))) ? ((var_1_16 - (var_1_14 + var_1_19))) : (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))));
 }
 if (var_1_26) {
  if (var_1_13 != var_1_15) {
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
 signed long int stepLocal_9 = last_1_var_1_39;
 if (((((last_1_var_1_11) > (var_1_12)) ? (last_1_var_1_11) : (var_1_12))) == stepLocal_9) {
  var_1_38 = ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)));
 }
 unsigned char stepLocal_0 = last_1_var_1_30;
 if (last_1_var_1_30) {
  var_1_1 = (((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5)));
 } else {
  if (last_1_var_1_56 && stepLocal_0) {
   var_1_1 = (var_1_4 - var_1_3);
  }
 }
 if (var_1_1 > (- var_1_19)) {
  var_1_54 = (((((var_1_19 + var_1_17)) < (var_1_15)) ? ((var_1_19 + var_1_17)) : (var_1_15)));
 }
 var_1_56 = (((last_1_var_1_13 / var_1_40) >= (- last_1_var_1_54)) || var_1_28);
 if (var_1_16 == var_1_3) {
  var_1_23 = ((last_1_var_1_56 && (var_1_24 || var_1_25)) || (var_1_26 || (last_1_var_1_23 && var_1_27)));
 } else {
  var_1_23 = var_1_28;
 }
 if (var_1_23) {
  var_1_11 = (var_1_12 - var_1_10);
 }
 if (var_1_23) {
  var_1_47 = ((var_1_48 - var_1_45) - var_1_43);
 }
 var_1_8 = ((var_1_9 - var_1_10) + -2);
 if ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - var_1_18) > var_1_19) {
  if (var_1_54 >= var_1_15) {
   var_1_29 = (var_1_8 + -128);
  } else {
   if (var_1_16 <= var_1_13) {
    if (var_1_27) {
     var_1_29 = ((var_1_9 + var_1_8) + 5);
    }
   } else {
    var_1_29 = var_1_21;
   }
  }
 } else {
  var_1_29 = var_1_8;
 }
 var_1_37 = (var_1_3 - var_1_19);
 signed short int stepLocal_10 = var_1_48;
 if (stepLocal_10 >= -256) {
  var_1_49 = (var_1_12 - ((((((((10) > (var_1_42)) ? (10) : (var_1_42)))) < ((2 + var_1_46))) ? (((((10) > (var_1_42)) ? (10) : (var_1_42)))) : ((2 + var_1_46)))));
 }
 var_1_55 = ((((var_1_3) < (var_1_18)) ? (var_1_3) : (var_1_18)));
 if ((var_1_19 - var_1_18) > var_1_54) {
  var_1_57 = ((var_1_46 + var_1_42) + (var_1_12 + var_1_31));
 } else {
  var_1_57 = (var_1_9 - var_1_45);
 }
 unsigned short int stepLocal_16 = var_1_51;
 unsigned char stepLocal_15 = var_1_19 < var_1_4;
 if (var_1_32 >= stepLocal_16) {
  var_1_60 = (((((var_1_10 + 10)) > (var_1_51)) ? ((var_1_10 + 10)) : (var_1_51)));
 } else {
  if (var_1_28 || stepLocal_15) {
   var_1_60 = -8;
  }
 }
 var_1_61 = var_1_53;
 signed long int stepLocal_12 = var_1_60;
 signed long int stepLocal_11 = -128;
 if (var_1_36) {
  var_1_50 = (var_1_12 - var_1_9);
 } else {
  if (stepLocal_12 == var_1_31) {
   var_1_50 = (var_1_12 - (var_1_51 - 32));
  } else {
   if (var_1_31 < stepLocal_11) {
    var_1_50 = ((((var_1_42) < (((((var_1_43) < (var_1_46)) ? (var_1_43) : (var_1_46))))) ? (var_1_42) : (((((var_1_43) < (var_1_46)) ? (var_1_43) : (var_1_46))))));
   } else {
    var_1_50 = (var_1_48 + var_1_43);
   }
  }
 }
 signed long int stepLocal_4 = var_1_60 ^ var_1_49;
 signed long int stepLocal_3 = (var_1_12 + var_1_49) - 128;
 unsigned char stepLocal_2 = var_1_19 <= var_1_38;
 unsigned char stepLocal_1 = var_1_56;
 if (var_1_23 && stepLocal_1) {
  if (((var_1_9 / var_1_21) + var_1_10) < stepLocal_3) {
   var_1_20 = (((((var_1_49 - var_1_10)) < (var_1_9)) ? ((var_1_49 - var_1_10)) : (var_1_9)));
  } else {
   if (stepLocal_4 > var_1_21) {
    if (var_1_56 || stepLocal_2) {
     var_1_20 = var_1_12;
    }
   } else {
    if (var_1_23) {
     var_1_20 = ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_12)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_12)));
    } else {
     var_1_20 = ((((((16) < 0 ) ? -(16) : (16))) + 256) - ((((0) > (var_1_49)) ? (0) : (var_1_49))));
    }
   }
  }
 }
 unsigned char stepLocal_14 = var_1_23;
 unsigned long int stepLocal_13 = var_1_32;
 if (var_1_49 < stepLocal_13) {
  var_1_52 = (((((100.7 - var_1_53)) > (var_1_3)) ? ((100.7 - var_1_53)) : (var_1_3)));
 } else {
  if ((var_1_31 == var_1_48) && stepLocal_14) {
   var_1_52 = (((((var_1_14 + var_1_19)) < (var_1_15)) ? ((var_1_14 + var_1_19)) : (var_1_15)));
  }
 }
 if (var_1_38 < var_1_52) {
  var_1_58 = ((((var_1_43) < (((((var_1_21) < (var_1_8)) ? (var_1_21) : (var_1_8))))) ? (var_1_43) : (((((var_1_21) < (var_1_8)) ? (var_1_21) : (var_1_8))))));
 } else {
  var_1_58 = var_1_44;
 }
 unsigned short int stepLocal_6 = var_1_12;
 unsigned char stepLocal_5 = var_1_25;
 if (stepLocal_6 > var_1_20) {
  if (stepLocal_5 && ((var_1_52 / var_1_17) < var_1_18)) {
   var_1_30 = (! (! var_1_26));
  } else {
   var_1_30 = ((var_1_36 && (var_1_26 && var_1_27)) || var_1_25);
  }
 }
 if (var_1_13 < ((var_1_40 - var_1_19) - var_1_17)) {
  if (31.5 > (((((5.5) < 0 ) ? -(5.5) : (5.5))) + (- var_1_54))) {
   if (var_1_56 && ((var_1_16 <= var_1_1) && var_1_30)) {
    var_1_39 = (var_1_10 + (((((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) < 0 ) ? -((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) : ((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))))));
   } else {
    var_1_39 = ((((((((4) > (var_1_9)) ? (4) : (var_1_9)))) > (var_1_43)) ? (((((4) > (var_1_9)) ? (4) : (var_1_9)))) : (var_1_43)));
   }
  } else {
   if (-8 > ((var_1_10 + var_1_8) | var_1_47)) {
    var_1_39 = ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) < (var_1_43)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_43)));
   }
  }
 } else {
  if (var_1_13 <= ((- var_1_38) * var_1_3)) {
   var_1_39 = (((var_1_44 + var_1_45) - var_1_10) - (var_1_9 + var_1_46));
  }
 }
 unsigned char stepLocal_8 = var_1_30;
 unsigned long int stepLocal_7 = var_1_32;
 if (var_1_50 <= stepLocal_7) {
  var_1_34 = var_1_11;
 } else {
  if (var_1_26 && stepLocal_8) {
   var_1_34 = ((((((((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) < 0 ) ? -((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) : ((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))))) < 0 ) ? -(((((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) < 0 ) ? -((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) : ((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))))) : (((((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) < 0 ) ? -((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) : ((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34)))))));
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
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
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 2305843.009213691400e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
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
 assume_abort_if_not((var_1_40 >= 4611686.018427388000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
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
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 16383);
 assume_abort_if_not(var_1_51 <= 32767);
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854766000e+12F && var_1_53 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_56 = var_1_56;
}
int property(void) {
 return ((((((((((((((((((((((((last_1_var_1_30 ? (var_1_1 == ((double) (((((var_1_3 - var_1_4)) < (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))))) : ((last_1_var_1_56 && last_1_var_1_30) ? (var_1_1 == ((double) (var_1_4 - var_1_3))) : 1)) && (var_1_8 == ((signed char) ((var_1_9 - var_1_10) + -2)))) && (var_1_23 ? (var_1_11 == ((unsigned short int) (var_1_12 - var_1_10))) : 1)) && (last_1_var_1_36 ? (var_1_13 == ((float) ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19))))) : (var_1_13 == ((float) (((((var_1_16 - (var_1_14 + var_1_19))) < (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17))))) ? ((var_1_16 - (var_1_14 + var_1_19))) : (((((var_1_18 - var_1_17) < 0 ) ? -(var_1_18 - var_1_17) : (var_1_18 - var_1_17)))))))))) && ((var_1_23 && var_1_56) ? ((((var_1_9 / var_1_21) + var_1_10) < ((var_1_12 + var_1_49) - 128)) ? (var_1_20 == ((signed long int) (((((var_1_49 - var_1_10)) < (var_1_9)) ? ((var_1_49 - var_1_10)) : (var_1_9))))) : (((var_1_60 ^ var_1_49) > var_1_21) ? ((var_1_56 || (var_1_19 <= var_1_38)) ? (var_1_20 == ((signed long int) var_1_12)) : 1) : (var_1_23 ? (var_1_20 == ((signed long int) ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) > (var_1_12)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_12))))) : (var_1_20 == ((signed long int) ((((((16) < 0 ) ? -(16) : (16))) + 256) - ((((0) > (var_1_49)) ? (0) : (var_1_49))))))))) : 1)) && ((var_1_16 == var_1_3) ? (var_1_23 == ((unsigned char) ((last_1_var_1_56 && (var_1_24 || var_1_25)) || (var_1_26 || (last_1_var_1_23 && var_1_27))))) : (var_1_23 == ((unsigned char) var_1_28)))) && (((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - var_1_18) > var_1_19) ? ((var_1_54 >= var_1_15) ? (var_1_29 == ((signed short int) (var_1_8 + -128))) : ((var_1_16 <= var_1_13) ? (var_1_27 ? (var_1_29 == ((signed short int) ((var_1_9 + var_1_8) + 5))) : 1) : (var_1_29 == ((signed short int) var_1_21)))) : (var_1_29 == ((signed short int) var_1_8)))) && ((var_1_12 > var_1_20) ? ((var_1_25 && ((var_1_52 / var_1_17) < var_1_18)) ? (var_1_30 == ((unsigned char) (! (! var_1_26)))) : (var_1_30 == ((unsigned char) ((var_1_36 && (var_1_26 && var_1_27)) || var_1_25)))) : 1)) && (((last_1_var_1_50 == var_1_21) || (var_1_15 <= var_1_19)) ? (var_1_31 == ((unsigned long int) (var_1_32 - var_1_9))) : ((var_1_3 < var_1_15) ? (var_1_31 == ((unsigned long int) (var_1_12 + var_1_9))) : ((var_1_10 < last_1_var_1_31) ? (var_1_31 == ((unsigned long int) var_1_10)) : (var_1_31 == ((unsigned long int) var_1_9)))))) && ((var_1_50 <= var_1_32) ? (var_1_34 == ((signed short int) var_1_11)) : ((var_1_26 && var_1_30) ? (var_1_34 == ((signed short int) ((((((((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) < 0 ) ? -((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) : ((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))))) < 0 ) ? -(((((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) < 0 ) ? -((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) : ((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))))) : (((((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) < 0 ) ? -((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))) : ((((var_1_21) > (last_1_var_1_34)) ? (var_1_21) : (last_1_var_1_34))))))))) : 1))) && (var_1_26 ? ((var_1_13 != var_1_15) ? (var_1_36 == ((unsigned char) ((var_1_18 > var_1_3) || var_1_28))) : (var_1_36 == ((unsigned char) var_1_28))) : (((var_1_18 - var_1_16) >= (((((var_1_19) > (var_1_14)) ? (var_1_19) : (var_1_14))) - var_1_3)) ? (var_1_36 == ((unsigned char) (! var_1_28))) : (var_1_36 == ((unsigned char) (! var_1_25)))))) && (var_1_37 == ((float) (var_1_3 - var_1_19)))) && ((((((last_1_var_1_11) > (var_1_12)) ? (last_1_var_1_11) : (var_1_12))) == last_1_var_1_39) ? (var_1_38 == ((float) ((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))))) : 1)) && ((var_1_13 < ((var_1_40 - var_1_19) - var_1_17)) ? ((31.5 > (((((5.5) < 0 ) ? -(5.5) : (5.5))) + (- var_1_54))) ? ((var_1_56 && ((var_1_16 <= var_1_1) && var_1_30)) ? (var_1_39 == ((unsigned char) (var_1_10 + (((((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) < 0 ) ? -((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42))) : ((((var_1_9) > (var_1_42)) ? (var_1_9) : (var_1_42)))))))) : (var_1_39 == ((unsigned char) ((((((((4) > (var_1_9)) ? (4) : (var_1_9)))) > (var_1_43)) ? (((((4) > (var_1_9)) ? (4) : (var_1_9)))) : (var_1_43)))))) : ((-8 > ((var_1_10 + var_1_8) | var_1_47)) ? (var_1_39 == ((unsigned char) ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) < (var_1_43)) ? (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (var_1_43))))) : 1)) : ((var_1_13 <= ((- var_1_38) * var_1_3)) ? (var_1_39 == ((unsigned char) (((var_1_44 + var_1_45) - var_1_10) - (var_1_9 + var_1_46)))) : 1))) && (var_1_23 ? (var_1_47 == ((signed short int) ((var_1_48 - var_1_45) - var_1_43))) : 1)) && ((var_1_48 >= -256) ? (var_1_49 == ((unsigned short int) (var_1_12 - ((((((((10) > (var_1_42)) ? (10) : (var_1_42)))) < ((2 + var_1_46))) ? (((((10) > (var_1_42)) ? (10) : (var_1_42)))) : ((2 + var_1_46))))))) : 1)) && (var_1_36 ? (var_1_50 == ((unsigned short int) (var_1_12 - var_1_9))) : ((var_1_60 == var_1_31) ? (var_1_50 == ((unsigned short int) (var_1_12 - (var_1_51 - 32)))) : ((var_1_31 < -128) ? (var_1_50 == ((unsigned short int) ((((var_1_42) < (((((var_1_43) < (var_1_46)) ? (var_1_43) : (var_1_46))))) ? (var_1_42) : (((((var_1_43) < (var_1_46)) ? (var_1_43) : (var_1_46)))))))) : (var_1_50 == ((unsigned short int) (var_1_48 + var_1_43))))))) && ((var_1_49 < var_1_32) ? (var_1_52 == ((double) (((((100.7 - var_1_53)) > (var_1_3)) ? ((100.7 - var_1_53)) : (var_1_3))))) : (((var_1_31 == var_1_48) && var_1_23) ? (var_1_52 == ((double) (((((var_1_14 + var_1_19)) < (var_1_15)) ? ((var_1_14 + var_1_19)) : (var_1_15))))) : 1))) && ((var_1_1 > (- var_1_19)) ? (var_1_54 == ((double) (((((var_1_19 + var_1_17)) < (var_1_15)) ? ((var_1_19 + var_1_17)) : (var_1_15))))) : 1)) && (var_1_55 == ((float) ((((var_1_3) < (var_1_18)) ? (var_1_3) : (var_1_18)))))) && (var_1_56 == ((unsigned char) (((last_1_var_1_13 / var_1_40) >= (- last_1_var_1_54)) || var_1_28)))) && (((var_1_19 - var_1_18) > var_1_54) ? (var_1_57 == ((signed long int) ((var_1_46 + var_1_42) + (var_1_12 + var_1_31)))) : (var_1_57 == ((signed long int) (var_1_9 - var_1_45))))) && ((var_1_38 < var_1_52) ? (var_1_58 == ((signed short int) ((((var_1_43) < (((((var_1_21) < (var_1_8)) ? (var_1_21) : (var_1_8))))) ? (var_1_43) : (((((var_1_21) < (var_1_8)) ? (var_1_21) : (var_1_8)))))))) : (var_1_58 == ((signed short int) var_1_44)))) && ((var_1_32 >= var_1_51) ? (var_1_60 == ((signed long int) (((((var_1_10 + 10)) > (var_1_51)) ? ((var_1_10 + 10)) : (var_1_51))))) : ((var_1_28 || (var_1_19 < var_1_4)) ? (var_1_60 == ((signed long int) -8)) : 1))) && (var_1_61 == ((float) var_1_53))
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
