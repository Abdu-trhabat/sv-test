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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned short int var_1_1 = 10;
unsigned short int var_1_5 = 200;
unsigned short int var_1_6 = 56955;
unsigned short int var_1_7 = 32;
unsigned short int var_1_8 = 1;
unsigned short int var_1_9 = 8;
unsigned char var_1_10 = 1;
float var_1_11 = -0.6;
float var_1_12 = 9.125;
float var_1_13 = 50.5;
unsigned short int last_1_var_1_1 = 10;
unsigned short int last_1_var_1_9 = 8;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_9 <= (last_1_var_1_9 * last_1_var_1_1)) {
  var_1_1 = ((((var_1_5) > ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8))))) ? (var_1_5) : ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8))))));
 }
 if (var_1_10 || (var_1_6 == var_1_8)) {
  if (var_1_6 <= (((((0) < (var_1_1)) ? (0) : (var_1_1))) << var_1_1)) {
   if (var_1_10 && (var_1_1 == (var_1_6 * var_1_5))) {
    var_1_9 = var_1_5;
   } else {
    var_1_9 = var_1_5;
   }
  } else {
   var_1_9 = 2;
  }
 } else {
  var_1_9 = var_1_6;
 }
 if (var_1_7 != var_1_6) {
  if (var_1_7 <= var_1_9) {
   var_1_11 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
  } else {
   var_1_11 = var_1_12;
  }
 } else {
  var_1_11 = var_1_12;
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 32767);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
}
int property() {
 return (((last_1_var_1_9 <= (last_1_var_1_9 * last_1_var_1_1)) ? (var_1_1 == ((unsigned short int) ((((var_1_5) > ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8))))) ? (var_1_5) : ((((((var_1_6 - var_1_7)) > (var_1_8)) ? ((var_1_6 - var_1_7)) : (var_1_8)))))))) : 1) && ((var_1_10 || (var_1_6 == var_1_8)) ? ((var_1_6 <= (((((0) < (var_1_1)) ? (0) : (var_1_1))) << var_1_1)) ? ((var_1_10 && (var_1_1 == (var_1_6 * var_1_5))) ? (var_1_9 == ((unsigned short int) var_1_5)) : (var_1_9 == ((unsigned short int) var_1_5))) : (var_1_9 == ((unsigned short int) 2))) : (var_1_9 == ((unsigned short int) var_1_6)))) && ((var_1_7 != var_1_6) ? ((var_1_7 <= var_1_9) ? (var_1_11 == ((float) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : (var_1_11 == ((float) var_1_12))) : (var_1_11 == ((float) var_1_12)))
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
