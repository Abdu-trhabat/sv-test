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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = -0.5;
float var_1_4 = 32.5;
float var_1_5 = 10.25;
float var_1_6 = 15.2;
unsigned long int var_1_8 = 2;
signed char var_1_13 = 0;
signed char var_1_15 = 16;
signed char var_1_16 = -5;
signed char var_1_17 = -1;
signed char var_1_18 = -16;
float var_1_19 = 7.5;
unsigned long int var_1_20 = 3975152375;
unsigned long int var_1_21 = 3052450394;
float var_1_22 = 127.25;
float var_1_23 = 2.75;
signed long int var_1_24 = 256;
double var_1_25 = 1.25;
unsigned short int var_1_26 = 8;
unsigned short int var_1_27 = 43767;
unsigned short int var_1_29 = 45986;
unsigned short int var_1_32 = 4;
unsigned short int var_1_33 = 22326;
signed short int var_1_36 = 1;
signed short int var_1_38 = 19977;
signed short int var_1_39 = 27962;
double var_1_42 = 2.2;
double var_1_43 = 64.8;
unsigned char var_1_44 = 8;
unsigned char var_1_45 = 25;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 32;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
signed short int var_1_52 = -5;
float var_1_53 = 0.55;
float var_1_54 = 100000.5;
float var_1_55 = 64.85;
unsigned short int var_1_56 = 200;
signed short int var_1_57 = 8;
signed short int var_1_58 = 30667;
signed short int var_1_59 = 21967;
unsigned short int var_1_60 = 32;
signed char var_1_61 = -4;
signed char var_1_62 = 64;
signed char var_1_63 = 10;
signed char var_1_64 = 4;
signed long int var_1_65 = -32;
signed long int var_1_68 = 1000000000;
signed long int var_1_69 = 1000000000;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 1;
unsigned long int var_1_73 = 4;
unsigned short int var_1_74 = 4;
signed char var_1_75 = -2;
signed long int var_1_76 = 64;
signed char last_1_var_1_13 = 0;
signed long int last_1_var_1_24 = 256;
unsigned char last_1_var_1_44 = 8;
unsigned char last_1_var_1_48 = 1;
signed short int last_1_var_1_52 = -5;
unsigned short int last_1_var_1_60 = 32;
signed char last_1_var_1_61 = -4;
signed long int last_1_var_1_65 = -32;
unsigned char last_1_var_1_71 = 0;
unsigned char last_1_var_1_72 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_6 = last_1_var_1_44 + (- last_1_var_1_61);
 if (last_1_var_1_72) {
  var_1_36 = (last_1_var_1_44 - last_1_var_1_44);
 } else {
  if (stepLocal_6 < 1) {
   var_1_36 = (((((-64 + var_1_17)) > (var_1_16)) ? ((-64 + var_1_17)) : (var_1_16)));
  } else {
   var_1_36 = ((((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))) - (last_1_var_1_44 + last_1_var_1_44)) - last_1_var_1_44);
  }
 }
 if (last_1_var_1_48) {
  if (last_1_var_1_71) {
   if ((last_1_var_1_24 * last_1_var_1_65) >= var_1_17) {
    var_1_57 = (((((var_1_45) < (last_1_var_1_44)) ? (var_1_45) : (last_1_var_1_44))) - ((((var_1_47) > (var_1_39)) ? (var_1_47) : (var_1_39))));
   } else {
    var_1_57 = (25 - (((((var_1_58) < (var_1_59)) ? (var_1_58) : (var_1_59))) - var_1_46));
   }
  }
 } else {
  var_1_57 = (last_1_var_1_44 - var_1_38);
 }
 if (last_1_var_1_48) {
  if (var_1_21 >= last_1_var_1_44) {
   var_1_32 = ((var_1_33 - last_1_var_1_44) + ((((last_1_var_1_44) < (last_1_var_1_44)) ? (last_1_var_1_44) : (last_1_var_1_44))));
  } else {
   if (((var_1_33 << last_1_var_1_44) * var_1_18) <= ((last_1_var_1_52 * var_1_27) ^ -4)) {
    if (last_1_var_1_60 > var_1_21) {
     var_1_32 = (var_1_27 - (last_1_var_1_44 + last_1_var_1_44));
    } else {
     var_1_32 = last_1_var_1_44;
    }
   } else {
    var_1_32 = var_1_27;
   }
  }
 } else {
  var_1_32 = last_1_var_1_44;
 }
 signed char stepLocal_3 = var_1_17;
 if (stepLocal_3 < (last_1_var_1_24 + (var_1_32 * 2))) {
  var_1_24 = var_1_16;
 }
 var_1_48 = ((var_1_49 || var_1_50) || (! var_1_51));
 var_1_72 = (! var_1_51);
 if (var_1_51) {
  var_1_73 = ((((var_1_63) > (var_1_59)) ? (var_1_63) : (var_1_59)));
 }
 if (var_1_48) {
  if (var_1_48) {
   var_1_42 = (((((var_1_23 + (1000.375 + var_1_43))) > (var_1_22)) ? ((var_1_23 + (1000.375 + var_1_43))) : (var_1_22)));
  }
 }
 if ((var_1_27 - last_1_var_1_44) > last_1_var_1_44) {
  var_1_44 = var_1_45;
 } else {
  if (! var_1_72) {
   var_1_44 = (var_1_46 - var_1_47);
  }
 }
 signed long int stepLocal_10 = -10;
 if (var_1_44 != stepLocal_10) {
  var_1_60 = var_1_44;
 } else {
  var_1_60 = (41209 - ((((var_1_44) < (var_1_33)) ? (var_1_44) : (var_1_33))));
 }
 if (var_1_49) {
  var_1_74 = var_1_44;
 } else {
  var_1_74 = 0;
 }
 var_1_76 = var_1_44;
 if (var_1_44 < (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - 16u)) {
  var_1_19 = (255.5f - var_1_5);
 } else {
  var_1_19 = (var_1_22 + var_1_23);
 }
 signed long int stepLocal_5 = (((var_1_44) < ((var_1_16 * var_1_15))) ? (var_1_44) : ((var_1_16 * var_1_15)));
 if ((var_1_23 + (- var_1_22)) <= ((var_1_4 + var_1_42) + var_1_5)) {
  var_1_26 = (var_1_27 - var_1_44);
 } else {
  if ((var_1_27 * var_1_17) > stepLocal_5) {
   var_1_26 = ((((var_1_27) < (var_1_44)) ? (var_1_27) : (var_1_44)));
  } else {
   var_1_26 = (((((var_1_27 - var_1_44)) < ((((((var_1_29 - var_1_44)) < (var_1_44)) ? ((var_1_29 - var_1_44)) : (var_1_44))))) ? ((var_1_27 - var_1_44)) : ((((((var_1_29 - var_1_44)) < (var_1_44)) ? ((var_1_29 - var_1_44)) : (var_1_44))))));
  }
 }
 signed char stepLocal_8 = var_1_18;
 if (stepLocal_8 == var_1_26) {
  if (((((var_1_5) > (var_1_22)) ? (var_1_5) : (var_1_22))) < var_1_42) {
   var_1_53 = (2.2f + ((((3.4f) > (var_1_22)) ? (3.4f) : (var_1_22))));
  } else {
   var_1_53 = (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) + (var_1_54 + var_1_55));
  }
 }
 unsigned short int stepLocal_9 = var_1_26;
 if (stepLocal_9 > var_1_20) {
  var_1_56 = (var_1_29 - var_1_46);
 }
 if (var_1_5 > (var_1_53 * var_1_43)) {
  var_1_75 = ((((var_1_64) > ((var_1_15 + 1))) ? (var_1_64) : ((var_1_15 + 1))));
 } else {
  var_1_75 = (((((var_1_62 - var_1_63)) > (var_1_16)) ? ((var_1_62 - var_1_63)) : (var_1_16)));
 }
 if (var_1_5 >= var_1_4) {
  if (var_1_57 > (var_1_32 << var_1_24)) {
   var_1_71 = (var_1_72 && var_1_50);
  }
 } else {
  if ((((((var_1_44) < (var_1_21)) ? (var_1_44) : (var_1_21))) << var_1_32) != var_1_75) {
   var_1_71 = (! var_1_49);
  }
 }
 unsigned char stepLocal_7 = var_1_56 <= var_1_57;
 if (var_1_72 || stepLocal_7) {
  var_1_52 = var_1_46;
 }
 if (((var_1_4 - var_1_5) * var_1_19) <= var_1_6) {
  var_1_8 = var_1_26;
 } else {
  var_1_8 = ((((((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) > (((((var_1_32) < (var_1_26)) ? (var_1_32) : (var_1_26))))) ? (((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) : (((((var_1_32) < (var_1_26)) ? (var_1_32) : (var_1_26))))));
 }
 unsigned char stepLocal_4 = var_1_44 >= var_1_44;
 if ((var_1_48 || (var_1_23 != var_1_53)) || stepLocal_4) {
  var_1_25 = (var_1_23 + var_1_22);
 }
 signed long int stepLocal_2 = var_1_16 << var_1_73;
 unsigned char stepLocal_1 = var_1_25 >= var_1_4;
 if (var_1_72 && stepLocal_1) {
  var_1_13 = ((var_1_15 + var_1_16) + var_1_17);
 } else {
  if (stepLocal_2 > last_1_var_1_13) {
   var_1_13 = (((((var_1_15 + var_1_16) + ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))) < 0 ) ? -((var_1_15 + var_1_16) + ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))) : ((var_1_15 + var_1_16) + ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))))));
  }
 }
 signed char stepLocal_0 = var_1_13;
 if (var_1_71) {
  if ((-5 + 64) < stepLocal_0) {
   var_1_1 = (((((var_1_4 - var_1_5)) > ((var_1_6 - 5.4f))) ? ((var_1_4 - var_1_5)) : ((var_1_6 - 5.4f))));
  } else {
   var_1_1 = ((((((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) < (var_1_6)) ? (((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) : (var_1_6)));
  }
 } else {
  if (var_1_48) {
   var_1_1 = ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)));
  } else {
   var_1_1 = (var_1_5 - var_1_4);
  }
 }
 signed short int stepLocal_12 = var_1_36;
 unsigned char stepLocal_11 = var_1_49;
 if (var_1_1 >= (var_1_6 * var_1_1)) {
  if (var_1_17 >= stepLocal_12) {
   var_1_61 = (var_1_62 - var_1_63);
  } else {
   var_1_61 = ((((var_1_15) < (var_1_64)) ? (var_1_15) : (var_1_64)));
  }
 } else {
  if (var_1_51 && stepLocal_11) {
   var_1_61 = (var_1_62 - var_1_63);
  } else {
   var_1_61 = (var_1_17 + var_1_15);
  }
 }
 signed long int stepLocal_15 = (((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44));
 signed long int stepLocal_14 = (var_1_36 * var_1_45) / (var_1_29 - var_1_59);
 signed short int stepLocal_13 = var_1_57;
 if (stepLocal_15 < (var_1_44 ^ var_1_45)) {
  var_1_65 = (var_1_32 + 25);
 } else {
  if (var_1_46 > stepLocal_13) {
   if (var_1_51) {
    if (stepLocal_14 == var_1_44) {
     var_1_65 = (((((var_1_36) < (((((var_1_45) < (var_1_61)) ? (var_1_45) : (var_1_61))))) ? (var_1_36) : (((((var_1_45) < (var_1_61)) ? (var_1_45) : (var_1_61)))))) + var_1_63);
    } else {
     var_1_65 = (((var_1_68 - var_1_44) - (var_1_69 - var_1_45)) + var_1_44);
    }
   } else {
    var_1_65 = (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) - (var_1_44 + (var_1_69 - var_1_58)));
   }
  } else {
   var_1_65 = (var_1_29 - var_1_44);
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -31);
 assume_abort_if_not(var_1_15 <= 32);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -31);
 assume_abort_if_not(var_1_16 <= 31);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967295);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 2147483647);
 assume_abort_if_not(var_1_21 <= 4294967295);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 32767);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 16383);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 16382);
 assume_abort_if_not(var_1_38 <= 32766);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 16382);
 assume_abort_if_not(var_1_39 <= 32766);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -230584.3009213691390e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691390e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 254);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 127);
 assume_abort_if_not(var_1_46 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 1);
 assume_abort_if_not(var_1_51 <= 1);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -230584.3009213691390e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691390e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_58 >= 16383);
 assume_abort_if_not(var_1_58 <= 32766);
 var_1_59 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_59 >= 16383);
 assume_abort_if_not(var_1_59 <= 32766);
 var_1_62 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_62 >= -1);
 assume_abort_if_not(var_1_62 <= 126);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= 0);
 assume_abort_if_not(var_1_63 <= 126);
 var_1_64 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_64 >= -127);
 assume_abort_if_not(var_1_64 <= 126);
 var_1_68 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_68 >= 536870911);
 assume_abort_if_not(var_1_68 <= 1073741823);
 var_1_69 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_69 >= 536870911);
 assume_abort_if_not(var_1_69 <= 1073741823);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_52 = var_1_52;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_71 = var_1_71;
 last_1_var_1_72 = var_1_72;
}
int property() {
 return ((((((((((((((((((((((((var_1_71 ? (((-5 + 64) < var_1_13) ? (var_1_1 == ((float) (((((var_1_4 - var_1_5)) > ((var_1_6 - 5.4f))) ? ((var_1_4 - var_1_5)) : ((var_1_6 - 5.4f)))))) : (var_1_1 == ((float) ((((((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) < (var_1_6)) ? (((((-0.5f) < (2.35f)) ? (-0.5f) : (2.35f)))) : (var_1_6)))))) : (var_1_48 ? (var_1_1 == ((float) ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4))))) : (var_1_1 == ((float) (var_1_5 - var_1_4))))) && ((((var_1_4 - var_1_5) * var_1_19) <= var_1_6) ? (var_1_8 == ((unsigned long int) var_1_26)) : (var_1_8 == ((unsigned long int) ((((((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) > (((((var_1_32) < (var_1_26)) ? (var_1_32) : (var_1_26))))) ? (((((var_1_26) > (var_1_32)) ? (var_1_26) : (var_1_32)))) : (((((var_1_32) < (var_1_26)) ? (var_1_32) : (var_1_26)))))))))) && ((var_1_72 && (var_1_25 >= var_1_4)) ? (var_1_13 == ((signed char) ((var_1_15 + var_1_16) + var_1_17))) : (((var_1_16 << var_1_73) > last_1_var_1_13) ? (var_1_13 == ((signed char) (((((var_1_15 + var_1_16) + ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))) < 0 ) ? -((var_1_15 + var_1_16) + ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))) : ((var_1_15 + var_1_16) + ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))))))) : 1))) && ((var_1_44 < (((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21))) - 16u)) ? (var_1_19 == ((float) (255.5f - var_1_5))) : (var_1_19 == ((float) (var_1_22 + var_1_23))))) && ((var_1_17 < (last_1_var_1_24 + (var_1_32 * 2))) ? (var_1_24 == ((signed long int) var_1_16)) : 1)) && (((var_1_48 || (var_1_23 != var_1_53)) || (var_1_44 >= var_1_44)) ? (var_1_25 == ((double) (var_1_23 + var_1_22))) : 1)) && (((var_1_23 + (- var_1_22)) <= ((var_1_4 + var_1_42) + var_1_5)) ? (var_1_26 == ((unsigned short int) (var_1_27 - var_1_44))) : (((var_1_27 * var_1_17) > ((((var_1_44) < ((var_1_16 * var_1_15))) ? (var_1_44) : ((var_1_16 * var_1_15))))) ? (var_1_26 == ((unsigned short int) ((((var_1_27) < (var_1_44)) ? (var_1_27) : (var_1_44))))) : (var_1_26 == ((unsigned short int) (((((var_1_27 - var_1_44)) < ((((((var_1_29 - var_1_44)) < (var_1_44)) ? ((var_1_29 - var_1_44)) : (var_1_44))))) ? ((var_1_27 - var_1_44)) : ((((((var_1_29 - var_1_44)) < (var_1_44)) ? ((var_1_29 - var_1_44)) : (var_1_44))))))))))) && (last_1_var_1_48 ? ((var_1_21 >= last_1_var_1_44) ? (var_1_32 == ((unsigned short int) ((var_1_33 - last_1_var_1_44) + ((((last_1_var_1_44) < (last_1_var_1_44)) ? (last_1_var_1_44) : (last_1_var_1_44)))))) : ((((var_1_33 << last_1_var_1_44) * var_1_18) <= ((last_1_var_1_52 * var_1_27) ^ -4)) ? ((last_1_var_1_60 > var_1_21) ? (var_1_32 == ((unsigned short int) (var_1_27 - (last_1_var_1_44 + last_1_var_1_44)))) : (var_1_32 == ((unsigned short int) last_1_var_1_44))) : (var_1_32 == ((unsigned short int) var_1_27)))) : (var_1_32 == ((unsigned short int) last_1_var_1_44)))) && (last_1_var_1_72 ? (var_1_36 == ((signed short int) (last_1_var_1_44 - last_1_var_1_44))) : (((last_1_var_1_44 + (- last_1_var_1_61)) < 1) ? (var_1_36 == ((signed short int) (((((-64 + var_1_17)) > (var_1_16)) ? ((-64 + var_1_17)) : (var_1_16))))) : (var_1_36 == ((signed short int) ((((((var_1_38) > (var_1_39)) ? (var_1_38) : (var_1_39))) - (last_1_var_1_44 + last_1_var_1_44)) - last_1_var_1_44)))))) && (var_1_48 ? (var_1_48 ? (var_1_42 == ((double) (((((var_1_23 + (1000.375 + var_1_43))) > (var_1_22)) ? ((var_1_23 + (1000.375 + var_1_43))) : (var_1_22))))) : 1) : 1)) && (((var_1_27 - last_1_var_1_44) > last_1_var_1_44) ? (var_1_44 == ((unsigned char) var_1_45)) : ((! var_1_72) ? (var_1_44 == ((unsigned char) (var_1_46 - var_1_47))) : 1))) && (var_1_48 == ((unsigned char) ((var_1_49 || var_1_50) || (! var_1_51))))) && ((var_1_72 || (var_1_56 <= var_1_57)) ? (var_1_52 == ((signed short int) var_1_46)) : 1)) && ((var_1_18 == var_1_26) ? ((((((var_1_5) > (var_1_22)) ? (var_1_5) : (var_1_22))) < var_1_42) ? (var_1_53 == ((float) (2.2f + ((((3.4f) > (var_1_22)) ? (3.4f) : (var_1_22)))))) : (var_1_53 == ((float) (((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))) + (var_1_54 + var_1_55))))) : 1)) && ((var_1_26 > var_1_20) ? (var_1_56 == ((unsigned short int) (var_1_29 - var_1_46))) : 1)) && (last_1_var_1_48 ? (last_1_var_1_71 ? (((last_1_var_1_24 * last_1_var_1_65) >= var_1_17) ? (var_1_57 == ((signed short int) (((((var_1_45) < (last_1_var_1_44)) ? (var_1_45) : (last_1_var_1_44))) - ((((var_1_47) > (var_1_39)) ? (var_1_47) : (var_1_39)))))) : (var_1_57 == ((signed short int) (25 - (((((var_1_58) < (var_1_59)) ? (var_1_58) : (var_1_59))) - var_1_46))))) : 1) : (var_1_57 == ((signed short int) (last_1_var_1_44 - var_1_38))))) && ((var_1_44 != -10) ? (var_1_60 == ((unsigned short int) var_1_44)) : (var_1_60 == ((unsigned short int) (41209 - ((((var_1_44) < (var_1_33)) ? (var_1_44) : (var_1_33)))))))) && ((var_1_1 >= (var_1_6 * var_1_1)) ? ((var_1_17 >= var_1_36) ? (var_1_61 == ((signed char) (var_1_62 - var_1_63))) : (var_1_61 == ((signed char) ((((var_1_15) < (var_1_64)) ? (var_1_15) : (var_1_64)))))) : ((var_1_51 && var_1_49) ? (var_1_61 == ((signed char) (var_1_62 - var_1_63))) : (var_1_61 == ((signed char) (var_1_17 + var_1_15)))))) && ((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) < (var_1_44 ^ var_1_45)) ? (var_1_65 == ((signed long int) (var_1_32 + 25))) : ((var_1_46 > var_1_57) ? (var_1_51 ? ((((var_1_36 * var_1_45) / (var_1_29 - var_1_59)) == var_1_44) ? (var_1_65 == ((signed long int) (((((var_1_36) < (((((var_1_45) < (var_1_61)) ? (var_1_45) : (var_1_61))))) ? (var_1_36) : (((((var_1_45) < (var_1_61)) ? (var_1_45) : (var_1_61)))))) + var_1_63))) : (var_1_65 == ((signed long int) (((var_1_68 - var_1_44) - (var_1_69 - var_1_45)) + var_1_44)))) : (var_1_65 == ((signed long int) (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) - (var_1_44 + (var_1_69 - var_1_58)))))) : (var_1_65 == ((signed long int) (var_1_29 - var_1_44)))))) && ((var_1_5 >= var_1_4) ? ((var_1_57 > (var_1_32 << var_1_24)) ? (var_1_71 == ((unsigned char) (var_1_72 && var_1_50))) : 1) : (((((((var_1_44) < (var_1_21)) ? (var_1_44) : (var_1_21))) << var_1_32) != var_1_75) ? (var_1_71 == ((unsigned char) (! var_1_49))) : 1))) && (var_1_72 == ((unsigned char) (! var_1_51)))) && (var_1_51 ? (var_1_73 == ((unsigned long int) ((((var_1_63) > (var_1_59)) ? (var_1_63) : (var_1_59))))) : 1)) && (var_1_49 ? (var_1_74 == ((unsigned short int) var_1_44)) : (var_1_74 == ((unsigned short int) 0)))) && ((var_1_5 > (var_1_53 * var_1_43)) ? (var_1_75 == ((signed char) ((((var_1_64) > ((var_1_15 + 1))) ? (var_1_64) : ((var_1_15 + 1)))))) : (var_1_75 == ((signed char) (((((var_1_62 - var_1_63)) > (var_1_16)) ? ((var_1_62 - var_1_63)) : (var_1_16))))))) && (var_1_76 == ((signed long int) var_1_44))
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
