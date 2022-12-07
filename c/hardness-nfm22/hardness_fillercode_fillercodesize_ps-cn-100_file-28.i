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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 100;
signed short int var_1_11 = 10;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 128;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
double var_1_18 = 3.6;
double var_1_19 = 31.45;
float var_1_20 = 50.25;
float var_1_21 = 9.8;
float var_1_22 = 4.65;
float var_1_23 = 99.65;
unsigned long int var_1_25 = 128;
unsigned long int var_1_26 = 2;
signed short int var_1_27 = -16;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 10000;
signed short int var_1_30 = 25;
signed short int var_1_31 = 5;
double var_1_32 = 25.225;
float var_1_33 = 500.875;
float var_1_34 = 1.8;
float var_1_35 = 99.5;
double var_1_36 = 63.3;
double var_1_37 = 99999999999.5;
float var_1_38 = 31.7;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
float var_1_42 = 25.75;
float var_1_43 = 16.8;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 4;
double var_1_49 = 9.75;
double var_1_50 = 63.5;
unsigned short int var_1_51 = 2;
unsigned short int var_1_52 = 60368;
signed short int var_1_53 = -4;
signed char var_1_54 = -16;
signed char var_1_55 = 2;
signed char var_1_56 = 10;
signed char var_1_57 = 64;
signed char var_1_58 = 8;
float var_1_59 = 49.5;
unsigned long int var_1_61 = 0;
float var_1_62 = -0.5;
float var_1_63 = 127.5;
signed long int var_1_64 = -1;
unsigned short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_6 = 4;
signed short int last_1_var_1_11 = 10;
signed long int last_1_var_1_15 = 128;
void initially(void) {
}
void step(void) {
 var_1_25 = var_1_26;
 if ((var_1_25 < ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) || var_1_28) {
  var_1_27 = var_1_29;
 } else {
  var_1_27 = (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) + var_1_31);
 }
 if ((var_1_33 * var_1_34) == var_1_35) {
  var_1_32 = ((((var_1_36) < (((((99.8) > (var_1_37)) ? (99.8) : (var_1_37))))) ? (var_1_36) : (((((99.8) > (var_1_37)) ? (99.8) : (var_1_37))))));
 } else {
  if (var_1_33 < var_1_35) {
   if (var_1_35 != (var_1_33 / var_1_38)) {
    var_1_32 = ((((var_1_37) < (var_1_36)) ? (var_1_37) : (var_1_36)));
   }
  }
 }
 if (var_1_26 >= 25u) {
  var_1_39 = (! var_1_40);
 }
 if (var_1_28 && var_1_40) {
  var_1_41 = (var_1_28 || var_1_40);
 } else {
  if (var_1_28) {
   if (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) <= (var_1_42 - var_1_43)) {
    var_1_41 = var_1_40;
   } else {
    var_1_41 = (((var_1_31 ^ var_1_27) > var_1_25) || ((var_1_36 >= var_1_34) || var_1_40));
   }
  } else {
   var_1_41 = (var_1_40 && (var_1_44 && var_1_45));
  }
 }
 if ((var_1_43 <= var_1_32) || var_1_44) {
  var_1_46 = ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)));
 } else {
  if (var_1_32 == var_1_34) {
   var_1_46 = ((((var_1_47) > (var_1_48)) ? (var_1_47) : (var_1_48)));
  } else {
   var_1_46 = (((((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48))) < 0 ) ? -((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48))) : ((((var_1_47) < (var_1_48)) ? (var_1_47) : (var_1_48)))));
  }
 }
 var_1_49 = ((((8.44) > ((var_1_50 - 1.25))) ? (8.44) : ((var_1_50 - 1.25))));
 if (var_1_43 >= (var_1_35 * var_1_38)) {
  if (32u <= (var_1_46 >> var_1_27)) {
   if (var_1_28) {
    var_1_51 = (var_1_52 - ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))));
   }
  }
 }
 if (32 >= (var_1_51 >> 4)) {
  if (var_1_45 || var_1_40) {
   var_1_53 = (((((5) < 0 ) ? -(5) : (5))) + ((((-128 + var_1_46) < 0 ) ? -(-128 + var_1_46) : (-128 + var_1_46))));
  }
 }
 if (var_1_50 < var_1_49) {
  var_1_54 = ((((var_1_55) < ((var_1_56 - (var_1_57 - var_1_58)))) ? (var_1_55) : ((var_1_56 - (var_1_57 - var_1_58)))));
 } else {
  var_1_54 = ((((var_1_57) > (16)) ? (var_1_57) : (16)));
 }
 if ((var_1_61 * 128) > (((((((var_1_52) > (var_1_58)) ? (var_1_52) : (var_1_58))) < 0 ) ? -((((var_1_52) > (var_1_58)) ? (var_1_52) : (var_1_58))) : ((((var_1_52) > (var_1_58)) ? (var_1_52) : (var_1_58)))))) {
  var_1_59 = (var_1_62 + var_1_63);
 } else {
  var_1_59 = var_1_63;
 }
 if (var_1_38 > var_1_37) {
  if (var_1_51 < var_1_25) {
   var_1_64 = var_1_58;
  }
 }
 unsigned char stepLocal_2 = var_1_14;
 if (var_1_12) {
  if (var_1_13) {
   if ((last_1_var_1_6 > (~ var_1_10)) && stepLocal_2) {
    var_1_11 = ((((var_1_8) > ((var_1_10 + last_1_var_1_15))) ? (var_1_8) : ((var_1_10 + last_1_var_1_15))));
   } else {
    var_1_11 = last_1_var_1_6;
   }
  } else {
   var_1_11 = var_1_8;
  }
 } else {
  var_1_11 = last_1_var_1_11;
 }
 signed long int stepLocal_1 = last_1_var_1_1;
 if (stepLocal_1 < 5) {
  var_1_6 = ((((((((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) < (var_1_9)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9)))) > (var_1_10)) ? (((((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) < (var_1_9)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9)))) : (var_1_10)));
 } else {
  var_1_6 = var_1_10;
 }
 unsigned char stepLocal_0 = var_1_6;
 if (var_1_11 <= stepLocal_0) {
  var_1_1 = ((((((((var_1_11) < (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))) ? (var_1_11) : (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))))) > (var_1_6)) ? (((((var_1_11) < (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))) ? (var_1_11) : (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))))) : (var_1_6)));
 }
 signed long int stepLocal_5 = 0;
 if (var_1_13) {
  if (var_1_14) {
   if (var_1_12) {
    var_1_20 = (var_1_21 + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))));
   }
  } else {
   if (var_1_6 <= stepLocal_5) {
    var_1_20 = var_1_19;
   } else {
    var_1_20 = var_1_22;
   }
  }
 } else {
  var_1_20 = var_1_23;
 }
 unsigned char stepLocal_3 = var_1_6;
 if (stepLocal_3 <= (((((128) > (var_1_16)) ? (128) : (var_1_16))) - var_1_17)) {
  var_1_15 = (((((var_1_6 - var_1_6)) > (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))))) ? ((var_1_6 - var_1_6)) : (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))))));
 } else {
  var_1_15 = var_1_11;
 }
 unsigned short int stepLocal_4 = var_1_1;
 if (((200 << var_1_15) * (var_1_17 * var_1_7)) < stepLocal_4) {
  var_1_18 = var_1_19;
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32767);
 assume_abort_if_not(var_1_29 <= 32766);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -16383);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -16383);
 assume_abort_if_not(var_1_31 <= 16383);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 assume_abort_if_not(var_1_38 != 0.0F);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 1);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 254);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 254);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 32767);
 assume_abort_if_not(var_1_52 <= 65534);
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -127);
 assume_abort_if_not(var_1_55 <= 126);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -1);
 assume_abort_if_not(var_1_56 <= 126);
 var_1_57 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_57 >= 63);
 assume_abort_if_not(var_1_57 <= 126);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_61 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_61 >= 0);
 assume_abort_if_not(var_1_61 <= 4294967295);
 var_1_62 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_15 = var_1_15;
}
int property() {
 return ((((((var_1_11 <= var_1_6) ? (var_1_1 == ((unsigned short int) ((((((((var_1_11) < (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))) ? (var_1_11) : (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))))) > (var_1_6)) ? (((((var_1_11) < (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))) ? (var_1_11) : (((((var_1_6) > (var_1_6)) ? (var_1_6) : (var_1_6))))))) : (var_1_6))))) : 1) && ((last_1_var_1_1 < 5) ? (var_1_6 == ((unsigned char) ((((((((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) < (var_1_9)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9)))) > (var_1_10)) ? (((((((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) < (var_1_9)) ? (((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)))) : (var_1_9)))) : (var_1_10))))) : (var_1_6 == ((unsigned char) var_1_10)))) && (var_1_12 ? (var_1_13 ? (((last_1_var_1_6 > (~ var_1_10)) && var_1_14) ? (var_1_11 == ((signed short int) ((((var_1_8) > ((var_1_10 + last_1_var_1_15))) ? (var_1_8) : ((var_1_10 + last_1_var_1_15)))))) : (var_1_11 == ((signed short int) last_1_var_1_6))) : (var_1_11 == ((signed short int) var_1_8))) : (var_1_11 == ((signed short int) last_1_var_1_11)))) && ((var_1_6 <= (((((128) > (var_1_16)) ? (128) : (var_1_16))) - var_1_17)) ? (var_1_15 == ((signed long int) (((((var_1_6 - var_1_6)) > (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))))) ? ((var_1_6 - var_1_6)) : (((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7)))))))) : (var_1_15 == ((signed long int) var_1_11)))) && ((((200 << var_1_15) * (var_1_17 * var_1_7)) < var_1_1) ? (var_1_18 == ((double) var_1_19)) : 1)) && (var_1_13 ? (var_1_14 ? (var_1_12 ? (var_1_20 == ((float) (var_1_21 + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))))) : 1) : ((var_1_6 <= 0) ? (var_1_20 == ((float) var_1_19)) : (var_1_20 == ((float) var_1_22)))) : (var_1_20 == ((float) var_1_23)))
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
