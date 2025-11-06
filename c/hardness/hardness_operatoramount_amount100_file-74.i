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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch74Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 16.66;
unsigned char var_1_3 = 32;
double var_1_4 = 49.275;
double var_1_7 = 0.375;
unsigned long int var_1_8 = 3826752623;
signed char var_1_9 = 2;
signed char var_1_10 = 64;
signed char var_1_11 = -32;
float var_1_12 = 1.4;
float var_1_14 = 127.5;
double var_1_15 = 50.5;
double var_1_16 = 9.5;
double var_1_17 = 0.0;
double var_1_18 = 99.25;
signed char var_1_19 = 0;
signed char var_1_20 = -1;
signed char var_1_21 = 5;
unsigned char var_1_22 = 0;
unsigned short int var_1_23 = 2;
unsigned char var_1_25 = 1;
signed long int var_1_26 = -128;
signed long int var_1_27 = 4;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 25;
unsigned char var_1_30 = 0;
signed char var_1_31 = -10;
signed char var_1_32 = 1;
signed char var_1_33 = -16;
signed short int var_1_34 = -16;
unsigned short int var_1_35 = 64;
unsigned short int var_1_36 = 8;
double last_1_var_1_7 = 0.375;
float last_1_var_1_12 = 1.4;
double last_1_var_1_15 = 50.5;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_6 = var_1_14 > (var_1_16 * last_1_var_1_7);
 unsigned long int stepLocal_5 = var_1_29;
 if ((last_1_var_1_12 < (var_1_18 + 128.9f)) || stepLocal_6) {
  if (16u <= stepLocal_5) {
   var_1_28 = var_1_25;
  } else {
   var_1_28 = 0;
  }
 } else {
  var_1_28 = var_1_30;
 }
 if (! var_1_28) {
  var_1_9 = ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)));
 }
 var_1_19 = (var_1_20 - var_1_21);
 var_1_26 = ((var_1_27 - var_1_23) + var_1_10);
 if ((var_1_26 % (var_1_35 + var_1_36)) == var_1_27) {
  if (var_1_30) {
   var_1_34 = var_1_10;
  }
 }
 unsigned char stepLocal_1 = var_1_3;
 unsigned long int stepLocal_0 = var_1_8 - (1212980845u - var_1_34);
 if (stepLocal_1 >= var_1_34) {
  if (var_1_28) {
   if (stepLocal_0 >= (((((- 128u)) < (var_1_3)) ? ((- 128u)) : (var_1_3)))) {
    var_1_7 = var_1_4;
   }
  } else {
   var_1_7 = var_1_4;
  }
 } else {
  var_1_7 = var_1_4;
 }
 signed long int stepLocal_4 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) * var_1_11;
 signed long int stepLocal_3 = var_1_26 * (var_1_21 & var_1_26);
 unsigned char stepLocal_2 = (- var_1_8) <= ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
 if (((var_1_21 | var_1_26) == var_1_20) && stepLocal_2) {
  if (stepLocal_3 >= (var_1_26 * var_1_34)) {
   if (var_1_34 > stepLocal_4) {
    if (var_1_28) {
     var_1_22 = (! var_1_25);
    }
   } else {
    var_1_22 = var_1_25;
   }
  }
 } else {
  var_1_22 = var_1_25;
 }
 if (var_1_26 <= (128 - var_1_3)) {
  var_1_1 = var_1_4;
 } else {
  if (var_1_22 || var_1_28) {
   var_1_1 = var_1_4;
  }
 }
 if (var_1_28) {
  if (((((- var_1_7) < 0 ) ? -(- var_1_7) : (- var_1_7))) <= ((((var_1_4) < ((- var_1_1))) ? (var_1_4) : ((- var_1_1))))) {
   if ((! var_1_28) || var_1_22) {
    var_1_12 = 100000.6f;
   } else {
    var_1_12 = var_1_4;
   }
  } else {
   var_1_12 = var_1_14;
  }
 } else {
  var_1_12 = var_1_4;
 }
 if (var_1_22) {
  if (last_1_var_1_15 < (var_1_16 - (var_1_17 - var_1_18))) {
   if (var_1_22) {
    var_1_15 = ((((var_1_4) > ((255.4 - var_1_18))) ? (var_1_4) : ((255.4 - var_1_18))));
   } else {
    var_1_15 = ((((var_1_14) > (63.25)) ? (var_1_14) : (63.25)));
   }
  }
 } else {
  var_1_15 = 0.1;
 }
 if (var_1_28 || var_1_22) {
  if (var_1_1 > var_1_17) {
   var_1_31 = ((var_1_32 - 2) + var_1_33);
  } else {
   var_1_31 = var_1_21;
  }
 } else {
  var_1_31 = var_1_11;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 4611686.018427388000e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427388000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1073741823);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -63);
 assume_abort_if_not(var_1_33 <= 63);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 32768);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 return (((((((((((var_1_26 <= (128 - var_1_3)) ? (var_1_1 == ((double) var_1_4)) : ((var_1_22 || var_1_28) ? (var_1_1 == ((double) var_1_4)) : 1)) && ((var_1_3 >= var_1_34) ? (var_1_28 ? (((var_1_8 - (1212980845u - var_1_34)) >= (((((- 128u)) < (var_1_3)) ? ((- 128u)) : (var_1_3)))) ? (var_1_7 == ((double) var_1_4)) : 1) : (var_1_7 == ((double) var_1_4))) : (var_1_7 == ((double) var_1_4)))) && ((! var_1_28) ? (var_1_9 == ((signed char) ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))))) : 1)) && (var_1_28 ? ((((((- var_1_7) < 0 ) ? -(- var_1_7) : (- var_1_7))) <= ((((var_1_4) < ((- var_1_1))) ? (var_1_4) : ((- var_1_1))))) ? (((! var_1_28) || var_1_22) ? (var_1_12 == ((float) 100000.6f)) : (var_1_12 == ((float) var_1_4))) : (var_1_12 == ((float) var_1_14))) : (var_1_12 == ((float) var_1_4)))) && (var_1_22 ? ((last_1_var_1_15 < (var_1_16 - (var_1_17 - var_1_18))) ? (var_1_22 ? (var_1_15 == ((double) ((((var_1_4) > ((255.4 - var_1_18))) ? (var_1_4) : ((255.4 - var_1_18)))))) : (var_1_15 == ((double) ((((var_1_14) > (63.25)) ? (var_1_14) : (63.25)))))) : 1) : (var_1_15 == ((double) 0.1)))) && (var_1_19 == ((signed char) (var_1_20 - var_1_21)))) && ((((var_1_21 | var_1_26) == var_1_20) && ((- var_1_8) <= ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))) ? (((var_1_26 * (var_1_21 & var_1_26)) >= (var_1_26 * var_1_34)) ? ((var_1_34 > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))) * var_1_11)) ? (var_1_28 ? (var_1_22 == ((unsigned char) (! var_1_25))) : 1) : (var_1_22 == ((unsigned char) var_1_25))) : 1) : (var_1_22 == ((unsigned char) var_1_25)))) && (var_1_26 == ((signed long int) ((var_1_27 - var_1_23) + var_1_10)))) && (((last_1_var_1_12 < (var_1_18 + 128.9f)) || (var_1_14 > (var_1_16 * last_1_var_1_7))) ? ((16u <= var_1_29) ? (var_1_28 == ((unsigned char) var_1_25)) : (var_1_28 == ((unsigned char) 0))) : (var_1_28 == ((unsigned char) var_1_30)))) && ((var_1_28 || var_1_22) ? ((var_1_1 > var_1_17) ? (var_1_31 == ((signed char) ((var_1_32 - 2) + var_1_33))) : (var_1_31 == ((signed char) var_1_21))) : (var_1_31 == ((signed char) var_1_11)))) && (((var_1_26 % (var_1_35 + var_1_36)) == var_1_27) ? (var_1_30 ? (var_1_34 == ((signed short int) var_1_10)) : 1) : 1)
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
