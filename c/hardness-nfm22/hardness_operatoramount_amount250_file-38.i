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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 200;
unsigned short int var_1_5 = 42139;
unsigned short int var_1_7 = 1;
double var_1_9 = 0.1;
signed long int var_1_11 = -64;
float var_1_13 = 10.4;
float var_1_16 = 256.5;
float var_1_17 = 128.75;
float var_1_18 = 50.2;
signed char var_1_19 = 1;
float var_1_20 = 32.5;
signed char var_1_21 = 64;
signed short int var_1_22 = 10;
signed long int var_1_27 = -8;
unsigned short int var_1_28 = 0;
unsigned short int var_1_29 = 4;
signed long int var_1_32 = -128;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
signed char var_1_35 = 16;
signed char var_1_36 = -1;
signed char var_1_37 = 100;
signed char var_1_38 = 64;
signed char var_1_39 = 100;
signed char var_1_40 = 0;
signed char var_1_41 = 10;
signed char var_1_42 = 0;
unsigned char var_1_43 = 1;
signed char var_1_44 = -100;
unsigned char var_1_45 = 2;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 64;
unsigned char var_1_48 = 0;
float var_1_49 = 10000000.7;
unsigned char var_1_50 = 0;
unsigned short int var_1_51 = 128;
unsigned char var_1_52 = 4;
unsigned char var_1_53 = 200;
unsigned char var_1_54 = 64;
unsigned short int var_1_55 = 32;
unsigned short int var_1_56 = 58246;
unsigned long int var_1_57 = 64;
signed short int var_1_58 = -8;
double var_1_59 = 15.95;
float var_1_60 = 16.75;
signed short int var_1_61 = -64;
float last_1_var_1_13 = 10.4;
signed long int last_1_var_1_27 = -8;
unsigned short int last_1_var_1_28 = 0;
unsigned char last_1_var_1_45 = 2;
unsigned char last_1_var_1_52 = 4;
unsigned long int last_1_var_1_57 = 64;
float last_1_var_1_60 = 16.75;
signed short int last_1_var_1_61 = -64;
void initially(void) {
}
void step(void) {
 var_1_27 = (((((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57))) + last_1_var_1_45);
 signed long int stepLocal_8 = (-128 * last_1_var_1_61) / var_1_39;
 unsigned char stepLocal_7 = last_1_var_1_27 < var_1_46;
 if (stepLocal_7 && (last_1_var_1_45 > last_1_var_1_28)) {
  if (last_1_var_1_13 > last_1_var_1_60) {
   if ((last_1_var_1_52 <= (last_1_var_1_45 / var_1_47)) || (100u >= last_1_var_1_52)) {
    if (last_1_var_1_52 != stepLocal_8) {
     var_1_52 = ((((((((var_1_47) < ((var_1_53 - 25))) ? (var_1_47) : ((var_1_53 - 25))))) > (var_1_21)) ? (((((var_1_47) < ((var_1_53 - 25))) ? (var_1_47) : ((var_1_53 - 25))))) : (var_1_21)));
    } else {
     var_1_52 = ((((var_1_39) < ((var_1_46 + 50))) ? (var_1_39) : ((var_1_46 + 50))));
    }
   } else {
    var_1_52 = var_1_42;
   }
  } else {
   var_1_52 = ((var_1_54 - var_1_40) + ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) > (var_1_42)) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : (var_1_42))));
  }
 } else {
  var_1_52 = (var_1_21 + ((((var_1_46) > (((((var_1_54) < (4)) ? (var_1_54) : (4))))) ? (var_1_46) : (((((var_1_54) < (4)) ? (var_1_54) : (4)))))));
 }
 var_1_33 = var_1_34;
 var_1_35 = (var_1_36 + 50);
 var_1_45 = ((var_1_46 - var_1_40) + (var_1_47 - var_1_42));
 if (var_1_16 >= (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_49)) {
  var_1_48 = (! (! var_1_34));
 } else {
  var_1_48 = ((! var_1_34) || (! var_1_50));
 }
 if (! var_1_50) {
  var_1_51 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
 }
 if (var_1_48) {
  var_1_59 = var_1_17;
 } else {
  var_1_59 = ((((((((24.8) < (var_1_17)) ? (24.8) : (var_1_17))) - 128.25) < 0 ) ? -(((((24.8) < (var_1_17)) ? (24.8) : (var_1_17))) - 128.25) : (((((24.8) < (var_1_17)) ? (24.8) : (var_1_17))) - 128.25)));
 }
 unsigned char stepLocal_2 = var_1_52;
 if (var_1_27 <= stepLocal_2) {
  var_1_13 = var_1_16;
 } else {
  var_1_13 = ((((var_1_16) < ((var_1_17 - (7.3956616659376937E18f - var_1_18)))) ? (var_1_16) : ((var_1_17 - (7.3956616659376937E18f - var_1_18)))));
 }
 signed char stepLocal_9 = var_1_21;
 if (var_1_48) {
  var_1_55 = ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52)));
 } else {
  if (stepLocal_9 >= var_1_41) {
   var_1_55 = (((((var_1_5) < ((var_1_56 - var_1_39))) ? (var_1_5) : ((var_1_56 - var_1_39)))) - ((((((((var_1_27) < (var_1_40)) ? (var_1_27) : (var_1_40)))) < (var_1_47)) ? (((((var_1_27) < (var_1_40)) ? (var_1_27) : (var_1_40)))) : (var_1_47))));
  } else {
   var_1_55 = (var_1_45 + var_1_53);
  }
 }
 if (var_1_48) {
  var_1_32 = (var_1_52 - var_1_45);
 }
 if (var_1_33) {
  var_1_1 = (((((var_1_52 + var_1_52)) < ((var_1_5 - ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) ? ((var_1_52 + var_1_52)) : ((var_1_5 - ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))));
 } else {
  var_1_1 = (((((var_1_5 - var_1_45)) < ((var_1_52 + (256 + 1)))) ? ((var_1_5 - var_1_45)) : ((var_1_52 + (256 + 1)))));
 }
 signed long int stepLocal_6 = ~ (var_1_52 >> var_1_32);
 if (stepLocal_6 >= var_1_45) {
  if (var_1_13 <= var_1_16) {
   var_1_37 = (((((var_1_21 - var_1_38)) < (((var_1_39 - var_1_40) - (var_1_41 + var_1_42)))) ? ((var_1_21 - var_1_38)) : (((var_1_39 - var_1_40) - (var_1_41 + var_1_42)))));
  }
 }
 if (var_1_59 < var_1_9) {
  var_1_43 = (var_1_33 || (! 0));
 }
 unsigned char stepLocal_4 = var_1_52;
 if (var_1_48) {
  if ((var_1_52 * var_1_32) <= stepLocal_4) {
   var_1_28 = var_1_45;
  } else {
   var_1_28 = (var_1_45 + var_1_45);
  }
 }
 unsigned char stepLocal_5 = var_1_43;
 if (var_1_59 > (64.8f * ((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17))))) {
  if (! (var_1_43 || var_1_43)) {
   var_1_29 = (((((var_1_45 + 1)) < (((((var_1_52) < (var_1_45)) ? (var_1_52) : (var_1_45))))) ? ((var_1_45 + 1)) : (((((var_1_52) < (var_1_45)) ? (var_1_52) : (var_1_45))))));
  }
 } else {
  if (var_1_43) {
   var_1_29 = (var_1_52 + var_1_21);
  } else {
   if (stepLocal_5 && var_1_33) {
    if (var_1_43) {
     var_1_29 = var_1_5;
    } else {
     var_1_29 = var_1_52;
    }
   } else {
    var_1_29 = var_1_52;
   }
  }
 }
 unsigned char stepLocal_3 = var_1_13 > var_1_16;
 if ((((((var_1_59 * var_1_17)) < (var_1_9)) ? ((var_1_59 * var_1_17)) : (var_1_9))) <= ((8.7 / var_1_20) * var_1_13)) {
  if (stepLocal_3 && (var_1_21 >= ((((var_1_1) < (var_1_28)) ? (var_1_1) : (var_1_28))))) {
   var_1_22 = (((((((((var_1_21) < (var_1_51)) ? (var_1_21) : (var_1_51))) + var_1_45)) < ((var_1_52 - (64 + var_1_45)))) ? ((((((var_1_21) < (var_1_51)) ? (var_1_21) : (var_1_51))) + var_1_45)) : ((var_1_52 - (64 + var_1_45)))));
  } else {
   var_1_22 = ((var_1_45 + var_1_21) - var_1_52);
  }
 } else {
  var_1_22 = (var_1_52 - var_1_21);
 }
 if ((var_1_22 * var_1_5) <= var_1_45) {
  var_1_11 = (var_1_22 - var_1_28);
 } else {
  if (var_1_52 >= var_1_52) {
   var_1_11 = (((((var_1_5 - var_1_28)) < (var_1_22)) ? ((var_1_5 - var_1_28)) : (var_1_22)));
  }
 }
 var_1_57 = ((((var_1_11) < (((((var_1_42) > (var_1_55)) ? (var_1_42) : (var_1_55))))) ? (var_1_11) : (((((var_1_42) > (var_1_55)) ? (var_1_42) : (var_1_55))))));
 if (var_1_37 > (var_1_27 * var_1_22)) {
  if (var_1_21 >= (var_1_41 - (var_1_42 + 32))) {
   var_1_58 = ((((var_1_46) > ((((((var_1_55 - 2)) > ((var_1_40 + var_1_45))) ? ((var_1_55 - 2)) : ((var_1_40 + var_1_45)))))) ? (var_1_46) : ((((((var_1_55 - 2)) > ((var_1_40 + var_1_45))) ? ((var_1_55 - 2)) : ((var_1_40 + var_1_45)))))));
  } else {
   var_1_58 = ((((-64) > (var_1_21)) ? (-64) : (var_1_21)));
  }
 }
 signed long int stepLocal_12 = var_1_45 + var_1_45;
 if (! var_1_48) {
  if (stepLocal_12 <= 5) {
   var_1_61 = ((((var_1_58) < (var_1_56)) ? (var_1_58) : (var_1_56)));
  }
 }
 unsigned char stepLocal_11 = (var_1_52 / var_1_53) <= var_1_5;
 unsigned char stepLocal_10 = var_1_45;
 if ((var_1_42 == var_1_61) || stepLocal_11) {
  if (stepLocal_10 != var_1_45) {
   var_1_60 = ((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17)));
  } else {
   if (var_1_48) {
    var_1_60 = var_1_18;
   } else {
    var_1_60 = var_1_16;
   }
  }
 } else {
  var_1_60 = var_1_17;
 }
 unsigned char stepLocal_1 = var_1_45;
 unsigned long int stepLocal_0 = var_1_45 + var_1_57;
 if ((var_1_60 / var_1_9) != var_1_59) {
  if (var_1_9 >= var_1_59) {
   var_1_7 = var_1_45;
  } else {
   if (var_1_5 <= stepLocal_1) {
    if (var_1_52 < stepLocal_0) {
     var_1_7 = var_1_45;
    } else {
     var_1_7 = var_1_5;
    }
   } else {
    var_1_7 = var_1_45;
   }
  }
 } else {
  var_1_7 = var_1_45;
 }
 if (var_1_60 > (var_1_9 / var_1_20)) {
  if (! var_1_33) {
   if (var_1_43) {
    var_1_19 = (5 - var_1_21);
   } else {
    var_1_19 = (var_1_21 - 16);
   }
  }
 }
 if (var_1_39 <= var_1_11) {
  if (! var_1_43) {
   if ((var_1_41 * ((((var_1_45) > (var_1_7)) ? (var_1_45) : (var_1_7)))) < var_1_45) {
    var_1_44 = ((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) + ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41)))) - var_1_38);
   }
  } else {
   var_1_44 = (var_1_40 + var_1_41);
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 assume_abort_if_not(var_1_20 != 0.0F);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 62);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 63);
 assume_abort_if_not(var_1_46 <= 127);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 63);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 127);
 assume_abort_if_not(var_1_53 <= 254);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 63);
 assume_abort_if_not(var_1_54 <= 127);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 49150);
 assume_abort_if_not(var_1_56 <= 65534);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_61 = var_1_61;
}
int property() {
 return ((((((((((((((((((((((((var_1_33 ? (var_1_1 == ((unsigned short int) (((((var_1_52 + var_1_52)) < ((var_1_5 - ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))) ? ((var_1_52 + var_1_52)) : ((var_1_5 - ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))))))) : (var_1_1 == ((unsigned short int) (((((var_1_5 - var_1_45)) < ((var_1_52 + (256 + 1)))) ? ((var_1_5 - var_1_45)) : ((var_1_52 + (256 + 1)))))))) && (((var_1_60 / var_1_9) != var_1_59) ? ((var_1_9 >= var_1_59) ? (var_1_7 == ((unsigned short int) var_1_45)) : ((var_1_5 <= var_1_45) ? ((var_1_52 < (var_1_45 + var_1_57)) ? (var_1_7 == ((unsigned short int) var_1_45)) : (var_1_7 == ((unsigned short int) var_1_5))) : (var_1_7 == ((unsigned short int) var_1_45)))) : (var_1_7 == ((unsigned short int) var_1_45)))) && (((var_1_22 * var_1_5) <= var_1_45) ? (var_1_11 == ((signed long int) (var_1_22 - var_1_28))) : ((var_1_52 >= var_1_52) ? (var_1_11 == ((signed long int) (((((var_1_5 - var_1_28)) < (var_1_22)) ? ((var_1_5 - var_1_28)) : (var_1_22))))) : 1))) && ((var_1_27 <= var_1_52) ? (var_1_13 == ((float) var_1_16)) : (var_1_13 == ((float) ((((var_1_16) < ((var_1_17 - (7.3956616659376937E18f - var_1_18)))) ? (var_1_16) : ((var_1_17 - (7.3956616659376937E18f - var_1_18))))))))) && ((var_1_60 > (var_1_9 / var_1_20)) ? ((! var_1_33) ? (var_1_43 ? (var_1_19 == ((signed char) (5 - var_1_21))) : (var_1_19 == ((signed char) (var_1_21 - 16)))) : 1) : 1)) && (((((((var_1_59 * var_1_17)) < (var_1_9)) ? ((var_1_59 * var_1_17)) : (var_1_9))) <= ((8.7 / var_1_20) * var_1_13)) ? (((var_1_13 > var_1_16) && (var_1_21 >= ((((var_1_1) < (var_1_28)) ? (var_1_1) : (var_1_28))))) ? (var_1_22 == ((signed short int) (((((((((var_1_21) < (var_1_51)) ? (var_1_21) : (var_1_51))) + var_1_45)) < ((var_1_52 - (64 + var_1_45)))) ? ((((((var_1_21) < (var_1_51)) ? (var_1_21) : (var_1_51))) + var_1_45)) : ((var_1_52 - (64 + var_1_45))))))) : (var_1_22 == ((signed short int) ((var_1_45 + var_1_21) - var_1_52)))) : (var_1_22 == ((signed short int) (var_1_52 - var_1_21))))) && (var_1_27 == ((signed long int) (((((last_1_var_1_57) < 0 ) ? -(last_1_var_1_57) : (last_1_var_1_57))) + last_1_var_1_45)))) && (var_1_48 ? (((var_1_52 * var_1_32) <= var_1_52) ? (var_1_28 == ((unsigned short int) var_1_45)) : (var_1_28 == ((unsigned short int) (var_1_45 + var_1_45)))) : 1)) && ((var_1_59 > (64.8f * ((((var_1_20) > (var_1_17)) ? (var_1_20) : (var_1_17))))) ? ((! (var_1_43 || var_1_43)) ? (var_1_29 == ((unsigned short int) (((((var_1_45 + 1)) < (((((var_1_52) < (var_1_45)) ? (var_1_52) : (var_1_45))))) ? ((var_1_45 + 1)) : (((((var_1_52) < (var_1_45)) ? (var_1_52) : (var_1_45)))))))) : 1) : (var_1_43 ? (var_1_29 == ((unsigned short int) (var_1_52 + var_1_21))) : ((var_1_43 && var_1_33) ? (var_1_43 ? (var_1_29 == ((unsigned short int) var_1_5)) : (var_1_29 == ((unsigned short int) var_1_52))) : (var_1_29 == ((unsigned short int) var_1_52)))))) && (var_1_48 ? (var_1_32 == ((signed long int) (var_1_52 - var_1_45))) : 1)) && (var_1_33 == ((unsigned char) var_1_34))) && (var_1_35 == ((signed char) (var_1_36 + 50)))) && (((~ (var_1_52 >> var_1_32)) >= var_1_45) ? ((var_1_13 <= var_1_16) ? (var_1_37 == ((signed char) (((((var_1_21 - var_1_38)) < (((var_1_39 - var_1_40) - (var_1_41 + var_1_42)))) ? ((var_1_21 - var_1_38)) : (((var_1_39 - var_1_40) - (var_1_41 + var_1_42))))))) : 1) : 1)) && ((var_1_59 < var_1_9) ? (var_1_43 == ((unsigned char) (var_1_33 || (! 0)))) : 1)) && ((var_1_39 <= var_1_11) ? ((! var_1_43) ? (((var_1_41 * ((((var_1_45) > (var_1_7)) ? (var_1_45) : (var_1_7)))) < var_1_45) ? (var_1_44 == ((signed char) ((((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) + ((((var_1_40) < (var_1_41)) ? (var_1_40) : (var_1_41)))) - var_1_38))) : 1) : (var_1_44 == ((signed char) (var_1_40 + var_1_41)))) : 1)) && (var_1_45 == ((unsigned char) ((var_1_46 - var_1_40) + (var_1_47 - var_1_42))))) && ((var_1_16 >= (((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))) - var_1_49)) ? (var_1_48 == ((unsigned char) (! (! var_1_34)))) : (var_1_48 == ((unsigned char) ((! var_1_34) || (! var_1_50)))))) && ((! var_1_50) ? (var_1_51 == ((unsigned short int) ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))))) : 1)) && (((last_1_var_1_27 < var_1_46) && (last_1_var_1_45 > last_1_var_1_28)) ? ((last_1_var_1_13 > last_1_var_1_60) ? (((last_1_var_1_52 <= (last_1_var_1_45 / var_1_47)) || (100u >= last_1_var_1_52)) ? ((last_1_var_1_52 != ((-128 * last_1_var_1_61) / var_1_39)) ? (var_1_52 == ((unsigned char) ((((((((var_1_47) < ((var_1_53 - 25))) ? (var_1_47) : ((var_1_53 - 25))))) > (var_1_21)) ? (((((var_1_47) < ((var_1_53 - 25))) ? (var_1_47) : ((var_1_53 - 25))))) : (var_1_21))))) : (var_1_52 == ((unsigned char) ((((var_1_39) < ((var_1_46 + 50))) ? (var_1_39) : ((var_1_46 + 50))))))) : (var_1_52 == ((unsigned char) var_1_42))) : (var_1_52 == ((unsigned char) ((var_1_54 - var_1_40) + ((((((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) > (var_1_42)) ? (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) : (var_1_42))))))) : (var_1_52 == ((unsigned char) (var_1_21 + ((((var_1_46) > (((((var_1_54) < (4)) ? (var_1_54) : (4))))) ? (var_1_46) : (((((var_1_54) < (4)) ? (var_1_54) : (4))))))))))) && (var_1_48 ? (var_1_55 == ((unsigned short int) ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))))) : ((var_1_21 >= var_1_41) ? (var_1_55 == ((unsigned short int) (((((var_1_5) < ((var_1_56 - var_1_39))) ? (var_1_5) : ((var_1_56 - var_1_39)))) - ((((((((var_1_27) < (var_1_40)) ? (var_1_27) : (var_1_40)))) < (var_1_47)) ? (((((var_1_27) < (var_1_40)) ? (var_1_27) : (var_1_40)))) : (var_1_47)))))) : (var_1_55 == ((unsigned short int) (var_1_45 + var_1_53)))))) && (var_1_57 == ((unsigned long int) ((((var_1_11) < (((((var_1_42) > (var_1_55)) ? (var_1_42) : (var_1_55))))) ? (var_1_11) : (((((var_1_42) > (var_1_55)) ? (var_1_42) : (var_1_55))))))))) && ((var_1_37 > (var_1_27 * var_1_22)) ? ((var_1_21 >= (var_1_41 - (var_1_42 + 32))) ? (var_1_58 == ((signed short int) ((((var_1_46) > ((((((var_1_55 - 2)) > ((var_1_40 + var_1_45))) ? ((var_1_55 - 2)) : ((var_1_40 + var_1_45)))))) ? (var_1_46) : ((((((var_1_55 - 2)) > ((var_1_40 + var_1_45))) ? ((var_1_55 - 2)) : ((var_1_40 + var_1_45))))))))) : (var_1_58 == ((signed short int) ((((-64) > (var_1_21)) ? (-64) : (var_1_21)))))) : 1)) && (var_1_48 ? (var_1_59 == ((double) var_1_17)) : (var_1_59 == ((double) ((((((((24.8) < (var_1_17)) ? (24.8) : (var_1_17))) - 128.25) < 0 ) ? -(((((24.8) < (var_1_17)) ? (24.8) : (var_1_17))) - 128.25) : (((((24.8) < (var_1_17)) ? (24.8) : (var_1_17))) - 128.25))))))) && (((var_1_42 == var_1_61) || ((var_1_52 / var_1_53) <= var_1_5)) ? ((var_1_45 != var_1_45) ? (var_1_60 == ((float) ((((var_1_18) < (var_1_17)) ? (var_1_18) : (var_1_17))))) : (var_1_48 ? (var_1_60 == ((float) var_1_18)) : (var_1_60 == ((float) var_1_16)))) : (var_1_60 == ((float) var_1_17)))) && ((! var_1_48) ? (((var_1_45 + var_1_45) <= 5) ? (var_1_61 == ((signed short int) ((((var_1_58) < (var_1_56)) ? (var_1_58) : (var_1_56))))) : 1) : 1)
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
