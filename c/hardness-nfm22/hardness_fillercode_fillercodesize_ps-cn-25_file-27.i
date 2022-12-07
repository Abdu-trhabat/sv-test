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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 3.9;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
float var_1_4 = 31.5;
float var_1_5 = 25.4;
float var_1_6 = 9.5;
float var_1_7 = 63.2;
unsigned long int var_1_8 = 1;
signed short int var_1_10 = -50;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 32;
float var_1_13 = 15.625;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 8;
unsigned short int var_1_21 = 16;
unsigned short int var_1_22 = 128;
signed short int var_1_23 = 128;
signed short int var_1_24 = -256;
unsigned short int var_1_25 = 32;
unsigned short int var_1_26 = 128;
double var_1_27 = 25.5;
double var_1_28 = 200.9;
signed char var_1_29 = -10;
signed char var_1_30 = 50;
unsigned long int var_1_31 = 256;
double var_1_32 = 15.4;
double var_1_33 = 9.5;
double var_1_34 = 0.2;
signed long int var_1_35 = 1;
unsigned short int var_1_36 = 34226;
unsigned short int var_1_37 = 10;
unsigned long int var_1_38 = 200;
unsigned long int var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 16;
void initially(void) {
}
void step(void) {
 var_1_23 = var_1_24;
 var_1_25 = var_1_26;
 var_1_27 = var_1_28;
 var_1_29 = var_1_30;
 if ((var_1_27 / var_1_32) < (((((var_1_33 - var_1_34)) > (((((1.0000000075E8) > (var_1_28)) ? (1.0000000075E8) : (var_1_28))))) ? ((var_1_33 - var_1_34)) : (((((1.0000000075E8) > (var_1_28)) ? (1.0000000075E8) : (var_1_28))))))) {
  var_1_31 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 }
 if (var_1_32 > var_1_33) {
  var_1_35 = ((((var_1_25) < (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (var_1_25) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))));
 }
 var_1_38 = ((((((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) < (((((var_1_25) > (((((var_1_37) < (var_1_26)) ? (var_1_37) : (var_1_26))))) ? (var_1_25) : (((((var_1_37) < (var_1_26)) ? (var_1_37) : (var_1_26)))))))) ? (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) : (((((var_1_25) > (((((var_1_37) < (var_1_26)) ? (var_1_37) : (var_1_26))))) ? (var_1_25) : (((((var_1_37) < (var_1_26)) ? (var_1_37) : (var_1_26)))))))));
 var_1_39 = var_1_36;
 var_1_40 = var_1_41;
 var_1_42 = var_1_41;
 if (var_1_6 == (var_1_4 / var_1_13)) {
  var_1_12 = var_1_11;
 }
 var_1_20 = var_1_11;
 var_1_21 = 8;
 if ((var_1_21 + var_1_12) > (2u >> var_1_11)) {
  if (var_1_12 != var_1_21) {
   var_1_10 = var_1_11;
  } else {
   var_1_10 = 128;
  }
 }
 if (! var_1_2) {
  if (var_1_2 || var_1_3) {
   var_1_14 = ((! (! var_1_15)) && (var_1_16 && var_1_17));
  } else {
   if (((((var_1_12) > (var_1_12)) ? (var_1_12) : (var_1_12))) >= var_1_21) {
    var_1_14 = (var_1_2 || var_1_16);
   } else {
    var_1_14 = (! var_1_19);
   }
  }
 }
 unsigned char stepLocal_1 = var_1_14;
 unsigned char stepLocal_0 = var_1_14;
 if (var_1_14 || stepLocal_0) {
  if (stepLocal_1 || var_1_14) {
   var_1_1 = (((((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6))) - var_1_7);
  } else {
   var_1_1 = 1.0000000075E8f;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_6 > (- var_1_7)) {
  if (var_1_5 == (((((var_1_6 * var_1_7)) > (var_1_1)) ? ((var_1_6 * var_1_7)) : (var_1_1)))) {
   var_1_8 = 8u;
  }
 } else {
  var_1_8 = var_1_20;
 }
 var_1_22 = var_1_8;
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 33);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32767);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 32767);
 assume_abort_if_not(var_1_36 <= 65535);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 32767);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 254);
}
void updateLastVariables() {
}
int property() {
 return ((((((((var_1_14 || var_1_14) ? ((var_1_14 || var_1_14) ? (var_1_1 == ((float) (((((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) > (var_1_6)) ? (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5)))) : (var_1_6))) - var_1_7))) : (var_1_1 == ((float) 1.0000000075E8f))) : (var_1_1 == ((float) var_1_7))) && ((var_1_6 > (- var_1_7)) ? ((var_1_5 == (((((var_1_6 * var_1_7)) > (var_1_1)) ? ((var_1_6 * var_1_7)) : (var_1_1)))) ? (var_1_8 == ((unsigned long int) 8u)) : 1) : (var_1_8 == ((unsigned long int) var_1_20)))) && (((var_1_21 + var_1_12) > (2u >> var_1_11)) ? ((var_1_12 != var_1_21) ? (var_1_10 == ((signed short int) var_1_11)) : (var_1_10 == ((signed short int) 128))) : 1)) && ((var_1_6 == (var_1_4 / var_1_13)) ? (var_1_12 == ((unsigned char) var_1_11)) : 1)) && ((! var_1_2) ? ((var_1_2 || var_1_3) ? (var_1_14 == ((unsigned char) ((! (! var_1_15)) && (var_1_16 && var_1_17)))) : ((((((var_1_12) > (var_1_12)) ? (var_1_12) : (var_1_12))) >= var_1_21) ? (var_1_14 == ((unsigned char) (var_1_2 || var_1_16))) : (var_1_14 == ((unsigned char) (! var_1_19))))) : 1)) && (var_1_20 == ((unsigned char) var_1_11))) && (var_1_21 == ((unsigned short int) 8))) && (var_1_22 == ((unsigned short int) var_1_8))
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
