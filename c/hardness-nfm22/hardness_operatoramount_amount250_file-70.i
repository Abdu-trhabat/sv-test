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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
double var_1_1 = 31.7;
double var_1_3 = 1.0350000000000001;
unsigned short int var_1_4 = 8;
unsigned short int var_1_11 = 26575;
signed long int var_1_12 = 256;
unsigned short int var_1_13 = 16;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 32;
signed short int var_1_18 = 10;
unsigned long int var_1_20 = 256;
float var_1_21 = 127.25;
float var_1_23 = 3.6;
float var_1_24 = 128.75;
float var_1_25 = 128.99;
float var_1_26 = 2.875;
float var_1_27 = 4.6;
signed long int var_1_28 = -4;
unsigned long int var_1_29 = 64;
unsigned long int var_1_30 = 2547575004;
signed char var_1_31 = -10;
signed char var_1_32 = 8;
signed char var_1_33 = 50;
signed long int var_1_34 = -5;
signed long int var_1_35 = 1823563689;
signed short int var_1_36 = -256;
signed short int var_1_37 = -5;
signed short int var_1_38 = 256;
signed short int var_1_39 = 31652;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
signed long int var_1_44 = 16;
double var_1_45 = 0.525;
double var_1_46 = 24.5;
unsigned char var_1_48 = 1;
signed short int var_1_49 = 10;
unsigned char var_1_51 = 0;
unsigned short int var_1_52 = 0;
float var_1_53 = 4.22;
float var_1_54 = 100000000000000.7;
float var_1_55 = 128.5;
float var_1_56 = 2.25;
double last_1_var_1_1 = 31.7;
unsigned short int last_1_var_1_4 = 8;
signed long int last_1_var_1_12 = 256;
unsigned char last_1_var_1_14 = 128;
signed short int last_1_var_1_18 = 10;
signed long int last_1_var_1_28 = -4;
unsigned long int last_1_var_1_29 = 64;
signed long int last_1_var_1_34 = -5;
signed short int last_1_var_1_36 = -256;
signed short int last_1_var_1_37 = -5;
signed short int last_1_var_1_38 = 256;
unsigned char last_1_var_1_41 = 1;
signed long int last_1_var_1_44 = 16;
unsigned char last_1_var_1_48 = 1;
signed short int last_1_var_1_49 = 10;
unsigned char last_1_var_1_51 = 0;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_51) {
  var_1_41 = var_1_42;
 } else {
  var_1_41 = (last_1_var_1_48 || var_1_43);
 }
 if (! var_1_42) {
  var_1_48 = var_1_42;
 } else {
  var_1_48 = (var_1_41 || (! var_1_42));
 }
 signed long int stepLocal_3 = last_1_var_1_12;
 signed long int stepLocal_2 = 16 & var_1_11;
 if (stepLocal_3 < (last_1_var_1_29 * last_1_var_1_44)) {
  var_1_13 = ((((last_1_var_1_14) < (last_1_var_1_12)) ? (last_1_var_1_14) : (last_1_var_1_12)));
 } else {
  if (! last_1_var_1_41) {
   var_1_13 = (last_1_var_1_14 + last_1_var_1_12);
  } else {
   if (last_1_var_1_28 <= stepLocal_2) {
    var_1_13 = ((((var_1_11) < (8)) ? (var_1_11) : (8)));
   }
  }
 }
 unsigned long int stepLocal_1 = ((((32 * last_1_var_1_37)) > (last_1_var_1_29)) ? ((32 * last_1_var_1_37)) : (last_1_var_1_29));
 unsigned char stepLocal_0 = last_1_var_1_14 <= (last_1_var_1_14 + last_1_var_1_37);
 if (! last_1_var_1_41) {
  if (stepLocal_1 <= last_1_var_1_34) {
   var_1_4 = ((last_1_var_1_37 + (last_1_var_1_29 + last_1_var_1_14)) + ((((last_1_var_1_14) > (last_1_var_1_14)) ? (last_1_var_1_14) : (last_1_var_1_14))));
  } else {
   if (stepLocal_0 || (last_1_var_1_14 < (last_1_var_1_29 % 25))) {
    var_1_4 = ((last_1_var_1_14 + last_1_var_1_37) + (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - last_1_var_1_29));
   } else {
    var_1_4 = var_1_11;
   }
  }
 } else {
  var_1_4 = last_1_var_1_29;
 }
 unsigned char stepLocal_16 = last_1_var_1_41;
 unsigned char stepLocal_15 = var_1_25 > var_1_27;
 if (last_1_var_1_51 || stepLocal_15) {
  if (((((((((64.75) < (var_1_23)) ? (64.75) : (var_1_23)))) > (var_1_27)) ? (((((64.75) < (var_1_23)) ? (64.75) : (var_1_23)))) : (var_1_27))) > ((var_1_24 * last_1_var_1_1) / ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) {
   var_1_44 = ((((last_1_var_1_12) > (last_1_var_1_14)) ? (last_1_var_1_12) : (last_1_var_1_14)));
  } else {
   var_1_44 = ((((((((((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) < (var_1_11)) ? (((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) : (var_1_11)))) < ((last_1_var_1_44 - last_1_var_1_12))) ? (((((((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) < (var_1_11)) ? (((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) : (var_1_11)))) : ((last_1_var_1_44 - last_1_var_1_12))));
  }
 } else {
  if ((8 << last_1_var_1_44) < (last_1_var_1_36 | last_1_var_1_44)) {
   if (var_1_43 && stepLocal_16) {
    var_1_44 = (((((((((var_1_35 - last_1_var_1_38)) < (last_1_var_1_14)) ? ((var_1_35 - last_1_var_1_38)) : (last_1_var_1_14)))) < (((((last_1_var_1_38) < 0 ) ? -(last_1_var_1_38) : (last_1_var_1_38))))) ? ((((((var_1_35 - last_1_var_1_38)) < (last_1_var_1_14)) ? ((var_1_35 - last_1_var_1_38)) : (last_1_var_1_14)))) : (((((last_1_var_1_38) < 0 ) ? -(last_1_var_1_38) : (last_1_var_1_38))))));
   }
  } else {
   var_1_44 = last_1_var_1_14;
  }
 }
 var_1_28 = (var_1_16 + var_1_44);
 signed long int stepLocal_17 = ((((last_1_var_1_4 / var_1_35)) > (last_1_var_1_18)) ? ((last_1_var_1_4 / var_1_35)) : (last_1_var_1_18));
 if (stepLocal_17 < last_1_var_1_37) {
  var_1_51 = var_1_42;
 } else {
  var_1_51 = 0;
 }
 if (var_1_51) {
  var_1_1 = (4.2 - ((((9.5) > (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? (9.5) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))));
 } else {
  var_1_1 = ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)));
 }
 if (var_1_48) {
  var_1_31 = (var_1_32 - var_1_33);
 } else {
  var_1_31 = (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))));
 }
 if (var_1_42) {
  var_1_52 = var_1_31;
 }
 if (last_1_var_1_1 <= var_1_3) {
  if (! last_1_var_1_51) {
   var_1_14 = ((var_1_15 + var_1_16) - var_1_17);
  } else {
   var_1_14 = ((((var_1_15) > (10)) ? (var_1_15) : (10)));
  }
 }
 var_1_20 = (16u + var_1_14);
 signed long int stepLocal_5 = var_1_14 / ((((var_1_15) < (64)) ? (var_1_15) : (64)));
 unsigned char stepLocal_4 = var_1_15;
 if (var_1_41) {
  if (var_1_14 != stepLocal_5) {
   if (! var_1_51) {
    var_1_21 = ((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) + var_1_24) - var_1_25);
   } else {
    var_1_21 = (((((var_1_23 + var_1_24)) < ((var_1_26 + var_1_27))) ? ((var_1_23 + var_1_24)) : ((var_1_26 + var_1_27))));
   }
  } else {
   var_1_21 = (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))) + var_1_23);
  }
 } else {
  if (stepLocal_4 > var_1_28) {
   var_1_21 = var_1_25;
  } else {
   var_1_21 = var_1_23;
  }
 }
 unsigned char stepLocal_18 = var_1_46 != var_1_24;
 if (var_1_41 && stepLocal_18) {
  var_1_53 = ((((((var_1_24 + var_1_54) - var_1_25)) > ((var_1_27 + (var_1_55 + var_1_56)))) ? (((var_1_24 + var_1_54) - var_1_25)) : ((var_1_27 + (var_1_55 + var_1_56)))));
 } else {
  var_1_53 = var_1_54;
 }
 if (var_1_41) {
  var_1_29 = (((((var_1_30 - var_1_14)) > (var_1_13)) ? ((var_1_30 - var_1_14)) : (var_1_13)));
 }
 if (var_1_44 > (last_1_var_1_49 * var_1_4)) {
  if (var_1_25 < ((var_1_27 + var_1_24) + var_1_1)) {
   var_1_49 = ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)));
  } else {
   var_1_49 = var_1_16;
  }
 } else {
  var_1_49 = ((((((var_1_39 - var_1_31)) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? ((var_1_39 - var_1_31)) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))) - var_1_15);
 }
 if (var_1_48) {
  if (var_1_3 >= 256.25) {
   if (var_1_48) {
    var_1_18 = var_1_49;
   }
  }
 } else {
  var_1_18 = ((((-25) > (var_1_15)) ? (-25) : (var_1_15)));
 }
 if (var_1_51) {
  var_1_12 = (var_1_14 + ((((var_1_11) > (-128)) ? (var_1_11) : (-128))));
 }
 unsigned char stepLocal_14 = var_1_17;
 signed long int stepLocal_13 = var_1_28;
 unsigned char stepLocal_12 = var_1_16;
 if (stepLocal_12 > var_1_18) {
  if (stepLocal_14 < var_1_30) {
   var_1_38 = (var_1_28 - (var_1_39 - var_1_33));
  }
 } else {
  if (var_1_27 < ((((var_1_26) > (var_1_3)) ? (var_1_26) : (var_1_3)))) {
   var_1_38 = ((2 - ((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18)))) + var_1_14);
  } else {
   if (var_1_41) {
    if (stepLocal_13 >= ((((var_1_12) < ((var_1_49 % var_1_16))) ? (var_1_12) : ((var_1_49 % var_1_16))))) {
     var_1_38 = (var_1_33 - (((((var_1_49) > (var_1_15)) ? (var_1_49) : (var_1_15))) + var_1_14));
    }
   } else {
    var_1_38 = ((((var_1_15) > (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_15) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))));
   }
  }
 }
 signed short int stepLocal_6 = var_1_38;
 if (var_1_51) {
  if (stepLocal_6 <= 200) {
   var_1_34 = (2 - ((var_1_35 - var_1_38) - last_1_var_1_34));
  } else {
   var_1_34 = (((var_1_16 + var_1_14) + var_1_38) - var_1_15);
  }
 }
 unsigned char stepLocal_7 = var_1_14;
 if (last_1_var_1_36 >= stepLocal_7) {
  var_1_36 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 } else {
  var_1_36 = (var_1_34 + -50);
 }
 signed long int stepLocal_11 = (((var_1_13) > (-1)) ? (var_1_13) : (-1));
 signed short int stepLocal_10 = var_1_36;
 signed long int stepLocal_9 = - var_1_44;
 unsigned char stepLocal_8 = var_1_16;
 if (var_1_48) {
  if (stepLocal_8 < 8) {
   var_1_37 = var_1_17;
  } else {
   if (25u < stepLocal_9) {
    var_1_37 = (var_1_17 - var_1_16);
   } else {
    if (stepLocal_10 >= ((var_1_11 - last_1_var_1_37) - var_1_15)) {
     var_1_37 = ((((((((-2) < (var_1_17)) ? (-2) : (var_1_17)))) > (((((var_1_36 - var_1_14) < 0 ) ? -(var_1_36 - var_1_14) : (var_1_36 - var_1_14))))) ? (((((-2) < (var_1_17)) ? (-2) : (var_1_17)))) : (((((var_1_36 - var_1_14) < 0 ) ? -(var_1_36 - var_1_14) : (var_1_36 - var_1_14))))));
    } else {
     if ((((((var_1_33 & var_1_52)) > (0)) ? ((var_1_33 & var_1_52)) : (0))) < stepLocal_11) {
      if (var_1_51) {
       var_1_37 = ((((var_1_4) < ((var_1_16 - var_1_15))) ? (var_1_4) : ((var_1_16 - var_1_15))));
      } else {
       var_1_37 = (((((var_1_4 + last_1_var_1_37) + var_1_32) < 0 ) ? -((var_1_4 + last_1_var_1_37) + var_1_32) : ((var_1_4 + last_1_var_1_37) + var_1_32)));
      }
     }
    }
   }
  }
 } else {
  var_1_37 = ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)));
 }
}
void updateVariables() {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 16383);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 64);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427382800e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 2147483647);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -1);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 1610612734);
 assume_abort_if_not(var_1_35 <= 2147483646);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 16383);
 assume_abort_if_not(var_1_39 <= 32766);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
 assume_abort_if_not(var_1_45 != 0.0F);
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 assume_abort_if_not(var_1_46 != 0.0F);
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_55 >= -230584.3009213691390e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 2305843.009213691390e+12F && var_1_55 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -230584.3009213691390e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_4 = var_1_4;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_49 = var_1_49;
 last_1_var_1_51 = var_1_51;
}
int property() {
 return (((((((((((((((((((((var_1_51 ? (var_1_1 == ((double) (4.2 - ((((9.5) > (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) ? (9.5) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))))) : (var_1_1 == ((double) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) && ((! last_1_var_1_41) ? (((((((32 * last_1_var_1_37)) > (last_1_var_1_29)) ? ((32 * last_1_var_1_37)) : (last_1_var_1_29))) <= last_1_var_1_34) ? (var_1_4 == ((unsigned short int) ((last_1_var_1_37 + (last_1_var_1_29 + last_1_var_1_14)) + ((((last_1_var_1_14) > (last_1_var_1_14)) ? (last_1_var_1_14) : (last_1_var_1_14)))))) : (((last_1_var_1_14 <= (last_1_var_1_14 + last_1_var_1_37)) || (last_1_var_1_14 < (last_1_var_1_29 % 25))) ? (var_1_4 == ((unsigned short int) ((last_1_var_1_14 + last_1_var_1_37) + (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))) - last_1_var_1_29)))) : (var_1_4 == ((unsigned short int) var_1_11)))) : (var_1_4 == ((unsigned short int) last_1_var_1_29)))) && (var_1_51 ? (var_1_12 == ((signed long int) (var_1_14 + ((((var_1_11) > (-128)) ? (var_1_11) : (-128)))))) : 1)) && ((last_1_var_1_12 < (last_1_var_1_29 * last_1_var_1_44)) ? (var_1_13 == ((unsigned short int) ((((last_1_var_1_14) < (last_1_var_1_12)) ? (last_1_var_1_14) : (last_1_var_1_12))))) : ((! last_1_var_1_41) ? (var_1_13 == ((unsigned short int) (last_1_var_1_14 + last_1_var_1_12))) : ((last_1_var_1_28 <= (16 & var_1_11)) ? (var_1_13 == ((unsigned short int) ((((var_1_11) < (8)) ? (var_1_11) : (8))))) : 1)))) && ((last_1_var_1_1 <= var_1_3) ? ((! last_1_var_1_51) ? (var_1_14 == ((unsigned char) ((var_1_15 + var_1_16) - var_1_17))) : (var_1_14 == ((unsigned char) ((((var_1_15) > (10)) ? (var_1_15) : (10)))))) : 1)) && (var_1_48 ? ((var_1_3 >= 256.25) ? (var_1_48 ? (var_1_18 == ((signed short int) var_1_49)) : 1) : 1) : (var_1_18 == ((signed short int) ((((-25) > (var_1_15)) ? (-25) : (var_1_15))))))) && (var_1_20 == ((unsigned long int) (16u + var_1_14)))) && (var_1_41 ? ((var_1_14 != (var_1_14 / ((((var_1_15) < (64)) ? (var_1_15) : (64))))) ? ((! var_1_51) ? (var_1_21 == ((float) ((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) + var_1_24) - var_1_25))) : (var_1_21 == ((float) (((((var_1_23 + var_1_24)) < ((var_1_26 + var_1_27))) ? ((var_1_23 + var_1_24)) : ((var_1_26 + var_1_27))))))) : (var_1_21 == ((float) (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))) + var_1_23)))) : ((var_1_15 > var_1_28) ? (var_1_21 == ((float) var_1_25)) : (var_1_21 == ((float) var_1_23))))) && (var_1_28 == ((signed long int) (var_1_16 + var_1_44)))) && (var_1_41 ? (var_1_29 == ((unsigned long int) (((((var_1_30 - var_1_14)) > (var_1_13)) ? ((var_1_30 - var_1_14)) : (var_1_13))))) : 1)) && (var_1_48 ? (var_1_31 == ((signed char) (var_1_32 - var_1_33))) : (var_1_31 == ((signed char) (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) - ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))))) && (var_1_51 ? ((var_1_38 <= 200) ? (var_1_34 == ((signed long int) (2 - ((var_1_35 - var_1_38) - last_1_var_1_34)))) : (var_1_34 == ((signed long int) (((var_1_16 + var_1_14) + var_1_38) - var_1_15)))) : 1)) && ((last_1_var_1_36 >= var_1_14) ? (var_1_36 == ((signed short int) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) : (var_1_36 == ((signed short int) (var_1_34 + -50))))) && (var_1_48 ? ((var_1_16 < 8) ? (var_1_37 == ((signed short int) var_1_17)) : ((25u < (- var_1_44)) ? (var_1_37 == ((signed short int) (var_1_17 - var_1_16))) : ((var_1_36 >= ((var_1_11 - last_1_var_1_37) - var_1_15)) ? (var_1_37 == ((signed short int) ((((((((-2) < (var_1_17)) ? (-2) : (var_1_17)))) > (((((var_1_36 - var_1_14) < 0 ) ? -(var_1_36 - var_1_14) : (var_1_36 - var_1_14))))) ? (((((-2) < (var_1_17)) ? (-2) : (var_1_17)))) : (((((var_1_36 - var_1_14) < 0 ) ? -(var_1_36 - var_1_14) : (var_1_36 - var_1_14)))))))) : (((((((var_1_33 & var_1_52)) > (0)) ? ((var_1_33 & var_1_52)) : (0))) < ((((var_1_13) > (-1)) ? (var_1_13) : (-1)))) ? (var_1_51 ? (var_1_37 == ((signed short int) ((((var_1_4) < ((var_1_16 - var_1_15))) ? (var_1_4) : ((var_1_16 - var_1_15)))))) : (var_1_37 == ((signed short int) (((((var_1_4 + last_1_var_1_37) + var_1_32) < 0 ) ? -((var_1_4 + last_1_var_1_37) + var_1_32) : ((var_1_4 + last_1_var_1_37) + var_1_32)))))) : 1)))) : (var_1_37 == ((signed short int) ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))) && ((var_1_16 > var_1_18) ? ((var_1_17 < var_1_30) ? (var_1_38 == ((signed short int) (var_1_28 - (var_1_39 - var_1_33)))) : 1) : ((var_1_27 < ((((var_1_26) > (var_1_3)) ? (var_1_26) : (var_1_3)))) ? (var_1_38 == ((signed short int) ((2 - ((((var_1_16) > (var_1_18)) ? (var_1_16) : (var_1_18)))) + var_1_14))) : (var_1_41 ? ((var_1_28 >= ((((var_1_12) < ((var_1_49 % var_1_16))) ? (var_1_12) : ((var_1_49 % var_1_16))))) ? (var_1_38 == ((signed short int) (var_1_33 - (((((var_1_49) > (var_1_15)) ? (var_1_49) : (var_1_15))) + var_1_14)))) : 1) : (var_1_38 == ((signed short int) ((((var_1_15) > (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_15) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))))))) && (last_1_var_1_51 ? (var_1_41 == ((unsigned char) var_1_42)) : (var_1_41 == ((unsigned char) (last_1_var_1_48 || var_1_43))))) && ((last_1_var_1_51 || (var_1_25 > var_1_27)) ? ((((((((((64.75) < (var_1_23)) ? (64.75) : (var_1_23)))) > (var_1_27)) ? (((((64.75) < (var_1_23)) ? (64.75) : (var_1_23)))) : (var_1_27))) > ((var_1_24 * last_1_var_1_1) / ((((var_1_45) < (var_1_46)) ? (var_1_45) : (var_1_46))))) ? (var_1_44 == ((signed long int) ((((last_1_var_1_12) > (last_1_var_1_14)) ? (last_1_var_1_12) : (last_1_var_1_14))))) : (var_1_44 == ((signed long int) ((((((((((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) < (var_1_11)) ? (((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) : (var_1_11)))) < ((last_1_var_1_44 - last_1_var_1_12))) ? (((((((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) < (var_1_11)) ? (((((last_1_var_1_38) > (last_1_var_1_14)) ? (last_1_var_1_38) : (last_1_var_1_14)))) : (var_1_11)))) : ((last_1_var_1_44 - last_1_var_1_12))))))) : (((8 << last_1_var_1_44) < (last_1_var_1_36 | last_1_var_1_44)) ? ((var_1_43 && last_1_var_1_41) ? (var_1_44 == ((signed long int) (((((((((var_1_35 - last_1_var_1_38)) < (last_1_var_1_14)) ? ((var_1_35 - last_1_var_1_38)) : (last_1_var_1_14)))) < (((((last_1_var_1_38) < 0 ) ? -(last_1_var_1_38) : (last_1_var_1_38))))) ? ((((((var_1_35 - last_1_var_1_38)) < (last_1_var_1_14)) ? ((var_1_35 - last_1_var_1_38)) : (last_1_var_1_14)))) : (((((last_1_var_1_38) < 0 ) ? -(last_1_var_1_38) : (last_1_var_1_38)))))))) : 1) : (var_1_44 == ((signed long int) last_1_var_1_14))))) && ((! var_1_42) ? (var_1_48 == ((unsigned char) var_1_42)) : (var_1_48 == ((unsigned char) (var_1_41 || (! var_1_42)))))) && ((var_1_44 > (last_1_var_1_49 * var_1_4)) ? ((var_1_25 < ((var_1_27 + var_1_24) + var_1_1)) ? (var_1_49 == ((signed short int) ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))))) : (var_1_49 == ((signed short int) var_1_16))) : (var_1_49 == ((signed short int) ((((((var_1_39 - var_1_31)) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? ((var_1_39 - var_1_31)) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))) - var_1_15))))) && (((((((last_1_var_1_4 / var_1_35)) > (last_1_var_1_18)) ? ((last_1_var_1_4 / var_1_35)) : (last_1_var_1_18))) < last_1_var_1_37) ? (var_1_51 == ((unsigned char) var_1_42)) : (var_1_51 == ((unsigned char) 0)))) && (var_1_42 ? (var_1_52 == ((unsigned short int) var_1_31)) : 1)) && ((var_1_41 && (var_1_46 != var_1_24)) ? (var_1_53 == ((float) ((((((var_1_24 + var_1_54) - var_1_25)) > ((var_1_27 + (var_1_55 + var_1_56)))) ? (((var_1_24 + var_1_54) - var_1_25)) : ((var_1_27 + (var_1_55 + var_1_56))))))) : (var_1_53 == ((float) var_1_54)))
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
