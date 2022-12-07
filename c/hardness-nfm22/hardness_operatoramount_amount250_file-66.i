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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 64;
unsigned short int var_1_5 = 63575;
unsigned long int var_1_6 = 10;
unsigned long int var_1_8 = 4065487788;
float var_1_9 = 99999999.5;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 5;
float var_1_13 = 4.25;
signed char var_1_14 = -32;
signed char var_1_15 = 10;
signed char var_1_16 = 64;
signed char var_1_17 = 2;
unsigned long int var_1_18 = 8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 64;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
signed short int var_1_25 = 32;
unsigned char var_1_26 = 128;
signed char var_1_27 = 50;
unsigned short int var_1_28 = 16;
unsigned short int var_1_29 = 10000;
unsigned char var_1_30 = 50;
unsigned char var_1_31 = 200;
double var_1_32 = 31.5;
float var_1_33 = 200.5;
double var_1_34 = 0.25;
double var_1_35 = 2.5;
double var_1_36 = 64.8;
double var_1_37 = 0.0;
double var_1_38 = 2.25;
double var_1_40 = 255.4;
signed char var_1_41 = -4;
signed char var_1_43 = -4;
signed char var_1_44 = -2;
signed char var_1_45 = -32;
signed long int var_1_46 = -128;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
float var_1_49 = 200.1;
float var_1_51 = 10.75;
double var_1_52 = 24.5;
double var_1_54 = 9.4;
double var_1_55 = 4.875;
unsigned short int var_1_56 = 64;
unsigned char var_1_57 = 16;
signed char var_1_58 = -16;
signed char var_1_60 = -1;
float last_1_var_1_9 = 99999999.5;
unsigned long int last_1_var_1_18 = 8;
unsigned char last_1_var_1_20 = 1;
signed short int last_1_var_1_25 = 32;
double last_1_var_1_32 = 31.5;
signed long int last_1_var_1_46 = -128;
unsigned char last_1_var_1_47 = 0;
double last_1_var_1_52 = 24.5;
signed char last_1_var_1_60 = -1;
void initially(void) {
}
void step(void) {
 if (((- var_1_12) == last_1_var_1_60) && (last_1_var_1_18 < last_1_var_1_20)) {
  var_1_14 = (2 - var_1_15);
 } else {
  if (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) < var_1_5) {
   var_1_14 = ((((((var_1_16 - var_1_17) - var_1_15)) > (16)) ? (((var_1_16 - var_1_17) - var_1_15)) : (16)));
  }
 }
 if (var_1_13 < (last_1_var_1_32 + (- last_1_var_1_52))) {
  var_1_23 = (var_1_24 + var_1_15);
 } else {
  if (! last_1_var_1_47) {
   var_1_23 = (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + (var_1_21 - var_1_17));
  }
 }
 signed long int stepLocal_5 = var_1_26 - var_1_21;
 if (var_1_14 < stepLocal_5) {
  var_1_28 = (var_1_14 + (var_1_21 + (var_1_29 - var_1_15)));
 }
 if (last_1_var_1_32 <= (var_1_40 + last_1_var_1_9)) {
  var_1_47 = var_1_48;
 } else {
  var_1_47 = var_1_48;
 }
 unsigned char stepLocal_3 = var_1_47;
 if (stepLocal_3 || var_1_47) {
  var_1_20 = ((var_1_21 + var_1_22) - var_1_15);
 }
 signed long int stepLocal_4 = - ((((25) > (var_1_17)) ? (25) : (var_1_17)));
 if (var_1_20 != stepLocal_4) {
  var_1_27 = ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17)));
 } else {
  var_1_27 = var_1_17;
 }
 unsigned short int stepLocal_15 = var_1_5;
 signed long int stepLocal_14 = (~ var_1_26) * var_1_31;
 if (stepLocal_14 < ((var_1_5 * var_1_21) | 1)) {
  var_1_46 = ((((var_1_12 - var_1_23) < 0 ) ? -(var_1_12 - var_1_23) : (var_1_12 - var_1_23)));
 } else {
  if (last_1_var_1_46 == stepLocal_15) {
   var_1_46 = ((((((((500) < (var_1_29)) ? (500) : (var_1_29)))) > ((var_1_17 + var_1_14))) ? (((((500) < (var_1_29)) ? (500) : (var_1_29)))) : ((var_1_17 + var_1_14))));
  }
 }
 if (var_1_47) {
  var_1_56 = var_1_5;
 }
 if (var_1_48) {
  var_1_57 = var_1_31;
 } else {
  var_1_57 = var_1_31;
 }
 if (2.8 > var_1_40) {
  if (var_1_16 <= var_1_27) {
   var_1_58 = (16 - var_1_16);
  }
 }
 unsigned char stepLocal_21 = var_1_57;
 if (stepLocal_21 == ((var_1_26 * var_1_45) / var_1_21)) {
  var_1_60 = var_1_16;
 }
 if (var_1_23 >= var_1_14) {
  if (var_1_47) {
   var_1_1 = (var_1_5 - var_1_23);
  }
 }
 unsigned long int stepLocal_2 = (var_1_8 * var_1_20) * -4;
 signed long int stepLocal_1 = var_1_20 % (var_1_11 + var_1_12);
 signed long int stepLocal_0 = (((5 - var_1_20) < 0 ) ? -(5 - var_1_20) : (5 - var_1_20));
 if (stepLocal_0 != (((((-10000) > (var_1_28)) ? (-10000) : (var_1_28))) * var_1_8)) {
  if (stepLocal_2 < var_1_28) {
   if (var_1_28 < stepLocal_1) {
    if (! var_1_47) {
     var_1_9 = var_1_13;
    }
   } else {
    var_1_9 = var_1_13;
   }
  } else {
   var_1_9 = var_1_13;
  }
 } else {
  var_1_9 = var_1_13;
 }
 if (var_1_16 <= last_1_var_1_25) {
  var_1_25 = (var_1_15 + var_1_60);
 }
 signed long int stepLocal_16 = var_1_24 & var_1_27;
 if (stepLocal_16 <= var_1_58) {
  if (! (var_1_47 && var_1_47)) {
   var_1_49 = ((((((var_1_37 - var_1_35) - 2.5f)) > ((var_1_40 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) ? (((var_1_37 - var_1_35) - 2.5f)) : ((var_1_40 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))));
  } else {
   var_1_49 = ((((var_1_13) < ((var_1_35 + ((((var_1_40) < (var_1_51)) ? (var_1_40) : (var_1_51)))))) ? (var_1_13) : ((var_1_35 + ((((var_1_40) < (var_1_51)) ? (var_1_40) : (var_1_51)))))));
  }
 }
 if (! var_1_47) {
  var_1_18 = ((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) < (var_1_16)) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : (var_1_16)));
 } else {
  var_1_18 = (var_1_57 + var_1_1);
 }
 signed long int stepLocal_8 = - var_1_60;
 signed long int stepLocal_7 = var_1_5 - var_1_12;
 if (stepLocal_7 < var_1_28) {
  if ((var_1_9 / var_1_33) != var_1_13) {
   var_1_32 = (var_1_34 - (((((255.2 + var_1_35)) < (var_1_36)) ? ((255.2 + var_1_35)) : (var_1_36))));
  } else {
   if (var_1_47) {
    var_1_32 = ((((((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))));
   } else {
    var_1_32 = ((var_1_37 - var_1_35) - var_1_36);
   }
  }
 } else {
  if (! var_1_47) {
   if (var_1_5 >= stepLocal_8) {
    var_1_32 = ((((((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) < (var_1_13)) ? (((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) : (var_1_13)));
   } else {
    var_1_32 = (var_1_36 - var_1_34);
   }
  }
 }
 if ((var_1_32 * 8.2) < 10.4) {
  var_1_6 = ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_23) - ((((var_1_18) < (var_1_5)) ? (var_1_18) : (var_1_5))));
 } else {
  var_1_6 = ((((var_1_5 + var_1_18) < 0 ) ? -(var_1_5 + var_1_18) : (var_1_5 + var_1_18)));
 }
 unsigned char stepLocal_6 = var_1_26;
 if (var_1_6 != stepLocal_6) {
  var_1_30 = ((var_1_31 - 10) - var_1_16);
 } else {
  var_1_30 = ((((var_1_31 - var_1_24) < 0 ) ? -(var_1_31 - var_1_24) : (var_1_31 - var_1_24)));
 }
 unsigned char stepLocal_9 = var_1_11;
 if (stepLocal_9 > (var_1_6 * var_1_6)) {
  var_1_38 = (((((var_1_35 + var_1_40) < 0 ) ? -(var_1_35 + var_1_40) : (var_1_35 + var_1_40))) - var_1_36);
 } else {
  var_1_38 = var_1_34;
 }
 unsigned char stepLocal_20 = var_1_31;
 unsigned long int stepLocal_19 = var_1_8 - var_1_29;
 unsigned long int stepLocal_18 = var_1_6;
 unsigned char stepLocal_17 = var_1_47;
 if (stepLocal_20 >= var_1_15) {
  if (var_1_30 < stepLocal_18) {
   var_1_52 = (var_1_36 - var_1_35);
  } else {
   if (! var_1_47) {
    var_1_52 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
   } else {
    var_1_52 = (((((var_1_34 - var_1_37)) < (((var_1_54 + var_1_55) + var_1_35))) ? ((var_1_34 - var_1_37)) : (((var_1_54 + var_1_55) + var_1_35))));
   }
  }
 } else {
  if (stepLocal_17 && (2.05f <= var_1_36)) {
   if (var_1_38 < (var_1_37 - var_1_36)) {
    if (((var_1_23 >> var_1_6) / var_1_31) > stepLocal_19) {
     var_1_52 = var_1_35;
    }
   }
  } else {
   var_1_52 = (var_1_36 - (var_1_37 - var_1_35));
  }
 }
 if ((var_1_30 > var_1_46) && ((var_1_31 <= var_1_29) || var_1_47)) {
  var_1_41 = ((((var_1_17) > (((((var_1_16) < (-16)) ? (var_1_16) : (-16))))) ? (var_1_17) : (((((var_1_16) < (-16)) ? (var_1_16) : (-16))))));
 }
 signed long int stepLocal_13 = var_1_12 & var_1_11;
 signed char stepLocal_12 = var_1_16;
 unsigned char stepLocal_11 = var_1_33 > var_1_38;
 unsigned long int stepLocal_10 = var_1_8;
 if ((var_1_11 >= ((((var_1_15) > (var_1_29)) ? (var_1_15) : (var_1_29)))) || stepLocal_11) {
  var_1_43 = (((((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) > (var_1_31)) ? ((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) : (var_1_31)));
 } else {
  if (((((0) > (var_1_57)) ? (0) : (var_1_57))) < stepLocal_12) {
   var_1_43 = (((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))));
  } else {
   if ((var_1_11 | 25) == stepLocal_10) {
    if (stepLocal_13 == (var_1_56 * var_1_17)) {
     var_1_43 = (var_1_16 - var_1_17);
    }
   }
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 3221225470);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 128);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 62);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 63);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 64);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 255);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 8191);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 190);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 assume_abort_if_not(var_1_33 != 0.0F);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 4611686.018427382800e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -63);
 assume_abort_if_not(var_1_44 <= 63);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -63);
 assume_abort_if_not(var_1_45 <= 63);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -461168.6018427382800e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= -230584.3009213691390e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_60 = var_1_60;
}
int property() {
 return (((((((((((((((((((((((var_1_23 >= var_1_14) ? (var_1_47 ? (var_1_1 == ((unsigned short int) (var_1_5 - var_1_23))) : 1) : 1) && (((var_1_32 * 8.2) < 10.4) ? (var_1_6 == ((unsigned long int) ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) - var_1_23) - ((((var_1_18) < (var_1_5)) ? (var_1_18) : (var_1_5)))))) : (var_1_6 == ((unsigned long int) ((((var_1_5 + var_1_18) < 0 ) ? -(var_1_5 + var_1_18) : (var_1_5 + var_1_18))))))) && ((((((5 - var_1_20) < 0 ) ? -(5 - var_1_20) : (5 - var_1_20))) != (((((-10000) > (var_1_28)) ? (-10000) : (var_1_28))) * var_1_8)) ? ((((var_1_8 * var_1_20) * -4) < var_1_28) ? ((var_1_28 < (var_1_20 % (var_1_11 + var_1_12))) ? ((! var_1_47) ? (var_1_9 == ((float) var_1_13)) : 1) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_13))) : (var_1_9 == ((float) var_1_13)))) && ((((- var_1_12) == last_1_var_1_60) && (last_1_var_1_18 < last_1_var_1_20)) ? (var_1_14 == ((signed char) (2 - var_1_15))) : ((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) < var_1_5) ? (var_1_14 == ((signed char) ((((((var_1_16 - var_1_17) - var_1_15)) > (16)) ? (((var_1_16 - var_1_17) - var_1_15)) : (16))))) : 1))) && ((! var_1_47) ? (var_1_18 == ((unsigned long int) ((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) < (var_1_16)) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : (var_1_16))))) : (var_1_18 == ((unsigned long int) (var_1_57 + var_1_1))))) && ((var_1_47 || var_1_47) ? (var_1_20 == ((unsigned char) ((var_1_21 + var_1_22) - var_1_15))) : 1)) && ((var_1_13 < (last_1_var_1_32 + (- last_1_var_1_52))) ? (var_1_23 == ((unsigned char) (var_1_24 + var_1_15))) : ((! last_1_var_1_47) ? (var_1_23 == ((unsigned char) (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + (var_1_21 - var_1_17)))) : 1))) && ((var_1_16 <= last_1_var_1_25) ? (var_1_25 == ((signed short int) (var_1_15 + var_1_60))) : 1)) && ((var_1_20 != (- ((((25) > (var_1_17)) ? (25) : (var_1_17))))) ? (var_1_27 == ((signed char) ((((var_1_15) < (var_1_17)) ? (var_1_15) : (var_1_17))))) : (var_1_27 == ((signed char) var_1_17)))) && ((var_1_14 < (var_1_26 - var_1_21)) ? (var_1_28 == ((unsigned short int) (var_1_14 + (var_1_21 + (var_1_29 - var_1_15))))) : 1)) && ((var_1_6 != var_1_26) ? (var_1_30 == ((unsigned char) ((var_1_31 - 10) - var_1_16))) : (var_1_30 == ((unsigned char) ((((var_1_31 - var_1_24) < 0 ) ? -(var_1_31 - var_1_24) : (var_1_31 - var_1_24))))))) && (((var_1_5 - var_1_12) < var_1_28) ? (((var_1_9 / var_1_33) != var_1_13) ? (var_1_32 == ((double) (var_1_34 - (((((255.2 + var_1_35)) < (var_1_36)) ? ((255.2 + var_1_35)) : (var_1_36)))))) : (var_1_47 ? (var_1_32 == ((double) ((((((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) < (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))))) ? (((((((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) < (var_1_13)) ? (((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36)))) : (var_1_13)))) : (((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))))) : (var_1_32 == ((double) ((var_1_37 - var_1_35) - var_1_36))))) : ((! var_1_47) ? ((var_1_5 >= (- var_1_60)) ? (var_1_32 == ((double) ((((((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) < (var_1_13)) ? (((((var_1_34) < (var_1_36)) ? (var_1_34) : (var_1_36)))) : (var_1_13))))) : (var_1_32 == ((double) (var_1_36 - var_1_34)))) : 1))) && ((var_1_11 > (var_1_6 * var_1_6)) ? (var_1_38 == ((double) (((((var_1_35 + var_1_40) < 0 ) ? -(var_1_35 + var_1_40) : (var_1_35 + var_1_40))) - var_1_36))) : (var_1_38 == ((double) var_1_34)))) && (((var_1_30 > var_1_46) && ((var_1_31 <= var_1_29) || var_1_47)) ? (var_1_41 == ((signed char) ((((var_1_17) > (((((var_1_16) < (-16)) ? (var_1_16) : (-16))))) ? (var_1_17) : (((((var_1_16) < (-16)) ? (var_1_16) : (-16)))))))) : 1)) && (((var_1_11 >= ((((var_1_15) > (var_1_29)) ? (var_1_15) : (var_1_29)))) || (var_1_33 > var_1_38)) ? (var_1_43 == ((signed char) (((((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) > (var_1_31)) ? ((var_1_17 + ((((var_1_44) > (var_1_45)) ? (var_1_44) : (var_1_45))))) : (var_1_31))))) : ((((((0) > (var_1_57)) ? (0) : (var_1_57))) < var_1_16) ? (var_1_43 == ((signed char) (((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < 0 ) ? -((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) : ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))))) : (((var_1_11 | 25) == var_1_8) ? (((var_1_12 & var_1_11) == (var_1_56 * var_1_17)) ? (var_1_43 == ((signed char) (var_1_16 - var_1_17))) : 1) : 1)))) && ((((~ var_1_26) * var_1_31) < ((var_1_5 * var_1_21) | 1)) ? (var_1_46 == ((signed long int) ((((var_1_12 - var_1_23) < 0 ) ? -(var_1_12 - var_1_23) : (var_1_12 - var_1_23))))) : ((last_1_var_1_46 == var_1_5) ? (var_1_46 == ((signed long int) ((((((((500) < (var_1_29)) ? (500) : (var_1_29)))) > ((var_1_17 + var_1_14))) ? (((((500) < (var_1_29)) ? (500) : (var_1_29)))) : ((var_1_17 + var_1_14)))))) : 1))) && ((last_1_var_1_32 <= (var_1_40 + last_1_var_1_9)) ? (var_1_47 == ((unsigned char) var_1_48)) : (var_1_47 == ((unsigned char) var_1_48)))) && (((var_1_24 & var_1_27) <= var_1_58) ? ((! (var_1_47 && var_1_47)) ? (var_1_49 == ((float) ((((((var_1_37 - var_1_35) - 2.5f)) > ((var_1_40 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))))) ? (((var_1_37 - var_1_35) - 2.5f)) : ((var_1_40 + ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))))))))) : (var_1_49 == ((float) ((((var_1_13) < ((var_1_35 + ((((var_1_40) < (var_1_51)) ? (var_1_40) : (var_1_51)))))) ? (var_1_13) : ((var_1_35 + ((((var_1_40) < (var_1_51)) ? (var_1_40) : (var_1_51)))))))))) : 1)) && ((var_1_31 >= var_1_15) ? ((var_1_30 < var_1_6) ? (var_1_52 == ((double) (var_1_36 - var_1_35))) : ((! var_1_47) ? (var_1_52 == ((double) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : (var_1_52 == ((double) (((((var_1_34 - var_1_37)) < (((var_1_54 + var_1_55) + var_1_35))) ? ((var_1_34 - var_1_37)) : (((var_1_54 + var_1_55) + var_1_35)))))))) : ((var_1_47 && (2.05f <= var_1_36)) ? ((var_1_38 < (var_1_37 - var_1_36)) ? ((((var_1_23 >> var_1_6) / var_1_31) > (var_1_8 - var_1_29)) ? (var_1_52 == ((double) var_1_35)) : 1) : 1) : (var_1_52 == ((double) (var_1_36 - (var_1_37 - var_1_35))))))) && (var_1_47 ? (var_1_56 == ((unsigned short int) var_1_5)) : 1)) && (var_1_48 ? (var_1_57 == ((unsigned char) var_1_31)) : (var_1_57 == ((unsigned char) var_1_31)))) && ((2.8 > var_1_40) ? ((var_1_16 <= var_1_27) ? (var_1_58 == ((signed char) (16 - var_1_16))) : 1) : 1)) && ((var_1_57 == ((var_1_26 * var_1_45) / var_1_21)) ? (var_1_60 == ((signed char) var_1_16)) : 1)
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
