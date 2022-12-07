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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -2;
unsigned long int var_1_4 = 128;
signed char var_1_5 = 100;
signed char var_1_6 = 5;
signed char var_1_7 = 64;
signed char var_1_8 = 2;
unsigned char var_1_9 = 8;
signed char var_1_10 = 64;
signed char var_1_12 = 8;
signed char var_1_13 = 10;
signed char var_1_14 = 10;
signed long int var_1_15 = 4;
signed long int var_1_16 = 2;
unsigned short int var_1_17 = 32;
unsigned short int var_1_18 = 41527;
unsigned char var_1_19 = 0;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
signed char var_1_24 = 4;
signed char var_1_27 = 2;
signed char var_1_28 = 4;
unsigned short int var_1_29 = 2;
unsigned short int var_1_30 = 62294;
unsigned char var_1_31 = 1;
signed long int var_1_32 = 16;
signed short int var_1_34 = 32;
float var_1_35 = 3.2;
float var_1_36 = 199.88;
signed char var_1_37 = 32;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 128;
double var_1_42 = 2.5;
double var_1_43 = 64.875;
unsigned char var_1_45 = 128;
signed long int var_1_46 = -100;
unsigned char var_1_47 = 1;
double var_1_48 = 8.8;
double var_1_49 = 32.5;
double var_1_50 = 0.0;
double var_1_51 = 4.5;
unsigned char var_1_52 = 0;
signed char var_1_53 = 64;
signed char var_1_55 = 2;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 32;
unsigned char last_1_var_1_9 = 8;
unsigned short int last_1_var_1_17 = 32;
unsigned char last_1_var_1_19 = 0;
signed char last_1_var_1_37 = 32;
unsigned char last_1_var_1_39 = 1;
unsigned char last_1_var_1_52 = 0;
signed char last_1_var_1_55 = 2;
unsigned char last_1_var_1_57 = 32;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_8 = last_1_var_1_9;
 signed long int stepLocal_7 = 16;
 if (stepLocal_8 == var_1_5) {
  var_1_31 = (! var_1_21);
 } else {
  if (last_1_var_1_57 != stepLocal_7) {
   var_1_31 = 0;
  }
 }
 if (! last_1_var_1_52) {
  var_1_19 = ((last_1_var_1_52 || last_1_var_1_19) || (var_1_21 && (var_1_22 && var_1_23)));
 }
 var_1_52 = (var_1_31 || var_1_22);
 signed long int stepLocal_17 = (((last_1_var_1_57) > (last_1_var_1_9)) ? (last_1_var_1_57) : (last_1_var_1_9));
 if (! (var_1_21 || (last_1_var_1_39 && var_1_22))) {
  if (((last_1_var_1_57 | var_1_7) * last_1_var_1_55) != stepLocal_17) {
   var_1_46 = (last_1_var_1_55 + var_1_7);
  } else {
   var_1_46 = ((((last_1_var_1_17) < 0 ) ? -(last_1_var_1_17) : (last_1_var_1_17)));
  }
 }
 var_1_9 = 8;
 signed long int stepLocal_3 = var_1_13 * var_1_14;
 if (var_1_16 == stepLocal_3) {
  var_1_17 = (var_1_18 - 8);
 }
 signed long int stepLocal_6 = var_1_15 / var_1_7;
 signed char stepLocal_5 = var_1_12;
 if (stepLocal_6 >= var_1_4) {
  if (stepLocal_5 <= (var_1_15 + (5 / -1))) {
   var_1_27 = ((((((((((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) < (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))) ? (((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) : (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))))) > (var_1_8)) ? (((((((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) < (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))) ? (((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) : (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))))) : (var_1_8)));
  } else {
   var_1_27 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 }
 if (((var_1_18 - var_1_16) % var_1_4) <= var_1_14) {
  var_1_35 = (((((((var_1_36) > (100.75f)) ? (var_1_36) : (100.75f))) < 0 ) ? -((((var_1_36) > (100.75f)) ? (var_1_36) : (100.75f))) : ((((var_1_36) > (100.75f)) ? (var_1_36) : (100.75f)))));
 }
 if (var_1_21) {
  var_1_55 = 4;
 }
 if (var_1_23) {
  var_1_56 = var_1_40;
 } else {
  var_1_56 = var_1_22;
 }
 if (var_1_15 != var_1_30) {
  var_1_47 = (var_1_56 || var_1_21);
 } else {
  if (var_1_17 < ((var_1_13 - var_1_16) >> var_1_46)) {
   if (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) >= var_1_46) {
    var_1_47 = var_1_40;
   } else {
    var_1_47 = (var_1_56 && var_1_40);
   }
  } else {
   if (! var_1_21) {
    var_1_47 = 0;
   }
  }
 }
 if (var_1_35 < ((((15.8) < (8.2)) ? (15.8) : (8.2)))) {
  var_1_29 = (var_1_14 + ((((var_1_16) > (((((64) < 0 ) ? -(64) : (64))))) ? (var_1_16) : (((((64) < 0 ) ? -(64) : (64)))))));
 } else {
  var_1_29 = ((var_1_30 - var_1_15) - var_1_16);
 }
 unsigned char stepLocal_19 = var_1_29 <= var_1_30;
 signed char stepLocal_18 = var_1_55;
 if (stepLocal_18 <= var_1_29) {
  if (var_1_31 || stepLocal_19) {
   var_1_48 = (((((var_1_49) > (64.8)) ? (var_1_49) : (64.8))) - ((var_1_50 - var_1_51) + 25.495));
  }
 }
 unsigned char stepLocal_20 = var_1_56;
 if (stepLocal_20 || (1.2 <= var_1_48)) {
  if (var_1_36 >= var_1_48) {
   var_1_53 = var_1_16;
  }
 }
 unsigned long int stepLocal_2 = var_1_4;
 signed long int stepLocal_1 = var_1_46 * var_1_8;
 signed char stepLocal_0 = var_1_8;
 if (! var_1_47) {
  var_1_10 = ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6);
 } else {
  if (((((var_1_13) < ((var_1_7 / var_1_5))) ? (var_1_13) : ((var_1_7 / var_1_5)))) <= stepLocal_0) {
   var_1_10 = ((((((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) < (var_1_8)) ? (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) : (var_1_8)));
  } else {
   if (stepLocal_1 == (- 128u)) {
    if (stepLocal_2 >= (var_1_5 >> ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))))) {
     var_1_10 = (var_1_13 + var_1_14);
    } else {
     var_1_10 = -5;
    }
   } else {
    var_1_10 = var_1_6;
   }
  }
 }
 if (10u <= ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) {
  if (((((16u) < (var_1_29)) ? (16u) : (var_1_29))) >= (var_1_29 % var_1_4)) {
   var_1_1 = ((var_1_5 - var_1_6) - (var_1_7 - var_1_8));
  }
 }
 if (var_1_55 > var_1_6) {
  if (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) > (var_1_42 - var_1_43)) {
   if ((var_1_8 / var_1_5) >= (-2 * ((((4) < (var_1_53)) ? (4) : (var_1_53))))) {
    var_1_41 = ((var_1_7 - var_1_14) + (var_1_15 + (var_1_16 + var_1_13)));
   }
  } else {
   var_1_41 = ((((var_1_8) < (((((var_1_14) > ((var_1_15 + var_1_16))) ? (var_1_14) : ((var_1_15 + var_1_16)))))) ? (var_1_8) : (((((var_1_14) > ((var_1_15 + var_1_16))) ? (var_1_14) : ((var_1_15 + var_1_16)))))));
  }
 } else {
  var_1_41 = (var_1_45 - ((((var_1_6) < ((100 - var_1_16))) ? (var_1_6) : ((100 - var_1_16)))));
 }
 unsigned short int stepLocal_4 = var_1_18;
 if (stepLocal_4 <= var_1_41) {
  if (var_1_22) {
   var_1_24 = (var_1_13 - var_1_5);
  } else {
   if ((- var_1_48) <= var_1_48) {
    var_1_24 = (((((var_1_16) > (-2)) ? (var_1_16) : (-2))) + var_1_14);
   }
  }
 } else {
  var_1_24 = var_1_16;
 }
 unsigned long int stepLocal_13 = var_1_4;
 signed long int stepLocal_12 = var_1_12 * ((((var_1_41) < (var_1_29)) ? (var_1_41) : (var_1_29)));
 signed long int stepLocal_11 = var_1_41 * var_1_30;
 signed long int stepLocal_10 = var_1_29 ^ (var_1_30 - var_1_8);
 if (stepLocal_12 != var_1_10) {
  if (var_1_52) {
   var_1_37 = (((((4 + var_1_12)) > (var_1_28)) ? ((4 + var_1_12)) : (var_1_28)));
  } else {
   if (stepLocal_11 < var_1_7) {
    if (var_1_48 >= var_1_35) {
     var_1_37 = var_1_7;
    } else {
     var_1_37 = var_1_16;
    }
   }
  }
 } else {
  if (stepLocal_10 == var_1_5) {
   if ((var_1_6 + ((((last_1_var_1_37) < (var_1_41)) ? (last_1_var_1_37) : (var_1_41)))) != stepLocal_13) {
    var_1_37 = (((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_13)) < (var_1_7)) ? ((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_13)) : (var_1_7)));
   }
  }
 }
 if (var_1_18 != var_1_7) {
  if (var_1_22) {
   var_1_32 = (((((var_1_28) < (var_1_13)) ? (var_1_28) : (var_1_13))) + (((((var_1_27 + var_1_15)) > ((var_1_6 - var_1_8))) ? ((var_1_27 + var_1_15)) : ((var_1_6 - var_1_8)))));
  } else {
   if (var_1_19) {
    var_1_32 = (var_1_6 - var_1_5);
   } else {
    var_1_32 = var_1_16;
   }
  }
 } else {
  var_1_32 = var_1_41;
 }
 unsigned char stepLocal_9 = var_1_28 == var_1_18;
 if (var_1_22 && stepLocal_9) {
  var_1_34 = ((((((((var_1_32) < (32)) ? (var_1_32) : (32)))) > (var_1_8)) ? (((((var_1_32) < (32)) ? (var_1_32) : (32)))) : (var_1_8)));
 }
 signed long int stepLocal_21 = (((var_1_9) > ((var_1_12 + var_1_13))) ? (var_1_9) : ((var_1_12 + var_1_13)));
 if (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) > stepLocal_21) {
  var_1_57 = (var_1_45 - var_1_6);
 } else {
  if (var_1_19) {
   var_1_57 = var_1_5;
  }
 }
 unsigned long int stepLocal_16 = 2u;
 signed long int stepLocal_15 = var_1_18 + var_1_29;
 unsigned short int stepLocal_14 = var_1_18;
 if (stepLocal_14 != (var_1_4 & var_1_46)) {
  if ((var_1_41 + (var_1_46 % var_1_7)) >= stepLocal_16) {
   var_1_39 = (! var_1_40);
  } else {
   if (stepLocal_15 <= (32 * var_1_10)) {
    var_1_39 = (! var_1_40);
   } else {
    var_1_39 = var_1_40;
   }
  }
 } else {
  var_1_39 = ((var_1_57 <= var_1_34) && var_1_40);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 62);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 63);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -31);
 assume_abort_if_not(var_1_12 <= 32);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 31);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 8);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 8);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 32767);
 assume_abort_if_not(var_1_18 <= 65534);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -127);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 49150);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 127);
 assume_abort_if_not(var_1_45 <= 254);
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 2305843.009213691390e+12F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_57 = var_1_57;
}
int property() {
 return (((((((((((((((((((((((10u <= ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) ? ((((((16u) < (var_1_29)) ? (16u) : (var_1_29))) >= (var_1_29 % var_1_4)) ? (var_1_1 == ((signed char) ((var_1_5 - var_1_6) - (var_1_7 - var_1_8)))) : 1) : 1) && (var_1_9 == ((unsigned char) 8))) && ((! var_1_47) ? (var_1_10 == ((signed char) ((var_1_12 + (var_1_13 - var_1_14)) + var_1_6))) : ((((((var_1_13) < ((var_1_7 / var_1_5))) ? (var_1_13) : ((var_1_7 / var_1_5)))) <= var_1_8) ? (var_1_10 == ((signed char) ((((((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) < (var_1_8)) ? (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12)))) : (var_1_8))))) : (((var_1_46 * var_1_8) == (- 128u)) ? ((var_1_4 >= (var_1_5 >> ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))))) ? (var_1_10 == ((signed char) (var_1_13 + var_1_14))) : (var_1_10 == ((signed char) -5))) : (var_1_10 == ((signed char) var_1_6)))))) && ((var_1_16 == (var_1_13 * var_1_14)) ? (var_1_17 == ((unsigned short int) (var_1_18 - 8))) : 1)) && ((! last_1_var_1_52) ? (var_1_19 == ((unsigned char) ((last_1_var_1_52 || last_1_var_1_19) || (var_1_21 && (var_1_22 && var_1_23))))) : 1)) && ((var_1_18 <= var_1_41) ? (var_1_22 ? (var_1_24 == ((signed char) (var_1_13 - var_1_5))) : (((- var_1_48) <= var_1_48) ? (var_1_24 == ((signed char) (((((var_1_16) > (-2)) ? (var_1_16) : (-2))) + var_1_14))) : 1)) : (var_1_24 == ((signed char) var_1_16)))) && (((var_1_15 / var_1_7) >= var_1_4) ? ((var_1_12 <= (var_1_15 + (5 / -1))) ? (var_1_27 == ((signed char) ((((((((((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) < (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))) ? (((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) : (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))))) > (var_1_8)) ? (((((((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) < (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))) ? (((((-10) < (var_1_28)) ? (-10) : (var_1_28)))) : (((((var_1_6) < (var_1_15)) ? (var_1_6) : (var_1_15))))))) : (var_1_8))))) : (var_1_27 == ((signed char) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))))) : 1)) && ((var_1_35 < ((((15.8) < (8.2)) ? (15.8) : (8.2)))) ? (var_1_29 == ((unsigned short int) (var_1_14 + ((((var_1_16) > (((((64) < 0 ) ? -(64) : (64))))) ? (var_1_16) : (((((64) < 0 ) ? -(64) : (64))))))))) : (var_1_29 == ((unsigned short int) ((var_1_30 - var_1_15) - var_1_16))))) && ((last_1_var_1_9 == var_1_5) ? (var_1_31 == ((unsigned char) (! var_1_21))) : ((last_1_var_1_57 != 16) ? (var_1_31 == ((unsigned char) 0)) : 1))) && ((var_1_18 != var_1_7) ? (var_1_22 ? (var_1_32 == ((signed long int) (((((var_1_28) < (var_1_13)) ? (var_1_28) : (var_1_13))) + (((((var_1_27 + var_1_15)) > ((var_1_6 - var_1_8))) ? ((var_1_27 + var_1_15)) : ((var_1_6 - var_1_8))))))) : (var_1_19 ? (var_1_32 == ((signed long int) (var_1_6 - var_1_5))) : (var_1_32 == ((signed long int) var_1_16)))) : (var_1_32 == ((signed long int) var_1_41)))) && ((var_1_22 && (var_1_28 == var_1_18)) ? (var_1_34 == ((signed short int) ((((((((var_1_32) < (32)) ? (var_1_32) : (32)))) > (var_1_8)) ? (((((var_1_32) < (32)) ? (var_1_32) : (32)))) : (var_1_8))))) : 1)) && ((((var_1_18 - var_1_16) % var_1_4) <= var_1_14) ? (var_1_35 == ((float) (((((((var_1_36) > (100.75f)) ? (var_1_36) : (100.75f))) < 0 ) ? -((((var_1_36) > (100.75f)) ? (var_1_36) : (100.75f))) : ((((var_1_36) > (100.75f)) ? (var_1_36) : (100.75f))))))) : 1)) && (((var_1_12 * ((((var_1_41) < (var_1_29)) ? (var_1_41) : (var_1_29)))) != var_1_10) ? (var_1_52 ? (var_1_37 == ((signed char) (((((4 + var_1_12)) > (var_1_28)) ? ((4 + var_1_12)) : (var_1_28))))) : (((var_1_41 * var_1_30) < var_1_7) ? ((var_1_48 >= var_1_35) ? (var_1_37 == ((signed char) var_1_7)) : (var_1_37 == ((signed char) var_1_16))) : 1)) : (((var_1_29 ^ (var_1_30 - var_1_8)) == var_1_5) ? (((var_1_6 + ((((last_1_var_1_37) < (var_1_41)) ? (last_1_var_1_37) : (var_1_41)))) != var_1_4) ? (var_1_37 == ((signed char) (((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_13)) < (var_1_7)) ? ((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_13)) : (var_1_7))))) : 1) : 1))) && ((var_1_18 != (var_1_4 & var_1_46)) ? (((var_1_41 + (var_1_46 % var_1_7)) >= 2u) ? (var_1_39 == ((unsigned char) (! var_1_40))) : (((var_1_18 + var_1_29) <= (32 * var_1_10)) ? (var_1_39 == ((unsigned char) (! var_1_40))) : (var_1_39 == ((unsigned char) var_1_40)))) : (var_1_39 == ((unsigned char) ((var_1_57 <= var_1_34) && var_1_40))))) && ((var_1_55 > var_1_6) ? ((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) > (var_1_42 - var_1_43)) ? (((var_1_8 / var_1_5) >= (-2 * ((((4) < (var_1_53)) ? (4) : (var_1_53))))) ? (var_1_41 == ((unsigned char) ((var_1_7 - var_1_14) + (var_1_15 + (var_1_16 + var_1_13))))) : 1) : (var_1_41 == ((unsigned char) ((((var_1_8) < (((((var_1_14) > ((var_1_15 + var_1_16))) ? (var_1_14) : ((var_1_15 + var_1_16)))))) ? (var_1_8) : (((((var_1_14) > ((var_1_15 + var_1_16))) ? (var_1_14) : ((var_1_15 + var_1_16)))))))))) : (var_1_41 == ((unsigned char) (var_1_45 - ((((var_1_6) < ((100 - var_1_16))) ? (var_1_6) : ((100 - var_1_16))))))))) && ((! (var_1_21 || (last_1_var_1_39 && var_1_22))) ? ((((last_1_var_1_57 | var_1_7) * last_1_var_1_55) != ((((last_1_var_1_57) > (last_1_var_1_9)) ? (last_1_var_1_57) : (last_1_var_1_9)))) ? (var_1_46 == ((signed long int) (last_1_var_1_55 + var_1_7))) : (var_1_46 == ((signed long int) ((((last_1_var_1_17) < 0 ) ? -(last_1_var_1_17) : (last_1_var_1_17)))))) : 1)) && ((var_1_15 != var_1_30) ? (var_1_47 == ((unsigned char) (var_1_56 || var_1_21))) : ((var_1_17 < ((var_1_13 - var_1_16) >> var_1_46)) ? ((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) >= var_1_46) ? (var_1_47 == ((unsigned char) var_1_40)) : (var_1_47 == ((unsigned char) (var_1_56 && var_1_40)))) : ((! var_1_21) ? (var_1_47 == ((unsigned char) 0)) : 1)))) && ((var_1_55 <= var_1_29) ? ((var_1_31 || (var_1_29 <= var_1_30)) ? (var_1_48 == ((double) (((((var_1_49) > (64.8)) ? (var_1_49) : (64.8))) - ((var_1_50 - var_1_51) + 25.495)))) : 1) : 1)) && (var_1_52 == ((unsigned char) (var_1_31 || var_1_22)))) && ((var_1_56 || (1.2 <= var_1_48)) ? ((var_1_36 >= var_1_48) ? (var_1_53 == ((signed char) var_1_16)) : 1) : 1)) && (var_1_21 ? (var_1_55 == ((signed char) 4)) : 1)) && (var_1_23 ? (var_1_56 == ((unsigned char) var_1_40)) : (var_1_56 == ((unsigned char) var_1_22)))) && ((((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) > ((((var_1_9) > ((var_1_12 + var_1_13))) ? (var_1_9) : ((var_1_12 + var_1_13))))) ? (var_1_57 == ((unsigned char) (var_1_45 - var_1_6))) : (var_1_19 ? (var_1_57 == ((unsigned char) var_1_5)) : 1))
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
