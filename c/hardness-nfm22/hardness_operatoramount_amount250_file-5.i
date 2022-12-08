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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -100;
double var_1_3 = 3.125;
double var_1_4 = 256.25;
signed short int var_1_12 = 8;
unsigned char var_1_15 = 2;
float var_1_16 = 0.0;
double var_1_17 = 63.3;
unsigned char var_1_18 = 10;
double var_1_19 = 100000000000000.6;
double var_1_20 = 0.0;
double var_1_21 = 24.55;
double var_1_22 = 0.0;
double var_1_23 = 7.5;
double var_1_24 = 99999999.8;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 100;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 1;
unsigned short int var_1_34 = 2;
unsigned short int var_1_35 = 60425;
unsigned short int var_1_36 = 500;
unsigned long int var_1_38 = 16;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
signed short int var_1_42 = 8;
float var_1_43 = -0.5;
float var_1_44 = 2.5;
float var_1_45 = 4.4;
float var_1_46 = 1000.7;
signed char var_1_47 = -4;
signed short int var_1_48 = 5;
double var_1_49 = 0.6;
double var_1_50 = 200.5;
double var_1_51 = 7.5;
signed char var_1_52 = 2;
signed char var_1_53 = -2;
float var_1_54 = 16.875;
signed short int last_1_var_1_12 = 8;
unsigned char last_1_var_1_15 = 2;
unsigned char last_1_var_1_25 = 128;
unsigned char last_1_var_1_29 = 0;
unsigned short int last_1_var_1_34 = 2;
unsigned short int last_1_var_1_36 = 500;
unsigned long int last_1_var_1_38 = 16;
unsigned char last_1_var_1_39 = 128;
unsigned char last_1_var_1_40 = 0;
signed short int last_1_var_1_48 = 5;
double last_1_var_1_49 = 0.6;
signed char last_1_var_1_52 = 2;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_10 = last_1_var_1_38;
 signed long int stepLocal_9 = last_1_var_1_25;
 signed long int stepLocal_8 = last_1_var_1_15;
 if (var_1_26 > stepLocal_10) {
  if (var_1_26 <= stepLocal_9) {
   if (((((0.6f) < 0 ) ? -(0.6f) : (0.6f))) <= ((var_1_16 + var_1_22) + var_1_4)) {
    var_1_39 = (var_1_27 + var_1_28);
   } else {
    var_1_39 = (var_1_27 + var_1_28);
   }
  } else {
   if (var_1_31) {
    var_1_39 = var_1_18;
   } else {
    if (stepLocal_8 <= var_1_26) {
     var_1_39 = (var_1_26 + var_1_28);
    } else {
     var_1_39 = (((((var_1_27 + var_1_28)) < (var_1_18)) ? ((var_1_27 + var_1_28)) : (var_1_18)));
    }
   }
  }
 } else {
  var_1_39 = var_1_28;
 }
 if (! last_1_var_1_29) {
  var_1_12 = (last_1_var_1_52 + last_1_var_1_39);
 }
 unsigned char stepLocal_5 = var_1_32;
 if (stepLocal_5 || last_1_var_1_40) {
  var_1_34 = ((20935 - last_1_var_1_36) + var_1_18);
 } else {
  var_1_34 = ((var_1_35 - last_1_var_1_36) - ((((var_1_26) > (last_1_var_1_25)) ? (var_1_26) : (last_1_var_1_25))));
 }
 unsigned char stepLocal_14 = last_1_var_1_40;
 if ((last_1_var_1_15 > last_1_var_1_12) && stepLocal_14) {
  var_1_49 = ((((var_1_23) > (var_1_44)) ? (var_1_23) : (var_1_44)));
 } else {
  if ((var_1_44 + var_1_21) <= (- var_1_16)) {
   var_1_49 = (((var_1_50 + var_1_51) + 25.5) + var_1_24);
  } else {
   var_1_49 = (var_1_44 + var_1_45);
  }
 }
 signed long int stepLocal_4 = last_1_var_1_12;
 signed long int stepLocal_3 = ~ -50;
 if (last_1_var_1_52 > stepLocal_4) {
  if (last_1_var_1_40) {
   var_1_29 = (last_1_var_1_40 && var_1_31);
  } else {
   var_1_29 = (! var_1_31);
  }
 } else {
  if (stepLocal_3 > (last_1_var_1_15 / var_1_26)) {
   if (last_1_var_1_49 > (- var_1_16)) {
    var_1_29 = (last_1_var_1_40 || var_1_32);
   } else {
    var_1_29 = var_1_33;
   }
  } else {
   var_1_29 = var_1_31;
  }
 }
 if (var_1_16 < var_1_24) {
  var_1_40 = (var_1_31 || ((! var_1_33) || var_1_41));
 } else {
  var_1_40 = (((last_1_var_1_52 % var_1_27) < (last_1_var_1_34 * var_1_18)) || var_1_32);
 }
 if (((var_1_16 - 1.58f) - var_1_4) >= last_1_var_1_49) {
  if ((- var_1_3) <= (last_1_var_1_49 / var_1_17)) {
   var_1_15 = ((((var_1_18) < (10)) ? (var_1_18) : (10)));
  } else {
   var_1_15 = ((((100) < 0 ) ? -(100) : (100)));
  }
 }
 if (var_1_40) {
  var_1_19 = (15.6 - (var_1_20 - ((((32.5) < 0 ) ? -(32.5) : (32.5)))));
 } else {
  var_1_19 = (var_1_21 + ((var_1_22 - var_1_23) - var_1_24));
 }
 if ((var_1_16 / ((((var_1_22) > (10000.5)) ? (var_1_22) : (10000.5)))) < var_1_3) {
  var_1_25 = ((64 + var_1_26) - ((var_1_27 + 32) - var_1_28));
 }
 signed long int stepLocal_15 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) | var_1_15;
 if (var_1_31) {
  if ((var_1_15 % ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))) > stepLocal_15) {
   var_1_54 = ((((var_1_24) < (var_1_44)) ? (var_1_24) : (var_1_44)));
  } else {
   var_1_54 = var_1_44;
  }
 } else {
  var_1_54 = var_1_51;
 }
 unsigned short int stepLocal_12 = var_1_34;
 if (! (var_1_28 < var_1_27)) {
  if ((var_1_25 | var_1_34) >= stepLocal_12) {
   var_1_47 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
  }
 }
 unsigned char stepLocal_11 = var_1_47 != var_1_34;
 if ((((((-1) > (var_1_25)) ? (-1) : (var_1_25))) < (~ var_1_15)) && stepLocal_11) {
  var_1_42 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 }
 if (var_1_32) {
  if (! var_1_41) {
   var_1_43 = (((((((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22)))) < ((var_1_24 - var_1_44))) ? (((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22)))) : ((var_1_24 - var_1_44)))) + (var_1_45 - var_1_46));
  } else {
   if ((- var_1_12) < (var_1_25 - var_1_26)) {
    if (var_1_42 == ((((var_1_27) < (var_1_12)) ? (var_1_27) : (var_1_12)))) {
     var_1_43 = (((((var_1_45 + var_1_21)) < (((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < (var_1_22)) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (var_1_22))))) ? ((var_1_45 + var_1_21)) : (((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < (var_1_22)) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (var_1_22))))));
    } else {
     if (var_1_29 || var_1_40) {
      var_1_43 = ((((var_1_20 - var_1_44) < 0 ) ? -(var_1_20 - var_1_44) : (var_1_20 - var_1_44)));
     }
    }
   }
  }
 } else {
  if (var_1_45 <= (var_1_54 + var_1_24)) {
   var_1_43 = var_1_22;
  } else {
   var_1_43 = (((((var_1_46 + var_1_21)) > (var_1_20)) ? ((var_1_46 + var_1_21)) : (var_1_20)));
  }
 }
 unsigned char stepLocal_7 = var_1_40 && var_1_33;
 signed long int stepLocal_6 = var_1_15 / ((((-50) > (var_1_27)) ? (-50) : (var_1_27)));
 if (stepLocal_7 || var_1_29) {
  if (var_1_3 > ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) {
   var_1_36 = (((((((((var_1_18) > (var_1_42)) ? (var_1_18) : (var_1_42))) + (var_1_26 + var_1_27))) < (var_1_28)) ? ((((((var_1_18) > (var_1_42)) ? (var_1_18) : (var_1_42))) + (var_1_26 + var_1_27))) : (var_1_28)));
  }
 } else {
  if (((((var_1_47) < (var_1_35)) ? (var_1_47) : (var_1_35))) <= stepLocal_6) {
   var_1_36 = var_1_26;
  }
 }
 signed long int stepLocal_13 = (var_1_39 & var_1_28) + var_1_39;
 if (((var_1_39 * var_1_36) | last_1_var_1_48) == stepLocal_13) {
  var_1_48 = var_1_18;
 } else {
  if (var_1_29) {
   var_1_48 = ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)));
  } else {
   var_1_48 = (var_1_18 + var_1_15);
  }
 }
 if (var_1_24 <= (1.6 + var_1_22)) {
  var_1_38 = (((((var_1_26) > (var_1_39)) ? (var_1_26) : (var_1_39))) + ((((var_1_36) < (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28))))) ? (var_1_36) : (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28)))))));
 }
 unsigned char stepLocal_2 = var_1_15;
 unsigned char stepLocal_1 = var_1_15;
 unsigned char stepLocal_0 = var_1_29;
 if (var_1_49 > (var_1_3 - var_1_4)) {
  if ((var_1_3 < var_1_4) && stepLocal_0) {
   if (-256 >= stepLocal_1) {
    var_1_1 = ((((var_1_12) < (var_1_15)) ? (var_1_12) : (var_1_15)));
   } else {
    var_1_1 = (((1000000000 - var_1_36) + (1000000000 - var_1_25)) - var_1_25);
   }
  } else {
   var_1_1 = (((((var_1_36 - var_1_25)) < (((64 - var_1_25) + -100))) ? ((var_1_36 - var_1_25)) : (((64 - var_1_25) + -100))));
  }
 } else {
  if (stepLocal_2 >= var_1_25) {
   var_1_1 = var_1_25;
  }
 }
 if (var_1_44 == (- var_1_49)) {
  if (var_1_18 < var_1_1) {
   if (var_1_49 > var_1_22) {
    var_1_52 = (var_1_28 - var_1_27);
   } else {
    var_1_52 = ((((var_1_28) < (var_1_27)) ? (var_1_28) : (var_1_27)));
   }
  } else {
   if (var_1_40) {
    var_1_52 = (var_1_28 + var_1_53);
   } else {
    var_1_52 = (16 - var_1_28);
   }
  }
 } else {
  if (var_1_29) {
   var_1_52 = (var_1_28 - var_1_27);
  } else {
   if (var_1_41) {
    var_1_52 = var_1_27;
   } else {
    var_1_52 = var_1_53;
   }
  }
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 4611686.018427387900e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 4611686.018427382800e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 2305843.009213691390e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691390e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 64);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 31);
 assume_abort_if_not(var_1_27 <= 64);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 49150);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -115292.1504606845700e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 1152921.504606845700e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -115292.1504606845700e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 1152921.504606845700e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -63);
 assume_abort_if_not(var_1_53 <= 63);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_52 = var_1_52;
}
int property() {
 return ((((((((((((((((((var_1_49 > (var_1_3 - var_1_4)) ? (((var_1_3 < var_1_4) && var_1_29) ? ((-256 >= var_1_15) ? (var_1_1 == ((signed long int) ((((var_1_12) < (var_1_15)) ? (var_1_12) : (var_1_15))))) : (var_1_1 == ((signed long int) (((1000000000 - var_1_36) + (1000000000 - var_1_25)) - var_1_25)))) : (var_1_1 == ((signed long int) (((((var_1_36 - var_1_25)) < (((64 - var_1_25) + -100))) ? ((var_1_36 - var_1_25)) : (((64 - var_1_25) + -100))))))) : ((var_1_15 >= var_1_25) ? (var_1_1 == ((signed long int) var_1_25)) : 1)) && ((! last_1_var_1_29) ? (var_1_12 == ((signed short int) (last_1_var_1_52 + last_1_var_1_39))) : 1)) && ((((var_1_16 - 1.58f) - var_1_4) >= last_1_var_1_49) ? (((- var_1_3) <= (last_1_var_1_49 / var_1_17)) ? (var_1_15 == ((unsigned char) ((((var_1_18) < (10)) ? (var_1_18) : (10))))) : (var_1_15 == ((unsigned char) ((((100) < 0 ) ? -(100) : (100)))))) : 1)) && (var_1_40 ? (var_1_19 == ((double) (15.6 - (var_1_20 - ((((32.5) < 0 ) ? -(32.5) : (32.5))))))) : (var_1_19 == ((double) (var_1_21 + ((var_1_22 - var_1_23) - var_1_24)))))) && (((var_1_16 / ((((var_1_22) > (10000.5)) ? (var_1_22) : (10000.5)))) < var_1_3) ? (var_1_25 == ((unsigned char) ((64 + var_1_26) - ((var_1_27 + 32) - var_1_28)))) : 1)) && ((last_1_var_1_52 > last_1_var_1_12) ? (last_1_var_1_40 ? (var_1_29 == ((unsigned char) (last_1_var_1_40 && var_1_31))) : (var_1_29 == ((unsigned char) (! var_1_31)))) : (((~ -50) > (last_1_var_1_15 / var_1_26)) ? ((last_1_var_1_49 > (- var_1_16)) ? (var_1_29 == ((unsigned char) (last_1_var_1_40 || var_1_32))) : (var_1_29 == ((unsigned char) var_1_33))) : (var_1_29 == ((unsigned char) var_1_31))))) && ((var_1_32 || last_1_var_1_40) ? (var_1_34 == ((unsigned short int) ((20935 - last_1_var_1_36) + var_1_18))) : (var_1_34 == ((unsigned short int) ((var_1_35 - last_1_var_1_36) - ((((var_1_26) > (last_1_var_1_25)) ? (var_1_26) : (last_1_var_1_25)))))))) && (((var_1_40 && var_1_33) || var_1_29) ? ((var_1_3 > ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) ? (var_1_36 == ((unsigned short int) (((((((((var_1_18) > (var_1_42)) ? (var_1_18) : (var_1_42))) + (var_1_26 + var_1_27))) < (var_1_28)) ? ((((((var_1_18) > (var_1_42)) ? (var_1_18) : (var_1_42))) + (var_1_26 + var_1_27))) : (var_1_28))))) : 1) : ((((((var_1_47) < (var_1_35)) ? (var_1_47) : (var_1_35))) <= (var_1_15 / ((((-50) > (var_1_27)) ? (-50) : (var_1_27))))) ? (var_1_36 == ((unsigned short int) var_1_26)) : 1))) && ((var_1_24 <= (1.6 + var_1_22)) ? (var_1_38 == ((unsigned long int) (((((var_1_26) > (var_1_39)) ? (var_1_26) : (var_1_39))) + ((((var_1_36) < (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28))))) ? (var_1_36) : (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28))))))))) : 1)) && ((var_1_26 > last_1_var_1_38) ? ((var_1_26 <= last_1_var_1_25) ? ((((((0.6f) < 0 ) ? -(0.6f) : (0.6f))) <= ((var_1_16 + var_1_22) + var_1_4)) ? (var_1_39 == ((unsigned char) (var_1_27 + var_1_28))) : (var_1_39 == ((unsigned char) (var_1_27 + var_1_28)))) : (var_1_31 ? (var_1_39 == ((unsigned char) var_1_18)) : ((last_1_var_1_15 <= var_1_26) ? (var_1_39 == ((unsigned char) (var_1_26 + var_1_28))) : (var_1_39 == ((unsigned char) (((((var_1_27 + var_1_28)) < (var_1_18)) ? ((var_1_27 + var_1_28)) : (var_1_18)))))))) : (var_1_39 == ((unsigned char) var_1_28)))) && ((var_1_16 < var_1_24) ? (var_1_40 == ((unsigned char) (var_1_31 || ((! var_1_33) || var_1_41)))) : (var_1_40 == ((unsigned char) (((last_1_var_1_52 % var_1_27) < (last_1_var_1_34 * var_1_18)) || var_1_32))))) && (((((((-1) > (var_1_25)) ? (-1) : (var_1_25))) < (~ var_1_15)) && (var_1_47 != var_1_34)) ? (var_1_42 == ((signed short int) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : 1)) && (var_1_32 ? ((! var_1_41) ? (var_1_43 == ((float) (((((((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22)))) < ((var_1_24 - var_1_44))) ? (((((var_1_23) > (var_1_22)) ? (var_1_23) : (var_1_22)))) : ((var_1_24 - var_1_44)))) + (var_1_45 - var_1_46)))) : (((- var_1_12) < (var_1_25 - var_1_26)) ? ((var_1_42 == ((((var_1_27) < (var_1_12)) ? (var_1_27) : (var_1_12)))) ? (var_1_43 == ((float) (((((var_1_45 + var_1_21)) < (((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < (var_1_22)) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (var_1_22))))) ? ((var_1_45 + var_1_21)) : (((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < (var_1_22)) ? (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (var_1_22)))))))) : ((var_1_29 || var_1_40) ? (var_1_43 == ((float) ((((var_1_20 - var_1_44) < 0 ) ? -(var_1_20 - var_1_44) : (var_1_20 - var_1_44))))) : 1)) : 1)) : ((var_1_45 <= (var_1_54 + var_1_24)) ? (var_1_43 == ((float) var_1_22)) : (var_1_43 == ((float) (((((var_1_46 + var_1_21)) > (var_1_20)) ? ((var_1_46 + var_1_21)) : (var_1_20)))))))) && ((! (var_1_28 < var_1_27)) ? (((var_1_25 | var_1_34) >= var_1_34) ? (var_1_47 == ((signed char) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : 1) : 1)) && ((((var_1_39 * var_1_36) | last_1_var_1_48) == ((var_1_39 & var_1_28) + var_1_39)) ? (var_1_48 == ((signed short int) var_1_18)) : (var_1_29 ? (var_1_48 == ((signed short int) ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) : (var_1_48 == ((signed short int) (var_1_18 + var_1_15)))))) && (((last_1_var_1_15 > last_1_var_1_12) && last_1_var_1_40) ? (var_1_49 == ((double) ((((var_1_23) > (var_1_44)) ? (var_1_23) : (var_1_44))))) : (((var_1_44 + var_1_21) <= (- var_1_16)) ? (var_1_49 == ((double) (((var_1_50 + var_1_51) + 25.5) + var_1_24))) : (var_1_49 == ((double) (var_1_44 + var_1_45)))))) && ((var_1_44 == (- var_1_49)) ? ((var_1_18 < var_1_1) ? ((var_1_49 > var_1_22) ? (var_1_52 == ((signed char) (var_1_28 - var_1_27))) : (var_1_52 == ((signed char) ((((var_1_28) < (var_1_27)) ? (var_1_28) : (var_1_27)))))) : (var_1_40 ? (var_1_52 == ((signed char) (var_1_28 + var_1_53))) : (var_1_52 == ((signed char) (16 - var_1_28))))) : (var_1_29 ? (var_1_52 == ((signed char) (var_1_28 - var_1_27))) : (var_1_41 ? (var_1_52 == ((signed char) var_1_27)) : (var_1_52 == ((signed char) var_1_53)))))) && (var_1_31 ? (((var_1_15 % ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))) > (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))) | var_1_15)) ? (var_1_54 == ((float) ((((var_1_24) < (var_1_44)) ? (var_1_24) : (var_1_44))))) : (var_1_54 == ((float) var_1_44))) : (var_1_54 == ((float) var_1_51)))
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
