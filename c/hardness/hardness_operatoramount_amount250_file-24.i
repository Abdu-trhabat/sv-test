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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.8;
unsigned char var_1_2 = 0;
float var_1_5 = 10000000000.75;
float var_1_6 = 50.5;
float var_1_7 = 3.875;
unsigned long int var_1_8 = 256;
unsigned long int var_1_9 = 4;
unsigned long int var_1_10 = 0;
unsigned long int var_1_11 = 4;
unsigned long int var_1_12 = 64;
float var_1_13 = 199.5;
unsigned long int var_1_14 = 0;
float var_1_15 = -0.554;
unsigned long int var_1_16 = 8;
signed char var_1_18 = 64;
unsigned char var_1_19 = 1;
signed char var_1_20 = 0;
signed char var_1_21 = 5;
signed char var_1_22 = 25;
signed char var_1_23 = 4;
signed long int var_1_24 = -128;
double var_1_25 = 1000000000000000.2;
double var_1_26 = 5.125;
double var_1_27 = 127.4;
double var_1_28 = 1000000000000.46;
double var_1_29 = 999999999.4;
double var_1_30 = 16.2;
double var_1_31 = 50.65;
double var_1_32 = 63.08;
double var_1_33 = 8.5;
float var_1_34 = 0.8;
signed char var_1_35 = -25;
signed long int var_1_36 = 256;
signed short int var_1_37 = -100;
unsigned char var_1_38 = 0;
signed short int var_1_39 = 18924;
unsigned char var_1_40 = 0;
signed short int var_1_41 = -4;
float var_1_42 = 100.5;
float var_1_44 = 31.5;
float var_1_45 = 256.25;
unsigned short int var_1_46 = 64;
signed char var_1_48 = -16;
unsigned char var_1_49 = 1;
signed char var_1_50 = 64;
signed char var_1_51 = 8;
signed char var_1_52 = 32;
signed char var_1_53 = 25;
signed short int var_1_54 = 0;
unsigned long int last_1_var_1_8 = 256;
unsigned long int last_1_var_1_16 = 8;
double last_1_var_1_26 = 5.125;
double last_1_var_1_31 = 50.65;
signed short int last_1_var_1_37 = -100;
signed short int last_1_var_1_41 = -4;
unsigned short int last_1_var_1_46 = 64;
void initially(void) {
}
void step(void) {
 if (var_1_33 < var_1_6) {
  if (var_1_40) {
   var_1_41 = (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))) - (last_1_var_1_37 + ((((var_1_20) < (last_1_var_1_46)) ? (var_1_20) : (last_1_var_1_46)))));
  } else {
   if (var_1_29 <= last_1_var_1_31) {
    var_1_41 = (var_1_23 + (last_1_var_1_46 - last_1_var_1_37));
   } else {
    if (var_1_30 <= last_1_var_1_26) {
     var_1_41 = last_1_var_1_37;
    } else {
     var_1_41 = (((((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) > ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - last_1_var_1_37))) ? ((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) : ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - last_1_var_1_37))));
    }
   }
  }
 }
 if (var_1_2 || var_1_19) {
  if (var_1_2) {
   var_1_37 = ((((last_1_var_1_41) < 0 ) ? -(last_1_var_1_41) : (last_1_var_1_41)));
  }
 }
 unsigned long int stepLocal_5 = last_1_var_1_8;
 if (last_1_var_1_16 <= stepLocal_5) {
  var_1_16 = (((((3682661553u - last_1_var_1_16)) < (var_1_11)) ? ((3682661553u - last_1_var_1_16)) : (var_1_11)));
 } else {
  if ((~ last_1_var_1_16) > ((((last_1_var_1_16) < ((var_1_11 - var_1_10))) ? (last_1_var_1_16) : ((var_1_11 - var_1_10))))) {
   var_1_16 = last_1_var_1_16;
  } else {
   var_1_16 = ((((last_1_var_1_16) < (var_1_9)) ? (last_1_var_1_16) : (var_1_9)));
  }
 }
 if (var_1_6 < ((256.625f * var_1_7) * var_1_5)) {
  if (var_1_19 || var_1_2) {
   var_1_24 = ((-256 + var_1_22) + (var_1_20 - ((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16)))));
  } else {
   if (! var_1_19) {
    if (((var_1_6 / var_1_25) > var_1_5) || var_1_2) {
     var_1_24 = var_1_22;
    }
   }
  }
 }
 unsigned char stepLocal_20 = var_1_19;
 unsigned long int stepLocal_19 = var_1_12 | (var_1_53 * var_1_20);
 if (stepLocal_20 || var_1_49) {
  if (stepLocal_19 > (var_1_23 * (- var_1_16))) {
   if (var_1_40) {
    var_1_54 = var_1_53;
   } else {
    var_1_54 = var_1_24;
   }
  } else {
   var_1_54 = var_1_51;
  }
 }
 signed long int stepLocal_0 = var_1_24;
 if (stepLocal_0 <= var_1_41) {
  var_1_1 = (var_1_5 - var_1_6);
 } else {
  var_1_1 = (10.5f + var_1_7);
 }
 signed long int stepLocal_10 = (((var_1_20) < (-10)) ? (var_1_20) : (-10));
 unsigned long int stepLocal_9 = var_1_16 / var_1_12;
 unsigned char stepLocal_8 = var_1_19;
 unsigned long int stepLocal_7 = var_1_12;
 signed char stepLocal_6 = var_1_20;
 if (stepLocal_7 > var_1_9) {
  if (stepLocal_9 >= (16u | var_1_11)) {
   if (var_1_2 && stepLocal_8) {
    var_1_18 = ((var_1_20 - var_1_21) + (var_1_22 + (16 - var_1_23)));
   }
  } else {
   var_1_18 = (var_1_23 - var_1_20);
  }
 } else {
  if (var_1_2) {
   var_1_18 = ((((var_1_21) < ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5))))) ? (var_1_21) : ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5))))));
  } else {
   if (64 == stepLocal_10) {
    var_1_18 = (var_1_22 + var_1_21);
   } else {
    if (! var_1_19) {
     if (var_1_16 < stepLocal_6) {
      var_1_18 = var_1_20;
     } else {
      var_1_18 = var_1_23;
     }
    }
   }
  }
 }
 unsigned long int stepLocal_15 = (((var_1_16) < ((~ var_1_35))) ? (var_1_16) : ((~ var_1_35)));
 if (stepLocal_15 <= (var_1_21 / 128u)) {
  var_1_36 = ((((var_1_35) > (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_37)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_37))))) ? (var_1_35) : (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_37)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_37))))));
 }
 signed long int stepLocal_2 = var_1_36;
 unsigned long int stepLocal_1 = var_1_11;
 if (var_1_5 >= var_1_6) {
  if (stepLocal_2 < var_1_16) {
   var_1_8 = (((((var_1_16 + ((((var_1_36) > (var_1_9)) ? (var_1_36) : (var_1_9))))) > ((var_1_10 + var_1_11))) ? ((var_1_16 + ((((var_1_36) > (var_1_9)) ? (var_1_36) : (var_1_9))))) : ((var_1_10 + var_1_11))));
  } else {
   var_1_8 = (var_1_11 + var_1_9);
  }
 } else {
  if (stepLocal_1 > (var_1_16 / var_1_12)) {
   var_1_8 = var_1_36;
  } else {
   var_1_8 = (var_1_36 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))));
  }
 }
 signed short int stepLocal_16 = var_1_37;
 if (stepLocal_16 == (var_1_8 - (var_1_39 - var_1_23))) {
  var_1_38 = (var_1_19 && var_1_40);
 } else {
  var_1_38 = var_1_40;
 }
 if (var_1_27 <= var_1_5) {
  if (((((-0.5) < 0 ) ? -(-0.5) : (-0.5))) >= var_1_30) {
   var_1_31 = ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)));
  } else {
   if ((var_1_30 - (var_1_29 + var_1_32)) == var_1_28) {
    var_1_31 = ((((((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) < (var_1_33)) ? (((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) : (var_1_33)));
   } else {
    if (var_1_38) {
     var_1_31 = (var_1_6 - var_1_32);
    } else {
     var_1_31 = ((((var_1_32) > (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))) ? (var_1_32) : (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))));
    }
   }
  }
 }
 if (var_1_16 < 4) {
  if (((((var_1_16) > (var_1_8)) ? (var_1_16) : (var_1_8))) != var_1_10) {
   var_1_46 = (((((var_1_54) > (var_1_23)) ? (var_1_54) : (var_1_23))) + var_1_20);
  } else {
   if (var_1_8 < var_1_10) {
    var_1_46 = ((((((((var_1_20) > (var_1_24)) ? (var_1_20) : (var_1_24)))) > (var_1_21)) ? (((((var_1_20) > (var_1_24)) ? (var_1_20) : (var_1_24)))) : (var_1_21)));
   } else {
    var_1_46 = ((((var_1_39) > ((52246 - var_1_54))) ? (var_1_39) : ((52246 - var_1_54))));
   }
  }
 }
 unsigned long int stepLocal_4 = var_1_10;
 unsigned long int stepLocal_3 = var_1_8;
 if (stepLocal_3 >= (10u / var_1_12)) {
  if (stepLocal_4 < ((((var_1_14) < (var_1_8)) ? (var_1_14) : (var_1_8)))) {
   var_1_13 = var_1_7;
  } else {
   var_1_13 = (var_1_7 + var_1_15);
  }
 } else {
  var_1_13 = (((((var_1_6 - var_1_5)) > (var_1_7)) ? ((var_1_6 - var_1_5)) : (var_1_7)));
 }
 signed char stepLocal_14 = var_1_21;
 if (stepLocal_14 > (((((var_1_8 + var_1_18)) > (var_1_22)) ? ((var_1_8 + var_1_18)) : (var_1_22)))) {
  var_1_34 = var_1_6;
 }
 unsigned long int stepLocal_18 = var_1_11 * 8;
 signed char stepLocal_17 = var_1_22;
 if (var_1_38) {
  if (stepLocal_18 < ((var_1_10 / 50u) << var_1_24)) {
   var_1_42 = ((((((var_1_44 + var_1_45)) > (var_1_29)) ? ((var_1_44 + var_1_45)) : (var_1_29))) + var_1_15);
  }
 } else {
  if (stepLocal_17 < var_1_36) {
   var_1_42 = (var_1_28 + var_1_44);
  } else {
   var_1_42 = (var_1_29 + var_1_44);
  }
 }
 if (var_1_38) {
  if (var_1_38) {
   if (var_1_38) {
    var_1_48 = ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)));
   } else {
    var_1_48 = ((var_1_20 + var_1_21) - (var_1_50 - (var_1_23 + var_1_51)));
   }
  } else {
   var_1_48 = (((var_1_52 - var_1_23) - (var_1_51 + var_1_53)) + var_1_21);
  }
 } else {
  if (var_1_54 > var_1_21) {
   var_1_48 = ((((((-10) < 0 ) ? -(-10) : (-10))) + var_1_53) - var_1_50);
  } else {
   var_1_48 = (var_1_21 + var_1_52);
  }
 }
 unsigned long int stepLocal_13 = var_1_12;
 signed short int stepLocal_12 = var_1_41;
 signed char stepLocal_11 = var_1_22;
 if (stepLocal_13 <= var_1_9) {
  if (var_1_38) {
   if (stepLocal_11 < var_1_16) {
    var_1_26 = (var_1_7 + var_1_15);
   } else {
    var_1_26 = ((((var_1_15) < ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))) ? (var_1_15) : ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))));
   }
  } else {
   var_1_26 = ((((var_1_6) < (var_1_27)) ? (var_1_6) : (var_1_27)));
  }
 } else {
  if (stepLocal_12 < var_1_11) {
   var_1_26 = (var_1_5 - (var_1_29 + var_1_30));
  } else {
   var_1_26 = 49.2;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 4294967295);
 assume_abort_if_not(var_1_12 != 0);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -31);
 assume_abort_if_not(var_1_22 <= 32);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 31);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 assume_abort_if_not(var_1_25 != 0.0F);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427388000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -128);
 assume_abort_if_not(var_1_35 <= 127);
 assume_abort_if_not(var_1_35 != 0);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= 16383);
 assume_abort_if_not(var_1_39 <= 32767);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -230584.3009213691400e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691400e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -230584.3009213691400e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 63);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 31);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= 31);
 assume_abort_if_not(var_1_52 <= 63);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_41 = var_1_41;
 last_1_var_1_46 = var_1_46;
}
int property(void) {
 return (((((((((((((((((var_1_24 <= var_1_41) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : (var_1_1 == ((float) (10.5f + var_1_7)))) && ((var_1_5 >= var_1_6) ? ((var_1_36 < var_1_16) ? (var_1_8 == ((unsigned long int) (((((var_1_16 + ((((var_1_36) > (var_1_9)) ? (var_1_36) : (var_1_9))))) > ((var_1_10 + var_1_11))) ? ((var_1_16 + ((((var_1_36) > (var_1_9)) ? (var_1_36) : (var_1_9))))) : ((var_1_10 + var_1_11)))))) : (var_1_8 == ((unsigned long int) (var_1_11 + var_1_9)))) : ((var_1_11 > (var_1_16 / var_1_12)) ? (var_1_8 == ((unsigned long int) var_1_36)) : (var_1_8 == ((unsigned long int) (var_1_36 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))))))) && ((var_1_8 >= (10u / var_1_12)) ? ((var_1_10 < ((((var_1_14) < (var_1_8)) ? (var_1_14) : (var_1_8)))) ? (var_1_13 == ((float) var_1_7)) : (var_1_13 == ((float) (var_1_7 + var_1_15)))) : (var_1_13 == ((float) (((((var_1_6 - var_1_5)) > (var_1_7)) ? ((var_1_6 - var_1_5)) : (var_1_7))))))) && ((last_1_var_1_16 <= last_1_var_1_8) ? (var_1_16 == ((unsigned long int) (((((3682661553u - last_1_var_1_16)) < (var_1_11)) ? ((3682661553u - last_1_var_1_16)) : (var_1_11))))) : (((~ last_1_var_1_16) > ((((last_1_var_1_16) < ((var_1_11 - var_1_10))) ? (last_1_var_1_16) : ((var_1_11 - var_1_10))))) ? (var_1_16 == ((unsigned long int) last_1_var_1_16)) : (var_1_16 == ((unsigned long int) ((((last_1_var_1_16) < (var_1_9)) ? (last_1_var_1_16) : (var_1_9)))))))) && ((var_1_12 > var_1_9) ? (((var_1_16 / var_1_12) >= (16u | var_1_11)) ? ((var_1_2 && var_1_19) ? (var_1_18 == ((signed char) ((var_1_20 - var_1_21) + (var_1_22 + (16 - var_1_23))))) : 1) : (var_1_18 == ((signed char) (var_1_23 - var_1_20)))) : (var_1_2 ? (var_1_18 == ((signed char) ((((var_1_21) < ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5))))) ? (var_1_21) : ((((((10 + var_1_23)) > (5)) ? ((10 + var_1_23)) : (5)))))))) : ((64 == ((((var_1_20) < (-10)) ? (var_1_20) : (-10)))) ? (var_1_18 == ((signed char) (var_1_22 + var_1_21))) : ((! var_1_19) ? ((var_1_16 < var_1_20) ? (var_1_18 == ((signed char) var_1_20)) : (var_1_18 == ((signed char) var_1_23))) : 1))))) && ((var_1_6 < ((256.625f * var_1_7) * var_1_5)) ? ((var_1_19 || var_1_2) ? (var_1_24 == ((signed long int) ((-256 + var_1_22) + (var_1_20 - ((((var_1_23) > (var_1_16)) ? (var_1_23) : (var_1_16))))))) : ((! var_1_19) ? ((((var_1_6 / var_1_25) > var_1_5) || var_1_2) ? (var_1_24 == ((signed long int) var_1_22)) : 1) : 1)) : 1)) && ((var_1_12 <= var_1_9) ? (var_1_38 ? ((var_1_22 < var_1_16) ? (var_1_26 == ((double) (var_1_7 + var_1_15))) : (var_1_26 == ((double) ((((var_1_15) < ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))) ? (var_1_15) : ((((((var_1_7) > (var_1_27)) ? (var_1_7) : (var_1_27))) + var_1_28))))))) : (var_1_26 == ((double) ((((var_1_6) < (var_1_27)) ? (var_1_6) : (var_1_27)))))) : ((var_1_41 < var_1_11) ? (var_1_26 == ((double) (var_1_5 - (var_1_29 + var_1_30)))) : (var_1_26 == ((double) 49.2))))) && ((var_1_27 <= var_1_5) ? ((((((-0.5) < 0 ) ? -(-0.5) : (-0.5))) >= var_1_30) ? (var_1_31 == ((double) ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))) : (((var_1_30 - (var_1_29 + var_1_32)) == var_1_28) ? (var_1_31 == ((double) ((((((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) < (var_1_33)) ? (((((var_1_32) > (var_1_29)) ? (var_1_32) : (var_1_29)))) : (var_1_33))))) : (var_1_38 ? (var_1_31 == ((double) (var_1_6 - var_1_32))) : (var_1_31 == ((double) ((((var_1_32) > (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))) ? (var_1_32) : (((((var_1_27) < (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))))) ? (var_1_27) : (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))))))))))) : 1)) && ((var_1_21 > (((((var_1_8 + var_1_18)) > (var_1_22)) ? ((var_1_8 + var_1_18)) : (var_1_22)))) ? (var_1_34 == ((float) var_1_6)) : 1)) && ((((((var_1_16) < ((~ var_1_35))) ? (var_1_16) : ((~ var_1_35)))) <= (var_1_21 / 128u)) ? (var_1_36 == ((signed long int) ((((var_1_35) > (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_37)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_37))))) ? (var_1_35) : (((((((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) < (var_1_37)) ? (((((var_1_23) < (var_1_21)) ? (var_1_23) : (var_1_21)))) : (var_1_37)))))))) : 1)) && ((var_1_2 || var_1_19) ? (var_1_2 ? (var_1_37 == ((signed short int) ((((last_1_var_1_41) < 0 ) ? -(last_1_var_1_41) : (last_1_var_1_41))))) : 1) : 1)) && ((var_1_37 == (var_1_8 - (var_1_39 - var_1_23))) ? (var_1_38 == ((unsigned char) (var_1_19 && var_1_40))) : (var_1_38 == ((unsigned char) var_1_40)))) && ((var_1_33 < var_1_6) ? (var_1_40 ? (var_1_41 == ((signed short int) (((((var_1_21) > (var_1_23)) ? (var_1_21) : (var_1_23))) - (last_1_var_1_37 + ((((var_1_20) < (last_1_var_1_46)) ? (var_1_20) : (last_1_var_1_46))))))) : ((var_1_29 <= last_1_var_1_31) ? (var_1_41 == ((signed short int) (var_1_23 + (last_1_var_1_46 - last_1_var_1_37)))) : ((var_1_30 <= last_1_var_1_26) ? (var_1_41 == ((signed short int) last_1_var_1_37)) : (var_1_41 == ((signed short int) (((((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) > ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - last_1_var_1_37))) ? ((((((1) > (var_1_23)) ? (1) : (var_1_23))) - var_1_20)) : ((((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21))) - last_1_var_1_37))))))))) : 1)) && (var_1_38 ? (((var_1_11 * 8) < ((var_1_10 / 50u) << var_1_24)) ? (var_1_42 == ((float) ((((((var_1_44 + var_1_45)) > (var_1_29)) ? ((var_1_44 + var_1_45)) : (var_1_29))) + var_1_15))) : 1) : ((var_1_22 < var_1_36) ? (var_1_42 == ((float) (var_1_28 + var_1_44))) : (var_1_42 == ((float) (var_1_29 + var_1_44)))))) && ((var_1_16 < 4) ? ((((((var_1_16) > (var_1_8)) ? (var_1_16) : (var_1_8))) != var_1_10) ? (var_1_46 == ((unsigned short int) (((((var_1_54) > (var_1_23)) ? (var_1_54) : (var_1_23))) + var_1_20))) : ((var_1_8 < var_1_10) ? (var_1_46 == ((unsigned short int) ((((((((var_1_20) > (var_1_24)) ? (var_1_20) : (var_1_24)))) > (var_1_21)) ? (((((var_1_20) > (var_1_24)) ? (var_1_20) : (var_1_24)))) : (var_1_21))))) : (var_1_46 == ((unsigned short int) ((((var_1_39) > ((52246 - var_1_54))) ? (var_1_39) : ((52246 - var_1_54)))))))) : 1)) && (var_1_38 ? (var_1_38 ? (var_1_38 ? (var_1_48 == ((signed char) ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))) : (var_1_48 == ((signed char) ((var_1_20 + var_1_21) - (var_1_50 - (var_1_23 + var_1_51)))))) : (var_1_48 == ((signed char) (((var_1_52 - var_1_23) - (var_1_51 + var_1_53)) + var_1_21)))) : ((var_1_54 > var_1_21) ? (var_1_48 == ((signed char) ((((((-10) < 0 ) ? -(-10) : (-10))) + var_1_53) - var_1_50))) : (var_1_48 == ((signed char) (var_1_21 + var_1_52)))))) && ((var_1_19 || var_1_49) ? (((var_1_12 | (var_1_53 * var_1_20)) > (var_1_23 * (- var_1_16))) ? (var_1_40 ? (var_1_54 == ((signed short int) var_1_53)) : (var_1_54 == ((signed short int) var_1_24))) : (var_1_54 == ((signed short int) var_1_51))) : 1)
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
