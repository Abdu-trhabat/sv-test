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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch39Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 200;
unsigned short int var_1_4 = 8;
unsigned short int var_1_5 = 5;
unsigned long int var_1_6 = 256;
float var_1_7 = 25.8;
float var_1_8 = 999999999.3;
unsigned long int var_1_10 = 3413017661;
signed char var_1_11 = -128;
signed char var_1_12 = 100;
signed char var_1_13 = 32;
float var_1_14 = 24.5;
float var_1_15 = 63.6;
float var_1_16 = 0.9;
float var_1_17 = 127.5;
float var_1_18 = 499.45;
unsigned char var_1_19 = 100;
unsigned char var_1_22 = 100;
unsigned short int var_1_23 = 32;
unsigned short int var_1_24 = 22051;
float var_1_25 = -0.25;
float var_1_27 = 25.375;
float var_1_28 = 0.0;
float var_1_29 = 2.5;
signed char var_1_30 = -1;
signed char var_1_31 = 4;
signed char var_1_32 = 0;
float var_1_33 = 31.125;
signed short int var_1_34 = -256;
signed long int var_1_35 = 1;
unsigned long int var_1_37 = 1;
signed short int var_1_38 = 1;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
float var_1_41 = 0.4;
unsigned char var_1_42 = 200;
float var_1_43 = 0.4;
signed char var_1_44 = 0;
signed short int var_1_45 = 128;
unsigned char var_1_47 = 5;
unsigned char var_1_48 = 128;
signed short int var_1_49 = 64;
signed long int var_1_51 = -50;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
signed short int var_1_57 = -128;
double var_1_58 = 1.25;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 16;
double var_1_61 = 10.125;
double var_1_62 = 0.0;
signed short int var_1_63 = 256;
signed char var_1_64 = 2;
unsigned long int last_1_var_1_6 = 256;
unsigned char last_1_var_1_19 = 100;
unsigned short int last_1_var_1_23 = 32;
signed short int last_1_var_1_34 = -256;
signed long int last_1_var_1_35 = 1;
signed short int last_1_var_1_45 = 128;
signed short int last_1_var_1_49 = 64;
signed long int last_1_var_1_51 = -50;
unsigned char last_1_var_1_52 = 0;
unsigned char last_1_var_1_59 = 0;
double last_1_var_1_61 = 10.125;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_var_1_19 / var_1_4;
 if (var_1_5 >= stepLocal_1) {
  if (! (last_1_var_1_51 >= var_1_4)) {
   var_1_11 = ((5 + ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) - (((((var_1_12) < (100)) ? (var_1_12) : (100))) - (var_1_13 + 25)));
  }
 }
 if ((var_1_8 - var_1_27) < 100.5f) {
  var_1_34 = (last_1_var_1_35 + last_1_var_1_6);
 }
 unsigned long int stepLocal_6 = 10u;
 if (! var_1_40) {
  if (var_1_10 <= stepLocal_6) {
   var_1_45 = ((((var_1_4) > (((((var_1_5) > (var_1_13)) ? (var_1_5) : (var_1_13))))) ? (var_1_4) : (((((var_1_5) > (var_1_13)) ? (var_1_5) : (var_1_13))))));
  } else {
   var_1_45 = ((((((last_1_var_1_45 + last_1_var_1_35)) < (-16)) ? ((last_1_var_1_45 + last_1_var_1_35)) : (-16))) + last_1_var_1_19);
  }
 } else {
  var_1_45 = last_1_var_1_34;
 }
 signed long int stepLocal_8 = (((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12));
 if (var_1_45 > stepLocal_8) {
  var_1_61 = (var_1_27 - (var_1_62 - var_1_29));
 }
 var_1_39 = (last_1_var_1_59 || (! var_1_40));
 if (var_1_39) {
  var_1_60 = var_1_31;
 } else {
  var_1_60 = var_1_5;
 }
 unsigned char stepLocal_7 = var_1_39;
 if (var_1_40 || stepLocal_7) {
  var_1_47 = (var_1_22 + var_1_13);
 } else {
  var_1_47 = (var_1_48 - 1);
 }
 if ((var_1_10 >= (- var_1_12)) && last_1_var_1_52) {
  if (last_1_var_1_52) {
   var_1_37 = (((((((((var_1_22) < (var_1_4)) ? (var_1_22) : (var_1_4))) + var_1_5)) < (var_1_13)) ? ((((((var_1_22) < (var_1_4)) ? (var_1_22) : (var_1_4))) + var_1_5)) : (var_1_13)));
  }
 } else {
  var_1_37 = ((((var_1_5) > (var_1_10)) ? (var_1_5) : (var_1_10)));
 }
 var_1_63 = var_1_37;
 if (-64 >= var_1_37) {
  var_1_25 = ((((var_1_17) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_17) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))));
 } else {
  var_1_25 = (var_1_15 + (var_1_27 - (var_1_28 - var_1_29)));
 }
 if (last_1_var_1_34 >= (((((last_1_var_1_49) < (var_1_22)) ? (last_1_var_1_49) : (var_1_22))) - (1 + 8))) {
  var_1_30 = ((((((((-50) > (var_1_13)) ? (-50) : (var_1_13)))) < ((var_1_4 + var_1_5))) ? (((((-50) > (var_1_13)) ? (-50) : (var_1_13)))) : ((var_1_4 + var_1_5))));
 } else {
  var_1_30 = ((((((var_1_12 - var_1_13)) > ((var_1_31 + var_1_5))) ? ((var_1_12 - var_1_13)) : ((var_1_31 + var_1_5)))) - var_1_4);
 }
 if ((var_1_7 - var_1_8) > last_1_var_1_61) {
  var_1_6 = var_1_4;
 } else {
  var_1_6 = ((var_1_10 - ((((0u) < (last_1_var_1_23)) ? (0u) : (last_1_var_1_23)))) - var_1_4);
 }
 unsigned char stepLocal_3 = var_1_22;
 if (stepLocal_3 <= var_1_12) {
  var_1_23 = ((var_1_24 - var_1_22) + var_1_5);
 } else {
  if ((var_1_17 + var_1_8) <= var_1_7) {
   var_1_23 = (((((var_1_13) < (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (var_1_13) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) + var_1_12);
  }
 }
 var_1_32 = (((((var_1_31 - var_1_5)) < (var_1_13)) ? ((var_1_31 - var_1_5)) : (var_1_13)));
 if (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) >= var_1_7) {
  var_1_33 = var_1_29;
 } else {
  var_1_33 = ((var_1_29 - var_1_27) + 3.6f);
 }
 if (! (var_1_34 <= -4)) {
  var_1_58 = 31.15;
 }
 var_1_64 = var_1_31;
 unsigned long int stepLocal_2 = (((var_1_37) > ((var_1_4 + var_1_11))) ? (var_1_37) : ((var_1_4 + var_1_11)));
 if (var_1_47 > stepLocal_2) {
  var_1_19 = (var_1_12 + (var_1_22 - var_1_13));
 }
 if (var_1_63 > var_1_34) {
  var_1_14 = (((256.5f + var_1_15) + ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)))) + var_1_18);
 }
 if (255.7f > var_1_7) {
  if (var_1_61 >= var_1_33) {
   var_1_59 = var_1_40;
  } else {
   var_1_59 = var_1_40;
  }
 } else {
  var_1_59 = var_1_53;
 }
 if ((var_1_23 >= ((((var_1_6) > (var_1_24)) ? (var_1_6) : (var_1_24)))) || var_1_40) {
  if (var_1_40) {
   var_1_52 = var_1_53;
  }
 } else {
  if (var_1_39) {
   if (var_1_59 && var_1_53) {
    var_1_52 = (! (var_1_59 && var_1_54));
   } else {
    var_1_52 = (var_1_53 && var_1_55);
   }
  } else {
   if ((- var_1_30) <= (var_1_4 - var_1_31)) {
    var_1_52 = ((! var_1_54) || var_1_53);
   } else {
    var_1_52 = (! (var_1_54 || (var_1_53 && var_1_56)));
   }
  }
 }
 if (var_1_40) {
  if (var_1_52) {
   var_1_44 = (((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - ((((var_1_5) > (var_1_12)) ? (var_1_5) : (var_1_12))))) > (var_1_31)) ? ((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - ((((var_1_5) > (var_1_12)) ? (var_1_5) : (var_1_12))))) : (var_1_31)));
  } else {
   var_1_44 = (var_1_31 + -32);
  }
 } else {
  var_1_44 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
 }
 if (var_1_60 != (var_1_11 / var_1_12)) {
  var_1_57 = (var_1_32 + var_1_45);
 }
 unsigned long int stepLocal_0 = (var_1_30 * var_1_6) << (var_1_4 - var_1_5);
 if (stepLocal_0 <= -128) {
  var_1_1 = (var_1_5 + var_1_4);
 } else {
  var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
 }
 if (var_1_52) {
  var_1_49 = var_1_30;
 } else {
  var_1_49 = (((((var_1_44 + var_1_44)) < (var_1_31)) ? ((var_1_44 + var_1_44)) : (var_1_31)));
 }
 signed short int stepLocal_5 = var_1_63;
 signed long int stepLocal_4 = - var_1_32;
 if ((var_1_42 - var_1_13) >= stepLocal_5) {
  var_1_41 = ((8.0912819693463839E18f - var_1_29) - var_1_27);
 } else {
  if (var_1_52) {
   if (stepLocal_4 <= var_1_5) {
    if (var_1_17 != ((var_1_61 + var_1_8) * (var_1_16 / var_1_28))) {
     var_1_41 = (var_1_29 - var_1_27);
    }
   } else {
    if (var_1_8 <= (16.75f / ((((var_1_28) < (var_1_43)) ? (var_1_28) : (var_1_43))))) {
     var_1_41 = (var_1_17 + var_1_16);
    } else {
     var_1_41 = var_1_29;
    }
   }
  } else {
   var_1_41 = (var_1_28 + var_1_16);
  }
 }
 if ((- var_1_25) <= (var_1_27 - var_1_8)) {
  if (var_1_59) {
   var_1_35 = (var_1_57 + var_1_12);
  } else {
   if (var_1_23 <= var_1_63) {
    var_1_35 = (var_1_45 + var_1_44);
   }
  }
 } else {
  if (var_1_13 >= var_1_63) {
   if (var_1_23 < var_1_57) {
    if (var_1_14 <= var_1_17) {
     var_1_35 = var_1_32;
    }
   } else {
    var_1_35 = var_1_23;
   }
  } else {
   var_1_35 = var_1_60;
  }
 }
 if (var_1_60 <= var_1_1) {
  var_1_51 = (((((((((var_1_13) > (var_1_31)) ? (var_1_13) : (var_1_31))) - var_1_1)) < (var_1_48)) ? ((((((var_1_13) > (var_1_31)) ? (var_1_13) : (var_1_31))) - var_1_1)) : (var_1_48)));
 }
 if (var_1_59) {
  var_1_38 = var_1_4;
 } else {
  var_1_38 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 8);
 assume_abort_if_not(var_1_4 <= 17);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 8);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 3221225470);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 63);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -115292.1504606845700e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 1152921.504606845700e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -230584.3009213691390e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691390e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 63);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 16383);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 2305843.009213691390e+12F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 127);
 assume_abort_if_not(var_1_42 <= 255);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 assume_abort_if_not(var_1_43 != 0.0F);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 127);
 assume_abort_if_not(var_1_48 <= 254);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 1);
 assume_abort_if_not(var_1_53 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 0);
 var_1_62 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_62 >= 4611686.018427382800e+12F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854765600e+12F && var_1_62 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_61 = var_1_61;
}
int property() {
 return (((((((((((((((((((((((((((((((var_1_30 * var_1_6) << (var_1_4 - var_1_5)) <= -128) ? (var_1_1 == ((unsigned char) (var_1_5 + var_1_4))) : (var_1_1 == ((unsigned char) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) && (((var_1_7 - var_1_8) > last_1_var_1_61) ? (var_1_6 == ((unsigned long int) var_1_4)) : (var_1_6 == ((unsigned long int) ((var_1_10 - ((((0u) < (last_1_var_1_23)) ? (0u) : (last_1_var_1_23)))) - var_1_4))))) && ((var_1_5 >= (last_1_var_1_19 / var_1_4)) ? ((! (last_1_var_1_51 >= var_1_4)) ? (var_1_11 == ((signed char) ((5 + ((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) - (((((var_1_12) < (100)) ? (var_1_12) : (100))) - (var_1_13 + 25))))) : 1) : 1)) && ((var_1_63 > var_1_34) ? (var_1_14 == ((float) (((256.5f + var_1_15) + ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)))) + var_1_18))) : 1)) && ((var_1_47 > ((((var_1_37) > ((var_1_4 + var_1_11))) ? (var_1_37) : ((var_1_4 + var_1_11))))) ? (var_1_19 == ((unsigned char) (var_1_12 + (var_1_22 - var_1_13)))) : 1)) && ((var_1_22 <= var_1_12) ? (var_1_23 == ((unsigned short int) ((var_1_24 - var_1_22) + var_1_5))) : (((var_1_17 + var_1_8) <= var_1_7) ? (var_1_23 == ((unsigned short int) (((((var_1_13) < (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (var_1_13) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) + var_1_12))) : 1))) && ((-64 >= var_1_37) ? (var_1_25 == ((float) ((((var_1_17) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_17) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))))) : (var_1_25 == ((float) (var_1_15 + (var_1_27 - (var_1_28 - var_1_29))))))) && ((last_1_var_1_34 >= (((((last_1_var_1_49) < (var_1_22)) ? (last_1_var_1_49) : (var_1_22))) - (1 + 8))) ? (var_1_30 == ((signed char) ((((((((-50) > (var_1_13)) ? (-50) : (var_1_13)))) < ((var_1_4 + var_1_5))) ? (((((-50) > (var_1_13)) ? (-50) : (var_1_13)))) : ((var_1_4 + var_1_5)))))) : (var_1_30 == ((signed char) ((((((var_1_12 - var_1_13)) > ((var_1_31 + var_1_5))) ? ((var_1_12 - var_1_13)) : ((var_1_31 + var_1_5)))) - var_1_4))))) && (var_1_32 == ((signed char) (((((var_1_31 - var_1_5)) < (var_1_13)) ? ((var_1_31 - var_1_5)) : (var_1_13)))))) && ((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) >= var_1_7) ? (var_1_33 == ((float) var_1_29)) : (var_1_33 == ((float) ((var_1_29 - var_1_27) + 3.6f))))) && (((var_1_8 - var_1_27) < 100.5f) ? (var_1_34 == ((signed short int) (last_1_var_1_35 + last_1_var_1_6))) : 1)) && (((- var_1_25) <= (var_1_27 - var_1_8)) ? (var_1_59 ? (var_1_35 == ((signed long int) (var_1_57 + var_1_12))) : ((var_1_23 <= var_1_63) ? (var_1_35 == ((signed long int) (var_1_45 + var_1_44))) : 1)) : ((var_1_13 >= var_1_63) ? ((var_1_23 < var_1_57) ? ((var_1_14 <= var_1_17) ? (var_1_35 == ((signed long int) var_1_32)) : 1) : (var_1_35 == ((signed long int) var_1_23))) : (var_1_35 == ((signed long int) var_1_60))))) && (((var_1_10 >= (- var_1_12)) && last_1_var_1_52) ? (last_1_var_1_52 ? (var_1_37 == ((unsigned long int) (((((((((var_1_22) < (var_1_4)) ? (var_1_22) : (var_1_4))) + var_1_5)) < (var_1_13)) ? ((((((var_1_22) < (var_1_4)) ? (var_1_22) : (var_1_4))) + var_1_5)) : (var_1_13))))) : 1) : (var_1_37 == ((unsigned long int) ((((var_1_5) > (var_1_10)) ? (var_1_5) : (var_1_10))))))) && (var_1_59 ? (var_1_38 == ((signed short int) var_1_4)) : (var_1_38 == ((signed short int) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))) && (var_1_39 == ((unsigned char) (last_1_var_1_59 || (! var_1_40))))) && (((var_1_42 - var_1_13) >= var_1_63) ? (var_1_41 == ((float) ((8.0912819693463839E18f - var_1_29) - var_1_27))) : (var_1_52 ? (((- var_1_32) <= var_1_5) ? ((var_1_17 != ((var_1_61 + var_1_8) * (var_1_16 / var_1_28))) ? (var_1_41 == ((float) (var_1_29 - var_1_27))) : 1) : ((var_1_8 <= (16.75f / ((((var_1_28) < (var_1_43)) ? (var_1_28) : (var_1_43))))) ? (var_1_41 == ((float) (var_1_17 + var_1_16))) : (var_1_41 == ((float) var_1_29)))) : (var_1_41 == ((float) (var_1_28 + var_1_16)))))) && (var_1_40 ? (var_1_52 ? (var_1_44 == ((signed char) (((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - ((((var_1_5) > (var_1_12)) ? (var_1_5) : (var_1_12))))) > (var_1_31)) ? ((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))) - ((((var_1_5) > (var_1_12)) ? (var_1_5) : (var_1_12))))) : (var_1_31))))) : (var_1_44 == ((signed char) (var_1_31 + -32)))) : (var_1_44 == ((signed char) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))) && ((! var_1_40) ? ((var_1_10 <= 10u) ? (var_1_45 == ((signed short int) ((((var_1_4) > (((((var_1_5) > (var_1_13)) ? (var_1_5) : (var_1_13))))) ? (var_1_4) : (((((var_1_5) > (var_1_13)) ? (var_1_5) : (var_1_13)))))))) : (var_1_45 == ((signed short int) ((((((last_1_var_1_45 + last_1_var_1_35)) < (-16)) ? ((last_1_var_1_45 + last_1_var_1_35)) : (-16))) + last_1_var_1_19)))) : (var_1_45 == ((signed short int) last_1_var_1_34)))) && ((var_1_40 || var_1_39) ? (var_1_47 == ((unsigned char) (var_1_22 + var_1_13))) : (var_1_47 == ((unsigned char) (var_1_48 - 1))))) && (var_1_52 ? (var_1_49 == ((signed short int) var_1_30)) : (var_1_49 == ((signed short int) (((((var_1_44 + var_1_44)) < (var_1_31)) ? ((var_1_44 + var_1_44)) : (var_1_31))))))) && ((var_1_60 <= var_1_1) ? (var_1_51 == ((signed long int) (((((((((var_1_13) > (var_1_31)) ? (var_1_13) : (var_1_31))) - var_1_1)) < (var_1_48)) ? ((((((var_1_13) > (var_1_31)) ? (var_1_13) : (var_1_31))) - var_1_1)) : (var_1_48))))) : 1)) && (((var_1_23 >= ((((var_1_6) > (var_1_24)) ? (var_1_6) : (var_1_24)))) || var_1_40) ? (var_1_40 ? (var_1_52 == ((unsigned char) var_1_53)) : 1) : (var_1_39 ? ((var_1_59 && var_1_53) ? (var_1_52 == ((unsigned char) (! (var_1_59 && var_1_54)))) : (var_1_52 == ((unsigned char) (var_1_53 && var_1_55)))) : (((- var_1_30) <= (var_1_4 - var_1_31)) ? (var_1_52 == ((unsigned char) ((! var_1_54) || var_1_53))) : (var_1_52 == ((unsigned char) (! (var_1_54 || (var_1_53 && var_1_56))))))))) && ((var_1_60 != (var_1_11 / var_1_12)) ? (var_1_57 == ((signed short int) (var_1_32 + var_1_45))) : 1)) && ((! (var_1_34 <= -4)) ? (var_1_58 == ((double) 31.15)) : 1)) && ((255.7f > var_1_7) ? ((var_1_61 >= var_1_33) ? (var_1_59 == ((unsigned char) var_1_40)) : (var_1_59 == ((unsigned char) var_1_40))) : (var_1_59 == ((unsigned char) var_1_53)))) && (var_1_39 ? (var_1_60 == ((unsigned char) var_1_31)) : (var_1_60 == ((unsigned char) var_1_5)))) && ((var_1_45 > ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) ? (var_1_61 == ((double) (var_1_27 - (var_1_62 - var_1_29)))) : 1)) && (var_1_63 == ((signed short int) var_1_37))) && (var_1_64 == ((signed char) var_1_31))
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
