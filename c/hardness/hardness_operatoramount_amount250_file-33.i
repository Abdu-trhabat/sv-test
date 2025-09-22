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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 128;
signed long int var_1_2 = 1420370654;
signed long int var_1_3 = 10;
signed char var_1_4 = -2;
signed char var_1_5 = 25;
signed char var_1_6 = -16;
signed char var_1_7 = -50;
signed char var_1_8 = -16;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
float var_1_11 = 256.5;
float var_1_12 = -0.25;
float var_1_13 = 0.30000000000000004;
float var_1_14 = 49.5;
signed long int var_1_15 = -8;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 64;
signed long int var_1_18 = 16;
float var_1_19 = 32.3;
signed short int var_1_20 = -50;
float var_1_21 = 1.25;
float var_1_22 = 99999.375;
float var_1_23 = 1000000.5;
unsigned long int var_1_25 = 128;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 3559842512;
unsigned long int var_1_28 = 2049003553;
unsigned long int var_1_29 = 32;
double var_1_30 = 31.5;
unsigned long int var_1_31 = 16;
double var_1_32 = 4.55;
float var_1_33 = 31.5;
double var_1_35 = 4.125;
double var_1_36 = 0.0;
double var_1_37 = 0.4;
signed short int var_1_38 = -8;
float var_1_39 = 3.25;
signed char var_1_41 = 1;
unsigned long int var_1_42 = 10;
unsigned long int var_1_43 = 3549089523;
signed long int var_1_44 = 25;
signed long int var_1_45 = 1631121473;
unsigned long int var_1_46 = 4;
float var_1_47 = 8.75;
double var_1_48 = 100.411;
signed char var_1_49 = 0;
unsigned char var_1_50 = 0;
signed char var_1_51 = 16;
signed char var_1_52 = -1;
signed long int var_1_53 = -1;
signed char var_1_54 = 5;
signed char var_1_56 = 2;
unsigned short int var_1_57 = 2;
signed short int var_1_58 = 16;
unsigned long int var_1_59 = 4;
signed long int last_1_var_1_1 = 128;
unsigned char last_1_var_1_9 = 25;
float last_1_var_1_19 = 32.3;
unsigned long int last_1_var_1_25 = 128;
double last_1_var_1_30 = 31.5;
unsigned long int last_1_var_1_31 = 16;
signed short int last_1_var_1_38 = -8;
signed long int last_1_var_1_44 = 25;
unsigned long int last_1_var_1_46 = 4;
double last_1_var_1_48 = 100.411;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_7 = var_1_16;
 unsigned char stepLocal_6 = var_1_26 && (var_1_13 > last_1_var_1_19);
 if ((! var_1_26) || stepLocal_7) {
  if (stepLocal_6 && var_1_16) {
   var_1_25 = (((((((var_1_3) > (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10))))) ? (var_1_3) : (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10)))))) < 0 ) ? -((((var_1_3) > (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10))))) ? (var_1_3) : (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10)))))) : ((((var_1_3) > (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10))))) ? (var_1_3) : (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10))))))));
  } else {
   var_1_25 = (var_1_27 - ((((var_1_3) > ((var_1_28 - last_1_var_1_1))) ? (var_1_3) : ((var_1_28 - last_1_var_1_1)))));
  }
 } else {
  var_1_25 = (((((((var_1_27 - var_1_29) < 0 ) ? -(var_1_27 - var_1_29) : (var_1_27 - var_1_29))) < 0 ) ? -((((var_1_27 - var_1_29) < 0 ) ? -(var_1_27 - var_1_29) : (var_1_27 - var_1_29))) : ((((var_1_27 - var_1_29) < 0 ) ? -(var_1_27 - var_1_29) : (var_1_27 - var_1_29)))));
 }
 signed long int stepLocal_13 = var_1_2;
 unsigned long int stepLocal_12 = last_1_var_1_31;
 if (last_1_var_1_48 < var_1_33) {
  var_1_42 = (((((var_1_41 + last_1_var_1_9)) > (var_1_2)) ? ((var_1_41 + last_1_var_1_9)) : (var_1_2)));
 } else {
  if (stepLocal_12 >= var_1_2) {
   var_1_42 = (var_1_43 - var_1_10);
  } else {
   if (last_1_var_1_46 < stepLocal_13) {
    var_1_42 = (var_1_3 + last_1_var_1_44);
   } else {
    var_1_42 = ((var_1_28 + 1556394234u) - var_1_41);
   }
  }
 }
 if (((- var_1_42) >= var_1_41) || var_1_26) {
  var_1_44 = ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)));
 } else {
  var_1_44 = (var_1_3 - (var_1_45 - var_1_10));
 }
 if (last_1_var_1_30 >= (var_1_21 / var_1_32)) {
  if (! var_1_16) {
   if (((((var_1_22) < (var_1_12)) ? (var_1_22) : (var_1_12))) < (var_1_32 / ((((1.000000005E8f) < (var_1_33)) ? (1.000000005E8f) : (var_1_33))))) {
    if (((((var_1_5) < (last_1_var_1_46)) ? (var_1_5) : (last_1_var_1_46))) > var_1_2) {
     var_1_31 = var_1_3;
    }
   } else {
    var_1_31 = (var_1_3 + var_1_29);
   }
  } else {
   var_1_31 = var_1_18;
  }
 } else {
  var_1_31 = last_1_var_1_25;
 }
 unsigned char stepLocal_10 = var_1_16;
 if (var_1_26 || stepLocal_10) {
  var_1_38 = ((((((var_1_31 + 10) + (var_1_10 - last_1_var_1_38))) > (var_1_8)) ? (((var_1_31 + 10) + (var_1_10 - last_1_var_1_38))) : (var_1_8)));
 }
 if (var_1_18 > var_1_17) {
  var_1_53 = (var_1_31 + var_1_42);
 }
 var_1_1 = ((var_1_2 - 256) - var_1_3);
 var_1_4 = ((((((var_1_5 + var_1_6) + var_1_7)) > (var_1_8)) ? (((var_1_5 + var_1_6) + var_1_7)) : (var_1_8)));
 signed long int stepLocal_0 = var_1_3;
 if (stepLocal_0 < var_1_7) {
  var_1_9 = (var_1_10 + 1);
 }
 if (var_1_53 < (var_1_42 & (var_1_10 | var_1_7))) {
  var_1_11 = ((((var_1_12 + (var_1_13 - var_1_14)) < 0 ) ? -(var_1_12 + (var_1_13 - var_1_14)) : (var_1_12 + (var_1_13 - var_1_14))));
 }
 if (var_1_22 == (var_1_13 - var_1_14)) {
  var_1_30 = var_1_21;
 } else {
  var_1_30 = var_1_23;
 }
 var_1_46 = (var_1_2 + var_1_41);
 if (var_1_16) {
  var_1_48 = (((((0.30000000000000004 - var_1_36)) > ((15.4 + var_1_23))) ? ((0.30000000000000004 - var_1_36)) : ((15.4 + var_1_23))));
 } else {
  var_1_48 = (var_1_21 + var_1_22);
 }
 signed long int stepLocal_16 = var_1_41 << var_1_56;
 if ((var_1_27 + (var_1_43 - var_1_28)) <= stepLocal_16) {
  var_1_57 = var_1_51;
 }
 unsigned long int stepLocal_9 = var_1_2 + (var_1_29 % var_1_28);
 unsigned char stepLocal_8 = var_1_14 < var_1_48;
 if (stepLocal_8 || var_1_26) {
  if ((var_1_31 / 10000000u) <= stepLocal_9) {
   var_1_35 = ((((var_1_12) < (((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) > ((var_1_22 + var_1_13))) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : ((var_1_22 + var_1_13)))))) ? (var_1_12) : (((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) > ((var_1_22 + var_1_13))) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : ((var_1_22 + var_1_13)))))));
  } else {
   var_1_35 = ((((((var_1_36 - 128.5)) < (var_1_14)) ? ((var_1_36 - 128.5)) : (var_1_14))) - (var_1_13 + ((((64.65) < (var_1_37)) ? (64.65) : (var_1_37)))));
  }
 }
 if (var_1_50) {
  var_1_59 = ((((((var_1_38 + var_1_53) + var_1_29)) < (var_1_28)) ? (((var_1_38 + var_1_53) + var_1_29)) : (var_1_28)));
 } else {
  if (var_1_13 == var_1_48) {
   if (var_1_26) {
    var_1_59 = var_1_27;
   } else {
    var_1_59 = var_1_29;
   }
  } else {
   var_1_59 = var_1_38;
  }
 }
 unsigned char stepLocal_15 = var_1_16;
 if (var_1_32 < ((((var_1_22) < (var_1_35)) ? (var_1_22) : (var_1_35)))) {
  if (stepLocal_15 || (var_1_29 <= var_1_10)) {
   var_1_49 = ((((((((var_1_5) < ((var_1_41 - var_1_51))) ? (var_1_5) : ((var_1_41 - var_1_51))))) > (((((var_1_7) < ((var_1_6 + -1))) ? (var_1_7) : ((var_1_6 + -1)))))) ? (((((var_1_5) < ((var_1_41 - var_1_51))) ? (var_1_5) : ((var_1_41 - var_1_51))))) : (((((var_1_7) < ((var_1_6 + -1))) ? (var_1_7) : ((var_1_6 + -1)))))));
  } else {
   var_1_49 = ((((((((var_1_6) > (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) ? (var_1_6) : (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))))) < ((var_1_5 + -5))) ? (((((var_1_6) > (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) ? (var_1_6) : (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))))) : ((var_1_5 + -5))));
  }
 } else {
  if (var_1_36 <= var_1_14) {
   var_1_49 = (var_1_41 - ((((32) > (var_1_51)) ? (32) : (var_1_51))));
  } else {
   var_1_49 = ((((-2) < 0 ) ? -(-2) : (-2)));
  }
 }
 if (var_1_35 >= (- var_1_35)) {
  if ((-8 + (var_1_10 - var_1_51)) < var_1_1) {
   if ((var_1_14 < (- var_1_23)) && var_1_26) {
    var_1_54 = ((((var_1_52) < ((var_1_5 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) ? (var_1_52) : ((var_1_5 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))));
   }
  } else {
   if (! (var_1_42 <= (var_1_52 * var_1_1))) {
    var_1_54 = var_1_8;
   } else {
    var_1_54 = ((var_1_5 + ((((var_1_56) < (var_1_41)) ? (var_1_56) : (var_1_41)))) + ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))));
   }
  }
 } else {
  var_1_54 = (var_1_41 + var_1_56);
 }
 if (var_1_16) {
  var_1_58 = var_1_25;
 } else {
  var_1_58 = var_1_59;
 }
 unsigned long int stepLocal_14 = var_1_29 % ((((var_1_41) < (-50)) ? (var_1_41) : (-50)));
 if (var_1_49 < stepLocal_14) {
  var_1_47 = (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) - (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + var_1_37));
 }
 if (! var_1_16) {
  var_1_15 = var_1_5;
 } else {
  if (var_1_12 > (var_1_14 - var_1_13)) {
   var_1_15 = (var_1_17 + (var_1_18 - var_1_58));
  } else {
   var_1_15 = (((((var_1_58) < (var_1_5)) ? (var_1_58) : (var_1_5))) + (var_1_31 + var_1_6));
  }
 }
 signed long int stepLocal_5 = - var_1_3;
 unsigned char stepLocal_4 = var_1_16;
 unsigned char stepLocal_3 = (var_1_6 / var_1_20) > var_1_15;
 unsigned char stepLocal_2 = var_1_10;
 unsigned long int stepLocal_1 = var_1_42 * var_1_57;
 if (stepLocal_3 || (-50 > var_1_18)) {
  if (stepLocal_2 <= var_1_18) {
   if ((var_1_13 < var_1_35) || stepLocal_4) {
    var_1_19 = (((((var_1_13) < ((var_1_21 + var_1_22))) ? (var_1_13) : ((var_1_21 + var_1_22)))) + var_1_23);
   }
  } else {
   if (stepLocal_5 <= (var_1_57 * var_1_15)) {
    var_1_19 = ((((9.375f) < 0 ) ? -(9.375f) : (9.375f)));
   }
  }
 } else {
  if (stepLocal_1 < var_1_15) {
   var_1_19 = var_1_22;
  } else {
   var_1_19 = var_1_23;
  }
 }
 signed long int stepLocal_11 = ((((var_1_15 - var_1_3)) < (var_1_10)) ? ((var_1_15 - var_1_3)) : (var_1_10));
 if ((var_1_46 >> var_1_41) > stepLocal_11) {
  if (var_1_16) {
   var_1_39 = var_1_12;
  } else {
   var_1_39 = (var_1_36 - var_1_14);
  }
 } else {
  var_1_39 = var_1_36;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= 1073741822);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -31);
 assume_abort_if_not(var_1_5 <= 32);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -31);
 assume_abort_if_not(var_1_6 <= 31);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -1073741823);
 assume_abort_if_not(var_1_17 <= 1073741823);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -32768);
 assume_abort_if_not(var_1_20 <= 32767);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 1073741823);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 assume_abort_if_not(var_1_33 != 0.0F);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 4611686.018427383000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 15);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 2147483647);
 assume_abort_if_not(var_1_43 <= 4294967294);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= 1073741823);
 assume_abort_if_not(var_1_45 <= 2147483646);
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 1);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 126);
 var_1_52 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_52 >= -127);
 assume_abort_if_not(var_1_52 <= 126);
 var_1_56 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_56 >= -31);
 assume_abort_if_not(var_1_56 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_30 = var_1_30;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_38 = var_1_38;
 last_1_var_1_44 = var_1_44;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_48 = var_1_48;
}
int property(void) {
 return ((((((((((((((((((((((var_1_1 == ((signed long int) ((var_1_2 - 256) - var_1_3))) && (var_1_4 == ((signed char) ((((((var_1_5 + var_1_6) + var_1_7)) > (var_1_8)) ? (((var_1_5 + var_1_6) + var_1_7)) : (var_1_8)))))) && ((var_1_3 < var_1_7) ? (var_1_9 == ((unsigned char) (var_1_10 + 1))) : 1)) && ((var_1_53 < (var_1_42 & (var_1_10 | var_1_7))) ? (var_1_11 == ((float) ((((var_1_12 + (var_1_13 - var_1_14)) < 0 ) ? -(var_1_12 + (var_1_13 - var_1_14)) : (var_1_12 + (var_1_13 - var_1_14)))))) : 1)) && ((! var_1_16) ? (var_1_15 == ((signed long int) var_1_5)) : ((var_1_12 > (var_1_14 - var_1_13)) ? (var_1_15 == ((signed long int) (var_1_17 + (var_1_18 - var_1_58)))) : (var_1_15 == ((signed long int) (((((var_1_58) < (var_1_5)) ? (var_1_58) : (var_1_5))) + (var_1_31 + var_1_6))))))) && ((((var_1_6 / var_1_20) > var_1_15) || (-50 > var_1_18)) ? ((var_1_10 <= var_1_18) ? (((var_1_13 < var_1_35) || var_1_16) ? (var_1_19 == ((float) (((((var_1_13) < ((var_1_21 + var_1_22))) ? (var_1_13) : ((var_1_21 + var_1_22)))) + var_1_23))) : 1) : (((- var_1_3) <= (var_1_57 * var_1_15)) ? (var_1_19 == ((float) ((((9.375f) < 0 ) ? -(9.375f) : (9.375f))))) : 1)) : (((var_1_42 * var_1_57) < var_1_15) ? (var_1_19 == ((float) var_1_22)) : (var_1_19 == ((float) var_1_23))))) && (((! var_1_26) || var_1_16) ? (((var_1_26 && (var_1_13 > last_1_var_1_19)) && var_1_16) ? (var_1_25 == ((unsigned long int) (((((((var_1_3) > (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10))))) ? (var_1_3) : (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10)))))) < 0 ) ? -((((var_1_3) > (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10))))) ? (var_1_3) : (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10)))))) : ((((var_1_3) > (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10))))) ? (var_1_3) : (((((var_1_18) < (var_1_10)) ? (var_1_18) : (var_1_10)))))))))) : (var_1_25 == ((unsigned long int) (var_1_27 - ((((var_1_3) > ((var_1_28 - last_1_var_1_1))) ? (var_1_3) : ((var_1_28 - last_1_var_1_1)))))))) : (var_1_25 == ((unsigned long int) (((((((var_1_27 - var_1_29) < 0 ) ? -(var_1_27 - var_1_29) : (var_1_27 - var_1_29))) < 0 ) ? -((((var_1_27 - var_1_29) < 0 ) ? -(var_1_27 - var_1_29) : (var_1_27 - var_1_29))) : ((((var_1_27 - var_1_29) < 0 ) ? -(var_1_27 - var_1_29) : (var_1_27 - var_1_29))))))))) && ((var_1_22 == (var_1_13 - var_1_14)) ? (var_1_30 == ((double) var_1_21)) : (var_1_30 == ((double) var_1_23)))) && ((last_1_var_1_30 >= (var_1_21 / var_1_32)) ? ((! var_1_16) ? ((((((var_1_22) < (var_1_12)) ? (var_1_22) : (var_1_12))) < (var_1_32 / ((((1.000000005E8f) < (var_1_33)) ? (1.000000005E8f) : (var_1_33))))) ? ((((((var_1_5) < (last_1_var_1_46)) ? (var_1_5) : (last_1_var_1_46))) > var_1_2) ? (var_1_31 == ((unsigned long int) var_1_3)) : 1) : (var_1_31 == ((unsigned long int) (var_1_3 + var_1_29)))) : (var_1_31 == ((unsigned long int) var_1_18))) : (var_1_31 == ((unsigned long int) last_1_var_1_25)))) && (((var_1_14 < var_1_48) || var_1_26) ? (((var_1_31 / 10000000u) <= (var_1_2 + (var_1_29 % var_1_28))) ? (var_1_35 == ((double) ((((var_1_12) < (((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) > ((var_1_22 + var_1_13))) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : ((var_1_22 + var_1_13)))))) ? (var_1_12) : (((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) > ((var_1_22 + var_1_13))) ? (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : ((var_1_22 + var_1_13))))))))) : (var_1_35 == ((double) ((((((var_1_36 - 128.5)) < (var_1_14)) ? ((var_1_36 - 128.5)) : (var_1_14))) - (var_1_13 + ((((64.65) < (var_1_37)) ? (64.65) : (var_1_37)))))))) : 1)) && ((var_1_26 || var_1_16) ? (var_1_38 == ((signed short int) ((((((var_1_31 + 10) + (var_1_10 - last_1_var_1_38))) > (var_1_8)) ? (((var_1_31 + 10) + (var_1_10 - last_1_var_1_38))) : (var_1_8))))) : 1)) && (((var_1_46 >> var_1_41) > (((((var_1_15 - var_1_3)) < (var_1_10)) ? ((var_1_15 - var_1_3)) : (var_1_10)))) ? (var_1_16 ? (var_1_39 == ((float) var_1_12)) : (var_1_39 == ((float) (var_1_36 - var_1_14)))) : (var_1_39 == ((float) var_1_36)))) && ((last_1_var_1_48 < var_1_33) ? (var_1_42 == ((unsigned long int) (((((var_1_41 + last_1_var_1_9)) > (var_1_2)) ? ((var_1_41 + last_1_var_1_9)) : (var_1_2))))) : ((last_1_var_1_31 >= var_1_2) ? (var_1_42 == ((unsigned long int) (var_1_43 - var_1_10))) : ((last_1_var_1_46 < var_1_2) ? (var_1_42 == ((unsigned long int) (var_1_3 + last_1_var_1_44))) : (var_1_42 == ((unsigned long int) ((var_1_28 + 1556394234u) - var_1_41))))))) && ((((- var_1_42) >= var_1_41) || var_1_26) ? (var_1_44 == ((signed long int) ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) : (var_1_44 == ((signed long int) (var_1_3 - (var_1_45 - var_1_10)))))) && (var_1_46 == ((unsigned long int) (var_1_2 + var_1_41)))) && ((var_1_49 < (var_1_29 % ((((var_1_41) < (-50)) ? (var_1_41) : (-50))))) ? (var_1_47 == ((float) (((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))) - (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + var_1_37)))) : 1)) && (var_1_16 ? (var_1_48 == ((double) (((((0.30000000000000004 - var_1_36)) > ((15.4 + var_1_23))) ? ((0.30000000000000004 - var_1_36)) : ((15.4 + var_1_23)))))) : (var_1_48 == ((double) (var_1_21 + var_1_22))))) && ((var_1_32 < ((((var_1_22) < (var_1_35)) ? (var_1_22) : (var_1_35)))) ? ((var_1_16 || (var_1_29 <= var_1_10)) ? (var_1_49 == ((signed char) ((((((((var_1_5) < ((var_1_41 - var_1_51))) ? (var_1_5) : ((var_1_41 - var_1_51))))) > (((((var_1_7) < ((var_1_6 + -1))) ? (var_1_7) : ((var_1_6 + -1)))))) ? (((((var_1_5) < ((var_1_41 - var_1_51))) ? (var_1_5) : ((var_1_41 - var_1_51))))) : (((((var_1_7) < ((var_1_6 + -1))) ? (var_1_7) : ((var_1_6 + -1))))))))) : (var_1_49 == ((signed char) ((((((((var_1_6) > (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) ? (var_1_6) : (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))))) < ((var_1_5 + -5))) ? (((((var_1_6) > (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))) ? (var_1_6) : (((((var_1_51) > (var_1_52)) ? (var_1_51) : (var_1_52))))))) : ((var_1_5 + -5))))))) : ((var_1_36 <= var_1_14) ? (var_1_49 == ((signed char) (var_1_41 - ((((32) > (var_1_51)) ? (32) : (var_1_51)))))) : (var_1_49 == ((signed char) ((((-2) < 0 ) ? -(-2) : (-2)))))))) && ((var_1_18 > var_1_17) ? (var_1_53 == ((signed long int) (var_1_31 + var_1_42))) : 1)) && ((var_1_35 >= (- var_1_35)) ? (((-8 + (var_1_10 - var_1_51)) < var_1_1) ? (((var_1_14 < (- var_1_23)) && var_1_26) ? (var_1_54 == ((signed char) ((((var_1_52) < ((var_1_5 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) ? (var_1_52) : ((var_1_5 + ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))))) : 1) : ((! (var_1_42 <= (var_1_52 * var_1_1))) ? (var_1_54 == ((signed char) var_1_8)) : (var_1_54 == ((signed char) ((var_1_5 + ((((var_1_56) < (var_1_41)) ? (var_1_56) : (var_1_41)))) + ((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7)))))))) : (var_1_54 == ((signed char) (var_1_41 + var_1_56))))) && (((var_1_27 + (var_1_43 - var_1_28)) <= (var_1_41 << var_1_56)) ? (var_1_57 == ((unsigned short int) var_1_51)) : 1)) && (var_1_16 ? (var_1_58 == ((signed short int) var_1_25)) : (var_1_58 == ((signed short int) var_1_59)))) && (var_1_50 ? (var_1_59 == ((unsigned long int) ((((((var_1_38 + var_1_53) + var_1_29)) < (var_1_28)) ? (((var_1_38 + var_1_53) + var_1_29)) : (var_1_28))))) : ((var_1_13 == var_1_48) ? (var_1_26 ? (var_1_59 == ((unsigned long int) var_1_27)) : (var_1_59 == ((unsigned long int) var_1_29))) : (var_1_59 == ((unsigned long int) var_1_38))))
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
