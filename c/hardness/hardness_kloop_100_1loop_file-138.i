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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch138100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 64;
unsigned char var_1_3 = 10;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
double var_1_7 = 4.4;
double var_1_10 = 32.5;
double var_1_11 = 128.8;
double var_1_12 = 4.8;
double var_1_13 = 128.5;
double var_1_14 = 9.75;
double var_1_15 = 32.125;
float var_1_16 = 2.5;
float var_1_17 = 10000000000000.25;
double var_1_18 = 8.6;
double var_1_19 = 7.75;
signed long int var_1_20 = -2;
signed char var_1_21 = 10;
signed char var_1_22 = 64;
signed char var_1_23 = 8;
signed char var_1_24 = 0;
float var_1_25 = 200.4;
unsigned char var_1_26 = 0;
signed long int var_1_27 = -64;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 200;
float var_1_30 = -0.1;
unsigned char var_1_31 = 16;
signed char var_1_32 = 1;
unsigned short int var_1_33 = 128;
unsigned short int var_1_34 = 43468;
unsigned short int var_1_35 = 500;
unsigned char last_1_var_1_1 = 0;
double last_1_var_1_15 = 32.125;
unsigned char last_1_var_1_26 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_3 = last_1_var_1_1;
 unsigned char stepLocal_2 = var_1_5;
 if (stepLocal_2 && var_1_4) {
  if (var_1_4) {
   if (((last_1_var_1_26 / var_1_22) >= (var_1_20 / var_1_27)) || stepLocal_3) {
    var_1_26 = ((((((((var_1_24) < (5)) ? (var_1_24) : (5)))) > (4)) ? (((((var_1_24) < (5)) ? (var_1_24) : (5)))) : (4)));
   } else {
    var_1_26 = var_1_24;
   }
  }
 } else {
  var_1_26 = 64;
 }
 if ((var_1_3 + var_1_2) > var_1_20) {
  var_1_19 = (((((var_1_14 - var_1_13)) < (var_1_12)) ? ((var_1_14 - var_1_13)) : (var_1_12)));
 } else {
  var_1_19 = var_1_12;
 }
 var_1_21 = ((var_1_22 - var_1_23) - (64 - var_1_24));
 var_1_28 = var_1_4;
 signed long int stepLocal_5 = var_1_20;
 if (var_1_6) {
  if ((- var_1_31) < stepLocal_5) {
   if (! var_1_5) {
    var_1_32 = var_1_23;
   }
  } else {
   var_1_32 = var_1_23;
  }
 } else {
  var_1_32 = var_1_23;
 }
 if ((var_1_31 - var_1_23) >= var_1_24) {
  var_1_33 = var_1_22;
 } else {
  var_1_33 = ((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35)));
 }
 signed long int stepLocal_4 = var_1_26 / ((((var_1_27) < (1)) ? (var_1_27) : (1)));
 if (var_1_17 != (var_1_13 / var_1_30)) {
  if ((var_1_13 - ((((var_1_17) < (var_1_14)) ? (var_1_17) : (var_1_14)))) < ((((var_1_19) > (63.25)) ? (var_1_19) : (63.25)))) {
   if (stepLocal_4 == var_1_23) {
    var_1_29 = var_1_23;
   } else {
    var_1_29 = var_1_31;
   }
  } else {
   var_1_29 = var_1_31;
  }
 } else {
  var_1_29 = var_1_22;
 }
 unsigned char stepLocal_0 = var_1_26;
 if (stepLocal_0 < var_1_29) {
  var_1_1 = (var_1_4 || (! (var_1_5 && var_1_6)));
 }
 if ((((((- var_1_19)) < ((- 7.75))) ? ((- var_1_19)) : ((- 7.75)))) <= (- var_1_19)) {
  if (var_1_1) {
   var_1_7 = ((((((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) < 0 ) ? -(((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12)));
  } else {
   var_1_7 = (var_1_11 + var_1_10);
  }
 } else {
  var_1_7 = (var_1_13 - var_1_14);
 }
 if (((var_1_14 - var_1_13) * (var_1_16 - var_1_17)) != last_1_var_1_15) {
  if (var_1_1) {
   var_1_15 = var_1_14;
  } else {
   var_1_15 = var_1_12;
  }
 } else {
  var_1_15 = var_1_18;
 }
 signed char stepLocal_1 = var_1_23;
 if (var_1_7 < 24.75) {
  if ((var_1_26 ^ var_1_20) < stepLocal_1) {
   var_1_25 = (((((((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12)))) < (var_1_11)) ? (((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12)))) : (var_1_11))) + 4.5f);
  } else {
   var_1_25 = ((((var_1_12) > (var_1_10)) ? (var_1_12) : (var_1_10)));
  }
 } else {
  var_1_25 = ((((31.4f) > (var_1_10)) ? (31.4f) : (var_1_10)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= -2147483648);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 62);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 assume_abort_if_not(var_1_27 != 0);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 assume_abort_if_not(var_1_30 != 0.0F);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_26 = var_1_26;
}
int property(void) {
 return (((((((((((var_1_26 < var_1_29) ? (var_1_1 == ((unsigned char) (var_1_4 || (! (var_1_5 && var_1_6))))) : 1) && (((((((- var_1_19)) < ((- 7.75))) ? ((- var_1_19)) : ((- 7.75)))) <= (- var_1_19)) ? (var_1_1 ? (var_1_7 == ((double) ((((((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) < 0 ) ? -(((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12) : (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12))))) : (var_1_7 == ((double) (var_1_11 + var_1_10)))) : (var_1_7 == ((double) (var_1_13 - var_1_14))))) && ((((var_1_14 - var_1_13) * (var_1_16 - var_1_17)) != last_1_var_1_15) ? (var_1_1 ? (var_1_15 == ((double) var_1_14)) : (var_1_15 == ((double) var_1_12))) : (var_1_15 == ((double) var_1_18)))) && (((var_1_3 + var_1_2) > var_1_20) ? (var_1_19 == ((double) (((((var_1_14 - var_1_13)) < (var_1_12)) ? ((var_1_14 - var_1_13)) : (var_1_12))))) : (var_1_19 == ((double) var_1_12)))) && (var_1_21 == ((signed char) ((var_1_22 - var_1_23) - (64 - var_1_24))))) && ((var_1_7 < 24.75) ? (((var_1_26 ^ var_1_20) < var_1_23) ? (var_1_25 == ((float) (((((((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12)))) < (var_1_11)) ? (((((var_1_10) < (var_1_12)) ? (var_1_10) : (var_1_12)))) : (var_1_11))) + 4.5f))) : (var_1_25 == ((float) ((((var_1_12) > (var_1_10)) ? (var_1_12) : (var_1_10)))))) : (var_1_25 == ((float) ((((31.4f) > (var_1_10)) ? (31.4f) : (var_1_10))))))) && ((var_1_5 && var_1_4) ? (var_1_4 ? ((((last_1_var_1_26 / var_1_22) >= (var_1_20 / var_1_27)) || last_1_var_1_1) ? (var_1_26 == ((unsigned char) ((((((((var_1_24) < (5)) ? (var_1_24) : (5)))) > (4)) ? (((((var_1_24) < (5)) ? (var_1_24) : (5)))) : (4))))) : (var_1_26 == ((unsigned char) var_1_24))) : 1) : (var_1_26 == ((unsigned char) 64)))) && (var_1_28 == ((unsigned char) var_1_4))) && ((var_1_17 != (var_1_13 / var_1_30)) ? (((var_1_13 - ((((var_1_17) < (var_1_14)) ? (var_1_17) : (var_1_14)))) < ((((var_1_19) > (63.25)) ? (var_1_19) : (63.25)))) ? (((var_1_26 / ((((var_1_27) < (1)) ? (var_1_27) : (1)))) == var_1_23) ? (var_1_29 == ((unsigned char) var_1_23)) : (var_1_29 == ((unsigned char) var_1_31))) : (var_1_29 == ((unsigned char) var_1_31))) : (var_1_29 == ((unsigned char) var_1_22)))) && (var_1_6 ? (((- var_1_31) < var_1_20) ? ((! var_1_5) ? (var_1_32 == ((signed char) var_1_23)) : 1) : (var_1_32 == ((signed char) var_1_23))) : (var_1_32 == ((signed char) var_1_23)))) && (((var_1_31 - var_1_23) >= var_1_24) ? (var_1_33 == ((unsigned short int) var_1_22)) : (var_1_33 == ((unsigned short int) ((((var_1_34 - var_1_35) < 0 ) ? -(var_1_34 - var_1_35) : (var_1_34 - var_1_35))))))
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
