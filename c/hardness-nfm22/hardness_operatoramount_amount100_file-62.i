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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 32.2;
double var_1_4 = 10000000.9;
double var_1_5 = 32.46;
double var_1_6 = 10000.6;
unsigned long int var_1_7 = 128;
unsigned long int var_1_9 = 1;
unsigned long int var_1_10 = 10000;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
double var_1_17 = 63.8;
double var_1_18 = 64.125;
double var_1_19 = 0.9;
float var_1_20 = 8.8;
float var_1_21 = 999999999999.75;
float var_1_22 = 127.5;
unsigned long int var_1_23 = 25;
float var_1_24 = 127.75;
float var_1_25 = 64.7;
signed char var_1_26 = -128;
signed char var_1_27 = 64;
signed char var_1_28 = -16;
signed char var_1_29 = -2;
unsigned short int var_1_30 = 4;
unsigned short int var_1_31 = 57679;
unsigned short int var_1_32 = 23164;
unsigned short int var_1_33 = 1;
double last_1_var_1_1 = 32.2;
unsigned long int last_1_var_1_7 = 128;
unsigned long int last_1_var_1_9 = 1;
unsigned short int last_1_var_1_30 = 4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_8 = var_1_14;
 unsigned char stepLocal_7 = var_1_14;
 unsigned short int stepLocal_6 = var_1_32;
 if (stepLocal_7 && var_1_16) {
  var_1_30 = (var_1_31 - ((((var_1_32 - var_1_33) < 0 ) ? -(var_1_32 - var_1_33) : (var_1_32 - var_1_33))));
 } else {
  if ((var_1_13 && (last_1_var_1_1 > 64.177)) || stepLocal_8) {
   if (var_1_10 >= stepLocal_6) {
    var_1_30 = var_1_33;
   } else {
    if (! (last_1_var_1_9 >= var_1_27)) {
     var_1_30 = var_1_33;
    }
   }
  }
 }
 var_1_9 = (((((((((last_1_var_1_7) < (last_1_var_1_30)) ? (last_1_var_1_7) : (last_1_var_1_30))) + ((((last_1_var_1_30) < (last_1_var_1_30)) ? (last_1_var_1_30) : (last_1_var_1_30))))) < (last_1_var_1_30)) ? ((((((last_1_var_1_7) < (last_1_var_1_30)) ? (last_1_var_1_7) : (last_1_var_1_30))) + ((((last_1_var_1_30) < (last_1_var_1_30)) ? (last_1_var_1_30) : (last_1_var_1_30))))) : (last_1_var_1_30)));
 unsigned long int stepLocal_2 = var_1_9 - var_1_30;
 unsigned long int stepLocal_1 = var_1_9;
 if (32 > stepLocal_1) {
  if ((- var_1_30) != stepLocal_2) {
   var_1_7 = ((((((((5u) < (var_1_30)) ? (5u) : (var_1_30)))) < (var_1_30)) ? (((((5u) < (var_1_30)) ? (5u) : (var_1_30)))) : (var_1_30)));
  } else {
   var_1_7 = var_1_9;
  }
 } else {
  var_1_7 = var_1_9;
 }
 if (var_1_13) {
  var_1_17 = ((var_1_18 - var_1_19) + var_1_4);
 } else {
  var_1_17 = var_1_6;
 }
 if (var_1_13) {
  if (var_1_5 > var_1_18) {
   var_1_21 = ((((var_1_18) < (var_1_6)) ? (var_1_18) : (var_1_6)));
  }
 } else {
  var_1_21 = (var_1_5 + (1.55f + 5.7f));
 }
 signed long int stepLocal_4 = ~ var_1_30;
 unsigned short int stepLocal_3 = var_1_30;
 if ((var_1_30 / var_1_23) == stepLocal_4) {
  if ((var_1_30 + (- var_1_30)) >= stepLocal_3) {
   var_1_22 = ((var_1_24 + var_1_25) + (var_1_18 - ((((31.85f) > (10.5f)) ? (31.85f) : (10.5f)))));
  }
 } else {
  var_1_22 = 7.5f;
 }
 unsigned short int stepLocal_5 = var_1_30;
 if (var_1_18 > var_1_24) {
  if (var_1_23 <= stepLocal_5) {
   var_1_28 = ((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29)));
  } else {
   var_1_28 = var_1_29;
  }
 }
 unsigned long int stepLocal_0 = var_1_9;
 if (var_1_30 >= stepLocal_0) {
  var_1_1 = ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) < 0 ) ? -(((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) : (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6)));
 } else {
  var_1_1 = (var_1_4 + var_1_5);
 }
 if (var_1_4 <= (var_1_21 + (var_1_5 * var_1_6))) {
  var_1_12 = ((var_1_13 && var_1_14) && var_1_15);
 } else {
  var_1_12 = var_1_16;
 }
 if ((var_1_30 == var_1_30) || var_1_12) {
  var_1_20 = ((((25.5f) < (var_1_4)) ? (25.5f) : (var_1_4)));
 }
 if (var_1_1 > (var_1_20 * (var_1_24 / 2.8))) {
  if (var_1_14) {
   if (var_1_13) {
    var_1_26 = ((((var_1_27) > (0)) ? (var_1_27) : (0)));
   } else {
    if (var_1_16) {
     var_1_26 = var_1_27;
    } else {
     var_1_26 = var_1_27;
    }
   }
  } else {
   var_1_26 = var_1_27;
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 4294967295);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -230584.3009213691390e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691390e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -230584.3009213691390e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691390e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -127);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 32767);
 assume_abort_if_not(var_1_31 <= 65534);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 16383);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 16383);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_30 = var_1_30;
}
int property() {
 return (((((((((((var_1_30 >= var_1_9) ? (var_1_1 == ((double) ((((((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) < 0 ) ? -(((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6) : (((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))) + var_1_6))))) : (var_1_1 == ((double) (var_1_4 + var_1_5)))) && ((32 > var_1_9) ? (((- var_1_30) != (var_1_9 - var_1_30)) ? (var_1_7 == ((unsigned long int) ((((((((5u) < (var_1_30)) ? (5u) : (var_1_30)))) < (var_1_30)) ? (((((5u) < (var_1_30)) ? (5u) : (var_1_30)))) : (var_1_30))))) : (var_1_7 == ((unsigned long int) var_1_9))) : (var_1_7 == ((unsigned long int) var_1_9)))) && (var_1_9 == ((unsigned long int) (((((((((last_1_var_1_7) < (last_1_var_1_30)) ? (last_1_var_1_7) : (last_1_var_1_30))) + ((((last_1_var_1_30) < (last_1_var_1_30)) ? (last_1_var_1_30) : (last_1_var_1_30))))) < (last_1_var_1_30)) ? ((((((last_1_var_1_7) < (last_1_var_1_30)) ? (last_1_var_1_7) : (last_1_var_1_30))) + ((((last_1_var_1_30) < (last_1_var_1_30)) ? (last_1_var_1_30) : (last_1_var_1_30))))) : (last_1_var_1_30)))))) && ((var_1_4 <= (var_1_21 + (var_1_5 * var_1_6))) ? (var_1_12 == ((unsigned char) ((var_1_13 && var_1_14) && var_1_15))) : (var_1_12 == ((unsigned char) var_1_16)))) && (var_1_13 ? (var_1_17 == ((double) ((var_1_18 - var_1_19) + var_1_4))) : (var_1_17 == ((double) var_1_6)))) && (((var_1_30 == var_1_30) || var_1_12) ? (var_1_20 == ((float) ((((25.5f) < (var_1_4)) ? (25.5f) : (var_1_4))))) : 1)) && (var_1_13 ? ((var_1_5 > var_1_18) ? (var_1_21 == ((float) ((((var_1_18) < (var_1_6)) ? (var_1_18) : (var_1_6))))) : 1) : (var_1_21 == ((float) (var_1_5 + (1.55f + 5.7f)))))) && (((var_1_30 / var_1_23) == (~ var_1_30)) ? (((var_1_30 + (- var_1_30)) >= var_1_30) ? (var_1_22 == ((float) ((var_1_24 + var_1_25) + (var_1_18 - ((((31.85f) > (10.5f)) ? (31.85f) : (10.5f))))))) : 1) : (var_1_22 == ((float) 7.5f)))) && ((var_1_1 > (var_1_20 * (var_1_24 / 2.8))) ? (var_1_14 ? (var_1_13 ? (var_1_26 == ((signed char) ((((var_1_27) > (0)) ? (var_1_27) : (0))))) : (var_1_16 ? (var_1_26 == ((signed char) var_1_27)) : (var_1_26 == ((signed char) var_1_27)))) : (var_1_26 == ((signed char) var_1_27))) : 1)) && ((var_1_18 > var_1_24) ? ((var_1_23 <= var_1_30) ? (var_1_28 == ((signed char) ((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))))) : (var_1_28 == ((signed char) var_1_29))) : 1)) && ((var_1_14 && var_1_16) ? (var_1_30 == ((unsigned short int) (var_1_31 - ((((var_1_32 - var_1_33) < 0 ) ? -(var_1_32 - var_1_33) : (var_1_32 - var_1_33)))))) : (((var_1_13 && (last_1_var_1_1 > 64.177)) || var_1_14) ? ((var_1_10 >= var_1_32) ? (var_1_30 == ((unsigned short int) var_1_33)) : ((! (last_1_var_1_9 >= var_1_27)) ? (var_1_30 == ((unsigned short int) var_1_33)) : 1)) : 1))
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
