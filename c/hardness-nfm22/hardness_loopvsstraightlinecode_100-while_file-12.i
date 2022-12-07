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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed short int var_1_1 = 100;
unsigned char var_1_5 = 0;
double var_1_6 = 4.5;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 2;
double var_1_12 = 16.4;
signed long int var_1_13 = 32;
signed short int var_1_15 = -10;
signed long int var_1_16 = -5;
unsigned char var_1_17 = 1;
signed short int var_1_18 = 500;
double var_1_19 = 32.5;
signed char var_1_20 = 0;
double var_1_21 = 2.5;
double var_1_22 = 0.0;
double var_1_23 = 9.6;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 8;
unsigned short int var_1_28 = 16;
double var_1_29 = 200.5;
unsigned short int var_1_30 = 20701;
double last_1_var_1_6 = 4.5;
signed long int last_1_var_1_16 = -5;
signed short int last_1_var_1_18 = 500;
signed char last_1_var_1_20 = 0;
double last_1_var_1_21 = 2.5;
unsigned char last_1_var_1_24 = 64;
unsigned short int last_1_var_1_26 = 8;
unsigned short int last_1_var_1_28 = 16;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = ! var_1_5;
 if (((last_1_var_1_26 * last_1_var_1_20) >= last_1_var_1_28) && stepLocal_0) {
  var_1_1 = last_1_var_1_26;
 } else {
  var_1_1 = last_1_var_1_26;
 }
 signed long int stepLocal_1 = (last_1_var_1_24 - last_1_var_1_28) << ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)));
 if (last_1_var_1_18 <= stepLocal_1) {
  if ((- last_1_var_1_21) > (last_1_var_1_6 + (- last_1_var_1_21))) {
   var_1_6 = var_1_12;
  } else {
   var_1_6 = var_1_12;
  }
 }
 signed long int stepLocal_3 = last_1_var_1_26 + var_1_8;
 if (var_1_5) {
  if (((((last_1_var_1_6) < ((1.0000000075E8 - var_1_19))) ? (last_1_var_1_6) : ((1.0000000075E8 - var_1_19)))) > var_1_12) {
   if (stepLocal_3 >= last_1_var_1_24) {
    var_1_18 = var_1_7;
   } else {
    var_1_18 = last_1_var_1_24;
   }
  } else {
   var_1_18 = var_1_8;
  }
 }
 if (! (last_1_var_1_18 <= (var_1_7 / var_1_15))) {
  var_1_21 = ((((((var_1_22 - 7.5) - var_1_23)) > (var_1_12)) ? (((var_1_22 - 7.5) - var_1_23)) : (var_1_12)));
 } else {
  var_1_21 = var_1_22;
 }
 if (var_1_17 || (var_1_8 >= last_1_var_1_24)) {
  if (var_1_17 && (var_1_21 != var_1_23)) {
   var_1_24 = ((((var_1_7) < (var_1_25)) ? (var_1_7) : (var_1_25)));
  }
 } else {
  var_1_24 = var_1_7;
 }
 if (var_1_19 == var_1_21) {
  if (! var_1_17) {
   var_1_20 = ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
  } else {
   var_1_20 = var_1_7;
  }
 }
 if (var_1_5 && var_1_17) {
  var_1_16 = ((((last_1_var_1_16) > (var_1_15)) ? (last_1_var_1_16) : (var_1_15)));
 } else {
  var_1_16 = (var_1_8 - var_1_7);
 }
 unsigned char stepLocal_2 = var_1_24;
 if (var_1_21 > var_1_21) {
  var_1_13 = (var_1_7 - var_1_24);
 } else {
  if ((var_1_16 / var_1_15) < stepLocal_2) {
   var_1_13 = var_1_7;
  } else {
   var_1_13 = var_1_15;
  }
 }
 if (var_1_17) {
  if (var_1_21 <= ((var_1_6 / var_1_22) + (var_1_21 / var_1_29))) {
   var_1_28 = ((59265 - ((((var_1_8) > (var_1_18)) ? (var_1_8) : (var_1_18)))) - (var_1_30 - var_1_13));
  } else {
   var_1_28 = var_1_13;
  }
 } else {
  var_1_28 = var_1_1;
 }
 if (! var_1_17) {
  if (var_1_17) {
   if (var_1_6 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) {
    if (var_1_19 <= ((var_1_12 + var_1_6) / var_1_22)) {
     if ((~ var_1_24) > var_1_1) {
      var_1_26 = var_1_13;
     } else {
      var_1_26 = var_1_7;
     }
    }
   } else {
    var_1_26 = var_1_18;
   }
  } else {
   var_1_26 = var_1_18;
  }
 } else {
  var_1_26 = var_1_8;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 23);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 23);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32768);
 assume_abort_if_not(var_1_15 <= 32767);
 assume_abort_if_not(var_1_15 != 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 4611686.018427382800e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 assume_abort_if_not(var_1_29 != 0.0F);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 16383);
 assume_abort_if_not(var_1_30 <= 32767);
}
void updateLastVariables() {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_28 = var_1_28;
}
int property() {
 return ((((((((((((last_1_var_1_26 * last_1_var_1_20) >= last_1_var_1_28) && (! var_1_5)) ? (var_1_1 == ((signed short int) last_1_var_1_26)) : (var_1_1 == ((signed short int) last_1_var_1_26))) && ((last_1_var_1_18 <= ((last_1_var_1_24 - last_1_var_1_28) << ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (((- last_1_var_1_21) > (last_1_var_1_6 + (- last_1_var_1_21))) ? (var_1_6 == ((double) var_1_12)) : (var_1_6 == ((double) var_1_12))) : 1)) && ((var_1_21 > var_1_21) ? (var_1_13 == ((signed long int) (var_1_7 - var_1_24))) : (((var_1_16 / var_1_15) < var_1_24) ? (var_1_13 == ((signed long int) var_1_7)) : (var_1_13 == ((signed long int) var_1_15))))) && ((var_1_5 && var_1_17) ? (var_1_16 == ((signed long int) ((((last_1_var_1_16) > (var_1_15)) ? (last_1_var_1_16) : (var_1_15))))) : (var_1_16 == ((signed long int) (var_1_8 - var_1_7))))) && (var_1_5 ? ((((((last_1_var_1_6) < ((1.0000000075E8 - var_1_19))) ? (last_1_var_1_6) : ((1.0000000075E8 - var_1_19)))) > var_1_12) ? (((last_1_var_1_26 + var_1_8) >= last_1_var_1_24) ? (var_1_18 == ((signed short int) var_1_7)) : (var_1_18 == ((signed short int) last_1_var_1_24))) : (var_1_18 == ((signed short int) var_1_8))) : 1)) && ((var_1_19 == var_1_21) ? ((! var_1_17) ? (var_1_20 == ((signed char) ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) : (var_1_20 == ((signed char) var_1_7))) : 1)) && ((! (last_1_var_1_18 <= (var_1_7 / var_1_15))) ? (var_1_21 == ((double) ((((((var_1_22 - 7.5) - var_1_23)) > (var_1_12)) ? (((var_1_22 - 7.5) - var_1_23)) : (var_1_12))))) : (var_1_21 == ((double) var_1_22)))) && ((var_1_17 || (var_1_8 >= last_1_var_1_24)) ? ((var_1_17 && (var_1_21 != var_1_23)) ? (var_1_24 == ((unsigned char) ((((var_1_7) < (var_1_25)) ? (var_1_7) : (var_1_25))))) : 1) : (var_1_24 == ((unsigned char) var_1_7)))) && ((! var_1_17) ? (var_1_17 ? ((var_1_6 <= ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) ? ((var_1_19 <= ((var_1_12 + var_1_6) / var_1_22)) ? (((~ var_1_24) > var_1_1) ? (var_1_26 == ((unsigned short int) var_1_13)) : (var_1_26 == ((unsigned short int) var_1_7))) : 1) : (var_1_26 == ((unsigned short int) var_1_18))) : (var_1_26 == ((unsigned short int) var_1_18))) : (var_1_26 == ((unsigned short int) var_1_8)))) && (var_1_17 ? ((var_1_21 <= ((var_1_6 / var_1_22) + (var_1_21 / var_1_29))) ? (var_1_28 == ((unsigned short int) ((59265 - ((((var_1_8) > (var_1_18)) ? (var_1_8) : (var_1_18)))) - (var_1_30 - var_1_13)))) : (var_1_28 == ((unsigned short int) var_1_13))) : (var_1_28 == ((unsigned short int) var_1_1)))
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
