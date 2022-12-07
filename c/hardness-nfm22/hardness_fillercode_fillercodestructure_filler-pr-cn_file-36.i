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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 8.75;
unsigned char var_1_2 = 1;
double var_1_3 = 9.6;
double var_1_4 = 7.625;
double var_1_5 = 1.5;
double var_1_6 = 63.17;
double var_1_7 = 15.5;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 45624;
unsigned short int var_1_10 = 39447;
unsigned short int var_1_11 = 10;
double var_1_12 = 255.5;
double var_1_13 = 0.0;
double var_1_14 = 127.5;
float var_1_15 = 8.2;
float var_1_16 = 2.8;
signed short int var_1_17 = 8;
double var_1_18 = 24.8;
signed short int var_1_19 = -256;
signed short int var_1_20 = 8;
signed short int var_1_21 = 16;
unsigned short int var_1_22 = 2;
unsigned short int var_1_24 = 16;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 1;
unsigned short int var_1_27 = 2;
double var_1_28 = 199.6;
signed long int var_1_29 = 32;
double var_1_30 = 5.5;
double var_1_31 = 32.5;
double var_1_32 = 128.75;
signed char var_1_33 = 5;
unsigned char var_1_34 = 0;
signed char var_1_35 = -1;
double var_1_36 = 0.6;
double var_1_37 = 64.6;
double var_1_38 = 100.6;
double var_1_39 = 16.5;
double var_1_40 = 0.2;
float var_1_41 = 31.45;
unsigned short int var_1_42 = 128;
signed short int var_1_43 = -10;
unsigned long int var_1_44 = 25;
signed short int var_1_45 = 24450;
unsigned long int var_1_46 = 8;
signed short int var_1_47 = -4;
unsigned short int last_1_var_1_22 = 2;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = (((((((((var_1_3 - var_1_4)) > (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_3 - var_1_4)) : (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))))) < (var_1_7)) ? ((((((var_1_3 - var_1_4)) > (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_3 - var_1_4)) : (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))))) : (var_1_7)));
 }
 var_1_8 = (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))) - var_1_11);
 if (var_1_2) {
  var_1_12 = (((((var_1_3 - (var_1_13 - 128.68))) < (var_1_7)) ? ((var_1_3 - (var_1_13 - 128.68))) : (var_1_7)));
 }
 if (var_1_34) {
  var_1_33 = var_1_35;
 }
 if (var_1_30 >= var_1_31) {
  var_1_46 = ((((var_1_27) > (4u)) ? (var_1_27) : (4u)));
 }
 var_1_14 = var_1_6;
 if (var_1_27 > var_1_26) {
  var_1_36 = ((((((((var_1_37 - var_1_38)) < ((var_1_39 + var_1_40))) ? ((var_1_37 - var_1_38)) : ((var_1_39 + var_1_40)))) < 0 ) ? -(((((var_1_37 - var_1_38)) < ((var_1_39 + var_1_40))) ? ((var_1_37 - var_1_38)) : ((var_1_39 + var_1_40)))) : (((((var_1_37 - var_1_38)) < ((var_1_39 + var_1_40))) ? ((var_1_37 - var_1_38)) : ((var_1_39 + var_1_40))))));
 } else {
  if (var_1_27 != var_1_29) {
   var_1_36 = ((((99999.5) < 0 ) ? -(99999.5) : (99999.5)));
  }
 }
 if (var_1_27 < (((((var_1_26) < (var_1_29)) ? (var_1_26) : (var_1_29))) / var_1_42)) {
  var_1_41 = (var_1_39 + 5.5f);
 } else {
  var_1_41 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
 }
 if (var_1_13 >= var_1_14) {
  if (var_1_2) {
   if (var_1_8 == var_1_11) {
    var_1_15 = 10.975f;
   }
  }
 }
 if (var_1_3 <= var_1_4) {
  var_1_16 = ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4)));
 }
 var_1_26 = var_1_27;
 if (((var_1_26 ^ 8) * var_1_27) <= var_1_29) {
  var_1_28 = (((((((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) < (var_1_32)) ? (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) : (var_1_32))) < 0 ) ? -((((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) < (var_1_32)) ? (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) : (var_1_32))) : ((((((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) < (var_1_32)) ? (((((var_1_30) > (var_1_31)) ? (var_1_30) : (var_1_31)))) : (var_1_32)))));
 }
 unsigned short int stepLocal_0 = var_1_11;
 if (var_1_7 >= (var_1_5 / ((((var_1_13) < (var_1_18)) ? (var_1_13) : (var_1_18))))) {
  if ((var_1_10 + var_1_9) <= stepLocal_0) {
   if (var_1_2) {
    var_1_17 = var_1_19;
   }
  } else {
   var_1_17 = (var_1_20 - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))));
  }
 } else {
  var_1_17 = var_1_21;
 }
 if ((((((var_1_27) < (var_1_33)) ? (var_1_27) : (var_1_33))) >> (var_1_44 - 4u)) >= var_1_42) {
  var_1_43 = ((var_1_45 - (10000 - var_1_44)) - ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))));
 } else {
  if (((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) > (var_1_29)) ? (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) : (var_1_29))) > var_1_42) {
   var_1_43 = 5;
  }
 }
 if ((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) {
  var_1_22 = (((((var_1_9 - var_1_11)) > (var_1_10)) ? ((var_1_9 - var_1_11)) : (var_1_10)));
 }
 var_1_47 = var_1_45;
 if (var_1_9 < var_1_11) {
  if (var_1_2 || var_1_25) {
   var_1_24 = 128;
  }
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32767);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 32766);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= -32766);
 assume_abort_if_not(var_1_21 <= 32766);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -127);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -461168.6018427382800e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 65535);
 assume_abort_if_not(var_1_42 != 0);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 16);
 assume_abort_if_not(var_1_44 <= 32);
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= 16382);
 assume_abort_if_not(var_1_45 <= 32766);
}
void updateLastVariables() {
 last_1_var_1_22 = var_1_22;
}
int property() {
 return ((((((((var_1_2 ? (var_1_1 == ((double) (((((((((var_1_3 - var_1_4)) > (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_3 - var_1_4)) : (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))))) < (var_1_7)) ? ((((((var_1_3 - var_1_4)) > (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))) ? ((var_1_3 - var_1_4)) : (((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))))))) : (var_1_7))))) : 1) && (var_1_8 == ((unsigned short int) (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))) - var_1_11)))) && (var_1_2 ? (var_1_12 == ((double) (((((var_1_3 - (var_1_13 - 128.68))) < (var_1_7)) ? ((var_1_3 - (var_1_13 - 128.68))) : (var_1_7))))) : 1)) && (var_1_14 == ((double) var_1_6))) && ((var_1_13 >= var_1_14) ? (var_1_2 ? ((var_1_8 == var_1_11) ? (var_1_15 == ((float) 10.975f)) : 1) : 1) : 1)) && ((var_1_3 <= var_1_4) ? (var_1_16 == ((float) ((((var_1_6) < (var_1_4)) ? (var_1_6) : (var_1_4))))) : 1)) && ((var_1_7 >= (var_1_5 / ((((var_1_13) < (var_1_18)) ? (var_1_13) : (var_1_18))))) ? (((var_1_10 + var_1_9) <= var_1_11) ? (var_1_2 ? (var_1_17 == ((signed short int) var_1_19)) : 1) : (var_1_17 == ((signed short int) (var_1_20 - ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))))))) : (var_1_17 == ((signed short int) var_1_21)))) && (((var_1_11 + var_1_20) <= ((var_1_21 * last_1_var_1_22) * var_1_19)) ? (var_1_22 == ((unsigned short int) (((((var_1_9 - var_1_11)) > (var_1_10)) ? ((var_1_9 - var_1_11)) : (var_1_10))))) : 1)) && ((var_1_9 < var_1_11) ? ((var_1_2 || var_1_25) ? (var_1_24 == ((unsigned short int) 128)) : 1) : 1)
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
