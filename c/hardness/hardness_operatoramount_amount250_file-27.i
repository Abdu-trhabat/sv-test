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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch27Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_3 = 25;
signed char var_1_4 = 10;
signed char var_1_5 = -10;
signed char var_1_6 = -1;
signed char var_1_7 = 0;
signed char var_1_8 = 8;
signed char var_1_9 = 32;
signed char var_1_10 = 32;
signed char var_1_11 = 2;
signed char var_1_12 = 2;
signed char var_1_13 = 1;
signed char var_1_14 = -1;
signed long int var_1_15 = 8;
float var_1_16 = 9999999.6;
float var_1_17 = 10.6;
signed long int var_1_19 = -2;
signed char var_1_21 = -32;
signed char var_1_23 = 8;
signed char var_1_24 = 1;
unsigned long int var_1_25 = 32;
unsigned char var_1_26 = 10;
unsigned char var_1_27 = 128;
unsigned short int var_1_28 = 0;
double var_1_29 = 25.6;
double var_1_30 = 7.75;
double var_1_31 = 1.85;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
signed long int var_1_35 = 50;
signed char var_1_36 = -2;
signed char var_1_37 = -32;
signed char var_1_38 = 5;
unsigned long int var_1_39 = 32;
unsigned char var_1_40 = 5;
unsigned short int var_1_41 = 4;
unsigned short int var_1_42 = 48215;
unsigned short int var_1_43 = 10;
unsigned short int var_1_44 = 1;
signed char var_1_45 = 0;
unsigned long int var_1_46 = 1524073358;
unsigned long int var_1_48 = 16;
unsigned long int var_1_49 = 3636503480;
unsigned long int var_1_50 = 10;
unsigned char var_1_51 = 10;
unsigned char var_1_52 = 128;
signed long int var_1_53 = -100;
float var_1_54 = 7.5;
float var_1_55 = 64.5;
float var_1_56 = 1.5;
float var_1_57 = 100000000000.375;
float var_1_58 = 24.525;
float var_1_59 = 0.875;
float var_1_60 = 0.1;
double var_1_61 = 127.5;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
signed long int last_1_var_1_15 = 8;
unsigned long int last_1_var_1_25 = 32;
signed char last_1_var_1_36 = -2;
unsigned short int last_1_var_1_41 = 4;
unsigned short int last_1_var_1_43 = 10;
signed long int last_1_var_1_53 = -100;
double last_1_var_1_61 = 127.5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_9 = var_1_9 / ((((var_1_10) < (var_1_27)) ? (var_1_10) : (var_1_27)));
 if ((var_1_4 * last_1_var_1_53) >= stepLocal_9) {
  var_1_39 = ((((last_1_var_1_43) > (var_1_12)) ? (last_1_var_1_43) : (var_1_12)));
 } else {
  var_1_39 = (((((var_1_27) > (var_1_11)) ? (var_1_27) : (var_1_11))) + last_1_var_1_25);
 }
 if ((- (var_1_31 * last_1_var_1_61)) < (var_1_16 + ((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))) {
  var_1_35 = (last_1_var_1_36 + last_1_var_1_15);
 }
 var_1_25 = ((((((((((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) < (var_1_7)) ? (((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) : (var_1_7)))) < (var_1_4)) ? (((((((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) < (var_1_7)) ? (((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) : (var_1_7)))) : (var_1_4)));
 var_1_40 = (var_1_9 + var_1_11);
 if (-16 <= last_1_var_1_41) {
  if (var_1_5 == var_1_4) {
   var_1_41 = ((((var_1_10) > (var_1_7)) ? (var_1_10) : (var_1_7)));
  }
 } else {
  var_1_41 = (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) - var_1_10);
 }
 signed long int stepLocal_10 = ~ var_1_9;
 if (stepLocal_10 >= var_1_14) {
  var_1_44 = (var_1_42 - var_1_4);
 }
 if ((- var_1_40) > var_1_10) {
  if (! var_1_34) {
   var_1_51 = (((((var_1_27) > (var_1_52)) ? (var_1_27) : (var_1_52))) - var_1_9);
  } else {
   var_1_51 = var_1_10;
  }
 }
 var_1_61 = var_1_56;
 var_1_62 = var_1_63;
 unsigned long int stepLocal_12 = var_1_39;
 signed char stepLocal_11 = var_1_23;
 if (var_1_14 <= stepLocal_12) {
  var_1_48 = (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + var_1_10);
 } else {
  if (var_1_3 <= stepLocal_11) {
   var_1_48 = (var_1_49 - ((((var_1_46 - var_1_10) < 0 ) ? -(var_1_46 - var_1_10) : (var_1_46 - var_1_10))));
  } else {
   var_1_48 = ((((var_1_50) > (var_1_39)) ? (var_1_50) : (var_1_39)));
  }
 }
 unsigned long int stepLocal_14 = var_1_25;
 signed char stepLocal_13 = var_1_23;
 if (var_1_27 >= stepLocal_14) {
  var_1_53 = ((last_1_var_1_53 + var_1_5) + var_1_10);
 } else {
  if (-16 <= stepLocal_13) {
   var_1_53 = (var_1_39 - var_1_11);
  } else {
   var_1_53 = ((((var_1_42) < (last_1_var_1_53)) ? (var_1_42) : (last_1_var_1_53)));
  }
 }
 signed long int stepLocal_0 = -16;
 if (! (! var_1_62)) {
  var_1_1 = ((((((var_1_3 - var_1_4)) > (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))) + var_1_6);
 } else {
  if (var_1_5 > stepLocal_0) {
   var_1_1 = (var_1_6 + var_1_4);
  } else {
   var_1_1 = ((((var_1_4) > ((var_1_3 - var_1_7))) ? (var_1_4) : ((var_1_3 - var_1_7))));
  }
 }
 if (((var_1_4 * var_1_41) + ((((5) > (var_1_6)) ? (5) : (var_1_6)))) > var_1_5) {
  if (! var_1_62) {
   var_1_8 = (((var_1_9 + var_1_10) - (var_1_11 + var_1_12)) - 16);
  } else {
   var_1_8 = (var_1_5 + (((((var_1_12 + var_1_13)) < ((var_1_11 + var_1_14))) ? ((var_1_12 + var_1_13)) : ((var_1_11 + var_1_14)))));
  }
 } else {
  var_1_8 = (var_1_6 + var_1_5);
 }
 if (var_1_62) {
  var_1_33 = (! var_1_34);
 }
 unsigned char stepLocal_8 = var_1_33;
 if (var_1_62 || stepLocal_8) {
  var_1_36 = ((((((((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6)))) > ((((((var_1_11 + var_1_37)) < ((var_1_12 + var_1_13))) ? ((var_1_11 + var_1_37)) : ((var_1_12 + var_1_13)))))) ? (((((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6)))) : ((((((var_1_11 + var_1_37)) < ((var_1_12 + var_1_13))) ? ((var_1_11 + var_1_37)) : ((var_1_12 + var_1_13)))))));
 } else {
  if (! (var_1_37 < var_1_39)) {
   var_1_36 = (var_1_38 + var_1_9);
  }
 }
 unsigned long int stepLocal_16 = (((var_1_49 / var_1_42) < 0 ) ? -(var_1_49 / var_1_42) : (var_1_49 / var_1_42));
 unsigned char stepLocal_15 = var_1_33 || var_1_34;
 if (stepLocal_15 && var_1_62) {
  if (var_1_62) {
   if (stepLocal_16 >= var_1_3) {
    if (49.3 <= var_1_30) {
     var_1_54 = (var_1_55 - var_1_56);
    } else {
     var_1_54 = var_1_30;
    }
   } else {
    var_1_54 = var_1_55;
   }
  } else {
   var_1_54 = var_1_30;
  }
 } else {
  var_1_54 = 100.6f;
 }
 unsigned char stepLocal_17 = var_1_34;
 if (stepLocal_17 && var_1_33) {
  var_1_57 = ((var_1_58 - var_1_59) + var_1_60);
 }
 if (var_1_48 != (var_1_7 | var_1_27)) {
  var_1_43 = var_1_10;
 }
 unsigned char stepLocal_6 = var_1_33;
 if (stepLocal_6 && (var_1_44 < var_1_10)) {
  var_1_28 = var_1_35;
 } else {
  var_1_28 = ((((var_1_9 + 128) < 0 ) ? -(var_1_9 + 128) : (var_1_9 + 128)));
 }
 unsigned short int stepLocal_7 = var_1_28;
 if (var_1_61 < var_1_17) {
  var_1_29 = ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)));
 } else {
  if (stepLocal_7 > (var_1_11 ^ var_1_35)) {
   var_1_29 = ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)));
  } else {
   var_1_29 = var_1_31;
  }
 }
 if (((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) > -50) {
  if (var_1_33) {
   var_1_24 = (var_1_13 + var_1_3);
  } else {
   var_1_24 = (((((((((((var_1_3) < (1)) ? (var_1_3) : (1)))) < (var_1_7)) ? (((((var_1_3) < (1)) ? (var_1_3) : (1)))) : (var_1_7))) < 0 ) ? -((((((((var_1_3) < (1)) ? (var_1_3) : (1)))) < (var_1_7)) ? (((((var_1_3) < (1)) ? (var_1_3) : (1)))) : (var_1_7))) : ((((((((var_1_3) < (1)) ? (var_1_3) : (1)))) < (var_1_7)) ? (((((var_1_3) < (1)) ? (var_1_3) : (1)))) : (var_1_7)))));
  }
 } else {
  if (var_1_62) {
   var_1_24 = ((var_1_11 + var_1_13) + (var_1_10 - var_1_3));
  }
 }
 if (! (var_1_24 >= var_1_7)) {
  var_1_26 = (var_1_27 - var_1_11);
 }
 if ((var_1_39 + var_1_44) < ((var_1_25 / var_1_9) | var_1_42)) {
  if (var_1_29 <= ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) {
   if (var_1_33) {
    var_1_45 = ((var_1_14 + var_1_13) + ((((var_1_9) > (var_1_6)) ? (var_1_9) : (var_1_6))));
   } else {
    if (var_1_39 <= ((var_1_38 * var_1_35) * var_1_37)) {
     var_1_45 = (var_1_4 + (var_1_3 - var_1_12));
    } else {
     var_1_45 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
    }
   }
  }
 } else {
  var_1_45 = (var_1_9 - var_1_12);
 }
 unsigned char stepLocal_1 = (var_1_4 * var_1_3) <= var_1_6;
 if ((var_1_16 - var_1_17) != var_1_29) {
  if (var_1_33) {
   var_1_15 = ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19)));
  } else {
   var_1_15 = ((((((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + ((((var_1_10) > (1)) ? (var_1_10) : (1)))) < 0 ) ? -(((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + ((((var_1_10) > (1)) ? (var_1_10) : (1)))) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + ((((var_1_10) > (1)) ? (var_1_10) : (1))))));
  }
 } else {
  if (stepLocal_1 && var_1_33) {
   if (var_1_33) {
    var_1_15 = 0;
   }
  }
 }
 signed long int stepLocal_5 = var_1_4 & 0;
 signed char stepLocal_4 = var_1_12;
 signed char stepLocal_3 = var_1_7;
 unsigned char stepLocal_2 = var_1_26;
 if (var_1_39 >= stepLocal_3) {
  if (var_1_62) {
   if (var_1_33) {
    var_1_21 = (var_1_12 + (var_1_10 - var_1_11));
   } else {
    var_1_21 = ((((var_1_23) < (var_1_13)) ? (var_1_23) : (var_1_13)));
   }
  } else {
   if (stepLocal_2 > var_1_4) {
    if (stepLocal_5 == var_1_45) {
     var_1_21 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
    } else {
     var_1_21 = (var_1_10 + (var_1_11 + var_1_14));
    }
   } else {
    if (stepLocal_4 <= (var_1_39 + var_1_15)) {
     var_1_21 = (((((var_1_7) < (var_1_3)) ? (var_1_7) : (var_1_3))) - var_1_12);
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 31);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 31);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 31);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -31);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -31);
 assume_abort_if_not(var_1_14 <= 31);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483647);
 assume_abort_if_not(var_1_19 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -63);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -63);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 32767);
 assume_abort_if_not(var_1_42 <= 65534);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 1073741823);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 2147483647);
 assume_abort_if_not(var_1_49 <= 4294967294);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 127);
 assume_abort_if_not(var_1_52 <= 254);
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854766000e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854766000e+12F && var_1_56 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_59 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_60 >= -461168.6018427383000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427383000e+12F && var_1_60 >= 1.0e-20F ));
 var_1_63 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_63 >= 1);
 assume_abort_if_not(var_1_63 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return (((((((((((((((((((((((((! (! var_1_62)) ? (var_1_1 == ((signed char) ((((((var_1_3 - var_1_4)) > (var_1_5)) ? ((var_1_3 - var_1_4)) : (var_1_5))) + var_1_6))) : ((var_1_5 > -16) ? (var_1_1 == ((signed char) (var_1_6 + var_1_4))) : (var_1_1 == ((signed char) ((((var_1_4) > ((var_1_3 - var_1_7))) ? (var_1_4) : ((var_1_3 - var_1_7)))))))) && ((((var_1_4 * var_1_41) + ((((5) > (var_1_6)) ? (5) : (var_1_6)))) > var_1_5) ? ((! var_1_62) ? (var_1_8 == ((signed char) (((var_1_9 + var_1_10) - (var_1_11 + var_1_12)) - 16))) : (var_1_8 == ((signed char) (var_1_5 + (((((var_1_12 + var_1_13)) < ((var_1_11 + var_1_14))) ? ((var_1_12 + var_1_13)) : ((var_1_11 + var_1_14)))))))) : (var_1_8 == ((signed char) (var_1_6 + var_1_5))))) && (((var_1_16 - var_1_17) != var_1_29) ? (var_1_33 ? (var_1_15 == ((signed long int) ((((var_1_13) > (var_1_19)) ? (var_1_13) : (var_1_19))))) : (var_1_15 == ((signed long int) ((((((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + ((((var_1_10) > (1)) ? (var_1_10) : (1)))) < 0 ) ? -(((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + ((((var_1_10) > (1)) ? (var_1_10) : (1)))) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + ((((var_1_10) > (1)) ? (var_1_10) : (1))))))))) : ((((var_1_4 * var_1_3) <= var_1_6) && var_1_33) ? (var_1_33 ? (var_1_15 == ((signed long int) 0)) : 1) : 1))) && ((var_1_39 >= var_1_7) ? (var_1_62 ? (var_1_33 ? (var_1_21 == ((signed char) (var_1_12 + (var_1_10 - var_1_11)))) : (var_1_21 == ((signed char) ((((var_1_23) < (var_1_13)) ? (var_1_23) : (var_1_13)))))) : ((var_1_26 > var_1_4) ? (((var_1_4 & 0) == var_1_45) ? (var_1_21 == ((signed char) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : (var_1_21 == ((signed char) (var_1_10 + (var_1_11 + var_1_14))))) : ((var_1_12 <= (var_1_39 + var_1_15)) ? (var_1_21 == ((signed char) (((((var_1_7) < (var_1_3)) ? (var_1_7) : (var_1_3))) - var_1_12))) : 1))) : 1)) && ((((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51))) > -50) ? (var_1_33 ? (var_1_24 == ((signed char) (var_1_13 + var_1_3))) : (var_1_24 == ((signed char) (((((((((((var_1_3) < (1)) ? (var_1_3) : (1)))) < (var_1_7)) ? (((((var_1_3) < (1)) ? (var_1_3) : (1)))) : (var_1_7))) < 0 ) ? -((((((((var_1_3) < (1)) ? (var_1_3) : (1)))) < (var_1_7)) ? (((((var_1_3) < (1)) ? (var_1_3) : (1)))) : (var_1_7))) : ((((((((var_1_3) < (1)) ? (var_1_3) : (1)))) < (var_1_7)) ? (((((var_1_3) < (1)) ? (var_1_3) : (1)))) : (var_1_7)))))))) : (var_1_62 ? (var_1_24 == ((signed char) ((var_1_11 + var_1_13) + (var_1_10 - var_1_3)))) : 1))) && (var_1_25 == ((unsigned long int) ((((((((((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) < (var_1_7)) ? (((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) : (var_1_7)))) < (var_1_4)) ? (((((((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) < (var_1_7)) ? (((((var_1_11) < (var_1_10)) ? (var_1_11) : (var_1_10)))) : (var_1_7)))) : (var_1_4)))))) && ((! (var_1_24 >= var_1_7)) ? (var_1_26 == ((unsigned char) (var_1_27 - var_1_11))) : 1)) && ((var_1_33 && (var_1_44 < var_1_10)) ? (var_1_28 == ((unsigned short int) var_1_35)) : (var_1_28 == ((unsigned short int) ((((var_1_9 + 128) < 0 ) ? -(var_1_9 + 128) : (var_1_9 + 128))))))) && ((var_1_61 < var_1_17) ? (var_1_29 == ((double) ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31))))) : ((var_1_28 > (var_1_11 ^ var_1_35)) ? (var_1_29 == ((double) ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))) : (var_1_29 == ((double) var_1_31))))) && (var_1_62 ? (var_1_33 == ((unsigned char) (! var_1_34))) : 1)) && (((- (var_1_31 * last_1_var_1_61)) < (var_1_16 + ((((var_1_30) < (var_1_17)) ? (var_1_30) : (var_1_17))))) ? (var_1_35 == ((signed long int) (last_1_var_1_36 + last_1_var_1_15))) : 1)) && ((var_1_62 || var_1_33) ? (var_1_36 == ((signed char) ((((((((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6)))) > ((((((var_1_11 + var_1_37)) < ((var_1_12 + var_1_13))) ? ((var_1_11 + var_1_37)) : ((var_1_12 + var_1_13)))))) ? (((((var_1_10) > (var_1_6)) ? (var_1_10) : (var_1_6)))) : ((((((var_1_11 + var_1_37)) < ((var_1_12 + var_1_13))) ? ((var_1_11 + var_1_37)) : ((var_1_12 + var_1_13))))))))) : ((! (var_1_37 < var_1_39)) ? (var_1_36 == ((signed char) (var_1_38 + var_1_9))) : 1))) && (((var_1_4 * last_1_var_1_53) >= (var_1_9 / ((((var_1_10) < (var_1_27)) ? (var_1_10) : (var_1_27))))) ? (var_1_39 == ((unsigned long int) ((((last_1_var_1_43) > (var_1_12)) ? (last_1_var_1_43) : (var_1_12))))) : (var_1_39 == ((unsigned long int) (((((var_1_27) > (var_1_11)) ? (var_1_27) : (var_1_11))) + last_1_var_1_25))))) && (var_1_40 == ((unsigned char) (var_1_9 + var_1_11)))) && ((-16 <= last_1_var_1_41) ? ((var_1_5 == var_1_4) ? (var_1_41 == ((unsigned short int) ((((var_1_10) > (var_1_7)) ? (var_1_10) : (var_1_7))))) : 1) : (var_1_41 == ((unsigned short int) (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) - var_1_10))))) && ((var_1_48 != (var_1_7 | var_1_27)) ? (var_1_43 == ((unsigned short int) var_1_10)) : 1)) && (((~ var_1_9) >= var_1_14) ? (var_1_44 == ((unsigned short int) (var_1_42 - var_1_4))) : 1)) && (((var_1_39 + var_1_44) < ((var_1_25 / var_1_9) | var_1_42)) ? ((var_1_29 <= ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))) ? (var_1_33 ? (var_1_45 == ((signed char) ((var_1_14 + var_1_13) + ((((var_1_9) > (var_1_6)) ? (var_1_9) : (var_1_6)))))) : ((var_1_39 <= ((var_1_38 * var_1_35) * var_1_37)) ? (var_1_45 == ((signed char) (var_1_4 + (var_1_3 - var_1_12)))) : (var_1_45 == ((signed char) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))))) : 1) : (var_1_45 == ((signed char) (var_1_9 - var_1_12))))) && ((var_1_14 <= var_1_39) ? (var_1_48 == ((unsigned long int) (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) + var_1_10))) : ((var_1_3 <= var_1_23) ? (var_1_48 == ((unsigned long int) (var_1_49 - ((((var_1_46 - var_1_10) < 0 ) ? -(var_1_46 - var_1_10) : (var_1_46 - var_1_10)))))) : (var_1_48 == ((unsigned long int) ((((var_1_50) > (var_1_39)) ? (var_1_50) : (var_1_39)))))))) && (((- var_1_40) > var_1_10) ? ((! var_1_34) ? (var_1_51 == ((unsigned char) (((((var_1_27) > (var_1_52)) ? (var_1_27) : (var_1_52))) - var_1_9))) : (var_1_51 == ((unsigned char) var_1_10))) : 1)) && ((var_1_27 >= var_1_25) ? (var_1_53 == ((signed long int) ((last_1_var_1_53 + var_1_5) + var_1_10))) : ((-16 <= var_1_23) ? (var_1_53 == ((signed long int) (var_1_39 - var_1_11))) : (var_1_53 == ((signed long int) ((((var_1_42) < (last_1_var_1_53)) ? (var_1_42) : (last_1_var_1_53)))))))) && (((var_1_33 || var_1_34) && var_1_62) ? (var_1_62 ? ((((((var_1_49 / var_1_42) < 0 ) ? -(var_1_49 / var_1_42) : (var_1_49 / var_1_42))) >= var_1_3) ? ((49.3 <= var_1_30) ? (var_1_54 == ((float) (var_1_55 - var_1_56))) : (var_1_54 == ((float) var_1_30))) : (var_1_54 == ((float) var_1_55))) : (var_1_54 == ((float) var_1_30))) : (var_1_54 == ((float) 100.6f)))) && ((var_1_34 && var_1_33) ? (var_1_57 == ((float) ((var_1_58 - var_1_59) + var_1_60))) : 1)) && (var_1_61 == ((double) var_1_56))) && (var_1_62 == ((unsigned char) var_1_63))
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
