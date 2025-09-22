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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 500;
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 256;
unsigned long int var_1_4 = 5;
unsigned long int var_1_5 = 5;
signed long int var_1_6 = 1;
signed long int var_1_7 = 10000;
signed char var_1_8 = -16;
signed char var_1_9 = 25;
signed char var_1_10 = 5;
signed char var_1_11 = -2;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
signed char var_1_14 = 16;
signed char var_1_15 = -8;
double var_1_16 = 50.6;
double var_1_17 = 128.5;
double var_1_18 = 5.75;
double var_1_19 = 3.4;
double var_1_20 = 63.5;
signed long int var_1_21 = -1;
signed long int var_1_22 = 50;
double var_1_23 = 8.625;
signed char var_1_24 = 100;
double var_1_25 = 0.75;
double var_1_26 = 128.125;
double var_1_27 = 4.125;
double var_1_28 = 9.25;
signed long int var_1_29 = -25;
double var_1_30 = 0.0;
double var_1_31 = 0.0;
double var_1_32 = 64.4;
double var_1_33 = 99.75;
signed char var_1_34 = -8;
signed char var_1_35 = 8;
signed char var_1_36 = 4;
signed short int var_1_37 = -128;
signed char var_1_38 = -50;
signed short int var_1_40 = 4;
unsigned short int var_1_41 = 64;
unsigned short int var_1_42 = 42351;
unsigned char var_1_43 = 4;
unsigned char var_1_45 = 128;
unsigned short int var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned short int var_1_48 = 18121;
unsigned short int var_1_49 = 29129;
unsigned short int var_1_50 = 10000;
unsigned char var_1_52 = 10;
unsigned char var_1_53 = 5;
float var_1_54 = 10.5;
double var_1_55 = 31.25;
double var_1_56 = 1.375;
double var_1_57 = 128.8;
double var_1_58 = 100.6;
unsigned char var_1_59 = 5;
signed char var_1_60 = -1;
double var_1_61 = 4.4;
unsigned short int var_1_62 = 128;
unsigned char var_1_63 = 200;
signed char var_1_64 = -16;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
signed char var_1_67 = 32;
signed short int var_1_68 = 64;
signed long int last_1_var_1_1 = 500;
signed long int last_1_var_1_22 = 50;
signed short int last_1_var_1_40 = 4;
unsigned short int last_1_var_1_46 = 0;
double last_1_var_1_61 = 4.4;
unsigned char last_1_var_1_65 = 1;
signed short int last_1_var_1_68 = 64;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_13 = var_1_7 >= last_1_var_1_1;
 unsigned short int stepLocal_12 = var_1_42;
 if (stepLocal_13 || last_1_var_1_65) {
  if (stepLocal_12 > last_1_var_1_46) {
   var_1_43 = (var_1_45 - ((((var_1_36) > (var_1_24)) ? (var_1_36) : (var_1_24))));
  }
 } else {
  var_1_43 = (var_1_45 - var_1_24);
 }
 unsigned char stepLocal_18 = var_1_47;
 if (var_1_13 && stepLocal_18) {
  var_1_65 = (((last_1_var_1_22 > var_1_3) && (var_1_19 == last_1_var_1_61)) && var_1_66);
 }
 if (var_1_65) {
  var_1_62 = var_1_48;
 } else {
  var_1_62 = var_1_36;
 }
 if ((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) & var_1_4) <= var_1_5) {
  var_1_1 = (var_1_6 - var_1_7);
 } else {
  var_1_1 = ((((((((var_1_6) > ((10 - 128))) ? (var_1_6) : ((10 - 128))))) > (var_1_7)) ? (((((var_1_6) > ((10 - 128))) ? (var_1_6) : ((10 - 128))))) : (var_1_7)));
 }
 var_1_8 = ((var_1_9 + var_1_10) + 32);
 unsigned char stepLocal_0 = var_1_12;
 if (stepLocal_0 || var_1_13) {
  var_1_11 = var_1_9;
 } else {
  var_1_11 = ((((var_1_10) > ((var_1_9 + (var_1_14 + var_1_15)))) ? (var_1_10) : ((var_1_9 + (var_1_14 + var_1_15)))));
 }
 if (var_1_6 > (var_1_7 * var_1_1)) {
  var_1_21 = var_1_14;
 }
 unsigned long int stepLocal_6 = var_1_3;
 signed long int stepLocal_5 = (((-4) < 0 ) ? -(-4) : (-4));
 if (stepLocal_6 < var_1_2) {
  if (var_1_14 >= stepLocal_5) {
   var_1_23 = ((((var_1_20) > ((256.25 + (var_1_25 + 2.7)))) ? (var_1_20) : ((256.25 + (var_1_25 + 2.7)))));
  }
 } else {
  var_1_23 = (var_1_26 - var_1_27);
 }
 signed long int stepLocal_8 = var_1_1;
 signed long int stepLocal_7 = ((((var_1_24) > (128)) ? (var_1_24) : (128))) - 256;
 if (stepLocal_8 <= (((((var_1_6) > (var_1_1)) ? (var_1_6) : (var_1_1))) / var_1_29)) {
  var_1_28 = ((var_1_30 - 128.375) - (var_1_31 - ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33)))));
 } else {
  if (stepLocal_7 >= var_1_1) {
   var_1_28 = var_1_25;
  } else {
   var_1_28 = var_1_31;
  }
 }
 if (var_1_65) {
  var_1_34 = (var_1_35 - var_1_36);
 }
 signed long int stepLocal_11 = -4;
 if (stepLocal_11 <= var_1_24) {
  var_1_41 = (var_1_42 - var_1_36);
 }
 signed long int stepLocal_16 = 100 / var_1_49;
 if (var_1_6 <= stepLocal_16) {
  var_1_52 = (var_1_36 + ((((var_1_24) < ((64 - var_1_53))) ? (var_1_24) : ((64 - var_1_53)))));
 }
 if (! var_1_65) {
  if ((((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))) / var_1_29) > var_1_5) {
   var_1_54 = var_1_17;
  }
 }
 var_1_63 = var_1_36;
 if (var_1_65) {
  var_1_64 = var_1_53;
 } else {
  var_1_64 = var_1_10;
 }
 var_1_67 = var_1_35;
 var_1_68 = last_1_var_1_68;
 unsigned short int stepLocal_15 = var_1_41;
 unsigned char stepLocal_14 = var_1_1 >= (var_1_43 - var_1_7);
 if (var_1_65 || stepLocal_14) {
  if (! var_1_65) {
   var_1_46 = (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_43);
  } else {
   var_1_46 = (var_1_42 - var_1_45);
  }
 } else {
  if (var_1_65) {
   if (var_1_65) {
    var_1_46 = (((((var_1_42 - var_1_24)) < (var_1_43)) ? ((var_1_42 - var_1_24)) : (var_1_43)));
   } else {
    var_1_46 = (var_1_42 - (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) - (var_1_50 - var_1_45)));
   }
  } else {
   if (stepLocal_15 <= var_1_4) {
    var_1_46 = (var_1_41 + (var_1_24 + (var_1_45 + var_1_36)));
   }
  }
 }
 signed long int stepLocal_4 = var_1_1;
 if (var_1_65) {
  if (var_1_5 != stepLocal_4) {
   var_1_22 = ((var_1_9 + (var_1_14 + last_1_var_1_22)) + var_1_8);
  } else {
   var_1_22 = ((((((var_1_15 + var_1_8) + var_1_10)) < (var_1_7)) ? (((var_1_15 + var_1_8) + var_1_10)) : (var_1_7)));
  }
 } else {
  var_1_22 = 8;
 }
 unsigned long int stepLocal_17 = var_1_3 * var_1_50;
 if (stepLocal_17 < var_1_62) {
  var_1_61 = (((var_1_56 + var_1_57) + var_1_32) - var_1_30);
 } else {
  var_1_61 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
 }
 signed long int stepLocal_3 = var_1_6;
 signed long int stepLocal_2 = (((var_1_21) < (var_1_7)) ? (var_1_21) : (var_1_7));
 signed long int stepLocal_1 = var_1_46 * -4;
 if (stepLocal_2 >= var_1_9) {
  if (stepLocal_3 > var_1_5) {
   if ((var_1_9 ^ var_1_15) < stepLocal_1) {
    var_1_16 = ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18)));
   }
  } else {
   var_1_16 = (var_1_19 + var_1_20);
  }
 } else {
  var_1_16 = var_1_20;
 }
 if (var_1_65) {
  var_1_37 = ((((((((var_1_14) < (0)) ? (var_1_14) : (0)))) > (var_1_35)) ? (((((var_1_14) < (0)) ? (var_1_14) : (0)))) : (var_1_35)));
 } else {
  var_1_37 = var_1_64;
 }
 unsigned char stepLocal_10 = var_1_2 > var_1_7;
 signed long int stepLocal_9 = (((var_1_29) > (var_1_11)) ? (var_1_29) : (var_1_11));
 if (! ((var_1_37 | var_1_9) <= (var_1_35 - var_1_36))) {
  if ((var_1_35 - var_1_36) > stepLocal_9) {
   if (var_1_65 && stepLocal_10) {
    var_1_38 = ((((var_1_10) < (((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36))))) ? (var_1_10) : (((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36))))));
   }
  } else {
   var_1_38 = var_1_9;
  }
 }
 if (var_1_6 < var_1_37) {
  var_1_59 = (((((var_1_53) < (var_1_24)) ? (var_1_53) : (var_1_24))) + var_1_36);
 } else {
  if (var_1_30 < ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) {
   var_1_59 = (((((var_1_45 - var_1_36)) < (var_1_53)) ? ((var_1_45 - var_1_36)) : (var_1_53)));
  }
 }
 if (var_1_65) {
  if ((~ (var_1_68 + var_1_53)) >= ((((var_1_42) < (var_1_48)) ? (var_1_42) : (var_1_48)))) {
   if (var_1_5 > 8u) {
    var_1_60 = var_1_9;
   }
  } else {
   var_1_60 = ((((var_1_10) > (((((var_1_53) < (var_1_35)) ? (var_1_53) : (var_1_35))))) ? (var_1_10) : (((((var_1_53) < (var_1_35)) ? (var_1_53) : (var_1_35))))));
  }
 } else {
  var_1_60 = (var_1_35 - var_1_53);
 }
 if (var_1_65) {
  if (var_1_23 <= ((((var_1_25) > (var_1_31)) ? (var_1_25) : (var_1_31)))) {
   if (var_1_65) {
    var_1_40 = ((((var_1_9) < ((var_1_15 + ((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35)))))) ? (var_1_9) : ((var_1_15 + ((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35)))))));
   } else {
    var_1_40 = 32;
   }
  } else {
   var_1_40 = (((((last_1_var_1_40 + ((((var_1_14) > (var_1_62)) ? (var_1_14) : (var_1_62))))) < (128)) ? ((last_1_var_1_40 + ((((var_1_14) > (var_1_62)) ? (var_1_14) : (var_1_62))))) : (128)));
  }
 }
 if ((~ var_1_48) >= (var_1_21 / var_1_42)) {
  if ((var_1_28 / ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))) > var_1_33) {
   if (var_1_59 >= (25 * var_1_45)) {
    var_1_55 = (var_1_26 - 32.6);
   } else {
    if (((var_1_42 - 128) + var_1_24) >= var_1_14) {
     var_1_55 = ((var_1_32 + (var_1_56 + var_1_57)) - var_1_33);
    } else {
     var_1_55 = (var_1_58 - var_1_26);
    }
   }
  } else {
   var_1_55 = (var_1_27 - ((((var_1_19 + var_1_33) < 0 ) ? -(var_1_19 + var_1_33) : (var_1_19 + var_1_33))));
  }
 } else {
  if (var_1_28 >= var_1_18) {
   var_1_55 = var_1_30;
  } else {
   var_1_55 = var_1_19;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -31);
 assume_abort_if_not(var_1_9 <= 32);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -31);
 assume_abort_if_not(var_1_10 <= 31);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -31);
 assume_abort_if_not(var_1_14 <= 32);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -31);
 assume_abort_if_not(var_1_15 <= 31);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -230584.3009213691400e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 2305843.009213691400e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 assume_abort_if_not(var_1_29 != 0);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 4611686.018427383000e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 4611686.018427383000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -1);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 32767);
 assume_abort_if_not(var_1_42 <= 65534);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 127);
 assume_abort_if_not(var_1_45 <= 254);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_48 >= 16383);
 assume_abort_if_not(var_1_48 <= 32767);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 16383);
 assume_abort_if_not(var_1_49 <= 32767);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 8191);
 assume_abort_if_not(var_1_50 <= 16383);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 63);
 var_1_56 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
 var_1_57 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691400e+12F && var_1_57 >= 1.0e-20F ));
 var_1_58 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854766000e+12F && var_1_58 >= 1.0e-20F ));
 var_1_66 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_66 >= 0);
 assume_abort_if_not(var_1_66 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_46 = var_1_46;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_65 = var_1_65;
 last_1_var_1_68 = var_1_68;
}
int property(void) {
 return ((((((((((((((((((((((((((((((((var_1_2) > (var_1_3)) ? (var_1_2) : (var_1_3))) & var_1_4) <= var_1_5) ? (var_1_1 == ((signed long int) (var_1_6 - var_1_7))) : (var_1_1 == ((signed long int) ((((((((var_1_6) > ((10 - 128))) ? (var_1_6) : ((10 - 128))))) > (var_1_7)) ? (((((var_1_6) > ((10 - 128))) ? (var_1_6) : ((10 - 128))))) : (var_1_7)))))) && (var_1_8 == ((signed char) ((var_1_9 + var_1_10) + 32)))) && ((var_1_12 || var_1_13) ? (var_1_11 == ((signed char) var_1_9)) : (var_1_11 == ((signed char) ((((var_1_10) > ((var_1_9 + (var_1_14 + var_1_15)))) ? (var_1_10) : ((var_1_9 + (var_1_14 + var_1_15))))))))) && ((((((var_1_21) < (var_1_7)) ? (var_1_21) : (var_1_7))) >= var_1_9) ? ((var_1_6 > var_1_5) ? (((var_1_9 ^ var_1_15) < (var_1_46 * -4)) ? (var_1_16 == ((double) ((((var_1_17) > (var_1_18)) ? (var_1_17) : (var_1_18))))) : 1) : (var_1_16 == ((double) (var_1_19 + var_1_20)))) : (var_1_16 == ((double) var_1_20)))) && ((var_1_6 > (var_1_7 * var_1_1)) ? (var_1_21 == ((signed long int) var_1_14)) : 1)) && (var_1_65 ? ((var_1_5 != var_1_1) ? (var_1_22 == ((signed long int) ((var_1_9 + (var_1_14 + last_1_var_1_22)) + var_1_8))) : (var_1_22 == ((signed long int) ((((((var_1_15 + var_1_8) + var_1_10)) < (var_1_7)) ? (((var_1_15 + var_1_8) + var_1_10)) : (var_1_7)))))) : (var_1_22 == ((signed long int) 8)))) && ((var_1_3 < var_1_2) ? ((var_1_14 >= ((((-4) < 0 ) ? -(-4) : (-4)))) ? (var_1_23 == ((double) ((((var_1_20) > ((256.25 + (var_1_25 + 2.7)))) ? (var_1_20) : ((256.25 + (var_1_25 + 2.7))))))) : 1) : (var_1_23 == ((double) (var_1_26 - var_1_27))))) && ((var_1_1 <= (((((var_1_6) > (var_1_1)) ? (var_1_6) : (var_1_1))) / var_1_29)) ? (var_1_28 == ((double) ((var_1_30 - 128.375) - (var_1_31 - ((((var_1_32) < (var_1_33)) ? (var_1_32) : (var_1_33))))))) : (((((((var_1_24) > (128)) ? (var_1_24) : (128))) - 256) >= var_1_1) ? (var_1_28 == ((double) var_1_25)) : (var_1_28 == ((double) var_1_31))))) && (var_1_65 ? (var_1_34 == ((signed char) (var_1_35 - var_1_36))) : 1)) && (var_1_65 ? (var_1_37 == ((signed short int) ((((((((var_1_14) < (0)) ? (var_1_14) : (0)))) > (var_1_35)) ? (((((var_1_14) < (0)) ? (var_1_14) : (0)))) : (var_1_35))))) : (var_1_37 == ((signed short int) var_1_64)))) && ((! ((var_1_37 | var_1_9) <= (var_1_35 - var_1_36))) ? (((var_1_35 - var_1_36) > ((((var_1_29) > (var_1_11)) ? (var_1_29) : (var_1_11)))) ? ((var_1_65 && (var_1_2 > var_1_7)) ? (var_1_38 == ((signed char) ((((var_1_10) < (((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36))))) ? (var_1_10) : (((((var_1_14) < (var_1_36)) ? (var_1_14) : (var_1_36)))))))) : 1) : (var_1_38 == ((signed char) var_1_9))) : 1)) && (var_1_65 ? ((var_1_23 <= ((((var_1_25) > (var_1_31)) ? (var_1_25) : (var_1_31)))) ? (var_1_65 ? (var_1_40 == ((signed short int) ((((var_1_9) < ((var_1_15 + ((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35)))))) ? (var_1_9) : ((var_1_15 + ((((var_1_59) > (var_1_35)) ? (var_1_59) : (var_1_35))))))))) : (var_1_40 == ((signed short int) 32))) : (var_1_40 == ((signed short int) (((((last_1_var_1_40 + ((((var_1_14) > (var_1_62)) ? (var_1_14) : (var_1_62))))) < (128)) ? ((last_1_var_1_40 + ((((var_1_14) > (var_1_62)) ? (var_1_14) : (var_1_62))))) : (128)))))) : 1)) && ((-4 <= var_1_24) ? (var_1_41 == ((unsigned short int) (var_1_42 - var_1_36))) : 1)) && (((var_1_7 >= last_1_var_1_1) || last_1_var_1_65) ? ((var_1_42 > last_1_var_1_46) ? (var_1_43 == ((unsigned char) (var_1_45 - ((((var_1_36) > (var_1_24)) ? (var_1_36) : (var_1_24)))))) : 1) : (var_1_43 == ((unsigned char) (var_1_45 - var_1_24))))) && ((var_1_65 || (var_1_1 >= (var_1_43 - var_1_7))) ? ((! var_1_65) ? (var_1_46 == ((unsigned short int) (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))) + var_1_43))) : (var_1_46 == ((unsigned short int) (var_1_42 - var_1_45)))) : (var_1_65 ? (var_1_65 ? (var_1_46 == ((unsigned short int) (((((var_1_42 - var_1_24)) < (var_1_43)) ? ((var_1_42 - var_1_24)) : (var_1_43))))) : (var_1_46 == ((unsigned short int) (var_1_42 - (((((var_1_48) < (var_1_49)) ? (var_1_48) : (var_1_49))) - (var_1_50 - var_1_45)))))) : ((var_1_41 <= var_1_4) ? (var_1_46 == ((unsigned short int) (var_1_41 + (var_1_24 + (var_1_45 + var_1_36))))) : 1)))) && ((var_1_6 <= (100 / var_1_49)) ? (var_1_52 == ((unsigned char) (var_1_36 + ((((var_1_24) < ((64 - var_1_53))) ? (var_1_24) : ((64 - var_1_53))))))) : 1)) && ((! var_1_65) ? (((((((var_1_8) < (var_1_7)) ? (var_1_8) : (var_1_7))) / var_1_29) > var_1_5) ? (var_1_54 == ((float) var_1_17)) : 1) : 1)) && (((~ var_1_48) >= (var_1_21 / var_1_42)) ? (((var_1_28 / ((((var_1_30) < (var_1_31)) ? (var_1_30) : (var_1_31)))) > var_1_33) ? ((var_1_59 >= (25 * var_1_45)) ? (var_1_55 == ((double) (var_1_26 - 32.6))) : ((((var_1_42 - 128) + var_1_24) >= var_1_14) ? (var_1_55 == ((double) ((var_1_32 + (var_1_56 + var_1_57)) - var_1_33))) : (var_1_55 == ((double) (var_1_58 - var_1_26))))) : (var_1_55 == ((double) (var_1_27 - ((((var_1_19 + var_1_33) < 0 ) ? -(var_1_19 + var_1_33) : (var_1_19 + var_1_33))))))) : ((var_1_28 >= var_1_18) ? (var_1_55 == ((double) var_1_30)) : (var_1_55 == ((double) var_1_19))))) && ((var_1_6 < var_1_37) ? (var_1_59 == ((unsigned char) (((((var_1_53) < (var_1_24)) ? (var_1_53) : (var_1_24))) + var_1_36))) : ((var_1_30 < ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) ? (var_1_59 == ((unsigned char) (((((var_1_45 - var_1_36)) < (var_1_53)) ? ((var_1_45 - var_1_36)) : (var_1_53))))) : 1))) && (var_1_65 ? (((~ (var_1_68 + var_1_53)) >= ((((var_1_42) < (var_1_48)) ? (var_1_42) : (var_1_48)))) ? ((var_1_5 > 8u) ? (var_1_60 == ((signed char) var_1_9)) : 1) : (var_1_60 == ((signed char) ((((var_1_10) > (((((var_1_53) < (var_1_35)) ? (var_1_53) : (var_1_35))))) ? (var_1_10) : (((((var_1_53) < (var_1_35)) ? (var_1_53) : (var_1_35))))))))) : (var_1_60 == ((signed char) (var_1_35 - var_1_53))))) && (((var_1_3 * var_1_50) < var_1_62) ? (var_1_61 == ((double) (((var_1_56 + var_1_57) + var_1_32) - var_1_30))) : (var_1_61 == ((double) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))))) && (var_1_65 ? (var_1_62 == ((unsigned short int) var_1_48)) : (var_1_62 == ((unsigned short int) var_1_36)))) && (var_1_63 == ((unsigned char) var_1_36))) && (var_1_65 ? (var_1_64 == ((signed char) var_1_53)) : (var_1_64 == ((signed char) var_1_10)))) && ((var_1_13 && var_1_47) ? (var_1_65 == ((unsigned char) (((last_1_var_1_22 > var_1_3) && (var_1_19 == last_1_var_1_61)) && var_1_66))) : 1)) && (var_1_67 == ((signed char) var_1_35))) && (var_1_68 == ((signed short int) last_1_var_1_68))
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
