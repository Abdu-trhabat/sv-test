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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch68Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 10.875;
float var_1_4 = 64.75;
float var_1_5 = 4.75;
float var_1_6 = 63.95;
unsigned long int var_1_7 = 32;
unsigned long int var_1_8 = 4162005566;
float var_1_11 = 0.5;
double var_1_12 = 15.5;
float var_1_13 = 31.8;
float var_1_14 = 0.0;
float var_1_15 = 256.75;
float var_1_16 = 15.8;
unsigned short int var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned long int var_1_20 = 1000;
unsigned char var_1_21 = 50;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 100;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 16;
unsigned short int var_1_29 = 64;
signed short int var_1_30 = 5;
unsigned long int var_1_31 = 10000;
unsigned long int var_1_34 = 3428674879;
unsigned short int var_1_35 = 2;
double var_1_36 = 4.85;
signed short int var_1_37 = -10;
signed char var_1_38 = 5;
signed short int var_1_40 = 27467;
signed short int var_1_41 = 16;
float var_1_42 = 4.2;
float var_1_43 = 4.625;
float var_1_44 = 0.0;
signed char var_1_45 = -32;
double var_1_46 = 0.0;
signed char var_1_47 = 32;
signed char var_1_48 = 100;
float var_1_49 = 255.45;
float var_1_50 = 2.5;
signed char var_1_51 = 50;
signed char var_1_52 = 1;
signed char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned short int var_1_58 = 10;
unsigned short int var_1_59 = 5;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
signed short int var_1_62 = -64;
float var_1_64 = 7.5;
signed long int var_1_65 = -32;
signed char var_1_67 = 10;
unsigned long int var_1_68 = 32;
signed long int var_1_69 = 2133519394;
float last_1_var_1_11 = 0.5;
unsigned char last_1_var_1_21 = 50;
unsigned short int last_1_var_1_29 = 64;
unsigned long int last_1_var_1_31 = 10000;
unsigned short int last_1_var_1_35 = 2;
signed short int last_1_var_1_37 = -10;
signed char last_1_var_1_51 = 50;
unsigned char last_1_var_1_54 = 0;
signed short int last_1_var_1_62 = -64;
signed long int last_1_var_1_65 = -32;
unsigned long int last_1_var_1_68 = 32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_13 = var_1_27;
 signed long int stepLocal_12 = last_1_var_1_29;
 if (var_1_43 < var_1_5) {
  if (stepLocal_13 == var_1_25) {
   var_1_54 = (var_1_55 && var_1_56);
  } else {
   var_1_54 = var_1_56;
  }
 } else {
  if ((var_1_14 - (var_1_46 - var_1_16)) > var_1_4) {
   if ((last_1_var_1_65 >> (var_1_58 - var_1_59)) <= stepLocal_12) {
    var_1_54 = ((var_1_18 && (var_1_60 || var_1_61)) || (! var_1_55));
   } else {
    var_1_54 = (! var_1_61);
   }
  }
 }
 unsigned char stepLocal_2 = (~ last_1_var_1_21) < last_1_var_1_29;
 if (((var_1_8 / 10u) < last_1_var_1_21) || stepLocal_2) {
  if (! (16.75f <= var_1_12)) {
   if (last_1_var_1_54) {
    var_1_17 = last_1_var_1_21;
   }
  } else {
   var_1_17 = last_1_var_1_21;
  }
 }
 unsigned char stepLocal_3 = -256 >= var_1_17;
 if ((var_1_6 >= (var_1_14 / var_1_12)) && stepLocal_3) {
  var_1_21 = ((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) < 0 ) ? -((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) : ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) - (var_1_26 - (var_1_27 + var_1_28)));
 } else {
  var_1_21 = (((((var_1_24 + (var_1_26 - var_1_28))) < (var_1_25)) ? ((var_1_24 + (var_1_26 - var_1_28))) : (var_1_25)));
 }
 unsigned long int stepLocal_14 = var_1_28 + last_1_var_1_68;
 if (stepLocal_14 < last_1_var_1_31) {
  var_1_62 = last_1_var_1_62;
 }
 if (var_1_14 <= ((-0.4f / var_1_12) + (last_1_var_1_11 * var_1_16))) {
  var_1_30 = (var_1_28 - var_1_25);
 } else {
  if (last_1_var_1_54) {
   if ((var_1_27 / var_1_25) < (((((((last_1_var_1_51) < (last_1_var_1_21)) ? (last_1_var_1_51) : (last_1_var_1_21))) < 0 ) ? -((((last_1_var_1_51) < (last_1_var_1_21)) ? (last_1_var_1_51) : (last_1_var_1_21))) : ((((last_1_var_1_51) < (last_1_var_1_21)) ? (last_1_var_1_51) : (last_1_var_1_21)))))) {
    var_1_30 = last_1_var_1_37;
   } else {
    var_1_30 = var_1_27;
   }
  }
 }
 if (var_1_15 >= var_1_6) {
  var_1_29 = (var_1_27 + var_1_26);
 }
 if (((var_1_46 - var_1_15) - var_1_36) < 7.2) {
  var_1_45 = ((((((((((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) > (-1)) ? (((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) : (-1)))) < ((var_1_47 - var_1_48))) ? (((((((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) > (-1)) ? (((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) : (-1)))) : ((var_1_47 - var_1_48))));
 }
 if (var_1_54) {
  var_1_49 = (((8.5755224913009244E18f - var_1_50) - var_1_16) - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))));
 }
 if (var_1_54) {
  var_1_67 = var_1_59;
 }
 if (var_1_54) {
  var_1_65 = var_1_45;
 } else {
  var_1_65 = 16;
 }
 signed short int stepLocal_6 = var_1_30;
 if (stepLocal_6 > (((((last_1_var_1_35) < (var_1_26)) ? (last_1_var_1_35) : (var_1_26))) | var_1_29)) {
  if ((((((var_1_36) > (var_1_13)) ? (var_1_36) : (var_1_13))) - (var_1_16 + var_1_15)) <= 0.5) {
   var_1_35 = var_1_21;
  } else {
   var_1_35 = var_1_26;
  }
 }
 if (var_1_5 < var_1_4) {
  var_1_7 = (((((var_1_8 - var_1_17)) < (var_1_29)) ? ((var_1_8 - var_1_17)) : (var_1_29)));
 } else {
  var_1_7 = var_1_17;
 }
 signed long int stepLocal_1 = var_1_29 + var_1_17;
 if (4 < stepLocal_1) {
  if (((- var_1_4) / var_1_12) <= var_1_5) {
   var_1_11 = (32.5f + var_1_5);
  } else {
   var_1_11 = (var_1_13 - (var_1_14 - ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))));
  }
 }
 if (var_1_54) {
  var_1_41 = ((((1) < (((((var_1_26 - var_1_65) < 0 ) ? -(var_1_26 - var_1_65) : (var_1_26 - var_1_65))))) ? (1) : (((((var_1_26 - var_1_65) < 0 ) ? -(var_1_26 - var_1_65) : (var_1_26 - var_1_65))))));
 }
 unsigned long int stepLocal_9 = (var_1_41 % 5u) * var_1_26;
 unsigned char stepLocal_8 = var_1_54;
 signed short int stepLocal_7 = var_1_30;
 if (((var_1_62 * var_1_41) % ((((var_1_26) > (var_1_38)) ? (var_1_26) : (var_1_38)))) >= stepLocal_7) {
  if (stepLocal_8 || ((var_1_21 * var_1_8) < var_1_25)) {
   if (stepLocal_9 > var_1_21) {
    var_1_37 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
   }
  }
 } else {
  var_1_37 = (var_1_17 - (var_1_40 - var_1_23));
 }
 if ((- var_1_35) >= last_1_var_1_51) {
  if ((var_1_8 < var_1_21) || (var_1_43 >= var_1_14)) {
   if (1.0000000002E9f <= (- var_1_44)) {
    if (var_1_37 >= (var_1_62 + (var_1_25 - var_1_17))) {
     var_1_51 = ((((var_1_28) < (var_1_47)) ? (var_1_28) : (var_1_47)));
    } else {
     var_1_51 = (var_1_28 + (var_1_27 + ((((var_1_52) > (var_1_53)) ? (var_1_52) : (var_1_53)))));
    }
   }
  } else {
   var_1_51 = (((((4) > (var_1_48)) ? (4) : (var_1_48))) - 64);
  }
 } else {
  var_1_51 = ((var_1_27 - var_1_28) + ((((var_1_53) > (var_1_52)) ? (var_1_53) : (var_1_52))));
 }
 signed char stepLocal_0 = var_1_51;
 if (stepLocal_0 >= var_1_45) {
  var_1_1 = ((((var_1_4) > (9.999999996E8f)) ? (var_1_4) : (9.999999996E8f)));
 } else {
  var_1_1 = (((((var_1_5 + var_1_6)) > (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)));
 }
 if (var_1_14 <= var_1_1) {
  var_1_20 = var_1_8;
 }
 unsigned char stepLocal_5 = var_1_21;
 signed long int stepLocal_4 = var_1_35 % (var_1_26 + var_1_25);
 if (var_1_21 >= stepLocal_4) {
  if (var_1_7 <= stepLocal_5) {
   if (var_1_54) {
    if (! (var_1_11 < var_1_13)) {
     if (! var_1_54) {
      var_1_31 = (var_1_28 + (var_1_24 + (var_1_23 + var_1_26)));
     }
    }
   }
  }
 } else {
  if ((- 199.496f) <= (- var_1_15)) {
   var_1_31 = (((((((((var_1_8) < (var_1_34)) ? (var_1_8) : (var_1_34))) - var_1_23)) < (var_1_21)) ? ((((((var_1_8) < (var_1_34)) ? (var_1_8) : (var_1_34))) - var_1_23)) : (var_1_21)));
  } else {
   var_1_31 = ((((var_1_29) < (var_1_23)) ? (var_1_29) : (var_1_23)));
  }
 }
 signed char stepLocal_15 = var_1_51;
 if ((var_1_53 & (var_1_35 / var_1_25)) == stepLocal_15) {
  var_1_64 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 }
 unsigned char stepLocal_17 = var_1_21;
 unsigned long int stepLocal_16 = var_1_17 - (var_1_69 - var_1_31);
 if ((var_1_25 + (var_1_62 * var_1_20)) > stepLocal_17) {
  if (stepLocal_16 <= (var_1_26 & var_1_30)) {
   var_1_68 = var_1_20;
  } else {
   var_1_68 = var_1_58;
  }
 } else {
  var_1_68 = var_1_35;
 }
 unsigned char stepLocal_11 = var_1_14 >= (var_1_36 * var_1_64);
 unsigned long int stepLocal_10 = var_1_8 * var_1_27;
 if (stepLocal_11 || var_1_54) {
  if (! ((! var_1_54) && var_1_54)) {
   if (var_1_21 > stepLocal_10) {
    var_1_42 = (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))));
   }
  } else {
   if ((var_1_13 * (var_1_4 / var_1_43)) <= (- (- var_1_16))) {
    var_1_42 = var_1_15;
   } else {
    var_1_42 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
   }
  }
 } else {
  var_1_42 = (var_1_14 - (var_1_44 - var_1_16));
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 4611686.018427382800e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 127);
 assume_abort_if_not(var_1_23 <= 255);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 127);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 63);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 31);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 2147483647);
 assume_abort_if_not(var_1_34 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -128);
 assume_abort_if_not(var_1_38 <= 127);
 assume_abort_if_not(var_1_38 != 0);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 16383);
 assume_abort_if_not(var_1_40 <= 32766);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 assume_abort_if_not(var_1_43 != 0.0F);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= 4611686.018427382800e+12F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 4611686.018427387900e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -1);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -31);
 assume_abort_if_not(var_1_52 <= 31);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -31);
 assume_abort_if_not(var_1_53 <= 31);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 1);
 assume_abort_if_not(var_1_55 <= 1);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 1);
 assume_abort_if_not(var_1_56 <= 1);
 var_1_58 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_58 >= 8);
 assume_abort_if_not(var_1_58 <= 16);
 var_1_59 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_59 >= 0);
 assume_abort_if_not(var_1_59 <= 8);
 var_1_60 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_60 >= 0);
 assume_abort_if_not(var_1_60 <= 0);
 var_1_61 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 0);
 var_1_69 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_69 >= 1073741823);
 assume_abort_if_not(var_1_69 <= 2147483647);
}
void updateLastVariables() {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_35 = var_1_35;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_62 = var_1_62;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_68 = var_1_68;
}
int property() {
 return ((((((((((((((((((((((var_1_51 >= var_1_45) ? (var_1_1 == ((float) ((((var_1_4) > (9.999999996E8f)) ? (var_1_4) : (9.999999996E8f))))) : (var_1_1 == ((float) (((((var_1_5 + var_1_6)) > (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)))))) && ((var_1_5 < var_1_4) ? (var_1_7 == ((unsigned long int) (((((var_1_8 - var_1_17)) < (var_1_29)) ? ((var_1_8 - var_1_17)) : (var_1_29))))) : (var_1_7 == ((unsigned long int) var_1_17)))) && ((4 < (var_1_29 + var_1_17)) ? ((((- var_1_4) / var_1_12) <= var_1_5) ? (var_1_11 == ((float) (32.5f + var_1_5))) : (var_1_11 == ((float) (var_1_13 - (var_1_14 - ((((var_1_15) > (var_1_16)) ? (var_1_15) : (var_1_16)))))))) : 1)) && ((((var_1_8 / 10u) < last_1_var_1_21) || ((~ last_1_var_1_21) < last_1_var_1_29)) ? ((! (16.75f <= var_1_12)) ? (last_1_var_1_54 ? (var_1_17 == ((unsigned short int) last_1_var_1_21)) : 1) : (var_1_17 == ((unsigned short int) last_1_var_1_21))) : 1)) && ((var_1_14 <= var_1_1) ? (var_1_20 == ((unsigned long int) var_1_8)) : 1)) && (((var_1_6 >= (var_1_14 / var_1_12)) && (-256 >= var_1_17)) ? (var_1_21 == ((unsigned char) ((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) < 0 ) ? -((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) : ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) - (var_1_26 - (var_1_27 + var_1_28))))) : (var_1_21 == ((unsigned char) (((((var_1_24 + (var_1_26 - var_1_28))) < (var_1_25)) ? ((var_1_24 + (var_1_26 - var_1_28))) : (var_1_25))))))) && ((var_1_15 >= var_1_6) ? (var_1_29 == ((unsigned short int) (var_1_27 + var_1_26))) : 1)) && ((var_1_14 <= ((-0.4f / var_1_12) + (last_1_var_1_11 * var_1_16))) ? (var_1_30 == ((signed short int) (var_1_28 - var_1_25))) : (last_1_var_1_54 ? (((var_1_27 / var_1_25) < (((((((last_1_var_1_51) < (last_1_var_1_21)) ? (last_1_var_1_51) : (last_1_var_1_21))) < 0 ) ? -((((last_1_var_1_51) < (last_1_var_1_21)) ? (last_1_var_1_51) : (last_1_var_1_21))) : ((((last_1_var_1_51) < (last_1_var_1_21)) ? (last_1_var_1_51) : (last_1_var_1_21)))))) ? (var_1_30 == ((signed short int) last_1_var_1_37)) : (var_1_30 == ((signed short int) var_1_27))) : 1))) && ((var_1_21 >= (var_1_35 % (var_1_26 + var_1_25))) ? ((var_1_7 <= var_1_21) ? (var_1_54 ? ((! (var_1_11 < var_1_13)) ? ((! var_1_54) ? (var_1_31 == ((unsigned long int) (var_1_28 + (var_1_24 + (var_1_23 + var_1_26))))) : 1) : 1) : 1) : 1) : (((- 199.496f) <= (- var_1_15)) ? (var_1_31 == ((unsigned long int) (((((((((var_1_8) < (var_1_34)) ? (var_1_8) : (var_1_34))) - var_1_23)) < (var_1_21)) ? ((((((var_1_8) < (var_1_34)) ? (var_1_8) : (var_1_34))) - var_1_23)) : (var_1_21))))) : (var_1_31 == ((unsigned long int) ((((var_1_29) < (var_1_23)) ? (var_1_29) : (var_1_23)))))))) && ((var_1_30 > (((((last_1_var_1_35) < (var_1_26)) ? (last_1_var_1_35) : (var_1_26))) | var_1_29)) ? (((((((var_1_36) > (var_1_13)) ? (var_1_36) : (var_1_13))) - (var_1_16 + var_1_15)) <= 0.5) ? (var_1_35 == ((unsigned short int) var_1_21)) : (var_1_35 == ((unsigned short int) var_1_26))) : 1)) && ((((var_1_62 * var_1_41) % ((((var_1_26) > (var_1_38)) ? (var_1_26) : (var_1_38)))) >= var_1_30) ? ((var_1_54 || ((var_1_21 * var_1_8) < var_1_25)) ? ((((var_1_41 % 5u) * var_1_26) > var_1_21) ? (var_1_37 == ((signed short int) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) : 1) : 1) : (var_1_37 == ((signed short int) (var_1_17 - (var_1_40 - var_1_23)))))) && (var_1_54 ? (var_1_41 == ((signed short int) ((((1) < (((((var_1_26 - var_1_65) < 0 ) ? -(var_1_26 - var_1_65) : (var_1_26 - var_1_65))))) ? (1) : (((((var_1_26 - var_1_65) < 0 ) ? -(var_1_26 - var_1_65) : (var_1_26 - var_1_65)))))))) : 1)) && (((var_1_14 >= (var_1_36 * var_1_64)) || var_1_54) ? ((! ((! var_1_54) && var_1_54)) ? ((var_1_21 > (var_1_8 * var_1_27)) ? (var_1_42 == ((float) (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) : 1) : (((var_1_13 * (var_1_4 / var_1_43)) <= (- (- var_1_16))) ? (var_1_42 == ((float) var_1_15)) : (var_1_42 == ((float) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))))) : (var_1_42 == ((float) (var_1_14 - (var_1_44 - var_1_16)))))) && ((((var_1_46 - var_1_15) - var_1_36) < 7.2) ? (var_1_45 == ((signed char) ((((((((((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) > (-1)) ? (((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) : (-1)))) < ((var_1_47 - var_1_48))) ? (((((((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) > (-1)) ? (((((var_1_27) > (var_1_28)) ? (var_1_27) : (var_1_28)))) : (-1)))) : ((var_1_47 - var_1_48)))))) : 1)) && (var_1_54 ? (var_1_49 == ((float) (((8.5755224913009244E18f - var_1_50) - var_1_16) - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) : 1)) && (((- var_1_35) >= last_1_var_1_51) ? (((var_1_8 < var_1_21) || (var_1_43 >= var_1_14)) ? ((1.0000000002E9f <= (- var_1_44)) ? ((var_1_37 >= (var_1_62 + (var_1_25 - var_1_17))) ? (var_1_51 == ((signed char) ((((var_1_28) < (var_1_47)) ? (var_1_28) : (var_1_47))))) : (var_1_51 == ((signed char) (var_1_28 + (var_1_27 + ((((var_1_52) > (var_1_53)) ? (var_1_52) : (var_1_53)))))))) : 1) : (var_1_51 == ((signed char) (((((4) > (var_1_48)) ? (4) : (var_1_48))) - 64)))) : (var_1_51 == ((signed char) ((var_1_27 - var_1_28) + ((((var_1_53) > (var_1_52)) ? (var_1_53) : (var_1_52)))))))) && ((var_1_43 < var_1_5) ? ((var_1_27 == var_1_25) ? (var_1_54 == ((unsigned char) (var_1_55 && var_1_56))) : (var_1_54 == ((unsigned char) var_1_56))) : (((var_1_14 - (var_1_46 - var_1_16)) > var_1_4) ? (((last_1_var_1_65 >> (var_1_58 - var_1_59)) <= last_1_var_1_29) ? (var_1_54 == ((unsigned char) ((var_1_18 && (var_1_60 || var_1_61)) || (! var_1_55)))) : (var_1_54 == ((unsigned char) (! var_1_61)))) : 1))) && (((var_1_28 + last_1_var_1_68) < last_1_var_1_31) ? (var_1_62 == ((signed short int) last_1_var_1_62)) : 1)) && (((var_1_53 & (var_1_35 / var_1_25)) == var_1_51) ? (var_1_64 == ((float) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : 1)) && (var_1_54 ? (var_1_65 == ((signed long int) var_1_45)) : (var_1_65 == ((signed long int) 16)))) && (var_1_54 ? (var_1_67 == ((signed char) var_1_59)) : 1)) && (((var_1_25 + (var_1_62 * var_1_20)) > var_1_21) ? (((var_1_17 - (var_1_69 - var_1_31)) <= (var_1_26 & var_1_30)) ? (var_1_68 == ((unsigned long int) var_1_20)) : (var_1_68 == ((unsigned long int) var_1_58))) : (var_1_68 == ((unsigned long int) var_1_35)))
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
