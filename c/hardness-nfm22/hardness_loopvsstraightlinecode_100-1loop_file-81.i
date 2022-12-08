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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch81100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
signed long int var_1_1 = 128;
unsigned char var_1_4 = 0;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 50;
unsigned short int var_1_10 = 256;
float var_1_11 = 32.6;
double var_1_12 = 64.5;
float var_1_13 = 200.375;
float var_1_14 = 0.09999999999999998;
float var_1_15 = 10.25;
float var_1_16 = 255.125;
signed long int var_1_17 = 0;
double var_1_18 = 200.8;
double var_1_19 = 128.5;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
signed char var_1_22 = -32;
signed char var_1_23 = 50;
signed char var_1_24 = -4;
unsigned short int var_1_25 = 200;
double var_1_26 = 24.75;
signed short int var_1_27 = 100;
signed short int var_1_28 = 0;
signed short int var_1_29 = 200;
signed short int var_1_30 = 100;
signed long int var_1_31 = 16;
float var_1_33 = 15.8;
double var_1_34 = 32.8;
float var_1_35 = 10.125;
float var_1_36 = 5.3;
float var_1_37 = 24.375;
float var_1_38 = 128.75;
float var_1_39 = 1000000.5;
signed long int last_1_var_1_1 = 128;
unsigned short int last_1_var_1_8 = 8;
float last_1_var_1_11 = 32.6;
signed long int last_1_var_1_17 = 0;
unsigned char last_1_var_1_20 = 1;
signed char last_1_var_1_22 = -32;
signed long int last_1_var_1_31 = 16;
float last_1_var_1_33 = 15.8;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_1 >= (last_1_var_1_22 + last_1_var_1_31)) {
  var_1_20 = (var_1_4 && ((1.8f == last_1_var_1_33) && var_1_21));
 } else {
  if (((((last_1_var_1_11) > (var_1_15)) ? (last_1_var_1_11) : (var_1_15))) != var_1_19) {
   var_1_20 = var_1_21;
  }
 }
 if (! var_1_20) {
  var_1_8 = ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10)));
 }
 if (last_1_var_1_33 == (1.00000000000528E11 - var_1_12)) {
  var_1_11 = (((((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_15)) > ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))))) ? ((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_15)) : ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))))));
 } else {
  var_1_11 = var_1_16;
 }
 unsigned char stepLocal_4 = last_1_var_1_20;
 signed long int stepLocal_3 = last_1_var_1_8;
 signed long int stepLocal_2 = 8 | last_1_var_1_22;
 if ((var_1_9 == last_1_var_1_17) || stepLocal_4) {
  if (stepLocal_3 >= var_1_24) {
   if (stepLocal_2 < var_1_28) {
    var_1_31 = (((((((var_1_28) > (var_1_24)) ? (var_1_28) : (var_1_24))) < 0 ) ? -((((var_1_28) > (var_1_24)) ? (var_1_28) : (var_1_24))) : ((((var_1_28) > (var_1_24)) ? (var_1_28) : (var_1_24)))));
   } else {
    var_1_31 = last_1_var_1_22;
   }
  }
 }
 var_1_18 = var_1_19;
 var_1_22 = (((((0) < (var_1_23)) ? (0) : (var_1_23))) + var_1_24);
 signed long int stepLocal_1 = (var_1_27 + var_1_28) - ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)));
 if (stepLocal_1 >= var_1_22) {
  var_1_26 = (var_1_14 - var_1_13);
 }
 signed char stepLocal_5 = var_1_22;
 if (var_1_30 >= stepLocal_5) {
  if ((var_1_13 / var_1_34) <= var_1_11) {
   if (var_1_20) {
    if (var_1_14 <= (var_1_34 / ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) {
     var_1_33 = (var_1_37 + var_1_38);
    } else {
     if (var_1_26 <= var_1_13) {
      var_1_33 = ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38)));
     } else {
      var_1_33 = (var_1_13 - var_1_14);
     }
    }
   } else {
    var_1_33 = ((((var_1_16) > ((var_1_38 + var_1_37))) ? (var_1_16) : ((var_1_38 + var_1_37))));
   }
  } else {
   var_1_33 = (var_1_39 - var_1_14);
  }
 } else {
  if (0.3 < var_1_34) {
   var_1_33 = var_1_15;
  } else {
   var_1_33 = var_1_16;
  }
 }
 if (((var_1_8 + var_1_9) + (var_1_31 * var_1_31)) >= var_1_23) {
  if (var_1_21 || (var_1_13 > var_1_18)) {
   var_1_25 = var_1_9;
  } else {
   var_1_25 = var_1_9;
  }
 } else {
  var_1_25 = var_1_9;
 }
 signed long int stepLocal_0 = var_1_31 ^ var_1_22;
 if (! (var_1_11 > var_1_26)) {
  if ((~ ((((4) < 0 ) ? -(4) : (4)))) >= stepLocal_0) {
   var_1_1 = 16;
  } else {
   var_1_1 = var_1_25;
  }
 }
 if (var_1_12 >= var_1_26) {
  var_1_17 = (var_1_25 + 25);
 }
}
void updateVariables() {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -63);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -63);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 16384);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 16383);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 assume_abort_if_not(var_1_35 != 0.0F);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -461168.6018427382800e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -461168.6018427382800e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_33 = var_1_33;
}
int property() {
 return (((((((((((! (var_1_11 > var_1_26)) ? (((~ ((((4) < 0 ) ? -(4) : (4)))) >= (var_1_31 ^ var_1_22)) ? (var_1_1 == ((signed long int) 16)) : (var_1_1 == ((signed long int) var_1_25))) : 1) && ((! var_1_20) ? (var_1_8 == ((unsigned short int) ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) : 1)) && ((last_1_var_1_33 == (1.00000000000528E11 - var_1_12)) ? (var_1_11 == ((float) (((((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_15)) > ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))))) ? ((((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))) - var_1_15)) : ((((((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) < 0 ) ? -((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) : ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))))) : (var_1_11 == ((float) var_1_16)))) && ((var_1_12 >= var_1_26) ? (var_1_17 == ((signed long int) (var_1_25 + 25))) : 1)) && (var_1_18 == ((double) var_1_19))) && ((last_1_var_1_1 >= (last_1_var_1_22 + last_1_var_1_31)) ? (var_1_20 == ((unsigned char) (var_1_4 && ((1.8f == last_1_var_1_33) && var_1_21)))) : ((((((last_1_var_1_11) > (var_1_15)) ? (last_1_var_1_11) : (var_1_15))) != var_1_19) ? (var_1_20 == ((unsigned char) var_1_21)) : 1))) && (var_1_22 == ((signed char) (((((0) < (var_1_23)) ? (0) : (var_1_23))) + var_1_24)))) && ((((var_1_8 + var_1_9) + (var_1_31 * var_1_31)) >= var_1_23) ? ((var_1_21 || (var_1_13 > var_1_18)) ? (var_1_25 == ((unsigned short int) var_1_9)) : (var_1_25 == ((unsigned short int) var_1_9))) : (var_1_25 == ((unsigned short int) var_1_9)))) && ((((var_1_27 + var_1_28) - ((((var_1_29) > (var_1_30)) ? (var_1_29) : (var_1_30)))) >= var_1_22) ? (var_1_26 == ((double) (var_1_14 - var_1_13))) : 1)) && (((var_1_9 == last_1_var_1_17) || last_1_var_1_20) ? ((last_1_var_1_8 >= var_1_24) ? (((8 | last_1_var_1_22) < var_1_28) ? (var_1_31 == ((signed long int) (((((((var_1_28) > (var_1_24)) ? (var_1_28) : (var_1_24))) < 0 ) ? -((((var_1_28) > (var_1_24)) ? (var_1_28) : (var_1_24))) : ((((var_1_28) > (var_1_24)) ? (var_1_28) : (var_1_24))))))) : (var_1_31 == ((signed long int) last_1_var_1_22))) : 1) : 1)) && ((var_1_30 >= var_1_22) ? (((var_1_13 / var_1_34) <= var_1_11) ? (var_1_20 ? ((var_1_14 <= (var_1_34 / ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))) ? (var_1_33 == ((float) (var_1_37 + var_1_38))) : ((var_1_26 <= var_1_13) ? (var_1_33 == ((float) ((((var_1_37) > (var_1_38)) ? (var_1_37) : (var_1_38))))) : (var_1_33 == ((float) (var_1_13 - var_1_14))))) : (var_1_33 == ((float) ((((var_1_16) > ((var_1_38 + var_1_37))) ? (var_1_16) : ((var_1_38 + var_1_37))))))) : (var_1_33 == ((float) (var_1_39 - var_1_14)))) : ((0.3 < var_1_34) ? (var_1_33 == ((float) var_1_15)) : (var_1_33 == ((float) var_1_16))))
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
