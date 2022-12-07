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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = -2;
unsigned char var_1_5 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = 10;
double var_1_9 = 255.75;
double var_1_10 = 7.7;
double var_1_11 = 1.5;
double var_1_12 = 49.4;
unsigned short int var_1_13 = 0;
signed char var_1_15 = 5;
signed long int var_1_16 = -256;
signed long int var_1_17 = -32;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 1;
double var_1_22 = 99.6;
double var_1_23 = 0.0;
double var_1_24 = 128.375;
signed short int var_1_25 = -8;
unsigned short int var_1_26 = 5;
signed char var_1_27 = 0;
signed char var_1_28 = 16;
double var_1_29 = 4.5;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 100;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 128;
unsigned long int var_1_35 = 128;
double last_1_var_1_9 = 255.75;
unsigned short int last_1_var_1_13 = 0;
unsigned char last_1_var_1_18 = 0;
double last_1_var_1_22 = 99.6;
unsigned char last_1_var_1_31 = 16;
unsigned long int last_1_var_1_35 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (((last_1_var_1_31) > (last_1_var_1_31)) ? (last_1_var_1_31) : (last_1_var_1_31));
 if (var_1_20) {
  if ((var_1_16 / var_1_17) < stepLocal_2) {
   if (last_1_var_1_22 < ((50.475 + 1.4) + var_1_23)) {
    var_1_26 = var_1_8;
   }
  } else {
   var_1_26 = last_1_var_1_31;
  }
 }
 unsigned short int stepLocal_5 = var_1_26;
 if (stepLocal_5 <= var_1_17) {
  var_1_31 = ((((((64 + var_1_32) - var_1_8)) < ((((((var_1_28 + var_1_33)) > (var_1_34)) ? ((var_1_28 + var_1_33)) : (var_1_34))))) ? (((64 + var_1_32) - var_1_8)) : ((((((var_1_28 + var_1_33)) > (var_1_34)) ? ((var_1_28 + var_1_33)) : (var_1_34))))));
 }
 unsigned char stepLocal_4 = last_1_var_1_18;
 if (var_1_12 == last_1_var_1_22) {
  if (last_1_var_1_18) {
   if ((last_1_var_1_13 < last_1_var_1_35) || stepLocal_4) {
    if (var_1_19) {
     var_1_29 = var_1_23;
    } else {
     var_1_29 = var_1_11;
    }
   }
  } else {
   var_1_29 = var_1_12;
  }
 } else {
  var_1_29 = 127.25;
 }
 if (var_1_11 != var_1_12) {
  if (var_1_29 > (var_1_11 / 127.95)) {
   var_1_13 = var_1_8;
  } else {
   var_1_13 = (var_1_8 + var_1_31);
  }
 }
 if (last_1_var_1_9 < ((10.5 + var_1_29) / var_1_10)) {
  var_1_9 = (var_1_11 + var_1_12);
 } else {
  var_1_9 = (16.6 + var_1_12);
 }
 signed long int stepLocal_1 = (var_1_31 - var_1_8) * var_1_31;
 if ((10 / ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) <= stepLocal_1) {
  var_1_15 = var_1_8;
 } else {
  var_1_15 = var_1_8;
 }
 if (var_1_7) {
  if (! var_1_5) {
   var_1_18 = (var_1_5 && var_1_19);
  } else {
   var_1_18 = (var_1_20 && var_1_21);
  }
 } else {
  var_1_18 = 0;
 }
 if (var_1_18) {
  var_1_22 = ((((var_1_11) > (((var_1_23 - 32.375) - var_1_24))) ? (var_1_11) : (((var_1_23 - 32.375) - var_1_24))));
 }
 unsigned char stepLocal_3 = var_1_18;
 if (var_1_18) {
  if (var_1_19) {
   if (stepLocal_3 || var_1_18) {
    var_1_27 = (var_1_8 - var_1_28);
   } else {
    var_1_27 = var_1_28;
   }
  } else {
   var_1_27 = var_1_8;
  }
 } else {
  var_1_27 = var_1_28;
 }
 unsigned char stepLocal_0 = var_1_18;
 if (var_1_29 > var_1_29) {
  if (var_1_29 < var_1_29) {
   if (((var_1_18 || var_1_18) && var_1_18) && stepLocal_0) {
    var_1_1 = (8 - (64 - var_1_8));
   } else {
    var_1_1 = var_1_8;
   }
  }
 }
 var_1_25 = (var_1_1 + var_1_8);
 unsigned char stepLocal_7 = var_1_18;
 unsigned char stepLocal_6 = var_1_29 == (var_1_10 * var_1_11);
 if (stepLocal_6 && var_1_20) {
  if (((var_1_34 / var_1_17) > (var_1_28 / var_1_32)) && stepLocal_7) {
   var_1_35 = var_1_25;
  } else {
   var_1_35 = var_1_13;
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
 assume_abort_if_not(var_1_17 != 0);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 4611686.018427382800e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 64);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
}
void updateLastVariables() {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_35 = var_1_35;
}
int property() {
 return ((((((((((((var_1_29 > var_1_29) ? ((var_1_29 < var_1_29) ? ((((var_1_18 || var_1_18) && var_1_18) && var_1_18) ? (var_1_1 == ((signed char) (8 - (64 - var_1_8)))) : (var_1_1 == ((signed char) var_1_8))) : 1) : 1) && ((last_1_var_1_9 < ((10.5 + var_1_29) / var_1_10)) ? (var_1_9 == ((double) (var_1_11 + var_1_12))) : (var_1_9 == ((double) (16.6 + var_1_12))))) && ((var_1_11 != var_1_12) ? ((var_1_29 > (var_1_11 / 127.95)) ? (var_1_13 == ((unsigned short int) var_1_8)) : (var_1_13 == ((unsigned short int) (var_1_8 + var_1_31)))) : 1)) && (((10 / ((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17)))) <= ((var_1_31 - var_1_8) * var_1_31)) ? (var_1_15 == ((signed char) var_1_8)) : (var_1_15 == ((signed char) var_1_8)))) && (var_1_7 ? ((! var_1_5) ? (var_1_18 == ((unsigned char) (var_1_5 && var_1_19))) : (var_1_18 == ((unsigned char) (var_1_20 && var_1_21)))) : (var_1_18 == ((unsigned char) 0)))) && (var_1_18 ? (var_1_22 == ((double) ((((var_1_11) > (((var_1_23 - 32.375) - var_1_24))) ? (var_1_11) : (((var_1_23 - 32.375) - var_1_24)))))) : 1)) && (var_1_25 == ((signed short int) (var_1_1 + var_1_8)))) && (var_1_20 ? (((var_1_16 / var_1_17) < ((((last_1_var_1_31) > (last_1_var_1_31)) ? (last_1_var_1_31) : (last_1_var_1_31)))) ? ((last_1_var_1_22 < ((50.475 + 1.4) + var_1_23)) ? (var_1_26 == ((unsigned short int) var_1_8)) : 1) : (var_1_26 == ((unsigned short int) last_1_var_1_31))) : 1)) && (var_1_18 ? (var_1_19 ? ((var_1_18 || var_1_18) ? (var_1_27 == ((signed char) (var_1_8 - var_1_28))) : (var_1_27 == ((signed char) var_1_28))) : (var_1_27 == ((signed char) var_1_8))) : (var_1_27 == ((signed char) var_1_28)))) && ((var_1_12 == last_1_var_1_22) ? (last_1_var_1_18 ? (((last_1_var_1_13 < last_1_var_1_35) || last_1_var_1_18) ? (var_1_19 ? (var_1_29 == ((double) var_1_23)) : (var_1_29 == ((double) var_1_11))) : 1) : (var_1_29 == ((double) var_1_12))) : (var_1_29 == ((double) 127.25)))) && ((var_1_26 <= var_1_17) ? (var_1_31 == ((unsigned char) ((((((64 + var_1_32) - var_1_8)) < ((((((var_1_28 + var_1_33)) > (var_1_34)) ? ((var_1_28 + var_1_33)) : (var_1_34))))) ? (((64 + var_1_32) - var_1_8)) : ((((((var_1_28 + var_1_33)) > (var_1_34)) ? ((var_1_28 + var_1_33)) : (var_1_34)))))))) : 1)) && (((var_1_29 == (var_1_10 * var_1_11)) && var_1_20) ? ((((var_1_34 / var_1_17) > (var_1_28 / var_1_32)) && var_1_18) ? (var_1_35 == ((unsigned long int) var_1_25)) : (var_1_35 == ((unsigned long int) var_1_13))) : 1)
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
