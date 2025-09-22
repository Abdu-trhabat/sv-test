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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197Amount250.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
float var_1_8 = 5.5;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = -10;
signed long int var_1_14 = 10;
signed long int var_1_15 = 100;
signed long int var_1_16 = 0;
signed long int var_1_17 = 1;
signed long int var_1_18 = -128;
signed long int var_1_19 = -1;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 64;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 10;
unsigned char var_1_24 = 100;
unsigned char var_1_25 = 200;
unsigned char var_1_26 = 25;
unsigned char var_1_27 = 0;
unsigned short int var_1_28 = 128;
unsigned short int var_1_30 = 51847;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 2803851506;
signed char var_1_33 = -64;
signed char var_1_34 = -100;
signed char var_1_35 = 16;
signed char var_1_36 = 25;
signed long int var_1_37 = -1;
unsigned short int var_1_38 = 32;
unsigned long int var_1_39 = 16;
unsigned long int var_1_40 = 2821386453;
unsigned long int var_1_41 = 2177789997;
float var_1_42 = 256.25;
float var_1_43 = 64.4;
signed short int var_1_44 = 5;
signed short int var_1_45 = 1;
float var_1_46 = 9.5;
float var_1_47 = 10000.5;
float var_1_48 = 31.5;
float var_1_49 = 256.6;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 1;
double var_1_52 = 5.6;
unsigned short int var_1_53 = 0;
unsigned short int var_1_54 = 29557;
unsigned short int var_1_57 = 10000;
unsigned long int var_1_58 = 8;
unsigned long int var_1_59 = 4029234998;
unsigned long int var_1_60 = 1147948070;
unsigned long int var_1_61 = 128;
unsigned long int var_1_62 = 16;
unsigned long int var_1_63 = 1000000000;
signed long int var_1_64 = -4;
signed short int var_1_65 = -10;
signed long int last_1_var_1_13 = -10;
unsigned short int last_1_var_1_28 = 128;
unsigned short int last_1_var_1_53 = 0;
unsigned long int last_1_var_1_58 = 8;
signed short int last_1_var_1_65 = -10;
void initially(void) {
}
void step(void) {
 if ((- last_1_var_1_65) != last_1_var_1_58) {
  var_1_37 = (var_1_21 + (last_1_var_1_65 + var_1_24));
 } else {
  var_1_37 = var_1_16;
 }
 if (last_1_var_1_58 == last_1_var_1_13) {
  var_1_31 = (((((var_1_32 - var_1_21)) < ((var_1_14 + var_1_27))) ? ((var_1_32 - var_1_21)) : ((var_1_14 + var_1_27))));
 }
 if (var_1_11) {
  if (var_1_32 != last_1_var_1_28) {
   var_1_61 = (var_1_32 - 16u);
  } else {
   var_1_61 = (var_1_32 - var_1_21);
  }
 } else {
  var_1_61 = (((last_1_var_1_28 + var_1_62) + (var_1_63 - 5u)) + ((((last_1_var_1_53) > (var_1_54)) ? (last_1_var_1_53) : (var_1_54))));
 }
 signed long int stepLocal_0 = ((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))) - (var_1_14 + var_1_21);
 if (((((var_1_61) < (32)) ? (var_1_61) : (32))) <= stepLocal_0) {
  var_1_20 = (var_1_12 || var_1_22);
 } else {
  var_1_20 = (! var_1_11);
 }
 if (var_1_20) {
  var_1_38 = ((((var_1_26) > (((var_1_27 + var_1_35) + 1))) ? (var_1_26) : (((var_1_27 + var_1_35) + 1))));
 } else {
  var_1_38 = (var_1_35 + var_1_25);
 }
 signed long int stepLocal_1 = var_1_37;
 if (stepLocal_1 <= (var_1_17 - var_1_14)) {
  var_1_23 = ((((var_1_24) < (((var_1_25 - 5) - var_1_26))) ? (var_1_24) : (((var_1_25 - 5) - var_1_26))));
 } else {
  var_1_23 = ((((var_1_24) > ((var_1_26 + var_1_27))) ? (var_1_24) : ((var_1_26 + var_1_27))));
 }
 var_1_34 = (-1 - ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))));
 var_1_51 = (var_1_6 && var_1_7);
 var_1_52 = (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) - var_1_48);
 if (var_1_7) {
  var_1_53 = ((((var_1_36) > ((var_1_30 - (var_1_54 - var_1_27)))) ? (var_1_36) : ((var_1_30 - (var_1_54 - var_1_27)))));
 } else {
  if (var_1_15 <= (var_1_31 + var_1_37)) {
   var_1_53 = ((var_1_30 - (var_1_57 - var_1_24)) - var_1_25);
  } else {
   var_1_53 = (var_1_26 + var_1_24);
  }
 }
 unsigned long int stepLocal_8 = var_1_40 - var_1_38;
 unsigned char stepLocal_7 = var_1_6;
 signed char stepLocal_6 = var_1_35;
 if (stepLocal_6 > var_1_18) {
  var_1_46 = (var_1_47 - var_1_48);
 } else {
  if (stepLocal_8 <= ((var_1_32 - var_1_14) / ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) {
   var_1_46 = (var_1_48 - var_1_47);
  } else {
   if (stepLocal_7 || var_1_22) {
    var_1_46 = (var_1_49 + 128.5f);
   }
  }
 }
 if (var_1_46 != var_1_52) {
  var_1_1 = ((var_1_20 || (var_1_5 && var_1_6)) && var_1_7);
 } else {
  if (var_1_52 > (var_1_46 / var_1_8)) {
   if (! (var_1_52 >= (3.45f + var_1_46))) {
    if (var_1_6) {
     var_1_1 = (((var_1_7 && var_1_5) && (var_1_9 && var_1_10)) && var_1_11);
    } else {
     var_1_1 = (var_1_5 && var_1_12);
    }
   } else {
    var_1_1 = 0;
   }
  } else {
   var_1_1 = 0;
  }
 }
 if (var_1_1 || var_1_22) {
  var_1_50 = (var_1_1 || var_1_10);
 } else {
  var_1_50 = (var_1_12 || var_1_22);
 }
 if (((((var_1_52) > ((var_1_52 * var_1_8))) ? (var_1_52) : ((var_1_52 * var_1_8)))) < var_1_46) {
  var_1_42 = ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)));
 }
 if (var_1_18 <= var_1_45) {
  if (var_1_5 && var_1_10) {
   if (var_1_42 >= var_1_46) {
    var_1_64 = var_1_30;
   }
  }
 } else {
  var_1_64 = 128;
 }
 if ((16.4 + var_1_42) <= ((var_1_52 + 63.8) + ((((var_1_52) > (var_1_8)) ? (var_1_52) : (var_1_8))))) {
  var_1_33 = var_1_25;
 }
 if (var_1_52 < var_1_42) {
  if (var_1_8 != (- var_1_52)) {
   var_1_13 = (((((var_1_14 - 16) < 0 ) ? -(var_1_14 - 16) : (var_1_14 - 16))) + var_1_15);
  } else {
   var_1_13 = (((((var_1_14) > (var_1_16)) ? (var_1_14) : (var_1_16))) - var_1_17);
  }
 } else {
  var_1_13 = (var_1_14 + (var_1_18 + var_1_19));
 }
 unsigned char stepLocal_2 = var_1_27;
 if (stepLocal_2 >= ((var_1_14 ^ var_1_19) | var_1_15)) {
  var_1_28 = ((((var_1_25) > ((128 + var_1_26))) ? (var_1_25) : ((128 + var_1_26))));
 } else {
  if (var_1_52 >= var_1_42) {
   var_1_28 = ((((((var_1_30) > (54742)) ? (var_1_30) : (54742))) - var_1_38) - (var_1_26 + ((((var_1_27) > (var_1_25)) ? (var_1_27) : (var_1_25)))));
  }
 }
 unsigned long int stepLocal_4 = var_1_32;
 unsigned char stepLocal_3 = var_1_52 != var_1_8;
 if (stepLocal_3 || ((var_1_32 * var_1_30) <= (var_1_14 * var_1_35))) {
  var_1_39 = 1u;
 } else {
  if (stepLocal_4 <= (var_1_40 - var_1_17)) {
   var_1_39 = (((((var_1_32) < (var_1_41)) ? (var_1_32) : (var_1_41))) - ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) < (var_1_24)) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (var_1_24))));
  } else {
   if (var_1_50) {
    var_1_39 = (((((var_1_13 + ((((var_1_28) < (var_1_25)) ? (var_1_28) : (var_1_25))))) < (var_1_61)) ? ((var_1_13 + ((((var_1_28) < (var_1_25)) ? (var_1_28) : (var_1_25))))) : (var_1_61)));
   } else {
    var_1_39 = (((((var_1_27) > (var_1_61)) ? (var_1_27) : (var_1_61))) + var_1_24);
   }
  }
 }
 if ((var_1_13 * (var_1_39 / var_1_25)) >= var_1_26) {
  if (var_1_61 != var_1_59) {
   var_1_65 = (1 - var_1_36);
  }
 } else {
  var_1_65 = 128;
 }
 signed long int stepLocal_5 = (var_1_13 / var_1_25) * var_1_27;
 if (var_1_35 == stepLocal_5) {
  var_1_44 = (((((var_1_36) > (var_1_35)) ? (var_1_36) : (var_1_35))) - var_1_45);
 } else {
  if (var_1_12) {
   var_1_44 = var_1_36;
  } else {
   var_1_44 = var_1_27;
  }
 }
 signed long int stepLocal_12 = var_1_57 - 256;
 unsigned long int stepLocal_11 = - (1u / var_1_32);
 unsigned long int stepLocal_10 = var_1_31;
 unsigned char stepLocal_9 = var_1_12;
 if (((var_1_53 + var_1_37) % var_1_54) > stepLocal_12) {
  if (stepLocal_9 && var_1_9) {
   if (stepLocal_10 > var_1_61) {
    var_1_58 = ((((((var_1_59 - 5u)) < (var_1_32)) ? ((var_1_59 - 5u)) : (var_1_32))) - ((((var_1_64) > ((var_1_60 - var_1_28))) ? (var_1_64) : ((var_1_60 - var_1_28)))));
   } else {
    if (var_1_52 > (- (var_1_48 - var_1_47))) {
     var_1_58 = ((((var_1_26) < (var_1_64)) ? (var_1_26) : (var_1_64)));
    } else {
     var_1_58 = (((((((((var_1_32) < (var_1_59)) ? (var_1_32) : (var_1_59)))) > (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) ? (((((var_1_32) < (var_1_59)) ? (var_1_32) : (var_1_59)))) : (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) - var_1_14);
    }
   }
  }
 } else {
  if (var_1_41 >= stepLocal_11) {
   var_1_58 = (var_1_54 + (((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) < 0 ) ? -((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) : ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))))));
  } else {
   var_1_58 = (8u + ((((var_1_28) < ((var_1_60 - var_1_27))) ? (var_1_28) : ((var_1_60 - var_1_27)))));
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -1073741823);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -536870911);
 assume_abort_if_not(var_1_18 <= 536870912);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -536870911);
 assume_abort_if_not(var_1_19 <= 536870911);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1073741823);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 190);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 49150);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 2147483647);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967295);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 32766);
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_54 >= 16383);
 assume_abort_if_not(var_1_54 <= 32767);
 var_1_57 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_57 >= 8191);
 assume_abort_if_not(var_1_57 <= 16383);
 var_1_59 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_59 >= 3221225470);
 assume_abort_if_not(var_1_59 <= 4294967294);
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 1073741823);
 assume_abort_if_not(var_1_60 <= 2147483647);
 var_1_62 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_62 >= 0);
 assume_abort_if_not(var_1_62 <= 536870912);
 var_1_63 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_63 >= 536870911);
 assume_abort_if_not(var_1_63 <= 1073741823);
}
void updateLastVariables(void) {
 last_1_var_1_13 = var_1_13;
 last_1_var_1_28 = var_1_28;
 last_1_var_1_53 = var_1_53;
 last_1_var_1_58 = var_1_58;
 last_1_var_1_65 = var_1_65;
}
int property(void) {
 return ((((((((((((((((((((((var_1_46 != var_1_52) ? (var_1_1 == ((unsigned char) ((var_1_20 || (var_1_5 && var_1_6)) && var_1_7))) : ((var_1_52 > (var_1_46 / var_1_8)) ? ((! (var_1_52 >= (3.45f + var_1_46))) ? (var_1_6 ? (var_1_1 == ((unsigned char) (((var_1_7 && var_1_5) && (var_1_9 && var_1_10)) && var_1_11))) : (var_1_1 == ((unsigned char) (var_1_5 && var_1_12)))) : (var_1_1 == ((unsigned char) 0))) : (var_1_1 == ((unsigned char) 0)))) && ((var_1_52 < var_1_42) ? ((var_1_8 != (- var_1_52)) ? (var_1_13 == ((signed long int) (((((var_1_14 - 16) < 0 ) ? -(var_1_14 - 16) : (var_1_14 - 16))) + var_1_15))) : (var_1_13 == ((signed long int) (((((var_1_14) > (var_1_16)) ? (var_1_14) : (var_1_16))) - var_1_17)))) : (var_1_13 == ((signed long int) (var_1_14 + (var_1_18 + var_1_19)))))) && ((((((var_1_61) < (32)) ? (var_1_61) : (32))) <= (((((var_1_17) > (var_1_16)) ? (var_1_17) : (var_1_16))) - (var_1_14 + var_1_21))) ? (var_1_20 == ((unsigned char) (var_1_12 || var_1_22))) : (var_1_20 == ((unsigned char) (! var_1_11))))) && ((var_1_37 <= (var_1_17 - var_1_14)) ? (var_1_23 == ((unsigned char) ((((var_1_24) < (((var_1_25 - 5) - var_1_26))) ? (var_1_24) : (((var_1_25 - 5) - var_1_26)))))) : (var_1_23 == ((unsigned char) ((((var_1_24) > ((var_1_26 + var_1_27))) ? (var_1_24) : ((var_1_26 + var_1_27)))))))) && ((var_1_27 >= ((var_1_14 ^ var_1_19) | var_1_15)) ? (var_1_28 == ((unsigned short int) ((((var_1_25) > ((128 + var_1_26))) ? (var_1_25) : ((128 + var_1_26)))))) : ((var_1_52 >= var_1_42) ? (var_1_28 == ((unsigned short int) ((((((var_1_30) > (54742)) ? (var_1_30) : (54742))) - var_1_38) - (var_1_26 + ((((var_1_27) > (var_1_25)) ? (var_1_27) : (var_1_25))))))) : 1))) && ((last_1_var_1_58 == last_1_var_1_13) ? (var_1_31 == ((unsigned long int) (((((var_1_32 - var_1_21)) < ((var_1_14 + var_1_27))) ? ((var_1_32 - var_1_21)) : ((var_1_14 + var_1_27)))))) : 1)) && (((16.4 + var_1_42) <= ((var_1_52 + 63.8) + ((((var_1_52) > (var_1_8)) ? (var_1_52) : (var_1_8))))) ? (var_1_33 == ((signed char) var_1_25)) : 1)) && (var_1_34 == ((signed char) (-1 - ((((var_1_35) > (var_1_36)) ? (var_1_35) : (var_1_36))))))) && (((- last_1_var_1_65) != last_1_var_1_58) ? (var_1_37 == ((signed long int) (var_1_21 + (last_1_var_1_65 + var_1_24)))) : (var_1_37 == ((signed long int) var_1_16)))) && (var_1_20 ? (var_1_38 == ((unsigned short int) ((((var_1_26) > (((var_1_27 + var_1_35) + 1))) ? (var_1_26) : (((var_1_27 + var_1_35) + 1)))))) : (var_1_38 == ((unsigned short int) (var_1_35 + var_1_25))))) && (((var_1_52 != var_1_8) || ((var_1_32 * var_1_30) <= (var_1_14 * var_1_35))) ? (var_1_39 == ((unsigned long int) 1u)) : ((var_1_32 <= (var_1_40 - var_1_17)) ? (var_1_39 == ((unsigned long int) (((((var_1_32) < (var_1_41)) ? (var_1_32) : (var_1_41))) - ((((((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) < (var_1_24)) ? (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) : (var_1_24)))))) : (var_1_50 ? (var_1_39 == ((unsigned long int) (((((var_1_13 + ((((var_1_28) < (var_1_25)) ? (var_1_28) : (var_1_25))))) < (var_1_61)) ? ((var_1_13 + ((((var_1_28) < (var_1_25)) ? (var_1_28) : (var_1_25))))) : (var_1_61))))) : (var_1_39 == ((unsigned long int) (((((var_1_27) > (var_1_61)) ? (var_1_27) : (var_1_61))) + var_1_24))))))) && ((((((var_1_52) > ((var_1_52 * var_1_8))) ? (var_1_52) : ((var_1_52 * var_1_8)))) < var_1_46) ? (var_1_42 == ((float) ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43))))) : 1)) && ((var_1_35 == ((var_1_13 / var_1_25) * var_1_27)) ? (var_1_44 == ((signed short int) (((((var_1_36) > (var_1_35)) ? (var_1_36) : (var_1_35))) - var_1_45))) : (var_1_12 ? (var_1_44 == ((signed short int) var_1_36)) : (var_1_44 == ((signed short int) var_1_27))))) && ((var_1_35 > var_1_18) ? (var_1_46 == ((float) (var_1_47 - var_1_48))) : (((var_1_40 - var_1_38) <= ((var_1_32 - var_1_14) / ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) ? (var_1_46 == ((float) (var_1_48 - var_1_47))) : ((var_1_6 || var_1_22) ? (var_1_46 == ((float) (var_1_49 + 128.5f))) : 1)))) && ((var_1_1 || var_1_22) ? (var_1_50 == ((unsigned char) (var_1_1 || var_1_10))) : (var_1_50 == ((unsigned char) (var_1_12 || var_1_22))))) && (var_1_51 == ((unsigned char) (var_1_6 && var_1_7)))) && (var_1_52 == ((double) (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) - var_1_48)))) && (var_1_7 ? (var_1_53 == ((unsigned short int) ((((var_1_36) > ((var_1_30 - (var_1_54 - var_1_27)))) ? (var_1_36) : ((var_1_30 - (var_1_54 - var_1_27))))))) : ((var_1_15 <= (var_1_31 + var_1_37)) ? (var_1_53 == ((unsigned short int) ((var_1_30 - (var_1_57 - var_1_24)) - var_1_25))) : (var_1_53 == ((unsigned short int) (var_1_26 + var_1_24)))))) && ((((var_1_53 + var_1_37) % var_1_54) > (var_1_57 - 256)) ? ((var_1_12 && var_1_9) ? ((var_1_31 > var_1_61) ? (var_1_58 == ((unsigned long int) ((((((var_1_59 - 5u)) < (var_1_32)) ? ((var_1_59 - 5u)) : (var_1_32))) - ((((var_1_64) > ((var_1_60 - var_1_28))) ? (var_1_64) : ((var_1_60 - var_1_28))))))) : ((var_1_52 > (- (var_1_48 - var_1_47))) ? (var_1_58 == ((unsigned long int) ((((var_1_26) < (var_1_64)) ? (var_1_26) : (var_1_64))))) : (var_1_58 == ((unsigned long int) (((((((((var_1_32) < (var_1_59)) ? (var_1_32) : (var_1_59)))) > (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))))) ? (((((var_1_32) < (var_1_59)) ? (var_1_32) : (var_1_59)))) : (((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) - var_1_14))))) : 1) : ((var_1_41 >= (- (1u / var_1_32))) ? (var_1_58 == ((unsigned long int) (var_1_54 + (((((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) < 0 ) ? -((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) : ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))))) : (var_1_58 == ((unsigned long int) (8u + ((((var_1_28) < ((var_1_60 - var_1_27))) ? (var_1_28) : ((var_1_60 - var_1_27)))))))))) && (var_1_11 ? ((var_1_32 != last_1_var_1_28) ? (var_1_61 == ((unsigned long int) (var_1_32 - 16u))) : (var_1_61 == ((unsigned long int) (var_1_32 - var_1_21)))) : (var_1_61 == ((unsigned long int) (((last_1_var_1_28 + var_1_62) + (var_1_63 - 5u)) + ((((last_1_var_1_53) > (var_1_54)) ? (last_1_var_1_53) : (var_1_54)))))))) && ((var_1_18 <= var_1_45) ? ((var_1_5 && var_1_10) ? ((var_1_42 >= var_1_46) ? (var_1_64 == ((signed long int) var_1_30)) : 1) : 1) : (var_1_64 == ((signed long int) 128)))) && (((var_1_13 * (var_1_39 / var_1_25)) >= var_1_26) ? ((var_1_61 != var_1_59) ? (var_1_65 == ((signed short int) (1 - var_1_36))) : 1) : (var_1_65 == ((signed short int) 128)))
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
