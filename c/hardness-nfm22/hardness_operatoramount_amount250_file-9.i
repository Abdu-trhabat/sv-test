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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -128;
double var_1_4 = 99999999999.6;
signed long int var_1_6 = -5;
unsigned long int var_1_10 = 1;
unsigned long int var_1_13 = 1959567307;
unsigned long int var_1_14 = 1000000000;
unsigned long int var_1_15 = 1000000000;
signed char var_1_17 = -25;
signed char var_1_19 = 100;
signed char var_1_20 = 2;
signed char var_1_21 = 0;
signed char var_1_22 = 32;
signed char var_1_23 = -25;
signed char var_1_24 = 16;
signed long int var_1_25 = 10;
signed long int var_1_26 = -256;
signed char var_1_27 = 1;
float var_1_28 = 32.1;
unsigned short int var_1_29 = 37871;
float var_1_30 = 64.919;
float var_1_31 = 63.2;
float var_1_32 = 10000000.75;
float var_1_33 = 15.5;
float var_1_34 = 63.5;
float var_1_35 = 10000.75;
signed char var_1_36 = -25;
signed char var_1_38 = 64;
unsigned char var_1_39 = 100;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
float var_1_44 = 255.5;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
float var_1_48 = 9.25;
unsigned long int var_1_49 = 3965334784;
signed char var_1_50 = 64;
unsigned char var_1_51 = 50;
signed char var_1_52 = 25;
signed char var_1_53 = 10;
unsigned short int var_1_54 = 25;
unsigned long int var_1_55 = 3069941032;
unsigned short int var_1_56 = 256;
unsigned short int var_1_57 = 59103;
unsigned short int var_1_58 = 10000;
unsigned short int var_1_59 = 4;
unsigned long int var_1_60 = 32;
unsigned char var_1_62 = 0;
signed char var_1_63 = 0;
unsigned long int var_1_64 = 100000;
float var_1_65 = 49.2;
unsigned long int last_1_var_1_10 = 1;
signed char last_1_var_1_36 = -25;
unsigned char last_1_var_1_40 = 0;
float last_1_var_1_44 = 255.5;
signed char last_1_var_1_52 = 25;
signed char last_1_var_1_53 = 10;
unsigned short int last_1_var_1_54 = 25;
unsigned long int last_1_var_1_60 = 32;
signed char last_1_var_1_63 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_40) {
  var_1_26 = -10000000;
 } else {
  if (var_1_20 <= last_1_var_1_52) {
   if (last_1_var_1_63 <= ((var_1_15 / var_1_13) & last_1_var_1_10)) {
    if (last_1_var_1_63 > last_1_var_1_54) {
     var_1_26 = (((((var_1_19) > (last_1_var_1_63)) ? (var_1_19) : (last_1_var_1_63))) + var_1_22);
    } else {
     var_1_26 = ((((var_1_20) < ((64 + var_1_24))) ? (var_1_20) : ((64 + var_1_24))));
    }
   } else {
    var_1_26 = var_1_23;
   }
  } else {
   var_1_26 = var_1_21;
  }
 }
 unsigned char stepLocal_17 = last_1_var_1_44 >= (var_1_33 - var_1_35);
 unsigned long int stepLocal_16 = var_1_22 + (last_1_var_1_60 + last_1_var_1_53);
 if (var_1_15 >= stepLocal_16) {
  var_1_56 = ((((((((var_1_22) > ((last_1_var_1_60 + 2))) ? (var_1_22) : ((last_1_var_1_60 + 2))))) < (var_1_19)) ? (((((var_1_22) > ((last_1_var_1_60 + 2))) ? (var_1_22) : ((last_1_var_1_60 + 2))))) : (var_1_19)));
 } else {
  if ((25 != last_1_var_1_53) && stepLocal_17) {
   var_1_56 = (var_1_57 - ((var_1_58 - var_1_38) + 256));
  }
 }
 var_1_25 = var_1_14;
 if (var_1_20 <= (var_1_21 / 50)) {
  var_1_27 = 1;
 } else {
  var_1_27 = (((((var_1_23) > (var_1_20)) ? (var_1_23) : (var_1_20))) + var_1_21);
 }
 signed char stepLocal_8 = var_1_38;
 if ((var_1_21 / var_1_19) >= stepLocal_8) {
  var_1_39 = ((((var_1_38) > (var_1_22)) ? (var_1_38) : (var_1_22)));
 }
 var_1_44 = ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)));
 unsigned long int stepLocal_12 = var_1_49 - var_1_39;
 if (stepLocal_12 > 1u) {
  var_1_48 = ((((var_1_35) > (var_1_31)) ? (var_1_35) : (var_1_31)));
 }
 if (! var_1_46) {
  var_1_50 = ((((var_1_19) > (-2)) ? (var_1_19) : (-2)));
 }
 if (var_1_46) {
  var_1_52 = (var_1_24 + var_1_21);
 } else {
  if (var_1_38 <= -10) {
   var_1_52 = (var_1_21 + var_1_20);
  }
 }
 unsigned char stepLocal_15 = var_1_42;
 if (stepLocal_15 && (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) >= (var_1_55 - var_1_14))) {
  var_1_54 = 4;
 }
 var_1_62 = (! (var_1_46 && (! var_1_42)));
 var_1_63 = -5;
 var_1_64 = var_1_13;
 var_1_65 = var_1_34;
 if ((- var_1_13) <= 1u) {
  if (var_1_65 >= (var_1_44 + var_1_34)) {
   var_1_59 = (var_1_19 + var_1_26);
  } else {
   var_1_59 = (var_1_57 - var_1_58);
  }
 }
 signed long int stepLocal_1 = -2;
 unsigned long int stepLocal_0 = (((((((var_1_59) > (var_1_13)) ? (var_1_59) : (var_1_13)))) < (var_1_59)) ? (((((var_1_59) > (var_1_13)) ? (var_1_59) : (var_1_13)))) : (var_1_59));
 if (var_1_15 == stepLocal_0) {
  var_1_17 = ((var_1_19 - ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21)))) - var_1_22);
 } else {
  if (stepLocal_1 >= var_1_59) {
   var_1_17 = (((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) < (var_1_23)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_23))) + var_1_24);
  }
 }
 unsigned short int stepLocal_13 = var_1_56;
 if (stepLocal_13 > (var_1_25 * var_1_19)) {
  var_1_51 = ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38)));
 } else {
  if (var_1_65 > (var_1_4 + (var_1_65 * var_1_35))) {
   var_1_51 = ((((((64 + var_1_21)) > (var_1_19)) ? ((64 + var_1_21)) : (var_1_19))) + var_1_22);
  }
 }
 if ((- var_1_44) >= (var_1_65 / var_1_4)) {
  if (var_1_62) {
   var_1_1 = 10;
  }
 }
 unsigned long int stepLocal_11 = - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 if (var_1_54 < stepLocal_11) {
  var_1_45 = (var_1_46 || var_1_47);
 } else {
  if (var_1_62) {
   var_1_45 = (! var_1_46);
  }
 }
 unsigned char stepLocal_14 = ! var_1_62;
 if (var_1_46) {
  if (stepLocal_14 && (! (var_1_33 <= var_1_48))) {
   var_1_53 = var_1_20;
  }
 }
 if (var_1_26 == 0) {
  var_1_6 = (((((var_1_26 + var_1_56)) > (var_1_56)) ? ((var_1_26 + var_1_56)) : (var_1_56)));
 } else {
  if (var_1_51 < var_1_26) {
   var_1_6 = ((((var_1_56) > (((((var_1_56) > (var_1_26)) ? (var_1_56) : (var_1_26))))) ? (var_1_56) : (((((var_1_56) > (var_1_26)) ? (var_1_56) : (var_1_26))))));
  } else {
   var_1_6 = var_1_56;
  }
 }
 if (! (var_1_17 >= var_1_56)) {
  var_1_10 = (((((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51))) < 0 ) ? -((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51))) : ((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51)))));
 } else {
  if (var_1_45) {
   var_1_10 = ((var_1_13 + (var_1_14 + var_1_15)) - var_1_51);
  } else {
   if (! ((var_1_15 - 25) != var_1_39)) {
    var_1_10 = var_1_15;
   }
  }
 }
 unsigned long int stepLocal_10 = var_1_64;
 unsigned char stepLocal_9 = var_1_51;
 if (var_1_62) {
  if (var_1_6 > stepLocal_9) {
   var_1_40 = (! ((var_1_13 <= var_1_19) && (! var_1_41)));
  } else {
   if (var_1_59 >= stepLocal_10) {
    var_1_40 = (! 0);
   } else {
    var_1_40 = (var_1_41 && (var_1_42 && var_1_43));
   }
  }
 }
 if (var_1_62 || (var_1_26 == (var_1_56 + last_1_var_1_60))) {
  if (var_1_45) {
   if ((var_1_44 * var_1_31) != var_1_33) {
    var_1_60 = var_1_26;
   }
  } else {
   var_1_60 = var_1_26;
  }
 }
 if ((var_1_14 / (var_1_29 - var_1_19)) < var_1_21) {
  if (var_1_4 <= var_1_44) {
   var_1_28 = ((var_1_30 + var_1_31) + var_1_32);
  } else {
   if (var_1_1 > var_1_39) {
    if (! var_1_40) {
     var_1_28 = ((var_1_33 - var_1_34) + var_1_31);
    } else {
     var_1_28 = ((((var_1_30) > (((var_1_34 + var_1_33) - var_1_35))) ? (var_1_30) : (((var_1_34 + var_1_33) - var_1_35))));
    }
   } else {
    var_1_28 = ((var_1_33 - var_1_34) + ((((9.5f) < 0 ) ? -(9.5f) : (9.5f))));
   }
  }
 } else {
  var_1_28 = var_1_32;
 }
 unsigned char stepLocal_7 = var_1_40;
 signed char stepLocal_6 = var_1_17;
 signed long int stepLocal_5 = var_1_25;
 unsigned char stepLocal_4 = var_1_40;
 unsigned long int stepLocal_3 = var_1_15 + ((((var_1_56) < (var_1_59)) ? (var_1_56) : (var_1_59)));
 signed long int stepLocal_2 = var_1_6 * var_1_21;
 if ((var_1_33 - ((((var_1_35) < (var_1_34)) ? (var_1_35) : (var_1_34)))) != (- var_1_32)) {
  if (((var_1_59 / var_1_19) & (var_1_29 * last_1_var_1_36)) > stepLocal_6) {
   var_1_36 = var_1_21;
  } else {
   if (var_1_54 < stepLocal_3) {
    if ((var_1_13 == var_1_22) || stepLocal_4) {
     if (var_1_40 && stepLocal_7) {
      if (var_1_52 <= stepLocal_5) {
       var_1_36 = 32;
      }
     } else {
      var_1_36 = (((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24))) + var_1_23);
     }
    } else {
     if (var_1_54 >= stepLocal_2) {
      var_1_36 = ((((((var_1_19) > (var_1_38)) ? (var_1_19) : (var_1_38))) - 32) - (var_1_20 + var_1_21));
     }
    }
   } else {
    var_1_36 = var_1_23;
   }
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 1073741823);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 536870912);
 assume_abort_if_not(var_1_14 <= 1073741824);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 536870912);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 62);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -63);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65535);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -230584.3009213691390e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691390e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -230584.3009213691390e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691390e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -461168.6018427382800e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 62);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 2147483647);
 assume_abort_if_not(var_1_49 <= 4294967295);
 var_1_55 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_55 >= 2147483647);
 assume_abort_if_not(var_1_55 <= 4294967295);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 32767);
 assume_abort_if_not(var_1_57 <= 65534);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 8192);
 assume_abort_if_not(var_1_58 <= 16384);
}
void updateLastVariables() {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_63 = var_1_63;
}
int property() {
 return (((((((((((((((((((((((((((- var_1_44) >= (var_1_65 / var_1_4)) ? (var_1_62 ? (var_1_1 == ((signed long int) 10)) : 1) : 1) && ((var_1_26 == 0) ? (var_1_6 == ((signed long int) (((((var_1_26 + var_1_56)) > (var_1_56)) ? ((var_1_26 + var_1_56)) : (var_1_56))))) : ((var_1_51 < var_1_26) ? (var_1_6 == ((signed long int) ((((var_1_56) > (((((var_1_56) > (var_1_26)) ? (var_1_56) : (var_1_26))))) ? (var_1_56) : (((((var_1_56) > (var_1_26)) ? (var_1_56) : (var_1_26)))))))) : (var_1_6 == ((signed long int) var_1_56))))) && ((! (var_1_17 >= var_1_56)) ? (var_1_10 == ((unsigned long int) (((((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51))) < 0 ) ? -((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51))) : ((((var_1_39) < (var_1_51)) ? (var_1_39) : (var_1_51))))))) : (var_1_45 ? (var_1_10 == ((unsigned long int) ((var_1_13 + (var_1_14 + var_1_15)) - var_1_51))) : ((! ((var_1_15 - 25) != var_1_39)) ? (var_1_10 == ((unsigned long int) var_1_15)) : 1)))) && ((var_1_15 == ((((((((var_1_59) > (var_1_13)) ? (var_1_59) : (var_1_13)))) < (var_1_59)) ? (((((var_1_59) > (var_1_13)) ? (var_1_59) : (var_1_13)))) : (var_1_59)))) ? (var_1_17 == ((signed char) ((var_1_19 - ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21)))) - var_1_22))) : ((-2 >= var_1_59) ? (var_1_17 == ((signed char) (((((((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) < (var_1_23)) ? (((((var_1_21) < (var_1_20)) ? (var_1_21) : (var_1_20)))) : (var_1_23))) + var_1_24))) : 1))) && (var_1_25 == ((signed long int) var_1_14))) && (last_1_var_1_40 ? (var_1_26 == ((signed long int) -10000000)) : ((var_1_20 <= last_1_var_1_52) ? ((last_1_var_1_63 <= ((var_1_15 / var_1_13) & last_1_var_1_10)) ? ((last_1_var_1_63 > last_1_var_1_54) ? (var_1_26 == ((signed long int) (((((var_1_19) > (last_1_var_1_63)) ? (var_1_19) : (last_1_var_1_63))) + var_1_22))) : (var_1_26 == ((signed long int) ((((var_1_20) < ((64 + var_1_24))) ? (var_1_20) : ((64 + var_1_24))))))) : (var_1_26 == ((signed long int) var_1_23))) : (var_1_26 == ((signed long int) var_1_21))))) && ((var_1_20 <= (var_1_21 / 50)) ? (var_1_27 == ((signed char) 1)) : (var_1_27 == ((signed char) (((((var_1_23) > (var_1_20)) ? (var_1_23) : (var_1_20))) + var_1_21))))) && (((var_1_14 / (var_1_29 - var_1_19)) < var_1_21) ? ((var_1_4 <= var_1_44) ? (var_1_28 == ((float) ((var_1_30 + var_1_31) + var_1_32))) : ((var_1_1 > var_1_39) ? ((! var_1_40) ? (var_1_28 == ((float) ((var_1_33 - var_1_34) + var_1_31))) : (var_1_28 == ((float) ((((var_1_30) > (((var_1_34 + var_1_33) - var_1_35))) ? (var_1_30) : (((var_1_34 + var_1_33) - var_1_35))))))) : (var_1_28 == ((float) ((var_1_33 - var_1_34) + ((((9.5f) < 0 ) ? -(9.5f) : (9.5f)))))))) : (var_1_28 == ((float) var_1_32)))) && (((var_1_33 - ((((var_1_35) < (var_1_34)) ? (var_1_35) : (var_1_34)))) != (- var_1_32)) ? ((((var_1_59 / var_1_19) & (var_1_29 * last_1_var_1_36)) > var_1_17) ? (var_1_36 == ((signed char) var_1_21)) : ((var_1_54 < (var_1_15 + ((((var_1_56) < (var_1_59)) ? (var_1_56) : (var_1_59))))) ? (((var_1_13 == var_1_22) || var_1_40) ? ((var_1_40 && var_1_40) ? ((var_1_52 <= var_1_25) ? (var_1_36 == ((signed char) 32)) : 1) : (var_1_36 == ((signed char) (((((var_1_21) > (var_1_24)) ? (var_1_21) : (var_1_24))) + var_1_23)))) : ((var_1_54 >= (var_1_6 * var_1_21)) ? (var_1_36 == ((signed char) ((((((var_1_19) > (var_1_38)) ? (var_1_19) : (var_1_38))) - 32) - (var_1_20 + var_1_21)))) : 1)) : (var_1_36 == ((signed char) var_1_23)))) : 1)) && (((var_1_21 / var_1_19) >= var_1_38) ? (var_1_39 == ((unsigned char) ((((var_1_38) > (var_1_22)) ? (var_1_38) : (var_1_22))))) : 1)) && (var_1_62 ? ((var_1_6 > var_1_51) ? (var_1_40 == ((unsigned char) (! ((var_1_13 <= var_1_19) && (! var_1_41))))) : ((var_1_59 >= var_1_64) ? (var_1_40 == ((unsigned char) (! 0))) : (var_1_40 == ((unsigned char) (var_1_41 && (var_1_42 && var_1_43)))))) : 1)) && (var_1_44 == ((float) ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) && ((var_1_54 < (- ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) ? (var_1_45 == ((unsigned char) (var_1_46 || var_1_47))) : (var_1_62 ? (var_1_45 == ((unsigned char) (! var_1_46))) : 1))) && (((var_1_49 - var_1_39) > 1u) ? (var_1_48 == ((float) ((((var_1_35) > (var_1_31)) ? (var_1_35) : (var_1_31))))) : 1)) && ((! var_1_46) ? (var_1_50 == ((signed char) ((((var_1_19) > (-2)) ? (var_1_19) : (-2))))) : 1)) && ((var_1_56 > (var_1_25 * var_1_19)) ? (var_1_51 == ((unsigned char) ((((var_1_22) > (var_1_38)) ? (var_1_22) : (var_1_38))))) : ((var_1_65 > (var_1_4 + (var_1_65 * var_1_35))) ? (var_1_51 == ((unsigned char) ((((((64 + var_1_21)) > (var_1_19)) ? ((64 + var_1_21)) : (var_1_19))) + var_1_22))) : 1))) && (var_1_46 ? (var_1_52 == ((signed char) (var_1_24 + var_1_21))) : ((var_1_38 <= -10) ? (var_1_52 == ((signed char) (var_1_21 + var_1_20))) : 1))) && (var_1_46 ? (((! var_1_62) && (! (var_1_33 <= var_1_48))) ? (var_1_53 == ((signed char) var_1_20)) : 1) : 1)) && ((var_1_42 && (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) >= (var_1_55 - var_1_14))) ? (var_1_54 == ((unsigned short int) 4)) : 1)) && ((var_1_15 >= (var_1_22 + (last_1_var_1_60 + last_1_var_1_53))) ? (var_1_56 == ((unsigned short int) ((((((((var_1_22) > ((last_1_var_1_60 + 2))) ? (var_1_22) : ((last_1_var_1_60 + 2))))) < (var_1_19)) ? (((((var_1_22) > ((last_1_var_1_60 + 2))) ? (var_1_22) : ((last_1_var_1_60 + 2))))) : (var_1_19))))) : (((25 != last_1_var_1_53) && (last_1_var_1_44 >= (var_1_33 - var_1_35))) ? (var_1_56 == ((unsigned short int) (var_1_57 - ((var_1_58 - var_1_38) + 256)))) : 1))) && (((- var_1_13) <= 1u) ? ((var_1_65 >= (var_1_44 + var_1_34)) ? (var_1_59 == ((unsigned short int) (var_1_19 + var_1_26))) : (var_1_59 == ((unsigned short int) (var_1_57 - var_1_58)))) : 1)) && ((var_1_62 || (var_1_26 == (var_1_56 + last_1_var_1_60))) ? (var_1_45 ? (((var_1_44 * var_1_31) != var_1_33) ? (var_1_60 == ((unsigned long int) var_1_26)) : 1) : (var_1_60 == ((unsigned long int) var_1_26))) : 1)) && (var_1_62 == ((unsigned char) (! (var_1_46 && (! var_1_42)))))) && (var_1_63 == ((signed char) -5))) && (var_1_64 == ((unsigned long int) var_1_13))) && (var_1_65 == ((float) var_1_34))
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
