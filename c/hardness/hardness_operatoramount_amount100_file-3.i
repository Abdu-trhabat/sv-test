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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
unsigned char var_1_4 = 128;
signed char var_1_5 = 32;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed char var_1_8 = 2;
unsigned char var_1_10 = 0;
unsigned short int var_1_11 = 5;
signed long int var_1_12 = 10;
unsigned long int var_1_13 = 500;
float var_1_14 = 128.5;
unsigned char var_1_15 = 1;
float var_1_16 = 99999999999999.05;
float var_1_17 = 1.125;
float var_1_18 = 0.30000000000000004;
double var_1_19 = 128.6;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 32;
unsigned char var_1_25 = 200;
unsigned char var_1_26 = 5;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned short int var_1_30 = 128;
double var_1_31 = 4.5;
signed char last_1_var_1_1 = -2;
unsigned short int last_1_var_1_11 = 5;
unsigned long int last_1_var_1_13 = 500;
unsigned char last_1_var_1_27 = 0;
unsigned short int last_1_var_1_30 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_var_1_11;
 signed long int stepLocal_0 = last_1_var_1_11;
 if (stepLocal_0 != (last_1_var_1_27 / var_1_4)) {
  if (last_1_var_1_27 >= stepLocal_1) {
   var_1_1 = (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + -5);
  } else {
   var_1_1 = var_1_5;
  }
 }
 signed long int stepLocal_3 = last_1_var_1_27 / var_1_4;
 if (var_1_12 != stepLocal_3) {
  var_1_13 = ((((var_1_8) > (8u)) ? (var_1_8) : (8u)));
 }
 if (var_1_4 != (last_1_var_1_13 + last_1_var_1_30)) {
  var_1_6 = ((var_1_4 <= last_1_var_1_13) && (! var_1_7));
 } else {
  if ((((((last_1_var_1_11) > (last_1_var_1_1)) ? (last_1_var_1_11) : (last_1_var_1_1))) > var_1_8) || var_1_7) {
   var_1_6 = var_1_10;
  } else {
   var_1_6 = var_1_7;
  }
 }
 if (var_1_15 || var_1_6) {
  var_1_14 = (var_1_16 + (((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) < 0 ) ? -((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) : ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))))));
 } else {
  var_1_14 = var_1_16;
 }
 var_1_31 = 8.75;
 unsigned long int stepLocal_8 = var_1_13;
 unsigned long int stepLocal_7 = var_1_13 + (var_1_13 / var_1_4);
 unsigned char stepLocal_6 = var_1_7;
 if (stepLocal_6 && var_1_6) {
  if (var_1_5 > stepLocal_8) {
   if (var_1_25 < stepLocal_7) {
    var_1_27 = var_1_23;
   }
  }
 }
 if (! var_1_6) {
  if (var_1_14 < ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))) {
   var_1_19 = (49.5 + ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17))));
  } else {
   var_1_19 = var_1_16;
  }
 } else {
  var_1_19 = var_1_17;
 }
 if (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) > var_1_19) {
  var_1_28 = (var_1_10 || var_1_29);
 } else {
  if (var_1_29) {
   var_1_28 = (var_1_6 || var_1_7);
  } else {
   var_1_28 = 0;
  }
 }
 unsigned char stepLocal_9 = var_1_29;
 if (var_1_7) {
  var_1_30 = ((var_1_13 + (10000 - var_1_26)) + 5);
 } else {
  if (var_1_28 && stepLocal_9) {
   var_1_30 = (last_1_var_1_30 + (var_1_4 + var_1_8));
  }
 }
 unsigned char stepLocal_5 = var_1_21;
 signed char stepLocal_4 = var_1_1;
 if ((var_1_19 * var_1_18) > var_1_16) {
  if (var_1_13 < stepLocal_4) {
   var_1_20 = (((((var_1_21 - var_1_8)) > ((var_1_22 + var_1_23))) ? ((var_1_21 - var_1_8)) : ((var_1_22 + var_1_23))));
  } else {
   if (var_1_13 < stepLocal_5) {
    var_1_20 = ((((var_1_23) < (var_1_8)) ? (var_1_23) : (var_1_8)));
   } else {
    var_1_20 = ((var_1_25 - var_1_26) - var_1_8);
   }
  }
 } else {
  if (var_1_10) {
   var_1_20 = var_1_8;
  } else {
   var_1_20 = var_1_25;
  }
 }
 unsigned char stepLocal_2 = var_1_10;
 if (stepLocal_2 && ((var_1_20 * var_1_8) >= (var_1_12 + last_1_var_1_11))) {
  if (var_1_7) {
   var_1_11 = var_1_20;
  }
 } else {
  var_1_11 = var_1_8;
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 190);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_30 = var_1_30;
}
int property(void) {
 return (((((((((((last_1_var_1_11 != (last_1_var_1_27 / var_1_4)) ? ((last_1_var_1_27 >= last_1_var_1_11) ? (var_1_1 == ((signed char) (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) + -5))) : (var_1_1 == ((signed char) var_1_5))) : 1) && ((var_1_4 != (last_1_var_1_13 + last_1_var_1_30)) ? (var_1_6 == ((unsigned char) ((var_1_4 <= last_1_var_1_13) && (! var_1_7)))) : (((((((last_1_var_1_11) > (last_1_var_1_1)) ? (last_1_var_1_11) : (last_1_var_1_1))) > var_1_8) || var_1_7) ? (var_1_6 == ((unsigned char) var_1_10)) : (var_1_6 == ((unsigned char) var_1_7))))) && ((var_1_10 && ((var_1_20 * var_1_8) >= (var_1_12 + last_1_var_1_11))) ? (var_1_7 ? (var_1_11 == ((unsigned short int) var_1_20)) : 1) : (var_1_11 == ((unsigned short int) var_1_8)))) && ((var_1_12 != (last_1_var_1_27 / var_1_4)) ? (var_1_13 == ((unsigned long int) ((((var_1_8) > (8u)) ? (var_1_8) : (8u))))) : 1)) && ((var_1_15 || var_1_6) ? (var_1_14 == ((float) (var_1_16 + (((((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) < 0 ) ? -((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18))) : ((((var_1_17) < (var_1_18)) ? (var_1_17) : (var_1_18)))))))) : (var_1_14 == ((float) var_1_16)))) && ((! var_1_6) ? ((var_1_14 < ((((var_1_16) < (var_1_18)) ? (var_1_16) : (var_1_18)))) ? (var_1_19 == ((double) (49.5 + ((((var_1_18) > (var_1_17)) ? (var_1_18) : (var_1_17)))))) : (var_1_19 == ((double) var_1_16))) : (var_1_19 == ((double) var_1_17)))) && (((var_1_19 * var_1_18) > var_1_16) ? ((var_1_13 < var_1_1) ? (var_1_20 == ((unsigned char) (((((var_1_21 - var_1_8)) > ((var_1_22 + var_1_23))) ? ((var_1_21 - var_1_8)) : ((var_1_22 + var_1_23)))))) : ((var_1_13 < var_1_21) ? (var_1_20 == ((unsigned char) ((((var_1_23) < (var_1_8)) ? (var_1_23) : (var_1_8))))) : (var_1_20 == ((unsigned char) ((var_1_25 - var_1_26) - var_1_8))))) : (var_1_10 ? (var_1_20 == ((unsigned char) var_1_8)) : (var_1_20 == ((unsigned char) var_1_25))))) && ((var_1_7 && var_1_6) ? ((var_1_5 > var_1_13) ? ((var_1_25 < (var_1_13 + (var_1_13 / var_1_4))) ? (var_1_27 == ((unsigned char) var_1_23)) : 1) : 1) : 1)) && ((((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) > var_1_19) ? (var_1_28 == ((unsigned char) (var_1_10 || var_1_29))) : (var_1_29 ? (var_1_28 == ((unsigned char) (var_1_6 || var_1_7))) : (var_1_28 == ((unsigned char) 0))))) && (var_1_7 ? (var_1_30 == ((unsigned short int) ((var_1_13 + (10000 - var_1_26)) + 5))) : ((var_1_28 && var_1_29) ? (var_1_30 == ((unsigned short int) (last_1_var_1_30 + (var_1_4 + var_1_8)))) : 1))) && (var_1_31 == ((double) 8.75))
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
