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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 1000000000;
signed long int var_1_7 = 2;
signed long int var_1_8 = 64;
unsigned char var_1_9 = 5;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 10;
signed long int var_1_13 = -128;
signed short int var_1_14 = 32;
unsigned char var_1_15 = 0;
unsigned char var_1_17 = 1;
float var_1_18 = 10.55;
float var_1_19 = 49.875;
float var_1_20 = 49.8;
float var_1_21 = 100.6;
float var_1_22 = 3.2;
float var_1_23 = 127.6;
unsigned char var_1_24 = 1;
double var_1_25 = 63.25;
signed long int var_1_27 = 4;
signed short int var_1_28 = 0;
float var_1_29 = 500.3;
signed char var_1_30 = -5;
signed char var_1_31 = -32;
signed char var_1_32 = 16;
signed char var_1_33 = 5;
signed char var_1_34 = 50;
signed char var_1_35 = -25;
signed char var_1_36 = -25;
signed char var_1_37 = 2;
signed char var_1_38 = 4;
double var_1_39 = 999999999.625;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned short int var_1_42 = 64;
unsigned char last_1_var_1_15 = 0;
signed short int last_1_var_1_28 = 0;
unsigned short int last_1_var_1_42 = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (((var_1_10) > (last_1_var_1_42)) ? (var_1_10) : (last_1_var_1_42));
 unsigned char stepLocal_1 = var_1_8 <= last_1_var_1_28;
 if (last_1_var_1_15) {
  if (stepLocal_2 >= var_1_11) {
   var_1_25 = 128.8;
  }
 } else {
  if (var_1_17 && stepLocal_1) {
   var_1_25 = var_1_23;
  }
 }
 if (var_1_25 < (var_1_19 - var_1_20)) {
  if (var_1_6 < var_1_10) {
   var_1_18 = ((((var_1_21) > ((var_1_22 + var_1_23))) ? (var_1_21) : ((var_1_22 + var_1_23))));
  } else {
   var_1_18 = 3.5f;
  }
 } else {
  var_1_18 = var_1_21;
 }
 if (var_1_10 <= 16) {
  if (((((var_1_18) > (var_1_21)) ? (var_1_18) : (var_1_21))) <= var_1_25) {
   var_1_24 = var_1_11;
  } else {
   var_1_24 = 1;
  }
 } else {
  var_1_24 = var_1_12;
 }
 if (((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))) > var_1_18) {
  var_1_1 = (((var_1_5 + var_1_6) - var_1_7) - var_1_8);
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_5 >= var_1_7) {
  var_1_9 = ((var_1_10 + var_1_11) - var_1_12);
 } else {
  var_1_9 = var_1_12;
 }
 if (! (! (var_1_8 <= var_1_12))) {
  var_1_13 = var_1_8;
 }
 var_1_39 = var_1_22;
 var_1_40 = var_1_41;
 var_1_42 = var_1_11;
 if ((((((var_1_12 - 50)) < (var_1_13)) ? ((var_1_12 - 50)) : (var_1_13))) != var_1_13) {
  if (var_1_40) {
   var_1_15 = var_1_17;
  }
 }
 if (var_1_40) {
  var_1_27 = ((((((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) < (var_1_7)) ? (((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) : (var_1_7)));
 } else {
  var_1_27 = (var_1_42 + ((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6))));
 }
 if (var_1_21 >= var_1_22) {
  if (var_1_15) {
   var_1_30 = ((((var_1_31) > (((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33))))) ? (var_1_31) : (((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33))))));
  } else {
   var_1_30 = -32;
  }
 } else {
  var_1_30 = (((((((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))) < (var_1_36)) ? (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))) : (var_1_36))) + var_1_37);
 }
 if ((var_1_23 <= var_1_39) && (var_1_7 <= -128)) {
  var_1_38 = ((((var_1_34) > (var_1_32)) ? (var_1_34) : (var_1_32)));
 }
 signed long int stepLocal_0 = var_1_27;
 if (stepLocal_0 > (((((var_1_10 / var_1_11)) < ((var_1_12 * var_1_9))) ? ((var_1_10 / var_1_11)) : ((var_1_12 * var_1_9))))) {
  var_1_14 = (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + (var_1_10 - var_1_12));
 }
 unsigned char stepLocal_3 = var_1_17 || var_1_15;
 if (var_1_39 > var_1_22) {
  if (var_1_23 == (- (var_1_25 / var_1_29))) {
   if ((var_1_7 <= 16) && stepLocal_3) {
    var_1_28 = var_1_24;
   }
  }
 } else {
  var_1_28 = var_1_27;
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 536870911);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 536870911);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 64);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -127);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -63);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -63);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_42 = var_1_42;
}
int property(void) {
 return (((((((((((((((((((var_1_18) < (var_1_25)) ? (var_1_18) : (var_1_25))) > var_1_18) ? (var_1_1 == ((signed long int) (((var_1_5 + var_1_6) - var_1_7) - var_1_8))) : (var_1_1 == ((signed long int) var_1_7))) && ((var_1_5 >= var_1_7) ? (var_1_9 == ((unsigned char) ((var_1_10 + var_1_11) - var_1_12))) : (var_1_9 == ((unsigned char) var_1_12)))) && ((! (! (var_1_8 <= var_1_12))) ? (var_1_13 == ((signed long int) var_1_8)) : 1)) && ((var_1_27 > (((((var_1_10 / var_1_11)) < ((var_1_12 * var_1_9))) ? ((var_1_10 / var_1_11)) : ((var_1_12 * var_1_9))))) ? (var_1_14 == ((signed short int) (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) + (var_1_10 - var_1_12)))) : 1)) && (((((((var_1_12 - 50)) < (var_1_13)) ? ((var_1_12 - 50)) : (var_1_13))) != var_1_13) ? (var_1_40 ? (var_1_15 == ((unsigned char) var_1_17)) : 1) : 1)) && ((var_1_25 < (var_1_19 - var_1_20)) ? ((var_1_6 < var_1_10) ? (var_1_18 == ((float) ((((var_1_21) > ((var_1_22 + var_1_23))) ? (var_1_21) : ((var_1_22 + var_1_23)))))) : (var_1_18 == ((float) 3.5f))) : (var_1_18 == ((float) var_1_21)))) && ((var_1_10 <= 16) ? ((((((var_1_18) > (var_1_21)) ? (var_1_18) : (var_1_21))) <= var_1_25) ? (var_1_24 == ((unsigned char) var_1_11)) : (var_1_24 == ((unsigned char) 1))) : (var_1_24 == ((unsigned char) var_1_12)))) && (last_1_var_1_15 ? ((((((var_1_10) > (last_1_var_1_42)) ? (var_1_10) : (last_1_var_1_42))) >= var_1_11) ? (var_1_25 == ((double) 128.8)) : 1) : ((var_1_17 && (var_1_8 <= last_1_var_1_28)) ? (var_1_25 == ((double) var_1_23)) : 1))) && (var_1_40 ? (var_1_27 == ((signed long int) ((((((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) < (var_1_7)) ? (((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) : (var_1_7))))) : (var_1_27 == ((signed long int) (var_1_42 + ((((var_1_10) < (var_1_6)) ? (var_1_10) : (var_1_6)))))))) && ((var_1_39 > var_1_22) ? ((var_1_23 == (- (var_1_25 / var_1_29))) ? (((var_1_7 <= 16) && (var_1_17 || var_1_15)) ? (var_1_28 == ((signed short int) var_1_24)) : 1) : 1) : (var_1_28 == ((signed short int) var_1_27)))) && ((var_1_21 >= var_1_22) ? (var_1_15 ? (var_1_30 == ((signed char) ((((var_1_31) > (((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33))))) ? (var_1_31) : (((((var_1_32) > (var_1_33)) ? (var_1_32) : (var_1_33)))))))) : (var_1_30 == ((signed char) -32))) : (var_1_30 == ((signed char) (((((((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))) < (var_1_36)) ? (((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))) : (var_1_36))) + var_1_37))))) && (((var_1_23 <= var_1_39) && (var_1_7 <= -128)) ? (var_1_38 == ((signed char) ((((var_1_34) > (var_1_32)) ? (var_1_34) : (var_1_32))))) : 1)) && (var_1_39 == ((double) var_1_22))) && (var_1_40 == ((unsigned char) var_1_41))) && (var_1_42 == ((unsigned short int) var_1_11))
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
