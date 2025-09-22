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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 2;
signed char var_1_3 = 10;
signed char var_1_4 = 64;
signed char var_1_5 = 5;
signed long int var_1_7 = 5;
signed long int var_1_8 = -10;
signed long int var_1_9 = -4;
double var_1_10 = 15.8;
double var_1_11 = 4.875;
double var_1_13 = 0.75;
signed long int var_1_14 = 1574757398;
unsigned long int var_1_15 = 50;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 1;
unsigned long int var_1_21 = 0;
unsigned long int var_1_22 = 1787861449;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
double var_1_27 = 99.5;
double var_1_29 = 0.0;
double var_1_30 = 7.2;
double var_1_31 = 2.25;
double var_1_32 = 5.3;
unsigned char var_1_33 = 32;
signed long int var_1_34 = -25;
signed long int var_1_35 = 1000000;
float var_1_36 = 4.5;
float var_1_38 = 64.1;
unsigned short int var_1_39 = 5;
unsigned short int var_1_40 = 17330;
signed long int var_1_41 = 16;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 100;
unsigned short int var_1_46 = 2;
float var_1_47 = 50.1;
unsigned short int var_1_48 = 0;
unsigned short int var_1_49 = 30257;
float var_1_50 = 31.5;
double var_1_51 = 0.0;
unsigned char var_1_52 = 128;
unsigned char var_1_53 = 64;
unsigned long int var_1_54 = 32;
unsigned long int var_1_55 = 32;
unsigned long int var_1_56 = 3623996685;
double var_1_57 = 128.4;
unsigned char var_1_60 = 0;
float var_1_61 = -0.625;
unsigned char var_1_62 = 16;
signed long int last_1_var_1_1 = 2;
unsigned long int last_1_var_1_15 = 50;
unsigned char last_1_var_1_19 = 1;
unsigned long int last_1_var_1_21 = 0;
unsigned char last_1_var_1_23 = 0;
double last_1_var_1_27 = 99.5;
signed long int last_1_var_1_34 = -25;
unsigned short int last_1_var_1_39 = 5;
unsigned long int last_1_var_1_54 = 32;
unsigned long int last_1_var_1_55 = 32;
unsigned char last_1_var_1_60 = 0;
unsigned char last_1_var_1_62 = 16;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = last_1_var_1_19;
 if (((var_1_10 - var_1_11) >= (last_1_var_1_27 / var_1_13)) || stepLocal_2) {
  var_1_9 = ((var_1_14 - ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) - var_1_7);
 } else {
  var_1_9 = var_1_4;
 }
 unsigned char stepLocal_12 = last_1_var_1_60;
 unsigned char stepLocal_11 = last_1_var_1_1 < (var_1_5 << last_1_var_1_34);
 if (stepLocal_12 || (last_1_var_1_19 || var_1_25)) {
  var_1_41 = (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - last_1_var_1_55);
 } else {
  if (stepLocal_11 && (last_1_var_1_23 || var_1_25)) {
   var_1_41 = (var_1_40 - last_1_var_1_55);
  }
 }
 if (((((var_1_41) < (var_1_44)) ? (var_1_41) : (var_1_44))) >= var_1_22) {
  var_1_60 = (var_1_26 && var_1_20);
 } else {
  var_1_60 = (var_1_24 && var_1_25);
 }
 signed long int stepLocal_5 = var_1_8 + last_1_var_1_1;
 signed long int stepLocal_4 = var_1_8 * (var_1_7 - var_1_5);
 if (((var_1_4 >> 1) | last_1_var_1_55) > stepLocal_4) {
  var_1_23 = ((((((last_1_var_1_55) > (var_1_4)) ? (last_1_var_1_55) : (var_1_4))) >= var_1_3) && var_1_24);
 } else {
  if (stepLocal_5 >= last_1_var_1_21) {
   var_1_23 = (last_1_var_1_60 || (! var_1_25));
  } else {
   var_1_23 = (var_1_20 && var_1_26);
  }
 }
 unsigned char stepLocal_3 = var_1_23 || var_1_20;
 if (stepLocal_3 || (var_1_11 <= var_1_10)) {
  var_1_21 = (var_1_7 + var_1_4);
 } else {
  var_1_21 = (((((var_1_4 + (var_1_22 - var_1_7))) < (var_1_14)) ? ((var_1_4 + (var_1_22 - var_1_7))) : (var_1_14)));
 }
 if (last_1_var_1_54 >= last_1_var_1_34) {
  var_1_55 = ((((((var_1_56 - var_1_45)) > ((3470546746u - last_1_var_1_54))) ? ((var_1_56 - var_1_45)) : ((3470546746u - last_1_var_1_54)))) - (var_1_22 - 64u));
 }
 signed long int stepLocal_7 = var_1_14;
 if (((((last_1_var_1_55) < 0 ) ? -(last_1_var_1_55) : (last_1_var_1_55))) <= stepLocal_7) {
  var_1_34 = var_1_3;
 } else {
  if (last_1_var_1_19) {
   var_1_34 = ((var_1_5 + var_1_7) - last_1_var_1_62);
  } else {
   var_1_34 = (-64 + (var_1_4 + var_1_35));
  }
 }
 if (last_1_var_1_23) {
  var_1_19 = ((! last_1_var_1_23) || var_1_20);
 }
 if ((var_1_9 | var_1_3) > var_1_5) {
  var_1_33 = (var_1_4 + var_1_5);
 } else {
  if ((2 - var_1_4) <= var_1_9) {
   if (! (! (16.5f <= var_1_31))) {
    var_1_33 = var_1_4;
   }
  } else {
   var_1_33 = var_1_5;
  }
 }
 var_1_47 = (var_1_30 + (9.8f - 32.5f));
 unsigned char stepLocal_15 = var_1_30 <= (- var_1_11);
 if (10.6f < var_1_47) {
  if (var_1_60 && stepLocal_15) {
   var_1_50 = var_1_29;
  }
 } else {
  if ((((((16.375) < (var_1_11)) ? (16.375) : (var_1_11))) - (var_1_51 - 1.000000075E7)) > var_1_32) {
   var_1_50 = (var_1_38 + var_1_30);
  } else {
   var_1_50 = (((((((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) - var_1_29)) > (var_1_38)) ? ((((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) - var_1_29)) : (var_1_38)));
  }
 }
 var_1_52 = (var_1_44 + ((((((((var_1_4) < (var_1_45)) ? (var_1_4) : (var_1_45)))) > ((var_1_53 - var_1_5))) ? (((((var_1_4) < (var_1_45)) ? (var_1_4) : (var_1_45)))) : ((var_1_53 - var_1_5)))));
 var_1_61 = var_1_31;
 var_1_62 = var_1_4;
 unsigned long int stepLocal_10 = var_1_55;
 if (last_1_var_1_39 != stepLocal_10) {
  var_1_39 = ((((((var_1_40 - 10) + var_1_9)) > ((var_1_4 + var_1_5))) ? (((var_1_40 - 10) + var_1_9)) : ((var_1_4 + var_1_5))));
 } else {
  var_1_39 = (var_1_40 + var_1_9);
 }
 signed long int stepLocal_1 = var_1_3 - (var_1_4 - var_1_5);
 signed long int stepLocal_0 = (((var_1_5) > (((((var_1_41) > (var_1_7)) ? (var_1_41) : (var_1_7))))) ? (var_1_5) : (((((var_1_41) > (var_1_7)) ? (var_1_41) : (var_1_7)))));
 if (var_1_19) {
  if (stepLocal_1 >= (500 * var_1_41)) {
   var_1_1 = (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) < ((var_1_5 - var_1_7))) ? (((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_5 - var_1_7)))) + var_1_8);
  }
 } else {
  if (stepLocal_0 <= (~ (1 / -8))) {
   var_1_1 = (var_1_7 - var_1_4);
  } else {
   var_1_1 = var_1_5;
  }
 }
 unsigned long int stepLocal_16 = var_1_22;
 if (var_1_24) {
  if (var_1_21 != stepLocal_16) {
   var_1_54 = ((((((1129850979u - var_1_53)) < (var_1_40)) ? ((1129850979u - var_1_53)) : (var_1_40))) + ((((var_1_4) > (((((var_1_22) < (16u)) ? (var_1_22) : (16u))))) ? (var_1_4) : (((((var_1_22) < (16u)) ? (var_1_22) : (16u)))))));
  } else {
   var_1_54 = ((((var_1_4) > (((((8u) > (var_1_34)) ? (8u) : (var_1_34))))) ? (var_1_4) : (((((8u) > (var_1_34)) ? (8u) : (var_1_34))))));
  }
 } else {
  var_1_54 = (var_1_40 + ((((var_1_21) > (8u)) ? (var_1_21) : (8u))));
 }
 if ((last_1_var_1_15 >= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) && var_1_60) {
  if ((- (var_1_55 % var_1_4)) >= var_1_1) {
   if (var_1_60 || (var_1_4 >= var_1_5)) {
    if ((var_1_39 / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) == ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) {
     var_1_15 = (2252793902u - var_1_5);
    }
   } else {
    var_1_15 = var_1_14;
   }
  } else {
   var_1_15 = var_1_5;
  }
 }
 unsigned long int stepLocal_6 = var_1_15;
 if (stepLocal_6 >= var_1_14) {
  var_1_27 = (((var_1_29 - var_1_30) + ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) - var_1_32);
 }
 unsigned char stepLocal_9 = var_1_23 || (var_1_5 != var_1_52);
 unsigned char stepLocal_8 = var_1_20 && (var_1_19 && var_1_25);
 if (stepLocal_9 && (var_1_41 < var_1_4)) {
  if (stepLocal_8 && (var_1_27 < var_1_29)) {
   var_1_36 = (var_1_29 + (var_1_30 + var_1_38));
  } else {
   var_1_36 = var_1_30;
  }
 }
 unsigned long int stepLocal_13 = var_1_5 * (var_1_22 >> var_1_46);
 if (((9.999999999999998E14 + var_1_13) / var_1_29) >= var_1_27) {
  var_1_43 = (((((var_1_4 + var_1_5)) < ((var_1_44 + var_1_45))) ? ((var_1_4 + var_1_5)) : ((var_1_44 + var_1_45))));
 } else {
  if (var_1_24) {
   if (var_1_15 <= stepLocal_13) {
    var_1_43 = ((var_1_4 - var_1_5) + var_1_45);
   } else {
    var_1_43 = var_1_5;
   }
  }
 }
 unsigned char stepLocal_14 = var_1_60 || var_1_19;
 if (var_1_24 || stepLocal_14) {
  if (var_1_19) {
   var_1_48 = (var_1_40 + (var_1_49 - var_1_4));
  } else {
   var_1_48 = ((((32) > (var_1_15)) ? (32) : (var_1_15)));
  }
 } else {
  var_1_48 = ((((var_1_49 + var_1_41) < 0 ) ? -(var_1_49 + var_1_41) : (var_1_49 + var_1_41)));
 }
 unsigned short int stepLocal_18 = var_1_48;
 unsigned long int stepLocal_17 = (var_1_53 * var_1_21) + ((((var_1_22) < (var_1_55)) ? (var_1_22) : (var_1_55)));
 if (var_1_39 <= stepLocal_17) {
  if (var_1_46 < stepLocal_18) {
   if (var_1_27 >= var_1_29) {
    var_1_57 = (32.4 + var_1_38);
   } else {
    var_1_57 = var_1_30;
   }
  } else {
   var_1_57 = var_1_30;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 63);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1073741823);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1073741822);
 assume_abort_if_not(var_1_14 <= 2147483646);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 1073741823);
 assume_abort_if_not(var_1_22 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 2305843.009213691400e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -536870911);
 assume_abort_if_not(var_1_35 <= 536870911);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -230584.3009213691400e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691400e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 16383);
 assume_abort_if_not(var_1_40 <= 32767);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 127);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 31);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 16383);
 assume_abort_if_not(var_1_49 <= 32767);
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 4611686.018427388000e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 63);
 assume_abort_if_not(var_1_53 <= 127);
 var_1_56 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_56 >= 3221225470);
 assume_abort_if_not(var_1_56 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_27 = var_1_27;
 last_1_var_1_34 = var_1_34;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_54 = var_1_54;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_60 = var_1_60;
 last_1_var_1_62 = var_1_62;
}
int property(void) {
 return ((((((((((((((((((((((var_1_19 ? (((var_1_3 - (var_1_4 - var_1_5)) >= (500 * var_1_41)) ? (var_1_1 == ((signed long int) (((((((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) < ((var_1_5 - var_1_7))) ? (((((var_1_4) < (var_1_3)) ? (var_1_4) : (var_1_3)))) : ((var_1_5 - var_1_7)))) + var_1_8))) : 1) : ((((((var_1_5) > (((((var_1_41) > (var_1_7)) ? (var_1_41) : (var_1_7))))) ? (var_1_5) : (((((var_1_41) > (var_1_7)) ? (var_1_41) : (var_1_7)))))) <= (~ (1 / -8))) ? (var_1_1 == ((signed long int) (var_1_7 - var_1_4))) : (var_1_1 == ((signed long int) var_1_5)))) && ((((var_1_10 - var_1_11) >= (last_1_var_1_27 / var_1_13)) || last_1_var_1_19) ? (var_1_9 == ((signed long int) ((var_1_14 - ((((var_1_5) > (var_1_4)) ? (var_1_5) : (var_1_4)))) - var_1_7))) : (var_1_9 == ((signed long int) var_1_4)))) && (((last_1_var_1_15 >= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) && var_1_60) ? (((- (var_1_55 % var_1_4)) >= var_1_1) ? ((var_1_60 || (var_1_4 >= var_1_5)) ? (((var_1_39 / ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) == ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) ? (var_1_15 == ((unsigned long int) (2252793902u - var_1_5))) : 1) : (var_1_15 == ((unsigned long int) var_1_14))) : (var_1_15 == ((unsigned long int) var_1_5))) : 1)) && (last_1_var_1_23 ? (var_1_19 == ((unsigned char) ((! last_1_var_1_23) || var_1_20))) : 1)) && (((var_1_23 || var_1_20) || (var_1_11 <= var_1_10)) ? (var_1_21 == ((unsigned long int) (var_1_7 + var_1_4))) : (var_1_21 == ((unsigned long int) (((((var_1_4 + (var_1_22 - var_1_7))) < (var_1_14)) ? ((var_1_4 + (var_1_22 - var_1_7))) : (var_1_14))))))) && ((((var_1_4 >> 1) | last_1_var_1_55) > (var_1_8 * (var_1_7 - var_1_5))) ? (var_1_23 == ((unsigned char) ((((((last_1_var_1_55) > (var_1_4)) ? (last_1_var_1_55) : (var_1_4))) >= var_1_3) && var_1_24))) : (((var_1_8 + last_1_var_1_1) >= last_1_var_1_21) ? (var_1_23 == ((unsigned char) (last_1_var_1_60 || (! var_1_25)))) : (var_1_23 == ((unsigned char) (var_1_20 && var_1_26)))))) && ((var_1_15 >= var_1_14) ? (var_1_27 == ((double) (((var_1_29 - var_1_30) + ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) - var_1_32))) : 1)) && (((var_1_9 | var_1_3) > var_1_5) ? (var_1_33 == ((unsigned char) (var_1_4 + var_1_5))) : (((2 - var_1_4) <= var_1_9) ? ((! (! (16.5f <= var_1_31))) ? (var_1_33 == ((unsigned char) var_1_4)) : 1) : (var_1_33 == ((unsigned char) var_1_5))))) && ((((((last_1_var_1_55) < 0 ) ? -(last_1_var_1_55) : (last_1_var_1_55))) <= var_1_14) ? (var_1_34 == ((signed long int) var_1_3)) : (last_1_var_1_19 ? (var_1_34 == ((signed long int) ((var_1_5 + var_1_7) - last_1_var_1_62))) : (var_1_34 == ((signed long int) (-64 + (var_1_4 + var_1_35))))))) && (((var_1_23 || (var_1_5 != var_1_52)) && (var_1_41 < var_1_4)) ? (((var_1_20 && (var_1_19 && var_1_25)) && (var_1_27 < var_1_29)) ? (var_1_36 == ((float) (var_1_29 + (var_1_30 + var_1_38)))) : (var_1_36 == ((float) var_1_30))) : 1)) && ((last_1_var_1_39 != var_1_55) ? (var_1_39 == ((unsigned short int) ((((((var_1_40 - 10) + var_1_9)) > ((var_1_4 + var_1_5))) ? (((var_1_40 - 10) + var_1_9)) : ((var_1_4 + var_1_5)))))) : (var_1_39 == ((unsigned short int) (var_1_40 + var_1_9))))) && ((last_1_var_1_60 || (last_1_var_1_19 || var_1_25)) ? (var_1_41 == ((signed long int) (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) - last_1_var_1_55))) : (((last_1_var_1_1 < (var_1_5 << last_1_var_1_34)) && (last_1_var_1_23 || var_1_25)) ? (var_1_41 == ((signed long int) (var_1_40 - last_1_var_1_55))) : 1))) && ((((9.999999999999998E14 + var_1_13) / var_1_29) >= var_1_27) ? (var_1_43 == ((unsigned char) (((((var_1_4 + var_1_5)) < ((var_1_44 + var_1_45))) ? ((var_1_4 + var_1_5)) : ((var_1_44 + var_1_45)))))) : (var_1_24 ? ((var_1_15 <= (var_1_5 * (var_1_22 >> var_1_46))) ? (var_1_43 == ((unsigned char) ((var_1_4 - var_1_5) + var_1_45))) : (var_1_43 == ((unsigned char) var_1_5))) : 1))) && (var_1_47 == ((float) (var_1_30 + (9.8f - 32.5f))))) && ((var_1_24 || (var_1_60 || var_1_19)) ? (var_1_19 ? (var_1_48 == ((unsigned short int) (var_1_40 + (var_1_49 - var_1_4)))) : (var_1_48 == ((unsigned short int) ((((32) > (var_1_15)) ? (32) : (var_1_15)))))) : (var_1_48 == ((unsigned short int) ((((var_1_49 + var_1_41) < 0 ) ? -(var_1_49 + var_1_41) : (var_1_49 + var_1_41))))))) && ((10.6f < var_1_47) ? ((var_1_60 && (var_1_30 <= (- var_1_11))) ? (var_1_50 == ((float) var_1_29)) : 1) : (((((((16.375) < (var_1_11)) ? (16.375) : (var_1_11))) - (var_1_51 - 1.000000075E7)) > var_1_32) ? (var_1_50 == ((float) (var_1_38 + var_1_30))) : (var_1_50 == ((float) (((((((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) - var_1_29)) > (var_1_38)) ? ((((((var_1_30) > (var_1_32)) ? (var_1_30) : (var_1_32))) - var_1_29)) : (var_1_38)))))))) && (var_1_52 == ((unsigned char) (var_1_44 + ((((((((var_1_4) < (var_1_45)) ? (var_1_4) : (var_1_45)))) > ((var_1_53 - var_1_5))) ? (((((var_1_4) < (var_1_45)) ? (var_1_4) : (var_1_45)))) : ((var_1_53 - var_1_5)))))))) && (var_1_24 ? ((var_1_21 != var_1_22) ? (var_1_54 == ((unsigned long int) ((((((1129850979u - var_1_53)) < (var_1_40)) ? ((1129850979u - var_1_53)) : (var_1_40))) + ((((var_1_4) > (((((var_1_22) < (16u)) ? (var_1_22) : (16u))))) ? (var_1_4) : (((((var_1_22) < (16u)) ? (var_1_22) : (16u))))))))) : (var_1_54 == ((unsigned long int) ((((var_1_4) > (((((8u) > (var_1_34)) ? (8u) : (var_1_34))))) ? (var_1_4) : (((((8u) > (var_1_34)) ? (8u) : (var_1_34))))))))) : (var_1_54 == ((unsigned long int) (var_1_40 + ((((var_1_21) > (8u)) ? (var_1_21) : (8u)))))))) && ((last_1_var_1_54 >= last_1_var_1_34) ? (var_1_55 == ((unsigned long int) ((((((var_1_56 - var_1_45)) > ((3470546746u - last_1_var_1_54))) ? ((var_1_56 - var_1_45)) : ((3470546746u - last_1_var_1_54)))) - (var_1_22 - 64u)))) : 1)) && ((var_1_39 <= ((var_1_53 * var_1_21) + ((((var_1_22) < (var_1_55)) ? (var_1_22) : (var_1_55))))) ? ((var_1_46 < var_1_48) ? ((var_1_27 >= var_1_29) ? (var_1_57 == ((double) (32.4 + var_1_38))) : (var_1_57 == ((double) var_1_30))) : (var_1_57 == ((double) var_1_30))) : 1)) && ((((((var_1_41) < (var_1_44)) ? (var_1_41) : (var_1_44))) >= var_1_22) ? (var_1_60 == ((unsigned char) (var_1_26 && var_1_20))) : (var_1_60 == ((unsigned char) (var_1_24 && var_1_25))))) && (var_1_61 == ((float) var_1_31))) && (var_1_62 == ((unsigned char) var_1_4))
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
