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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
signed short int var_1_6 = -1;
signed short int var_1_7 = 32;
signed short int var_1_8 = -5;
signed short int var_1_9 = 256;
signed short int var_1_10 = 16;
unsigned long int var_1_11 = 2;
unsigned long int var_1_12 = 8;
unsigned long int var_1_13 = 4;
unsigned long int var_1_14 = 1000000;
unsigned char var_1_15 = 16;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 50;
unsigned char var_1_20 = 0;
float var_1_21 = 4.4;
float var_1_22 = 0.0;
float var_1_23 = 0.0;
float var_1_24 = 3.6;
float var_1_25 = 1.2;
double var_1_26 = 256.5;
double var_1_27 = 0.35;
double var_1_28 = 63.375;
double var_1_29 = 10.5;
double var_1_30 = 99999999.6;
unsigned long int var_1_31 = 128;
unsigned long int var_1_32 = 3084700384;
unsigned long int var_1_33 = 1667099932;
unsigned long int var_1_34 = 1000000000;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed short int var_1_37 = 4;
signed short int var_1_38 = 32136;
float var_1_39 = 8.9;
signed char var_1_40 = -10;
unsigned char var_1_41 = 0;
float var_1_42 = -0.1;
float var_1_43 = -0.4;
signed short int var_1_44 = -256;
unsigned long int var_1_45 = 2;
float var_1_46 = 2.25;
float var_1_47 = 1.53;
signed char var_1_48 = 8;
signed char var_1_50 = 64;
unsigned short int var_1_51 = 50;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
float var_1_54 = 7.5;
signed char var_1_55 = 16;
float var_1_56 = 8.25;
signed char var_1_57 = -10;
unsigned long int var_1_58 = 5;
double var_1_59 = 99.5;
unsigned char var_1_60 = 128;
unsigned long int var_1_61 = 200;
unsigned long int var_1_62 = 2105409654;
unsigned long int var_1_63 = 1383009119;
unsigned long int var_1_64 = 10;
signed short int last_1_var_1_1 = -5;
unsigned long int last_1_var_1_61 = 200;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_5 = var_1_2;
 unsigned long int stepLocal_4 = var_1_10 + last_1_var_1_61;
 if (256 <= stepLocal_4) {
  if (var_1_3 || stepLocal_5) {
   var_1_11 = (((((var_1_12 + 64u)) > (((((var_1_13) < (16u)) ? (var_1_13) : (16u))))) ? ((var_1_12 + 64u)) : (((((var_1_13) < (16u)) ? (var_1_13) : (16u))))));
  }
 } else {
  var_1_11 = (var_1_12 + ((((32u) < ((1806311775u - var_1_14))) ? (32u) : ((1806311775u - var_1_14)))));
 }
 if ((var_1_14 >> var_1_16) >= var_1_12) {
  var_1_15 = (var_1_17 - var_1_16);
 }
 var_1_18 = (var_1_17 - (var_1_16 + (var_1_19 - var_1_20)));
 var_1_26 = ((((((var_1_24) < (var_1_27)) ? (var_1_24) : (var_1_27))) - (var_1_28 + var_1_29)) + var_1_30);
 var_1_41 = (! var_1_36);
 if ((- (var_1_26 + 255.125f)) != var_1_28) {
  var_1_42 = (((((((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))) + var_1_43)) > (((var_1_23 - 4.05f) - var_1_25))) ? ((((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))) + var_1_43)) : (((var_1_23 - 4.05f) - var_1_25))));
 }
 var_1_45 = (var_1_17 + var_1_38);
 unsigned char stepLocal_10 = var_1_41;
 if (stepLocal_10 && var_1_36) {
  var_1_46 = ((((var_1_28) > (var_1_22)) ? (var_1_28) : (var_1_22)));
 } else {
  var_1_46 = (((((var_1_47 + var_1_28) + 31.25f) < 0 ) ? -((var_1_47 + var_1_28) + 31.25f) : ((var_1_47 + var_1_28) + 31.25f)));
 }
 if ((var_1_24 * var_1_30) <= var_1_22) {
  var_1_52 = (((((var_1_16 + var_1_50)) < (var_1_20)) ? ((var_1_16 + var_1_50)) : (var_1_20)));
 } else {
  var_1_52 = var_1_20;
 }
 unsigned char stepLocal_13 = var_1_36;
 if (var_1_41 && stepLocal_13) {
  var_1_54 = (var_1_30 + (var_1_29 - var_1_24));
 }
 if (var_1_54 == var_1_29) {
  var_1_56 = (var_1_47 + var_1_43);
 } else {
  var_1_56 = ((((3.64f) > (var_1_24)) ? (3.64f) : (var_1_24)));
 }
 unsigned long int stepLocal_15 = var_1_14;
 if (-64 > stepLocal_15) {
  var_1_58 = ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)));
 }
 signed long int stepLocal_16 = (((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19));
 if (stepLocal_16 != var_1_10) {
  var_1_59 = var_1_30;
 } else {
  var_1_59 = var_1_24;
 }
 if (var_1_41) {
  var_1_60 = var_1_17;
 } else {
  var_1_60 = var_1_20;
 }
 unsigned long int stepLocal_17 = var_1_11;
 if (var_1_32 < stepLocal_17) {
  var_1_61 = ((var_1_33 + (var_1_62 - var_1_19)) - (var_1_63 - var_1_64));
 } else {
  var_1_61 = var_1_58;
 }
 signed short int stepLocal_3 = var_1_8;
 signed short int stepLocal_2 = var_1_9;
 unsigned long int stepLocal_1 = var_1_58;
 unsigned char stepLocal_0 = var_1_3;
 if (var_1_2 || stepLocal_0) {
  if (last_1_var_1_1 >= stepLocal_1) {
   var_1_1 = (((((50) > (var_1_6)) ? (50) : (var_1_6))) + (var_1_7 + var_1_8));
  } else {
   var_1_1 = (var_1_8 + var_1_6);
  }
 } else {
  if (stepLocal_3 != (var_1_58 % ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) {
   if (! var_1_3) {
    if (stepLocal_2 != last_1_var_1_1) {
     var_1_1 = var_1_7;
    } else {
     var_1_1 = var_1_8;
    }
   } else {
    var_1_1 = var_1_6;
   }
  } else {
   var_1_1 = var_1_7;
  }
 }
 if (var_1_61 != ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) {
  var_1_21 = ((((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))) - var_1_24) - var_1_25);
 }
 unsigned char stepLocal_6 = (var_1_6 + var_1_17) != (var_1_19 << var_1_8);
 if (stepLocal_6 && (var_1_41 || (! var_1_41))) {
  var_1_35 = (var_1_17 - var_1_19);
 }
 signed short int stepLocal_7 = var_1_9;
 if (var_1_25 > (var_1_27 / var_1_22)) {
  if (stepLocal_7 > (((((var_1_20) > (var_1_16)) ? (var_1_20) : (var_1_16))) - (var_1_38 - 4))) {
   var_1_37 = var_1_60;
  } else {
   var_1_37 = ((var_1_16 + var_1_15) - var_1_60);
  }
 } else {
  var_1_37 = var_1_17;
 }
 if (var_1_1 >= var_1_34) {
  var_1_39 = (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) + var_1_28);
 } else {
  var_1_39 = (var_1_25 - var_1_29);
 }
 if (var_1_23 < ((((var_1_25 / 10000.6f) < 0 ) ? -(var_1_25 / 10000.6f) : (var_1_25 / 10000.6f)))) {
  var_1_40 = (var_1_16 - var_1_19);
 } else {
  if (var_1_41) {
   var_1_40 = ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)));
  } else {
   if (var_1_41) {
    var_1_40 = var_1_20;
   }
  }
 }
 unsigned long int stepLocal_11 = var_1_33;
 if (((((var_1_12) > (-10)) ? (var_1_12) : (-10))) == stepLocal_11) {
  var_1_51 = (((((var_1_50 + var_1_1)) > (((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) < (var_1_16)) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (var_1_16))))) ? ((var_1_50 + var_1_1)) : (((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) < (var_1_16)) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (var_1_16))))));
 }
 unsigned long int stepLocal_12 = var_1_61;
 if (stepLocal_12 == (var_1_14 / var_1_34)) {
  if (var_1_28 > var_1_43) {
   var_1_53 = var_1_20;
  }
 } else {
  var_1_53 = (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) + 32);
 }
 if (var_1_22 > var_1_24) {
  if (var_1_27 > (var_1_59 + (var_1_22 - var_1_25))) {
   var_1_57 = (var_1_19 - var_1_50);
  }
 }
 if (var_1_6 < (var_1_10 / var_1_9)) {
  var_1_31 = (var_1_32 - (var_1_33 - (var_1_34 - var_1_20)));
 } else {
  if (((var_1_29 + var_1_27) / var_1_23) != (var_1_25 + var_1_26)) {
   if (var_1_7 > var_1_51) {
    var_1_31 = (var_1_60 + var_1_34);
   } else {
    var_1_31 = var_1_14;
   }
  }
 }
 unsigned long int stepLocal_9 = var_1_11 / var_1_10;
 unsigned long int stepLocal_8 = var_1_11;
 if (stepLocal_9 < (var_1_15 - var_1_12)) {
  if (var_1_37 <= stepLocal_8) {
   if ((var_1_24 / 9.75) != (var_1_27 - var_1_23)) {
    var_1_44 = ((((var_1_19) < ((((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16))) - ((((100) < 0 ) ? -(100) : (100)))))) ? (var_1_19) : ((((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16))) - ((((100) < 0 ) ? -(100) : (100)))))));
   } else {
    var_1_44 = (var_1_53 + var_1_17);
   }
  } else {
   var_1_44 = (5 - (var_1_17 + var_1_16));
  }
 } else {
  var_1_44 = ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53)));
 }
 if ((! var_1_41) || var_1_41) {
  if (((((var_1_9) < (var_1_57)) ? (var_1_9) : (var_1_57))) > ((((var_1_45) > ((var_1_31 + var_1_1))) ? (var_1_45) : ((var_1_31 + var_1_1))))) {
   var_1_48 = ((((var_1_20) < (((var_1_19 + var_1_16) - var_1_50))) ? (var_1_20) : (((var_1_19 + var_1_16) - var_1_50))));
  } else {
   var_1_48 = (var_1_20 + var_1_19);
  }
 } else {
  var_1_48 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
 }
 unsigned long int stepLocal_14 = var_1_31;
 if ((var_1_31 | var_1_53) >= stepLocal_14) {
  var_1_55 = ((var_1_16 - 2) + var_1_19);
 } else {
  if (64.5 <= var_1_21) {
   var_1_55 = (((((16) < 0 ) ? -(16) : (16))) + var_1_19);
  } else {
   var_1_55 = (var_1_19 - (var_1_16 + var_1_20));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -8191);
 assume_abort_if_not(var_1_7 <= 8192);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -8191);
 assume_abort_if_not(var_1_8 <= 8191);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32768);
 assume_abort_if_not(var_1_9 <= 32767);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32768);
 assume_abort_if_not(var_1_10 <= 32767);
 assume_abort_if_not(var_1_10 != 0);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 31);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 31);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 31);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 4611686.018427383000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 4611686.018427383000e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 2147483647);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 1073741823);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 536870911);
 assume_abort_if_not(var_1_34 <= 1073741823);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 16383);
 assume_abort_if_not(var_1_38 <= 32767);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 1610612735);
 assume_abort_if_not(var_1_62 <= 2147483647);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 1073741823);
 assume_abort_if_not(var_1_63 <= 2147483647);
 var_1_64 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_64 >= 0);
 assume_abort_if_not(var_1_64 <= 1073741823);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_61 = var_1_61;
}
int property(void) {
 return ((((((((((((((((((((((((((((var_1_2 || var_1_3) ? ((last_1_var_1_1 >= var_1_58) ? (var_1_1 == ((signed short int) (((((50) > (var_1_6)) ? (50) : (var_1_6))) + (var_1_7 + var_1_8)))) : (var_1_1 == ((signed short int) (var_1_8 + var_1_6)))) : ((var_1_8 != (var_1_58 % ((((var_1_9) > (var_1_10)) ? (var_1_9) : (var_1_10))))) ? ((! var_1_3) ? ((var_1_9 != last_1_var_1_1) ? (var_1_1 == ((signed short int) var_1_7)) : (var_1_1 == ((signed short int) var_1_8))) : (var_1_1 == ((signed short int) var_1_6))) : (var_1_1 == ((signed short int) var_1_7)))) && ((256 <= (var_1_10 + last_1_var_1_61)) ? ((var_1_3 || var_1_2) ? (var_1_11 == ((unsigned long int) (((((var_1_12 + 64u)) > (((((var_1_13) < (16u)) ? (var_1_13) : (16u))))) ? ((var_1_12 + 64u)) : (((((var_1_13) < (16u)) ? (var_1_13) : (16u)))))))) : 1) : (var_1_11 == ((unsigned long int) (var_1_12 + ((((32u) < ((1806311775u - var_1_14))) ? (32u) : ((1806311775u - var_1_14))))))))) && (((var_1_14 >> var_1_16) >= var_1_12) ? (var_1_15 == ((unsigned char) (var_1_17 - var_1_16))) : 1)) && (var_1_18 == ((unsigned char) (var_1_17 - (var_1_16 + (var_1_19 - var_1_20)))))) && ((var_1_61 != ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) ? (var_1_21 == ((float) ((((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))) - var_1_24) - var_1_25))) : 1)) && (var_1_26 == ((double) ((((((var_1_24) < (var_1_27)) ? (var_1_24) : (var_1_27))) - (var_1_28 + var_1_29)) + var_1_30)))) && ((var_1_6 < (var_1_10 / var_1_9)) ? (var_1_31 == ((unsigned long int) (var_1_32 - (var_1_33 - (var_1_34 - var_1_20))))) : ((((var_1_29 + var_1_27) / var_1_23) != (var_1_25 + var_1_26)) ? ((var_1_7 > var_1_51) ? (var_1_31 == ((unsigned long int) (var_1_60 + var_1_34))) : (var_1_31 == ((unsigned long int) var_1_14))) : 1))) && ((((var_1_6 + var_1_17) != (var_1_19 << var_1_8)) && (var_1_41 || (! var_1_41))) ? (var_1_35 == ((unsigned char) (var_1_17 - var_1_19))) : 1)) && ((var_1_25 > (var_1_27 / var_1_22)) ? ((var_1_9 > (((((var_1_20) > (var_1_16)) ? (var_1_20) : (var_1_16))) - (var_1_38 - 4))) ? (var_1_37 == ((signed short int) var_1_60)) : (var_1_37 == ((signed short int) ((var_1_16 + var_1_15) - var_1_60)))) : (var_1_37 == ((signed short int) var_1_17)))) && ((var_1_1 >= var_1_34) ? (var_1_39 == ((float) (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) + var_1_28))) : (var_1_39 == ((float) (var_1_25 - var_1_29))))) && ((var_1_23 < ((((var_1_25 / 10000.6f) < 0 ) ? -(var_1_25 / 10000.6f) : (var_1_25 / 10000.6f)))) ? (var_1_40 == ((signed char) (var_1_16 - var_1_19))) : (var_1_41 ? (var_1_40 == ((signed char) ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))))) : (var_1_41 ? (var_1_40 == ((signed char) var_1_20)) : 1)))) && (var_1_41 == ((unsigned char) (! var_1_36)))) && (((- (var_1_26 + 255.125f)) != var_1_28) ? (var_1_42 == ((float) (((((((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))) + var_1_43)) > (((var_1_23 - 4.05f) - var_1_25))) ? ((((((var_1_27) > (var_1_29)) ? (var_1_27) : (var_1_29))) + var_1_43)) : (((var_1_23 - 4.05f) - var_1_25)))))) : 1)) && (((var_1_11 / var_1_10) < (var_1_15 - var_1_12)) ? ((var_1_37 <= var_1_11) ? (((var_1_24 / 9.75) != (var_1_27 - var_1_23)) ? (var_1_44 == ((signed short int) ((((var_1_19) < ((((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16))) - ((((100) < 0 ) ? -(100) : (100)))))) ? (var_1_19) : ((((((var_1_17) < (var_1_16)) ? (var_1_17) : (var_1_16))) - ((((100) < 0 ) ? -(100) : (100))))))))) : (var_1_44 == ((signed short int) (var_1_53 + var_1_17)))) : (var_1_44 == ((signed short int) (5 - (var_1_17 + var_1_16))))) : (var_1_44 == ((signed short int) ((((var_1_53) < 0 ) ? -(var_1_53) : (var_1_53))))))) && (var_1_45 == ((unsigned long int) (var_1_17 + var_1_38)))) && ((var_1_41 && var_1_36) ? (var_1_46 == ((float) ((((var_1_28) > (var_1_22)) ? (var_1_28) : (var_1_22))))) : (var_1_46 == ((float) (((((var_1_47 + var_1_28) + 31.25f) < 0 ) ? -((var_1_47 + var_1_28) + 31.25f) : ((var_1_47 + var_1_28) + 31.25f))))))) && (((! var_1_41) || var_1_41) ? ((((((var_1_9) < (var_1_57)) ? (var_1_9) : (var_1_57))) > ((((var_1_45) > ((var_1_31 + var_1_1))) ? (var_1_45) : ((var_1_31 + var_1_1))))) ? (var_1_48 == ((signed char) ((((var_1_20) < (((var_1_19 + var_1_16) - var_1_50))) ? (var_1_20) : (((var_1_19 + var_1_16) - var_1_50)))))) : (var_1_48 == ((signed char) (var_1_20 + var_1_19)))) : (var_1_48 == ((signed char) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))))) && ((((((var_1_12) > (-10)) ? (var_1_12) : (-10))) == var_1_33) ? (var_1_51 == ((unsigned short int) (((((var_1_50 + var_1_1)) > (((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) < (var_1_16)) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (var_1_16))))) ? ((var_1_50 + var_1_1)) : (((((((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) < (var_1_16)) ? (((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) : (var_1_16)))))))) : 1)) && (((var_1_24 * var_1_30) <= var_1_22) ? (var_1_52 == ((unsigned char) (((((var_1_16 + var_1_50)) < (var_1_20)) ? ((var_1_16 + var_1_50)) : (var_1_20))))) : (var_1_52 == ((unsigned char) var_1_20)))) && ((var_1_61 == (var_1_14 / var_1_34)) ? ((var_1_28 > var_1_43) ? (var_1_53 == ((unsigned char) var_1_20)) : 1) : (var_1_53 == ((unsigned char) (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) + 32))))) && ((var_1_41 && var_1_36) ? (var_1_54 == ((float) (var_1_30 + (var_1_29 - var_1_24)))) : 1)) && (((var_1_31 | var_1_53) >= var_1_31) ? (var_1_55 == ((signed char) ((var_1_16 - 2) + var_1_19))) : ((64.5 <= var_1_21) ? (var_1_55 == ((signed char) (((((16) < 0 ) ? -(16) : (16))) + var_1_19))) : (var_1_55 == ((signed char) (var_1_19 - (var_1_16 + var_1_20))))))) && ((var_1_54 == var_1_29) ? (var_1_56 == ((float) (var_1_47 + var_1_43))) : (var_1_56 == ((float) ((((3.64f) > (var_1_24)) ? (3.64f) : (var_1_24))))))) && ((var_1_22 > var_1_24) ? ((var_1_27 > (var_1_59 + (var_1_22 - var_1_25))) ? (var_1_57 == ((signed char) (var_1_19 - var_1_50))) : 1) : 1)) && ((-64 > var_1_14) ? (var_1_58 == ((unsigned long int) ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13))))) : 1)) && ((((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) != var_1_10) ? (var_1_59 == ((double) var_1_30)) : (var_1_59 == ((double) var_1_24)))) && (var_1_41 ? (var_1_60 == ((unsigned char) var_1_17)) : (var_1_60 == ((unsigned char) var_1_20)))) && ((var_1_32 < var_1_11) ? (var_1_61 == ((unsigned long int) ((var_1_33 + (var_1_62 - var_1_19)) - (var_1_63 - var_1_64)))) : (var_1_61 == ((unsigned long int) var_1_58)))
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
