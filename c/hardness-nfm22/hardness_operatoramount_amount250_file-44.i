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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 256;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 256.75;
float var_1_15 = 256.25;
float var_1_16 = 8.95;
float var_1_17 = 256.375;
float var_1_18 = 0.0;
float var_1_19 = 3.75;
unsigned short int var_1_20 = 64;
unsigned short int var_1_21 = 0;
float var_1_22 = 100.5;
unsigned short int var_1_23 = 50;
unsigned short int var_1_24 = 64;
double var_1_25 = 32.6;
unsigned char var_1_26 = 1;
unsigned char var_1_28 = 0;
double var_1_29 = 100.4;
signed short int var_1_30 = 2;
signed short int var_1_31 = 16;
signed short int var_1_32 = 8;
signed short int var_1_33 = 2;
double var_1_34 = 0.0;
double var_1_35 = 63.8;
double var_1_36 = 127.75;
double var_1_37 = 0.4;
unsigned long int var_1_38 = 50;
unsigned long int var_1_39 = 3554953517;
unsigned long int var_1_41 = 1668301826;
float var_1_42 = 63.75;
unsigned char var_1_43 = 0;
signed short int var_1_46 = -2;
signed short int var_1_47 = 20527;
double var_1_48 = 7.5;
unsigned char var_1_49 = 0;
signed char var_1_50 = 32;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned long int var_1_53 = 256;
unsigned long int var_1_54 = 4278958049;
unsigned long int var_1_55 = 3317535625;
unsigned long int var_1_56 = 256;
signed char var_1_57 = 64;
unsigned short int var_1_58 = 100;
signed short int var_1_59 = 64;
signed long int var_1_60 = -100;
float last_1_var_1_13 = 256.75;
unsigned short int last_1_var_1_23 = 50;
double last_1_var_1_48 = 7.5;
unsigned char last_1_var_1_49 = 0;
unsigned char last_1_var_1_52 = 0;
unsigned long int last_1_var_1_53 = 256;
unsigned short int last_1_var_1_58 = 100;
signed long int last_1_var_1_60 = -100;
void initially(void) {
}
void step(void) {
 if ((var_1_19 - var_1_18) <= last_1_var_1_13) {
  var_1_60 = ((((((last_1_var_1_23 + var_1_32)) < (var_1_21)) ? ((last_1_var_1_23 + var_1_32)) : (var_1_21))) - 64);
 } else {
  var_1_60 = last_1_var_1_58;
 }
 if (last_1_var_1_49) {
  var_1_57 = var_1_32;
 }
 var_1_9 = ((((-10) < (var_1_57)) ? (-10) : (var_1_57)));
 unsigned char stepLocal_16 = last_1_var_1_49;
 if (last_1_var_1_52) {
  var_1_56 = ((((50u) > (var_1_41)) ? (50u) : (var_1_41)));
 } else {
  if (var_1_4 || stepLocal_16) {
   if ((last_1_var_1_48 / var_1_18) <= (- var_1_37)) {
    var_1_56 = (var_1_55 - 100u);
   } else {
    var_1_56 = var_1_39;
   }
  }
 }
 if (last_1_var_1_60 >= last_1_var_1_23) {
  var_1_1 = (! var_1_4);
 }
 if (var_1_1) {
  var_1_58 = var_1_24;
 } else {
  var_1_58 = var_1_47;
 }
 var_1_11 = ((var_1_8 || var_1_4) && var_1_12);
 var_1_20 = (45013 - var_1_21);
 var_1_22 = ((((((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) > (var_1_17)) ? (((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) : (var_1_17)));
 if ((9999999.6 / var_1_18) > var_1_16) {
  var_1_23 = ((((var_1_21 + var_1_24) < 0 ) ? -(var_1_21 + var_1_24) : (var_1_21 + var_1_24)));
 }
 var_1_25 = (((((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) > (var_1_16)) ? ((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) : (var_1_16)));
 if (! var_1_8) {
  if (4 < var_1_57) {
   var_1_42 = var_1_19;
  } else {
   var_1_42 = (((16.24f - var_1_35) + var_1_36) + var_1_37);
  }
 } else {
  if (var_1_23 != 64) {
   var_1_42 = ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19)));
  } else {
   var_1_42 = (255.84f - var_1_35);
  }
 }
 if (var_1_12) {
  var_1_59 = var_1_32;
 } else {
  var_1_59 = var_1_58;
 }
 if (last_1_var_1_53 <= ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) {
  if ((2 - var_1_33) != (~ (var_1_31 / var_1_47))) {
   var_1_53 = ((((var_1_47) < ((((((var_1_20 + var_1_41)) < (var_1_58)) ? ((var_1_20 + var_1_41)) : (var_1_58))))) ? (var_1_47) : ((((((var_1_20 + var_1_41)) < (var_1_58)) ? ((var_1_20 + var_1_41)) : (var_1_58))))));
  } else {
   if (var_1_8 || var_1_1) {
    var_1_53 = (((var_1_54 - var_1_32) - ((((last_1_var_1_53) < (var_1_31)) ? (last_1_var_1_53) : (var_1_31)))) - var_1_20);
   } else {
    var_1_53 = ((var_1_55 - var_1_47) - ((((var_1_58) < (var_1_20)) ? (var_1_58) : (var_1_20))));
   }
  }
 } else {
  var_1_53 = (var_1_39 - 8u);
 }
 signed long int stepLocal_13 = -5;
 if (((((var_1_17) < (var_1_34)) ? (var_1_17) : (var_1_34))) < var_1_19) {
  if (var_1_53 < stepLocal_13) {
   if (var_1_1) {
    if (var_1_12) {
     var_1_46 = ((var_1_47 - var_1_32) - var_1_30);
    } else {
     var_1_46 = var_1_31;
    }
   } else {
    var_1_46 = ((var_1_47 - var_1_31) - var_1_30);
   }
  } else {
   if (var_1_35 == (var_1_25 + ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17))))) {
    var_1_46 = ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < (var_1_47)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_47)));
   }
  }
 }
 unsigned long int stepLocal_2 = var_1_20 - var_1_53;
 if ((var_1_24 * var_1_60) > stepLocal_2) {
  var_1_26 = (! ((var_1_4 && var_1_12) && var_1_28));
 }
 signed long int stepLocal_5 = var_1_21 >> (var_1_32 + var_1_33);
 unsigned short int stepLocal_4 = var_1_20;
 signed long int stepLocal_3 = (var_1_30 + var_1_31) - var_1_21;
 if (var_1_12) {
  if (stepLocal_4 <= (var_1_53 >> var_1_56)) {
   if (stepLocal_3 >= 128) {
    if ((var_1_24 - var_1_20) <= stepLocal_5) {
     var_1_29 = (-0.4 + var_1_19);
    } else {
     var_1_29 = ((((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37));
    }
   }
  }
 }
 signed long int stepLocal_10 = ~ var_1_30;
 unsigned long int stepLocal_9 = var_1_56 ^ var_1_32;
 signed long int stepLocal_8 = var_1_31 - var_1_30;
 signed long int stepLocal_7 = -1;
 unsigned short int stepLocal_6 = var_1_58;
 if (var_1_17 >= (- var_1_34)) {
  if (var_1_23 <= stepLocal_7) {
   if (stepLocal_10 > (var_1_31 & (var_1_23 * var_1_58))) {
    var_1_38 = var_1_24;
   }
  } else {
   var_1_38 = ((var_1_39 - (var_1_56 + 500u)) - 4u);
  }
 } else {
  if (var_1_53 <= stepLocal_9) {
   if (var_1_15 <= var_1_29) {
    if ((var_1_24 * var_1_56) <= stepLocal_8) {
     var_1_38 = var_1_31;
    } else {
     var_1_38 = 200u;
    }
   } else {
    if (((var_1_39 - var_1_33) >> var_1_57) > stepLocal_6) {
     if (var_1_4) {
      var_1_38 = ((((((var_1_41) > (1726043421u)) ? (var_1_41) : (1726043421u))) - var_1_21) + (var_1_30 + 8u));
     }
    } else {
     var_1_38 = var_1_21;
    }
   }
  }
 }
 if (var_1_20 == var_1_58) {
  if (var_1_57 == var_1_58) {
   var_1_48 = ((((var_1_36) < (var_1_19)) ? (var_1_36) : (var_1_19)));
  } else {
   if (var_1_38 <= (var_1_60 ^ (var_1_58 * var_1_41))) {
    var_1_48 = (var_1_36 + var_1_19);
   }
  }
 }
 unsigned short int stepLocal_0 = var_1_23;
 if (stepLocal_0 <= (var_1_20 - var_1_58)) {
  var_1_5 = (var_1_26 || var_1_4);
 } else {
  var_1_5 = (! (! var_1_8));
 }
 signed long int stepLocal_12 = (16 + var_1_9) - var_1_24;
 unsigned short int stepLocal_11 = var_1_21;
 if (var_1_20 <= stepLocal_12) {
  var_1_43 = (! 1);
 } else {
  if (var_1_38 < stepLocal_11) {
   var_1_43 = (var_1_28 && var_1_12);
  } else {
   if ((var_1_22 * var_1_36) < (((((var_1_37 + var_1_35)) > (31.5)) ? ((var_1_37 + var_1_35)) : (31.5)))) {
    var_1_43 = (var_1_4 && (! var_1_28));
   }
  }
 }
 if (var_1_25 >= ((- var_1_19) / var_1_18)) {
  var_1_52 = var_1_12;
 } else {
  var_1_52 = (var_1_5 || var_1_12);
 }
 signed short int stepLocal_1 = var_1_46;
 if (var_1_26) {
  if (var_1_20 > stepLocal_1) {
   var_1_13 = ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)));
  }
 } else {
  var_1_13 = ((((var_1_17 - (var_1_18 - var_1_19)) < 0 ) ? -(var_1_17 - (var_1_18 - var_1_19)) : (var_1_17 - (var_1_18 - var_1_19))));
 }
 signed long int stepLocal_15 = (((var_1_9) > (var_1_31)) ? (var_1_9) : (var_1_31));
 signed long int stepLocal_14 = ((((var_1_46) < (var_1_58)) ? (var_1_46) : (var_1_58))) / var_1_50;
 if (stepLocal_14 > (var_1_33 << var_1_9)) {
  var_1_49 = ((var_1_12 && var_1_28) && (var_1_4 && (var_1_52 || var_1_51)));
 } else {
  if (var_1_57 > stepLocal_15) {
   var_1_49 = var_1_28;
  } else {
   var_1_49 = (! var_1_4);
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 16384);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 9);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 8);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 4611686.018427382800e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 3221225470);
 assume_abort_if_not(var_1_39 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741823);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_47 >= 16382);
 assume_abort_if_not(var_1_47 <= 32766);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -128);
 assume_abort_if_not(var_1_50 <= 127);
 assume_abort_if_not(var_1_50 != 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_54 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_54 >= 3758096382);
 assume_abort_if_not(var_1_54 <= 4294967294);
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 3221225470);
 assume_abort_if_not(var_1_55 <= 4294967294);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_60 = var_1_60;
}
int property() {
 return ((((((((((((((((((((((((last_1_var_1_60 >= last_1_var_1_23) ? (var_1_1 == ((unsigned char) (! var_1_4))) : 1) && ((var_1_23 <= (var_1_20 - var_1_58)) ? (var_1_5 == ((unsigned char) (var_1_26 || var_1_4))) : (var_1_5 == ((unsigned char) (! (! var_1_8)))))) && (var_1_9 == ((signed short int) ((((-10) < (var_1_57)) ? (-10) : (var_1_57)))))) && (var_1_11 == ((unsigned char) ((var_1_8 || var_1_4) && var_1_12)))) && (var_1_26 ? ((var_1_20 > var_1_46) ? (var_1_13 == ((float) ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))))) : 1) : (var_1_13 == ((float) ((((var_1_17 - (var_1_18 - var_1_19)) < 0 ) ? -(var_1_17 - (var_1_18 - var_1_19)) : (var_1_17 - (var_1_18 - var_1_19)))))))) && (var_1_20 == ((unsigned short int) (45013 - var_1_21)))) && (var_1_22 == ((float) ((((((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) > (var_1_17)) ? (((((((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) > (var_1_19)) ? (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))) : (var_1_19)))) : (var_1_17)))))) && (((9999999.6 / var_1_18) > var_1_16) ? (var_1_23 == ((unsigned short int) ((((var_1_21 + var_1_24) < 0 ) ? -(var_1_21 + var_1_24) : (var_1_21 + var_1_24))))) : 1)) && (var_1_25 == ((double) (((((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) > (var_1_16)) ? ((((((var_1_19) > (999.5)) ? (var_1_19) : (999.5))) - var_1_17)) : (var_1_16)))))) && (((var_1_24 * var_1_60) > (var_1_20 - var_1_53)) ? (var_1_26 == ((unsigned char) (! ((var_1_4 && var_1_12) && var_1_28)))) : 1)) && (var_1_12 ? ((var_1_20 <= (var_1_53 >> var_1_56)) ? ((((var_1_30 + var_1_31) - var_1_21) >= 128) ? (((var_1_24 - var_1_20) <= (var_1_21 >> (var_1_32 + var_1_33))) ? (var_1_29 == ((double) (-0.4 + var_1_19))) : (var_1_29 == ((double) ((((((var_1_18) < (var_1_34)) ? (var_1_18) : (var_1_34))) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37))))) : 1) : 1) : 1)) && ((var_1_17 >= (- var_1_34)) ? ((var_1_23 <= -1) ? (((~ var_1_30) > (var_1_31 & (var_1_23 * var_1_58))) ? (var_1_38 == ((unsigned long int) var_1_24)) : 1) : (var_1_38 == ((unsigned long int) ((var_1_39 - (var_1_56 + 500u)) - 4u)))) : ((var_1_53 <= (var_1_56 ^ var_1_32)) ? ((var_1_15 <= var_1_29) ? (((var_1_24 * var_1_56) <= (var_1_31 - var_1_30)) ? (var_1_38 == ((unsigned long int) var_1_31)) : (var_1_38 == ((unsigned long int) 200u))) : ((((var_1_39 - var_1_33) >> var_1_57) > var_1_58) ? (var_1_4 ? (var_1_38 == ((unsigned long int) ((((((var_1_41) > (1726043421u)) ? (var_1_41) : (1726043421u))) - var_1_21) + (var_1_30 + 8u)))) : 1) : (var_1_38 == ((unsigned long int) var_1_21)))) : 1))) && ((! var_1_8) ? ((4 < var_1_57) ? (var_1_42 == ((float) var_1_19)) : (var_1_42 == ((float) (((16.24f - var_1_35) + var_1_36) + var_1_37)))) : ((var_1_23 != 64) ? (var_1_42 == ((float) ((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))))) : (var_1_42 == ((float) (255.84f - var_1_35)))))) && ((var_1_20 <= ((16 + var_1_9) - var_1_24)) ? (var_1_43 == ((unsigned char) (! 1))) : ((var_1_38 < var_1_21) ? (var_1_43 == ((unsigned char) (var_1_28 && var_1_12))) : (((var_1_22 * var_1_36) < (((((var_1_37 + var_1_35)) > (31.5)) ? ((var_1_37 + var_1_35)) : (31.5)))) ? (var_1_43 == ((unsigned char) (var_1_4 && (! var_1_28)))) : 1)))) && ((((((var_1_17) < (var_1_34)) ? (var_1_17) : (var_1_34))) < var_1_19) ? ((var_1_53 < -5) ? (var_1_1 ? (var_1_12 ? (var_1_46 == ((signed short int) ((var_1_47 - var_1_32) - var_1_30))) : (var_1_46 == ((signed short int) var_1_31))) : (var_1_46 == ((signed short int) ((var_1_47 - var_1_31) - var_1_30)))) : ((var_1_35 == (var_1_25 + ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17))))) ? (var_1_46 == ((signed short int) ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < (var_1_47)) ? (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (var_1_47))))) : 1)) : 1)) && ((var_1_20 == var_1_58) ? ((var_1_57 == var_1_58) ? (var_1_48 == ((double) ((((var_1_36) < (var_1_19)) ? (var_1_36) : (var_1_19))))) : ((var_1_38 <= (var_1_60 ^ (var_1_58 * var_1_41))) ? (var_1_48 == ((double) (var_1_36 + var_1_19))) : 1)) : 1)) && (((((((var_1_46) < (var_1_58)) ? (var_1_46) : (var_1_58))) / var_1_50) > (var_1_33 << var_1_9)) ? (var_1_49 == ((unsigned char) ((var_1_12 && var_1_28) && (var_1_4 && (var_1_52 || var_1_51))))) : ((var_1_57 > ((((var_1_9) > (var_1_31)) ? (var_1_9) : (var_1_31)))) ? (var_1_49 == ((unsigned char) var_1_28)) : (var_1_49 == ((unsigned char) (! var_1_4)))))) && ((var_1_25 >= ((- var_1_19) / var_1_18)) ? (var_1_52 == ((unsigned char) var_1_12)) : (var_1_52 == ((unsigned char) (var_1_5 || var_1_12))))) && ((last_1_var_1_53 <= ((((var_1_58) < 0 ) ? -(var_1_58) : (var_1_58)))) ? (((2 - var_1_33) != (~ (var_1_31 / var_1_47))) ? (var_1_53 == ((unsigned long int) ((((var_1_47) < ((((((var_1_20 + var_1_41)) < (var_1_58)) ? ((var_1_20 + var_1_41)) : (var_1_58))))) ? (var_1_47) : ((((((var_1_20 + var_1_41)) < (var_1_58)) ? ((var_1_20 + var_1_41)) : (var_1_58)))))))) : ((var_1_8 || var_1_1) ? (var_1_53 == ((unsigned long int) (((var_1_54 - var_1_32) - ((((last_1_var_1_53) < (var_1_31)) ? (last_1_var_1_53) : (var_1_31)))) - var_1_20))) : (var_1_53 == ((unsigned long int) ((var_1_55 - var_1_47) - ((((var_1_58) < (var_1_20)) ? (var_1_58) : (var_1_20)))))))) : (var_1_53 == ((unsigned long int) (var_1_39 - 8u))))) && (last_1_var_1_52 ? (var_1_56 == ((unsigned long int) ((((50u) > (var_1_41)) ? (50u) : (var_1_41))))) : ((var_1_4 || last_1_var_1_49) ? (((last_1_var_1_48 / var_1_18) <= (- var_1_37)) ? (var_1_56 == ((unsigned long int) (var_1_55 - 100u))) : (var_1_56 == ((unsigned long int) var_1_39))) : 1))) && (last_1_var_1_49 ? (var_1_57 == ((signed char) var_1_32)) : 1)) && (var_1_1 ? (var_1_58 == ((unsigned short int) var_1_24)) : (var_1_58 == ((unsigned short int) var_1_47)))) && (var_1_12 ? (var_1_59 == ((signed short int) var_1_32)) : (var_1_59 == ((signed short int) var_1_58)))) && (((var_1_19 - var_1_18) <= last_1_var_1_13) ? (var_1_60 == ((signed long int) ((((((last_1_var_1_23 + var_1_32)) < (var_1_21)) ? ((last_1_var_1_23 + var_1_32)) : (var_1_21))) - 64))) : (var_1_60 == ((signed long int) last_1_var_1_58)))
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
