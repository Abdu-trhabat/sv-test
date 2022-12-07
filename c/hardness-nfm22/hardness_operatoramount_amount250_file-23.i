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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch23Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -16;
unsigned long int var_1_2 = 2645914509;
signed char var_1_5 = -50;
signed char var_1_6 = 2;
signed char var_1_7 = 5;
float var_1_8 = 64.1;
float var_1_10 = 8.4;
float var_1_11 = 2.75;
float var_1_12 = 0.9;
float var_1_14 = 256.2;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 8;
signed short int var_1_17 = -128;
signed short int var_1_18 = 10000;
unsigned long int var_1_19 = 64;
unsigned long int var_1_20 = 2838904920;
unsigned long int var_1_21 = 1320930853;
unsigned char var_1_22 = 1;
signed char var_1_23 = 25;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
float var_1_27 = -0.25;
signed char var_1_28 = 10;
signed short int var_1_29 = 16;
signed short int var_1_30 = 25112;
signed short int var_1_31 = 16407;
signed short int var_1_32 = 5;
signed short int var_1_33 = 128;
signed short int var_1_34 = -10;
unsigned char var_1_35 = 10;
float var_1_36 = 99.4;
float var_1_37 = 25.2;
float var_1_38 = 0.0;
float var_1_39 = 8.8;
signed char var_1_40 = 1;
signed char var_1_41 = 100;
signed char var_1_42 = 2;
signed char var_1_43 = 2;
signed char var_1_44 = -100;
unsigned long int var_1_47 = 1344730365;
unsigned long int var_1_48 = 1634659650;
unsigned long int var_1_49 = 1225052290;
unsigned short int var_1_50 = 64;
unsigned short int var_1_51 = 63471;
unsigned short int var_1_52 = 128;
unsigned char var_1_53 = 32;
unsigned short int var_1_54 = 8;
unsigned short int var_1_55 = 5;
double var_1_56 = 7.1;
signed long int var_1_57 = -100000;
signed short int var_1_58 = -2;
float var_1_59 = 7.2;
unsigned char last_1_var_1_22 = 1;
float last_1_var_1_36 = 99.4;
signed char last_1_var_1_44 = -100;
unsigned short int last_1_var_1_50 = 64;
signed short int last_1_var_1_58 = -2;
void initially(void) {
}
void step(void) {
 if (var_1_25 && last_1_var_1_22) {
  var_1_52 = (((((var_1_43) > (((((var_1_18) < (var_1_6)) ? (var_1_18) : (var_1_6))))) ? (var_1_43) : (((((var_1_18) < (var_1_6)) ? (var_1_18) : (var_1_6)))))) + ((((var_1_31) > (((((last_1_var_1_58) < (256)) ? (last_1_var_1_58) : (256))))) ? (var_1_31) : (((((last_1_var_1_58) < (256)) ? (last_1_var_1_58) : (256)))))));
 }
 signed long int stepLocal_24 = var_1_30 >> (var_1_54 - var_1_55);
 if (stepLocal_24 != var_1_52) {
  var_1_53 = ((var_1_41 - var_1_7) + ((((var_1_16) < (var_1_55)) ? (var_1_16) : (var_1_55))));
 }
 if (var_1_54 < var_1_53) {
  var_1_58 = 5;
 } else {
  var_1_58 = var_1_43;
 }
 if (var_1_2 <= (var_1_52 + var_1_7)) {
  var_1_15 = var_1_6;
 } else {
  var_1_15 = (var_1_7 + var_1_16);
 }
 signed long int stepLocal_3 = var_1_6 << var_1_7;
 if (stepLocal_3 > var_1_5) {
  var_1_17 = ((var_1_6 + (var_1_18 - var_1_16)) - (var_1_58 + var_1_7));
 }
 signed char stepLocal_6 = var_1_6;
 unsigned char stepLocal_5 = var_1_12 <= 0.6f;
 if (stepLocal_6 >= (var_1_5 / ((((-16) < (var_1_23)) ? (-16) : (var_1_23))))) {
  var_1_22 = (var_1_24 && var_1_25);
 } else {
  if (stepLocal_5 || ((var_1_21 / var_1_18) > (256u * var_1_2))) {
   var_1_22 = ((! var_1_25) || var_1_26);
  } else {
   var_1_22 = var_1_26;
  }
 }
 signed long int stepLocal_7 = (var_1_6 + var_1_7) - ((((var_1_16) < (var_1_28)) ? (var_1_16) : (var_1_28)));
 if (var_1_15 >= stepLocal_7) {
  var_1_27 = var_1_11;
 } else {
  var_1_27 = 9.375f;
 }
 signed long int stepLocal_9 = (((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18));
 unsigned long int stepLocal_8 = var_1_21;
 if (-32 != stepLocal_9) {
  if (var_1_28 > stepLocal_8) {
   var_1_29 = (((((var_1_30 - var_1_18) - (var_1_31 - 5)) < 0 ) ? -((var_1_30 - var_1_18) - (var_1_31 - 5)) : ((var_1_30 - var_1_18) - (var_1_31 - 5))));
  }
 }
 var_1_40 = (var_1_7 - (var_1_41 - (var_1_42 + var_1_43)));
 signed char stepLocal_23 = var_1_6;
 if (var_1_26) {
  if (var_1_25) {
   var_1_50 = (var_1_51 - (((((20363 - var_1_18)) > (var_1_52)) ? ((20363 - var_1_18)) : (var_1_52))));
  } else {
   var_1_50 = ((((((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < (var_1_16)) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (var_1_16)))) > (var_1_28)) ? (((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < (var_1_16)) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (var_1_16)))) : (var_1_28)));
  }
 } else {
  if (stepLocal_23 >= last_1_var_1_50) {
   var_1_50 = (((((((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41))) + var_1_31)) > (var_1_30)) ? ((((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41))) + var_1_31)) : (var_1_30)));
  }
 }
 if (var_1_24) {
  var_1_56 = var_1_14;
 }
 unsigned char stepLocal_0 = var_1_22;
 if (((var_1_2 - 16u) != var_1_15) || stepLocal_0) {
  var_1_1 = (var_1_5 + (var_1_6 - var_1_7));
 } else {
  var_1_1 = (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < 0 ) ? -((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) : ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))));
 }
 unsigned long int stepLocal_16 = 10000u;
 if ((32 + var_1_50) >= stepLocal_16) {
  var_1_35 = ((((var_1_7) > (var_1_16)) ? (var_1_7) : (var_1_16)));
 } else {
  var_1_35 = (var_1_6 + var_1_28);
 }
 unsigned long int stepLocal_22 = (var_1_21 + var_1_47) - (var_1_48 - var_1_35);
 signed char stepLocal_21 = var_1_41;
 signed char stepLocal_20 = var_1_6;
 if (last_1_var_1_44 < stepLocal_20) {
  if (var_1_22) {
   var_1_44 = (var_1_6 + var_1_42);
  } else {
   var_1_44 = (var_1_43 + -1);
  }
 } else {
  if (stepLocal_22 < (var_1_20 - (var_1_49 - var_1_6))) {
   if (5u < stepLocal_21) {
    var_1_44 = (var_1_43 - var_1_41);
   }
  }
 }
 signed long int stepLocal_4 = -128;
 if (var_1_6 >= stepLocal_4) {
  if (var_1_14 <= var_1_10) {
   var_1_19 = (var_1_20 - 1u);
  }
 } else {
  if (var_1_22) {
   var_1_19 = (var_1_44 + (var_1_21 - 8u));
  }
 }
 unsigned short int stepLocal_11 = var_1_50;
 unsigned char stepLocal_10 = var_1_22;
 if (var_1_24) {
  var_1_32 = -64;
 } else {
  if (var_1_12 > var_1_14) {
   if (stepLocal_11 <= var_1_31) {
    var_1_32 = 0;
   } else {
    var_1_32 = (((((1 - var_1_35)) > (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? ((1 - var_1_35)) : (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))));
   }
  } else {
   if (stepLocal_10 || var_1_22) {
    var_1_32 = var_1_5;
   } else {
    var_1_32 = var_1_18;
   }
  }
 }
 signed long int stepLocal_19 = 64;
 signed short int stepLocal_18 = var_1_17;
 signed long int stepLocal_17 = var_1_44 % var_1_18;
 if (var_1_22) {
  var_1_36 = (var_1_37 - ((((var_1_39) < (var_1_38)) ? (var_1_39) : (var_1_38))));
 } else {
  if (stepLocal_17 > var_1_19) {
   if (var_1_22) {
    var_1_36 = ((((((((((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) < ((var_1_38 - var_1_37))) ? (((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) : ((var_1_38 - var_1_37))))) < (var_1_10)) ? (((((((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) < ((var_1_38 - var_1_37))) ? (((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) : ((var_1_38 - var_1_37))))) : (var_1_10)));
   } else {
    var_1_36 = (var_1_39 + var_1_14);
   }
  } else {
   if (stepLocal_18 >= var_1_30) {
    if ((var_1_14 + var_1_11) > last_1_var_1_36) {
     if (((var_1_11 / var_1_12) / var_1_38) >= var_1_14) {
      var_1_36 = ((((var_1_38) > (((((var_1_14) < ((32.2f - var_1_39))) ? (var_1_14) : ((32.2f - var_1_39)))))) ? (var_1_38) : (((((var_1_14) < ((32.2f - var_1_39))) ? (var_1_14) : ((32.2f - var_1_39)))))));
     }
    } else {
     var_1_36 = ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)));
    }
   } else {
    if (((var_1_18 << var_1_17) / var_1_31) >= stepLocal_19) {
     var_1_36 = var_1_38;
    }
   }
  }
 }
 unsigned long int stepLocal_25 = var_1_47;
 if (var_1_55 <= stepLocal_25) {
  var_1_57 = (32 - var_1_19);
 } else {
  var_1_57 = (var_1_54 + ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))));
 }
 if (var_1_24 && var_1_26) {
  if (((~ var_1_17) < -4) || (var_1_36 == (var_1_11 + var_1_36))) {
   var_1_59 = var_1_14;
  } else {
   var_1_59 = 2.25f;
  }
 }
 unsigned long int stepLocal_2 = var_1_19;
 unsigned char stepLocal_1 = (var_1_11 / var_1_12) == var_1_10;
 if (var_1_22) {
  if ((8u * (var_1_2 * var_1_7)) >= stepLocal_2) {
   var_1_8 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
  }
 } else {
  if (stepLocal_1 && var_1_22) {
   var_1_8 = (8.35f + var_1_14);
  } else {
   var_1_8 = ((((var_1_14) < (var_1_11)) ? (var_1_14) : (var_1_11)));
  }
 }
 if (var_1_22) {
  var_1_33 = (var_1_1 - var_1_16);
 } else {
  if ((var_1_10 > var_1_8) || var_1_22) {
   var_1_33 = (var_1_5 + -5);
  } else {
   var_1_33 = ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)));
  }
 }
 unsigned char stepLocal_15 = (var_1_30 / var_1_31) <= var_1_52;
 unsigned long int stepLocal_14 = 16u;
 unsigned char stepLocal_13 = (var_1_14 * var_1_27) >= var_1_11;
 signed long int stepLocal_12 = var_1_18 + var_1_33;
 if (((((var_1_30) < (var_1_52)) ? (var_1_30) : (var_1_52))) <= stepLocal_14) {
  if (stepLocal_15 || var_1_22) {
   if (var_1_28 <= stepLocal_12) {
    var_1_34 = ((var_1_30 - var_1_18) - var_1_6);
   } else {
    var_1_34 = ((((var_1_58) < (((var_1_16 + var_1_28) - var_1_7))) ? (var_1_58) : (((var_1_16 + var_1_28) - var_1_7))));
   }
  } else {
   if (var_1_22 || stepLocal_13) {
    var_1_34 = var_1_23;
   } else {
    var_1_34 = var_1_31;
   }
  }
 } else {
  var_1_34 = var_1_31;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 2147483647);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 8191);
 assume_abort_if_not(var_1_18 <= 16383);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -128);
 assume_abort_if_not(var_1_23 <= 127);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 16383);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 16383);
 assume_abort_if_not(var_1_31 <= 32766);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 6917529.027641073700e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691390e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 63);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 32);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 31);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 1073741824);
 assume_abort_if_not(var_1_47 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 1073741823);
 assume_abort_if_not(var_1_48 <= 2147483647);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 1073741823);
 assume_abort_if_not(var_1_49 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_51 >= 32767);
 assume_abort_if_not(var_1_51 <= 65534);
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 8);
 assume_abort_if_not(var_1_54 <= 16);
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 8);
}
void updateLastVariables() {
 last_1_var_1_22 = var_1_22;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_58 = var_1_58;
}
int property() {
 return ((((((((((((((((((((((((var_1_2 - 16u) != var_1_15) || var_1_22) ? (var_1_1 == ((signed char) (var_1_5 + (var_1_6 - var_1_7)))) : (var_1_1 == ((signed char) (((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < 0 ) ? -((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) : ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))))) && (var_1_22 ? (((8u * (var_1_2 * var_1_7)) >= var_1_19) ? (var_1_8 == ((float) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) : 1) : ((((var_1_11 / var_1_12) == var_1_10) && var_1_22) ? (var_1_8 == ((float) (8.35f + var_1_14))) : (var_1_8 == ((float) ((((var_1_14) < (var_1_11)) ? (var_1_14) : (var_1_11)))))))) && ((var_1_2 <= (var_1_52 + var_1_7)) ? (var_1_15 == ((unsigned char) var_1_6)) : (var_1_15 == ((unsigned char) (var_1_7 + var_1_16))))) && (((var_1_6 << var_1_7) > var_1_5) ? (var_1_17 == ((signed short int) ((var_1_6 + (var_1_18 - var_1_16)) - (var_1_58 + var_1_7)))) : 1)) && ((var_1_6 >= -128) ? ((var_1_14 <= var_1_10) ? (var_1_19 == ((unsigned long int) (var_1_20 - 1u))) : 1) : (var_1_22 ? (var_1_19 == ((unsigned long int) (var_1_44 + (var_1_21 - 8u)))) : 1))) && ((var_1_6 >= (var_1_5 / ((((-16) < (var_1_23)) ? (-16) : (var_1_23))))) ? (var_1_22 == ((unsigned char) (var_1_24 && var_1_25))) : (((var_1_12 <= 0.6f) || ((var_1_21 / var_1_18) > (256u * var_1_2))) ? (var_1_22 == ((unsigned char) ((! var_1_25) || var_1_26))) : (var_1_22 == ((unsigned char) var_1_26))))) && ((var_1_15 >= ((var_1_6 + var_1_7) - ((((var_1_16) < (var_1_28)) ? (var_1_16) : (var_1_28))))) ? (var_1_27 == ((float) var_1_11)) : (var_1_27 == ((float) 9.375f)))) && ((-32 != ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) ? ((var_1_28 > var_1_21) ? (var_1_29 == ((signed short int) (((((var_1_30 - var_1_18) - (var_1_31 - 5)) < 0 ) ? -((var_1_30 - var_1_18) - (var_1_31 - 5)) : ((var_1_30 - var_1_18) - (var_1_31 - 5)))))) : 1) : 1)) && (var_1_24 ? (var_1_32 == ((signed short int) -64)) : ((var_1_12 > var_1_14) ? ((var_1_50 <= var_1_31) ? (var_1_32 == ((signed short int) 0)) : (var_1_32 == ((signed short int) (((((1 - var_1_35)) > (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) ? ((1 - var_1_35)) : (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))))))) : ((var_1_22 || var_1_22) ? (var_1_32 == ((signed short int) var_1_5)) : (var_1_32 == ((signed short int) var_1_18)))))) && (var_1_22 ? (var_1_33 == ((signed short int) (var_1_1 - var_1_16))) : (((var_1_10 > var_1_8) || var_1_22) ? (var_1_33 == ((signed short int) (var_1_5 + -5))) : (var_1_33 == ((signed short int) ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))))))) && ((((((var_1_30) < (var_1_52)) ? (var_1_30) : (var_1_52))) <= 16u) ? ((((var_1_30 / var_1_31) <= var_1_52) || var_1_22) ? ((var_1_28 <= (var_1_18 + var_1_33)) ? (var_1_34 == ((signed short int) ((var_1_30 - var_1_18) - var_1_6))) : (var_1_34 == ((signed short int) ((((var_1_58) < (((var_1_16 + var_1_28) - var_1_7))) ? (var_1_58) : (((var_1_16 + var_1_28) - var_1_7))))))) : ((var_1_22 || ((var_1_14 * var_1_27) >= var_1_11)) ? (var_1_34 == ((signed short int) var_1_23)) : (var_1_34 == ((signed short int) var_1_31)))) : (var_1_34 == ((signed short int) var_1_31)))) && (((32 + var_1_50) >= 10000u) ? (var_1_35 == ((unsigned char) ((((var_1_7) > (var_1_16)) ? (var_1_7) : (var_1_16))))) : (var_1_35 == ((unsigned char) (var_1_6 + var_1_28))))) && (var_1_22 ? (var_1_36 == ((float) (var_1_37 - ((((var_1_39) < (var_1_38)) ? (var_1_39) : (var_1_38)))))) : (((var_1_44 % var_1_18) > var_1_19) ? (var_1_22 ? (var_1_36 == ((float) ((((((((((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) < ((var_1_38 - var_1_37))) ? (((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) : ((var_1_38 - var_1_37))))) < (var_1_10)) ? (((((((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) < ((var_1_38 - var_1_37))) ? (((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))) : ((var_1_38 - var_1_37))))) : (var_1_10))))) : (var_1_36 == ((float) (var_1_39 + var_1_14)))) : ((var_1_17 >= var_1_30) ? (((var_1_14 + var_1_11) > last_1_var_1_36) ? ((((var_1_11 / var_1_12) / var_1_38) >= var_1_14) ? (var_1_36 == ((float) ((((var_1_38) > (((((var_1_14) < ((32.2f - var_1_39))) ? (var_1_14) : ((32.2f - var_1_39)))))) ? (var_1_38) : (((((var_1_14) < ((32.2f - var_1_39))) ? (var_1_14) : ((32.2f - var_1_39))))))))) : 1) : (var_1_36 == ((float) ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) : ((((var_1_18 << var_1_17) / var_1_31) >= 64) ? (var_1_36 == ((float) var_1_38)) : 1))))) && (var_1_40 == ((signed char) (var_1_7 - (var_1_41 - (var_1_42 + var_1_43)))))) && ((last_1_var_1_44 < var_1_6) ? (var_1_22 ? (var_1_44 == ((signed char) (var_1_6 + var_1_42))) : (var_1_44 == ((signed char) (var_1_43 + -1)))) : ((((var_1_21 + var_1_47) - (var_1_48 - var_1_35)) < (var_1_20 - (var_1_49 - var_1_6))) ? ((5u < var_1_41) ? (var_1_44 == ((signed char) (var_1_43 - var_1_41))) : 1) : 1))) && (var_1_26 ? (var_1_25 ? (var_1_50 == ((unsigned short int) (var_1_51 - (((((20363 - var_1_18)) > (var_1_52)) ? ((20363 - var_1_18)) : (var_1_52)))))) : (var_1_50 == ((unsigned short int) ((((((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < (var_1_16)) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (var_1_16)))) > (var_1_28)) ? (((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < (var_1_16)) ? (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (var_1_16)))) : (var_1_28)))))) : ((var_1_6 >= last_1_var_1_50) ? (var_1_50 == ((unsigned short int) (((((((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41))) + var_1_31)) > (var_1_30)) ? ((((((var_1_42) < (var_1_41)) ? (var_1_42) : (var_1_41))) + var_1_31)) : (var_1_30))))) : 1))) && ((var_1_25 && last_1_var_1_22) ? (var_1_52 == ((unsigned short int) (((((var_1_43) > (((((var_1_18) < (var_1_6)) ? (var_1_18) : (var_1_6))))) ? (var_1_43) : (((((var_1_18) < (var_1_6)) ? (var_1_18) : (var_1_6)))))) + ((((var_1_31) > (((((last_1_var_1_58) < (256)) ? (last_1_var_1_58) : (256))))) ? (var_1_31) : (((((last_1_var_1_58) < (256)) ? (last_1_var_1_58) : (256))))))))) : 1)) && (((var_1_30 >> (var_1_54 - var_1_55)) != var_1_52) ? (var_1_53 == ((unsigned char) ((var_1_41 - var_1_7) + ((((var_1_16) < (var_1_55)) ? (var_1_16) : (var_1_55)))))) : 1)) && (var_1_24 ? (var_1_56 == ((double) var_1_14)) : 1)) && ((var_1_55 <= var_1_47) ? (var_1_57 == ((signed long int) (32 - var_1_19))) : (var_1_57 == ((signed long int) (var_1_54 + ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))) && ((var_1_54 < var_1_53) ? (var_1_58 == ((signed short int) 5)) : (var_1_58 == ((signed short int) var_1_43)))) && ((var_1_24 && var_1_26) ? ((((~ var_1_17) < -4) || (var_1_36 == (var_1_11 + var_1_36))) ? (var_1_59 == ((float) var_1_14)) : (var_1_59 == ((float) 2.25f))) : 1)
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
