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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
signed long int var_1_2 = 1;
signed long int var_1_3 = 4;
unsigned short int var_1_6 = 128;
signed long int var_1_7 = 16;
signed long int var_1_8 = -100;
signed long int var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = -256;
signed short int var_1_15 = 25;
float var_1_16 = 1.6;
unsigned char var_1_17 = 1;
float var_1_18 = 0.6;
float var_1_19 = 127.3;
float var_1_20 = 9.25;
unsigned long int var_1_21 = 2;
unsigned long int var_1_22 = 3230027761;
double var_1_23 = 128.35;
signed short int var_1_24 = -1;
signed short int var_1_25 = 32;
unsigned short int var_1_26 = 64;
unsigned short int var_1_27 = 10;
signed long int var_1_28 = 100;
signed long int var_1_29 = 128;
signed long int var_1_30 = -100;
unsigned char var_1_32 = 4;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 1;
signed long int var_1_37 = -500;
signed short int var_1_38 = 10;
unsigned short int var_1_39 = 0;
unsigned short int var_1_40 = 0;
signed long int last_1_var_1_7 = 16;
unsigned char last_1_var_1_10 = 0;
unsigned long int last_1_var_1_21 = 2;
signed long int last_1_var_1_28 = 100;
unsigned short int last_1_var_1_39 = 0;
void initially(void) {
}
void step(void) {
 if (! (last_1_var_1_39 > last_1_var_1_28)) {
  if (last_1_var_1_10) {
   var_1_13 = ((((var_1_15) < (64)) ? (var_1_15) : (64)));
  }
 }
 if (last_1_var_1_28 < (var_1_6 / var_1_8)) {
  var_1_7 = ((((var_1_6) > (((last_1_var_1_21 + 4) - var_1_9))) ? (var_1_6) : (((last_1_var_1_21 + 4) - var_1_9))));
 } else {
  var_1_7 = ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_21) < 0 ) ? -(((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_21) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_21)));
 }
 signed long int stepLocal_2 = ((((var_1_9 + var_1_8)) < (last_1_var_1_7)) ? ((var_1_9 + var_1_8)) : (last_1_var_1_7));
 signed long int stepLocal_1 = var_1_8 + var_1_2;
 if (last_1_var_1_28 == stepLocal_1) {
  if (stepLocal_2 >= 1000000000) {
   var_1_21 = (var_1_22 - var_1_9);
  }
 } else {
  var_1_21 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
 }
 if (last_1_var_1_10) {
  if (var_1_11) {
   var_1_10 = (! var_1_12);
  }
 }
 if (var_1_10 || var_1_12) {
  var_1_16 = ((((127.8f) > (((var_1_18 - var_1_19) + var_1_20))) ? (127.8f) : (((var_1_18 - var_1_19) + var_1_20))));
 }
 var_1_23 = ((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18)));
 var_1_24 = ((((var_1_15) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_15) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))));
 unsigned short int stepLocal_4 = var_1_27;
 signed long int stepLocal_3 = var_1_3;
 if (var_1_9 != stepLocal_3) {
  var_1_26 = (((((10) < (var_1_27)) ? (10) : (var_1_27))) + 25);
 } else {
  if (((var_1_21 & 64) % var_1_8) <= stepLocal_4) {
   var_1_26 = var_1_27;
  } else {
   var_1_26 = var_1_6;
  }
 }
 unsigned char stepLocal_5 = var_1_33;
 if (var_1_19 != var_1_18) {
  if (var_1_17 && stepLocal_5) {
   var_1_32 = (var_1_34 - (var_1_35 - var_1_36));
  } else {
   var_1_32 = 50;
  }
 }
 var_1_38 = var_1_15;
 var_1_39 = var_1_40;
 unsigned long int stepLocal_7 = var_1_21;
 unsigned long int stepLocal_6 = 4u;
 if (var_1_22 == stepLocal_6) {
  var_1_37 = var_1_6;
 } else {
  if (! (((((var_1_27) > (var_1_39)) ? (var_1_27) : (var_1_39))) > (var_1_30 % var_1_29))) {
   if (var_1_7 > stepLocal_7) {
    var_1_37 = ((((var_1_13) > (var_1_21)) ? (var_1_13) : (var_1_21)));
   } else {
    var_1_37 = var_1_34;
   }
  }
 }
 if (((last_1_var_1_28 / var_1_8) & var_1_9) >= (var_1_3 / ((((var_1_29) < (var_1_30)) ? (var_1_29) : (var_1_30))))) {
  if (! (var_1_13 >= var_1_21)) {
   var_1_28 = ((((last_1_var_1_28) < (4)) ? (last_1_var_1_28) : (4)));
  } else {
   if (var_1_21 > last_1_var_1_28) {
    var_1_28 = var_1_6;
   } else {
    var_1_28 = var_1_7;
   }
  }
 } else {
  var_1_28 = var_1_37;
 }
 signed long int stepLocal_0 = var_1_28;
 if ((var_1_2 - var_1_3) <= stepLocal_0) {
  if (var_1_10) {
   var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
  }
 } else {
  var_1_1 = var_1_6;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32767);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32766);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 assume_abort_if_not(var_1_29 != 0);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 assume_abort_if_not(var_1_30 != 0);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 63);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_39 = var_1_39;
}
int property(void) {
 return (((((((((((((((var_1_2 - var_1_3) <= var_1_28) ? (var_1_10 ? (var_1_1 == ((unsigned short int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : 1) : (var_1_1 == ((unsigned short int) var_1_6))) && ((last_1_var_1_28 < (var_1_6 / var_1_8)) ? (var_1_7 == ((signed long int) ((((var_1_6) > (((last_1_var_1_21 + 4) - var_1_9))) ? (var_1_6) : (((last_1_var_1_21 + 4) - var_1_9)))))) : (var_1_7 == ((signed long int) ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_21) < 0 ) ? -(((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_21) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))) - last_1_var_1_21))))))) && (last_1_var_1_10 ? (var_1_11 ? (var_1_10 == ((unsigned char) (! var_1_12))) : 1) : 1)) && ((! (last_1_var_1_39 > last_1_var_1_28)) ? (last_1_var_1_10 ? (var_1_13 == ((signed short int) ((((var_1_15) < (64)) ? (var_1_15) : (64))))) : 1) : 1)) && ((var_1_10 || var_1_12) ? (var_1_16 == ((float) ((((127.8f) > (((var_1_18 - var_1_19) + var_1_20))) ? (127.8f) : (((var_1_18 - var_1_19) + var_1_20)))))) : 1)) && ((last_1_var_1_28 == (var_1_8 + var_1_2)) ? (((((((var_1_9 + var_1_8)) < (last_1_var_1_7)) ? ((var_1_9 + var_1_8)) : (last_1_var_1_7))) >= 1000000000) ? (var_1_21 == ((unsigned long int) (var_1_22 - var_1_9))) : 1) : (var_1_21 == ((unsigned long int) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))) && (var_1_23 == ((double) ((((var_1_19) < (var_1_18)) ? (var_1_19) : (var_1_18)))))) && (var_1_24 == ((signed short int) ((((var_1_15) > (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))) ? (var_1_15) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))))))))) && ((var_1_9 != var_1_3) ? (var_1_26 == ((unsigned short int) (((((10) < (var_1_27)) ? (10) : (var_1_27))) + 25))) : ((((var_1_21 & 64) % var_1_8) <= var_1_27) ? (var_1_26 == ((unsigned short int) var_1_27)) : (var_1_26 == ((unsigned short int) var_1_6))))) && ((((last_1_var_1_28 / var_1_8) & var_1_9) >= (var_1_3 / ((((var_1_29) < (var_1_30)) ? (var_1_29) : (var_1_30))))) ? ((! (var_1_13 >= var_1_21)) ? (var_1_28 == ((signed long int) ((((last_1_var_1_28) < (4)) ? (last_1_var_1_28) : (4))))) : ((var_1_21 > last_1_var_1_28) ? (var_1_28 == ((signed long int) var_1_6)) : (var_1_28 == ((signed long int) var_1_7)))) : (var_1_28 == ((signed long int) var_1_37)))) && ((var_1_19 != var_1_18) ? ((var_1_17 && var_1_33) ? (var_1_32 == ((unsigned char) (var_1_34 - (var_1_35 - var_1_36)))) : (var_1_32 == ((unsigned char) 50))) : 1)) && ((var_1_22 == 4u) ? (var_1_37 == ((signed long int) var_1_6)) : ((! (((((var_1_27) > (var_1_39)) ? (var_1_27) : (var_1_39))) > (var_1_30 % var_1_29))) ? ((var_1_7 > var_1_21) ? (var_1_37 == ((signed long int) ((((var_1_13) > (var_1_21)) ? (var_1_13) : (var_1_21))))) : (var_1_37 == ((signed long int) var_1_34))) : 1))) && (var_1_38 == ((signed short int) var_1_15))) && (var_1_39 == ((unsigned short int) var_1_40))
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
