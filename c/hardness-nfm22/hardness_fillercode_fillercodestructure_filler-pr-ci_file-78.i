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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -4;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 2;
unsigned short int var_1_6 = 10;
double var_1_8 = 1.875;
signed long int var_1_9 = -4;
double var_1_10 = 63.5;
double var_1_11 = 255.375;
double var_1_12 = 999999999.525;
double var_1_13 = 63.75;
double var_1_14 = 0.625;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 4;
signed char var_1_17 = 0;
signed char var_1_18 = -2;
signed char var_1_19 = 1;
unsigned short int var_1_20 = 50;
unsigned short int var_1_21 = 0;
unsigned char var_1_22 = 2;
unsigned short int var_1_24 = 8;
unsigned short int var_1_26 = 26914;
unsigned short int var_1_27 = 26182;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 50;
unsigned char var_1_30 = 10;
signed long int var_1_31 = -32;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
signed long int var_1_35 = 1000000;
signed long int var_1_36 = 64;
unsigned char last_1_var_1_3 = 64;
unsigned short int last_1_var_1_6 = 10;
unsigned short int last_1_var_1_15 = 5;
unsigned short int last_1_var_1_20 = 50;
unsigned short int last_1_var_1_21 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_21;
 if (last_1_var_1_6 < stepLocal_0) {
  var_1_3 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 }
 signed long int stepLocal_2 = last_1_var_1_20 ^ last_1_var_1_15;
 unsigned char stepLocal_1 = var_1_5;
 if (stepLocal_2 < -256) {
  var_1_6 = (((((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) > ((last_1_var_1_20 + last_1_var_1_3))) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : ((last_1_var_1_20 + last_1_var_1_3)))) < 0 ) ? -((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) > ((last_1_var_1_20 + last_1_var_1_3))) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : ((last_1_var_1_20 + last_1_var_1_3)))) : ((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) > ((last_1_var_1_20 + last_1_var_1_3))) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : ((last_1_var_1_20 + last_1_var_1_3))))));
 } else {
  if (stepLocal_1 <= 50) {
   var_1_6 = last_1_var_1_20;
  }
 }
 if (((((var_1_21) < (var_1_5)) ? (var_1_21) : (var_1_5))) >= var_1_9) {
  var_1_24 = ((var_1_26 + var_1_27) - var_1_5);
 }
 var_1_20 = (((((var_1_5 + var_1_6)) > (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)));
 if (var_1_26 > 100) {
  if ((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) ^ var_1_26) > var_1_4) {
   var_1_32 = (! var_1_33);
  } else {
   var_1_32 = var_1_34;
  }
 }
 if (var_1_3 < (var_1_5 % ((((32) > (var_1_9)) ? (32) : (var_1_9))))) {
  var_1_8 = ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - var_1_12) + (var_1_13 - var_1_14));
 } else {
  if (var_1_13 <= (var_1_14 + var_1_11)) {
   var_1_8 = var_1_12;
  }
 }
 var_1_35 = ((((var_1_26) > (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) ? (var_1_26) : (((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))));
 var_1_16 = (var_1_17 + (var_1_18 + ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))));
 if (var_1_26 != 10) {
  if (var_1_26 <= var_1_29) {
   var_1_31 = ((((var_1_30) > (var_1_5)) ? (var_1_30) : (var_1_5)));
  }
 }
 var_1_1 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 if (var_1_27 > 0) {
  var_1_28 = (((((((((var_1_29 + var_1_30)) > (var_1_4)) ? ((var_1_29 + var_1_30)) : (var_1_4)))) < (0)) ? ((((((var_1_29 + var_1_30)) > (var_1_4)) ? ((var_1_29 + var_1_30)) : (var_1_4)))) : (0)));
 }
 unsigned short int stepLocal_3 = var_1_6;
 if (stepLocal_3 == ((var_1_3 * var_1_17) & (var_1_1 * var_1_18))) {
  var_1_21 = (var_1_4 + 128);
 }
 if (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) > var_1_21) {
  var_1_15 = ((((var_1_3) > ((var_1_5 + var_1_4))) ? (var_1_3) : ((var_1_5 + var_1_4))));
 }
 var_1_22 = var_1_4;
 if (var_1_29 > var_1_30) {
  if ((var_1_20 ^ var_1_27) != (var_1_5 / 32)) {
   var_1_36 = ((((((((-5) < 0 ) ? -(-5) : (-5))) < 0 ) ? -((((-5) < 0 ) ? -(-5) : (-5))) : ((((-5) < 0 ) ? -(-5) : (-5))))) - (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) + (1000000000 - var_1_4)));
  } else {
   var_1_36 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  }
 } else {
  if (var_1_3 >= var_1_4) {
   var_1_36 = 100000000;
  } else {
   var_1_36 = var_1_4;
  }
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -31);
 assume_abort_if_not(var_1_18 <= 32);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -31);
 assume_abort_if_not(var_1_19 <= 31);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 16383);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 16384);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
}
void updateLastVariables() {
 last_1_var_1_3 = var_1_3;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
}
int property() {
 return (((((((var_1_1 == ((signed long int) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) && ((last_1_var_1_6 < last_1_var_1_21) ? (var_1_3 == ((unsigned char) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : 1)) && (((last_1_var_1_20 ^ last_1_var_1_15) < -256) ? (var_1_6 == ((unsigned short int) (((((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) > ((last_1_var_1_20 + last_1_var_1_3))) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : ((last_1_var_1_20 + last_1_var_1_3)))) < 0 ) ? -((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) > ((last_1_var_1_20 + last_1_var_1_3))) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : ((last_1_var_1_20 + last_1_var_1_3)))) : ((((((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) > ((last_1_var_1_20 + last_1_var_1_3))) ? (((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) : ((last_1_var_1_20 + last_1_var_1_3)))))))) : ((var_1_5 <= 50) ? (var_1_6 == ((unsigned short int) last_1_var_1_20)) : 1))) && ((var_1_3 < (var_1_5 % ((((32) > (var_1_9)) ? (32) : (var_1_9))))) ? (var_1_8 == ((double) ((((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))) - var_1_12) + (var_1_13 - var_1_14)))) : ((var_1_13 <= (var_1_14 + var_1_11)) ? (var_1_8 == ((double) var_1_12)) : 1))) && ((((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) > var_1_21) ? (var_1_15 == ((unsigned short int) ((((var_1_3) > ((var_1_5 + var_1_4))) ? (var_1_3) : ((var_1_5 + var_1_4)))))) : 1)) && (var_1_16 == ((signed char) (var_1_17 + (var_1_18 + ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) && (var_1_20 == ((unsigned short int) (((((var_1_5 + var_1_6)) > (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)))))) && ((var_1_6 == ((var_1_3 * var_1_17) & (var_1_1 * var_1_18))) ? (var_1_21 == ((unsigned short int) (var_1_4 + 128))) : 1)
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
