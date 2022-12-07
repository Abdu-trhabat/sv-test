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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed char var_1_1 = 0;
float var_1_3 = -0.1;
float var_1_4 = 127.25;
float var_1_5 = 2.75;
signed char var_1_6 = 1;
signed char var_1_7 = -2;
signed char var_1_8 = 25;
signed char var_1_9 = 32;
signed char var_1_11 = 0;
signed long int var_1_12 = 2;
unsigned long int var_1_13 = 256;
unsigned long int var_1_16 = 3775050608;
unsigned char var_1_18 = 16;
unsigned char var_1_19 = 100;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 4;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 16;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned short int var_1_28 = 4;
unsigned short int var_1_29 = 38930;
unsigned short int var_1_30 = 59162;
unsigned short int var_1_31 = 1;
unsigned short int var_1_32 = 30817;
unsigned long int var_1_33 = 50;
double var_1_34 = 50.25;
double var_1_35 = 10000000000000.75;
unsigned long int last_1_var_1_13 = 256;
unsigned short int last_1_var_1_31 = 1;
unsigned long int last_1_var_1_33 = 50;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_13 > ((((last_1_var_1_31) > (var_1_16)) ? (last_1_var_1_31) : (var_1_16)))) {
  var_1_28 = (((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))) - last_1_var_1_33);
 } else {
  var_1_28 = (var_1_25 + var_1_19);
 }
 if ((- var_1_3) <= (var_1_4 - var_1_5)) {
  if (var_1_3 >= (var_1_5 / 255.75f)) {
   var_1_1 = var_1_6;
  } else {
   var_1_1 = var_1_6;
  }
 }
 if (var_1_4 != var_1_5) {
  var_1_7 = var_1_6;
 } else {
  var_1_7 = var_1_8;
 }
 var_1_18 = var_1_19;
 if (var_1_18 > ((32u / var_1_16) + 32u)) {
  var_1_22 = var_1_21;
 }
 if (var_1_21) {
  var_1_23 = ((var_1_24 + var_1_25) + ((var_1_26 + 32) - var_1_27));
 } else {
  var_1_23 = var_1_27;
 }
 if (var_1_5 <= (- ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))))) {
  var_1_31 = ((25454 + var_1_32) - var_1_1);
 } else {
  var_1_31 = ((((((((var_1_19) < (var_1_23)) ? (var_1_19) : (var_1_23)))) > (var_1_29)) ? (((((var_1_19) < (var_1_23)) ? (var_1_19) : (var_1_23)))) : (var_1_29)));
 }
 unsigned short int stepLocal_2 = var_1_31;
 if (stepLocal_2 == var_1_11) {
  if (! var_1_22) {
   if (var_1_22) {
    var_1_12 = var_1_18;
   }
  }
 }
 if ((var_1_31 / var_1_16) <= var_1_28) {
  if (var_1_28 <= var_1_18) {
   var_1_20 = var_1_21;
  }
 }
 unsigned char stepLocal_1 = var_1_20;
 unsigned char stepLocal_0 = var_1_22;
 if (var_1_22 || stepLocal_1) {
  var_1_9 = ((((((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) > (var_1_6)) ? (((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) : (var_1_6)));
 } else {
  if (var_1_20 && stepLocal_0) {
   var_1_9 = ((((var_1_11) < (var_1_8)) ? (var_1_11) : (var_1_8)));
  }
 }
 signed long int stepLocal_4 = (var_1_6 * var_1_1) / -64;
 unsigned short int stepLocal_3 = var_1_28;
 if (stepLocal_4 >= var_1_28) {
  var_1_13 = ((((var_1_28) < (var_1_31)) ? (var_1_28) : (var_1_31)));
 } else {
  if (50u >= stepLocal_3) {
   var_1_13 = (var_1_16 - var_1_18);
  }
 }
 unsigned long int stepLocal_6 = var_1_16;
 signed long int stepLocal_5 = (- var_1_18) / var_1_26;
 if (var_1_34 < (var_1_5 / var_1_35)) {
  if (stepLocal_6 > ((((64u) < (var_1_28)) ? (64u) : (var_1_28)))) {
   if ((var_1_4 - var_1_5) <= var_1_3) {
    var_1_33 = (((((8u) < 0 ) ? -(8u) : (8u))) + 25u);
   } else {
    var_1_33 = ((((var_1_27) > ((var_1_29 + ((((16u) < (var_1_18)) ? (16u) : (var_1_18)))))) ? (var_1_27) : ((var_1_29 + ((((16u) < (var_1_18)) ? (16u) : (var_1_18)))))));
   }
  } else {
   if (stepLocal_5 < var_1_25) {
    var_1_33 = var_1_30;
   } else {
    var_1_33 = var_1_7;
   }
  }
 } else {
  var_1_33 = var_1_30;
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -126);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 64);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 31);
 assume_abort_if_not(var_1_26 <= 64);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 63);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 32767);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 32767);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 16384);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 assume_abort_if_not(var_1_35 != 0.0F);
}
void updateLastVariables() {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_33 = var_1_33;
}
int property() {
 return (((((((((((((- var_1_3) <= (var_1_4 - var_1_5)) ? ((var_1_3 >= (var_1_5 / 255.75f)) ? (var_1_1 == ((signed char) var_1_6)) : (var_1_1 == ((signed char) var_1_6))) : 1) && ((var_1_4 != var_1_5) ? (var_1_7 == ((signed char) var_1_6)) : (var_1_7 == ((signed char) var_1_8)))) && ((var_1_22 || var_1_20) ? (var_1_9 == ((signed char) ((((((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) > (var_1_6)) ? (((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) > (((((-2) < 0 ) ? -(-2) : (-2))))) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (((((-2) < 0 ) ? -(-2) : (-2))))))) : (var_1_6))))) : ((var_1_20 && var_1_22) ? (var_1_9 == ((signed char) ((((var_1_11) < (var_1_8)) ? (var_1_11) : (var_1_8))))) : 1))) && ((var_1_31 == var_1_11) ? ((! var_1_22) ? (var_1_22 ? (var_1_12 == ((signed long int) var_1_18)) : 1) : 1) : 1)) && ((((var_1_6 * var_1_1) / -64) >= var_1_28) ? (var_1_13 == ((unsigned long int) ((((var_1_28) < (var_1_31)) ? (var_1_28) : (var_1_31))))) : ((50u >= var_1_28) ? (var_1_13 == ((unsigned long int) (var_1_16 - var_1_18))) : 1))) && (var_1_18 == ((unsigned char) var_1_19))) && (((var_1_31 / var_1_16) <= var_1_28) ? ((var_1_28 <= var_1_18) ? (var_1_20 == ((unsigned char) var_1_21)) : 1) : 1)) && ((var_1_18 > ((32u / var_1_16) + 32u)) ? (var_1_22 == ((unsigned char) var_1_21)) : 1)) && (var_1_21 ? (var_1_23 == ((unsigned char) ((var_1_24 + var_1_25) + ((var_1_26 + 32) - var_1_27)))) : (var_1_23 == ((unsigned char) var_1_27)))) && ((last_1_var_1_13 > ((((last_1_var_1_31) > (var_1_16)) ? (last_1_var_1_31) : (var_1_16)))) ? (var_1_28 == ((unsigned short int) (((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30))) - last_1_var_1_33))) : (var_1_28 == ((unsigned short int) (var_1_25 + var_1_19))))) && ((var_1_5 <= (- ((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3))))) ? (var_1_31 == ((unsigned short int) ((25454 + var_1_32) - var_1_1))) : (var_1_31 == ((unsigned short int) ((((((((var_1_19) < (var_1_23)) ? (var_1_19) : (var_1_23)))) > (var_1_29)) ? (((((var_1_19) < (var_1_23)) ? (var_1_19) : (var_1_23)))) : (var_1_29))))))) && ((var_1_34 < (var_1_5 / var_1_35)) ? ((var_1_16 > ((((64u) < (var_1_28)) ? (64u) : (var_1_28)))) ? (((var_1_4 - var_1_5) <= var_1_3) ? (var_1_33 == ((unsigned long int) (((((8u) < 0 ) ? -(8u) : (8u))) + 25u))) : (var_1_33 == ((unsigned long int) ((((var_1_27) > ((var_1_29 + ((((16u) < (var_1_18)) ? (16u) : (var_1_18)))))) ? (var_1_27) : ((var_1_29 + ((((16u) < (var_1_18)) ? (16u) : (var_1_18)))))))))) : ((((- var_1_18) / var_1_26) < var_1_25) ? (var_1_33 == ((unsigned long int) var_1_30)) : (var_1_33 == ((unsigned long int) var_1_7)))) : (var_1_33 == ((unsigned long int) var_1_30)))
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
