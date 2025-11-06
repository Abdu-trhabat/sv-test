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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 64;
unsigned short int var_1_6 = 128;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 100;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 25;
unsigned long int var_1_15 = 128;
unsigned long int var_1_16 = 3277177293;
double var_1_17 = 256.8;
double var_1_18 = 16.2;
double var_1_19 = 32.55;
double var_1_20 = 255.75;
double var_1_21 = 15.4;
signed short int var_1_22 = -4;
signed long int var_1_23 = 5;
unsigned char var_1_25 = 0;
unsigned char var_1_27 = 0;
unsigned short int var_1_28 = 1;
signed long int var_1_30 = 1;
float var_1_31 = 255.25;
float var_1_32 = 0.0;
float var_1_33 = 0.5;
float var_1_34 = 256.7;
float var_1_35 = 0.0;
float var_1_36 = 0.6;
float var_1_37 = 0.0;
double var_1_38 = 128.4;
double var_1_39 = 31.125;
unsigned char var_1_40 = 64;
signed char var_1_41 = -2;
signed char var_1_42 = 16;
signed long int var_1_43 = -1;
unsigned char last_1_var_1_9 = 0;
unsigned long int last_1_var_1_15 = 128;
double last_1_var_1_17 = 256.8;
unsigned char last_1_var_1_25 = 0;
unsigned short int last_1_var_1_28 = 1;
signed long int last_1_var_1_30 = 1;
double last_1_var_1_38 = 128.4;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_9) {
  if ((-0.5 + last_1_var_1_38) != ((((last_1_var_1_17) < (last_1_var_1_38)) ? (last_1_var_1_17) : (last_1_var_1_38)))) {
   var_1_1 = ((var_1_6 + var_1_7) + var_1_8);
  } else {
   var_1_1 = var_1_8;
  }
 }
 signed long int stepLocal_1 = - 4;
 if (stepLocal_1 >= ((((0) > (last_1_var_1_30)) ? (0) : (last_1_var_1_30)))) {
  var_1_23 = ((((last_1_var_1_15) > (var_1_6)) ? (last_1_var_1_15) : (var_1_6)));
 }
 if ((- last_1_var_1_28) == var_1_8) {
  var_1_15 = ((var_1_16 - last_1_var_1_28) - var_1_12);
 }
 if ((var_1_8 << var_1_15) >= (var_1_11 * var_1_7)) {
  var_1_14 = (var_1_13 + 100);
 } else {
  var_1_14 = var_1_12;
 }
 if (var_1_6 >= var_1_8) {
  var_1_9 = 0;
 }
 var_1_10 = ((var_1_11 + var_1_12) - var_1_13);
 var_1_38 = var_1_20;
 signed long int stepLocal_6 = 59489 - var_1_10;
 if (stepLocal_6 < ((((100) < 0 ) ? -(100) : (100)))) {
  var_1_39 = var_1_20;
 }
 var_1_40 = var_1_13;
 var_1_41 = var_1_42;
 var_1_43 = -10;
 if (var_1_19 < var_1_38) {
  var_1_25 = (last_1_var_1_25 && var_1_27);
 }
 if (var_1_25) {
  var_1_22 = var_1_13;
 }
 unsigned long int stepLocal_0 = var_1_15;
 if ((var_1_1 ^ var_1_11) == stepLocal_0) {
  var_1_17 = (((((var_1_18 - var_1_19)) < (var_1_20)) ? ((var_1_18 - var_1_19)) : (var_1_20)));
 } else {
  var_1_17 = var_1_21;
 }
 unsigned char stepLocal_3 = var_1_27;
 unsigned long int stepLocal_2 = var_1_15;
 if ((var_1_23 / ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))) <= stepLocal_2) {
  if (var_1_9 || stepLocal_3) {
   var_1_30 = (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + ((((-1) < 0 ) ? -(-1) : (-1))));
  } else {
   var_1_30 = (((((((((var_1_12) < (var_1_23)) ? (var_1_12) : (var_1_23)))) < (((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7))))) ? (((((var_1_12) < (var_1_23)) ? (var_1_12) : (var_1_23)))) : (((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7)))))) - var_1_14);
  }
 }
 if (! var_1_25) {
  var_1_28 = ((((var_1_23) > ((34596 - 8))) ? (var_1_23) : ((34596 - 8))));
 } else {
  if (var_1_25) {
   var_1_28 = ((((var_1_40) < ((((((var_1_6 + var_1_11)) > (var_1_7)) ? ((var_1_6 + var_1_11)) : (var_1_7))))) ? (var_1_40) : ((((((var_1_6 + var_1_11)) > (var_1_7)) ? ((var_1_6 + var_1_11)) : (var_1_7))))));
  }
 }
 unsigned char stepLocal_5 = (- var_1_30) >= var_1_30;
 unsigned short int stepLocal_4 = var_1_1;
 if (stepLocal_4 <= (var_1_23 * var_1_8)) {
  if (var_1_9 && stepLocal_5) {
   var_1_31 = ((var_1_32 - var_1_33) - (var_1_34 + (var_1_35 - var_1_36)));
  } else {
   var_1_31 = (var_1_33 - ((var_1_35 + var_1_37) - 25.625f));
  }
 } else {
  var_1_31 = (((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18))) - var_1_37);
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 64);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 3221225470);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 4611686.018427383000e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 2305843.009213691400e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 2305843.009213691400e+12F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -127);
 assume_abort_if_not(var_1_42 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_38 = var_1_38;
}
int property(void) {
 return ((((((((((((((((last_1_var_1_9 ? (((-0.5 + last_1_var_1_38) != ((((last_1_var_1_17) < (last_1_var_1_38)) ? (last_1_var_1_17) : (last_1_var_1_38)))) ? (var_1_1 == ((unsigned short int) ((var_1_6 + var_1_7) + var_1_8))) : (var_1_1 == ((unsigned short int) var_1_8))) : 1) && ((var_1_6 >= var_1_8) ? (var_1_9 == ((unsigned char) 0)) : 1)) && (var_1_10 == ((unsigned char) ((var_1_11 + var_1_12) - var_1_13)))) && (((var_1_8 << var_1_15) >= (var_1_11 * var_1_7)) ? (var_1_14 == ((unsigned char) (var_1_13 + 100))) : (var_1_14 == ((unsigned char) var_1_12)))) && (((- last_1_var_1_28) == var_1_8) ? (var_1_15 == ((unsigned long int) ((var_1_16 - last_1_var_1_28) - var_1_12))) : 1)) && (((var_1_1 ^ var_1_11) == var_1_15) ? (var_1_17 == ((double) (((((var_1_18 - var_1_19)) < (var_1_20)) ? ((var_1_18 - var_1_19)) : (var_1_20))))) : (var_1_17 == ((double) var_1_21)))) && (var_1_25 ? (var_1_22 == ((signed short int) var_1_13)) : 1)) && (((- 4) >= ((((0) > (last_1_var_1_30)) ? (0) : (last_1_var_1_30)))) ? (var_1_23 == ((signed long int) ((((last_1_var_1_15) > (var_1_6)) ? (last_1_var_1_15) : (var_1_6))))) : 1)) && ((var_1_19 < var_1_38) ? (var_1_25 == ((unsigned char) (last_1_var_1_25 && var_1_27))) : 1)) && ((! var_1_25) ? (var_1_28 == ((unsigned short int) ((((var_1_23) > ((34596 - 8))) ? (var_1_23) : ((34596 - 8)))))) : (var_1_25 ? (var_1_28 == ((unsigned short int) ((((var_1_40) < ((((((var_1_6 + var_1_11)) > (var_1_7)) ? ((var_1_6 + var_1_11)) : (var_1_7))))) ? (var_1_40) : ((((((var_1_6 + var_1_11)) > (var_1_7)) ? ((var_1_6 + var_1_11)) : (var_1_7)))))))) : 1))) && (((var_1_23 / ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))) <= var_1_15) ? ((var_1_9 || var_1_27) ? (var_1_30 == ((signed long int) (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) + ((((-1) < 0 ) ? -(-1) : (-1)))))) : (var_1_30 == ((signed long int) (((((((((var_1_12) < (var_1_23)) ? (var_1_12) : (var_1_23)))) < (((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7))))) ? (((((var_1_12) < (var_1_23)) ? (var_1_12) : (var_1_23)))) : (((((var_1_8) > (var_1_7)) ? (var_1_8) : (var_1_7)))))) - var_1_14)))) : 1)) && ((var_1_1 <= (var_1_23 * var_1_8)) ? ((var_1_9 && ((- var_1_30) >= var_1_30)) ? (var_1_31 == ((float) ((var_1_32 - var_1_33) - (var_1_34 + (var_1_35 - var_1_36))))) : (var_1_31 == ((float) (var_1_33 - ((var_1_35 + var_1_37) - 25.625f))))) : (var_1_31 == ((float) (((((var_1_35) < (var_1_18)) ? (var_1_35) : (var_1_18))) - var_1_37))))) && (var_1_38 == ((double) var_1_20))) && (((59489 - var_1_10) < ((((100) < 0 ) ? -(100) : (100)))) ? (var_1_39 == ((double) var_1_20)) : 1)) && (var_1_40 == ((unsigned char) var_1_13))) && (var_1_41 == ((signed char) var_1_42))) && (var_1_43 == ((signed long int) -10))
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
