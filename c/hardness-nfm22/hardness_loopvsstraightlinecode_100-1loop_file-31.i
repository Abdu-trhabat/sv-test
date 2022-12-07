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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch31100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char var_1_1 = 200;
unsigned long int var_1_4 = 32;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 50;
unsigned long int var_1_14 = 1000000000;
unsigned short int var_1_15 = 10;
unsigned short int var_1_16 = 39011;
unsigned long int var_1_17 = 4;
signed char var_1_18 = 4;
signed char var_1_21 = 16;
signed char var_1_22 = 64;
signed long int var_1_23 = 8;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
double var_1_28 = 25.5;
double var_1_29 = 255.25;
double var_1_30 = 24.7;
double var_1_31 = 31.2;
float var_1_32 = -0.2;
unsigned char var_1_33 = 10;
float var_1_34 = 24.5;
unsigned char last_1_var_1_7 = 0;
unsigned short int last_1_var_1_15 = 10;
unsigned long int last_1_var_1_17 = 4;
signed long int last_1_var_1_23 = 8;
unsigned char last_1_var_1_24 = 0;
unsigned char last_1_var_1_33 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_8 = last_1_var_1_33;
 if (stepLocal_8 <= ((last_1_var_1_17 / var_1_4) / var_1_16)) {
  if (last_1_var_1_24) {
   var_1_18 = (var_1_21 - var_1_22);
  } else {
   if (var_1_11) {
    var_1_18 = var_1_22;
   }
  }
 } else {
  var_1_18 = var_1_21;
 }
 if (! (! (last_1_var_1_7 && last_1_var_1_24))) {
  if (last_1_var_1_7) {
   var_1_15 = ((((last_1_var_1_33) > (last_1_var_1_23)) ? (last_1_var_1_33) : (last_1_var_1_23)));
  } else {
   var_1_15 = (((((var_1_16 - var_1_6)) < (10)) ? ((var_1_16 - var_1_6)) : (10)));
  }
 } else {
  var_1_15 = last_1_var_1_23;
 }
 var_1_14 = (var_1_6 + var_1_15);
 unsigned char stepLocal_9 = last_1_var_1_7;
 if (! last_1_var_1_24) {
  if (stepLocal_9 && (last_1_var_1_33 >= ((((last_1_var_1_17) < (var_1_4)) ? (last_1_var_1_17) : (var_1_4))))) {
   var_1_24 = (var_1_10 || ((var_1_25 || var_1_26) || var_1_27));
  } else {
   var_1_24 = var_1_12;
  }
 } else {
  var_1_24 = var_1_12;
 }
 unsigned short int stepLocal_10 = var_1_15;
 if (stepLocal_10 < var_1_4) {
  if (var_1_24) {
   var_1_28 = ((var_1_29 - var_1_30) + var_1_31);
  } else {
   var_1_28 = (4.75 + var_1_29);
  }
 } else {
  var_1_28 = (100.4 + var_1_30);
 }
 var_1_32 = var_1_29;
 var_1_33 = var_1_22;
 var_1_34 = var_1_29;
 unsigned char stepLocal_7 = var_1_12;
 signed long int stepLocal_6 = last_1_var_1_15 & 16;
 signed long int stepLocal_5 = last_1_var_1_15;
 if (last_1_var_1_15 < stepLocal_5) {
  if (stepLocal_7 || (last_1_var_1_15 < (var_1_6 >> last_1_var_1_33))) {
   if (stepLocal_6 <= var_1_4) {
    var_1_13 = var_1_6;
   } else {
    var_1_13 = var_1_6;
   }
  } else {
   var_1_13 = var_1_6;
  }
 } else {
  var_1_13 = var_1_6;
 }
 unsigned char stepLocal_4 = var_1_24;
 unsigned long int stepLocal_3 = var_1_4;
 if ((var_1_24 && var_1_24) && stepLocal_4) {
  if (stepLocal_3 == (- var_1_13)) {
   var_1_7 = (! (! (! var_1_10)));
  } else {
   var_1_7 = 0;
  }
 } else {
  var_1_7 = (var_1_11 && var_1_12);
 }
 unsigned char stepLocal_2 = var_1_13 < var_1_4;
 signed long int stepLocal_1 = var_1_6 + var_1_15;
 unsigned long int stepLocal_0 = var_1_13 % var_1_4;
 if (stepLocal_0 >= var_1_15) {
  if (var_1_24 && stepLocal_2) {
   var_1_1 = var_1_6;
  }
 } else {
  if (stepLocal_1 > var_1_13) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = 1;
  }
 }
 if (var_1_14 < var_1_13) {
  var_1_23 = (((((var_1_14 + var_1_16)) < ((((((var_1_18 - var_1_14)) < (-128)) ? ((var_1_18 - var_1_14)) : (-128))))) ? ((var_1_14 + var_1_16)) : ((((((var_1_18 - var_1_14)) < (-128)) ? ((var_1_18 - var_1_14)) : (-128))))));
 } else {
  var_1_23 = var_1_18;
 }
 if ((var_1_4 <= var_1_18) && var_1_7) {
  if (var_1_23 == var_1_1) {
   var_1_17 = var_1_6;
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 32767);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -461168.6018427382800e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_33 = var_1_33;
}
int property() {
 return ((((((((((((((var_1_13 % var_1_4) >= var_1_15) ? ((var_1_24 && (var_1_13 < var_1_4)) ? (var_1_1 == ((unsigned char) var_1_6)) : 1) : (((var_1_6 + var_1_15) > var_1_13) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) 1)))) && (((var_1_24 && var_1_24) && var_1_24) ? ((var_1_4 == (- var_1_13)) ? (var_1_7 == ((unsigned char) (! (! (! var_1_10))))) : (var_1_7 == ((unsigned char) 0))) : (var_1_7 == ((unsigned char) (var_1_11 && var_1_12))))) && ((last_1_var_1_15 < last_1_var_1_15) ? ((var_1_12 || (last_1_var_1_15 < (var_1_6 >> last_1_var_1_33))) ? (((last_1_var_1_15 & 16) <= var_1_4) ? (var_1_13 == ((unsigned char) var_1_6)) : (var_1_13 == ((unsigned char) var_1_6))) : (var_1_13 == ((unsigned char) var_1_6))) : (var_1_13 == ((unsigned char) var_1_6)))) && (var_1_14 == ((unsigned long int) (var_1_6 + var_1_15)))) && ((! (! (last_1_var_1_7 && last_1_var_1_24))) ? (last_1_var_1_7 ? (var_1_15 == ((unsigned short int) ((((last_1_var_1_33) > (last_1_var_1_23)) ? (last_1_var_1_33) : (last_1_var_1_23))))) : (var_1_15 == ((unsigned short int) (((((var_1_16 - var_1_6)) < (10)) ? ((var_1_16 - var_1_6)) : (10)))))) : (var_1_15 == ((unsigned short int) last_1_var_1_23)))) && (((var_1_4 <= var_1_18) && var_1_7) ? ((var_1_23 == var_1_1) ? (var_1_17 == ((unsigned long int) var_1_6)) : 1) : 1)) && ((last_1_var_1_33 <= ((last_1_var_1_17 / var_1_4) / var_1_16)) ? (last_1_var_1_24 ? (var_1_18 == ((signed char) (var_1_21 - var_1_22))) : (var_1_11 ? (var_1_18 == ((signed char) var_1_22)) : 1)) : (var_1_18 == ((signed char) var_1_21)))) && ((var_1_14 < var_1_13) ? (var_1_23 == ((signed long int) (((((var_1_14 + var_1_16)) < ((((((var_1_18 - var_1_14)) < (-128)) ? ((var_1_18 - var_1_14)) : (-128))))) ? ((var_1_14 + var_1_16)) : ((((((var_1_18 - var_1_14)) < (-128)) ? ((var_1_18 - var_1_14)) : (-128)))))))) : (var_1_23 == ((signed long int) var_1_18)))) && ((! last_1_var_1_24) ? ((last_1_var_1_7 && (last_1_var_1_33 >= ((((last_1_var_1_17) < (var_1_4)) ? (last_1_var_1_17) : (var_1_4))))) ? (var_1_24 == ((unsigned char) (var_1_10 || ((var_1_25 || var_1_26) || var_1_27)))) : (var_1_24 == ((unsigned char) var_1_12))) : (var_1_24 == ((unsigned char) var_1_12)))) && ((var_1_15 < var_1_4) ? (var_1_24 ? (var_1_28 == ((double) ((var_1_29 - var_1_30) + var_1_31))) : (var_1_28 == ((double) (4.75 + var_1_29)))) : (var_1_28 == ((double) (100.4 + var_1_30))))) && (var_1_32 == ((float) var_1_29))) && (var_1_33 == ((unsigned char) var_1_22))) && (var_1_34 == ((float) var_1_29))
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
