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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 2;
unsigned char var_1_4 = 32;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 2;
signed long int var_1_8 = -10;
float var_1_9 = 99999999.4;
float var_1_11 = 9.5;
unsigned long int var_1_12 = 16;
unsigned long int var_1_14 = 1206892812;
float var_1_15 = 1.5;
float var_1_16 = 16.075;
float var_1_17 = 128.3;
float var_1_18 = 100.625;
float var_1_19 = 7.9;
unsigned char var_1_20 = 2;
unsigned char var_1_21 = 128;
unsigned long int var_1_22 = 2;
double var_1_23 = 31.8;
double var_1_24 = 1.4;
double var_1_25 = 16.75;
double var_1_26 = 0.0;
double var_1_27 = 2.6;
double var_1_28 = 7.7;
double var_1_29 = 127.5;
signed long int var_1_30 = 1;
signed char var_1_32 = -16;
signed char var_1_33 = -8;
signed char var_1_34 = 10;
unsigned short int var_1_35 = 5;
double var_1_36 = 64.4;
signed char var_1_37 = 4;
signed char var_1_38 = 1;
signed char var_1_39 = 5;
signed long int var_1_40 = -100000000;
float var_1_41 = 0.0;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 16;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 100;
unsigned char var_1_48 = 0;
signed long int var_1_49 = 5;
unsigned short int var_1_50 = 256;
unsigned short int var_1_51 = 18039;
unsigned short int var_1_52 = 22319;
unsigned short int var_1_53 = 34048;
signed long int var_1_54 = 128;
unsigned short int var_1_55 = 8;
unsigned short int var_1_56 = 10000;
double var_1_57 = 10.25;
signed long int var_1_58 = 256;
signed long int last_1_var_1_8 = -10;
unsigned long int last_1_var_1_22 = 2;
double last_1_var_1_25 = 16.75;
unsigned char last_1_var_1_42 = 1;
unsigned char last_1_var_1_48 = 0;
unsigned short int last_1_var_1_50 = 256;
signed long int last_1_var_1_54 = 128;
double last_1_var_1_57 = 10.25;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_4 = var_1_21;
 unsigned char stepLocal_3 = last_1_var_1_48;
 if (stepLocal_4 <= var_1_14) {
  if ((var_1_19 < last_1_var_1_57) || stepLocal_3) {
   var_1_30 = (var_1_5 + (((((last_1_var_1_50) > (-50)) ? (last_1_var_1_50) : (-50))) + var_1_4));
  }
 } else {
  if (last_1_var_1_48) {
   var_1_30 = 16;
  }
 }
 var_1_58 = var_1_30;
 if (last_1_var_1_42) {
  var_1_12 = ((((var_1_7) < ((var_1_5 + (var_1_14 - last_1_var_1_22)))) ? (var_1_7) : ((var_1_5 + (var_1_14 - last_1_var_1_22)))));
 } else {
  var_1_12 = ((((((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7)))) < (last_1_var_1_8)) ? (((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7)))) : (last_1_var_1_8)));
 }
 unsigned long int stepLocal_12 = var_1_12;
 if (var_1_33 == stepLocal_12) {
  var_1_55 = var_1_46;
 } else {
  var_1_55 = ((25 + (var_1_56 - var_1_47)) + 8);
 }
 if (last_1_var_1_42) {
  var_1_20 = (((((var_1_5 + var_1_6)) > (((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4))))));
 } else {
  var_1_20 = ((((100) < ((var_1_21 - var_1_6))) ? (100) : ((var_1_21 - var_1_6))));
 }
 signed long int stepLocal_0 = last_1_var_1_54;
 if (stepLocal_0 > ((var_1_7 & -32) | ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4))))) {
  var_1_8 = (var_1_7 + var_1_6);
 } else {
  if ((var_1_9 - ((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25)))) >= (0.75f - var_1_11)) {
   var_1_8 = (var_1_5 + 256);
  }
 }
 var_1_22 = (((((var_1_6 + var_1_14)) < (256u)) ? ((var_1_6 + var_1_14)) : (256u)));
 var_1_35 = var_1_22;
 var_1_57 = var_1_16;
 signed long int stepLocal_6 = var_1_58;
 unsigned char stepLocal_5 = var_1_4;
 if (stepLocal_5 == var_1_14) {
  if (var_1_8 > stepLocal_6) {
   var_1_32 = ((var_1_33 + -10) + ((((var_1_6) < (var_1_34)) ? (var_1_6) : (var_1_34))));
  }
 } else {
  var_1_32 = ((((var_1_33 + var_1_34) < 0 ) ? -(var_1_33 + var_1_34) : (var_1_33 + var_1_34)));
 }
 signed char stepLocal_11 = var_1_32;
 if (var_1_8 != stepLocal_11) {
  var_1_54 = ((var_1_39 + var_1_55) + var_1_38);
 } else {
  var_1_54 = -256;
 }
 unsigned char stepLocal_10 = var_1_20;
 if ((((((var_1_47) < (var_1_20)) ? (var_1_47) : (var_1_20))) - (var_1_4 + var_1_5)) <= stepLocal_10) {
  var_1_49 = (((var_1_8 - var_1_47) + (var_1_4 - var_1_20)) + (((((var_1_6 - var_1_5)) < (var_1_32)) ? ((var_1_6 - var_1_5)) : (var_1_32))));
 } else {
  var_1_49 = var_1_47;
 }
 if (var_1_7 > var_1_20) {
  if (var_1_11 != ((var_1_41 - var_1_24) - (4.25f + var_1_28))) {
   var_1_40 = (((((var_1_7 + var_1_34)) > ((2 - var_1_20))) ? ((var_1_7 + var_1_34)) : ((2 - var_1_20))));
  }
 } else {
  var_1_40 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
 }
 unsigned long int stepLocal_1 = var_1_14;
 if (stepLocal_1 > (var_1_22 + var_1_49)) {
  var_1_15 = var_1_16;
 } else {
  var_1_15 = ((((((((4.4f - var_1_17) < 0 ) ? -(4.4f - var_1_17) : (4.4f - var_1_17)))) > ((((((var_1_18 - var_1_19)) < (24.8f)) ? ((var_1_18 - var_1_19)) : (24.8f))))) ? (((((4.4f - var_1_17) < 0 ) ? -(4.4f - var_1_17) : (4.4f - var_1_17)))) : ((((((var_1_18 - var_1_19)) < (24.8f)) ? ((var_1_18 - var_1_19)) : (24.8f))))));
 }
 signed char stepLocal_7 = var_1_33;
 if (stepLocal_7 < (var_1_22 + var_1_54)) {
  if (var_1_28 > var_1_16) {
   if (var_1_43) {
    if (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) <= (- var_1_18)) {
     var_1_45 = var_1_4;
    }
   } else {
    var_1_45 = ((((var_1_21) < (var_1_6)) ? (var_1_21) : (var_1_6)));
   }
  } else {
   var_1_45 = ((((var_1_21) < ((var_1_46 - var_1_5))) ? (var_1_21) : ((var_1_46 - var_1_5))));
  }
 } else {
  var_1_45 = ((((((var_1_5 + var_1_47) - var_1_6)) > (var_1_7)) ? (((var_1_5 + var_1_47) - var_1_6)) : (var_1_7)));
 }
 if (! (var_1_24 >= var_1_26)) {
  var_1_36 = (var_1_29 + var_1_27);
 } else {
  if (var_1_33 > var_1_54) {
   var_1_36 = ((((((((var_1_26) < (var_1_17)) ? (var_1_26) : (var_1_17)))) < (var_1_29)) ? (((((var_1_26) < (var_1_17)) ? (var_1_26) : (var_1_17)))) : (var_1_29)));
  } else {
   var_1_36 = 16.85;
  }
 }
 if (var_1_43) {
  var_1_50 = ((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) + var_1_52) - ((((var_1_49) > (var_1_47)) ? (var_1_49) : (var_1_47))));
 } else {
  if (var_1_30 > ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) {
   var_1_50 = (((((25) > (var_1_7)) ? (25) : (var_1_7))) + var_1_40);
  } else {
   var_1_50 = (((((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) - var_1_47)) > (var_1_40)) ? ((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) - var_1_47)) : (var_1_40)));
  }
 }
 unsigned long int stepLocal_2 = (((var_1_55) < ((var_1_22 + 5))) ? (var_1_55) : ((var_1_22 + 5)));
 if (var_1_57 > (- var_1_36)) {
  if ((var_1_16 * var_1_36) <= var_1_9) {
   var_1_25 = ((((var_1_18) > (var_1_16)) ? (var_1_18) : (var_1_16)));
  } else {
   var_1_25 = ((((((var_1_26 - var_1_24) - var_1_18)) < (var_1_19)) ? (((var_1_26 - var_1_24) - var_1_18)) : (var_1_19)));
  }
 } else {
  if (var_1_9 != var_1_36) {
   if (var_1_7 <= stepLocal_2) {
    var_1_25 = (var_1_26 - var_1_18);
   }
  } else {
   var_1_25 = (((((var_1_24) > ((var_1_27 - var_1_28))) ? (var_1_24) : ((var_1_27 - var_1_28)))) + var_1_29);
  }
 }
 if ((- var_1_50) < var_1_8) {
  var_1_1 = (((((var_1_4 + (var_1_5 - var_1_6))) < (var_1_7)) ? ((var_1_4 + (var_1_5 - var_1_6))) : (var_1_7)));
 } else {
  var_1_1 = ((((((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) > (var_1_6)) ? (((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) : (var_1_6)));
 }
 unsigned long int stepLocal_9 = var_1_14;
 unsigned short int stepLocal_8 = var_1_35;
 if (var_1_36 < var_1_18) {
  var_1_48 = (var_1_44 || var_1_43);
 } else {
  if (stepLocal_8 <= var_1_22) {
   if (var_1_9 <= var_1_18) {
    var_1_48 = var_1_44;
   } else {
    var_1_48 = 0;
   }
  } else {
   if (16u < stepLocal_9) {
    var_1_48 = ((var_1_7 >= var_1_20) && (var_1_44 || (last_1_var_1_48 && var_1_43)));
   }
  }
 }
 if (var_1_39 < var_1_38) {
  var_1_42 = ((var_1_48 && var_1_43) || var_1_44);
 } else {
  var_1_42 = (var_1_43 && var_1_44);
 }
 if (var_1_15 >= var_1_18) {
  if (var_1_5 < (((((var_1_21 - var_1_4)) < (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12))))) ? ((var_1_21 - var_1_4)) : (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12))))))) {
   if (var_1_16 < ((var_1_17 + var_1_19) + (var_1_18 / 4.8f))) {
    var_1_23 = ((((((25.25 + var_1_24) - var_1_18)) < (var_1_16)) ? (((25.25 + var_1_24) - var_1_18)) : (var_1_16)));
   } else {
    if (var_1_48 && (var_1_30 < var_1_5)) {
     var_1_23 = var_1_19;
    } else {
     if (var_1_18 >= var_1_19) {
      var_1_23 = ((((var_1_19) > (var_1_18)) ? (var_1_19) : (var_1_18)));
     }
    }
   }
  }
 } else {
  var_1_23 = var_1_16;
 }
 if (var_1_42) {
  if (var_1_28 >= var_1_17) {
   var_1_37 = (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) + ((((((((0) > (var_1_6)) ? (0) : (var_1_6)))) < (var_1_34)) ? (((((0) > (var_1_6)) ? (0) : (var_1_6)))) : (var_1_34))));
  }
 } else {
  var_1_37 = ((var_1_33 + (var_1_38 + var_1_39)) + var_1_6);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1073741823);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 4611686.018427383000e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -461168.6018427383000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -31);
 assume_abort_if_not(var_1_33 <= 32);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -63);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -15);
 assume_abort_if_not(var_1_38 <= 16);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -15);
 assume_abort_if_not(var_1_39 <= 15);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 4611686.018427388000e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 64);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 16383);
 assume_abort_if_not(var_1_51 <= 32767);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 16384);
 assume_abort_if_not(var_1_52 <= 32767);
 var_1_53 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_53 >= 32767);
 assume_abort_if_not(var_1_53 <= 65534);
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 8191);
 assume_abort_if_not(var_1_56 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_57 = var_1_57;
}
int property(void) {
 return ((((((((((((((((((((((((- var_1_50) < var_1_8) ? (var_1_1 == ((unsigned char) (((((var_1_4 + (var_1_5 - var_1_6))) < (var_1_7)) ? ((var_1_4 + (var_1_5 - var_1_6))) : (var_1_7))))) : (var_1_1 == ((unsigned char) ((((((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) > (var_1_6)) ? (((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (var_1_4)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_4)))) : (var_1_6)))))) && ((last_1_var_1_54 > ((var_1_7 & -32) | ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4))))) ? (var_1_8 == ((signed long int) (var_1_7 + var_1_6))) : (((var_1_9 - ((((last_1_var_1_25) < 0 ) ? -(last_1_var_1_25) : (last_1_var_1_25)))) >= (0.75f - var_1_11)) ? (var_1_8 == ((signed long int) (var_1_5 + 256))) : 1))) && (last_1_var_1_42 ? (var_1_12 == ((unsigned long int) ((((var_1_7) < ((var_1_5 + (var_1_14 - last_1_var_1_22)))) ? (var_1_7) : ((var_1_5 + (var_1_14 - last_1_var_1_22))))))) : (var_1_12 == ((unsigned long int) ((((((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7)))) < (last_1_var_1_8)) ? (((((var_1_4) > (var_1_7)) ? (var_1_4) : (var_1_7)))) : (last_1_var_1_8))))))) && ((var_1_14 > (var_1_22 + var_1_49)) ? (var_1_15 == ((float) var_1_16)) : (var_1_15 == ((float) ((((((((4.4f - var_1_17) < 0 ) ? -(4.4f - var_1_17) : (4.4f - var_1_17)))) > ((((((var_1_18 - var_1_19)) < (24.8f)) ? ((var_1_18 - var_1_19)) : (24.8f))))) ? (((((4.4f - var_1_17) < 0 ) ? -(4.4f - var_1_17) : (4.4f - var_1_17)))) : ((((((var_1_18 - var_1_19)) < (24.8f)) ? ((var_1_18 - var_1_19)) : (24.8f)))))))))) && (last_1_var_1_42 ? (var_1_20 == ((unsigned char) (((((var_1_5 + var_1_6)) > (((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4))))) ? ((var_1_5 + var_1_6)) : (((((var_1_7) < (var_1_4)) ? (var_1_7) : (var_1_4)))))))) : (var_1_20 == ((unsigned char) ((((100) < ((var_1_21 - var_1_6))) ? (100) : ((var_1_21 - var_1_6)))))))) && (var_1_22 == ((unsigned long int) (((((var_1_6 + var_1_14)) < (256u)) ? ((var_1_6 + var_1_14)) : (256u)))))) && ((var_1_15 >= var_1_18) ? ((var_1_5 < (((((var_1_21 - var_1_4)) < (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12))))) ? ((var_1_21 - var_1_4)) : (((((var_1_14) < (var_1_12)) ? (var_1_14) : (var_1_12))))))) ? ((var_1_16 < ((var_1_17 + var_1_19) + (var_1_18 / 4.8f))) ? (var_1_23 == ((double) ((((((25.25 + var_1_24) - var_1_18)) < (var_1_16)) ? (((25.25 + var_1_24) - var_1_18)) : (var_1_16))))) : ((var_1_48 && (var_1_30 < var_1_5)) ? (var_1_23 == ((double) var_1_19)) : ((var_1_18 >= var_1_19) ? (var_1_23 == ((double) ((((var_1_19) > (var_1_18)) ? (var_1_19) : (var_1_18))))) : 1))) : 1) : (var_1_23 == ((double) var_1_16)))) && ((var_1_57 > (- var_1_36)) ? (((var_1_16 * var_1_36) <= var_1_9) ? (var_1_25 == ((double) ((((var_1_18) > (var_1_16)) ? (var_1_18) : (var_1_16))))) : (var_1_25 == ((double) ((((((var_1_26 - var_1_24) - var_1_18)) < (var_1_19)) ? (((var_1_26 - var_1_24) - var_1_18)) : (var_1_19)))))) : ((var_1_9 != var_1_36) ? ((var_1_7 <= ((((var_1_55) < ((var_1_22 + 5))) ? (var_1_55) : ((var_1_22 + 5))))) ? (var_1_25 == ((double) (var_1_26 - var_1_18))) : 1) : (var_1_25 == ((double) (((((var_1_24) > ((var_1_27 - var_1_28))) ? (var_1_24) : ((var_1_27 - var_1_28)))) + var_1_29)))))) && ((var_1_21 <= var_1_14) ? (((var_1_19 < last_1_var_1_57) || last_1_var_1_48) ? (var_1_30 == ((signed long int) (var_1_5 + (((((last_1_var_1_50) > (-50)) ? (last_1_var_1_50) : (-50))) + var_1_4)))) : 1) : (last_1_var_1_48 ? (var_1_30 == ((signed long int) 16)) : 1))) && ((var_1_4 == var_1_14) ? ((var_1_8 > var_1_58) ? (var_1_32 == ((signed char) ((var_1_33 + -10) + ((((var_1_6) < (var_1_34)) ? (var_1_6) : (var_1_34)))))) : 1) : (var_1_32 == ((signed char) ((((var_1_33 + var_1_34) < 0 ) ? -(var_1_33 + var_1_34) : (var_1_33 + var_1_34))))))) && (var_1_35 == ((unsigned short int) var_1_22))) && ((! (var_1_24 >= var_1_26)) ? (var_1_36 == ((double) (var_1_29 + var_1_27))) : ((var_1_33 > var_1_54) ? (var_1_36 == ((double) ((((((((var_1_26) < (var_1_17)) ? (var_1_26) : (var_1_17)))) < (var_1_29)) ? (((((var_1_26) < (var_1_17)) ? (var_1_26) : (var_1_17)))) : (var_1_29))))) : (var_1_36 == ((double) 16.85))))) && (var_1_42 ? ((var_1_28 >= var_1_17) ? (var_1_37 == ((signed char) (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) + ((((((((0) > (var_1_6)) ? (0) : (var_1_6)))) < (var_1_34)) ? (((((0) > (var_1_6)) ? (0) : (var_1_6)))) : (var_1_34)))))) : 1) : (var_1_37 == ((signed char) ((var_1_33 + (var_1_38 + var_1_39)) + var_1_6))))) && ((var_1_7 > var_1_20) ? ((var_1_11 != ((var_1_41 - var_1_24) - (4.25f + var_1_28))) ? (var_1_40 == ((signed long int) (((((var_1_7 + var_1_34)) > ((2 - var_1_20))) ? ((var_1_7 + var_1_34)) : ((2 - var_1_20)))))) : 1) : (var_1_40 == ((signed long int) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) && ((var_1_39 < var_1_38) ? (var_1_42 == ((unsigned char) ((var_1_48 && var_1_43) || var_1_44))) : (var_1_42 == ((unsigned char) (var_1_43 && var_1_44))))) && ((var_1_33 < (var_1_22 + var_1_54)) ? ((var_1_28 > var_1_16) ? (var_1_43 ? ((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) <= (- var_1_18)) ? (var_1_45 == ((unsigned char) var_1_4)) : 1) : (var_1_45 == ((unsigned char) ((((var_1_21) < (var_1_6)) ? (var_1_21) : (var_1_6)))))) : (var_1_45 == ((unsigned char) ((((var_1_21) < ((var_1_46 - var_1_5))) ? (var_1_21) : ((var_1_46 - var_1_5))))))) : (var_1_45 == ((unsigned char) ((((((var_1_5 + var_1_47) - var_1_6)) > (var_1_7)) ? (((var_1_5 + var_1_47) - var_1_6)) : (var_1_7))))))) && ((var_1_36 < var_1_18) ? (var_1_48 == ((unsigned char) (var_1_44 || var_1_43))) : ((var_1_35 <= var_1_22) ? ((var_1_9 <= var_1_18) ? (var_1_48 == ((unsigned char) var_1_44)) : (var_1_48 == ((unsigned char) 0))) : ((16u < var_1_14) ? (var_1_48 == ((unsigned char) ((var_1_7 >= var_1_20) && (var_1_44 || (last_1_var_1_48 && var_1_43))))) : 1)))) && (((((((var_1_47) < (var_1_20)) ? (var_1_47) : (var_1_20))) - (var_1_4 + var_1_5)) <= var_1_20) ? (var_1_49 == ((signed long int) (((var_1_8 - var_1_47) + (var_1_4 - var_1_20)) + (((((var_1_6 - var_1_5)) < (var_1_32)) ? ((var_1_6 - var_1_5)) : (var_1_32)))))) : (var_1_49 == ((signed long int) var_1_47)))) && (var_1_43 ? (var_1_50 == ((unsigned short int) ((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) + var_1_52) - ((((var_1_49) > (var_1_47)) ? (var_1_49) : (var_1_47)))))) : ((var_1_30 > ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) ? (var_1_50 == ((unsigned short int) (((((25) > (var_1_7)) ? (25) : (var_1_7))) + var_1_40))) : (var_1_50 == ((unsigned short int) (((((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) - var_1_47)) > (var_1_40)) ? ((((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))) - var_1_47)) : (var_1_40)))))))) && ((var_1_8 != var_1_32) ? (var_1_54 == ((signed long int) ((var_1_39 + var_1_55) + var_1_38))) : (var_1_54 == ((signed long int) -256)))) && ((var_1_33 == var_1_12) ? (var_1_55 == ((unsigned short int) var_1_46)) : (var_1_55 == ((unsigned short int) ((25 + (var_1_56 - var_1_47)) + 8))))) && (var_1_57 == ((double) var_1_16))) && (var_1_58 == ((signed long int) var_1_30))
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
