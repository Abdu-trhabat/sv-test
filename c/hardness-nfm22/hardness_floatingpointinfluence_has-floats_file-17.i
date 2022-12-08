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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 10000000.8;
unsigned char var_1_2 = 0;
double var_1_3 = 16.2;
double var_1_4 = 7.5;
double var_1_5 = 49.6;
signed short int var_1_6 = -10;
double var_1_7 = 4.5;
double var_1_8 = 9.4;
signed short int var_1_9 = 128;
signed short int var_1_10 = 128;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 100;
float var_1_13 = 128.4;
double var_1_14 = 3.5;
unsigned char var_1_15 = 16;
unsigned char var_1_16 = 2;
unsigned char last_1_var_1_15 = 16;
void initially(void) {
}
void step(void) {
 var_1_12 = last_1_var_1_15;
 unsigned long int stepLocal_1 = var_1_12;
 signed short int stepLocal_0 = var_1_9;
 if (stepLocal_0 >= var_1_10) {
  if ((var_1_9 + last_1_var_1_15) >= stepLocal_1) {
   var_1_15 = var_1_16;
  } else {
   var_1_15 = var_1_16;
  }
 }
 if (var_1_2) {
  var_1_1 = (var_1_3 + ((((var_1_4) < ((49.5 + var_1_5))) ? (var_1_4) : ((49.5 + var_1_5)))));
 }
 if ((- (var_1_7 - var_1_8)) <= var_1_3) {
  var_1_6 = ((8 + var_1_15) - var_1_15);
 } else {
  if (var_1_2) {
   if (var_1_11) {
    var_1_6 = var_1_15;
   }
  } else {
   var_1_6 = var_1_15;
  }
 }
 if (var_1_7 < (var_1_8 - var_1_14)) {
  var_1_13 = ((((var_1_4) > (((((((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) > (var_1_3)) ? (((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) : (var_1_3))))) ? (var_1_4) : (((((((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) > (var_1_3)) ? (((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) : (var_1_3))))));
 }
}
void updateVariables() {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -461168.6018427382800e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427382800e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
}
void updateLastVariables() {
 last_1_var_1_15 = var_1_15;
}
int property() {
 return ((((var_1_2 ? (var_1_1 == ((double) (var_1_3 + ((((var_1_4) < ((49.5 + var_1_5))) ? (var_1_4) : ((49.5 + var_1_5))))))) : 1) && (((- (var_1_7 - var_1_8)) <= var_1_3) ? (var_1_6 == ((signed short int) ((8 + var_1_15) - var_1_15))) : (var_1_2 ? (var_1_11 ? (var_1_6 == ((signed short int) var_1_15)) : 1) : (var_1_6 == ((signed short int) var_1_15))))) && (var_1_12 == ((unsigned long int) last_1_var_1_15))) && ((var_1_7 < (var_1_8 - var_1_14)) ? (var_1_13 == ((float) ((((var_1_4) > (((((((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) > (var_1_3)) ? (((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) : (var_1_3))))) ? (var_1_4) : (((((((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) > (var_1_3)) ? (((((127.4f) > (var_1_5)) ? (127.4f) : (var_1_5)))) : (var_1_3)))))))) : 1)) && ((var_1_9 >= var_1_10) ? (((var_1_9 + last_1_var_1_15) >= var_1_12) ? (var_1_15 == ((unsigned char) var_1_16)) : (var_1_15 == ((unsigned char) var_1_16))) : 1)
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
