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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -8;
signed short int var_1_9 = -8;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
signed short int var_1_12 = 4;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 16;
signed long int var_1_16 = -10;
unsigned short int var_1_17 = 5;
signed char var_1_18 = 5;
double var_1_19 = 4.75;
double var_1_20 = 31.25;
unsigned char var_1_21 = 64;
double var_1_22 = 999999999.2;
double var_1_23 = 3.4;
signed short int var_1_24 = -2;
signed short int var_1_25 = 23322;
signed short int var_1_26 = 19877;
unsigned long int var_1_27 = 5;
signed short int var_1_30 = 128;
unsigned long int var_1_31 = 5;
unsigned char var_1_32 = 32;
float var_1_33 = 10000000.75;
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_7 = 0;
unsigned char last_1_var_1_21 = 64;
signed short int last_1_var_1_24 = -2;
signed short int last_1_var_1_30 = 128;
unsigned char last_1_var_1_32 = 32;
void initially(void) {
}
void step(void) {
 if (! last_1_var_1_7) {
  if ((- var_1_23) >= ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) {
   var_1_31 = ((((var_1_14) > (10u)) ? (var_1_14) : (10u)));
  } else {
   var_1_31 = ((1941708785u - last_1_var_1_21) + 25u);
  }
 } else {
  var_1_31 = ((((var_1_18) < (var_1_12)) ? (var_1_18) : (var_1_12)));
 }
 if (var_1_12 > var_1_9) {
  if (var_1_8 != var_1_31) {
   var_1_13 = (var_1_14 - var_1_15);
  }
 }
 unsigned char stepLocal_4 = var_1_6;
 signed long int stepLocal_3 = var_1_15 >> var_1_18;
 if (stepLocal_3 <= ((var_1_9 * -2) + var_1_14)) {
  if (last_1_var_1_1 && stepLocal_4) {
   if ((var_1_19 - var_1_20) >= 15.76) {
    var_1_17 = var_1_18;
   } else {
    var_1_17 = 8;
   }
  }
 } else {
  var_1_17 = last_1_var_1_32;
 }
 var_1_16 = (last_1_var_1_24 + last_1_var_1_30);
 var_1_24 = (var_1_16 - (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_15));
 unsigned char stepLocal_5 = var_1_16 >= -256;
 if ((64 >= var_1_18) || stepLocal_5) {
  var_1_30 = (16 - var_1_18);
 }
 unsigned char stepLocal_2 = var_1_10;
 signed long int stepLocal_1 = -64 / ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9)));
 signed long int stepLocal_0 = (32 + 10) - var_1_12;
 if (last_1_var_1_30 > stepLocal_1) {
  if (stepLocal_2 && last_1_var_1_1) {
   var_1_7 = (! var_1_11);
  }
 } else {
  if (var_1_9 >= stepLocal_0) {
   var_1_7 = var_1_5;
  } else {
   var_1_7 = var_1_6;
  }
 }
 if ((5.1 - (var_1_22 + var_1_23)) == ((var_1_20 - var_1_19) + 4.5)) {
  if (((var_1_15 / var_1_18) | var_1_17) < var_1_13) {
   var_1_21 = ((((var_1_14) > (((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18))))) ? (var_1_14) : (((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18))))));
  }
 }
 if ((var_1_30 != (var_1_24 * var_1_17)) || var_1_7) {
  if (var_1_5) {
   var_1_27 = var_1_25;
  }
 }
 if (var_1_7) {
  if (var_1_31 > var_1_27) {
   var_1_1 = (! (! (var_1_5 || var_1_6)));
  }
 } else {
  var_1_1 = var_1_6;
 }
 signed long int stepLocal_6 = (var_1_15 + var_1_24) / var_1_14;
 if (stepLocal_6 <= var_1_27) {
  var_1_32 = (((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) < 0 ) ? -((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) : ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))));
 }
 signed long int stepLocal_8 = var_1_15 - (var_1_25 - var_1_18);
 unsigned long int stepLocal_7 = var_1_27;
 if (stepLocal_7 >= var_1_25) {
  var_1_33 = ((((1000.5f) < 0 ) ? -(1000.5f) : (1000.5f)));
 } else {
  if (stepLocal_8 >= var_1_27) {
   var_1_33 = var_1_23;
  } else {
   var_1_33 = var_1_22;
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32768);
 assume_abort_if_not(var_1_8 <= 32767);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32768);
 assume_abort_if_not(var_1_9 <= 32767);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 127);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 7);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427388000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427388000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 16383);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 16383);
 assume_abort_if_not(var_1_26 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return (((((((((((var_1_7 ? ((var_1_31 > var_1_27) ? (var_1_1 == ((unsigned char) (! (! (var_1_5 || var_1_6))))) : 1) : (var_1_1 == ((unsigned char) var_1_6))) && ((last_1_var_1_30 > (-64 / ((((var_1_8) > (var_1_9)) ? (var_1_8) : (var_1_9))))) ? ((var_1_10 && last_1_var_1_1) ? (var_1_7 == ((unsigned char) (! var_1_11))) : 1) : ((var_1_9 >= ((32 + 10) - var_1_12)) ? (var_1_7 == ((unsigned char) var_1_5)) : (var_1_7 == ((unsigned char) var_1_6))))) && ((var_1_12 > var_1_9) ? ((var_1_8 != var_1_31) ? (var_1_13 == ((unsigned char) (var_1_14 - var_1_15))) : 1) : 1)) && (var_1_16 == ((signed long int) (last_1_var_1_24 + last_1_var_1_30)))) && (((var_1_15 >> var_1_18) <= ((var_1_9 * -2) + var_1_14)) ? ((last_1_var_1_1 && var_1_6) ? (((var_1_19 - var_1_20) >= 15.76) ? (var_1_17 == ((unsigned short int) var_1_18)) : (var_1_17 == ((unsigned short int) 8))) : 1) : (var_1_17 == ((unsigned short int) last_1_var_1_32)))) && (((5.1 - (var_1_22 + var_1_23)) == ((var_1_20 - var_1_19) + 4.5)) ? ((((var_1_15 / var_1_18) | var_1_17) < var_1_13) ? (var_1_21 == ((unsigned char) ((((var_1_14) > (((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18))))) ? (var_1_14) : (((((var_1_15) < (var_1_18)) ? (var_1_15) : (var_1_18)))))))) : 1) : 1)) && (var_1_24 == ((signed short int) (var_1_16 - (((((var_1_25) < (var_1_26)) ? (var_1_25) : (var_1_26))) - var_1_15))))) && (((var_1_30 != (var_1_24 * var_1_17)) || var_1_7) ? (var_1_5 ? (var_1_27 == ((unsigned long int) var_1_25)) : 1) : 1)) && (((64 >= var_1_18) || (var_1_16 >= -256)) ? (var_1_30 == ((signed short int) (16 - var_1_18))) : 1)) && ((! last_1_var_1_7) ? (((- var_1_23) >= ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) ? (var_1_31 == ((unsigned long int) ((((var_1_14) > (10u)) ? (var_1_14) : (10u))))) : (var_1_31 == ((unsigned long int) ((1941708785u - last_1_var_1_21) + 25u)))) : (var_1_31 == ((unsigned long int) ((((var_1_18) < (var_1_12)) ? (var_1_18) : (var_1_12))))))) && ((((var_1_15 + var_1_24) / var_1_14) <= var_1_27) ? (var_1_32 == ((unsigned char) (((((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) < 0 ) ? -((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) : ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))))) : 1)) && ((var_1_27 >= var_1_25) ? (var_1_33 == ((float) ((((1000.5f) < 0 ) ? -(1000.5f) : (1000.5f))))) : (((var_1_15 - (var_1_25 - var_1_18)) >= var_1_27) ? (var_1_33 == ((float) var_1_23)) : (var_1_33 == ((float) var_1_22))))
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
