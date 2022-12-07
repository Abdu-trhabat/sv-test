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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 32;
unsigned short int var_1_8 = 100;
float var_1_9 = 255.75;
signed char var_1_10 = 64;
signed char var_1_11 = 32;
signed char var_1_12 = 4;
float var_1_13 = 0.0;
float var_1_14 = 7.25;
float var_1_15 = 8.125;
float var_1_16 = 24.5;
signed short int var_1_17 = -256;
double var_1_18 = 31.5;
float var_1_19 = 255.2;
float var_1_20 = 5.5;
signed long int var_1_21 = -8;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -500;
signed long int var_1_25 = -64;
signed long int var_1_26 = 16;
signed long int var_1_27 = -10;
double var_1_28 = 15.25;
signed short int var_1_29 = 10;
float var_1_30 = 32.625;
signed short int var_1_31 = 28119;
signed short int var_1_32 = 2;
signed short int var_1_33 = 4;
signed short int var_1_34 = -100;
signed char var_1_35 = 32;
signed short int var_1_36 = -64;
signed short int var_1_37 = 4;
signed char var_1_38 = 10;
signed char var_1_39 = -8;
signed char var_1_40 = 4;
float var_1_41 = 3.5;
float var_1_42 = 4.1;
double var_1_43 = 64.75;
double var_1_44 = 2.5;
unsigned short int var_1_45 = 38145;
unsigned short int var_1_46 = 2;
float var_1_47 = 9999.65;
float var_1_48 = 50.25;
float var_1_49 = 25.6;
signed short int var_1_50 = 8;
signed long int var_1_51 = 4;
signed long int var_1_52 = 1410740801;
double var_1_53 = 1000.4;
double var_1_54 = 100.6;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 16;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned char last_1_var_1_6 = 32;
unsigned short int last_1_var_1_8 = 100;
void initially(void) {
}
void step(void) {
 var_1_19 = var_1_20;
 if (((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))) >= var_1_26) {
  var_1_21 = var_1_27;
 }
 if (var_1_21 != var_1_26) {
  var_1_28 = var_1_20;
 }
 if (var_1_20 < ((((((((var_1_19) > (var_1_28)) ? (var_1_19) : (var_1_28)))) < (((((63.5f) < (var_1_30)) ? (63.5f) : (var_1_30))))) ? (((((var_1_19) > (var_1_28)) ? (var_1_19) : (var_1_28)))) : (((((63.5f) < (var_1_30)) ? (63.5f) : (var_1_30))))))) {
  var_1_29 = ((var_1_31 - var_1_32) - var_1_33);
 }
 if (var_1_21 == var_1_33) {
  var_1_34 = var_1_32;
 }
 if (var_1_31 != ((var_1_25 + var_1_27) / ((((var_1_36) < (var_1_37)) ? (var_1_36) : (var_1_37))))) {
  if ((((((var_1_33 - var_1_31)) > (5)) ? ((var_1_33 - var_1_31)) : (5))) >= ((((var_1_34) < (var_1_24)) ? (var_1_34) : (var_1_24)))) {
   var_1_35 = ((((var_1_38) < (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))) ? (var_1_38) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))));
  } else {
   var_1_35 = 0;
  }
 } else {
  var_1_35 = var_1_40;
 }
 if ((((((var_1_33) < (0)) ? (var_1_33) : (0))) <= var_1_34) && var_1_23) {
  var_1_41 = var_1_20;
 }
 if ((var_1_43 - var_1_44) >= var_1_28) {
  if (((((var_1_31) > ((var_1_33 + var_1_34))) ? (var_1_31) : ((var_1_33 + var_1_34)))) > (var_1_39 + var_1_35)) {
   if ((var_1_45 - var_1_46) != var_1_36) {
    var_1_42 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
   } else {
    var_1_42 = (var_1_47 - var_1_48);
   }
  } else {
   var_1_42 = ((((var_1_47) > (9.25f)) ? (var_1_47) : (9.25f)));
  }
 } else {
  var_1_42 = (var_1_49 + 31.125f);
 }
 if (((var_1_49 + var_1_42) * var_1_47) >= var_1_48) {
  if (var_1_49 < (var_1_30 * var_1_20)) {
   var_1_50 = ((((16) < (var_1_35)) ? (16) : (var_1_35)));
  } else {
   var_1_50 = (var_1_32 - ((((-256) < 0 ) ? -(-256) : (-256))));
  }
 }
 if (var_1_49 <= var_1_47) {
  if (var_1_22) {
   var_1_51 = (var_1_32 - (var_1_52 - ((((var_1_33) < (var_1_45)) ? (var_1_33) : (var_1_45)))));
  } else {
   var_1_51 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
  }
 }
 if ((var_1_34 & var_1_37) <= (((((var_1_33) > (var_1_38)) ? (var_1_33) : (var_1_38))) | ((((var_1_21) > (var_1_27)) ? (var_1_21) : (var_1_27))))) {
  if (var_1_21 >= var_1_40) {
   var_1_53 = 5.05;
  }
 } else {
  if (var_1_47 > ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) {
   var_1_53 = ((((var_1_48) > ((var_1_47 - 15.625))) ? (var_1_48) : ((var_1_47 - 15.625))));
  }
 }
 if (var_1_35 < var_1_45) {
  var_1_54 = ((((24.5) < 0 ) ? -(24.5) : (24.5)));
 }
 var_1_55 = var_1_56;
 var_1_57 = var_1_58;
 signed long int stepLocal_0 = 64 + (var_1_5 / var_1_3);
 if (stepLocal_0 != (last_1_var_1_8 - (var_1_4 + last_1_var_1_6))) {
  var_1_6 = var_1_4;
 } else {
  var_1_6 = 128;
 }
 if (var_1_2) {
  var_1_1 = (var_1_3 - var_1_4);
 } else {
  var_1_1 = (var_1_4 + var_1_5);
 }
 if (((var_1_10 - var_1_11) - (16 + var_1_12)) != var_1_5) {
  var_1_9 = (64.8f - (var_1_13 - var_1_14));
 } else {
  var_1_9 = var_1_13;
 }
 var_1_15 = (var_1_14 + var_1_16);
 if (var_1_2) {
  var_1_17 = (var_1_3 + var_1_12);
 } else {
  if (var_1_14 == (((((99.8f) < (var_1_16)) ? (99.8f) : (var_1_16))) / ((((255.6f) > (var_1_13)) ? (255.6f) : (var_1_13))))) {
   var_1_17 = var_1_4;
  } else {
   var_1_17 = (var_1_5 - var_1_3);
  }
 }
 if ((var_1_2 || (var_1_16 > var_1_13)) && (var_1_3 < var_1_1)) {
  if ((var_1_11 << var_1_12) > var_1_5) {
   var_1_18 = var_1_13;
  }
 } else {
  var_1_18 = var_1_16;
 }
 signed long int stepLocal_1 = var_1_3 - var_1_5;
 if ((var_1_17 + var_1_6) >= stepLocal_1) {
  var_1_8 = ((((var_1_6) > (var_1_3)) ? (var_1_6) : (var_1_3)));
 } else {
  var_1_8 = var_1_6;
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 127);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 64);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 4611686.018427382800e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= -2147483648);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483647);
 assume_abort_if_not(var_1_27 <= 2147483646);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= 16382);
 assume_abort_if_not(var_1_31 <= 32766);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 16383);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32766);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= -32768);
 assume_abort_if_not(var_1_36 <= 32767);
 assume_abort_if_not(var_1_36 != 0);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= -32768);
 assume_abort_if_not(var_1_37 <= 32767);
 assume_abort_if_not(var_1_37 != 0);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -127);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -126);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -127);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 32767);
 assume_abort_if_not(var_1_45 <= 65535);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 32767);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_52 >= 1073741823);
 assume_abort_if_not(var_1_52 <= 2147483646);
 var_1_56 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_56 >= 0);
 assume_abort_if_not(var_1_56 <= 254);
 var_1_58 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_58 >= 0);
 assume_abort_if_not(var_1_58 <= 0);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_8 = var_1_8;
}
int property() {
 return ((((((var_1_2 ? (var_1_1 == ((unsigned char) (var_1_3 - var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 + var_1_5)))) && (((64 + (var_1_5 / var_1_3)) != (last_1_var_1_8 - (var_1_4 + last_1_var_1_6))) ? (var_1_6 == ((unsigned char) var_1_4)) : (var_1_6 == ((unsigned char) 128)))) && (((var_1_17 + var_1_6) >= (var_1_3 - var_1_5)) ? (var_1_8 == ((unsigned short int) ((((var_1_6) > (var_1_3)) ? (var_1_6) : (var_1_3))))) : (var_1_8 == ((unsigned short int) var_1_6)))) && ((((var_1_10 - var_1_11) - (16 + var_1_12)) != var_1_5) ? (var_1_9 == ((float) (64.8f - (var_1_13 - var_1_14)))) : (var_1_9 == ((float) var_1_13)))) && (var_1_15 == ((float) (var_1_14 + var_1_16)))) && (var_1_2 ? (var_1_17 == ((signed short int) (var_1_3 + var_1_12))) : ((var_1_14 == (((((99.8f) < (var_1_16)) ? (99.8f) : (var_1_16))) / ((((255.6f) > (var_1_13)) ? (255.6f) : (var_1_13))))) ? (var_1_17 == ((signed short int) var_1_4)) : (var_1_17 == ((signed short int) (var_1_5 - var_1_3)))))) && (((var_1_2 || (var_1_16 > var_1_13)) && (var_1_3 < var_1_1)) ? (((var_1_11 << var_1_12) > var_1_5) ? (var_1_18 == ((double) var_1_13)) : 1) : (var_1_18 == ((double) var_1_16)))
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
