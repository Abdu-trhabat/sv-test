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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch80100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.8;
float var_1_6 = 16.375;
float var_1_7 = 0.25;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 128;
unsigned long int var_1_12 = 256;
double var_1_13 = 255.5;
double var_1_14 = 0.0;
double var_1_15 = 0.0;
double var_1_16 = 100.3;
unsigned long int var_1_17 = 32;
signed short int var_1_18 = 64;
signed short int var_1_19 = 16;
signed char var_1_21 = -8;
signed char var_1_22 = 5;
unsigned long int var_1_23 = 0;
signed short int var_1_24 = 5;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 128;
unsigned char var_1_27 = 100;
unsigned char var_1_28 = 8;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned short int var_1_31 = 16;
unsigned short int var_1_32 = 5;
unsigned long int var_1_33 = 2678074286;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 256;
unsigned long int var_1_36 = 0;
unsigned char var_1_37 = 100;
signed short int var_1_38 = 128;
double last_1_var_1_13 = 255.5;
unsigned long int last_1_var_1_23 = 0;
unsigned long int last_1_var_1_36 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = last_1_var_1_36;
 if (var_1_7 != (last_1_var_1_13 * var_1_6)) {
  var_1_13 = ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7);
 } else {
  if (last_1_var_1_23 > stepLocal_1) {
   var_1_13 = 10.6;
  } else {
   var_1_13 = var_1_15;
  }
 }
 if (var_1_13 < (var_1_16 + var_1_7)) {
  var_1_23 = (((((var_1_12 + var_1_19)) > (var_1_18)) ? ((var_1_12 + var_1_19)) : (var_1_18)));
 }
 if (var_1_9) {
  var_1_11 = 0u;
 } else {
  if (var_1_10) {
   var_1_11 = ((((8u + var_1_12) < 0 ) ? -(8u + var_1_12) : (8u + var_1_12)));
  } else {
   if (var_1_6 < 127.5f) {
    var_1_11 = var_1_12;
   }
  }
 }
 var_1_25 = (var_1_26 - (var_1_27 - ((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29)))));
 var_1_35 = (48168 - var_1_27);
 var_1_37 = var_1_27;
 var_1_38 = var_1_22;
 unsigned long int stepLocal_0 = 1u;
 if (((((var_1_7) < (var_1_13)) ? (var_1_7) : (var_1_13))) <= var_1_6) {
  if (stepLocal_0 < var_1_11) {
   var_1_8 = (var_1_9 && var_1_10);
  }
 }
 unsigned char stepLocal_9 = var_1_10;
 unsigned long int stepLocal_8 = var_1_11;
 if (var_1_8 && stepLocal_9) {
  var_1_36 = ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)));
 } else {
  if (-32 >= stepLocal_8) {
   var_1_36 = (3046427504u - ((((var_1_28) < (var_1_23)) ? (var_1_28) : (var_1_23))));
  }
 }
 unsigned long int stepLocal_2 = var_1_36 + (- 8u);
 if (var_1_9) {
  if (var_1_10) {
   if ((var_1_19 + var_1_36) >= stepLocal_2) {
    var_1_17 = var_1_19;
   }
  } else {
   var_1_17 = var_1_12;
  }
 } else {
  var_1_17 = var_1_19;
 }
 unsigned long int stepLocal_3 = var_1_17;
 if (stepLocal_3 < -50) {
  if (((256.25 - var_1_6) * var_1_16) >= 0.19999999999999996) {
   var_1_21 = var_1_22;
  }
 } else {
  var_1_21 = var_1_22;
 }
 unsigned long int stepLocal_4 = var_1_36 + var_1_17;
 if (var_1_6 != var_1_13) {
  if (var_1_11 <= stepLocal_4) {
   var_1_24 = (var_1_22 + var_1_21);
  } else {
   var_1_24 = var_1_22;
  }
 } else {
  var_1_24 = 25;
 }
 unsigned char stepLocal_7 = var_1_10;
 signed long int stepLocal_6 = -100000000;
 unsigned long int stepLocal_5 = var_1_36 >> (var_1_31 - var_1_32);
 if (stepLocal_5 != (var_1_33 - var_1_28)) {
  if ((var_1_36 + var_1_37) > stepLocal_6) {
   var_1_30 = (var_1_10 || (! var_1_34));
  } else {
   var_1_30 = (var_1_8 && var_1_34);
  }
 } else {
  if (stepLocal_7 && var_1_9) {
   var_1_30 = var_1_34;
  }
 }
 if (((~ var_1_11) + (var_1_17 + var_1_11)) <= var_1_11) {
  var_1_1 = (var_1_6 - var_1_7);
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 4611686.018427383000e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 4611686.018427383000e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -127);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 127);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 63);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 16);
 assume_abort_if_not(var_1_31 <= 31);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 15);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_36 = var_1_36;
}
int property(void) {
 return ((((((((((((((((~ var_1_11) + (var_1_17 + var_1_11)) <= var_1_11) ? (var_1_1 == ((float) (var_1_6 - var_1_7))) : 1) && ((((((var_1_7) < (var_1_13)) ? (var_1_7) : (var_1_13))) <= var_1_6) ? ((1u < var_1_11) ? (var_1_8 == ((unsigned char) (var_1_9 && var_1_10))) : 1) : 1)) && (var_1_9 ? (var_1_11 == ((unsigned long int) 0u)) : (var_1_10 ? (var_1_11 == ((unsigned long int) ((((8u + var_1_12) < 0 ) ? -(8u + var_1_12) : (8u + var_1_12))))) : ((var_1_6 < 127.5f) ? (var_1_11 == ((unsigned long int) var_1_12)) : 1)))) && ((var_1_7 != (last_1_var_1_13 * var_1_6)) ? (var_1_13 == ((double) ((((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))) - var_1_16) - var_1_7))) : ((last_1_var_1_23 > last_1_var_1_36) ? (var_1_13 == ((double) 10.6)) : (var_1_13 == ((double) var_1_15))))) && (var_1_9 ? (var_1_10 ? (((var_1_19 + var_1_36) >= (var_1_36 + (- 8u))) ? (var_1_17 == ((unsigned long int) var_1_19)) : 1) : (var_1_17 == ((unsigned long int) var_1_12))) : (var_1_17 == ((unsigned long int) var_1_19)))) && ((var_1_17 < -50) ? ((((256.25 - var_1_6) * var_1_16) >= 0.19999999999999996) ? (var_1_21 == ((signed char) var_1_22)) : 1) : (var_1_21 == ((signed char) var_1_22)))) && ((var_1_13 < (var_1_16 + var_1_7)) ? (var_1_23 == ((unsigned long int) (((((var_1_12 + var_1_19)) > (var_1_18)) ? ((var_1_12 + var_1_19)) : (var_1_18))))) : 1)) && ((var_1_6 != var_1_13) ? ((var_1_11 <= (var_1_36 + var_1_17)) ? (var_1_24 == ((signed short int) (var_1_22 + var_1_21))) : (var_1_24 == ((signed short int) var_1_22))) : (var_1_24 == ((signed short int) 25)))) && (var_1_25 == ((unsigned char) (var_1_26 - (var_1_27 - ((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29)))))))) && (((var_1_36 >> (var_1_31 - var_1_32)) != (var_1_33 - var_1_28)) ? (((var_1_36 + var_1_37) > -100000000) ? (var_1_30 == ((unsigned char) (var_1_10 || (! var_1_34)))) : (var_1_30 == ((unsigned char) (var_1_8 && var_1_34)))) : ((var_1_10 && var_1_9) ? (var_1_30 == ((unsigned char) var_1_34)) : 1))) && (var_1_35 == ((unsigned short int) (48168 - var_1_27)))) && ((var_1_8 && var_1_10) ? (var_1_36 == ((unsigned long int) ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) : ((-32 >= var_1_11) ? (var_1_36 == ((unsigned long int) (3046427504u - ((((var_1_28) < (var_1_23)) ? (var_1_28) : (var_1_23)))))) : 1))) && (var_1_37 == ((unsigned char) var_1_27))) && (var_1_38 == ((signed short int) var_1_22))
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
