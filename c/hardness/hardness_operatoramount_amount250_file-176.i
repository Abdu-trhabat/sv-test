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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 2;
float var_1_2 = 256.75;
float var_1_3 = 8.5;
unsigned char var_1_5 = 16;
unsigned char var_1_6 = 50;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 64;
unsigned short int var_1_13 = 25;
unsigned short int var_1_14 = 54326;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed char var_1_17 = 64;
float var_1_18 = 128.25;
unsigned long int var_1_19 = 8;
signed long int var_1_20 = 0;
signed long int var_1_21 = -10;
double var_1_22 = 127.5;
double var_1_23 = 0.298;
double var_1_24 = 256.25;
double var_1_25 = 7.5;
float var_1_26 = 64.2;
unsigned char var_1_27 = 128;
float var_1_28 = 7.5;
float var_1_29 = 500.6;
float var_1_30 = 31.5;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
signed long int var_1_34 = 64;
signed char var_1_35 = -10;
signed char var_1_36 = 100;
signed char var_1_37 = 1;
signed char var_1_38 = 0;
signed char var_1_39 = 16;
signed long int var_1_40 = 256;
signed long int var_1_42 = -10000000;
unsigned long int var_1_43 = 10;
unsigned long int var_1_44 = 4242087860;
unsigned long int var_1_45 = 1114500113;
unsigned long int var_1_46 = 0;
signed char var_1_47 = 64;
signed char var_1_48 = 64;
signed short int var_1_49 = 25;
unsigned long int var_1_50 = 10000;
signed short int var_1_51 = 10;
signed char var_1_52 = 8;
double var_1_53 = 7.625;
unsigned char var_1_54 = 0;
float var_1_55 = -0.875;
unsigned char last_1_var_1_1 = 2;
unsigned char last_1_var_1_11 = 16;
unsigned char last_1_var_1_12 = 64;
unsigned short int last_1_var_1_13 = 25;
unsigned long int last_1_var_1_19 = 8;
unsigned char last_1_var_1_31 = 0;
signed long int last_1_var_1_40 = 256;
unsigned long int last_1_var_1_43 = 10;
unsigned long int last_1_var_1_46 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_8 = last_1_var_1_40;
 if (last_1_var_1_19 > stepLocal_8) {
  var_1_31 = (! var_1_32);
 } else {
  var_1_31 = (var_1_32 && var_1_33);
 }
 if (var_1_31) {
  var_1_9 = (var_1_8 + var_1_7);
 }
 unsigned long int stepLocal_0 = var_1_14 - last_1_var_1_46;
 if (((((last_1_var_1_19) > (last_1_var_1_46)) ? (last_1_var_1_19) : (last_1_var_1_46))) == stepLocal_0) {
  var_1_15 = (last_1_var_1_31 && var_1_16);
 } else {
  var_1_15 = (! (! var_1_16));
 }
 if (last_1_var_1_40 > var_1_37) {
  if (var_1_36 < var_1_5) {
   if (((var_1_47 - 10) - (var_1_48 - var_1_38)) > last_1_var_1_43) {
    var_1_46 = var_1_14;
   } else {
    var_1_46 = (((last_1_var_1_40 + var_1_47) + var_1_7) + 10000u);
   }
  } else {
   var_1_46 = ((((((((((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) < (var_1_48)) ? (((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) : (var_1_48)))) < (2u)) ? (((((((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) < (var_1_48)) ? (((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) : (var_1_48)))) : (2u)));
  }
 }
 signed long int stepLocal_1 = last_1_var_1_1 * var_1_8;
 if (stepLocal_1 <= (last_1_var_1_40 ^ (last_1_var_1_11 / var_1_14))) {
  var_1_19 = (last_1_var_1_11 + last_1_var_1_1);
 } else {
  var_1_19 = last_1_var_1_1;
 }
 if (50 < var_1_19) {
  var_1_11 = var_1_8;
 }
 if (2u <= var_1_19) {
  var_1_55 = ((((var_1_23) > (((((var_1_30) > (var_1_28)) ? (var_1_30) : (var_1_28))))) ? (var_1_23) : (((((var_1_30) > (var_1_28)) ? (var_1_30) : (var_1_28))))));
 } else {
  if ((- (~ var_1_27)) == var_1_19) {
   if (8.375 <= var_1_3) {
    var_1_55 = var_1_24;
   } else {
    var_1_55 = var_1_29;
   }
  } else {
   var_1_55 = var_1_28;
  }
 }
 var_1_6 = ((64 - (var_1_7 - var_1_8)) + var_1_5);
 if (var_1_3 < var_1_2) {
  var_1_12 = var_1_8;
 }
 if (9999999.4f >= (var_1_3 / var_1_18)) {
  if (var_1_15) {
   var_1_17 = ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8)));
  }
 } else {
  var_1_17 = (var_1_8 - var_1_7);
 }
 if (var_1_15 && var_1_32) {
  var_1_42 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
 }
 var_1_51 = var_1_38;
 if (var_1_33) {
  var_1_52 = var_1_36;
 } else {
  var_1_52 = 0;
 }
 var_1_53 = var_1_29;
 var_1_54 = var_1_48;
 signed long int stepLocal_20 = 50 / ((((var_1_36) > (var_1_7)) ? (var_1_36) : (var_1_7)));
 unsigned long int stepLocal_19 = var_1_19;
 if (! var_1_32) {
  if (var_1_14 < stepLocal_20) {
   if (var_1_15) {
    if (var_1_5 < stepLocal_19) {
     var_1_43 = (var_1_44 - ((((var_1_45 - var_1_38) < 0 ) ? -(var_1_45 - var_1_38) : (var_1_45 - var_1_38))));
    }
   } else {
    var_1_43 = 32u;
   }
  }
 } else {
  var_1_43 = 0u;
 }
 if (! ((var_1_2 - var_1_3) < var_1_55)) {
  var_1_1 = (128 - var_1_5);
 }
 unsigned char stepLocal_13 = var_1_33;
 signed short int stepLocal_12 = var_1_51;
 unsigned char stepLocal_11 = var_1_27;
 unsigned char stepLocal_10 = var_1_12;
 if (stepLocal_10 != var_1_46) {
  var_1_35 = var_1_7;
 } else {
  if (4.6 > var_1_2) {
   if (stepLocal_13 || (var_1_8 < var_1_1)) {
    if (var_1_30 >= ((((var_1_24) > (var_1_18)) ? (var_1_24) : (var_1_18)))) {
     var_1_35 = ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)));
    } else {
     var_1_35 = (var_1_7 - var_1_8);
    }
   } else {
    if (stepLocal_12 > (var_1_6 / var_1_27)) {
     var_1_35 = var_1_8;
    } else {
     var_1_35 = (((((16) > ((var_1_36 - var_1_8))) ? (16) : ((var_1_36 - var_1_8)))) - ((var_1_7 - var_1_37) + var_1_38));
    }
   }
  } else {
   if (stepLocal_11 != var_1_36) {
    var_1_35 = ((((var_1_36) > (var_1_7)) ? (var_1_36) : (var_1_7)));
   } else {
    var_1_35 = ((((((((100) > (var_1_7)) ? (100) : (var_1_7)))) < (0)) ? (((((100) > (var_1_7)) ? (100) : (var_1_7)))) : (0)));
   }
  }
 }
 unsigned long int stepLocal_21 = var_1_54 + ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44)));
 if ((var_1_19 % var_1_50) >= stepLocal_21) {
  var_1_49 = (50 - ((((var_1_5) > (var_1_27)) ? (var_1_5) : (var_1_27))));
 } else {
  var_1_49 = var_1_1;
 }
 unsigned long int stepLocal_4 = var_1_43;
 if ((var_1_19 + var_1_49) <= stepLocal_4) {
  var_1_22 = 1.2;
 } else {
  var_1_22 = ((var_1_23 - var_1_24) + var_1_25);
 }
 unsigned long int stepLocal_9 = ((((128 * var_1_46)) > (-2)) ? ((128 * var_1_46)) : (-2));
 if ((var_1_7 - var_1_49) > stepLocal_9) {
  var_1_34 = (var_1_9 - var_1_27);
 } else {
  var_1_34 = (var_1_49 + (4 + (128 - var_1_5)));
 }
 if (var_1_5 <= var_1_34) {
  if (var_1_15) {
   var_1_13 = (var_1_14 - ((((var_1_8) > (last_1_var_1_13)) ? (var_1_8) : (last_1_var_1_13))));
  } else {
   var_1_13 = (((((var_1_14 - last_1_var_1_13)) < ((((((var_1_7) > (var_1_49)) ? (var_1_7) : (var_1_49))) + var_1_5))) ? ((var_1_14 - last_1_var_1_13)) : ((((((var_1_7) > (var_1_49)) ? (var_1_7) : (var_1_49))) + var_1_5))));
  }
 } else {
  var_1_13 = var_1_14;
 }
 unsigned char stepLocal_3 = (-64 + var_1_49) > var_1_34;
 signed long int stepLocal_2 = var_1_34;
 if ((- var_1_3) > var_1_18) {
  var_1_20 = (var_1_21 + ((((var_1_49) < ((var_1_34 - var_1_11))) ? (var_1_49) : ((var_1_34 - var_1_11)))));
 } else {
  if (var_1_51 <= stepLocal_2) {
   if (((var_1_11 * var_1_43) >= var_1_34) || stepLocal_3) {
    var_1_20 = (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) + var_1_7);
   }
  }
 }
 unsigned char stepLocal_15 = var_1_5;
 unsigned char stepLocal_14 = var_1_31;
 if (var_1_16 || stepLocal_14) {
  if (var_1_53 >= var_1_25) {
   var_1_39 = (var_1_38 - ((((var_1_7) > (((((100) > (var_1_8)) ? (100) : (var_1_8))))) ? (var_1_7) : (((((100) > (var_1_8)) ? (100) : (var_1_8)))))));
  } else {
   var_1_39 = ((((var_1_7) < (var_1_38)) ? (var_1_7) : (var_1_38)));
  }
 } else {
  if ((var_1_34 | (32u / var_1_7)) != stepLocal_15) {
   var_1_39 = (var_1_8 + var_1_38);
  } else {
   var_1_39 = (var_1_7 - (((((2) > (var_1_8)) ? (2) : (var_1_8))) + var_1_38));
  }
 }
 signed long int stepLocal_18 = (var_1_36 - var_1_1) / var_1_27;
 unsigned char stepLocal_17 = var_1_6;
 unsigned char stepLocal_16 = var_1_15;
 if (((((var_1_6) < ((last_1_var_1_40 + var_1_6))) ? (var_1_6) : ((last_1_var_1_40 + var_1_6)))) <= stepLocal_18) {
  if (((var_1_27 - var_1_37) * 25) < stepLocal_17) {
   var_1_40 = ((((var_1_14) > (((((var_1_34) > (var_1_46)) ? (var_1_34) : (var_1_46))))) ? (var_1_14) : (((((var_1_34) > (var_1_46)) ? (var_1_34) : (var_1_46))))));
  } else {
   if (stepLocal_16 && var_1_10) {
    if (var_1_16) {
     var_1_40 = (var_1_21 + var_1_37);
    }
   } else {
    var_1_40 = (var_1_54 + ((((var_1_36) > (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_36) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))));
   }
  }
 }
 unsigned char stepLocal_7 = var_1_8;
 unsigned char stepLocal_6 = var_1_16;
 signed long int stepLocal_5 = var_1_40 - var_1_54;
 if (stepLocal_7 != (var_1_27 - 8)) {
  if (stepLocal_6 && var_1_31) {
   var_1_26 = (var_1_25 + var_1_23);
  } else {
   if (stepLocal_5 > var_1_5) {
    var_1_26 = ((((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) + var_1_30) + var_1_24);
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 31);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 31);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -1073741823);
 assume_abort_if_not(var_1_21 <= 1073741823);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 255);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 62);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 31);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 2147483647);
 assume_abort_if_not(var_1_44 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 1073741823);
 assume_abort_if_not(var_1_45 <= 2147483647);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 63);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 63);
 assume_abort_if_not(var_1_48 <= 127);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 4294967295);
 assume_abort_if_not(var_1_50 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_43 = var_1_43;
 last_1_var_1_46 = var_1_46;
}
int property(void) {
 return ((((((((((((((((((((((((((! ((var_1_2 - var_1_3) < var_1_55)) ? (var_1_1 == ((unsigned char) (128 - var_1_5))) : 1) && (var_1_6 == ((unsigned char) ((64 - (var_1_7 - var_1_8)) + var_1_5)))) && (var_1_31 ? (var_1_9 == ((unsigned char) (var_1_8 + var_1_7))) : 1)) && ((50 < var_1_19) ? (var_1_11 == ((unsigned char) var_1_8)) : 1)) && ((var_1_3 < var_1_2) ? (var_1_12 == ((unsigned char) var_1_8)) : 1)) && ((var_1_5 <= var_1_34) ? (var_1_15 ? (var_1_13 == ((unsigned short int) (var_1_14 - ((((var_1_8) > (last_1_var_1_13)) ? (var_1_8) : (last_1_var_1_13)))))) : (var_1_13 == ((unsigned short int) (((((var_1_14 - last_1_var_1_13)) < ((((((var_1_7) > (var_1_49)) ? (var_1_7) : (var_1_49))) + var_1_5))) ? ((var_1_14 - last_1_var_1_13)) : ((((((var_1_7) > (var_1_49)) ? (var_1_7) : (var_1_49))) + var_1_5))))))) : (var_1_13 == ((unsigned short int) var_1_14)))) && ((((((last_1_var_1_19) > (last_1_var_1_46)) ? (last_1_var_1_19) : (last_1_var_1_46))) == (var_1_14 - last_1_var_1_46)) ? (var_1_15 == ((unsigned char) (last_1_var_1_31 && var_1_16))) : (var_1_15 == ((unsigned char) (! (! var_1_16)))))) && ((9999999.4f >= (var_1_3 / var_1_18)) ? (var_1_15 ? (var_1_17 == ((signed char) ((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))))) : 1) : (var_1_17 == ((signed char) (var_1_8 - var_1_7))))) && (((last_1_var_1_1 * var_1_8) <= (last_1_var_1_40 ^ (last_1_var_1_11 / var_1_14))) ? (var_1_19 == ((unsigned long int) (last_1_var_1_11 + last_1_var_1_1))) : (var_1_19 == ((unsigned long int) last_1_var_1_1)))) && (((- var_1_3) > var_1_18) ? (var_1_20 == ((signed long int) (var_1_21 + ((((var_1_49) < ((var_1_34 - var_1_11))) ? (var_1_49) : ((var_1_34 - var_1_11))))))) : ((var_1_51 <= var_1_34) ? ((((var_1_11 * var_1_43) >= var_1_34) || ((-64 + var_1_49) > var_1_34)) ? (var_1_20 == ((signed long int) (((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) + var_1_7))) : 1) : 1))) && (((var_1_19 + var_1_49) <= var_1_43) ? (var_1_22 == ((double) 1.2)) : (var_1_22 == ((double) ((var_1_23 - var_1_24) + var_1_25))))) && ((var_1_8 != (var_1_27 - 8)) ? ((var_1_16 && var_1_31) ? (var_1_26 == ((float) (var_1_25 + var_1_23))) : (((var_1_40 - var_1_54) > var_1_5) ? (var_1_26 == ((float) ((((((var_1_28) < (var_1_29)) ? (var_1_28) : (var_1_29))) + var_1_30) + var_1_24))) : 1)) : 1)) && ((last_1_var_1_19 > last_1_var_1_40) ? (var_1_31 == ((unsigned char) (! var_1_32))) : (var_1_31 == ((unsigned char) (var_1_32 && var_1_33))))) && (((var_1_7 - var_1_49) > (((((128 * var_1_46)) > (-2)) ? ((128 * var_1_46)) : (-2)))) ? (var_1_34 == ((signed long int) (var_1_9 - var_1_27))) : (var_1_34 == ((signed long int) (var_1_49 + (4 + (128 - var_1_5))))))) && ((var_1_12 != var_1_46) ? (var_1_35 == ((signed char) var_1_7)) : ((4.6 > var_1_2) ? ((var_1_33 || (var_1_8 < var_1_1)) ? ((var_1_30 >= ((((var_1_24) > (var_1_18)) ? (var_1_24) : (var_1_18)))) ? (var_1_35 == ((signed char) ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) : (var_1_35 == ((signed char) (var_1_7 - var_1_8)))) : ((var_1_51 > (var_1_6 / var_1_27)) ? (var_1_35 == ((signed char) var_1_8)) : (var_1_35 == ((signed char) (((((16) > ((var_1_36 - var_1_8))) ? (16) : ((var_1_36 - var_1_8)))) - ((var_1_7 - var_1_37) + var_1_38)))))) : ((var_1_27 != var_1_36) ? (var_1_35 == ((signed char) ((((var_1_36) > (var_1_7)) ? (var_1_36) : (var_1_7))))) : (var_1_35 == ((signed char) ((((((((100) > (var_1_7)) ? (100) : (var_1_7)))) < (0)) ? (((((100) > (var_1_7)) ? (100) : (var_1_7)))) : (0))))))))) && ((var_1_16 || var_1_31) ? ((var_1_53 >= var_1_25) ? (var_1_39 == ((signed char) (var_1_38 - ((((var_1_7) > (((((100) > (var_1_8)) ? (100) : (var_1_8))))) ? (var_1_7) : (((((100) > (var_1_8)) ? (100) : (var_1_8))))))))) : (var_1_39 == ((signed char) ((((var_1_7) < (var_1_38)) ? (var_1_7) : (var_1_38)))))) : (((var_1_34 | (32u / var_1_7)) != var_1_5) ? (var_1_39 == ((signed char) (var_1_8 + var_1_38))) : (var_1_39 == ((signed char) (var_1_7 - (((((2) > (var_1_8)) ? (2) : (var_1_8))) + var_1_38))))))) && ((((((var_1_6) < ((last_1_var_1_40 + var_1_6))) ? (var_1_6) : ((last_1_var_1_40 + var_1_6)))) <= ((var_1_36 - var_1_1) / var_1_27)) ? ((((var_1_27 - var_1_37) * 25) < var_1_6) ? (var_1_40 == ((signed long int) ((((var_1_14) > (((((var_1_34) > (var_1_46)) ? (var_1_34) : (var_1_46))))) ? (var_1_14) : (((((var_1_34) > (var_1_46)) ? (var_1_34) : (var_1_46)))))))) : ((var_1_15 && var_1_10) ? (var_1_16 ? (var_1_40 == ((signed long int) (var_1_21 + var_1_37))) : 1) : (var_1_40 == ((signed long int) (var_1_54 + ((((var_1_36) > (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) ? (var_1_36) : (((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))))))))) : 1)) && ((var_1_15 && var_1_32) ? (var_1_42 == ((signed long int) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : 1)) && ((! var_1_32) ? ((var_1_14 < (50 / ((((var_1_36) > (var_1_7)) ? (var_1_36) : (var_1_7))))) ? (var_1_15 ? ((var_1_5 < var_1_19) ? (var_1_43 == ((unsigned long int) (var_1_44 - ((((var_1_45 - var_1_38) < 0 ) ? -(var_1_45 - var_1_38) : (var_1_45 - var_1_38)))))) : 1) : (var_1_43 == ((unsigned long int) 32u))) : 1) : (var_1_43 == ((unsigned long int) 0u)))) && ((last_1_var_1_40 > var_1_37) ? ((var_1_36 < var_1_5) ? ((((var_1_47 - 10) - (var_1_48 - var_1_38)) > last_1_var_1_43) ? (var_1_46 == ((unsigned long int) var_1_14)) : (var_1_46 == ((unsigned long int) (((last_1_var_1_40 + var_1_47) + var_1_7) + 10000u)))) : (var_1_46 == ((unsigned long int) ((((((((((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) < (var_1_48)) ? (((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) : (var_1_48)))) < (2u)) ? (((((((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) < (var_1_48)) ? (((((var_1_8) > (last_1_var_1_12)) ? (var_1_8) : (last_1_var_1_12)))) : (var_1_48)))) : (2u)))))) : 1)) && (((var_1_19 % var_1_50) >= (var_1_54 + ((((var_1_43) > (var_1_44)) ? (var_1_43) : (var_1_44))))) ? (var_1_49 == ((signed short int) (50 - ((((var_1_5) > (var_1_27)) ? (var_1_5) : (var_1_27)))))) : (var_1_49 == ((signed short int) var_1_1)))) && (var_1_51 == ((signed short int) var_1_38))) && (var_1_33 ? (var_1_52 == ((signed char) var_1_36)) : (var_1_52 == ((signed char) 0)))) && (var_1_53 == ((double) var_1_29))) && (var_1_54 == ((unsigned char) var_1_48))) && ((2u <= var_1_19) ? (var_1_55 == ((float) ((((var_1_23) > (((((var_1_30) > (var_1_28)) ? (var_1_30) : (var_1_28))))) ? (var_1_23) : (((((var_1_30) > (var_1_28)) ? (var_1_30) : (var_1_28)))))))) : (((- (~ var_1_27)) == var_1_19) ? ((8.375 <= var_1_3) ? (var_1_55 == ((float) var_1_24)) : (var_1_55 == ((float) var_1_29))) : (var_1_55 == ((float) var_1_28))))
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
