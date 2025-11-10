// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 2;
unsigned char var_1_4 = 32;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned char var_1_9 = 0;
signed long int var_1_10 = 1;
unsigned short int var_1_11 = 65162;
unsigned short int var_1_12 = 1;
double var_1_13 = 4.25;
double var_1_15 = 255.5;
double var_1_16 = 255.4;
signed char var_1_17 = -100;
unsigned char var_1_18 = 128;
signed char var_1_19 = 64;
signed char var_1_20 = 1;
signed char var_1_21 = 32;
signed char var_1_22 = -4;
unsigned long int var_1_23 = 64;
unsigned long int var_1_24 = 3618903401;
double var_1_25 = 256.4;
double var_1_26 = 999999999999999.9;
double var_1_27 = 15.8;
double var_1_28 = 127.125;
double var_1_29 = 499.5;
float var_1_30 = 25.75;
signed long int var_1_32 = -50;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
signed short int var_1_37 = -128;
unsigned char last_1_var_1_1 = 2;
unsigned short int last_1_var_1_8 = 256;
signed long int last_1_var_1_10 = 1;
double last_1_var_1_13 = 4.25;
signed long int last_1_var_1_32 = -50;
void initially(void) {
}
void step(void) {
 if (((((1.000000000065E10f) < ((var_1_16 - var_1_15))) ? (1.000000000065E10f) : ((var_1_16 - var_1_15)))) <= last_1_var_1_13) {
  var_1_23 = (var_1_24 - (1904482635u - last_1_var_1_32));
 } else {
  var_1_23 = last_1_var_1_1;
 }
 if ((var_1_11 - var_1_12) < last_1_var_1_10) {
  if (var_1_4 > var_1_12) {
   var_1_10 = ((last_1_var_1_32 + -64) + var_1_6);
  } else {
   var_1_10 = -32;
  }
 } else {
  var_1_10 = var_1_11;
 }
 unsigned short int stepLocal_5 = var_1_12;
 if (stepLocal_5 < var_1_19) {
  var_1_29 = var_1_15;
 }
 if (var_1_9) {
  if ((var_1_29 * var_1_27) >= var_1_16) {
   var_1_33 = (var_1_34 && var_1_35);
  } else {
   var_1_33 = (var_1_34 && (! var_1_36));
  }
 }
 unsigned char stepLocal_2 = var_1_11 != var_1_23;
 if (var_1_33 && stepLocal_2) {
  var_1_13 = (var_1_15 - var_1_16);
 }
 signed long int stepLocal_4 = var_1_10 * var_1_11;
 unsigned long int stepLocal_3 = var_1_23;
 if (var_1_5 < stepLocal_3) {
  if ((var_1_18 - var_1_6) == stepLocal_4) {
   if (var_1_33) {
    var_1_17 = ((var_1_19 - var_1_6) - var_1_20);
   }
  } else {
   var_1_17 = ((((var_1_19) < (((var_1_21 + -4) + var_1_22))) ? (var_1_19) : (((var_1_21 + -4) + var_1_22))));
  }
 } else {
  var_1_17 = (var_1_20 - 2);
 }
 unsigned char stepLocal_1 = var_1_33;
 unsigned char stepLocal_0 = var_1_4;
 if (last_1_var_1_8 < stepLocal_0) {
  if (stepLocal_1 || (last_1_var_1_8 >= var_1_10)) {
   if (! var_1_33) {
    var_1_8 = var_1_7;
   } else {
    var_1_8 = last_1_var_1_8;
   }
  }
 } else {
  var_1_8 = var_1_4;
 }
 if (var_1_15 <= var_1_28) {
  if (var_1_18 <= var_1_10) {
   if (var_1_36) {
    var_1_37 = var_1_17;
   }
  }
 }
 if ((var_1_16 < 127.5) && var_1_33) {
  var_1_32 = (((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) > (((((var_1_23) > (var_1_19)) ? (var_1_23) : (var_1_19))))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (((((var_1_23) > (var_1_19)) ? (var_1_23) : (var_1_19)))))) + var_1_37);
 } else {
  var_1_32 = var_1_22;
 }
 if ((- var_1_37) < var_1_10) {
  var_1_1 = (((((var_1_4 + (var_1_5 - var_1_6))) < (var_1_7)) ? ((var_1_4 + (var_1_5 - var_1_6))) : (var_1_7)));
 } else {
  var_1_1 = ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)));
 }
 if ((- ((((var_1_11) < (var_1_7)) ? (var_1_11) : (var_1_7)))) >= (var_1_37 & var_1_32)) {
  var_1_25 = (((((var_1_26 + (var_1_27 - var_1_28))) < (var_1_15)) ? ((var_1_26 + (var_1_27 - var_1_28))) : (var_1_15)));
 } else {
  if (var_1_33) {
   var_1_25 = 2.6;
  }
 }
 if (((var_1_12 | var_1_8) ^ var_1_37) <= -1000000) {
  var_1_30 = 1.0000000000005E12f;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 32767);
 assume_abort_if_not(var_1_11 <= 65535);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 255);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 62);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -31);
 assume_abort_if_not(var_1_21 <= 32);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -63);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return (((((((((((((- var_1_37) < var_1_10) ? (var_1_1 == ((unsigned char) (((((var_1_4 + (var_1_5 - var_1_6))) < (var_1_7)) ? ((var_1_4 + (var_1_5 - var_1_6))) : (var_1_7))))) : (var_1_1 == ((unsigned char) ((((var_1_6) > (var_1_4)) ? (var_1_6) : (var_1_4)))))) && ((last_1_var_1_8 < var_1_4) ? ((var_1_33 || (last_1_var_1_8 >= var_1_10)) ? ((! var_1_33) ? (var_1_8 == ((unsigned short int) var_1_7)) : (var_1_8 == ((unsigned short int) last_1_var_1_8))) : 1) : (var_1_8 == ((unsigned short int) var_1_4)))) && (((var_1_11 - var_1_12) < last_1_var_1_10) ? ((var_1_4 > var_1_12) ? (var_1_10 == ((signed long int) ((last_1_var_1_32 + -64) + var_1_6))) : (var_1_10 == ((signed long int) -32))) : (var_1_10 == ((signed long int) var_1_11)))) && ((var_1_33 && (var_1_11 != var_1_23)) ? (var_1_13 == ((double) (var_1_15 - var_1_16))) : 1)) && ((var_1_5 < var_1_23) ? (((var_1_18 - var_1_6) == (var_1_10 * var_1_11)) ? (var_1_33 ? (var_1_17 == ((signed char) ((var_1_19 - var_1_6) - var_1_20))) : 1) : (var_1_17 == ((signed char) ((((var_1_19) < (((var_1_21 + -4) + var_1_22))) ? (var_1_19) : (((var_1_21 + -4) + var_1_22))))))) : (var_1_17 == ((signed char) (var_1_20 - 2))))) && ((((((1.000000000065E10f) < ((var_1_16 - var_1_15))) ? (1.000000000065E10f) : ((var_1_16 - var_1_15)))) <= last_1_var_1_13) ? (var_1_23 == ((unsigned long int) (var_1_24 - (1904482635u - last_1_var_1_32)))) : (var_1_23 == ((unsigned long int) last_1_var_1_1)))) && (((- ((((var_1_11) < (var_1_7)) ? (var_1_11) : (var_1_7)))) >= (var_1_37 & var_1_32)) ? (var_1_25 == ((double) (((((var_1_26 + (var_1_27 - var_1_28))) < (var_1_15)) ? ((var_1_26 + (var_1_27 - var_1_28))) : (var_1_15))))) : (var_1_33 ? (var_1_25 == ((double) 2.6)) : 1))) && ((var_1_12 < var_1_19) ? (var_1_29 == ((double) var_1_15)) : 1)) && ((((var_1_12 | var_1_8) ^ var_1_37) <= -1000000) ? (var_1_30 == ((float) 1.0000000000005E12f)) : 1)) && (((var_1_16 < 127.5) && var_1_33) ? (var_1_32 == ((signed long int) (((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) > (((((var_1_23) > (var_1_19)) ? (var_1_23) : (var_1_19))))) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (((((var_1_23) > (var_1_19)) ? (var_1_23) : (var_1_19)))))) + var_1_37))) : (var_1_32 == ((signed long int) var_1_22)))) && (var_1_9 ? (((var_1_29 * var_1_27) >= var_1_16) ? (var_1_33 == ((unsigned char) (var_1_34 && var_1_35))) : (var_1_33 == ((unsigned char) (var_1_34 && (! var_1_36))))) : 1)) && ((var_1_15 <= var_1_28) ? ((var_1_18 <= var_1_10) ? (var_1_36 ? (var_1_37 == ((signed short int) var_1_17)) : 1) : 1) : 1)
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
