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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 255.75;
double var_1_6 = 5.25;
double var_1_7 = 99.25;
double var_1_8 = 3.7;
double var_1_9 = 10.5;
double var_1_10 = 1000.2;
double var_1_11 = 1.8;
unsigned short int var_1_12 = 2;
unsigned short int var_1_13 = 1;
unsigned short int var_1_14 = 24062;
unsigned short int var_1_15 = 25;
unsigned short int var_1_16 = 5;
unsigned char var_1_17 = 0;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 4;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 64;
unsigned char var_1_27 = 128;
float var_1_28 = 24.5;
unsigned char var_1_29 = 1;
double var_1_30 = 0.0;
double var_1_31 = 4.2;
double var_1_32 = 1000000000.4;
double var_1_33 = 255.95;
double var_1_34 = 256.8;
double var_1_35 = 16.3;
signed long int var_1_36 = 4;
unsigned short int var_1_37 = 51001;
signed long int var_1_38 = 1841990451;
unsigned long int var_1_39 = 200;
unsigned long int var_1_40 = 100000000;
float var_1_41 = 999.5;
double last_1_var_1_1 = 255.75;
signed long int last_1_var_1_36 = 4;
unsigned long int last_1_var_1_39 = 200;
void initially(void) {
}
void step(void) {
 if (((var_1_15 + var_1_21) - last_1_var_1_36) == ((var_1_22 * last_1_var_1_39) * last_1_var_1_39)) {
  var_1_23 = var_1_24;
 } else {
  var_1_23 = var_1_25;
 }
 if ((- last_1_var_1_1) <= ((var_1_30 - var_1_31) - var_1_10)) {
  var_1_29 = var_1_25;
 }
 if ((var_1_21 < (var_1_27 - 16)) && var_1_29) {
  if (-32 > var_1_13) {
   var_1_26 = (((((var_1_21 - var_1_22)) > (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20)));
  }
 }
 if (var_1_23) {
  var_1_28 = 255.9f;
 }
 if (var_1_24 && (var_1_25 && var_1_29)) {
  var_1_32 = (var_1_33 + ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))));
 }
 if ((var_1_29 && (var_1_24 && var_1_25)) || var_1_23) {
  var_1_39 = var_1_14;
 } else {
  var_1_39 = ((((last_1_var_1_39) > (var_1_40)) ? (last_1_var_1_39) : (var_1_40)));
 }
 if (var_1_29) {
  if (var_1_23) {
   var_1_12 = var_1_13;
  } else {
   var_1_12 = ((var_1_14 + (32135 - var_1_15)) - var_1_16);
  }
 }
 if ((((((var_1_12 + var_1_20)) < ((var_1_37 - var_1_39))) ? ((var_1_12 + var_1_20)) : ((var_1_37 - var_1_39)))) != (var_1_39 + (var_1_26 % var_1_27))) {
  var_1_36 = ((var_1_38 - var_1_26) - (1834204314 - var_1_21));
 } else {
  var_1_36 = ((((((((var_1_21) < (var_1_13)) ? (var_1_21) : (var_1_13)))) > (var_1_16)) ? (((((var_1_21) < (var_1_13)) ? (var_1_21) : (var_1_13)))) : (var_1_16)));
 }
 unsigned char stepLocal_1 = var_1_29;
 unsigned long int stepLocal_0 = var_1_39 + 16u;
 if (stepLocal_1 && var_1_23) {
  if (var_1_39 >= stepLocal_0) {
   var_1_1 = ((((var_1_6) > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (var_1_6) : (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))));
  } else {
   var_1_1 = var_1_6;
  }
 }
 if ((((((var_1_6) > (var_1_1)) ? (var_1_6) : (var_1_1))) / ((((0.125) < (1.2)) ? (0.125) : (1.2)))) <= (var_1_10 - var_1_11)) {
  var_1_9 = var_1_6;
 } else {
  var_1_9 = var_1_8;
 }
 unsigned long int stepLocal_4 = var_1_39 * var_1_15;
 unsigned char stepLocal_3 = var_1_29;
 unsigned char stepLocal_2 = var_1_29;
 if (var_1_39 > stepLocal_4) {
  if (var_1_23) {
   if ((var_1_13 <= var_1_12) || stepLocal_3) {
    var_1_17 = ((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20)));
   } else {
    var_1_17 = ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < (var_1_20)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_20)));
   }
  } else {
   var_1_17 = (var_1_21 - var_1_22);
  }
 } else {
  if (((100.5f - 1.5f) < var_1_10) && stepLocal_2) {
   var_1_17 = var_1_20;
  } else {
   var_1_17 = var_1_21;
  }
 }
 signed long int stepLocal_5 = 1 * var_1_13;
 if (stepLocal_5 < (var_1_39 + var_1_36)) {
  var_1_41 = var_1_34;
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 8191);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 255);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 4611686.018427388000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427388000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65535);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= 1073741822);
 assume_abort_if_not(var_1_38 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_39 = var_1_39;
}
int property(void) {
 return ((((((((((((var_1_29 && var_1_23) ? ((var_1_39 >= (var_1_39 + 16u)) ? (var_1_1 == ((double) ((((var_1_6) > (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) ? (var_1_6) : (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)))))))) : (var_1_1 == ((double) var_1_6))) : 1) && (((((((var_1_6) > (var_1_1)) ? (var_1_6) : (var_1_1))) / ((((0.125) < (1.2)) ? (0.125) : (1.2)))) <= (var_1_10 - var_1_11)) ? (var_1_9 == ((double) var_1_6)) : (var_1_9 == ((double) var_1_8)))) && (var_1_29 ? (var_1_23 ? (var_1_12 == ((unsigned short int) var_1_13)) : (var_1_12 == ((unsigned short int) ((var_1_14 + (32135 - var_1_15)) - var_1_16)))) : 1)) && ((var_1_39 > (var_1_39 * var_1_15)) ? (var_1_23 ? (((var_1_13 <= var_1_12) || var_1_29) ? (var_1_17 == ((unsigned char) ((((var_1_19) < (var_1_20)) ? (var_1_19) : (var_1_20))))) : (var_1_17 == ((unsigned char) ((((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) < (var_1_20)) ? (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) : (var_1_20)))))) : (var_1_17 == ((unsigned char) (var_1_21 - var_1_22)))) : ((((100.5f - 1.5f) < var_1_10) && var_1_29) ? (var_1_17 == ((unsigned char) var_1_20)) : (var_1_17 == ((unsigned char) var_1_21))))) && ((((var_1_15 + var_1_21) - last_1_var_1_36) == ((var_1_22 * last_1_var_1_39) * last_1_var_1_39)) ? (var_1_23 == ((unsigned char) var_1_24)) : (var_1_23 == ((unsigned char) var_1_25)))) && (((var_1_21 < (var_1_27 - 16)) && var_1_29) ? ((-32 > var_1_13) ? (var_1_26 == ((unsigned char) (((((var_1_21 - var_1_22)) > (var_1_20)) ? ((var_1_21 - var_1_22)) : (var_1_20))))) : 1) : 1)) && (var_1_23 ? (var_1_28 == ((float) 255.9f)) : 1)) && (((- last_1_var_1_1) <= ((var_1_30 - var_1_31) - var_1_10)) ? (var_1_29 == ((unsigned char) var_1_25)) : 1)) && ((var_1_24 && (var_1_25 && var_1_29)) ? (var_1_32 == ((double) (var_1_33 + ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)))))) : 1)) && (((((((var_1_12 + var_1_20)) < ((var_1_37 - var_1_39))) ? ((var_1_12 + var_1_20)) : ((var_1_37 - var_1_39)))) != (var_1_39 + (var_1_26 % var_1_27))) ? (var_1_36 == ((signed long int) ((var_1_38 - var_1_26) - (1834204314 - var_1_21)))) : (var_1_36 == ((signed long int) ((((((((var_1_21) < (var_1_13)) ? (var_1_21) : (var_1_13)))) > (var_1_16)) ? (((((var_1_21) < (var_1_13)) ? (var_1_21) : (var_1_13)))) : (var_1_16))))))) && (((var_1_29 && (var_1_24 && var_1_25)) || var_1_23) ? (var_1_39 == ((unsigned long int) var_1_14)) : (var_1_39 == ((unsigned long int) ((((last_1_var_1_39) > (var_1_40)) ? (last_1_var_1_39) : (var_1_40))))))) && (((1 * var_1_13) < (var_1_39 + var_1_36)) ? (var_1_41 == ((float) var_1_34)) : 1)
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
