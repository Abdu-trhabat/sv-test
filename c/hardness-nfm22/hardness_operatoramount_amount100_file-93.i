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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
unsigned char var_1_4 = 1;
double var_1_7 = 31.25;
double var_1_8 = 7.6;
double var_1_9 = 8.9;
double var_1_10 = 256.8;
signed short int var_1_11 = 0;
unsigned long int var_1_15 = 64;
signed short int var_1_18 = 16;
signed short int var_1_19 = 22006;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
float var_1_23 = 2.25;
signed long int var_1_24 = -1;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 200;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 64;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 5;
signed char var_1_33 = 2;
signed char var_1_34 = 32;
unsigned short int var_1_35 = 16;
float var_1_37 = 63.5;
signed long int last_1_var_1_24 = -1;
unsigned char last_1_var_1_26 = 32;
signed char last_1_var_1_33 = 2;
unsigned short int last_1_var_1_35 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_6 = last_1_var_1_24;
 unsigned char stepLocal_5 = var_1_30;
 signed long int stepLocal_4 = last_1_var_1_24;
 if (stepLocal_6 < (last_1_var_1_35 | 100000000)) {
  if (stepLocal_5 > last_1_var_1_35) {
   if (var_1_19 < stepLocal_4) {
    var_1_35 = ((var_1_29 + var_1_28) + var_1_31);
   } else {
    var_1_35 = (((((var_1_34 + ((((var_1_28) > (32)) ? (var_1_28) : (32))))) > (((((last_1_var_1_33) < 0 ) ? -(last_1_var_1_33) : (last_1_var_1_33))))) ? ((var_1_34 + ((((var_1_28) > (32)) ? (var_1_28) : (32))))) : (((((last_1_var_1_33) < 0 ) ? -(last_1_var_1_33) : (last_1_var_1_33))))));
   }
  } else {
   var_1_35 = ((((var_1_32) > (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))) ? (var_1_32) : (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))));
  }
 } else {
  if (var_1_8 != var_1_10) {
   var_1_35 = ((((last_1_var_1_33) > (last_1_var_1_26)) ? (last_1_var_1_33) : (last_1_var_1_26)));
  } else {
   var_1_35 = var_1_28;
  }
 }
 if (var_1_4) {
  var_1_21 = (! var_1_22);
 }
 if (! var_1_21) {
  var_1_23 = var_1_8;
 }
 if ((var_1_8 + 199.375) <= 10.5) {
  var_1_26 = ((var_1_27 - var_1_28) - (var_1_29 - 1));
 } else {
  if (var_1_21) {
   var_1_26 = ((var_1_29 - var_1_28) + ((var_1_30 + var_1_31) - var_1_32));
  } else {
   var_1_26 = var_1_28;
  }
 }
 if (var_1_22) {
  var_1_33 = ((var_1_28 - var_1_32) + (var_1_31 - var_1_34));
 }
 var_1_37 = var_1_10;
 if ((- var_1_8) != var_1_23) {
  var_1_11 = (500 + var_1_26);
 } else {
  var_1_11 = ((((var_1_26) < ((var_1_26 + var_1_26))) ? (var_1_26) : ((var_1_26 + var_1_26))));
 }
 if (var_1_26 == var_1_11) {
  var_1_15 = ((((var_1_26) > (var_1_35)) ? (var_1_26) : (var_1_35)));
 } else {
  if (var_1_9 < var_1_37) {
   var_1_15 = var_1_35;
  } else {
   var_1_15 = var_1_35;
  }
 }
 if ((var_1_11 == var_1_15) && var_1_21) {
  var_1_1 = ((((var_1_33) < (var_1_33)) ? (var_1_33) : (var_1_33)));
 }
 signed short int stepLocal_3 = var_1_11;
 if (var_1_1 != stepLocal_3) {
  var_1_18 = (8 - ((((10) > ((var_1_19 - var_1_26))) ? (10) : ((var_1_19 - var_1_26)))));
 }
 if (var_1_18 != var_1_18) {
  if ((1u ^ var_1_19) > (- var_1_35)) {
   var_1_24 = var_1_26;
  } else {
   if (var_1_22) {
    var_1_24 = last_1_var_1_24;
   }
  }
 } else {
  var_1_24 = var_1_26;
 }
 signed short int stepLocal_2 = var_1_11;
 signed long int stepLocal_1 = var_1_1;
 unsigned short int stepLocal_0 = var_1_35;
 if (stepLocal_0 == var_1_1) {
  if (stepLocal_2 < var_1_1) {
   var_1_7 = ((var_1_8 - var_1_9) + var_1_10);
  } else {
   if (stepLocal_1 >= 25) {
    var_1_7 = (((((var_1_8 - var_1_9)) > (var_1_10)) ? ((var_1_8 - var_1_9)) : (var_1_10)));
   } else {
    var_1_7 = var_1_10;
   }
  }
 } else {
  var_1_7 = var_1_10;
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 16383);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 190);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 63);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 31);
 assume_abort_if_not(var_1_30 <= 64);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 32);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
}
void updateLastVariables() {
 last_1_var_1_24 = var_1_24;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_35 = var_1_35;
}
int property() {
 return (((((((((((((var_1_11 == var_1_15) && var_1_21) ? (var_1_1 == ((signed long int) ((((var_1_33) < (var_1_33)) ? (var_1_33) : (var_1_33))))) : 1) && ((var_1_35 == var_1_1) ? ((var_1_11 < var_1_1) ? (var_1_7 == ((double) ((var_1_8 - var_1_9) + var_1_10))) : ((var_1_1 >= 25) ? (var_1_7 == ((double) (((((var_1_8 - var_1_9)) > (var_1_10)) ? ((var_1_8 - var_1_9)) : (var_1_10))))) : (var_1_7 == ((double) var_1_10)))) : (var_1_7 == ((double) var_1_10)))) && (((- var_1_8) != var_1_23) ? (var_1_11 == ((signed short int) (500 + var_1_26))) : (var_1_11 == ((signed short int) ((((var_1_26) < ((var_1_26 + var_1_26))) ? (var_1_26) : ((var_1_26 + var_1_26)))))))) && ((var_1_26 == var_1_11) ? (var_1_15 == ((unsigned long int) ((((var_1_26) > (var_1_35)) ? (var_1_26) : (var_1_35))))) : ((var_1_9 < var_1_37) ? (var_1_15 == ((unsigned long int) var_1_35)) : (var_1_15 == ((unsigned long int) var_1_35))))) && ((var_1_1 != var_1_11) ? (var_1_18 == ((signed short int) (8 - ((((10) > ((var_1_19 - var_1_26))) ? (10) : ((var_1_19 - var_1_26))))))) : 1)) && (var_1_4 ? (var_1_21 == ((unsigned char) (! var_1_22))) : 1)) && ((! var_1_21) ? (var_1_23 == ((float) var_1_8)) : 1)) && ((var_1_18 != var_1_18) ? (((1u ^ var_1_19) > (- var_1_35)) ? (var_1_24 == ((signed long int) var_1_26)) : (var_1_22 ? (var_1_24 == ((signed long int) last_1_var_1_24)) : 1)) : (var_1_24 == ((signed long int) var_1_26)))) && (((var_1_8 + 199.375) <= 10.5) ? (var_1_26 == ((unsigned char) ((var_1_27 - var_1_28) - (var_1_29 - 1)))) : (var_1_21 ? (var_1_26 == ((unsigned char) ((var_1_29 - var_1_28) + ((var_1_30 + var_1_31) - var_1_32)))) : (var_1_26 == ((unsigned char) var_1_28))))) && (var_1_22 ? (var_1_33 == ((signed char) ((var_1_28 - var_1_32) + (var_1_31 - var_1_34)))) : 1)) && ((last_1_var_1_24 < (last_1_var_1_35 | 100000000)) ? ((var_1_30 > last_1_var_1_35) ? ((var_1_19 < last_1_var_1_24) ? (var_1_35 == ((unsigned short int) ((var_1_29 + var_1_28) + var_1_31))) : (var_1_35 == ((unsigned short int) (((((var_1_34 + ((((var_1_28) > (32)) ? (var_1_28) : (32))))) > (((((last_1_var_1_33) < 0 ) ? -(last_1_var_1_33) : (last_1_var_1_33))))) ? ((var_1_34 + ((((var_1_28) > (32)) ? (var_1_28) : (32))))) : (((((last_1_var_1_33) < 0 ) ? -(last_1_var_1_33) : (last_1_var_1_33))))))))) : (var_1_35 == ((unsigned short int) ((((var_1_32) > (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))) ? (var_1_32) : (((((var_1_31) > (var_1_28)) ? (var_1_31) : (var_1_28))))))))) : ((var_1_8 != var_1_10) ? (var_1_35 == ((unsigned short int) ((((last_1_var_1_33) > (last_1_var_1_26)) ? (last_1_var_1_33) : (last_1_var_1_26))))) : (var_1_35 == ((unsigned short int) var_1_28))))) && (var_1_37 == ((float) var_1_10))
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
