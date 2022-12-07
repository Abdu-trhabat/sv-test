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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 128;
unsigned long int var_1_7 = 16;
unsigned long int var_1_9 = 32;
unsigned char var_1_10 = 16;
unsigned char var_1_11 = 8;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -200;
signed short int var_1_15 = 0;
signed short int var_1_16 = 24637;
signed short int var_1_17 = 100;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 10;
double var_1_22 = 128.75;
double var_1_23 = 4.4;
double var_1_24 = 499.5;
double var_1_25 = 256.5;
unsigned char var_1_26 = 4;
unsigned char var_1_29 = 5;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned long int var_1_32 = 10;
unsigned long int var_1_33 = 64;
unsigned long int var_1_35 = 3013089731;
unsigned short int var_1_36 = 16;
unsigned short int var_1_37 = 59175;
unsigned char var_1_38 = 32;
unsigned char var_1_39 = 5;
unsigned long int last_1_var_1_7 = 16;
unsigned char last_1_var_1_10 = 16;
signed long int last_1_var_1_14 = -200;
signed short int last_1_var_1_15 = 0;
signed short int last_1_var_1_17 = 100;
unsigned char last_1_var_1_18 = 1;
signed long int last_1_var_1_20 = 10;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_3 = var_1_13;
 if (((((last_1_var_1_14) > ((last_1_var_1_20 | var_1_9))) ? (last_1_var_1_14) : ((last_1_var_1_20 | var_1_9)))) > stepLocal_3) {
  var_1_15 = (((((var_1_13 + var_1_11)) > (var_1_12)) ? ((var_1_13 + var_1_11)) : (var_1_12)));
 } else {
  var_1_15 = (var_1_13 - ((((last_1_var_1_20) > ((var_1_16 - var_1_11))) ? (last_1_var_1_20) : ((var_1_16 - var_1_11)))));
 }
 if (var_1_15 > var_1_12) {
  var_1_18 = (! var_1_19);
 }
 if (var_1_18) {
  var_1_14 = var_1_12;
 } else {
  var_1_14 = 64;
 }
 if (last_1_var_1_18) {
  if (last_1_var_1_15 <= ((last_1_var_1_7 + last_1_var_1_20) + last_1_var_1_10)) {
   var_1_1 = ((((last_1_var_1_7) < (last_1_var_1_20)) ? (last_1_var_1_7) : (last_1_var_1_20)));
  }
 }
 var_1_20 = last_1_var_1_17;
 signed long int stepLocal_6 = var_1_1;
 signed long int stepLocal_5 = var_1_20;
 unsigned char stepLocal_4 = var_1_13;
 if (stepLocal_4 > var_1_1) {
  if (stepLocal_6 <= 32u) {
   if (stepLocal_5 <= last_1_var_1_17) {
    var_1_17 = var_1_16;
   } else {
    var_1_17 = -50;
   }
  } else {
   var_1_17 = var_1_11;
  }
 }
 signed long int stepLocal_1 = var_1_20 + var_1_1;
 signed short int stepLocal_0 = var_1_17;
 if (stepLocal_0 == var_1_20) {
  if (stepLocal_1 > (var_1_15 % var_1_9)) {
   var_1_7 = var_1_20;
  } else {
   var_1_7 = var_1_1;
  }
 }
 signed long int stepLocal_2 = (- var_1_1) + var_1_20;
 if (stepLocal_2 >= var_1_9) {
  var_1_10 = (var_1_11 + (var_1_12 + var_1_13));
 }
 var_1_22 = (63.25 + ((((((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))) > (var_1_25)) ? (((((var_1_23) < (var_1_24)) ? (var_1_23) : (var_1_24)))) : (var_1_25))));
 if (var_1_14 < (~ (25u + var_1_20))) {
  var_1_26 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 if ((var_1_17 < var_1_29) || (var_1_20 >= var_1_1)) {
  var_1_30 = var_1_31;
 }
 if (var_1_20 <= (var_1_20 / ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))) {
  if ((var_1_14 / var_1_33) <= var_1_29) {
   var_1_32 = ((((var_1_14) < ((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) - ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) ? (var_1_14) : ((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) - ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))));
  }
 }
 if (((((~ var_1_10) < 0 ) ? -(~ var_1_10) : (~ var_1_10))) >= ((((var_1_17) < (8u)) ? (var_1_17) : (8u)))) {
  var_1_36 = ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)));
 } else {
  var_1_36 = (var_1_37 - 2);
 }
 if (var_1_20 < (var_1_1 + var_1_35)) {
  var_1_38 = ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)));
 }
 if (var_1_24 > var_1_22) {
  if (((((2) < (64)) ? (2) : (64))) < ((((var_1_37) > ((var_1_1 + var_1_17))) ? (var_1_37) : ((var_1_1 + var_1_17))))) {
   if (var_1_24 <= var_1_25) {
    var_1_39 = var_1_29;
   } else {
    var_1_39 = var_1_29;
   }
  } else {
   var_1_39 = var_1_29;
  }
 }
}
void updateVariables() {
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967295);
 assume_abort_if_not(var_1_9 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32766);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 assume_abort_if_not(var_1_33 != 0);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65534);
}
void updateLastVariables() {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
}
int property() {
 return (((((((last_1_var_1_18 ? ((last_1_var_1_15 <= ((last_1_var_1_7 + last_1_var_1_20) + last_1_var_1_10)) ? (var_1_1 == ((signed long int) ((((last_1_var_1_7) < (last_1_var_1_20)) ? (last_1_var_1_7) : (last_1_var_1_20))))) : 1) : 1) && ((var_1_17 == var_1_20) ? (((var_1_20 + var_1_1) > (var_1_15 % var_1_9)) ? (var_1_7 == ((unsigned long int) var_1_20)) : (var_1_7 == ((unsigned long int) var_1_1))) : 1)) && ((((- var_1_1) + var_1_20) >= var_1_9) ? (var_1_10 == ((unsigned char) (var_1_11 + (var_1_12 + var_1_13)))) : 1)) && (var_1_18 ? (var_1_14 == ((signed long int) var_1_12)) : (var_1_14 == ((signed long int) 64)))) && ((((((last_1_var_1_14) > ((last_1_var_1_20 | var_1_9))) ? (last_1_var_1_14) : ((last_1_var_1_20 | var_1_9)))) > var_1_13) ? (var_1_15 == ((signed short int) (((((var_1_13 + var_1_11)) > (var_1_12)) ? ((var_1_13 + var_1_11)) : (var_1_12))))) : (var_1_15 == ((signed short int) (var_1_13 - ((((last_1_var_1_20) > ((var_1_16 - var_1_11))) ? (last_1_var_1_20) : ((var_1_16 - var_1_11))))))))) && ((var_1_13 > var_1_1) ? ((var_1_1 <= 32u) ? ((var_1_20 <= last_1_var_1_17) ? (var_1_17 == ((signed short int) var_1_16)) : (var_1_17 == ((signed short int) -50))) : (var_1_17 == ((signed short int) var_1_11))) : 1)) && ((var_1_15 > var_1_12) ? (var_1_18 == ((unsigned char) (! var_1_19))) : 1)) && (var_1_20 == ((signed long int) last_1_var_1_17))
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
