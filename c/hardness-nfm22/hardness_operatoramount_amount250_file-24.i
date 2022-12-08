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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 0.8;
float var_1_5 = 10000000000.75;
float var_1_6 = 50.5;
float var_1_7 = 3.875;
unsigned long int var_1_8 = 256;
unsigned long int var_1_10 = 0;
unsigned long int var_1_12 = 64;
float var_1_13 = 199.5;
float var_1_15 = -0.554;
unsigned long int var_1_16 = 8;
signed char var_1_18 = 64;
unsigned char var_1_19 = 1;
signed char var_1_20 = 0;
signed char var_1_21 = 5;
signed char var_1_22 = 25;
signed char var_1_23 = 4;
signed long int var_1_24 = -128;
double var_1_25 = 1000000000000000.2;
double var_1_26 = 5.125;
double var_1_27 = 127.4;
double var_1_28 = 1000000000000.46;
double var_1_29 = 999999999.4;
double var_1_30 = 16.2;
double var_1_31 = 50.65;
double var_1_32 = 63.08;
double var_1_33 = 8.5;
float var_1_34 = 0.8;
signed char var_1_35 = -25;
signed long int var_1_36 = 256;
signed short int var_1_37 = -100;
unsigned char var_1_38 = 0;
signed short int var_1_39 = 18924;
unsigned char var_1_40 = 0;
signed short int var_1_41 = -4;
float var_1_42 = 100.5;
float var_1_44 = 31.5;
float var_1_45 = 256.25;
unsigned short int var_1_46 = 64;
signed char var_1_48 = -16;
signed char var_1_50 = 64;
signed char var_1_51 = 8;
signed char var_1_52 = 32;
signed char var_1_53 = 25;
signed short int var_1_54 = 0;
unsigned long int last_1_var_1_8 = 256;
unsigned long int last_1_var_1_16 = 8;
signed long int last_1_var_1_24 = -128;
signed long int last_1_var_1_36 = 256;
signed short int last_1_var_1_37 = -100;
unsigned char last_1_var_1_38 = 0;
unsigned short int last_1_var_1_46 = 64;
signed char last_1_var_1_48 = -16;
signed short int last_1_var_1_54 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_21 = var_1_12 | (var_1_53 * var_1_20);
 unsigned char stepLocal_20 = last_1_var_1_38;
 if (stepLocal_20 || last_1_var_1_38) {
  if (stepLocal_21 > (var_1_23 * (- last_1_var_1_16))) {
   if (var_1_40) {
    var_1_54 = var_1_53;
   } else {
    var_1_54 = last_1_var_1_16;
   }
  } else {
   var_1_54 = var_1_51;
  }
 }
 if (last_1_var_1_48 < 4) {
  if (((((last_1_var_1_36) > (last_1_var_1_54)) ? (last_1_var_1_36) : (last_1_var_1_54))) != var_1_10) {
   var_1_46 = (((((last_1_var_1_8) > (var_1_23)) ? (last_1_var_1_8) : (var_1_23))) + var_1_20);
  } else {
   if (last_1_var_1_8 < var_1_10) {
    var_1_46 = ((((((((var_1_20) > (last_1_var_1_24)) ? (var_1_20) : (last_1_var_1_24)))) > (var_1_21)) ? (((((var_1_20) > (last_1_var_1_24)) ? (var_1_20) : (last_1_var_1_24)))) : (var_1_21)));
   } else {
    var_1_46 = ((((var_1_39) > ((52246 - last_1_var_1_8))) ? (var_1_39) : ((52246 - last_1_var_1_8))));
   }
  }
 }
 signed long int stepLocal_17 = last_1_var_1_37;
 if (stepLocal_17 == (last_1_var_1_46 - (var_1_39 - var_1_23))) {
  var_1_38 = (var_1_19 && var_1_40);
 } else {
  var_1_38 = var_1_40;
 }
 if (var_1_38) {
  if (var_1_38) {
   if (var_1_38) {
    var_1_48 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
   } else {
    var_1_48 = ((var_1_20 + var_1_21) - (var_1_50 - (var_1_23 + var_1_51)));
   }
  } else {
   var_1_48 = (((var_1_52 - var_1_23) - (var_1_51 + var_1_53)) + var_1_21);
  }
 } else {
  if (last_1_var_1_48 > var_1_21) {
   var_1_48 = ((((((-10) < 0 ) ? -(-10) : (-10))) + var_1_53) - var_1_50);
  } else {
   var_1_48 = (var_1_21 + var_1_52);
  }
 }
 if (var_1_38 || var_1_38) {
  if (var_1_38) {
   var_1_37 = ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54)));
  }
 }
 if (var_1_27 <= var_1_5) {
  if (((((-0.5) < 0 ) ? -(-0.5) : (-0.5))) >= var_1_30) {
   var_1_31 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  } else {
   if ((var_1_30 - (var_1_29 + var_1_32)) == var_1_28) {
    var_1_31 = ((((((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) < (var_1_33)) ? (((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) : (var_1_33)));
   } else {
    if (var_1_38) {
     var_1_31 = (var_1_6 - var_1_32);
    } else {
     var_1_31 = ((((var_1_32) > (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))) ? (var_1_32) : (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))));
    }
   }
  }
 }
 if (var_1_6 < ((256.625f * var_1_7) * var_1_5)) {
  if (var_1_38 || var_1_38) {
   var_1_24 = ((-256 + var_1_22) + (var_1_20 - ((((var_1_23) > (var_1_54)) ? (var_1_23) : (var_1_54)))));
  } else {
   if (! var_1_38) {
    if (((var_1_6 / var_1_25) > var_1_5) || var_1_38) {
     var_1_24 = var_1_22;
    }
   }
  }
 }
 unsigned long int stepLocal_2 = var_1_54 / var_1_12;
 unsigned short int stepLocal_1 = var_1_46;
 if (var_1_5 >= var_1_6) {
  if (stepLocal_1 < var_1_54) {
   var_1_8 = (((((var_1_54 + ((((var_1_46) > (var_1_46)) ? (var_1_46) : (var_1_46))))) > ((var_1_46 + var_1_46))) ? ((var_1_54 + ((((var_1_46) > (var_1_46)) ? (var_1_46) : (var_1_46))))) : ((var_1_46 + var_1_46))));
  } else {
   var_1_8 = (var_1_46 + var_1_46);
  }
 } else {
  if (var_1_46 > stepLocal_2) {
   var_1_8 = var_1_46;
  } else {
   var_1_8 = (var_1_46 + ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))));
  }
 }
 unsigned long int stepLocal_11 = var_1_12;
 signed long int stepLocal_10 = 64;
 unsigned long int stepLocal_9 = var_1_24 / var_1_12;
 unsigned char stepLocal_8 = var_1_38;
 signed char stepLocal_7 = var_1_20;
 if (stepLocal_11 > var_1_46) {
  if (stepLocal_9 >= (16u | var_1_46)) {
   if (var_1_38 && stepLocal_8) {
    var_1_18 = ((var_1_20 - var_1_21) + (var_1_22 + (16 - var_1_23)));
   }
  } else {
   var_1_18 = (var_1_23 - var_1_20);
  }
 } else {
  if (var_1_38) {
   var_1_18 = ((((var_1_21) < ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5))))) ? (var_1_21) : ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5))))));
  } else {
   if (stepLocal_10 == ((((var_1_20) < (-10)) ? (var_1_20) : (-10)))) {
    var_1_18 = (var_1_22 + var_1_21);
   } else {
    if (! var_1_38) {
     if (var_1_24 < stepLocal_7) {
      var_1_18 = var_1_20;
     } else {
      var_1_18 = var_1_23;
     }
    }
   }
  }
 }
 unsigned short int stepLocal_6 = var_1_46;
 unsigned long int stepLocal_5 = ~ var_1_8;
 if (var_1_48 <= stepLocal_6) {
  var_1_16 = (((((3682661553u - var_1_48)) < (var_1_46)) ? ((3682661553u - var_1_48)) : (var_1_46)));
 } else {
  if (stepLocal_5 > ((((var_1_18) < ((var_1_46 - var_1_46))) ? (var_1_18) : ((var_1_46 - var_1_46))))) {
   var_1_16 = var_1_48;
  } else {
   var_1_16 = ((((var_1_18) < (var_1_46)) ? (var_1_18) : (var_1_46)));
  }
 }
 signed long int stepLocal_16 = (((var_1_24) < ((~ var_1_35))) ? (var_1_24) : ((~ var_1_35)));
 if (stepLocal_16 <= (var_1_21 / 128u)) {
  var_1_36 = ((((var_1_35) > (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_18)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_18))))) ? (var_1_35) : (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_18)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_18))))));
 }
 unsigned long int stepLocal_0 = var_1_16;
 if (stepLocal_0 <= var_1_16) {
  var_1_1 = (var_1_5 - var_1_6);
 } else {
  var_1_1 = (10.5f + var_1_7);
 }
 unsigned long int stepLocal_4 = 10u / var_1_12;
 unsigned long int stepLocal_3 = (((var_1_36) < (var_1_16)) ? (var_1_36) : (var_1_16));
 if (var_1_16 >= stepLocal_4) {
  if (var_1_46 < stepLocal_3) {
   var_1_13 = var_1_7;
  } else {
   var_1_13 = (var_1_7 + var_1_15);
  }
 } else {
  var_1_13 = (((((var_1_6 - var_1_5)) > (var_1_7)) ? ((var_1_6 - var_1_5)) : (var_1_7)));
 }
 unsigned short int stepLocal_14 = var_1_46;
 signed char stepLocal_13 = var_1_22;
 unsigned short int stepLocal_12 = var_1_46;
 if (var_1_12 <= stepLocal_14) {
  if (var_1_38) {
   if (stepLocal_13 < var_1_18) {
    var_1_26 = (var_1_7 + var_1_15);
   } else {
    var_1_26 = ((((var_1_15) < ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))) ? (var_1_15) : ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))));
   }
  } else {
   var_1_26 = ((((var_1_6) < (var_1_27)) ? (var_1_6) : (var_1_27)));
  }
 } else {
  if (var_1_24 < stepLocal_12) {
   var_1_26 = (var_1_5 - (var_1_29 + var_1_30));
  } else {
   var_1_26 = 49.2;
  }
 }
 signed char stepLocal_15 = var_1_21;
 if (stepLocal_15 > (((((var_1_16 + var_1_48)) > (var_1_22)) ? ((var_1_16 + var_1_48)) : (var_1_22)))) {
  var_1_34 = var_1_6;
 }
 if (var_1_33 < var_1_6) {
  if (var_1_40) {
   var_1_41 = (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))) - (var_1_36 + ((((var_1_20) < (var_1_54)) ? (var_1_20) : (var_1_54)))));
  } else {
   if (var_1_29 <= var_1_34) {
    var_1_41 = (var_1_23 + (var_1_54 - var_1_36));
   } else {
    if (var_1_30 <= var_1_34) {
     var_1_41 = var_1_36;
    } else {
     var_1_41 = (((((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) > ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_36))) ? ((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) : ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_36))));
    }
   }
  }
 }
 signed short int stepLocal_19 = var_1_41;
 unsigned long int stepLocal_18 = (var_1_46 / 50u) << var_1_18;
 if (var_1_38) {
  if ((var_1_46 * 8) < stepLocal_18) {
   var_1_42 = ((((((var_1_44 + var_1_45)) > (var_1_29)) ? ((var_1_44 + var_1_45)) : (var_1_29))) + var_1_15);
  }
 } else {
  if (var_1_22 < stepLocal_19) {
   var_1_42 = (var_1_28 + var_1_44);
  } else {
   var_1_42 = (var_1_29 + var_1_44);
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 4294967295);
 assume_abort_if_not(var_1_12 != 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -31);
 assume_abort_if_not(var_1_22 <= 32);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 31);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -461168.6018427382800e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427387900e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -128);
 assume_abort_if_not(var_1_35 <= 127);
 assume_abort_if_not(var_1_35 != 0);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 16383);
 assume_abort_if_not(var_1_39 <= 32767);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -230584.3009213691390e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691390e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -230584.3009213691390e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691390e+12F && var_1_45 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 63);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 31);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 31);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 31);
}
void updateLastVariables() {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_54 = var_1_54;
}
int property() {
 return (((((((((((((((((var_1_16 <= var_1_16) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : (var_1_1 == ((float) (10.5f + var_1_7)))) && ((var_1_5 >= var_1_6) ? ((var_1_46 < var_1_54) ? (var_1_8 == ((unsigned long int) (((((var_1_54 + ((((var_1_46) > (var_1_46)) ? (var_1_46) : (var_1_46))))) > ((var_1_46 + var_1_46))) ? ((var_1_54 + ((((var_1_46) > (var_1_46)) ? (var_1_46) : (var_1_46))))) : ((var_1_46 + var_1_46)))))) : (var_1_8 == ((unsigned long int) (var_1_46 + var_1_46)))) : ((var_1_46 > (var_1_54 / var_1_12)) ? (var_1_8 == ((unsigned long int) var_1_46)) : (var_1_8 == ((unsigned long int) (var_1_46 + ((((var_1_46) < 0 ) ? -(var_1_46) : (var_1_46))))))))) && ((var_1_16 >= (10u / var_1_12)) ? ((var_1_46 < ((((var_1_36) < (var_1_16)) ? (var_1_36) : (var_1_16)))) ? (var_1_13 == ((float) var_1_7)) : (var_1_13 == ((float) (var_1_7 + var_1_15)))) : (var_1_13 == ((float) (((((var_1_6 - var_1_5)) > (var_1_7)) ? ((var_1_6 - var_1_5)) : (var_1_7))))))) && ((var_1_48 <= var_1_46) ? (var_1_16 == ((unsigned long int) (((((3682661553u - var_1_48)) < (var_1_46)) ? ((3682661553u - var_1_48)) : (var_1_46))))) : (((~ var_1_8) > ((((var_1_18) < ((var_1_46 - var_1_46))) ? (var_1_18) : ((var_1_46 - var_1_46))))) ? (var_1_16 == ((unsigned long int) var_1_48)) : (var_1_16 == ((unsigned long int) ((((var_1_18) < (var_1_46)) ? (var_1_18) : (var_1_46)))))))) && ((var_1_12 > var_1_46) ? (((var_1_24 / var_1_12) >= (16u | var_1_46)) ? ((var_1_38 && var_1_38) ? (var_1_18 == ((signed char) ((var_1_20 - var_1_21) + (var_1_22 + (16 - var_1_23))))) : 1) : (var_1_18 == ((signed char) (var_1_23 - var_1_20)))) : (var_1_38 ? (var_1_18 == ((signed char) ((((var_1_21) < ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5))))) ? (var_1_21) : ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5)))))))) : ((64 == ((((var_1_20) < (-10)) ? (var_1_20) : (-10)))) ? (var_1_18 == ((signed char) (var_1_22 + var_1_21))) : ((! var_1_38) ? ((var_1_24 < var_1_20) ? (var_1_18 == ((signed char) var_1_20)) : (var_1_18 == ((signed char) var_1_23))) : 1))))) && ((var_1_6 < ((256.625f * var_1_7) * var_1_5)) ? ((var_1_38 || var_1_38) ? (var_1_24 == ((signed long int) ((-256 + var_1_22) + (var_1_20 - ((((var_1_23) > (var_1_54)) ? (var_1_23) : (var_1_54))))))) : ((! var_1_38) ? ((((var_1_6 / var_1_25) > var_1_5) || var_1_38) ? (var_1_24 == ((signed long int) var_1_22)) : 1) : 1)) : 1)) && ((var_1_12 <= var_1_46) ? (var_1_38 ? ((var_1_22 < var_1_18) ? (var_1_26 == ((double) (var_1_7 + var_1_15))) : (var_1_26 == ((double) ((((var_1_15) < ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))) ? (var_1_15) : ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))))))) : (var_1_26 == ((double) ((((var_1_6) < (var_1_27)) ? (var_1_6) : (var_1_27)))))) : ((var_1_24 < var_1_46) ? (var_1_26 == ((double) (var_1_5 - (var_1_29 + var_1_30)))) : (var_1_26 == ((double) 49.2))))) && ((var_1_27 <= var_1_5) ? ((((((-0.5) < 0 ) ? -(-0.5) : (-0.5))) >= var_1_30) ? (var_1_31 == ((double) ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) : (((var_1_30 - (var_1_29 + var_1_32)) == var_1_28) ? (var_1_31 == ((double) ((((((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) < (var_1_33)) ? (((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) : (var_1_33))))) : (var_1_38 ? (var_1_31 == ((double) (var_1_6 - var_1_32))) : (var_1_31 == ((double) ((((var_1_32) > (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))) ? (var_1_32) : (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))))))))) : 1)) && ((var_1_21 > (((((var_1_16 + var_1_48)) > (var_1_22)) ? ((var_1_16 + var_1_48)) : (var_1_22)))) ? (var_1_34 == ((float) var_1_6)) : 1)) && ((((((var_1_24) < ((~ var_1_35))) ? (var_1_24) : ((~ var_1_35)))) <= (var_1_21 / 128u)) ? (var_1_36 == ((signed long int) ((((var_1_35) > (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_18)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_18))))) ? (var_1_35) : (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_18)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_18)))))))) : 1)) && ((var_1_38 || var_1_38) ? (var_1_38 ? (var_1_37 == ((signed short int) ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))))) : 1) : 1)) && ((last_1_var_1_37 == (last_1_var_1_46 - (var_1_39 - var_1_23))) ? (var_1_38 == ((unsigned char) (var_1_19 && var_1_40))) : (var_1_38 == ((unsigned char) var_1_40)))) && ((var_1_33 < var_1_6) ? (var_1_40 ? (var_1_41 == ((signed short int) (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))) - (var_1_36 + ((((var_1_20) < (var_1_54)) ? (var_1_20) : (var_1_54))))))) : ((var_1_29 <= var_1_34) ? (var_1_41 == ((signed short int) (var_1_23 + (var_1_54 - var_1_36)))) : ((var_1_30 <= var_1_34) ? (var_1_41 == ((signed short int) var_1_36)) : (var_1_41 == ((signed short int) (((((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) > ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_36))) ? ((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) : ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - var_1_36))))))))) : 1)) && (var_1_38 ? (((var_1_46 * 8) < ((var_1_46 / 50u) << var_1_18)) ? (var_1_42 == ((float) ((((((var_1_44 + var_1_45)) > (var_1_29)) ? ((var_1_44 + var_1_45)) : (var_1_29))) + var_1_15))) : 1) : ((var_1_22 < var_1_41) ? (var_1_42 == ((float) (var_1_28 + var_1_44))) : (var_1_42 == ((float) (var_1_29 + var_1_44)))))) && ((last_1_var_1_48 < 4) ? ((((((last_1_var_1_36) > (last_1_var_1_54)) ? (last_1_var_1_36) : (last_1_var_1_54))) != var_1_10) ? (var_1_46 == ((unsigned short int) (((((last_1_var_1_8) > (var_1_23)) ? (last_1_var_1_8) : (var_1_23))) + var_1_20))) : ((last_1_var_1_8 < var_1_10) ? (var_1_46 == ((unsigned short int) ((((((((var_1_20) > (last_1_var_1_24)) ? (var_1_20) : (last_1_var_1_24)))) > (var_1_21)) ? (((((var_1_20) > (last_1_var_1_24)) ? (var_1_20) : (last_1_var_1_24)))) : (var_1_21))))) : (var_1_46 == ((unsigned short int) ((((var_1_39) > ((52246 - last_1_var_1_8))) ? (var_1_39) : ((52246 - last_1_var_1_8)))))))) : 1)) && (var_1_38 ? (var_1_38 ? (var_1_38 ? (var_1_48 == ((signed char) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : (var_1_48 == ((signed char) ((var_1_20 + var_1_21) - (var_1_50 - (var_1_23 + var_1_51)))))) : (var_1_48 == ((signed char) (((var_1_52 - var_1_23) - (var_1_51 + var_1_53)) + var_1_21)))) : ((last_1_var_1_48 > var_1_21) ? (var_1_48 == ((signed char) ((((((-10) < 0 ) ? -(-10) : (-10))) + var_1_53) - var_1_50))) : (var_1_48 == ((signed char) (var_1_21 + var_1_52)))))) && ((last_1_var_1_38 || last_1_var_1_38) ? (((var_1_12 | (var_1_53 * var_1_20)) > (var_1_23 * (- last_1_var_1_16))) ? (var_1_40 ? (var_1_54 == ((signed short int) var_1_53)) : (var_1_54 == ((signed short int) last_1_var_1_16))) : (var_1_54 == ((signed short int) var_1_51))) : 1)
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
