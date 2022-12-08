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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed short int var_1_5 = 25;
signed short int var_1_7 = 128;
signed short int var_1_8 = 256;
signed char var_1_9 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -10;
signed char var_1_12 = -25;
double var_1_13 = 64.875;
double var_1_15 = 1.625;
double var_1_16 = 32.2;
double var_1_17 = 8.6;
double var_1_18 = 10.5;
double var_1_19 = 4.25;
float var_1_20 = 64.5;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed long int var_1_25 = -5;
unsigned char var_1_26 = 1;
unsigned char var_1_28 = 0;
signed long int var_1_29 = -10;
float var_1_30 = 10.4;
unsigned long int var_1_31 = 8;
unsigned short int var_1_32 = 47145;
unsigned short int var_1_33 = 17741;
unsigned short int var_1_34 = 2;
unsigned long int var_1_35 = 3282184810;
signed short int last_1_var_1_5 = 25;
signed char last_1_var_1_9 = -10;
double last_1_var_1_13 = 64.875;
signed long int last_1_var_1_25 = -5;
unsigned char last_1_var_1_26 = 1;
signed long int last_1_var_1_29 = -10;
unsigned long int last_1_var_1_31 = 8;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_4 = last_1_var_1_9 >= 4;
 signed long int stepLocal_3 = last_1_var_1_9 % 50;
 unsigned char stepLocal_2 = (- var_1_8) <= (last_1_var_1_9 & last_1_var_1_9);
 if (last_1_var_1_25 < stepLocal_3) {
  if ((128u <= last_1_var_1_29) && stepLocal_4) {
   if (stepLocal_2 && last_1_var_1_26) {
    var_1_26 = var_1_23;
   } else {
    if (((((var_1_19) < (1.6)) ? (var_1_19) : (1.6))) < (var_1_16 - var_1_15)) {
     var_1_26 = (! var_1_28);
    } else {
     var_1_26 = var_1_23;
    }
   }
  } else {
   var_1_26 = var_1_28;
  }
 } else {
  var_1_26 = var_1_24;
 }
 if (9.6 <= last_1_var_1_13) {
  if (var_1_19 == 4.125) {
   var_1_22 = (var_1_23 || var_1_24);
  }
 }
 unsigned char stepLocal_5 = var_1_24;
 if (stepLocal_5 && (var_1_17 != var_1_19)) {
  if (! last_1_var_1_26) {
   var_1_29 = -256;
  }
 } else {
  var_1_29 = last_1_var_1_5;
 }
 unsigned long int stepLocal_0 = last_1_var_1_31;
 if (stepLocal_0 > var_1_7) {
  var_1_9 = ((var_1_10 + var_1_11) + var_1_12);
 }
 if ((var_1_9 * (var_1_8 - 128)) < var_1_10) {
  var_1_20 = var_1_15;
 }
 if ((var_1_9 <= var_1_29) || var_1_22) {
  var_1_1 = 0;
 }
 unsigned long int stepLocal_9 = (var_1_35 - var_1_32) - ((((var_1_8) < (var_1_33)) ? (var_1_8) : (var_1_33)));
 signed long int stepLocal_8 = var_1_29;
 if (var_1_1) {
  if ((var_1_32 - (var_1_33 - var_1_34)) >= stepLocal_8) {
   var_1_31 = (32u + var_1_33);
  }
 } else {
  if (last_1_var_1_31 <= stepLocal_9) {
   var_1_31 = var_1_33;
  } else {
   var_1_31 = var_1_8;
  }
 }
 signed char stepLocal_1 = var_1_9;
 if (stepLocal_1 > var_1_31) {
  var_1_13 = ((var_1_15 - var_1_16) + (((((var_1_17) > (499.25)) ? (var_1_17) : (499.25))) + var_1_18));
 } else {
  if (var_1_22) {
   var_1_13 = var_1_15;
  } else {
   var_1_13 = var_1_19;
  }
 }
 if (var_1_1 || var_1_22) {
  var_1_5 = ((((50) < (var_1_9)) ? (50) : (var_1_9)));
 } else {
  if (var_1_22) {
   var_1_5 = (var_1_7 - var_1_8);
  }
 }
 if (var_1_1 && ((var_1_8 >= var_1_29) || var_1_26)) {
  var_1_25 = ((((var_1_9) < ((((((var_1_10 + var_1_8)) < (var_1_7)) ? ((var_1_10 + var_1_8)) : (var_1_7))))) ? (var_1_9) : ((((((var_1_10 + var_1_8)) < (var_1_7)) ? ((var_1_10 + var_1_8)) : (var_1_7))))));
 } else {
  var_1_25 = (var_1_5 + 16);
 }
 unsigned long int stepLocal_7 = var_1_31;
 signed short int stepLocal_6 = var_1_7;
 if (stepLocal_7 <= var_1_25) {
  if (stepLocal_6 > (var_1_12 + var_1_25)) {
   var_1_30 = (var_1_15 - ((((var_1_16) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_16) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))));
  } else {
   var_1_30 = var_1_18;
  }
 } else {
  var_1_30 = var_1_16;
 }
}
void updateVariables() {
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -31);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -31);
 assume_abort_if_not(var_1_11 <= 31);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -63);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 32767);
 assume_abort_if_not(var_1_32 <= 65535);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 16383);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 16383);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 3221225471);
 assume_abort_if_not(var_1_35 <= 4294967295);
}
void updateLastVariables() {
 last_1_var_1_5 = var_1_5;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
}
int property() {
 return ((((((((((((var_1_9 <= var_1_29) || var_1_22) ? (var_1_1 == ((unsigned char) 0)) : 1) && ((var_1_1 || var_1_22) ? (var_1_5 == ((signed short int) ((((50) < (var_1_9)) ? (50) : (var_1_9))))) : (var_1_22 ? (var_1_5 == ((signed short int) (var_1_7 - var_1_8))) : 1))) && ((last_1_var_1_31 > var_1_7) ? (var_1_9 == ((signed char) ((var_1_10 + var_1_11) + var_1_12))) : 1)) && ((var_1_9 > var_1_31) ? (var_1_13 == ((double) ((var_1_15 - var_1_16) + (((((var_1_17) > (499.25)) ? (var_1_17) : (499.25))) + var_1_18)))) : (var_1_22 ? (var_1_13 == ((double) var_1_15)) : (var_1_13 == ((double) var_1_19))))) && (((var_1_9 * (var_1_8 - 128)) < var_1_10) ? (var_1_20 == ((float) var_1_15)) : 1)) && ((9.6 <= last_1_var_1_13) ? ((var_1_19 == 4.125) ? (var_1_22 == ((unsigned char) (var_1_23 || var_1_24))) : 1) : 1)) && ((var_1_1 && ((var_1_8 >= var_1_29) || var_1_26)) ? (var_1_25 == ((signed long int) ((((var_1_9) < ((((((var_1_10 + var_1_8)) < (var_1_7)) ? ((var_1_10 + var_1_8)) : (var_1_7))))) ? (var_1_9) : ((((((var_1_10 + var_1_8)) < (var_1_7)) ? ((var_1_10 + var_1_8)) : (var_1_7)))))))) : (var_1_25 == ((signed long int) (var_1_5 + 16))))) && ((last_1_var_1_25 < (last_1_var_1_9 % 50)) ? (((128u <= last_1_var_1_29) && (last_1_var_1_9 >= 4)) ? ((((- var_1_8) <= (last_1_var_1_9 & last_1_var_1_9)) && last_1_var_1_26) ? (var_1_26 == ((unsigned char) var_1_23)) : ((((((var_1_19) < (1.6)) ? (var_1_19) : (1.6))) < (var_1_16 - var_1_15)) ? (var_1_26 == ((unsigned char) (! var_1_28))) : (var_1_26 == ((unsigned char) var_1_23)))) : (var_1_26 == ((unsigned char) var_1_28))) : (var_1_26 == ((unsigned char) var_1_24)))) && ((var_1_24 && (var_1_17 != var_1_19)) ? ((! last_1_var_1_26) ? (var_1_29 == ((signed long int) -256)) : 1) : (var_1_29 == ((signed long int) last_1_var_1_5)))) && ((var_1_31 <= var_1_25) ? ((var_1_7 > (var_1_12 + var_1_25)) ? (var_1_30 == ((float) (var_1_15 - ((((var_1_16) < (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))) ? (var_1_16) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))))) : (var_1_30 == ((float) var_1_18))) : (var_1_30 == ((float) var_1_16)))) && (var_1_1 ? (((var_1_32 - (var_1_33 - var_1_34)) >= var_1_29) ? (var_1_31 == ((unsigned long int) (32u + var_1_33))) : 1) : ((last_1_var_1_31 <= ((var_1_35 - var_1_32) - ((((var_1_8) < (var_1_33)) ? (var_1_8) : (var_1_33))))) ? (var_1_31 == ((unsigned long int) var_1_33)) : (var_1_31 == ((unsigned long int) var_1_8))))
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
