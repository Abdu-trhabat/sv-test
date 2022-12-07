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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 0;
signed long int var_1_5 = 32;
unsigned long int var_1_8 = 3974482504;
unsigned long int var_1_9 = 4191564779;
unsigned long int var_1_10 = 1942660812;
unsigned long int var_1_11 = 1000000000;
signed char var_1_12 = -128;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_16 = -16;
signed char var_1_17 = 1;
signed char var_1_18 = 2;
signed char var_1_19 = 100;
double var_1_20 = 10.8;
double var_1_21 = 3.175;
double var_1_22 = 200.432;
signed long int var_1_23 = 1;
signed short int var_1_24 = 128;
signed long int var_1_26 = 4;
unsigned char var_1_27 = 25;
double var_1_28 = 8.203;
signed char var_1_29 = -2;
signed char var_1_31 = -10;
unsigned long int var_1_32 = 1824784202;
unsigned short int var_1_33 = 39650;
signed short int var_1_34 = -16;
signed short int var_1_35 = 18364;
float var_1_36 = -0.5;
float var_1_38 = 0.0;
float var_1_39 = 100000.2;
float var_1_40 = 0.0;
float var_1_41 = 31.7;
signed long int var_1_42 = -100000;
unsigned char var_1_45 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
unsigned short int var_1_50 = 10;
unsigned short int var_1_51 = 16;
float var_1_52 = 500.5;
signed long int var_1_53 = 4;
double var_1_54 = 256.6;
signed long int var_1_55 = 50;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
signed long int var_1_58 = -4;
unsigned long int last_1_var_1_1 = 0;
signed char last_1_var_1_12 = -128;
double last_1_var_1_20 = 10.8;
signed long int last_1_var_1_23 = 1;
signed short int last_1_var_1_24 = 128;
signed long int last_1_var_1_26 = 4;
unsigned char last_1_var_1_27 = 25;
signed short int last_1_var_1_34 = -16;
signed long int last_1_var_1_42 = -100000;
unsigned char last_1_var_1_45 = 1;
unsigned short int last_1_var_1_50 = 10;
unsigned short int last_1_var_1_51 = 16;
signed long int last_1_var_1_55 = 50;
unsigned char last_1_var_1_56 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_14 = var_1_10;
 if (last_1_var_1_34 <= stepLocal_14) {
  if (last_1_var_1_45) {
   var_1_34 = var_1_5;
  } else {
   var_1_34 = ((var_1_35 - var_1_5) - var_1_19);
  }
 } else {
  var_1_34 = ((8 - var_1_18) + last_1_var_1_55);
 }
 if (! last_1_var_1_45) {
  if (last_1_var_1_45) {
   var_1_14 = ((32 + last_1_var_1_42) + (((((((var_1_5) < (-50)) ? (var_1_5) : (-50))) < 0 ) ? -((((var_1_5) < (-50)) ? (var_1_5) : (-50))) : ((((var_1_5) < (-50)) ? (var_1_5) : (-50))))));
  } else {
   var_1_14 = (var_1_13 - ((((var_1_5) > (last_1_var_1_27)) ? (var_1_5) : (last_1_var_1_27))));
  }
 }
 signed char stepLocal_18 = var_1_13;
 unsigned long int stepLocal_17 = var_1_8 - var_1_19;
 signed long int stepLocal_16 = 10;
 if (stepLocal_18 < ((((var_1_17) < (last_1_var_1_27)) ? (var_1_17) : (last_1_var_1_27)))) {
  if (last_1_var_1_51 > stepLocal_17) {
   var_1_45 = (var_1_47 || (last_1_var_1_45 && var_1_48));
  } else {
   if (stepLocal_16 > var_1_32) {
    var_1_45 = (! (! var_1_48));
   } else {
    var_1_45 = ((var_1_35 >= var_1_13) && (var_1_47 || (var_1_48 && var_1_49)));
   }
  }
 } else {
  var_1_45 = (! (! var_1_48));
 }
 unsigned long int stepLocal_22 = last_1_var_1_50 / var_1_10;
 if (last_1_var_1_23 <= stepLocal_22) {
  if ((var_1_40 + (var_1_39 - var_1_41)) <= ((10.125f + last_1_var_1_20) / var_1_38)) {
   var_1_58 = last_1_var_1_12;
  } else {
   var_1_58 = var_1_11;
  }
 } else {
  var_1_58 = var_1_18;
 }
 if (var_1_58 == var_1_5) {
  var_1_12 = (var_1_5 - (var_1_13 - 8));
 }
 signed long int stepLocal_9 = last_1_var_1_24 & last_1_var_1_51;
 if (stepLocal_9 != ((((var_1_8) < (64u)) ? (var_1_8) : (64u)))) {
  if (! last_1_var_1_56) {
   var_1_27 = var_1_13;
  } else {
   var_1_27 = ((((var_1_19) < (((((var_1_13) > (50)) ? (var_1_13) : (50))))) ? (var_1_19) : (((((var_1_13) > (50)) ? (var_1_13) : (50))))));
  }
 }
 var_1_50 = (var_1_35 + 1);
 var_1_52 = ((((var_1_39) > ((var_1_40 - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) ? (var_1_39) : ((var_1_40 - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))));
 if (var_1_45) {
  var_1_54 = var_1_40;
 }
 var_1_56 = var_1_57;
 unsigned char stepLocal_4 = var_1_18 < var_1_50;
 unsigned long int stepLocal_3 = - (var_1_11 * var_1_10);
 if (stepLocal_4 && var_1_45) {
  if ((var_1_50 ^ var_1_27) <= stepLocal_3) {
   var_1_20 = (var_1_21 + var_1_22);
  } else {
   var_1_20 = var_1_21;
  }
 }
 unsigned long int stepLocal_19 = var_1_11;
 if (stepLocal_19 < var_1_14) {
  var_1_51 = (((((((((var_1_19 + var_1_35)) < (var_1_13)) ? ((var_1_19 + var_1_35)) : (var_1_13)))) < ((var_1_58 + var_1_5))) ? ((((((var_1_19 + var_1_35)) < (var_1_13)) ? ((var_1_19 + var_1_35)) : (var_1_13)))) : ((var_1_58 + var_1_5))));
 }
 if (var_1_56) {
  var_1_26 = last_1_var_1_26;
 } else {
  var_1_26 = (var_1_13 - ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50))));
 }
 if (((var_1_21 < 49.5) || var_1_56) || (((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22))) >= 1.0000000002E9)) {
  if (128 >= (var_1_19 - var_1_34)) {
   var_1_28 = ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)));
  } else {
   var_1_28 = (var_1_22 + var_1_21);
  }
 }
 unsigned short int stepLocal_15 = var_1_51;
 if (((var_1_33 + var_1_27) - (1325268161 - var_1_51)) != stepLocal_15) {
  var_1_36 = ((((((((var_1_21 + var_1_22)) < (1.75f)) ? ((var_1_21 + var_1_22)) : (1.75f))) < 0 ) ? -(((((var_1_21 + var_1_22)) < (1.75f)) ? ((var_1_21 + var_1_22)) : (1.75f))) : (((((var_1_21 + var_1_22)) < (1.75f)) ? ((var_1_21 + var_1_22)) : (1.75f)))));
 } else {
  if (var_1_56) {
   var_1_36 = ((var_1_38 - var_1_39) - (var_1_40 - var_1_41));
  } else {
   var_1_36 = var_1_21;
  }
 }
 if (((((var_1_36) > (var_1_39)) ? (var_1_36) : (var_1_39))) < (var_1_38 - var_1_41)) {
  var_1_55 = var_1_34;
 } else {
  var_1_55 = var_1_5;
 }
 if ((var_1_14 >= var_1_9) || var_1_56) {
  if (var_1_38 > var_1_20) {
   var_1_42 = ((var_1_27 + var_1_35) + var_1_26);
  } else {
   var_1_42 = (((((var_1_27 + var_1_33)) < (var_1_58)) ? ((var_1_27 + var_1_33)) : (var_1_58)));
  }
 }
 unsigned char stepLocal_6 = var_1_45;
 signed long int stepLocal_5 = var_1_50 + var_1_42;
 if ((last_1_var_1_23 > (var_1_9 - var_1_10)) && stepLocal_6) {
  if ((last_1_var_1_23 + var_1_50) > stepLocal_5) {
   var_1_23 = (var_1_18 - var_1_27);
  }
 } else {
  var_1_23 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
 }
 signed long int stepLocal_2 = var_1_23;
 if (stepLocal_2 >= (var_1_13 / var_1_11)) {
  var_1_16 = ((((var_1_5) < (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17))))) ? (var_1_5) : (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17))))));
 } else {
  var_1_16 = ((var_1_5 + var_1_18) - ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19))));
 }
 signed long int stepLocal_8 = (var_1_18 + var_1_5) - var_1_13;
 signed long int stepLocal_7 = -64 / var_1_13;
 if (var_1_12 < stepLocal_8) {
  if (stepLocal_7 > var_1_27) {
   var_1_24 = ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)));
  } else {
   var_1_24 = (4 - var_1_18);
  }
 } else {
  var_1_24 = ((((((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) < ((var_1_18 + var_1_58))) ? (((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) : ((var_1_18 + var_1_58))));
 }
 unsigned long int stepLocal_1 = 50u;
 unsigned char stepLocal_0 = var_1_45;
 if ((last_1_var_1_1 >= var_1_55) || stepLocal_0) {
  if (((last_1_var_1_1 * var_1_55) >> var_1_5) >= stepLocal_1) {
   var_1_1 = (var_1_5 + (var_1_50 + var_1_50));
  } else {
   var_1_1 = (var_1_5 + ((((var_1_50) < (var_1_50)) ? (var_1_50) : (var_1_50))));
  }
 } else {
  if (var_1_45) {
   var_1_1 = (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - (var_1_10 - (var_1_11 - var_1_5)));
  }
 }
 if ((var_1_10 <= 32u) || (var_1_45 || var_1_45)) {
  if (var_1_55 >= var_1_19) {
   var_1_29 = var_1_19;
  } else {
   var_1_29 = var_1_17;
  }
 } else {
  var_1_29 = var_1_17;
 }
 unsigned long int stepLocal_13 = var_1_19 * (var_1_16 & var_1_8);
 unsigned long int stepLocal_12 = (var_1_10 + var_1_50) * (var_1_23 + var_1_27);
 unsigned char stepLocal_11 = var_1_27;
 signed long int stepLocal_10 = var_1_33 - var_1_19;
 if (stepLocal_13 >= ((var_1_10 + var_1_32) - var_1_27)) {
  if (var_1_56) {
   var_1_31 = (32 - var_1_5);
  } else {
   if (stepLocal_10 > var_1_5) {
    var_1_31 = ((((var_1_5) < (-64)) ? (var_1_5) : (-64)));
   } else {
    var_1_31 = (2 - var_1_13);
   }
  }
 } else {
  if (var_1_1 <= stepLocal_12) {
   if (stepLocal_11 > (var_1_58 * var_1_50)) {
    var_1_31 = (var_1_5 - var_1_18);
   }
  }
 }
 signed long int stepLocal_21 = var_1_31 >> var_1_23;
 unsigned long int stepLocal_20 = var_1_8;
 if (stepLocal_20 < 16u) {
  if (var_1_26 <= stepLocal_21) {
   var_1_53 = (((var_1_14 + var_1_31) + var_1_26) + (var_1_29 + var_1_13));
  } else {
   var_1_53 = (var_1_5 - var_1_18);
  }
 } else {
  var_1_53 = ((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33)));
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 33);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 1073741823);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 536870911);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 1073741824);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 32767);
 assume_abort_if_not(var_1_33 <= 65535);
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= 16382);
 assume_abort_if_not(var_1_35 <= 32766);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 4611686.018427382800e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= 4611686.018427382800e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_57 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_57 >= 0);
 assume_abort_if_not(var_1_57 <= 0);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_56 = var_1_56;
}
int property() {
 return (((((((((((((((((((((((((last_1_var_1_1 >= var_1_55) || var_1_45) ? ((((last_1_var_1_1 * var_1_55) >> var_1_5) >= 50u) ? (var_1_1 == ((unsigned long int) (var_1_5 + (var_1_50 + var_1_50)))) : (var_1_1 == ((unsigned long int) (var_1_5 + ((((var_1_50) < (var_1_50)) ? (var_1_50) : (var_1_50))))))) : (var_1_45 ? (var_1_1 == ((unsigned long int) (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))) - (var_1_10 - (var_1_11 - var_1_5))))) : 1)) && ((var_1_58 == var_1_5) ? (var_1_12 == ((signed char) (var_1_5 - (var_1_13 - 8)))) : 1)) && ((! last_1_var_1_45) ? (last_1_var_1_45 ? (var_1_14 == ((signed short int) ((32 + last_1_var_1_42) + (((((((var_1_5) < (-50)) ? (var_1_5) : (-50))) < 0 ) ? -((((var_1_5) < (-50)) ? (var_1_5) : (-50))) : ((((var_1_5) < (-50)) ? (var_1_5) : (-50)))))))) : (var_1_14 == ((signed short int) (var_1_13 - ((((var_1_5) > (last_1_var_1_27)) ? (var_1_5) : (last_1_var_1_27))))))) : 1)) && ((var_1_23 >= (var_1_13 / var_1_11)) ? (var_1_16 == ((signed char) ((((var_1_5) < (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17))))) ? (var_1_5) : (((((var_1_13) < (var_1_17)) ? (var_1_13) : (var_1_17)))))))) : (var_1_16 == ((signed char) ((var_1_5 + var_1_18) - ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19)))))))) && (((var_1_18 < var_1_50) && var_1_45) ? (((var_1_50 ^ var_1_27) <= (- (var_1_11 * var_1_10))) ? (var_1_20 == ((double) (var_1_21 + var_1_22))) : (var_1_20 == ((double) var_1_21))) : 1)) && (((last_1_var_1_23 > (var_1_9 - var_1_10)) && var_1_45) ? (((last_1_var_1_23 + var_1_50) > (var_1_50 + var_1_42)) ? (var_1_23 == ((signed long int) (var_1_18 - var_1_27))) : 1) : (var_1_23 == ((signed long int) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))))) && ((var_1_12 < ((var_1_18 + var_1_5) - var_1_13)) ? (((-64 / var_1_13) > var_1_27) ? (var_1_24 == ((signed short int) ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17))))) : (var_1_24 == ((signed short int) (4 - var_1_18)))) : (var_1_24 == ((signed short int) ((((((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) < ((var_1_18 + var_1_58))) ? (((((var_1_5) < (var_1_17)) ? (var_1_5) : (var_1_17)))) : ((var_1_18 + var_1_58)))))))) && (var_1_56 ? (var_1_26 == ((signed long int) last_1_var_1_26)) : (var_1_26 == ((signed long int) (var_1_13 - ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))))))) && (((last_1_var_1_24 & last_1_var_1_51) != ((((var_1_8) < (64u)) ? (var_1_8) : (64u)))) ? ((! last_1_var_1_56) ? (var_1_27 == ((unsigned char) var_1_13)) : (var_1_27 == ((unsigned char) ((((var_1_19) < (((((var_1_13) > (50)) ? (var_1_13) : (50))))) ? (var_1_19) : (((((var_1_13) > (50)) ? (var_1_13) : (50))))))))) : 1)) && ((((var_1_21 < 49.5) || var_1_56) || (((((var_1_20) > (var_1_22)) ? (var_1_20) : (var_1_22))) >= 1.0000000002E9)) ? ((128 >= (var_1_19 - var_1_34)) ? (var_1_28 == ((double) ((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))))) : (var_1_28 == ((double) (var_1_22 + var_1_21)))) : 1)) && (((var_1_10 <= 32u) || (var_1_45 || var_1_45)) ? ((var_1_55 >= var_1_19) ? (var_1_29 == ((signed char) var_1_19)) : (var_1_29 == ((signed char) var_1_17))) : (var_1_29 == ((signed char) var_1_17)))) && (((var_1_19 * (var_1_16 & var_1_8)) >= ((var_1_10 + var_1_32) - var_1_27)) ? (var_1_56 ? (var_1_31 == ((signed char) (32 - var_1_5))) : (((var_1_33 - var_1_19) > var_1_5) ? (var_1_31 == ((signed char) ((((var_1_5) < (-64)) ? (var_1_5) : (-64))))) : (var_1_31 == ((signed char) (2 - var_1_13))))) : ((var_1_1 <= ((var_1_10 + var_1_50) * (var_1_23 + var_1_27))) ? ((var_1_27 > (var_1_58 * var_1_50)) ? (var_1_31 == ((signed char) (var_1_5 - var_1_18))) : 1) : 1))) && ((last_1_var_1_34 <= var_1_10) ? (last_1_var_1_45 ? (var_1_34 == ((signed short int) var_1_5)) : (var_1_34 == ((signed short int) ((var_1_35 - var_1_5) - var_1_19)))) : (var_1_34 == ((signed short int) ((8 - var_1_18) + last_1_var_1_55))))) && ((((var_1_33 + var_1_27) - (1325268161 - var_1_51)) != var_1_51) ? (var_1_36 == ((float) ((((((((var_1_21 + var_1_22)) < (1.75f)) ? ((var_1_21 + var_1_22)) : (1.75f))) < 0 ) ? -(((((var_1_21 + var_1_22)) < (1.75f)) ? ((var_1_21 + var_1_22)) : (1.75f))) : (((((var_1_21 + var_1_22)) < (1.75f)) ? ((var_1_21 + var_1_22)) : (1.75f))))))) : (var_1_56 ? (var_1_36 == ((float) ((var_1_38 - var_1_39) - (var_1_40 - var_1_41)))) : (var_1_36 == ((float) var_1_21))))) && (((var_1_14 >= var_1_9) || var_1_56) ? ((var_1_38 > var_1_20) ? (var_1_42 == ((signed long int) ((var_1_27 + var_1_35) + var_1_26))) : (var_1_42 == ((signed long int) (((((var_1_27 + var_1_33)) < (var_1_58)) ? ((var_1_27 + var_1_33)) : (var_1_58)))))) : 1)) && ((var_1_13 < ((((var_1_17) < (last_1_var_1_27)) ? (var_1_17) : (last_1_var_1_27)))) ? ((last_1_var_1_51 > (var_1_8 - var_1_19)) ? (var_1_45 == ((unsigned char) (var_1_47 || (last_1_var_1_45 && var_1_48)))) : ((10 > var_1_32) ? (var_1_45 == ((unsigned char) (! (! var_1_48)))) : (var_1_45 == ((unsigned char) ((var_1_35 >= var_1_13) && (var_1_47 || (var_1_48 && var_1_49))))))) : (var_1_45 == ((unsigned char) (! (! var_1_48)))))) && (var_1_50 == ((unsigned short int) (var_1_35 + 1)))) && ((var_1_11 < var_1_14) ? (var_1_51 == ((unsigned short int) (((((((((var_1_19 + var_1_35)) < (var_1_13)) ? ((var_1_19 + var_1_35)) : (var_1_13)))) < ((var_1_58 + var_1_5))) ? ((((((var_1_19 + var_1_35)) < (var_1_13)) ? ((var_1_19 + var_1_35)) : (var_1_13)))) : ((var_1_58 + var_1_5)))))) : 1)) && (var_1_52 == ((float) ((((var_1_39) > ((var_1_40 - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) ? (var_1_39) : ((var_1_40 - ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))))))) && ((var_1_8 < 16u) ? ((var_1_26 <= (var_1_31 >> var_1_23)) ? (var_1_53 == ((signed long int) (((var_1_14 + var_1_31) + var_1_26) + (var_1_29 + var_1_13)))) : (var_1_53 == ((signed long int) (var_1_5 - var_1_18)))) : (var_1_53 == ((signed long int) ((((var_1_34) > (var_1_33)) ? (var_1_34) : (var_1_33))))))) && (var_1_45 ? (var_1_54 == ((double) var_1_40)) : 1)) && ((((((var_1_36) > (var_1_39)) ? (var_1_36) : (var_1_39))) < (var_1_38 - var_1_41)) ? (var_1_55 == ((signed long int) var_1_34)) : (var_1_55 == ((signed long int) var_1_5)))) && (var_1_56 == ((unsigned char) var_1_57))) && ((last_1_var_1_23 <= (last_1_var_1_50 / var_1_10)) ? (((var_1_40 + (var_1_39 - var_1_41)) <= ((10.125f + last_1_var_1_20) / var_1_38)) ? (var_1_58 == ((signed long int) last_1_var_1_12)) : (var_1_58 == ((signed long int) var_1_11))) : (var_1_58 == ((signed long int) var_1_18)))
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
