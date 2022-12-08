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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch18Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1000000;
unsigned long int var_1_6 = 1671053646;
unsigned long int var_1_7 = 1718233525;
unsigned long int var_1_8 = 2454441025;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
float var_1_14 = 10.75;
float var_1_15 = 2.2;
float var_1_16 = 16.2;
float var_1_17 = 0.0;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 10;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
signed char var_1_23 = 32;
signed char var_1_24 = 10;
signed char var_1_25 = 4;
signed char var_1_26 = -10;
float var_1_27 = 255.2;
float var_1_28 = 1.5;
signed char var_1_29 = 2;
signed char var_1_30 = 64;
signed char var_1_31 = 64;
signed char var_1_32 = 1;
signed char var_1_33 = 1;
signed char var_1_34 = 64;
signed char var_1_35 = 0;
unsigned short int var_1_36 = 1;
unsigned short int var_1_37 = 23872;
unsigned short int var_1_38 = 0;
unsigned short int var_1_39 = 30104;
unsigned short int var_1_40 = 45813;
double var_1_41 = 10.25;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
signed long int var_1_47 = 16;
signed char var_1_49 = 64;
signed char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 32;
unsigned char var_1_53 = 4;
unsigned char var_1_54 = 128;
signed long int var_1_55 = -50;
signed short int var_1_56 = -2;
unsigned long int var_1_58 = 0;
unsigned long int var_1_60 = 16;
float var_1_61 = 7.75;
unsigned long int last_1_var_1_1 = 1000000;
unsigned char last_1_var_1_11 = 1;
float last_1_var_1_14 = 10.75;
unsigned char last_1_var_1_19 = 0;
float last_1_var_1_27 = 255.2;
signed char last_1_var_1_29 = 2;
unsigned short int last_1_var_1_36 = 1;
unsigned short int last_1_var_1_38 = 0;
unsigned char last_1_var_1_44 = 1;
signed char last_1_var_1_49 = 64;
unsigned char last_1_var_1_51 = 0;
unsigned char last_1_var_1_53 = 4;
signed long int last_1_var_1_55 = -50;
unsigned long int last_1_var_1_58 = 0;
void initially(void) {
}
void step(void) {
 if ((var_1_15 - var_1_28) > last_1_var_1_27) {
  if (last_1_var_1_1 <= (last_1_var_1_53 + var_1_20)) {
   var_1_38 = ((((((var_1_37 + var_1_39)) < (var_1_40)) ? ((var_1_37 + var_1_39)) : (var_1_40))) - var_1_34);
  } else {
   if (last_1_var_1_51) {
    var_1_38 = (var_1_40 - var_1_32);
   } else {
    var_1_38 = var_1_31;
   }
  }
 } else {
  if (last_1_var_1_44) {
   var_1_38 = ((((var_1_30) < (var_1_34)) ? (var_1_30) : (var_1_34)));
  }
 }
 unsigned long int stepLocal_1 = var_1_7;
 if (var_1_38 >= stepLocal_1) {
  var_1_14 = (50.25f - (var_1_15 + var_1_16));
 } else {
  var_1_14 = ((var_1_17 - ((((63.875f) > (var_1_15)) ? (63.875f) : (var_1_15)))) - var_1_16);
 }
 unsigned char stepLocal_11 = var_1_21;
 unsigned char stepLocal_10 = var_1_22;
 signed long int stepLocal_9 = (((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25));
 unsigned char stepLocal_8 = last_1_var_1_51;
 signed long int stepLocal_7 = ~ var_1_31;
 if (stepLocal_9 >= var_1_37) {
  if (stepLocal_7 < last_1_var_1_38) {
   if (var_1_13) {
    var_1_44 = (! var_1_22);
   } else {
    var_1_44 = (last_1_var_1_51 && var_1_45);
   }
  } else {
   var_1_44 = (! var_1_45);
  }
 } else {
  if (stepLocal_8 && var_1_21) {
   if ((var_1_39 <= (- var_1_37)) && stepLocal_11) {
    if (var_1_45 || stepLocal_10) {
     var_1_44 = (var_1_45 || var_1_46);
    }
   } else {
    var_1_44 = (! var_1_45);
   }
  } else {
   var_1_44 = var_1_21;
  }
 }
 if (var_1_44) {
  var_1_43 = (var_1_32 + var_1_35);
 }
 if (var_1_17 >= last_1_var_1_14) {
  var_1_53 = var_1_33;
 } else {
  var_1_53 = (var_1_54 - var_1_50);
 }
 signed long int stepLocal_15 = last_1_var_1_36;
 signed long int stepLocal_14 = last_1_var_1_49;
 signed char stepLocal_13 = var_1_30;
 unsigned long int stepLocal_12 = var_1_6;
 if (last_1_var_1_58 <= stepLocal_15) {
  if ((var_1_31 % var_1_40) != stepLocal_13) {
   if (stepLocal_14 < ((var_1_35 + var_1_37) % -2)) {
    var_1_47 = ((((last_1_var_1_29) < 0 ) ? -(last_1_var_1_29) : (last_1_var_1_29)));
   } else {
    if (last_1_var_1_19) {
     var_1_47 = last_1_var_1_36;
    }
   }
  }
 } else {
  if (last_1_var_1_11) {
   var_1_47 = var_1_26;
  } else {
   if ((((((((var_1_33) < (last_1_var_1_53)) ? (var_1_33) : (last_1_var_1_53))) < 0 ) ? -((((var_1_33) < (last_1_var_1_53)) ? (var_1_33) : (last_1_var_1_53))) : ((((var_1_33) < (last_1_var_1_53)) ? (var_1_33) : (last_1_var_1_53))))) < stepLocal_12) {
    var_1_47 = ((((-1) < (last_1_var_1_49)) ? (-1) : (last_1_var_1_49)));
   } else {
    var_1_47 = ((((last_1_var_1_29) < (var_1_40)) ? (last_1_var_1_29) : (var_1_40)));
   }
  }
 }
 signed long int stepLocal_16 = var_1_47;
 if (stepLocal_16 > var_1_37) {
  var_1_51 = (! var_1_21);
 }
 signed long int stepLocal_17 = - (var_1_40 - var_1_32);
 if (stepLocal_17 <= (var_1_31 - var_1_47)) {
  var_1_52 = ((var_1_32 + 2) + var_1_34);
 }
 signed char stepLocal_18 = var_1_25;
 if (stepLocal_18 < ((((var_1_47) < (((((last_1_var_1_55) < (var_1_20)) ? (last_1_var_1_55) : (var_1_20))))) ? (var_1_47) : (((((last_1_var_1_55) < (var_1_20)) ? (last_1_var_1_55) : (var_1_20))))))) {
  var_1_55 = var_1_43;
 } else {
  var_1_55 = var_1_43;
 }
 unsigned long int stepLocal_3 = 32u;
 if (var_1_8 > stepLocal_3) {
  var_1_27 = (((((var_1_16 + var_1_15)) < ((var_1_17 - var_1_28))) ? ((var_1_16 + var_1_15)) : ((var_1_17 - var_1_28))));
 }
 signed char stepLocal_4 = var_1_24;
 if (stepLocal_4 > (-1 * (var_1_25 / var_1_20))) {
  var_1_29 = ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) - var_1_34);
 } else {
  if (var_1_17 >= var_1_15) {
   if (var_1_21) {
    var_1_29 = ((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26)));
   } else {
    var_1_29 = (var_1_32 - (var_1_33 + var_1_35));
   }
  }
 }
 signed char stepLocal_5 = var_1_33;
 if (var_1_25 <= stepLocal_5) {
  var_1_36 = ((var_1_37 + 18447) - var_1_31);
 } else {
  var_1_36 = (var_1_30 + var_1_34);
 }
 if (var_1_16 <= (var_1_14 / var_1_17)) {
  var_1_56 = var_1_47;
 } else {
  var_1_56 = (var_1_31 - ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))));
 }
 unsigned long int stepLocal_2 = (((-2) < (var_1_7)) ? (-2) : (var_1_7));
 if (var_1_13) {
  var_1_18 = ((((((((var_1_8 - var_1_53) < 0 ) ? -(var_1_8 - var_1_53) : (var_1_8 - var_1_53)))) > ((((((var_1_7 + var_1_6)) > (var_1_36)) ? ((var_1_7 + var_1_6)) : (var_1_36))))) ? (((((var_1_8 - var_1_53) < 0 ) ? -(var_1_8 - var_1_53) : (var_1_8 - var_1_53)))) : ((((((var_1_7 + var_1_6)) > (var_1_36)) ? ((var_1_7 + var_1_6)) : (var_1_36))))));
 } else {
  if (stepLocal_2 < var_1_43) {
   var_1_18 = var_1_6;
  } else {
   var_1_18 = var_1_8;
  }
 }
 if (var_1_44) {
  var_1_60 = var_1_53;
 } else {
  var_1_60 = var_1_52;
 }
 signed long int stepLocal_0 = var_1_55;
 if (stepLocal_0 < ((var_1_47 & var_1_6) / var_1_8)) {
  var_1_11 = (var_1_44 || (! var_1_13));
 }
 if (var_1_22) {
  var_1_23 = (((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) < 0 ) ? -((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) : ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25)))));
 } else {
  if ((((((var_1_20) > (var_1_43)) ? (var_1_20) : (var_1_43))) / ((((4) < 0 ) ? -(4) : (4)))) >= (200u & var_1_8)) {
   var_1_23 = ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)));
  } else {
   if (var_1_11 && (! var_1_13)) {
    if (var_1_20 <= (var_1_38 * var_1_38)) {
     var_1_23 = var_1_25;
    } else {
     var_1_23 = ((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)));
    }
   } else {
    if (var_1_44 || (var_1_8 < var_1_55)) {
     var_1_23 = var_1_26;
    }
   }
  }
 }
 unsigned long int stepLocal_6 = var_1_60 ^ (var_1_26 + var_1_52);
 if (var_1_44) {
  if (stepLocal_6 > var_1_35) {
   var_1_41 = var_1_17;
  } else {
   var_1_41 = (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_28);
  }
 }
 if (((var_1_43 % var_1_20) ^ 100) != (var_1_18 / var_1_8)) {
  var_1_19 = (var_1_21 && var_1_22);
 } else {
  var_1_19 = (! var_1_22);
 }
 if (var_1_19) {
  if (! (var_1_56 != var_1_60)) {
   var_1_1 = var_1_53;
  } else {
   var_1_1 = ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_53);
  }
 } else {
  if (var_1_51) {
   var_1_1 = ((((var_1_7) < (var_1_53)) ? (var_1_7) : (var_1_53)));
  } else {
   var_1_1 = var_1_7;
  }
 }
 if (((var_1_54 - var_1_30) >= -128) || var_1_19) {
  if (var_1_51) {
   var_1_58 = (var_1_8 - var_1_1);
  } else {
   var_1_58 = (var_1_6 + var_1_20);
  }
 } else {
  var_1_58 = var_1_33;
 }
 if (var_1_32 <= (var_1_24 / ((((var_1_31) < (var_1_20)) ? (var_1_31) : (var_1_20))))) {
  if ((var_1_43 * var_1_58) > var_1_25) {
   var_1_49 = (((var_1_50 + 16) + var_1_33) - var_1_30);
  } else {
   var_1_49 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
  }
 } else {
  var_1_49 = ((64 - var_1_35) - var_1_30);
 }
 unsigned long int stepLocal_19 = var_1_1;
 if ((- var_1_14) >= ((((2.2) < 0 ) ? -(2.2) : (2.2)))) {
  if (stepLocal_19 != (var_1_53 % var_1_8)) {
   var_1_61 = var_1_16;
  }
 } else {
  var_1_61 = var_1_28;
 }
}
void updateVariables() {
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741824);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 65535);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -126);
 assume_abort_if_not(var_1_24 <= 126);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -126);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -127);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 62);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 62);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 16383);
 assume_abort_if_not(var_1_37 <= 32767);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 16384);
 assume_abort_if_not(var_1_39 <= 32767);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 32);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 127);
 assume_abort_if_not(var_1_54 <= 254);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
}
int property() {
 return ((((((((((((((((((((((var_1_19 ? ((! (var_1_56 != var_1_60)) ? (var_1_1 == ((unsigned long int) var_1_53)) : (var_1_1 == ((unsigned long int) ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_53)))) : (var_1_51 ? (var_1_1 == ((unsigned long int) ((((var_1_7) < (var_1_53)) ? (var_1_7) : (var_1_53))))) : (var_1_1 == ((unsigned long int) var_1_7)))) && ((var_1_55 < ((var_1_47 & var_1_6) / var_1_8)) ? (var_1_11 == ((unsigned char) (var_1_44 || (! var_1_13)))) : 1)) && ((var_1_38 >= var_1_7) ? (var_1_14 == ((float) (50.25f - (var_1_15 + var_1_16)))) : (var_1_14 == ((float) ((var_1_17 - ((((63.875f) > (var_1_15)) ? (63.875f) : (var_1_15)))) - var_1_16))))) && (var_1_13 ? (var_1_18 == ((unsigned long int) ((((((((var_1_8 - var_1_53) < 0 ) ? -(var_1_8 - var_1_53) : (var_1_8 - var_1_53)))) > ((((((var_1_7 + var_1_6)) > (var_1_36)) ? ((var_1_7 + var_1_6)) : (var_1_36))))) ? (((((var_1_8 - var_1_53) < 0 ) ? -(var_1_8 - var_1_53) : (var_1_8 - var_1_53)))) : ((((((var_1_7 + var_1_6)) > (var_1_36)) ? ((var_1_7 + var_1_6)) : (var_1_36)))))))) : ((((((-2) < (var_1_7)) ? (-2) : (var_1_7))) < var_1_43) ? (var_1_18 == ((unsigned long int) var_1_6)) : (var_1_18 == ((unsigned long int) var_1_8))))) && ((((var_1_43 % var_1_20) ^ 100) != (var_1_18 / var_1_8)) ? (var_1_19 == ((unsigned char) (var_1_21 && var_1_22))) : (var_1_19 == ((unsigned char) (! var_1_22))))) && (var_1_22 ? (var_1_23 == ((signed char) (((((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) < 0 ) ? -((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))) : ((((var_1_24) < (var_1_25)) ? (var_1_24) : (var_1_25))))))) : (((((((var_1_20) > (var_1_43)) ? (var_1_20) : (var_1_43))) / ((((4) < 0 ) ? -(4) : (4)))) >= (200u & var_1_8)) ? (var_1_23 == ((signed char) ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) : ((var_1_11 && (! var_1_13)) ? ((var_1_20 <= (var_1_38 * var_1_38)) ? (var_1_23 == ((signed char) var_1_25)) : (var_1_23 == ((signed char) ((((var_1_26) < (var_1_24)) ? (var_1_26) : (var_1_24)))))) : ((var_1_44 || (var_1_8 < var_1_55)) ? (var_1_23 == ((signed char) var_1_26)) : 1))))) && ((var_1_8 > 32u) ? (var_1_27 == ((float) (((((var_1_16 + var_1_15)) < ((var_1_17 - var_1_28))) ? ((var_1_16 + var_1_15)) : ((var_1_17 - var_1_28)))))) : 1)) && ((var_1_24 > (-1 * (var_1_25 / var_1_20))) ? (var_1_29 == ((signed char) ((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31))) - ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))) - var_1_34))) : ((var_1_17 >= var_1_15) ? (var_1_21 ? (var_1_29 == ((signed char) ((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26))))) : (var_1_29 == ((signed char) (var_1_32 - (var_1_33 + var_1_35))))) : 1))) && ((var_1_25 <= var_1_33) ? (var_1_36 == ((unsigned short int) ((var_1_37 + 18447) - var_1_31))) : (var_1_36 == ((unsigned short int) (var_1_30 + var_1_34))))) && (((var_1_15 - var_1_28) > last_1_var_1_27) ? ((last_1_var_1_1 <= (last_1_var_1_53 + var_1_20)) ? (var_1_38 == ((unsigned short int) ((((((var_1_37 + var_1_39)) < (var_1_40)) ? ((var_1_37 + var_1_39)) : (var_1_40))) - var_1_34))) : (last_1_var_1_51 ? (var_1_38 == ((unsigned short int) (var_1_40 - var_1_32))) : (var_1_38 == ((unsigned short int) var_1_31)))) : (last_1_var_1_44 ? (var_1_38 == ((unsigned short int) ((((var_1_30) < (var_1_34)) ? (var_1_30) : (var_1_34))))) : 1))) && (var_1_44 ? (((var_1_60 ^ (var_1_26 + var_1_52)) > var_1_35) ? (var_1_41 == ((double) var_1_17)) : (var_1_41 == ((double) (((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16))) - var_1_28)))) : 1)) && (var_1_44 ? (var_1_43 == ((unsigned char) (var_1_32 + var_1_35))) : 1)) && ((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) >= var_1_37) ? (((~ var_1_31) < last_1_var_1_38) ? (var_1_13 ? (var_1_44 == ((unsigned char) (! var_1_22))) : (var_1_44 == ((unsigned char) (last_1_var_1_51 && var_1_45)))) : (var_1_44 == ((unsigned char) (! var_1_45)))) : ((last_1_var_1_51 && var_1_21) ? (((var_1_39 <= (- var_1_37)) && var_1_21) ? ((var_1_45 || var_1_22) ? (var_1_44 == ((unsigned char) (var_1_45 || var_1_46))) : 1) : (var_1_44 == ((unsigned char) (! var_1_45)))) : (var_1_44 == ((unsigned char) var_1_21))))) && ((last_1_var_1_58 <= last_1_var_1_36) ? (((var_1_31 % var_1_40) != var_1_30) ? ((last_1_var_1_49 < ((var_1_35 + var_1_37) % -2)) ? (var_1_47 == ((signed long int) ((((last_1_var_1_29) < 0 ) ? -(last_1_var_1_29) : (last_1_var_1_29))))) : (last_1_var_1_19 ? (var_1_47 == ((signed long int) last_1_var_1_36)) : 1)) : 1) : (last_1_var_1_11 ? (var_1_47 == ((signed long int) var_1_26)) : (((((((((var_1_33) < (last_1_var_1_53)) ? (var_1_33) : (last_1_var_1_53))) < 0 ) ? -((((var_1_33) < (last_1_var_1_53)) ? (var_1_33) : (last_1_var_1_53))) : ((((var_1_33) < (last_1_var_1_53)) ? (var_1_33) : (last_1_var_1_53))))) < var_1_6) ? (var_1_47 == ((signed long int) ((((-1) < (last_1_var_1_49)) ? (-1) : (last_1_var_1_49))))) : (var_1_47 == ((signed long int) ((((last_1_var_1_29) < (var_1_40)) ? (last_1_var_1_29) : (var_1_40))))))))) && ((var_1_32 <= (var_1_24 / ((((var_1_31) < (var_1_20)) ? (var_1_31) : (var_1_20))))) ? (((var_1_43 * var_1_58) > var_1_25) ? (var_1_49 == ((signed char) (((var_1_50 + 16) + var_1_33) - var_1_30))) : (var_1_49 == ((signed char) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) : (var_1_49 == ((signed char) ((64 - var_1_35) - var_1_30))))) && ((var_1_47 > var_1_37) ? (var_1_51 == ((unsigned char) (! var_1_21))) : 1)) && (((- (var_1_40 - var_1_32)) <= (var_1_31 - var_1_47)) ? (var_1_52 == ((unsigned char) ((var_1_32 + 2) + var_1_34))) : 1)) && ((var_1_17 >= last_1_var_1_14) ? (var_1_53 == ((unsigned char) var_1_33)) : (var_1_53 == ((unsigned char) (var_1_54 - var_1_50))))) && ((var_1_25 < ((((var_1_47) < (((((last_1_var_1_55) < (var_1_20)) ? (last_1_var_1_55) : (var_1_20))))) ? (var_1_47) : (((((last_1_var_1_55) < (var_1_20)) ? (last_1_var_1_55) : (var_1_20))))))) ? (var_1_55 == ((signed long int) var_1_43)) : (var_1_55 == ((signed long int) var_1_43)))) && ((var_1_16 <= (var_1_14 / var_1_17)) ? (var_1_56 == ((signed short int) var_1_47)) : (var_1_56 == ((signed short int) (var_1_31 - ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))))) && ((((var_1_54 - var_1_30) >= -128) || var_1_19) ? (var_1_51 ? (var_1_58 == ((unsigned long int) (var_1_8 - var_1_1))) : (var_1_58 == ((unsigned long int) (var_1_6 + var_1_20)))) : (var_1_58 == ((unsigned long int) var_1_33)))) && (var_1_44 ? (var_1_60 == ((unsigned long int) var_1_53)) : (var_1_60 == ((unsigned long int) var_1_52)))) && (((- var_1_14) >= ((((2.2) < 0 ) ? -(2.2) : (2.2)))) ? ((var_1_1 != (var_1_53 % var_1_8)) ? (var_1_61 == ((float) var_1_16)) : 1) : (var_1_61 == ((float) var_1_28)))
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
