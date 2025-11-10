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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 256.8;
float var_1_4 = 3.5;
float var_1_5 = 99999.8;
float var_1_6 = 0.2;
float var_1_7 = 31.7;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
float var_1_11 = 25.75;
float var_1_12 = 128.875;
unsigned short int var_1_13 = 10;
signed char var_1_15 = 10;
signed long int var_1_17 = 2;
unsigned char var_1_18 = 4;
unsigned char var_1_19 = 16;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 128;
signed char var_1_22 = -32;
signed char var_1_23 = -10;
unsigned char var_1_24 = 16;
signed long int var_1_25 = -2;
unsigned short int var_1_26 = 8;
unsigned short int var_1_27 = 40267;
unsigned short int var_1_28 = 17133;
float var_1_29 = 7.25;
float var_1_30 = 49.6;
signed short int var_1_31 = 0;
unsigned char var_1_32 = 0;
double var_1_33 = 1000000000000.4;
double var_1_34 = 127.5;
unsigned char var_1_35 = 0;
unsigned short int var_1_36 = 8;
float var_1_37 = 3.8;
float var_1_38 = 100.25;
float var_1_39 = 256.75;
signed char var_1_40 = -1;
unsigned char var_1_41 = 1;
signed char var_1_42 = -5;
unsigned long int var_1_43 = 32;
signed long int var_1_44 = 5;
signed long int var_1_45 = -4;
signed char var_1_46 = 0;
unsigned short int var_1_47 = 10;
unsigned char var_1_48 = 1;
signed short int var_1_49 = -128;
signed short int var_1_50 = 2;
signed char var_1_51 = 16;
unsigned char var_1_52 = 8;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 32;
float var_1_56 = 32.1;
float var_1_57 = 15.4;
signed char var_1_58 = 64;
float var_1_59 = 8.6;
float var_1_60 = 63.5;
signed short int var_1_61 = -128;
unsigned short int var_1_62 = 10;
float last_1_var_1_1 = 256.8;
unsigned short int last_1_var_1_13 = 10;
unsigned short int last_1_var_1_26 = 8;
unsigned char last_1_var_1_32 = 0;
float last_1_var_1_37 = 3.8;
signed char last_1_var_1_40 = -1;
signed long int last_1_var_1_45 = -4;
unsigned short int last_1_var_1_47 = 10;
signed short int last_1_var_1_49 = -128;
signed short int last_1_var_1_50 = 2;
signed short int last_1_var_1_61 = -128;
unsigned short int last_1_var_1_62 = 10;
void initially(void) {
}
void step(void) {
 if ((last_1_var_1_37 / var_1_33) < (((((var_1_12) > (var_1_4)) ? (var_1_12) : (var_1_4))) - var_1_34)) {
  if (var_1_10 || (! var_1_9)) {
   var_1_32 = (! var_1_35);
  } else {
   if (var_1_19 >= last_1_var_1_47) {
    var_1_32 = var_1_35;
   }
  }
 }
 if (var_1_32) {
  var_1_47 = ((((var_1_19) < ((var_1_46 + var_1_20))) ? (var_1_19) : ((var_1_46 + var_1_20))));
 }
 if (var_1_12 <= ((var_1_4 * last_1_var_1_1) + var_1_6)) {
  var_1_25 = ((((last_1_var_1_62) < 0 ) ? -(last_1_var_1_62) : (last_1_var_1_62)));
 } else {
  if (last_1_var_1_32) {
   var_1_25 = ((((((((last_1_var_1_61) < (64)) ? (last_1_var_1_61) : (64)))) > (0)) ? (((((last_1_var_1_61) < (64)) ? (last_1_var_1_61) : (64)))) : (0)));
  } else {
   var_1_25 = var_1_23;
  }
 }
 signed char stepLocal_3 = var_1_15;
 signed long int stepLocal_2 = last_1_var_1_40;
 if (stepLocal_2 > last_1_var_1_50) {
  if (stepLocal_3 < last_1_var_1_13) {
   var_1_36 = ((var_1_28 + 32621) - (var_1_19 + last_1_var_1_45));
  }
 } else {
  var_1_36 = (((((var_1_27 - (var_1_15 + var_1_20))) > (last_1_var_1_13)) ? ((var_1_27 - (var_1_15 + var_1_20))) : (last_1_var_1_13)));
 }
 if (var_1_32) {
  var_1_11 = (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) - var_1_12);
 }
 if (var_1_32) {
  var_1_18 = (((((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))) < 0 ) ? -((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))) : ((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19)))));
 } else {
  var_1_18 = ((((((((var_1_19) < ((var_1_15 + var_1_20))) ? (var_1_19) : ((var_1_15 + var_1_20))))) < ((var_1_21 - 50))) ? (((((var_1_19) < ((var_1_15 + var_1_20))) ? (var_1_19) : ((var_1_15 + var_1_20))))) : ((var_1_21 - 50))));
 }
 var_1_22 = var_1_23;
 var_1_24 = var_1_21;
 if (((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < var_1_30) {
  if (! var_1_35) {
   var_1_37 = (var_1_6 + (var_1_38 - var_1_39));
  } else {
   var_1_37 = var_1_7;
  }
 } else {
  var_1_37 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 }
 if (var_1_32) {
  if ((- var_1_7) > (var_1_34 - var_1_4)) {
   var_1_40 = var_1_23;
  } else {
   var_1_40 = ((((var_1_23) > (var_1_42)) ? (var_1_23) : (var_1_42)));
  }
 }
 signed long int stepLocal_4 = (var_1_20 + var_1_47) / var_1_44;
 if (stepLocal_4 <= 4) {
  var_1_51 = var_1_46;
 }
 var_1_56 = (var_1_39 - var_1_12);
 if (var_1_35) {
  var_1_57 = ((((var_1_30) < ((((((var_1_38 + var_1_7)) < (var_1_6)) ? ((var_1_38 + var_1_7)) : (var_1_6))))) ? (var_1_30) : ((((((var_1_38 + var_1_7)) < (var_1_6)) ? ((var_1_38 + var_1_7)) : (var_1_6))))));
 }
 if (var_1_32) {
  var_1_58 = var_1_46;
 }
 if (var_1_32) {
  var_1_59 = var_1_6;
 } else {
  var_1_59 = var_1_60;
 }
 if (var_1_32) {
  var_1_61 = -1;
 } else {
  var_1_61 = var_1_24;
 }
 if (var_1_44 > (var_1_20 << ((((1) < (var_1_46)) ? (1) : (var_1_46))))) {
  var_1_45 = ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)));
 } else {
  if (var_1_4 != ((((var_1_39) > (var_1_6)) ? (var_1_39) : (var_1_6)))) {
   var_1_45 = ((((var_1_25) > (((((25) > (var_1_21)) ? (25) : (var_1_21))))) ? (var_1_25) : (((((25) > (var_1_21)) ? (25) : (var_1_21))))));
  } else {
   var_1_45 = (var_1_51 + (var_1_27 + (var_1_25 + var_1_23)));
  }
 }
 signed long int stepLocal_1 = var_1_25 + var_1_15;
 if (stepLocal_1 <= last_1_var_1_26) {
  var_1_26 = (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) - (var_1_28 - ((((var_1_61) < (var_1_19)) ? (var_1_61) : (var_1_19)))));
 } else {
  if (var_1_5 >= var_1_12) {
   var_1_26 = ((((var_1_21) < (var_1_19)) ? (var_1_21) : (var_1_19)));
  }
 }
 if (var_1_45 >= (- 10)) {
  var_1_31 = ((((var_1_45) < ((var_1_21 - 128))) ? (var_1_45) : ((var_1_21 - 128))));
 }
 if ((var_1_15 - var_1_46) >= var_1_42) {
  if ((- var_1_25) == var_1_45) {
   var_1_52 = (((((var_1_15 + ((((var_1_46) < (var_1_20)) ? (var_1_46) : (var_1_20))))) < ((var_1_54 + var_1_55))) ? ((var_1_15 + ((((var_1_46) < (var_1_20)) ? (var_1_46) : (var_1_20))))) : ((var_1_54 + var_1_55))));
  } else {
   if (! var_1_32) {
    var_1_52 = ((((var_1_15) > (var_1_19)) ? (var_1_15) : (var_1_19)));
   } else {
    if ((var_1_27 - var_1_54) == ((var_1_15 + var_1_21) << (16 - 2))) {
     var_1_52 = (var_1_46 + var_1_20);
    } else {
     var_1_52 = var_1_21;
    }
   }
  }
 } else {
  var_1_52 = (((((128 - var_1_15)) > (var_1_46)) ? ((128 - var_1_15)) : (var_1_46)));
 }
 unsigned char stepLocal_5 = var_1_41;
 if (var_1_60 != var_1_12) {
  var_1_62 = (((((((var_1_54) > (var_1_28)) ? (var_1_54) : (var_1_28))) < 0 ) ? -((((var_1_54) > (var_1_28)) ? (var_1_54) : (var_1_28))) : ((((var_1_54) > (var_1_28)) ? (var_1_54) : (var_1_28)))));
 } else {
  if (! var_1_35) {
   if (var_1_48 && stepLocal_5) {
    var_1_62 = var_1_52;
   } else {
    var_1_62 = var_1_54;
   }
  } else {
   var_1_62 = var_1_21;
  }
 }
 signed long int stepLocal_0 = (~ var_1_36) * (var_1_31 + var_1_15);
 if (var_1_32) {
  if (stepLocal_0 >= (((((64) > (var_1_17)) ? (64) : (var_1_17))) / ((((-50) < 0 ) ? -(-50) : (-50))))) {
   var_1_13 = var_1_15;
  } else {
   var_1_13 = 32;
  }
 } else {
  var_1_13 = var_1_15;
 }
 if (((var_1_27 & var_1_47) / (var_1_21 - 32)) <= ((var_1_26 - var_1_13) % ((((var_1_28) > (var_1_44)) ? (var_1_28) : (var_1_44))))) {
  var_1_43 = var_1_26;
 } else {
  var_1_43 = ((((var_1_27) < (128u)) ? (var_1_27) : (128u)));
 }
 if (var_1_20 == (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) & var_1_43)) {
  var_1_29 = ((0.5f - 99.875f) + var_1_6);
 } else {
  var_1_29 = (var_1_5 + var_1_30);
 }
 if (((var_1_27 - var_1_28) % var_1_21) > var_1_36) {
  if ((((((var_1_36) > (var_1_45)) ? (var_1_36) : (var_1_45))) - var_1_46) == var_1_22) {
   var_1_50 = ((((var_1_19) > (var_1_23)) ? (var_1_19) : (var_1_23)));
  }
 } else {
  if (! var_1_32) {
   if (var_1_36 <= var_1_43) {
    if (var_1_27 >= ((256 * var_1_45) * (54906 - var_1_45))) {
     var_1_50 = var_1_23;
    } else {
     var_1_50 = ((var_1_19 - var_1_21) + ((((var_1_15) < (var_1_42)) ? (var_1_15) : (var_1_42))));
    }
   } else {
    var_1_50 = ((((((var_1_45 - var_1_20) + ((((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42))))) > ((var_1_21 + var_1_22))) ? (((var_1_45 - var_1_20) + ((((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42))))) : ((var_1_21 + var_1_22))));
   }
  }
 }
 if (var_1_13 < 4) {
  var_1_49 = (((((last_1_var_1_49) > (var_1_20)) ? (last_1_var_1_49) : (var_1_20))) + var_1_13);
 }
 if (var_1_29 != var_1_37) {
  if (var_1_37 < (var_1_4 - 2.5f)) {
   var_1_1 = ((((9.5f) < ((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7))) ? (9.5f) : ((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7))));
  } else {
   var_1_1 = (var_1_7 + ((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (1.487f)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (1.487f))));
  }
 } else {
  if ((var_1_8 && var_1_9) || var_1_10) {
   var_1_1 = ((((var_1_7) < ((var_1_6 + var_1_5))) ? (var_1_7) : ((var_1_6 + var_1_5))));
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 32767);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 16383);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 assume_abort_if_not(var_1_33 != 0.0F);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -127);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_44 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_44 >= -2147483648);
 assume_abort_if_not(var_1_44 <= 2147483647);
 assume_abort_if_not(var_1_44 != 0);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 1);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 127);
 var_1_55 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 127);
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -922337.2036854766000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_45 = var_1_45;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_62 = var_1_62;
}
int property(void) {
 return (((((((((((((((((((((((((((var_1_29 != var_1_37) ? ((var_1_37 < (var_1_4 - 2.5f)) ? (var_1_1 == ((float) ((((9.5f) < ((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7))) ? (9.5f) : ((((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))) + var_1_7)))))) : (var_1_1 == ((float) (var_1_7 + ((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) > (1.487f)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (1.487f))))))) : (((var_1_8 && var_1_9) || var_1_10) ? (var_1_1 == ((float) ((((var_1_7) < ((var_1_6 + var_1_5))) ? (var_1_7) : ((var_1_6 + var_1_5)))))) : 1)) && (var_1_32 ? (var_1_11 == ((float) (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) - var_1_12))) : 1)) && (var_1_32 ? ((((~ var_1_36) * (var_1_31 + var_1_15)) >= (((((64) > (var_1_17)) ? (64) : (var_1_17))) / ((((-50) < 0 ) ? -(-50) : (-50))))) ? (var_1_13 == ((unsigned short int) var_1_15)) : (var_1_13 == ((unsigned short int) 32))) : (var_1_13 == ((unsigned short int) var_1_15)))) && (var_1_32 ? (var_1_18 == ((unsigned char) (((((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))) < 0 ) ? -((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))) : ((((var_1_15) < (var_1_19)) ? (var_1_15) : (var_1_19))))))) : (var_1_18 == ((unsigned char) ((((((((var_1_19) < ((var_1_15 + var_1_20))) ? (var_1_19) : ((var_1_15 + var_1_20))))) < ((var_1_21 - 50))) ? (((((var_1_19) < ((var_1_15 + var_1_20))) ? (var_1_19) : ((var_1_15 + var_1_20))))) : ((var_1_21 - 50)))))))) && (var_1_22 == ((signed char) var_1_23))) && (var_1_24 == ((unsigned char) var_1_21))) && ((var_1_12 <= ((var_1_4 * last_1_var_1_1) + var_1_6)) ? (var_1_25 == ((signed long int) ((((last_1_var_1_62) < 0 ) ? -(last_1_var_1_62) : (last_1_var_1_62))))) : (last_1_var_1_32 ? (var_1_25 == ((signed long int) ((((((((last_1_var_1_61) < (64)) ? (last_1_var_1_61) : (64)))) > (0)) ? (((((last_1_var_1_61) < (64)) ? (last_1_var_1_61) : (64)))) : (0))))) : (var_1_25 == ((signed long int) var_1_23))))) && (((var_1_25 + var_1_15) <= last_1_var_1_26) ? (var_1_26 == ((unsigned short int) (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) - (var_1_28 - ((((var_1_61) < (var_1_19)) ? (var_1_61) : (var_1_19))))))) : ((var_1_5 >= var_1_12) ? (var_1_26 == ((unsigned short int) ((((var_1_21) < (var_1_19)) ? (var_1_21) : (var_1_19))))) : 1))) && ((var_1_20 == (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) & var_1_43)) ? (var_1_29 == ((float) ((0.5f - 99.875f) + var_1_6))) : (var_1_29 == ((float) (var_1_5 + var_1_30))))) && ((var_1_45 >= (- 10)) ? (var_1_31 == ((signed short int) ((((var_1_45) < ((var_1_21 - 128))) ? (var_1_45) : ((var_1_21 - 128)))))) : 1)) && (((last_1_var_1_37 / var_1_33) < (((((var_1_12) > (var_1_4)) ? (var_1_12) : (var_1_4))) - var_1_34)) ? ((var_1_10 || (! var_1_9)) ? (var_1_32 == ((unsigned char) (! var_1_35))) : ((var_1_19 >= last_1_var_1_47) ? (var_1_32 == ((unsigned char) var_1_35)) : 1)) : 1)) && ((last_1_var_1_40 > last_1_var_1_50) ? ((var_1_15 < last_1_var_1_13) ? (var_1_36 == ((unsigned short int) ((var_1_28 + 32621) - (var_1_19 + last_1_var_1_45)))) : 1) : (var_1_36 == ((unsigned short int) (((((var_1_27 - (var_1_15 + var_1_20))) > (last_1_var_1_13)) ? ((var_1_27 - (var_1_15 + var_1_20))) : (last_1_var_1_13))))))) && ((((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) < var_1_30) ? ((! var_1_35) ? (var_1_37 == ((float) (var_1_6 + (var_1_38 - var_1_39)))) : (var_1_37 == ((float) var_1_7))) : (var_1_37 == ((float) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) && (var_1_32 ? (((- var_1_7) > (var_1_34 - var_1_4)) ? (var_1_40 == ((signed char) var_1_23)) : (var_1_40 == ((signed char) ((((var_1_23) > (var_1_42)) ? (var_1_23) : (var_1_42)))))) : 1)) && ((((var_1_27 & var_1_47) / (var_1_21 - 32)) <= ((var_1_26 - var_1_13) % ((((var_1_28) > (var_1_44)) ? (var_1_28) : (var_1_44))))) ? (var_1_43 == ((unsigned long int) var_1_26)) : (var_1_43 == ((unsigned long int) ((((var_1_27) < (128u)) ? (var_1_27) : (128u))))))) && ((var_1_44 > (var_1_20 << ((((1) < (var_1_46)) ? (1) : (var_1_46))))) ? (var_1_45 == ((signed long int) ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) : ((var_1_4 != ((((var_1_39) > (var_1_6)) ? (var_1_39) : (var_1_6)))) ? (var_1_45 == ((signed long int) ((((var_1_25) > (((((25) > (var_1_21)) ? (25) : (var_1_21))))) ? (var_1_25) : (((((25) > (var_1_21)) ? (25) : (var_1_21)))))))) : (var_1_45 == ((signed long int) (var_1_51 + (var_1_27 + (var_1_25 + var_1_23)))))))) && (var_1_32 ? (var_1_47 == ((unsigned short int) ((((var_1_19) < ((var_1_46 + var_1_20))) ? (var_1_19) : ((var_1_46 + var_1_20)))))) : 1)) && ((var_1_13 < 4) ? (var_1_49 == ((signed short int) (((((last_1_var_1_49) > (var_1_20)) ? (last_1_var_1_49) : (var_1_20))) + var_1_13))) : 1)) && ((((var_1_27 - var_1_28) % var_1_21) > var_1_36) ? (((((((var_1_36) > (var_1_45)) ? (var_1_36) : (var_1_45))) - var_1_46) == var_1_22) ? (var_1_50 == ((signed short int) ((((var_1_19) > (var_1_23)) ? (var_1_19) : (var_1_23))))) : 1) : ((! var_1_32) ? ((var_1_36 <= var_1_43) ? ((var_1_27 >= ((256 * var_1_45) * (54906 - var_1_45))) ? (var_1_50 == ((signed short int) var_1_23)) : (var_1_50 == ((signed short int) ((var_1_19 - var_1_21) + ((((var_1_15) < (var_1_42)) ? (var_1_15) : (var_1_42))))))) : (var_1_50 == ((signed short int) ((((((var_1_45 - var_1_20) + ((((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42))))) > ((var_1_21 + var_1_22))) ? (((var_1_45 - var_1_20) + ((((var_1_46) < (var_1_42)) ? (var_1_46) : (var_1_42))))) : ((var_1_21 + var_1_22))))))) : 1))) && ((((var_1_20 + var_1_47) / var_1_44) <= 4) ? (var_1_51 == ((signed char) var_1_46)) : 1)) && (((var_1_15 - var_1_46) >= var_1_42) ? (((- var_1_25) == var_1_45) ? (var_1_52 == ((unsigned char) (((((var_1_15 + ((((var_1_46) < (var_1_20)) ? (var_1_46) : (var_1_20))))) < ((var_1_54 + var_1_55))) ? ((var_1_15 + ((((var_1_46) < (var_1_20)) ? (var_1_46) : (var_1_20))))) : ((var_1_54 + var_1_55)))))) : ((! var_1_32) ? (var_1_52 == ((unsigned char) ((((var_1_15) > (var_1_19)) ? (var_1_15) : (var_1_19))))) : (((var_1_27 - var_1_54) == ((var_1_15 + var_1_21) << (16 - 2))) ? (var_1_52 == ((unsigned char) (var_1_46 + var_1_20))) : (var_1_52 == ((unsigned char) var_1_21))))) : (var_1_52 == ((unsigned char) (((((128 - var_1_15)) > (var_1_46)) ? ((128 - var_1_15)) : (var_1_46))))))) && (var_1_56 == ((float) (var_1_39 - var_1_12)))) && (var_1_35 ? (var_1_57 == ((float) ((((var_1_30) < ((((((var_1_38 + var_1_7)) < (var_1_6)) ? ((var_1_38 + var_1_7)) : (var_1_6))))) ? (var_1_30) : ((((((var_1_38 + var_1_7)) < (var_1_6)) ? ((var_1_38 + var_1_7)) : (var_1_6)))))))) : 1)) && (var_1_32 ? (var_1_58 == ((signed char) var_1_46)) : 1)) && (var_1_32 ? (var_1_59 == ((float) var_1_6)) : (var_1_59 == ((float) var_1_60)))) && (var_1_32 ? (var_1_61 == ((signed short int) -1)) : (var_1_61 == ((signed short int) var_1_24)))) && ((var_1_60 != var_1_12) ? (var_1_62 == ((unsigned short int) (((((((var_1_54) > (var_1_28)) ? (var_1_54) : (var_1_28))) < 0 ) ? -((((var_1_54) > (var_1_28)) ? (var_1_54) : (var_1_28))) : ((((var_1_54) > (var_1_28)) ? (var_1_54) : (var_1_28))))))) : ((! var_1_35) ? ((var_1_48 && var_1_41) ? (var_1_62 == ((unsigned short int) var_1_52)) : (var_1_62 == ((unsigned short int) var_1_54))) : (var_1_62 == ((unsigned short int) var_1_21))))
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
