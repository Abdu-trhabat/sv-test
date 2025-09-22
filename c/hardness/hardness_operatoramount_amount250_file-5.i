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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -100;
double var_1_3 = 3.125;
double var_1_4 = 256.25;
unsigned char var_1_5 = 1;
signed long int var_1_7 = -5;
signed long int var_1_8 = -128;
signed long int var_1_9 = 128;
signed long int var_1_10 = 5;
signed long int var_1_11 = 25;
signed short int var_1_12 = 8;
signed short int var_1_13 = -10;
signed short int var_1_14 = 2;
unsigned char var_1_15 = 2;
float var_1_16 = 0.0;
double var_1_17 = 63.3;
unsigned char var_1_18 = 10;
double var_1_19 = 100000000000000.6;
double var_1_20 = 0.0;
double var_1_21 = 24.55;
double var_1_22 = 0.0;
double var_1_23 = 7.5;
double var_1_24 = 99999999.8;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 100;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 1;
unsigned short int var_1_34 = 2;
unsigned short int var_1_35 = 60425;
unsigned short int var_1_36 = 500;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 16;
unsigned char var_1_39 = 128;
signed long int var_1_40 = 128;
unsigned short int var_1_42 = 64;
unsigned short int var_1_43 = 31953;
unsigned short int var_1_44 = 10000;
unsigned short int var_1_45 = 10000;
unsigned short int var_1_46 = 64;
signed short int var_1_47 = -1;
double var_1_48 = 4.25;
double var_1_49 = -0.8;
double var_1_51 = 63.125;
double var_1_52 = 0.625;
double var_1_53 = 2.5;
double var_1_54 = 8.625;
signed long int var_1_55 = -1;
double var_1_56 = -0.9;
signed char var_1_57 = -10;
signed long int var_1_58 = 32;
signed long int var_1_59 = -50;
signed short int var_1_60 = -256;
double last_1_var_1_19 = 100000000000000.6;
unsigned short int last_1_var_1_36 = 500;
signed long int last_1_var_1_40 = 128;
signed long int last_1_var_1_55 = -1;
signed long int last_1_var_1_58 = 32;
void initially(void) {
}
void step(void) {
 if (var_1_24 <= (1.6 + var_1_22)) {
  var_1_38 = (((((var_1_26) > (last_1_var_1_36)) ? (var_1_26) : (last_1_var_1_36))) + ((((var_1_11) < (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28))))) ? (var_1_11) : (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28)))))));
 }
 signed long int stepLocal_4 = ~ -50;
 signed long int stepLocal_3 = last_1_var_1_58;
 if (last_1_var_1_55 > stepLocal_3) {
  if (var_1_5) {
   var_1_29 = (var_1_30 && var_1_31);
  } else {
   var_1_29 = (! var_1_31);
  }
 } else {
  if (stepLocal_4 > (last_1_var_1_40 / var_1_26)) {
   if (last_1_var_1_19 > (- var_1_16)) {
    var_1_29 = (var_1_30 || var_1_32);
   } else {
    var_1_29 = var_1_33;
   }
  } else {
   var_1_29 = var_1_31;
  }
 }
 if (! var_1_29) {
  var_1_12 = (var_1_13 + var_1_14);
 }
 if (var_1_29) {
  var_1_19 = (15.6 - (var_1_20 - ((((32.5) < 0 ) ? -(32.5) : (32.5)))));
 } else {
  var_1_19 = (var_1_21 + ((var_1_22 - var_1_23) - var_1_24));
 }
 if ((var_1_16 / ((((var_1_22) > (10000.5)) ? (var_1_22) : (10000.5)))) < var_1_3) {
  var_1_25 = ((64 + var_1_26) - ((var_1_27 + 32) - var_1_28));
 }
 if (var_1_33) {
  var_1_48 = (var_1_22 - ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24))));
 } else {
  var_1_48 = (var_1_20 - ((((9.99999999999995E13) > (8.25)) ? (9.99999999999995E13) : (8.25))));
 }
 signed long int stepLocal_18 = var_1_7;
 if (var_1_18 >= stepLocal_18) {
  var_1_56 = (0.8 + (63.38 - (var_1_22 - var_1_51)));
 }
 if (var_1_31) {
  var_1_57 = (var_1_27 - var_1_28);
 } else {
  var_1_57 = var_1_28;
 }
 var_1_59 = var_1_35;
 signed long int stepLocal_2 = -256;
 unsigned char stepLocal_1 = var_1_3 < var_1_4;
 signed long int stepLocal_0 = var_1_10;
 if (var_1_56 > (var_1_3 - var_1_4)) {
  if (stepLocal_1 && var_1_29) {
   if (stepLocal_2 >= var_1_59) {
    var_1_1 = ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8)));
   } else {
    var_1_1 = (((1000000000 - var_1_9) + (1000000000 - var_1_10)) - var_1_11);
   }
  } else {
   var_1_1 = (((((var_1_9 - var_1_11)) < (((64 - var_1_10) + -100))) ? ((var_1_9 - var_1_11)) : (((64 - var_1_10) + -100))));
  }
 } else {
  if (var_1_8 >= stepLocal_0) {
   var_1_1 = var_1_10;
  }
 }
 signed short int stepLocal_11 = var_1_13;
 signed long int stepLocal_10 = var_1_9;
 unsigned short int stepLocal_9 = var_1_35;
 signed long int stepLocal_8 = var_1_59;
 if (var_1_26 > stepLocal_8) {
  if (var_1_26 <= stepLocal_10) {
   if (((((0.6f) < 0 ) ? -(0.6f) : (0.6f))) <= ((var_1_16 + var_1_22) + var_1_4)) {
    var_1_39 = (var_1_27 + var_1_28);
   } else {
    if (var_1_31) {
     var_1_39 = var_1_18;
    } else {
     if (stepLocal_11 <= var_1_26) {
      var_1_39 = (var_1_26 + var_1_28);
     } else {
      var_1_39 = (((((var_1_27 + var_1_28)) < (var_1_18)) ? ((var_1_27 + var_1_28)) : (var_1_18)));
     }
    }
   }
  } else {
   var_1_39 = var_1_28;
  }
 } else {
  if (stepLocal_9 <= var_1_8) {
   if (! var_1_29) {
    var_1_39 = var_1_28;
   } else {
    var_1_39 = var_1_18;
   }
  }
 }
 var_1_47 = ((var_1_1 + var_1_12) + (((((var_1_27 + var_1_26)) > (var_1_13)) ? ((var_1_27 + var_1_26)) : (var_1_13))));
 var_1_60 = var_1_39;
 if (((var_1_16 - 1.58f) - var_1_4) >= var_1_56) {
  if ((- var_1_3) <= (var_1_56 / var_1_17)) {
   var_1_15 = ((((var_1_18) < (10)) ? (var_1_18) : (10)));
  } else {
   var_1_15 = ((((100) < 0 ) ? -(100) : (100)));
  }
 }
 if (var_1_24 != (var_1_3 + var_1_56)) {
  var_1_40 = ((((var_1_28) > (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))) ? (var_1_28) : (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))));
 } else {
  var_1_40 = (var_1_27 + -100);
 }
 if (var_1_48 > (var_1_20 - var_1_4)) {
  if (var_1_3 > var_1_48) {
   var_1_46 = ((((var_1_43 + ((((var_1_60) < (var_1_26)) ? (var_1_60) : (var_1_26)))) < 0 ) ? -(var_1_43 + ((((var_1_60) < (var_1_26)) ? (var_1_60) : (var_1_26)))) : (var_1_43 + ((((var_1_60) < (var_1_26)) ? (var_1_60) : (var_1_26))))));
  } else {
   var_1_46 = (var_1_35 - var_1_44);
  }
 } else {
  var_1_46 = (var_1_35 - var_1_12);
 }
 unsigned char stepLocal_7 = var_1_29 && var_1_33;
 signed long int stepLocal_6 = (((var_1_47) < (var_1_35)) ? (var_1_47) : (var_1_35));
 if (stepLocal_7 || var_1_29) {
  if (var_1_3 > ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) {
   var_1_36 = (((((((((var_1_18) > (last_1_var_1_36)) ? (var_1_18) : (last_1_var_1_36))) + (var_1_26 + var_1_27))) < (var_1_28)) ? ((((((var_1_18) > (last_1_var_1_36)) ? (var_1_18) : (last_1_var_1_36))) + (var_1_26 + var_1_27))) : (var_1_28)));
  }
 } else {
  if (stepLocal_6 <= (var_1_38 / ((((-50) > (var_1_27)) ? (-50) : (var_1_27))))) {
   var_1_36 = var_1_26;
  }
 }
 unsigned char stepLocal_12 = var_1_37;
 if (var_1_23 > var_1_20) {
  if (var_1_30 || stepLocal_12) {
   var_1_42 = var_1_27;
  } else {
   var_1_42 = ((((1) > (var_1_18)) ? (1) : (var_1_18)));
  }
 } else {
  if (var_1_20 >= var_1_22) {
   var_1_42 = (((var_1_43 - var_1_27) - var_1_39) + var_1_15);
  } else {
   var_1_42 = (var_1_26 + ((var_1_44 + var_1_45) - var_1_28));
  }
 }
 signed long int stepLocal_17 = 1000000;
 unsigned char stepLocal_16 = var_1_14 < var_1_40;
 unsigned char stepLocal_15 = var_1_27;
 if (stepLocal_16 || var_1_29) {
  if (var_1_1 < stepLocal_15) {
   var_1_55 = ((((var_1_38) > ((((((8) < 0 ) ? -(8) : (8))) - var_1_42))) ? (var_1_38) : ((((((8) < 0 ) ? -(8) : (8))) - var_1_42))));
  } else {
   if (stepLocal_17 < var_1_28) {
    if (var_1_56 >= (var_1_3 - var_1_53)) {
     var_1_55 = (((var_1_42 - var_1_47) + var_1_38) + (var_1_43 - var_1_10));
    } else {
     var_1_55 = ((((var_1_43) < ((((((var_1_38) > (var_1_26)) ? (var_1_38) : (var_1_26))) + var_1_13))) ? (var_1_43) : ((((((var_1_38) > (var_1_26)) ? (var_1_38) : (var_1_26))) + var_1_13))));
    }
   }
  }
 } else {
  var_1_55 = ((((((var_1_14) > (5)) ? (var_1_14) : (5))) + (var_1_44 - last_1_var_1_55)) + (var_1_13 + var_1_60));
 }
 if (! var_1_31) {
  var_1_58 = ((var_1_60 + var_1_45) + (var_1_55 + var_1_38));
 } else {
  var_1_58 = ((((var_1_42) > (var_1_27)) ? (var_1_42) : (var_1_27)));
 }
 unsigned char stepLocal_5 = var_1_29;
 if (var_1_32 || stepLocal_5) {
  var_1_34 = ((20935 - var_1_42) + var_1_18);
 } else {
  var_1_34 = ((var_1_35 - var_1_42) - ((((var_1_26) > (var_1_47)) ? (var_1_26) : (var_1_47))));
 }
 unsigned long int stepLocal_14 = - var_1_38;
 unsigned char stepLocal_13 = (var_1_34 != var_1_36) || var_1_29;
 if (var_1_60 > stepLocal_14) {
  if (stepLocal_13 || (var_1_29 && var_1_33)) {
   var_1_49 = (((var_1_23 - var_1_51) + var_1_52) + ((var_1_53 + var_1_54) - var_1_22));
  } else {
   var_1_49 = var_1_52;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483647);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 536870911);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 536870911);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -16383);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -16383);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 4611686.018427388000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 2305843.009213691400e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 64);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 31);
 assume_abort_if_not(var_1_27 <= 64);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 63);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 49150);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 24575);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 8191);
 assume_abort_if_not(var_1_44 <= 16384);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 8192);
 assume_abort_if_not(var_1_45 <= 16383);
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691400e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -230584.3009213691400e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691400e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 2305843.009213691400e+12F && var_1_54 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_19 = var_1_19;
 last_1_var_1_36 = var_1_36;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_58 = var_1_58;
}
int property(void) {
 return ((((((((((((((((((((((var_1_56 > (var_1_3 - var_1_4)) ? (((var_1_3 < var_1_4) && var_1_29) ? ((-256 >= var_1_59) ? (var_1_1 == ((signed long int) ((((var_1_7) < (var_1_8)) ? (var_1_7) : (var_1_8))))) : (var_1_1 == ((signed long int) (((1000000000 - var_1_9) + (1000000000 - var_1_10)) - var_1_11)))) : (var_1_1 == ((signed long int) (((((var_1_9 - var_1_11)) < (((64 - var_1_10) + -100))) ? ((var_1_9 - var_1_11)) : (((64 - var_1_10) + -100))))))) : ((var_1_8 >= var_1_10) ? (var_1_1 == ((signed long int) var_1_10)) : 1)) && ((! var_1_29) ? (var_1_12 == ((signed short int) (var_1_13 + var_1_14))) : 1)) && ((((var_1_16 - 1.58f) - var_1_4) >= var_1_56) ? (((- var_1_3) <= (var_1_56 / var_1_17)) ? (var_1_15 == ((unsigned char) ((((var_1_18) < (10)) ? (var_1_18) : (10))))) : (var_1_15 == ((unsigned char) ((((100) < 0 ) ? -(100) : (100)))))) : 1)) && (var_1_29 ? (var_1_19 == ((double) (15.6 - (var_1_20 - ((((32.5) < 0 ) ? -(32.5) : (32.5))))))) : (var_1_19 == ((double) (var_1_21 + ((var_1_22 - var_1_23) - var_1_24)))))) && (((var_1_16 / ((((var_1_22) > (10000.5)) ? (var_1_22) : (10000.5)))) < var_1_3) ? (var_1_25 == ((unsigned char) ((64 + var_1_26) - ((var_1_27 + 32) - var_1_28)))) : 1)) && ((last_1_var_1_55 > last_1_var_1_58) ? (var_1_5 ? (var_1_29 == ((unsigned char) (var_1_30 && var_1_31))) : (var_1_29 == ((unsigned char) (! var_1_31)))) : (((~ -50) > (last_1_var_1_40 / var_1_26)) ? ((last_1_var_1_19 > (- var_1_16)) ? (var_1_29 == ((unsigned char) (var_1_30 || var_1_32))) : (var_1_29 == ((unsigned char) var_1_33))) : (var_1_29 == ((unsigned char) var_1_31))))) && ((var_1_32 || var_1_29) ? (var_1_34 == ((unsigned short int) ((20935 - var_1_42) + var_1_18))) : (var_1_34 == ((unsigned short int) ((var_1_35 - var_1_42) - ((((var_1_26) > (var_1_47)) ? (var_1_26) : (var_1_47)))))))) && (((var_1_29 && var_1_33) || var_1_29) ? ((var_1_3 > ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) ? (var_1_36 == ((unsigned short int) (((((((((var_1_18) > (last_1_var_1_36)) ? (var_1_18) : (last_1_var_1_36))) + (var_1_26 + var_1_27))) < (var_1_28)) ? ((((((var_1_18) > (last_1_var_1_36)) ? (var_1_18) : (last_1_var_1_36))) + (var_1_26 + var_1_27))) : (var_1_28))))) : 1) : ((((((var_1_47) < (var_1_35)) ? (var_1_47) : (var_1_35))) <= (var_1_38 / ((((-50) > (var_1_27)) ? (-50) : (var_1_27))))) ? (var_1_36 == ((unsigned short int) var_1_26)) : 1))) && ((var_1_24 <= (1.6 + var_1_22)) ? (var_1_38 == ((unsigned long int) (((((var_1_26) > (last_1_var_1_36)) ? (var_1_26) : (last_1_var_1_36))) + ((((var_1_11) < (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28))))) ? (var_1_11) : (((((var_1_18) > (var_1_28)) ? (var_1_18) : (var_1_28))))))))) : 1)) && ((var_1_26 > var_1_59) ? ((var_1_26 <= var_1_9) ? ((((((0.6f) < 0 ) ? -(0.6f) : (0.6f))) <= ((var_1_16 + var_1_22) + var_1_4)) ? (var_1_39 == ((unsigned char) (var_1_27 + var_1_28))) : (var_1_31 ? (var_1_39 == ((unsigned char) var_1_18)) : ((var_1_13 <= var_1_26) ? (var_1_39 == ((unsigned char) (var_1_26 + var_1_28))) : (var_1_39 == ((unsigned char) (((((var_1_27 + var_1_28)) < (var_1_18)) ? ((var_1_27 + var_1_28)) : (var_1_18)))))))) : (var_1_39 == ((unsigned char) var_1_28))) : ((var_1_35 <= var_1_8) ? ((! var_1_29) ? (var_1_39 == ((unsigned char) var_1_28)) : (var_1_39 == ((unsigned char) var_1_18))) : 1))) && ((var_1_24 != (var_1_3 + var_1_56)) ? (var_1_40 == ((signed long int) ((((var_1_28) > (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59))))) ? (var_1_28) : (((((var_1_59) < 0 ) ? -(var_1_59) : (var_1_59)))))))) : (var_1_40 == ((signed long int) (var_1_27 + -100))))) && ((var_1_23 > var_1_20) ? ((var_1_30 || var_1_37) ? (var_1_42 == ((unsigned short int) var_1_27)) : (var_1_42 == ((unsigned short int) ((((1) > (var_1_18)) ? (1) : (var_1_18)))))) : ((var_1_20 >= var_1_22) ? (var_1_42 == ((unsigned short int) (((var_1_43 - var_1_27) - var_1_39) + var_1_15))) : (var_1_42 == ((unsigned short int) (var_1_26 + ((var_1_44 + var_1_45) - var_1_28))))))) && ((var_1_48 > (var_1_20 - var_1_4)) ? ((var_1_3 > var_1_48) ? (var_1_46 == ((unsigned short int) ((((var_1_43 + ((((var_1_60) < (var_1_26)) ? (var_1_60) : (var_1_26)))) < 0 ) ? -(var_1_43 + ((((var_1_60) < (var_1_26)) ? (var_1_60) : (var_1_26)))) : (var_1_43 + ((((var_1_60) < (var_1_26)) ? (var_1_60) : (var_1_26)))))))) : (var_1_46 == ((unsigned short int) (var_1_35 - var_1_44)))) : (var_1_46 == ((unsigned short int) (var_1_35 - var_1_12))))) && (var_1_47 == ((signed short int) ((var_1_1 + var_1_12) + (((((var_1_27 + var_1_26)) > (var_1_13)) ? ((var_1_27 + var_1_26)) : (var_1_13))))))) && (var_1_33 ? (var_1_48 == ((double) (var_1_22 - ((((var_1_23) > (var_1_24)) ? (var_1_23) : (var_1_24)))))) : (var_1_48 == ((double) (var_1_20 - ((((9.99999999999995E13) > (8.25)) ? (9.99999999999995E13) : (8.25)))))))) && ((var_1_60 > (- var_1_38)) ? ((((var_1_34 != var_1_36) || var_1_29) || (var_1_29 && var_1_33)) ? (var_1_49 == ((double) (((var_1_23 - var_1_51) + var_1_52) + ((var_1_53 + var_1_54) - var_1_22)))) : (var_1_49 == ((double) var_1_52))) : 1)) && (((var_1_14 < var_1_40) || var_1_29) ? ((var_1_1 < var_1_27) ? (var_1_55 == ((signed long int) ((((var_1_38) > ((((((8) < 0 ) ? -(8) : (8))) - var_1_42))) ? (var_1_38) : ((((((8) < 0 ) ? -(8) : (8))) - var_1_42)))))) : ((1000000 < var_1_28) ? ((var_1_56 >= (var_1_3 - var_1_53)) ? (var_1_55 == ((signed long int) (((var_1_42 - var_1_47) + var_1_38) + (var_1_43 - var_1_10)))) : (var_1_55 == ((signed long int) ((((var_1_43) < ((((((var_1_38) > (var_1_26)) ? (var_1_38) : (var_1_26))) + var_1_13))) ? (var_1_43) : ((((((var_1_38) > (var_1_26)) ? (var_1_38) : (var_1_26))) + var_1_13))))))) : 1)) : (var_1_55 == ((signed long int) ((((((var_1_14) > (5)) ? (var_1_14) : (5))) + (var_1_44 - last_1_var_1_55)) + (var_1_13 + var_1_60)))))) && ((var_1_18 >= var_1_7) ? (var_1_56 == ((double) (0.8 + (63.38 - (var_1_22 - var_1_51))))) : 1)) && (var_1_31 ? (var_1_57 == ((signed char) (var_1_27 - var_1_28))) : (var_1_57 == ((signed char) var_1_28)))) && ((! var_1_31) ? (var_1_58 == ((signed long int) ((var_1_60 + var_1_45) + (var_1_55 + var_1_38)))) : (var_1_58 == ((signed long int) ((((var_1_42) > (var_1_27)) ? (var_1_42) : (var_1_27))))))) && (var_1_59 == ((signed long int) var_1_35))) && (var_1_60 == ((signed short int) var_1_39))
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
