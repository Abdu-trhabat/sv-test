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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 200;
unsigned short int var_1_5 = 42139;
unsigned short int var_1_7 = 1;
double var_1_9 = 0.1;
float var_1_12 = 10000000000.5;
float var_1_13 = 255.6;
float var_1_14 = 128.2;
signed long int var_1_15 = 500;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
signed char var_1_19 = -5;
signed char var_1_20 = -1;
signed char var_1_21 = 8;
float var_1_22 = 3.75;
signed short int var_1_23 = 10;
unsigned long int var_1_24 = 8;
unsigned char var_1_25 = 5;
unsigned char var_1_26 = 50;
float var_1_27 = 4.5;
unsigned short int var_1_28 = 5;
unsigned long int var_1_29 = 50;
double var_1_30 = 3.5;
unsigned char var_1_31 = 1;
float last_1_var_1_12 = 10000000000.5;
signed short int last_1_var_1_23 = 10;
unsigned long int last_1_var_1_24 = 8;
unsigned char last_1_var_1_25 = 5;
unsigned long int last_1_var_1_29 = 50;
unsigned char last_1_var_1_31 = 1;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_1 = var_1_5;
 unsigned long int stepLocal_0 = (last_1_var_1_25 + last_1_var_1_23) + (last_1_var_1_29 / var_1_5);
 if ((last_1_var_1_12 / var_1_9) != last_1_var_1_12) {
  if (var_1_9 >= last_1_var_1_12) {
   var_1_7 = last_1_var_1_25;
  } else {
   if (stepLocal_1 <= last_1_var_1_25) {
    if (last_1_var_1_25 < stepLocal_0) {
     if (last_1_var_1_31) {
      var_1_7 = 5;
     } else {
      var_1_7 = last_1_var_1_25;
     }
    } else {
     var_1_7 = last_1_var_1_25;
    }
   } else {
    var_1_7 = last_1_var_1_25;
   }
  }
 } else {
  var_1_7 = var_1_5;
 }
 if (var_1_18) {
  var_1_29 = (((((var_1_7 + 100000000u)) > (var_1_26)) ? ((var_1_7 + 100000000u)) : (var_1_26)));
 }
 if (var_1_17) {
  if (((((var_1_29) > (var_1_5)) ? (var_1_29) : (var_1_5))) < ((((4) < 0 ) ? -(4) : (4)))) {
   var_1_23 = var_1_20;
  }
 }
 var_1_19 = ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21)));
 var_1_30 = var_1_14;
 var_1_31 = var_1_17;
 if (var_1_13 != 4.5f) {
  if (var_1_31) {
   var_1_16 = var_1_17;
  } else {
   var_1_16 = (! 0);
  }
 } else {
  var_1_16 = (var_1_18 || (! var_1_17));
 }
 if (var_1_16 || var_1_17) {
  var_1_22 = ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13)));
 }
 if (var_1_31) {
  var_1_25 = (4 + 8);
 } else {
  var_1_25 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 }
 if (var_1_13 != var_1_22) {
  var_1_28 = var_1_25;
 } else {
  var_1_28 = (var_1_5 - 10);
 }
 if (var_1_16) {
  var_1_1 = (((((var_1_25 + var_1_25)) < ((var_1_5 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) ? ((var_1_25 + var_1_25)) : ((var_1_5 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))));
 } else {
  var_1_1 = (((((var_1_5 - var_1_25)) < ((var_1_25 + (256 + 1)))) ? ((var_1_5 - var_1_25)) : ((var_1_25 + (256 + 1)))));
 }
 unsigned short int stepLocal_3 = var_1_5;
 if (stepLocal_3 >= ((((var_1_25) < (var_1_7)) ? (var_1_25) : (var_1_7)))) {
  if (! var_1_16) {
   var_1_15 = var_1_25;
  }
 }
 if (var_1_16 || var_1_18) {
  var_1_24 = ((((last_1_var_1_24) > (var_1_25)) ? (last_1_var_1_24) : (var_1_25)));
 } else {
  var_1_24 = ((((2u) > (100u)) ? (2u) : (100u)));
 }
 signed long int stepLocal_2 = ((((-64) < (var_1_28)) ? (-64) : (var_1_28))) + (var_1_25 << 1);
 if (stepLocal_2 < var_1_7) {
  var_1_12 = (((((var_1_13 - 128.9f)) < (var_1_14)) ? ((var_1_13 - 128.9f)) : (var_1_14)));
 }
 if (var_1_1 != var_1_25) {
  if (var_1_23 >= -128) {
   if (var_1_30 != ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) {
    var_1_27 = (var_1_13 - (99999.4f + 9.999999999125E9f));
   } else {
    var_1_27 = ((((0.8f) > (var_1_13)) ? (0.8f) : (var_1_13)));
   }
  }
 } else {
  var_1_27 = var_1_14;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -127);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -127);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 254);
}
void updateLastVariables() {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
}
int property() {
 return ((((((((((((((var_1_16 ? (var_1_1 == ((unsigned short int) (((((var_1_25 + var_1_25)) < ((var_1_5 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) ? ((var_1_25 + var_1_25)) : ((var_1_5 - ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))))) : (var_1_1 == ((unsigned short int) (((((var_1_5 - var_1_25)) < ((var_1_25 + (256 + 1)))) ? ((var_1_5 - var_1_25)) : ((var_1_25 + (256 + 1)))))))) && (((last_1_var_1_12 / var_1_9) != last_1_var_1_12) ? ((var_1_9 >= last_1_var_1_12) ? (var_1_7 == ((unsigned short int) last_1_var_1_25)) : ((var_1_5 <= last_1_var_1_25) ? ((last_1_var_1_25 < ((last_1_var_1_25 + last_1_var_1_23) + (last_1_var_1_29 / var_1_5))) ? (last_1_var_1_31 ? (var_1_7 == ((unsigned short int) 5)) : (var_1_7 == ((unsigned short int) last_1_var_1_25))) : (var_1_7 == ((unsigned short int) last_1_var_1_25))) : (var_1_7 == ((unsigned short int) last_1_var_1_25)))) : (var_1_7 == ((unsigned short int) var_1_5)))) && (((((((-64) < (var_1_28)) ? (-64) : (var_1_28))) + (var_1_25 << 1)) < var_1_7) ? (var_1_12 == ((float) (((((var_1_13 - 128.9f)) < (var_1_14)) ? ((var_1_13 - 128.9f)) : (var_1_14))))) : 1)) && ((var_1_5 >= ((((var_1_25) < (var_1_7)) ? (var_1_25) : (var_1_7)))) ? ((! var_1_16) ? (var_1_15 == ((signed long int) var_1_25)) : 1) : 1)) && ((var_1_13 != 4.5f) ? (var_1_31 ? (var_1_16 == ((unsigned char) var_1_17)) : (var_1_16 == ((unsigned char) (! 0)))) : (var_1_16 == ((unsigned char) (var_1_18 || (! var_1_17)))))) && (var_1_19 == ((signed char) ((((var_1_20) > (var_1_21)) ? (var_1_20) : (var_1_21)))))) && ((var_1_16 || var_1_17) ? (var_1_22 == ((float) ((((var_1_14) > (var_1_13)) ? (var_1_14) : (var_1_13))))) : 1)) && (var_1_17 ? ((((((var_1_29) > (var_1_5)) ? (var_1_29) : (var_1_5))) < ((((4) < 0 ) ? -(4) : (4)))) ? (var_1_23 == ((signed short int) var_1_20)) : 1) : 1)) && ((var_1_16 || var_1_18) ? (var_1_24 == ((unsigned long int) ((((last_1_var_1_24) > (var_1_25)) ? (last_1_var_1_24) : (var_1_25))))) : (var_1_24 == ((unsigned long int) ((((2u) > (100u)) ? (2u) : (100u))))))) && (var_1_31 ? (var_1_25 == ((unsigned char) (4 + 8))) : (var_1_25 == ((unsigned char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))) && ((var_1_1 != var_1_25) ? ((var_1_23 >= -128) ? ((var_1_30 != ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) ? (var_1_27 == ((float) (var_1_13 - (99999.4f + 9.999999999125E9f)))) : (var_1_27 == ((float) ((((0.8f) > (var_1_13)) ? (0.8f) : (var_1_13)))))) : 1) : (var_1_27 == ((float) var_1_14)))) && ((var_1_13 != var_1_22) ? (var_1_28 == ((unsigned short int) var_1_25)) : (var_1_28 == ((unsigned short int) (var_1_5 - 10))))) && (var_1_18 ? (var_1_29 == ((unsigned long int) (((((var_1_7 + 100000000u)) > (var_1_26)) ? ((var_1_7 + 100000000u)) : (var_1_26))))) : 1)) && (var_1_30 == ((double) var_1_14))) && (var_1_31 == ((unsigned char) var_1_17))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
