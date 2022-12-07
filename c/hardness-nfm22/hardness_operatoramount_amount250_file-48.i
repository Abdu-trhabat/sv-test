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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = -5;
signed short int var_1_9 = 256;
signed short int var_1_10 = 16;
unsigned long int var_1_11 = 2;
unsigned char var_1_15 = 16;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 0;
float var_1_22 = 4.4;
float var_1_23 = 0.0;
float var_1_24 = 0.0;
float var_1_25 = 3.6;
float var_1_26 = 1.2;
double var_1_27 = 256.5;
double var_1_28 = 0.35;
double var_1_29 = 63.375;
double var_1_30 = 10.5;
double var_1_31 = 99999999.6;
unsigned long int var_1_32 = 128;
unsigned long int var_1_33 = 2763736003;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed char var_1_37 = -128;
signed char var_1_38 = 8;
signed short int var_1_39 = -4;
double var_1_40 = 25.4;
double var_1_41 = 1.8;
unsigned long int var_1_42 = 128;
unsigned long int var_1_43 = 3241862613;
float var_1_44 = 99.5;
unsigned char var_1_46 = 1;
unsigned short int var_1_47 = 5;
unsigned short int var_1_48 = 62457;
unsigned short int var_1_49 = 31741;
unsigned short int var_1_50 = 28850;
signed char var_1_51 = -8;
signed char var_1_52 = 64;
signed long int var_1_53 = 1000000;
unsigned long int var_1_55 = 32;
unsigned char var_1_56 = 1;
unsigned short int var_1_57 = 2;
signed short int var_1_58 = 100;
signed short int var_1_59 = 64;
unsigned short int var_1_60 = 1000;
unsigned long int var_1_61 = 128;
unsigned char var_1_62 = 1;
unsigned char last_1_var_1_18 = 1;
unsigned long int last_1_var_1_32 = 128;
unsigned char last_1_var_1_35 = 0;
signed char last_1_var_1_37 = -128;
unsigned char last_1_var_1_46 = 1;
unsigned short int last_1_var_1_47 = 5;
signed long int last_1_var_1_53 = 1000000;
unsigned long int last_1_var_1_55 = 32;
unsigned short int last_1_var_1_57 = 2;
signed short int last_1_var_1_58 = 100;
unsigned long int last_1_var_1_61 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_20 = last_1_var_1_46 * var_1_21;
 signed short int stepLocal_19 = var_1_9;
 signed long int stepLocal_18 = ((((61832) < (var_1_48)) ? (61832) : (var_1_48))) - var_1_17;
 if (stepLocal_19 >= (var_1_19 - var_1_50)) {
  if (stepLocal_20 < last_1_var_1_46) {
   var_1_55 = (last_1_var_1_47 + var_1_16);
  } else {
   if (last_1_var_1_35) {
    if (stepLocal_18 > last_1_var_1_47) {
     var_1_55 = var_1_52;
    } else {
     var_1_55 = ((((last_1_var_1_61) > (var_1_43)) ? (last_1_var_1_61) : (var_1_43)));
    }
   } else {
    var_1_55 = ((((var_1_48) > (last_1_var_1_32)) ? (var_1_48) : (last_1_var_1_32)));
   }
  }
 } else {
  var_1_55 = ((((var_1_21 + (var_1_48 + var_1_50)) < 0 ) ? -(var_1_21 + (var_1_48 + var_1_50)) : (var_1_21 + (var_1_48 + var_1_50))));
 }
 unsigned char stepLocal_6 = var_1_21;
 if (stepLocal_6 < ((((var_1_33) < (var_1_20)) ? (var_1_33) : (var_1_20)))) {
  if (! last_1_var_1_35) {
   var_1_35 = (((var_1_17 * 4) < last_1_var_1_58) || var_1_36);
  } else {
   var_1_35 = var_1_36;
  }
 }
 var_1_56 = (var_1_35 || var_1_36);
 if (var_1_56) {
  var_1_60 = var_1_17;
 } else {
  var_1_60 = var_1_20;
 }
 if (((var_1_33 - var_1_20) / var_1_16) <= last_1_var_1_37) {
  var_1_32 = last_1_var_1_37;
 } else {
  var_1_32 = ((((last_1_var_1_57) < ((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20))) + (last_1_var_1_18 + var_1_16)))) ? (last_1_var_1_57) : ((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20))) + (last_1_var_1_18 + var_1_16)))));
 }
 signed long int stepLocal_17 = last_1_var_1_53;
 unsigned long int stepLocal_16 = (((var_1_17) < (last_1_var_1_61)) ? (var_1_17) : (last_1_var_1_61));
 if (stepLocal_16 >= (var_1_20 | last_1_var_1_55)) {
  if (last_1_var_1_37 >= stepLocal_17) {
   var_1_47 = (64 + var_1_19);
  } else {
   var_1_47 = (((((((((var_1_48 - var_1_21)) > (((((4) > (var_1_38)) ? (4) : (var_1_38))))) ? ((var_1_48 - var_1_21)) : (((((4) > (var_1_38)) ? (4) : (var_1_38))))))) > (last_1_var_1_61)) ? ((((((var_1_48 - var_1_21)) > (((((4) > (var_1_38)) ? (4) : (var_1_38))))) ? ((var_1_48 - var_1_21)) : (((((4) > (var_1_38)) ? (4) : (var_1_38))))))) : (last_1_var_1_61)));
  }
 } else {
  var_1_47 = ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) - ((((var_1_19) < (var_1_17)) ? (var_1_19) : (var_1_17)))) + 1);
 }
 var_1_53 = ((var_1_47 - 10) + (var_1_38 - var_1_60));
 var_1_18 = (var_1_16 - (var_1_19 + (var_1_20 - var_1_21)));
 if (var_1_16 != ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) {
  var_1_22 = ((((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))) - var_1_25) - var_1_26);
 }
 var_1_27 = ((((((var_1_25) < (var_1_28)) ? (var_1_25) : (var_1_28))) - (var_1_29 + var_1_30)) + var_1_31);
 if (9999.45 > var_1_25) {
  if (var_1_35) {
   var_1_40 = (var_1_23 - (var_1_29 + (var_1_30 + var_1_41)));
  }
 }
 var_1_51 = (var_1_20 - (var_1_52 - ((((var_1_21) > (var_1_38)) ? (var_1_21) : (var_1_38)))));
 var_1_62 = var_1_36;
 if ((var_1_60 >= (var_1_43 - var_1_16)) || var_1_35) {
  var_1_58 = (var_1_20 - ((((var_1_16) < (((((var_1_21) > (100)) ? (var_1_21) : (100))))) ? (var_1_16) : (((((var_1_21) > (100)) ? (var_1_21) : (100)))))));
 }
 unsigned char stepLocal_15 = var_1_36;
 unsigned char stepLocal_14 = var_1_35;
 if (! var_1_36) {
  if (var_1_23 < var_1_29) {
   if (stepLocal_15 && (-5 < 10)) {
    if (stepLocal_14 && var_1_62) {
     var_1_46 = ((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20)));
    }
   } else {
    var_1_46 = ((((var_1_17) > ((var_1_16 - var_1_20))) ? (var_1_17) : ((var_1_16 - var_1_20))));
   }
  }
 } else {
  var_1_46 = ((((64) < 0 ) ? -(64) : (64)));
 }
 if (255.4 > ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) {
  var_1_61 = ((var_1_60 + var_1_52) + var_1_50);
 } else {
  var_1_61 = (((((var_1_32) > (var_1_55)) ? (var_1_32) : (var_1_55))) + var_1_58);
 }
 signed long int stepLocal_8 = var_1_53;
 signed long int stepLocal_7 = ((((((-2) < (var_1_17)) ? (-2) : (var_1_17))) < 0 ) ? -((((-2) < (var_1_17)) ? (-2) : (var_1_17))) : ((((-2) < (var_1_17)) ? (-2) : (var_1_17))));
 if (var_1_32 <= stepLocal_8) {
  if ((var_1_46 / var_1_10) >= stepLocal_7) {
   var_1_39 = var_1_17;
  } else {
   var_1_39 = (64 - ((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19))));
  }
 } else {
  var_1_39 = var_1_19;
 }
 if ((var_1_46 >> var_1_47) >= var_1_47) {
  var_1_15 = (var_1_16 - var_1_17);
 }
 var_1_59 = var_1_15;
 unsigned char stepLocal_5 = var_1_35;
 signed long int stepLocal_4 = var_1_10 + var_1_18;
 if (256 <= stepLocal_4) {
  if (stepLocal_5 || var_1_56) {
   var_1_11 = (((((var_1_60 + 64u)) > (((((var_1_15) < (16u)) ? (var_1_15) : (16u))))) ? ((var_1_60 + 64u)) : (((((var_1_15) < (16u)) ? (var_1_15) : (16u))))));
  }
 } else {
  var_1_11 = (var_1_60 + ((((32u) < ((1806311775u - var_1_15))) ? (32u) : ((1806311775u - var_1_15)))));
 }
 signed short int stepLocal_13 = var_1_10;
 signed long int stepLocal_12 = var_1_47 + var_1_21;
 if (var_1_29 > var_1_23) {
  if (stepLocal_13 < (var_1_16 - var_1_59)) {
   if (stepLocal_12 > (var_1_32 + var_1_43)) {
    var_1_44 = (var_1_24 - ((((var_1_28) < ((var_1_25 + var_1_41))) ? (var_1_28) : ((var_1_25 + var_1_41)))));
   } else {
    var_1_44 = ((((var_1_30) < (var_1_23)) ? (var_1_30) : (var_1_23)));
   }
  } else {
   var_1_44 = (((((var_1_30) > (var_1_25)) ? (var_1_30) : (var_1_25))) - var_1_29);
  }
 } else {
  var_1_44 = (var_1_25 + var_1_30);
 }
 if ((var_1_59 < var_1_15) && var_1_35) {
  if (var_1_24 >= (var_1_25 - var_1_23)) {
   var_1_37 = var_1_19;
  } else {
   if ((var_1_59 >> var_1_17) <= var_1_15) {
    var_1_37 = ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21)));
   } else {
    var_1_37 = ((var_1_20 + var_1_21) - (16 + var_1_38));
   }
  }
 }
 signed char stepLocal_3 = var_1_51;
 signed long int stepLocal_2 = var_1_51 % ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)));
 unsigned short int stepLocal_1 = var_1_60;
 unsigned char stepLocal_0 = var_1_35;
 if (var_1_35 || stepLocal_0) {
  if (var_1_60 >= stepLocal_3) {
   var_1_1 = (((((50) > (var_1_51)) ? (50) : (var_1_51))) + (var_1_37 + var_1_46));
  } else {
   var_1_1 = (var_1_46 + var_1_51);
  }
 } else {
  if (var_1_46 != stepLocal_2) {
   if (! var_1_35) {
    if (var_1_9 != stepLocal_1) {
     var_1_1 = var_1_37;
    } else {
     var_1_1 = var_1_46;
    }
   } else {
    var_1_1 = var_1_51;
   }
  } else {
   var_1_1 = var_1_37;
  }
 }
 unsigned long int stepLocal_22 = var_1_61;
 unsigned long int stepLocal_21 = var_1_55;
 if (var_1_60 >= stepLocal_21) {
  if (stepLocal_22 >= var_1_39) {
   var_1_57 = ((var_1_19 + var_1_39) + ((((var_1_49) > (var_1_38)) ? (var_1_49) : (var_1_38))));
  } else {
   var_1_57 = (((((var_1_37 + var_1_49)) > (var_1_16)) ? ((var_1_37 + var_1_49)) : (var_1_16)));
  }
 } else {
  var_1_57 = ((((var_1_47) < (var_1_19)) ? (var_1_47) : (var_1_19)));
 }
 unsigned char stepLocal_11 = (var_1_37 % var_1_20) < var_1_16;
 unsigned long int stepLocal_10 = var_1_33;
 signed short int stepLocal_9 = var_1_9;
 if (stepLocal_10 != ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) {
  if (var_1_37 != stepLocal_9) {
   var_1_42 = (var_1_43 - (var_1_20 + var_1_16));
  } else {
   var_1_42 = ((((var_1_46) > (((((var_1_43) > (var_1_47)) ? (var_1_43) : (var_1_47))))) ? (var_1_46) : (((((var_1_43) > (var_1_47)) ? (var_1_43) : (var_1_47))))));
  }
 } else {
  if (stepLocal_11 || (! var_1_56)) {
   var_1_42 = ((((2u) < 0 ) ? -(2u) : (2u)));
  }
 }
}
void updateVariables() {
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32768);
 assume_abort_if_not(var_1_9 <= 32767);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32768);
 assume_abort_if_not(var_1_10 <= 32767);
 assume_abort_if_not(var_1_10 != 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 64);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 31);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 4611686.018427382800e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 4611686.018427382800e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 2147483647);
 assume_abort_if_not(var_1_43 <= 4294967294);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 32767);
 assume_abort_if_not(var_1_48 <= 65534);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 16383);
 assume_abort_if_not(var_1_49 <= 32767);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 16383);
 assume_abort_if_not(var_1_50 <= 32767);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 63);
 assume_abort_if_not(var_1_52 <= 126);
}
void updateLastVariables() {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_57 = var_1_57;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_61 = var_1_61;
}
int property() {
 return (((((((((((((((((((((((((var_1_35 || var_1_35) ? ((var_1_60 >= var_1_51) ? (var_1_1 == ((signed short int) (((((50) > (var_1_51)) ? (50) : (var_1_51))) + (var_1_37 + var_1_46)))) : (var_1_1 == ((signed short int) (var_1_46 + var_1_51)))) : ((var_1_46 != (var_1_51 % ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) ? ((! var_1_35) ? ((var_1_9 != var_1_60) ? (var_1_1 == ((signed short int) var_1_37)) : (var_1_1 == ((signed short int) var_1_46))) : (var_1_1 == ((signed short int) var_1_51))) : (var_1_1 == ((signed short int) var_1_37)))) && ((256 <= (var_1_10 + var_1_18)) ? ((var_1_35 || var_1_56) ? (var_1_11 == ((unsigned long int) (((((var_1_60 + 64u)) > (((((var_1_15) < (16u)) ? (var_1_15) : (16u))))) ? ((var_1_60 + 64u)) : (((((var_1_15) < (16u)) ? (var_1_15) : (16u)))))))) : 1) : (var_1_11 == ((unsigned long int) (var_1_60 + ((((32u) < ((1806311775u - var_1_15))) ? (32u) : ((1806311775u - var_1_15))))))))) && (((var_1_46 >> var_1_47) >= var_1_47) ? (var_1_15 == ((unsigned char) (var_1_16 - var_1_17))) : 1)) && (var_1_18 == ((unsigned char) (var_1_16 - (var_1_19 + (var_1_20 - var_1_21)))))) && ((var_1_16 != ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) ? (var_1_22 == ((float) ((((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))) - var_1_25) - var_1_26))) : 1)) && (var_1_27 == ((double) ((((((var_1_25) < (var_1_28)) ? (var_1_25) : (var_1_28))) - (var_1_29 + var_1_30)) + var_1_31)))) && ((((var_1_33 - var_1_20) / var_1_16) <= last_1_var_1_37) ? (var_1_32 == ((unsigned long int) last_1_var_1_37)) : (var_1_32 == ((unsigned long int) ((((last_1_var_1_57) < ((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20))) + (last_1_var_1_18 + var_1_16)))) ? (last_1_var_1_57) : ((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20))) + (last_1_var_1_18 + var_1_16))))))))) && ((var_1_21 < ((((var_1_33) < (var_1_20)) ? (var_1_33) : (var_1_20)))) ? ((! last_1_var_1_35) ? (var_1_35 == ((unsigned char) (((var_1_17 * 4) < last_1_var_1_58) || var_1_36))) : (var_1_35 == ((unsigned char) var_1_36))) : 1)) && (((var_1_59 < var_1_15) && var_1_35) ? ((var_1_24 >= (var_1_25 - var_1_23)) ? (var_1_37 == ((signed char) var_1_19)) : (((var_1_59 >> var_1_17) <= var_1_15) ? (var_1_37 == ((signed char) ((((var_1_20) < (var_1_21)) ? (var_1_20) : (var_1_21))))) : (var_1_37 == ((signed char) ((var_1_20 + var_1_21) - (16 + var_1_38)))))) : 1)) && ((var_1_32 <= var_1_53) ? (((var_1_46 / var_1_10) >= (((((((-2) < (var_1_17)) ? (-2) : (var_1_17))) < 0 ) ? -((((-2) < (var_1_17)) ? (-2) : (var_1_17))) : ((((-2) < (var_1_17)) ? (-2) : (var_1_17)))))) ? (var_1_39 == ((signed short int) var_1_17)) : (var_1_39 == ((signed short int) (64 - ((((var_1_17) < (var_1_19)) ? (var_1_17) : (var_1_19))))))) : (var_1_39 == ((signed short int) var_1_19)))) && ((9999.45 > var_1_25) ? (var_1_35 ? (var_1_40 == ((double) (var_1_23 - (var_1_29 + (var_1_30 + var_1_41))))) : 1) : 1)) && ((var_1_33 != ((((var_1_57) < 0 ) ? -(var_1_57) : (var_1_57)))) ? ((var_1_37 != var_1_9) ? (var_1_42 == ((unsigned long int) (var_1_43 - (var_1_20 + var_1_16)))) : (var_1_42 == ((unsigned long int) ((((var_1_46) > (((((var_1_43) > (var_1_47)) ? (var_1_43) : (var_1_47))))) ? (var_1_46) : (((((var_1_43) > (var_1_47)) ? (var_1_43) : (var_1_47))))))))) : ((((var_1_37 % var_1_20) < var_1_16) || (! var_1_56)) ? (var_1_42 == ((unsigned long int) ((((2u) < 0 ) ? -(2u) : (2u))))) : 1))) && ((var_1_29 > var_1_23) ? ((var_1_10 < (var_1_16 - var_1_59)) ? (((var_1_47 + var_1_21) > (var_1_32 + var_1_43)) ? (var_1_44 == ((float) (var_1_24 - ((((var_1_28) < ((var_1_25 + var_1_41))) ? (var_1_28) : ((var_1_25 + var_1_41))))))) : (var_1_44 == ((float) ((((var_1_30) < (var_1_23)) ? (var_1_30) : (var_1_23)))))) : (var_1_44 == ((float) (((((var_1_30) > (var_1_25)) ? (var_1_30) : (var_1_25))) - var_1_29)))) : (var_1_44 == ((float) (var_1_25 + var_1_30))))) && ((! var_1_36) ? ((var_1_23 < var_1_29) ? ((var_1_36 && (-5 < 10)) ? ((var_1_35 && var_1_62) ? (var_1_46 == ((unsigned char) ((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))))) : 1) : (var_1_46 == ((unsigned char) ((((var_1_17) > ((var_1_16 - var_1_20))) ? (var_1_17) : ((var_1_16 - var_1_20))))))) : 1) : (var_1_46 == ((unsigned char) ((((64) < 0 ) ? -(64) : (64))))))) && ((((((var_1_17) < (last_1_var_1_61)) ? (var_1_17) : (last_1_var_1_61))) >= (var_1_20 | last_1_var_1_55)) ? ((last_1_var_1_37 >= last_1_var_1_53) ? (var_1_47 == ((unsigned short int) (64 + var_1_19))) : (var_1_47 == ((unsigned short int) (((((((((var_1_48 - var_1_21)) > (((((4) > (var_1_38)) ? (4) : (var_1_38))))) ? ((var_1_48 - var_1_21)) : (((((4) > (var_1_38)) ? (4) : (var_1_38))))))) > (last_1_var_1_61)) ? ((((((var_1_48 - var_1_21)) > (((((4) > (var_1_38)) ? (4) : (var_1_38))))) ? ((var_1_48 - var_1_21)) : (((((4) > (var_1_38)) ? (4) : (var_1_38))))))) : (last_1_var_1_61)))))) : (var_1_47 == ((unsigned short int) ((((((var_1_49) > (var_1_50)) ? (var_1_49) : (var_1_50))) - ((((var_1_19) < (var_1_17)) ? (var_1_19) : (var_1_17)))) + 1))))) && (var_1_51 == ((signed char) (var_1_20 - (var_1_52 - ((((var_1_21) > (var_1_38)) ? (var_1_21) : (var_1_38)))))))) && (var_1_53 == ((signed long int) ((var_1_47 - 10) + (var_1_38 - var_1_60))))) && ((var_1_9 >= (var_1_19 - var_1_50)) ? (((last_1_var_1_46 * var_1_21) < last_1_var_1_46) ? (var_1_55 == ((unsigned long int) (last_1_var_1_47 + var_1_16))) : (last_1_var_1_35 ? (((((((61832) < (var_1_48)) ? (61832) : (var_1_48))) - var_1_17) > last_1_var_1_47) ? (var_1_55 == ((unsigned long int) var_1_52)) : (var_1_55 == ((unsigned long int) ((((last_1_var_1_61) > (var_1_43)) ? (last_1_var_1_61) : (var_1_43)))))) : (var_1_55 == ((unsigned long int) ((((var_1_48) > (last_1_var_1_32)) ? (var_1_48) : (last_1_var_1_32))))))) : (var_1_55 == ((unsigned long int) ((((var_1_21 + (var_1_48 + var_1_50)) < 0 ) ? -(var_1_21 + (var_1_48 + var_1_50)) : (var_1_21 + (var_1_48 + var_1_50)))))))) && (var_1_56 == ((unsigned char) (var_1_35 || var_1_36)))) && ((var_1_60 >= var_1_55) ? ((var_1_61 >= var_1_39) ? (var_1_57 == ((unsigned short int) ((var_1_19 + var_1_39) + ((((var_1_49) > (var_1_38)) ? (var_1_49) : (var_1_38)))))) : (var_1_57 == ((unsigned short int) (((((var_1_37 + var_1_49)) > (var_1_16)) ? ((var_1_37 + var_1_49)) : (var_1_16)))))) : (var_1_57 == ((unsigned short int) ((((var_1_47) < (var_1_19)) ? (var_1_47) : (var_1_19))))))) && (((var_1_60 >= (var_1_43 - var_1_16)) || var_1_35) ? (var_1_58 == ((signed short int) (var_1_20 - ((((var_1_16) < (((((var_1_21) > (100)) ? (var_1_21) : (100))))) ? (var_1_16) : (((((var_1_21) > (100)) ? (var_1_21) : (100))))))))) : 1)) && (var_1_59 == ((signed short int) var_1_15))) && (var_1_56 ? (var_1_60 == ((unsigned short int) var_1_17)) : (var_1_60 == ((unsigned short int) var_1_20)))) && ((255.4 > ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) ? (var_1_61 == ((unsigned long int) ((var_1_60 + var_1_52) + var_1_50))) : (var_1_61 == ((unsigned long int) (((((var_1_32) > (var_1_55)) ? (var_1_32) : (var_1_55))) + var_1_58))))) && (var_1_62 == ((unsigned char) var_1_36))
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
