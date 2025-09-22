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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch72Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -16;
signed short int var_1_9 = 64;
signed short int var_1_10 = -100;
signed short int var_1_11 = -8;
signed short int var_1_12 = 256;
signed short int var_1_13 = 0;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 64;
double var_1_17 = 255.2;
double var_1_18 = 0.09999999999999998;
double var_1_19 = 128.5;
double var_1_20 = 256.2;
signed long int var_1_21 = 0;
signed long int var_1_22 = -16;
signed long int var_1_23 = 1685016490;
unsigned short int var_1_24 = 50;
float var_1_25 = 49.25;
float var_1_26 = 10.75;
float var_1_27 = 5.3;
float var_1_28 = 4.46;
float var_1_29 = 4.4;
float var_1_30 = 199.125;
float var_1_31 = 0.0;
float var_1_32 = 32.5;
float var_1_33 = 0.0;
signed short int var_1_34 = 100;
signed short int var_1_35 = 32;
unsigned short int var_1_36 = 5;
unsigned short int var_1_37 = 38379;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 64;
unsigned short int var_1_40 = 500;
unsigned char var_1_41 = 0;
signed char var_1_42 = 16;
unsigned char var_1_43 = 0;
double var_1_44 = 3.2;
unsigned long int var_1_45 = 1;
unsigned short int var_1_46 = 16;
unsigned char var_1_47 = 0;
double var_1_49 = 24.6;
signed short int var_1_52 = -1;
signed short int var_1_54 = 128;
unsigned char var_1_55 = 1;
unsigned long int var_1_56 = 64;
unsigned long int var_1_57 = 3316093323;
unsigned long int var_1_58 = 1842392445;
signed long int var_1_59 = 5;
signed char var_1_60 = 64;
signed char var_1_61 = 64;
signed char var_1_63 = 0;
signed long int var_1_64 = -1;
unsigned short int var_1_65 = 4;
unsigned short int var_1_66 = 29299;
unsigned char var_1_67 = 1;
unsigned short int last_1_var_1_36 = 5;
unsigned char last_1_var_1_47 = 0;
unsigned short int last_1_var_1_65 = 4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_4 = last_1_var_1_47;
 signed short int stepLocal_3 = var_1_10;
 if (var_1_16 < stepLocal_3) {
  if (stepLocal_4 || var_1_5) {
   var_1_17 = var_1_18;
  } else {
   if (last_1_var_1_47) {
    var_1_17 = (((((var_1_19 - var_1_20)) < (var_1_18)) ? ((var_1_19 - var_1_20)) : (var_1_18)));
   }
  }
 } else {
  var_1_17 = var_1_20;
 }
 if (var_1_7) {
  if (var_1_30 >= var_1_17) {
   var_1_47 = (! var_1_43);
  }
 }
 signed short int stepLocal_2 = var_1_12;
 signed long int stepLocal_1 = last_1_var_1_65;
 if (stepLocal_2 > var_1_9) {
  if (! (! (var_1_7 || last_1_var_1_47))) {
   var_1_14 = var_1_15;
  }
 } else {
  if (stepLocal_1 > (var_1_13 - var_1_15)) {
   var_1_14 = ((((var_1_16) > (10)) ? (var_1_16) : (10)));
  }
 }
 if (var_1_20 <= (((((- var_1_31)) > (var_1_30)) ? ((- var_1_31)) : (var_1_30)))) {
  var_1_54 = (var_1_14 - var_1_42);
 } else {
  if (var_1_19 < var_1_29) {
   var_1_54 = (var_1_14 + var_1_39);
  } else {
   var_1_54 = var_1_16;
  }
 }
 if (var_1_9 <= (~ -256)) {
  var_1_21 = var_1_11;
 } else {
  if (2 <= var_1_10) {
   var_1_21 = ((((var_1_9) < ((var_1_12 + -5))) ? (var_1_9) : ((var_1_12 + -5))));
  } else {
   var_1_21 = var_1_15;
  }
 }
 var_1_24 = var_1_15;
 if ((var_1_39 << (var_1_45 + 0u)) > var_1_35) {
  var_1_44 = ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29)));
 }
 signed short int stepLocal_8 = var_1_13;
 if (var_1_16 > stepLocal_8) {
  var_1_46 = ((((var_1_13) > (var_1_38)) ? (var_1_13) : (var_1_38)));
 }
 if (! var_1_4) {
  var_1_55 = (! var_1_43);
 } else {
  var_1_55 = (var_1_7 && var_1_5);
 }
 var_1_56 = (var_1_57 - ((var_1_58 - var_1_46) - var_1_13));
 if (var_1_20 <= 4.4) {
  var_1_59 = (var_1_38 + ((((var_1_15) > (var_1_21)) ? (var_1_15) : (var_1_21))));
 }
 if (var_1_6) {
  var_1_64 = var_1_9;
 } else {
  var_1_64 = var_1_37;
 }
 if (var_1_6) {
  var_1_67 = (! ((! var_1_7) && var_1_43));
 } else {
  var_1_67 = (var_1_47 && var_1_4);
 }
 if ((var_1_15 / var_1_23) >= var_1_12) {
  var_1_36 = (var_1_37 - var_1_14);
 } else {
  if (((var_1_38 + var_1_39) - 5) != ((((var_1_56) > (last_1_var_1_36)) ? (var_1_56) : (last_1_var_1_36)))) {
   var_1_36 = (var_1_14 + var_1_16);
  } else {
   var_1_36 = (38523 - var_1_16);
  }
 }
 unsigned char stepLocal_0 = var_1_67;
 if (stepLocal_0 || var_1_55) {
  var_1_1 = (var_1_55 && var_1_4);
 } else {
  var_1_1 = (var_1_4 && ((var_1_5 || var_1_6) || var_1_7));
 }
 if (var_1_67) {
  var_1_8 = (((((-10000 + var_1_9)) < (((var_1_10 + 64) + var_1_11))) ? ((-10000 + var_1_9)) : (((var_1_10 + 64) + var_1_11))));
 } else {
  var_1_8 = (((((16) < (var_1_12)) ? (16) : (var_1_12))) - var_1_13);
 }
 if (-50 <= ((((var_1_45) < (var_1_37)) ? (var_1_45) : (var_1_37)))) {
  if ((var_1_42 << var_1_15) >= var_1_38) {
   var_1_52 = (-1 - var_1_42);
  } else {
   if (var_1_1 && var_1_6) {
    var_1_52 = (var_1_42 - var_1_45);
   }
  }
 } else {
  var_1_52 = ((((((((var_1_13) > (var_1_38)) ? (var_1_13) : (var_1_38)))) > (64)) ? (((((var_1_13) > (var_1_38)) ? (var_1_13) : (var_1_38)))) : (64)));
 }
 if ((- (var_1_19 * var_1_44)) <= var_1_18) {
  var_1_22 = ((var_1_23 - var_1_54) - var_1_13);
 } else {
  if ((16 | var_1_8) > var_1_13) {
   var_1_22 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
  } else {
   var_1_22 = var_1_16;
  }
 }
 signed short int stepLocal_7 = var_1_13;
 signed short int stepLocal_6 = var_1_9;
 unsigned char stepLocal_5 = (~ var_1_36) >= (var_1_13 - var_1_16);
 if (stepLocal_5 && var_1_55) {
  if (stepLocal_6 < var_1_35) {
   if (var_1_22 >= stepLocal_7) {
    var_1_40 = ((((var_1_38) > (((((var_1_13) < (var_1_22)) ? (var_1_13) : (var_1_22))))) ? (var_1_38) : (((((var_1_13) < (var_1_22)) ? (var_1_13) : (var_1_22))))));
   }
  } else {
   var_1_40 = var_1_13;
  }
 } else {
  var_1_40 = var_1_22;
 }
 signed long int stepLocal_9 = var_1_12 - (var_1_42 + var_1_16);
 if (stepLocal_9 < var_1_63) {
  var_1_65 = ((((var_1_40) < (var_1_16)) ? (var_1_40) : (var_1_16)));
 } else {
  var_1_65 = (10 + (var_1_66 - var_1_15));
 }
 if ((32u << var_1_16) < (~ ((((var_1_13) < (var_1_40)) ? (var_1_13) : (var_1_40))))) {
  var_1_34 = (-25 + var_1_35);
 }
 if ((var_1_37 - var_1_15) > var_1_38) {
  var_1_41 = (((var_1_38 < 64) && var_1_55) && var_1_5);
 } else {
  if (((var_1_22 >> var_1_42) % var_1_39) > (((((var_1_37) > (var_1_21)) ? (var_1_37) : (var_1_21))) / var_1_23)) {
   var_1_41 = (var_1_6 || (var_1_5 || var_1_4));
  } else {
   if (! var_1_1) {
    var_1_41 = (var_1_67 && var_1_4);
   } else {
    var_1_41 = (var_1_5 || var_1_43);
   }
  }
 }
 if ((31.75 >= 1.375) || (var_1_15 < var_1_12)) {
  if (var_1_67 || (! var_1_6)) {
   if ((var_1_36 + (- var_1_40)) != (var_1_58 / -128)) {
    var_1_60 = ((var_1_61 - var_1_42) - var_1_45);
   }
  }
 } else {
  var_1_60 = var_1_42;
 }
 if ((var_1_9 > var_1_16) && var_1_41) {
  if ((64 < var_1_10) && var_1_47) {
   var_1_25 = (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) + (((((var_1_28 - var_1_29)) < (var_1_30)) ? ((var_1_28 - var_1_29)) : (var_1_30))));
  }
 } else {
  var_1_25 = ((((((var_1_31) > (var_1_33)) ? (var_1_31) : (var_1_33))) - ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29)))) - (var_1_32 + 15.5f));
 }
 if (var_1_55 && (var_1_29 <= var_1_26)) {
  var_1_49 = ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (var_1_18)) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (var_1_18)));
 } else {
  if ((var_1_42 / var_1_39) > var_1_38) {
   if (var_1_6 || (var_1_27 < (var_1_28 - 1.00000000000075E12f))) {
    var_1_49 = (4.25 - var_1_20);
   } else {
    var_1_49 = var_1_28;
   }
  } else {
   if ((var_1_11 <= var_1_36) || (var_1_19 <= (var_1_25 / var_1_33))) {
    var_1_49 = var_1_30;
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -8191);
 assume_abort_if_not(var_1_10 <= 8192);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -16383);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 1073741822);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= 6917529.027641074000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= -16383);
 assume_abort_if_not(var_1_35 <= 16383);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65534);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 63);
 assume_abort_if_not(var_1_38 <= 128);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 64);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 30);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_57 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_57 >= 2147483647);
 assume_abort_if_not(var_1_57 <= 4294967294);
 var_1_58 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_58 >= 1610612735);
 assume_abort_if_not(var_1_58 <= 2147483647);
 var_1_61 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_61 >= 62);
 assume_abort_if_not(var_1_61 <= 126);
 var_1_63 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_63 >= -127);
 assume_abort_if_not(var_1_63 <= 126);
 var_1_66 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_66 >= 16383);
 assume_abort_if_not(var_1_66 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_36 = var_1_36;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_65 = var_1_65;
}
int property(void) {
 return (((((((((((((((((((((((((var_1_67 || var_1_55) ? (var_1_1 == ((unsigned char) (var_1_55 && var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 && ((var_1_5 || var_1_6) || var_1_7))))) && (var_1_67 ? (var_1_8 == ((signed short int) (((((-10000 + var_1_9)) < (((var_1_10 + 64) + var_1_11))) ? ((-10000 + var_1_9)) : (((var_1_10 + 64) + var_1_11)))))) : (var_1_8 == ((signed short int) (((((16) < (var_1_12)) ? (16) : (var_1_12))) - var_1_13))))) && ((var_1_12 > var_1_9) ? ((! (! (var_1_7 || last_1_var_1_47))) ? (var_1_14 == ((unsigned char) var_1_15)) : 1) : ((last_1_var_1_65 > (var_1_13 - var_1_15)) ? (var_1_14 == ((unsigned char) ((((var_1_16) > (10)) ? (var_1_16) : (10))))) : 1))) && ((var_1_16 < var_1_10) ? ((last_1_var_1_47 || var_1_5) ? (var_1_17 == ((double) var_1_18)) : (last_1_var_1_47 ? (var_1_17 == ((double) (((((var_1_19 - var_1_20)) < (var_1_18)) ? ((var_1_19 - var_1_20)) : (var_1_18))))) : 1)) : (var_1_17 == ((double) var_1_20)))) && ((var_1_9 <= (~ -256)) ? (var_1_21 == ((signed long int) var_1_11)) : ((2 <= var_1_10) ? (var_1_21 == ((signed long int) ((((var_1_9) < ((var_1_12 + -5))) ? (var_1_9) : ((var_1_12 + -5)))))) : (var_1_21 == ((signed long int) var_1_15))))) && (((- (var_1_19 * var_1_44)) <= var_1_18) ? (var_1_22 == ((signed long int) ((var_1_23 - var_1_54) - var_1_13))) : (((16 | var_1_8) > var_1_13) ? (var_1_22 == ((signed long int) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : (var_1_22 == ((signed long int) var_1_16))))) && (var_1_24 == ((unsigned short int) var_1_15))) && (((var_1_9 > var_1_16) && var_1_41) ? (((64 < var_1_10) && var_1_47) ? (var_1_25 == ((float) (((((var_1_26) < (var_1_27)) ? (var_1_26) : (var_1_27))) + (((((var_1_28 - var_1_29)) < (var_1_30)) ? ((var_1_28 - var_1_29)) : (var_1_30)))))) : 1) : (var_1_25 == ((float) ((((((var_1_31) > (var_1_33)) ? (var_1_31) : (var_1_33))) - ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29)))) - (var_1_32 + 15.5f)))))) && (((32u << var_1_16) < (~ ((((var_1_13) < (var_1_40)) ? (var_1_13) : (var_1_40))))) ? (var_1_34 == ((signed short int) (-25 + var_1_35))) : 1)) && (((var_1_15 / var_1_23) >= var_1_12) ? (var_1_36 == ((unsigned short int) (var_1_37 - var_1_14))) : ((((var_1_38 + var_1_39) - 5) != ((((var_1_56) > (last_1_var_1_36)) ? (var_1_56) : (last_1_var_1_36)))) ? (var_1_36 == ((unsigned short int) (var_1_14 + var_1_16))) : (var_1_36 == ((unsigned short int) (38523 - var_1_16)))))) && ((((~ var_1_36) >= (var_1_13 - var_1_16)) && var_1_55) ? ((var_1_9 < var_1_35) ? ((var_1_22 >= var_1_13) ? (var_1_40 == ((unsigned short int) ((((var_1_38) > (((((var_1_13) < (var_1_22)) ? (var_1_13) : (var_1_22))))) ? (var_1_38) : (((((var_1_13) < (var_1_22)) ? (var_1_13) : (var_1_22)))))))) : 1) : (var_1_40 == ((unsigned short int) var_1_13))) : (var_1_40 == ((unsigned short int) var_1_22)))) && (((var_1_37 - var_1_15) > var_1_38) ? (var_1_41 == ((unsigned char) (((var_1_38 < 64) && var_1_55) && var_1_5))) : ((((var_1_22 >> var_1_42) % var_1_39) > (((((var_1_37) > (var_1_21)) ? (var_1_37) : (var_1_21))) / var_1_23)) ? (var_1_41 == ((unsigned char) (var_1_6 || (var_1_5 || var_1_4)))) : ((! var_1_1) ? (var_1_41 == ((unsigned char) (var_1_67 && var_1_4))) : (var_1_41 == ((unsigned char) (var_1_5 || var_1_43))))))) && (((var_1_39 << (var_1_45 + 0u)) > var_1_35) ? (var_1_44 == ((double) ((((var_1_28) > (var_1_29)) ? (var_1_28) : (var_1_29))))) : 1)) && ((var_1_16 > var_1_13) ? (var_1_46 == ((unsigned short int) ((((var_1_13) > (var_1_38)) ? (var_1_13) : (var_1_38))))) : 1)) && (var_1_7 ? ((var_1_30 >= var_1_17) ? (var_1_47 == ((unsigned char) (! var_1_43))) : 1) : 1)) && ((var_1_55 && (var_1_29 <= var_1_26)) ? (var_1_49 == ((double) ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) > (var_1_18)) ? (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (var_1_18))))) : (((var_1_42 / var_1_39) > var_1_38) ? ((var_1_6 || (var_1_27 < (var_1_28 - 1.00000000000075E12f))) ? (var_1_49 == ((double) (4.25 - var_1_20))) : (var_1_49 == ((double) var_1_28))) : (((var_1_11 <= var_1_36) || (var_1_19 <= (var_1_25 / var_1_33))) ? (var_1_49 == ((double) var_1_30)) : 1)))) && ((-50 <= ((((var_1_45) < (var_1_37)) ? (var_1_45) : (var_1_37)))) ? (((var_1_42 << var_1_15) >= var_1_38) ? (var_1_52 == ((signed short int) (-1 - var_1_42))) : ((var_1_1 && var_1_6) ? (var_1_52 == ((signed short int) (var_1_42 - var_1_45))) : 1)) : (var_1_52 == ((signed short int) ((((((((var_1_13) > (var_1_38)) ? (var_1_13) : (var_1_38)))) > (64)) ? (((((var_1_13) > (var_1_38)) ? (var_1_13) : (var_1_38)))) : (64))))))) && ((var_1_20 <= (((((- var_1_31)) > (var_1_30)) ? ((- var_1_31)) : (var_1_30)))) ? (var_1_54 == ((signed short int) (var_1_14 - var_1_42))) : ((var_1_19 < var_1_29) ? (var_1_54 == ((signed short int) (var_1_14 + var_1_39))) : (var_1_54 == ((signed short int) var_1_16))))) && ((! var_1_4) ? (var_1_55 == ((unsigned char) (! var_1_43))) : (var_1_55 == ((unsigned char) (var_1_7 && var_1_5))))) && (var_1_56 == ((unsigned long int) (var_1_57 - ((var_1_58 - var_1_46) - var_1_13))))) && ((var_1_20 <= 4.4) ? (var_1_59 == ((signed long int) (var_1_38 + ((((var_1_15) > (var_1_21)) ? (var_1_15) : (var_1_21)))))) : 1)) && (((31.75 >= 1.375) || (var_1_15 < var_1_12)) ? ((var_1_67 || (! var_1_6)) ? (((var_1_36 + (- var_1_40)) != (var_1_58 / -128)) ? (var_1_60 == ((signed char) ((var_1_61 - var_1_42) - var_1_45))) : 1) : 1) : (var_1_60 == ((signed char) var_1_42)))) && (var_1_6 ? (var_1_64 == ((signed long int) var_1_9)) : (var_1_64 == ((signed long int) var_1_37)))) && (((var_1_12 - (var_1_42 + var_1_16)) < var_1_63) ? (var_1_65 == ((unsigned short int) ((((var_1_40) < (var_1_16)) ? (var_1_40) : (var_1_16))))) : (var_1_65 == ((unsigned short int) (10 + (var_1_66 - var_1_15)))))) && (var_1_6 ? (var_1_67 == ((unsigned char) (! ((! var_1_7) && var_1_43)))) : (var_1_67 == ((unsigned char) (var_1_47 && var_1_4))))
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
