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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float var_1_1 = 3.95;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
double var_1_8 = 64.5;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 2.25;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 256;
float var_1_22 = 256.5;
float var_1_25 = 1.375;
float var_1_26 = 10.25;
signed char var_1_27 = -64;
signed char var_1_30 = -10;
unsigned long int var_1_31 = 8;
double var_1_32 = 499.75;
double var_1_34 = 25.1;
double var_1_36 = 3.15;
double var_1_37 = 16.5;
unsigned char var_1_38 = 8;
unsigned char var_1_39 = 1;
float var_1_40 = 255.8;
signed short int var_1_41 = 256;
signed char var_1_42 = -32;
unsigned long int last_1_var_1_6 = 10000;
void initially(void) {
}
void step(void) {
 if ((var_1_15 - ((((0) < (var_1_16)) ? (0) : (var_1_16)))) > last_1_var_1_6) {
  var_1_14 = var_1_12;
 }
 if ((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) {
  var_1_10 = (((((var_1_5 - (var_1_12 - var_1_13))) < (var_1_4)) ? ((var_1_5 - (var_1_12 - var_1_13))) : (var_1_4)));
 } else {
  var_1_10 = 4.2f;
 }
 var_1_20 = var_1_16;
 var_1_21 = var_1_16;
 if (var_1_21 <= (var_1_16 * var_1_20)) {
  if ((var_1_5 + var_1_14) <= 127.025f) {
   var_1_17 = var_1_18;
  } else {
   var_1_17 = var_1_18;
  }
 } else {
  var_1_17 = var_1_18;
 }
 unsigned char stepLocal_0 = var_1_20 != var_1_20;
 if (var_1_17) {
  if (((((var_1_14) > (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78))))) ? (var_1_14) : (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78)))))) != (var_1_4 - var_1_8)) {
   if (stepLocal_0 || var_1_17) {
    var_1_6 = var_1_20;
   } else {
    var_1_6 = 5u;
   }
  } else {
   var_1_6 = var_1_20;
  }
 } else {
  var_1_6 = var_1_20;
 }
 if (var_1_6 <= var_1_6) {
  if (var_1_6 > var_1_6) {
   var_1_1 = (var_1_4 - var_1_5);
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_4;
 }
 if (var_1_1 < var_1_11) {
  var_1_19 = (var_1_13 - 256.4);
 }
 if (var_1_21 >= var_1_6) {
  var_1_22 = (var_1_25 + var_1_26);
 }
 if (((var_1_10 + 127.75f) * var_1_25) < var_1_26) {
  if (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) <= (((((var_1_6) < (var_1_6)) ? (var_1_6) : (var_1_6))) & var_1_21)) {
   var_1_27 = var_1_30;
  }
 }
 if (var_1_21 < (~ var_1_30)) {
  if (var_1_26 < var_1_25) {
   var_1_31 = var_1_6;
  }
 }
 if (var_1_25 == var_1_26) {
  if (var_1_26 >= var_1_25) {
   if (! var_1_17) {
    var_1_32 = (var_1_34 - ((((var_1_37) > (var_1_36)) ? (var_1_37) : (var_1_36))));
   }
  }
 } else {
  var_1_32 = (((((((var_1_34 - 9.5) < 0 ) ? -(var_1_34 - 9.5) : (var_1_34 - 9.5))) < 0 ) ? -((((var_1_34 - 9.5) < 0 ) ? -(var_1_34 - 9.5) : (var_1_34 - 9.5))) : ((((var_1_34 - 9.5) < 0 ) ? -(var_1_34 - 9.5) : (var_1_34 - 9.5)))));
 }
 if (! (var_1_37 <= var_1_36)) {
  var_1_38 = var_1_39;
 }
 if (128 != ((var_1_39 >> 4) & var_1_20)) {
  var_1_40 = ((((var_1_36) > (var_1_37)) ? (var_1_36) : (var_1_37)));
 }
 if ((var_1_6 / var_1_42) < var_1_6) {
  var_1_41 = ((((((((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))) < 0 ) ? -((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))) : ((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))))) < 0 ) ? -(((((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))) < 0 ) ? -((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))) : ((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))))) : (((((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))) < 0 ) ? -((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20))) : ((((var_1_30) > (var_1_20)) ? (var_1_30) : (var_1_20)))))));
 } else {
  var_1_41 = -256;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427382800e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -1);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -128);
 assume_abort_if_not(var_1_42 <= 127);
 assume_abort_if_not(var_1_42 != 0);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
}
int property() {
 return ((((((((var_1_6 <= var_1_6) ? ((var_1_6 > var_1_6) ? (var_1_1 == ((float) (var_1_4 - var_1_5))) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) var_1_4))) && (var_1_17 ? ((((((var_1_14) > (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78))))) ? (var_1_14) : (((((var_1_5) > (199.78)) ? (var_1_5) : (199.78)))))) != (var_1_4 - var_1_8)) ? (((var_1_20 != var_1_20) || var_1_17) ? (var_1_6 == ((unsigned long int) var_1_20)) : (var_1_6 == ((unsigned long int) 5u))) : (var_1_6 == ((unsigned long int) var_1_20))) : (var_1_6 == ((unsigned long int) var_1_20)))) && (((var_1_5 / var_1_11) >= (var_1_8 - var_1_4)) ? (var_1_10 == ((float) (((((var_1_5 - (var_1_12 - var_1_13))) < (var_1_4)) ? ((var_1_5 - (var_1_12 - var_1_13))) : (var_1_4))))) : (var_1_10 == ((float) 4.2f)))) && (((var_1_15 - ((((0) < (var_1_16)) ? (0) : (var_1_16)))) > last_1_var_1_6) ? (var_1_14 == ((double) var_1_12)) : 1)) && ((var_1_21 <= (var_1_16 * var_1_20)) ? (((var_1_5 + var_1_14) <= 127.025f) ? (var_1_17 == ((unsigned char) var_1_18)) : (var_1_17 == ((unsigned char) var_1_18))) : (var_1_17 == ((unsigned char) var_1_18)))) && ((var_1_1 < var_1_11) ? (var_1_19 == ((double) (var_1_13 - 256.4))) : 1)) && (var_1_20 == ((unsigned char) var_1_16))) && (var_1_21 == ((unsigned short int) var_1_16))
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
