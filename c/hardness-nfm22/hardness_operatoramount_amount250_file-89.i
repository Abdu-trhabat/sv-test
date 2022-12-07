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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned long int var_1_1 = 128;
unsigned long int var_1_5 = 2082256544;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 1832746635;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
float var_1_13 = 9.5;
float var_1_14 = 100.75;
float var_1_15 = 7.4;
float var_1_16 = 10.625;
unsigned long int var_1_17 = 4;
unsigned long int var_1_19 = 2305451248;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 8;
unsigned char var_1_22 = 64;
unsigned char var_1_23 = 0;
signed char var_1_24 = -25;
signed char var_1_25 = 32;
signed char var_1_26 = 2;
float var_1_27 = 7.75;
float var_1_28 = 5.8;
signed char var_1_29 = -5;
signed char var_1_30 = 50;
signed char var_1_31 = 8;
signed char var_1_32 = 50;
double var_1_33 = -0.75;
double var_1_34 = 4.1;
double var_1_35 = 127.35;
float var_1_36 = 0.19999999999999996;
signed char var_1_37 = -2;
unsigned char var_1_38 = 16;
unsigned char var_1_40 = 25;
double var_1_41 = 9999999.025;
unsigned char var_1_42 = 0;
signed long int var_1_43 = 2;
signed char var_1_44 = -4;
signed short int var_1_45 = -10;
signed char var_1_46 = 50;
signed char var_1_47 = 50;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 0;
signed char var_1_51 = -8;
unsigned char var_1_52 = 0;
unsigned long int last_1_var_1_1 = 128;
unsigned long int last_1_var_1_17 = 4;
unsigned char last_1_var_1_20 = 32;
signed char last_1_var_1_24 = -25;
signed char last_1_var_1_37 = -2;
unsigned char last_1_var_1_38 = 16;
unsigned char last_1_var_1_42 = 0;
signed long int last_1_var_1_43 = 2;
signed char last_1_var_1_44 = -4;
signed char last_1_var_1_46 = 50;
unsigned char last_1_var_1_48 = 1;
signed char last_1_var_1_51 = -8;
unsigned char last_1_var_1_52 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_17 = last_1_var_1_37;
 if (! var_1_11) {
  var_1_52 = ((((var_1_40) < (((((var_1_32) < (var_1_23)) ? (var_1_32) : (var_1_23))))) ? (var_1_40) : (((((var_1_32) < (var_1_23)) ? (var_1_32) : (var_1_23))))));
 } else {
  if (last_1_var_1_37 < stepLocal_17) {
   var_1_52 = var_1_31;
  } else {
   var_1_52 = var_1_21;
  }
 }
 signed long int stepLocal_16 = last_1_var_1_20;
 if (var_1_49) {
  if (last_1_var_1_24 <= stepLocal_16) {
   if (! (var_1_7 <= last_1_var_1_46)) {
    var_1_51 = var_1_26;
   } else {
    var_1_51 = var_1_47;
   }
  } else {
   var_1_51 = var_1_31;
  }
 } else {
  var_1_51 = var_1_47;
 }
 if (var_1_31 >= (var_1_26 * last_1_var_1_52)) {
  if ((((((var_1_22) > (var_1_30)) ? (var_1_22) : (var_1_30))) << last_1_var_1_52) != (last_1_var_1_51 + last_1_var_1_38)) {
   var_1_38 = var_1_23;
  }
 } else {
  if (last_1_var_1_38 > var_1_29) {
   if (last_1_var_1_42 && var_1_12) {
    var_1_38 = ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)));
   }
  } else {
   var_1_38 = (((((var_1_21 + (100 - var_1_30))) < (var_1_23)) ? ((var_1_21 + (100 - var_1_30))) : (var_1_23)));
  }
 }
 if ((var_1_11 || (var_1_14 > 15.3f)) || (last_1_var_1_1 == (8u >> last_1_var_1_20))) {
  if (last_1_var_1_20 > last_1_var_1_1) {
   var_1_20 = (((((32 + var_1_21)) > ((var_1_22 + (var_1_23 + 4)))) ? ((32 + var_1_21)) : ((var_1_22 + (var_1_23 + 4)))));
  }
 } else {
  if (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) == last_1_var_1_20) {
   if ((- last_1_var_1_51) < last_1_var_1_20) {
    var_1_20 = var_1_21;
   } else {
    var_1_20 = var_1_21;
   }
  } else {
   var_1_20 = var_1_22;
  }
 }
 unsigned long int stepLocal_12 = last_1_var_1_43 / var_1_19;
 unsigned char stepLocal_11 = last_1_var_1_48;
 if ((5u << var_1_7) == stepLocal_12) {
  var_1_42 = (! var_1_12);
 } else {
  if (stepLocal_11 && var_1_12) {
   var_1_42 = var_1_11;
  } else {
   var_1_42 = 1;
  }
 }
 unsigned long int stepLocal_2 = var_1_5;
 unsigned char stepLocal_1 = var_1_5 < var_1_38;
 if (var_1_38 > stepLocal_2) {
  if (stepLocal_1 || var_1_42) {
   var_1_6 = (((var_1_7 + 1924803778u) - ((((var_1_38) > (var_1_38)) ? (var_1_38) : (var_1_38)))) - var_1_5);
  }
 }
 if (! var_1_12) {
  var_1_33 = ((var_1_34 - var_1_35) + 7.5);
 }
 if (var_1_12) {
  var_1_41 = (((((4.375 + var_1_15)) > (var_1_14)) ? ((4.375 + var_1_15)) : (var_1_14)));
 }
 var_1_48 = (var_1_49 || var_1_50);
 if (! (((((var_1_7) > (var_1_52)) ? (var_1_7) : (var_1_52))) > (var_1_31 | var_1_52))) {
  if ((var_1_27 - var_1_28) > var_1_15) {
   var_1_37 = ((((var_1_25) > (var_1_29)) ? (var_1_25) : (var_1_29)));
  } else {
   if (var_1_42) {
    var_1_37 = (((((var_1_32) > (var_1_31)) ? (var_1_32) : (var_1_31))) - var_1_30);
   } else {
    var_1_37 = (var_1_30 + ((((var_1_32) > (var_1_31)) ? (var_1_32) : (var_1_31))));
   }
  }
 }
 signed char stepLocal_0 = var_1_51;
 if (var_1_51 != stepLocal_0) {
  if (var_1_42) {
   var_1_1 = ((var_1_5 + 1668503833u) - (50u + 256u));
  }
 }
 if ((last_1_var_1_17 >= var_1_38) && (((((-2) < (var_1_5)) ? (-2) : (var_1_5))) < var_1_52)) {
  var_1_17 = (var_1_5 + (var_1_20 + ((((var_1_38) < (var_1_52)) ? (var_1_38) : (var_1_52)))));
 } else {
  if (var_1_33 == var_1_16) {
   if (var_1_48) {
    var_1_17 = (((((var_1_19) < ((var_1_5 + var_1_7))) ? (var_1_19) : ((var_1_5 + var_1_7)))) - 256u);
   }
  } else {
   var_1_17 = (var_1_52 + (((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5))) - var_1_38));
  }
 }
 unsigned char stepLocal_3 = var_1_42;
 if ((var_1_7 > var_1_20) && stepLocal_3) {
  var_1_10 = (var_1_11 && var_1_12);
 }
 signed long int stepLocal_10 = var_1_25 + var_1_52;
 unsigned long int stepLocal_9 = var_1_19 - var_1_23;
 unsigned char stepLocal_8 = var_1_10;
 unsigned char stepLocal_7 = var_1_20;
 if (var_1_32 > stepLocal_10) {
  if (var_1_20 <= stepLocal_9) {
   if (var_1_26 < stepLocal_7) {
    var_1_36 = ((((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) > (var_1_35)) ? (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) : (var_1_35)));
   }
  }
 } else {
  if (var_1_11 && stepLocal_8) {
   var_1_36 = var_1_14;
  } else {
   var_1_36 = var_1_14;
  }
 }
 if (var_1_1 <= (var_1_38 + var_1_19)) {
  var_1_45 = (-1 + var_1_26);
 }
 unsigned char stepLocal_15 = var_1_38;
 unsigned char stepLocal_14 = var_1_10;
 if (((var_1_38 > var_1_38) && var_1_10) || stepLocal_14) {
  if (var_1_34 >= 63.75) {
   if (var_1_1 <= stepLocal_15) {
    var_1_46 = var_1_30;
   } else {
    var_1_46 = ((var_1_30 + (var_1_47 - 16)) - var_1_32);
   }
  } else {
   var_1_46 = (var_1_32 - var_1_23);
  }
 }
 signed long int stepLocal_4 = -500;
 if (stepLocal_4 >= (var_1_17 * (var_1_52 ^ var_1_7))) {
  var_1_13 = (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_15);
 } else {
  var_1_13 = ((((var_1_15 + var_1_16) < 0 ) ? -(var_1_15 + var_1_16) : (var_1_15 + var_1_16)));
 }
 unsigned char stepLocal_6 = var_1_11;
 unsigned long int stepLocal_5 = (var_1_37 % var_1_5) + var_1_38;
 if (! var_1_11) {
  if (var_1_12 && stepLocal_6) {
   var_1_24 = ((((var_1_23) < (var_1_25)) ? (var_1_23) : (var_1_25)));
  } else {
   if (stepLocal_5 != var_1_52) {
    var_1_24 = (((((var_1_23 - var_1_26)) > (var_1_25)) ? ((var_1_23 - var_1_26)) : (var_1_25)));
   } else {
    var_1_24 = 25;
   }
  }
 } else {
  if ((((((var_1_27 - var_1_28)) > (var_1_16)) ? ((var_1_27 - var_1_28)) : (var_1_16))) > var_1_13) {
   if (var_1_15 < ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) {
    var_1_24 = (var_1_29 + (((((25) < (var_1_30)) ? (25) : (var_1_30))) - var_1_31));
   } else {
    var_1_24 = ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)));
   }
  } else {
   var_1_24 = (var_1_30 - (var_1_31 + var_1_32));
  }
 }
 unsigned char stepLocal_13 = var_1_32 < var_1_24;
 if (var_1_11 && stepLocal_13) {
  if (! var_1_42) {
   var_1_43 = ((((var_1_32) > (var_1_25)) ? (var_1_32) : (var_1_25)));
  }
 }
 if (! ((var_1_19 - var_1_31) > var_1_43)) {
  var_1_44 = (var_1_30 + (((((var_1_32 - var_1_31)) > (var_1_29)) ? ((var_1_32 - var_1_31)) : (var_1_29))));
 } else {
  if (var_1_30 < (((((var_1_32) < (last_1_var_1_44)) ? (var_1_32) : (last_1_var_1_44))) * 32)) {
   if (var_1_12) {
    if (var_1_20 > var_1_21) {
     if (var_1_42 && (var_1_17 == 10u)) {
      var_1_44 = (((((var_1_30 + 5)) < ((var_1_31 - (1 + var_1_32)))) ? ((var_1_30 + 5)) : ((var_1_31 - (1 + var_1_32)))));
     }
    } else {
     var_1_44 = ((((var_1_25) < (((((var_1_29) < (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26))))) ? (var_1_29) : (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26)))))))) ? (var_1_25) : (((((var_1_29) < (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26))))) ? (var_1_29) : (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26)))))))));
    }
   }
  } else {
   var_1_44 = (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) + var_1_29);
  }
 }
}
void updateVariables() {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 1073741823);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1610612735);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 64);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -127);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -63);
 assume_abort_if_not(var_1_29 <= 63);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 63);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 31);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_42 = var_1_42;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_52 = var_1_52;
}
int property() {
 return ((((((((((((((((((((var_1_51 != var_1_51) ? (var_1_42 ? (var_1_1 == ((unsigned long int) ((var_1_5 + 1668503833u) - (50u + 256u)))) : 1) : 1) && ((var_1_38 > var_1_5) ? (((var_1_5 < var_1_38) || var_1_42) ? (var_1_6 == ((unsigned long int) (((var_1_7 + 1924803778u) - ((((var_1_38) > (var_1_38)) ? (var_1_38) : (var_1_38)))) - var_1_5))) : 1) : 1)) && (((var_1_7 > var_1_20) && var_1_42) ? (var_1_10 == ((unsigned char) (var_1_11 && var_1_12))) : 1)) && ((-500 >= (var_1_17 * (var_1_52 ^ var_1_7))) ? (var_1_13 == ((float) (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) + var_1_15))) : (var_1_13 == ((float) ((((var_1_15 + var_1_16) < 0 ) ? -(var_1_15 + var_1_16) : (var_1_15 + var_1_16))))))) && (((last_1_var_1_17 >= var_1_38) && (((((-2) < (var_1_5)) ? (-2) : (var_1_5))) < var_1_52)) ? (var_1_17 == ((unsigned long int) (var_1_5 + (var_1_20 + ((((var_1_38) < (var_1_52)) ? (var_1_38) : (var_1_52))))))) : ((var_1_33 == var_1_16) ? (var_1_48 ? (var_1_17 == ((unsigned long int) (((((var_1_19) < ((var_1_5 + var_1_7))) ? (var_1_19) : ((var_1_5 + var_1_7)))) - 256u))) : 1) : (var_1_17 == ((unsigned long int) (var_1_52 + (((((var_1_7) < (var_1_5)) ? (var_1_7) : (var_1_5))) - var_1_38))))))) && (((var_1_11 || (var_1_14 > 15.3f)) || (last_1_var_1_1 == (8u >> last_1_var_1_20))) ? ((last_1_var_1_20 > last_1_var_1_1) ? (var_1_20 == ((unsigned char) (((((32 + var_1_21)) > ((var_1_22 + (var_1_23 + 4)))) ? ((32 + var_1_21)) : ((var_1_22 + (var_1_23 + 4))))))) : 1) : ((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) == last_1_var_1_20) ? (((- last_1_var_1_51) < last_1_var_1_20) ? (var_1_20 == ((unsigned char) var_1_21)) : (var_1_20 == ((unsigned char) var_1_21))) : (var_1_20 == ((unsigned char) var_1_22))))) && ((! var_1_11) ? ((var_1_12 && var_1_11) ? (var_1_24 == ((signed char) ((((var_1_23) < (var_1_25)) ? (var_1_23) : (var_1_25))))) : ((((var_1_37 % var_1_5) + var_1_38) != var_1_52) ? (var_1_24 == ((signed char) (((((var_1_23 - var_1_26)) > (var_1_25)) ? ((var_1_23 - var_1_26)) : (var_1_25))))) : (var_1_24 == ((signed char) 25)))) : (((((((var_1_27 - var_1_28)) > (var_1_16)) ? ((var_1_27 - var_1_28)) : (var_1_16))) > var_1_13) ? ((var_1_15 < ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) ? (var_1_24 == ((signed char) (var_1_29 + (((((25) < (var_1_30)) ? (25) : (var_1_30))) - var_1_31)))) : (var_1_24 == ((signed char) ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) : (var_1_24 == ((signed char) (var_1_30 - (var_1_31 + var_1_32))))))) && ((! var_1_12) ? (var_1_33 == ((double) ((var_1_34 - var_1_35) + 7.5))) : 1)) && ((var_1_32 > (var_1_25 + var_1_52)) ? ((var_1_20 <= (var_1_19 - var_1_23)) ? ((var_1_26 < var_1_20) ? (var_1_36 == ((float) ((((((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) > (var_1_35)) ? (((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) : (var_1_35))))) : 1) : 1) : ((var_1_11 && var_1_10) ? (var_1_36 == ((float) var_1_14)) : (var_1_36 == ((float) var_1_14))))) && ((! (((((var_1_7) > (var_1_52)) ? (var_1_7) : (var_1_52))) > (var_1_31 | var_1_52))) ? (((var_1_27 - var_1_28) > var_1_15) ? (var_1_37 == ((signed char) ((((var_1_25) > (var_1_29)) ? (var_1_25) : (var_1_29))))) : (var_1_42 ? (var_1_37 == ((signed char) (((((var_1_32) > (var_1_31)) ? (var_1_32) : (var_1_31))) - var_1_30))) : (var_1_37 == ((signed char) (var_1_30 + ((((var_1_32) > (var_1_31)) ? (var_1_32) : (var_1_31)))))))) : 1)) && ((var_1_31 >= (var_1_26 * last_1_var_1_52)) ? (((((((var_1_22) > (var_1_30)) ? (var_1_22) : (var_1_30))) << last_1_var_1_52) != (last_1_var_1_51 + last_1_var_1_38)) ? (var_1_38 == ((unsigned char) var_1_23)) : 1) : ((last_1_var_1_38 > var_1_29) ? ((last_1_var_1_42 && var_1_12) ? (var_1_38 == ((unsigned char) ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))) : 1) : (var_1_38 == ((unsigned char) (((((var_1_21 + (100 - var_1_30))) < (var_1_23)) ? ((var_1_21 + (100 - var_1_30))) : (var_1_23)))))))) && (var_1_12 ? (var_1_41 == ((double) (((((4.375 + var_1_15)) > (var_1_14)) ? ((4.375 + var_1_15)) : (var_1_14))))) : 1)) && (((5u << var_1_7) == (last_1_var_1_43 / var_1_19)) ? (var_1_42 == ((unsigned char) (! var_1_12))) : ((last_1_var_1_48 && var_1_12) ? (var_1_42 == ((unsigned char) var_1_11)) : (var_1_42 == ((unsigned char) 1))))) && ((var_1_11 && (var_1_32 < var_1_24)) ? ((! var_1_42) ? (var_1_43 == ((signed long int) ((((var_1_32) > (var_1_25)) ? (var_1_32) : (var_1_25))))) : 1) : 1)) && ((! ((var_1_19 - var_1_31) > var_1_43)) ? (var_1_44 == ((signed char) (var_1_30 + (((((var_1_32 - var_1_31)) > (var_1_29)) ? ((var_1_32 - var_1_31)) : (var_1_29)))))) : ((var_1_30 < (((((var_1_32) < (last_1_var_1_44)) ? (var_1_32) : (last_1_var_1_44))) * 32)) ? (var_1_12 ? ((var_1_20 > var_1_21) ? ((var_1_42 && (var_1_17 == 10u)) ? (var_1_44 == ((signed char) (((((var_1_30 + 5)) < ((var_1_31 - (1 + var_1_32)))) ? ((var_1_30 + 5)) : ((var_1_31 - (1 + var_1_32))))))) : 1) : (var_1_44 == ((signed char) ((((var_1_25) < (((((var_1_29) < (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26))))) ? (var_1_29) : (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26)))))))) ? (var_1_25) : (((((var_1_29) < (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26))))) ? (var_1_29) : (((((var_1_31) < (var_1_26)) ? (var_1_31) : (var_1_26)))))))))))) : 1) : (var_1_44 == ((signed char) (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) + var_1_29)))))) && ((var_1_1 <= (var_1_38 + var_1_19)) ? (var_1_45 == ((signed short int) (-1 + var_1_26))) : 1)) && ((((var_1_38 > var_1_38) && var_1_10) || var_1_10) ? ((var_1_34 >= 63.75) ? ((var_1_1 <= var_1_38) ? (var_1_46 == ((signed char) var_1_30)) : (var_1_46 == ((signed char) ((var_1_30 + (var_1_47 - 16)) - var_1_32)))) : (var_1_46 == ((signed char) (var_1_32 - var_1_23)))) : 1)) && (var_1_48 == ((unsigned char) (var_1_49 || var_1_50)))) && (var_1_49 ? ((last_1_var_1_24 <= last_1_var_1_20) ? ((! (var_1_7 <= last_1_var_1_46)) ? (var_1_51 == ((signed char) var_1_26)) : (var_1_51 == ((signed char) var_1_47))) : (var_1_51 == ((signed char) var_1_31))) : (var_1_51 == ((signed char) var_1_47)))) && ((! var_1_11) ? (var_1_52 == ((unsigned char) ((((var_1_40) < (((((var_1_32) < (var_1_23)) ? (var_1_32) : (var_1_23))))) ? (var_1_40) : (((((var_1_32) < (var_1_23)) ? (var_1_32) : (var_1_23)))))))) : ((last_1_var_1_37 < last_1_var_1_37) ? (var_1_52 == ((unsigned char) var_1_31)) : (var_1_52 == ((unsigned char) var_1_21))))
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
