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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 128;
unsigned char var_1_2 = 1;
signed long int var_1_4 = 10;
signed short int var_1_5 = -5;
signed short int var_1_6 = 50;
signed short int var_1_7 = 50;
signed short int var_1_8 = 50;
float var_1_9 = 7.375;
float var_1_11 = 0.6;
float var_1_12 = 255.6;
float var_1_14 = 5.875;
unsigned char var_1_15 = 4;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 32;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 50;
float var_1_20 = 16.4;
float var_1_22 = 99.75;
unsigned char var_1_23 = 32;
unsigned long int var_1_24 = 3927084702;
unsigned long int var_1_25 = 8;
signed long int var_1_26 = -256;
signed long int var_1_27 = 1655065075;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 8.75;
double var_1_31 = 49.2;
double var_1_32 = 2.2;
double var_1_33 = 16.25;
double var_1_34 = 0.0;
double var_1_35 = 25.5;
signed long int var_1_36 = 5;
signed short int var_1_37 = 5;
signed short int var_1_39 = -1000;
double var_1_40 = 500.5;
signed long int var_1_41 = -4;
float last_1_var_1_20 = 16.4;
unsigned char last_1_var_1_28 = 0;
signed short int last_1_var_1_37 = 5;
signed long int last_1_var_1_41 = -4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = -2;
 if (last_1_var_1_28) {
  if (stepLocal_1 <= var_1_6) {
   if ((last_1_var_1_20 + 1.2f) == (var_1_11 - var_1_12)) {
    if (last_1_var_1_28) {
     var_1_9 = var_1_14;
    } else {
     var_1_9 = 64.5f;
    }
   } else {
    var_1_9 = var_1_14;
   }
  } else {
   var_1_9 = var_1_14;
  }
 }
 unsigned char stepLocal_2 = var_1_18;
 if (((var_1_24 - var_1_25) * last_1_var_1_37) > stepLocal_2) {
  var_1_23 = ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)));
 } else {
  var_1_23 = var_1_18;
 }
 var_1_28 = ((var_1_5 > var_1_18) && (var_1_2 && var_1_29));
 signed long int stepLocal_3 = (var_1_5 * var_1_23) / var_1_16;
 if (var_1_6 > stepLocal_3) {
  var_1_30 = ((((((((var_1_14) > (var_1_31)) ? (var_1_14) : (var_1_31)))) > (var_1_32)) ? (((((var_1_14) > (var_1_31)) ? (var_1_14) : (var_1_31)))) : (var_1_32)));
 } else {
  var_1_30 = (var_1_33 - (var_1_34 - var_1_35));
 }
 if (var_1_32 <= (var_1_11 - var_1_12)) {
  var_1_40 = ((((var_1_35 - var_1_34) < 0 ) ? -(var_1_35 - var_1_34) : (var_1_35 - var_1_34)));
 }
 if (! var_1_28) {
  var_1_15 = (((var_1_16 - var_1_17) + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) + var_1_19);
 } else {
  var_1_15 = var_1_16;
 }
 if (var_1_28) {
  var_1_26 = (var_1_17 - ((((var_1_19) < ((var_1_27 - 25))) ? (var_1_19) : ((var_1_27 - 25)))));
 } else {
  var_1_26 = (var_1_16 - var_1_18);
 }
 if (var_1_14 < (((((256.5f) < (var_1_11)) ? (256.5f) : (var_1_11))) + (var_1_9 / var_1_22))) {
  if (var_1_28) {
   var_1_20 = var_1_14;
  } else {
   var_1_20 = 15.4f;
  }
 } else {
  var_1_20 = var_1_14;
 }
 signed short int stepLocal_4 = var_1_6;
 if (var_1_26 != stepLocal_4) {
  if (var_1_29) {
   if (var_1_28) {
    var_1_36 = ((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5)));
   } else {
    var_1_36 = ((((((1 - var_1_23) + var_1_16)) > (var_1_7)) ? (((1 - var_1_23) + var_1_16)) : (var_1_7)));
   }
  } else {
   var_1_36 = (-256 + var_1_6);
  }
 }
 signed long int stepLocal_5 = var_1_26;
 if (last_1_var_1_41 >= stepLocal_5) {
  var_1_41 = (var_1_36 + ((((var_1_36) > (0)) ? (var_1_36) : (0))));
 }
 if ((- var_1_41) < var_1_25) {
  if (! var_1_29) {
   var_1_37 = (var_1_16 + last_1_var_1_37);
  } else {
   var_1_37 = (var_1_23 - ((((var_1_19) > (var_1_16)) ? (var_1_19) : (var_1_16))));
  }
 } else {
  var_1_37 = ((((var_1_18) > (var_1_39)) ? (var_1_18) : (var_1_39)));
 }
 signed long int stepLocal_0 = (((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4));
 if (var_1_36 >= stepLocal_0) {
  var_1_1 = ((((((var_1_5 + var_1_6) + var_1_7)) > (var_1_8)) ? (((var_1_5 + var_1_6) + var_1_7)) : (var_1_8)));
 } else {
  var_1_1 = var_1_6;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483647);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -8191);
 assume_abort_if_not(var_1_5 <= 8192);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -8191);
 assume_abort_if_not(var_1_6 <= 8191);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32767);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 32);
 assume_abort_if_not(var_1_16 <= 64);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 32);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 assume_abort_if_not(var_1_22 != 0.0F);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= 1073741823);
 assume_abort_if_not(var_1_27 <= 2147483646);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 4611686.018427383000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= -32767);
 assume_abort_if_not(var_1_39 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
}
int property(void) {
 return ((((((((((((var_1_36 >= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? (var_1_1 == ((signed short int) ((((((var_1_5 + var_1_6) + var_1_7)) > (var_1_8)) ? (((var_1_5 + var_1_6) + var_1_7)) : (var_1_8))))) : (var_1_1 == ((signed short int) var_1_6))) && (last_1_var_1_28 ? ((-2 <= var_1_6) ? (((last_1_var_1_20 + 1.2f) == (var_1_11 - var_1_12)) ? (last_1_var_1_28 ? (var_1_9 == ((float) var_1_14)) : (var_1_9 == ((float) 64.5f))) : (var_1_9 == ((float) var_1_14))) : (var_1_9 == ((float) var_1_14))) : 1)) && ((! var_1_28) ? (var_1_15 == ((unsigned char) (((var_1_16 - var_1_17) + ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) + var_1_19))) : (var_1_15 == ((unsigned char) var_1_16)))) && ((var_1_14 < (((((256.5f) < (var_1_11)) ? (256.5f) : (var_1_11))) + (var_1_9 / var_1_22))) ? (var_1_28 ? (var_1_20 == ((float) var_1_14)) : (var_1_20 == ((float) 15.4f))) : (var_1_20 == ((float) var_1_14)))) && ((((var_1_24 - var_1_25) * last_1_var_1_37) > var_1_18) ? (var_1_23 == ((unsigned char) ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))))) : (var_1_23 == ((unsigned char) var_1_18)))) && (var_1_28 ? (var_1_26 == ((signed long int) (var_1_17 - ((((var_1_19) < ((var_1_27 - 25))) ? (var_1_19) : ((var_1_27 - 25))))))) : (var_1_26 == ((signed long int) (var_1_16 - var_1_18))))) && (var_1_28 == ((unsigned char) ((var_1_5 > var_1_18) && (var_1_2 && var_1_29))))) && ((var_1_6 > ((var_1_5 * var_1_23) / var_1_16)) ? (var_1_30 == ((double) ((((((((var_1_14) > (var_1_31)) ? (var_1_14) : (var_1_31)))) > (var_1_32)) ? (((((var_1_14) > (var_1_31)) ? (var_1_14) : (var_1_31)))) : (var_1_32))))) : (var_1_30 == ((double) (var_1_33 - (var_1_34 - var_1_35)))))) && ((var_1_26 != var_1_6) ? (var_1_29 ? (var_1_28 ? (var_1_36 == ((signed long int) ((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5))))) : (var_1_36 == ((signed long int) ((((((1 - var_1_23) + var_1_16)) > (var_1_7)) ? (((1 - var_1_23) + var_1_16)) : (var_1_7)))))) : (var_1_36 == ((signed long int) (-256 + var_1_6)))) : 1)) && (((- var_1_41) < var_1_25) ? ((! var_1_29) ? (var_1_37 == ((signed short int) (var_1_16 + last_1_var_1_37))) : (var_1_37 == ((signed short int) (var_1_23 - ((((var_1_19) > (var_1_16)) ? (var_1_19) : (var_1_16))))))) : (var_1_37 == ((signed short int) ((((var_1_18) > (var_1_39)) ? (var_1_18) : (var_1_39))))))) && ((var_1_32 <= (var_1_11 - var_1_12)) ? (var_1_40 == ((double) ((((var_1_35 - var_1_34) < 0 ) ? -(var_1_35 - var_1_34) : (var_1_35 - var_1_34))))) : 1)) && ((last_1_var_1_41 >= var_1_26) ? (var_1_41 == ((signed long int) (var_1_36 + ((((var_1_36) > (0)) ? (var_1_36) : (0)))))) : 1)
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
