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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 16;
float var_1_4 = 64.125;
float var_1_5 = 199.5;
float var_1_6 = 3.75;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 10;
float var_1_9 = 9.6;
float var_1_10 = 3.4;
float var_1_11 = 256.5;
double var_1_12 = 8.875;
float var_1_13 = 255.25;
double var_1_14 = 0.0;
double var_1_15 = 256.875;
double var_1_16 = 4.425;
signed long int var_1_17 = -64;
signed long int var_1_18 = 8;
signed long int var_1_19 = 16;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 16;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 5;
double var_1_26 = 128.75;
double var_1_28 = 7.5;
double var_1_29 = 1.6;
double var_1_32 = 63.6;
signed short int var_1_33 = -128;
unsigned char var_1_34 = 1;
signed short int var_1_36 = 27361;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
signed long int var_1_40 = 128;
signed long int var_1_44 = 1743320509;
unsigned short int var_1_45 = 8;
float var_1_46 = 16.2;
unsigned short int var_1_47 = 5;
signed short int var_1_48 = -5;
unsigned char var_1_49 = 1;
float var_1_50 = 4.6;
double var_1_51 = 9.5;
double var_1_52 = 63.163;
double var_1_53 = 10.5;
signed long int var_1_54 = -128;
signed char var_1_55 = -16;
signed long int var_1_56 = -4;
signed long int var_1_57 = 10;
double var_1_58 = 0.6;
unsigned char var_1_59 = 0;
float last_1_var_1_9 = 9.6;
double last_1_var_1_12 = 8.875;
signed long int last_1_var_1_17 = -64;
double last_1_var_1_26 = 128.75;
double last_1_var_1_29 = 1.6;
unsigned char last_1_var_1_37 = 1;
unsigned char last_1_var_1_39 = 0;
signed long int last_1_var_1_40 = 128;
unsigned short int last_1_var_1_47 = 5;
signed short int last_1_var_1_48 = -5;
signed char last_1_var_1_55 = -16;
signed long int last_1_var_1_56 = -4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_8 = var_1_28 == (var_1_14 / var_1_13);
 if (last_1_var_1_9 >= (var_1_4 - var_1_5)) {
  if (last_1_var_1_37 && stepLocal_8) {
   var_1_47 = (((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22))) + (var_1_21 + last_1_var_1_47));
  }
 } else {
  var_1_47 = ((((var_1_8) < (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_8) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))));
 }
 signed long int stepLocal_5 = last_1_var_1_17;
 if (last_1_var_1_39) {
  if ((last_1_var_1_40 * last_1_var_1_56) >= stepLocal_5) {
   if (((((last_1_var_1_29) < (var_1_10)) ? (last_1_var_1_29) : (var_1_10))) > last_1_var_1_12) {
    var_1_40 = var_1_22;
   } else {
    var_1_40 = (var_1_21 + last_1_var_1_55);
   }
  }
 } else {
  var_1_40 = (var_1_24 - (var_1_44 - 2));
 }
 unsigned char stepLocal_1 = var_1_7;
 if ((var_1_5 * var_1_6) < (var_1_10 + (last_1_var_1_26 / var_1_13))) {
  var_1_12 = (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - (var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))));
 } else {
  if (stepLocal_1 >= (var_1_8 | ((((last_1_var_1_40) > (0)) ? (last_1_var_1_40) : (0))))) {
   var_1_12 = var_1_15;
  }
 }
 if (last_1_var_1_9 <= (var_1_32 * var_1_16)) {
  if (var_1_15 >= var_1_5) {
   var_1_37 = (last_1_var_1_39 || var_1_34);
  } else {
   var_1_37 = (var_1_34 && (last_1_var_1_39 || var_1_38));
  }
 }
 var_1_39 = (var_1_37 || var_1_38);
 if (var_1_37) {
  var_1_56 = var_1_7;
 }
 if (var_1_6 <= var_1_11) {
  var_1_20 = (((((var_1_7 + (var_1_21 - var_1_22))) < ((var_1_23 - (var_1_24 + var_1_25)))) ? ((var_1_7 + (var_1_21 - var_1_22))) : ((var_1_23 - (var_1_24 + var_1_25)))));
 } else {
  if (var_1_13 < (var_1_16 + var_1_11)) {
   var_1_20 = (((((((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25))) + var_1_21)) < (var_1_24)) ? ((((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25))) + var_1_21)) : (var_1_24)));
  }
 }
 var_1_48 = (last_1_var_1_48 + (var_1_7 + var_1_25));
 unsigned char stepLocal_14 = var_1_34;
 if (stepLocal_14 && var_1_37) {
  var_1_54 = ((((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))) < ((((((var_1_22 - var_1_36)) < (var_1_21)) ? ((var_1_22 - var_1_36)) : (var_1_21))))) ? (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))) : ((((((var_1_22 - var_1_36)) < (var_1_21)) ? ((var_1_22 - var_1_36)) : (var_1_21))))));
 } else {
  var_1_54 = var_1_21;
 }
 if (var_1_14 <= (var_1_5 + var_1_15)) {
  var_1_57 = ((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20)));
 } else {
  var_1_57 = var_1_23;
 }
 var_1_59 = var_1_7;
 unsigned short int stepLocal_9 = var_1_47;
 if (var_1_40 > stepLocal_9) {
  if (var_1_38) {
   var_1_49 = ((((var_1_7) < (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))))) ? (var_1_7) : (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))))));
  }
 }
 unsigned char stepLocal_13 = var_1_39;
 unsigned char stepLocal_12 = var_1_24;
 if (stepLocal_13 && (var_1_4 < var_1_28)) {
  if (stepLocal_12 > (- var_1_40)) {
   if (var_1_39) {
    var_1_51 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
   } else {
    var_1_51 = (var_1_11 + ((var_1_52 + var_1_53) + ((((var_1_28) < (3.6)) ? (var_1_28) : (3.6)))));
   }
  }
 }
 if (var_1_5 <= 256.25f) {
  var_1_26 = (((((15.25) > (var_1_5)) ? (15.25) : (var_1_5))) - var_1_14);
 } else {
  if ((var_1_21 * var_1_24) <= ((((var_1_8) > (4)) ? (var_1_8) : (4)))) {
   if (var_1_8 <= (var_1_18 / var_1_23)) {
    var_1_26 = ((((var_1_14) < (var_1_5)) ? (var_1_14) : (var_1_5)));
   }
  } else {
   if (var_1_21 <= var_1_49) {
    var_1_26 = (var_1_16 - 255.875);
   } else {
    var_1_26 = ((32.75 - var_1_15) + (1.00000000002E10 + var_1_28));
   }
  }
 }
 signed long int stepLocal_6 = var_1_44;
 if ((var_1_23 - 64) >= stepLocal_6) {
  var_1_45 = ((((var_1_48) > ((var_1_8 + var_1_25))) ? (var_1_48) : ((var_1_8 + var_1_25))));
 } else {
  if (var_1_38) {
   if (var_1_6 < var_1_16) {
    var_1_45 = var_1_25;
   } else {
    var_1_45 = var_1_48;
   }
  }
 }
 signed long int stepLocal_7 = (var_1_54 / var_1_44) % -4;
 if (var_1_18 > stepLocal_7) {
  var_1_46 = var_1_28;
 }
 if (var_1_15 < var_1_11) {
  var_1_17 = ((((((((var_1_8) > ((var_1_7 - var_1_49))) ? (var_1_8) : ((var_1_7 - var_1_49))))) < ((var_1_18 - var_1_19))) ? (((((var_1_8) > ((var_1_7 - var_1_49))) ? (var_1_8) : ((var_1_7 - var_1_49))))) : ((var_1_18 - var_1_19))));
 }
 unsigned char stepLocal_4 = var_1_39;
 signed long int stepLocal_3 = var_1_19 + (var_1_56 / -2);
 unsigned char stepLocal_2 = var_1_23;
 if (var_1_5 < (var_1_10 * var_1_12)) {
  if (var_1_37 || stepLocal_4) {
   var_1_29 = (8.5 - var_1_15);
  }
 } else {
  if (stepLocal_2 <= var_1_17) {
   if (stepLocal_3 < 128) {
    var_1_29 = (((((var_1_32) < (var_1_15)) ? (var_1_32) : (var_1_15))) + var_1_16);
   }
  }
 }
 if (var_1_16 == var_1_29) {
  var_1_58 = var_1_32;
 } else {
  var_1_58 = (((((5.630970713391611E18 - var_1_15) - var_1_14) < 0 ) ? -((5.630970713391611E18 - var_1_15) - var_1_14) : ((5.630970713391611E18 - var_1_15) - var_1_14)));
 }
 signed long int stepLocal_11 = 100;
 unsigned char stepLocal_10 = var_1_37;
 if (var_1_58 != var_1_14) {
  if (var_1_34 && stepLocal_10) {
   if (var_1_7 > stepLocal_11) {
    var_1_50 = var_1_28;
   } else {
    var_1_50 = (((((var_1_5) < ((var_1_14 - var_1_15))) ? (var_1_5) : ((var_1_14 - var_1_15)))) - (7.25f + var_1_16));
   }
  }
 }
 signed long int stepLocal_15 = (((var_1_21) > (var_1_18)) ? (var_1_21) : (var_1_18));
 if ((var_1_58 / ((((7.1) < (var_1_13)) ? (7.1) : (var_1_13)))) < var_1_12) {
  if (var_1_47 != stepLocal_15) {
   var_1_55 = (var_1_25 + var_1_22);
  } else {
   var_1_55 = ((((var_1_24) > (((((var_1_25) > (-2)) ? (var_1_25) : (-2))))) ? (var_1_24) : (((((var_1_25) > (-2)) ? (var_1_25) : (-2))))));
  }
 } else {
  var_1_55 = (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + var_1_25);
 }
 if ((var_1_4 - var_1_6) < var_1_5) {
  if (var_1_7 < var_1_55) {
   if (var_1_4 != var_1_51) {
    var_1_9 = (var_1_10 + var_1_11);
   } else {
    var_1_9 = ((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) < (var_1_10)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_10)));
   }
  }
 }
 signed long int stepLocal_0 = 1;
 if (var_1_17 > stepLocal_0) {
  if (127.625f != (- var_1_50)) {
   if (var_1_50 <= ((var_1_4 + var_1_5) - var_1_6)) {
    var_1_1 = (var_1_7 + var_1_8);
   }
  } else {
   if (var_1_50 >= (var_1_4 + var_1_5)) {
    var_1_1 = (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) + 32);
   }
  }
 } else {
  if ((var_1_5 + var_1_50) < var_1_4) {
   var_1_1 = 4;
  } else {
   var_1_1 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
  }
 }
 if (((var_1_1 + var_1_45) ^ ((((var_1_21) > (var_1_48)) ? (var_1_21) : (var_1_48)))) < var_1_18) {
  var_1_33 = (((((var_1_48) < ((var_1_36 - var_1_7))) ? (var_1_48) : ((var_1_36 - var_1_7)))) - var_1_45);
 } else {
  var_1_33 = (var_1_8 - var_1_24);
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427388000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427388000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 4611686.018427383000e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -1);
 assume_abort_if_not(var_1_18 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 63);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 127);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 64);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 16382);
 assume_abort_if_not(var_1_36 <= 32766);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_44 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_44 >= 1073741823);
 assume_abort_if_not(var_1_44 <= 2147483646);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -115292.1504606845700e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 1152921.504606845700e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= -115292.1504606845700e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 1152921.504606845700e+12F && var_1_53 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_26 = var_1_26;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_39 = var_1_39;
 last_1_var_1_40 = var_1_40;
 last_1_var_1_47 = var_1_47;
 last_1_var_1_48 = var_1_48;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_56 = var_1_56;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_17 > 1) ? ((127.625f != (- var_1_50)) ? ((var_1_50 <= ((var_1_4 + var_1_5) - var_1_6)) ? (var_1_1 == ((unsigned char) (var_1_7 + var_1_8))) : 1) : ((var_1_50 >= (var_1_4 + var_1_5)) ? (var_1_1 == ((unsigned char) (((((var_1_7) > (var_1_8)) ? (var_1_7) : (var_1_8))) + 32))) : 1)) : (((var_1_5 + var_1_50) < var_1_4) ? (var_1_1 == ((unsigned char) 4)) : (var_1_1 == ((unsigned char) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))))))) && (((var_1_4 - var_1_6) < var_1_5) ? ((var_1_7 < var_1_55) ? ((var_1_4 != var_1_51) ? (var_1_9 == ((float) (var_1_10 + var_1_11))) : (var_1_9 == ((float) ((((((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) < (var_1_10)) ? (((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) : (var_1_10)))))) : 1) : 1)) && (((var_1_5 * var_1_6) < (var_1_10 + (last_1_var_1_26 / var_1_13))) ? (var_1_12 == ((double) (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))) - (var_1_14 - ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16))))))) : ((var_1_7 >= (var_1_8 | ((((last_1_var_1_40) > (0)) ? (last_1_var_1_40) : (0))))) ? (var_1_12 == ((double) var_1_15)) : 1))) && ((var_1_15 < var_1_11) ? (var_1_17 == ((signed long int) ((((((((var_1_8) > ((var_1_7 - var_1_49))) ? (var_1_8) : ((var_1_7 - var_1_49))))) < ((var_1_18 - var_1_19))) ? (((((var_1_8) > ((var_1_7 - var_1_49))) ? (var_1_8) : ((var_1_7 - var_1_49))))) : ((var_1_18 - var_1_19)))))) : 1)) && ((var_1_6 <= var_1_11) ? (var_1_20 == ((unsigned char) (((((var_1_7 + (var_1_21 - var_1_22))) < ((var_1_23 - (var_1_24 + var_1_25)))) ? ((var_1_7 + (var_1_21 - var_1_22))) : ((var_1_23 - (var_1_24 + var_1_25))))))) : ((var_1_13 < (var_1_16 + var_1_11)) ? (var_1_20 == ((unsigned char) (((((((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25))) + var_1_21)) < (var_1_24)) ? ((((((var_1_7) > (var_1_25)) ? (var_1_7) : (var_1_25))) + var_1_21)) : (var_1_24))))) : 1))) && ((var_1_5 <= 256.25f) ? (var_1_26 == ((double) (((((15.25) > (var_1_5)) ? (15.25) : (var_1_5))) - var_1_14))) : (((var_1_21 * var_1_24) <= ((((var_1_8) > (4)) ? (var_1_8) : (4)))) ? ((var_1_8 <= (var_1_18 / var_1_23)) ? (var_1_26 == ((double) ((((var_1_14) < (var_1_5)) ? (var_1_14) : (var_1_5))))) : 1) : ((var_1_21 <= var_1_49) ? (var_1_26 == ((double) (var_1_16 - 255.875))) : (var_1_26 == ((double) ((32.75 - var_1_15) + (1.00000000002E10 + var_1_28)))))))) && ((var_1_5 < (var_1_10 * var_1_12)) ? ((var_1_37 || var_1_39) ? (var_1_29 == ((double) (8.5 - var_1_15))) : 1) : ((var_1_23 <= var_1_17) ? (((var_1_19 + (var_1_56 / -2)) < 128) ? (var_1_29 == ((double) (((((var_1_32) < (var_1_15)) ? (var_1_32) : (var_1_15))) + var_1_16))) : 1) : 1))) && ((((var_1_1 + var_1_45) ^ ((((var_1_21) > (var_1_48)) ? (var_1_21) : (var_1_48)))) < var_1_18) ? (var_1_33 == ((signed short int) (((((var_1_48) < ((var_1_36 - var_1_7))) ? (var_1_48) : ((var_1_36 - var_1_7)))) - var_1_45))) : (var_1_33 == ((signed short int) (var_1_8 - var_1_24))))) && ((last_1_var_1_9 <= (var_1_32 * var_1_16)) ? ((var_1_15 >= var_1_5) ? (var_1_37 == ((unsigned char) (last_1_var_1_39 || var_1_34))) : (var_1_37 == ((unsigned char) (var_1_34 && (last_1_var_1_39 || var_1_38))))) : 1)) && (var_1_39 == ((unsigned char) (var_1_37 || var_1_38)))) && (last_1_var_1_39 ? (((last_1_var_1_40 * last_1_var_1_56) >= last_1_var_1_17) ? ((((((last_1_var_1_29) < (var_1_10)) ? (last_1_var_1_29) : (var_1_10))) > last_1_var_1_12) ? (var_1_40 == ((signed long int) var_1_22)) : (var_1_40 == ((signed long int) (var_1_21 + last_1_var_1_55)))) : 1) : (var_1_40 == ((signed long int) (var_1_24 - (var_1_44 - 2)))))) && (((var_1_23 - 64) >= var_1_44) ? (var_1_45 == ((unsigned short int) ((((var_1_48) > ((var_1_8 + var_1_25))) ? (var_1_48) : ((var_1_8 + var_1_25)))))) : (var_1_38 ? ((var_1_6 < var_1_16) ? (var_1_45 == ((unsigned short int) var_1_25)) : (var_1_45 == ((unsigned short int) var_1_48))) : 1))) && ((var_1_18 > ((var_1_54 / var_1_44) % -4)) ? (var_1_46 == ((float) var_1_28)) : 1)) && ((last_1_var_1_9 >= (var_1_4 - var_1_5)) ? ((last_1_var_1_37 && (var_1_28 == (var_1_14 / var_1_13))) ? (var_1_47 == ((unsigned short int) (((((var_1_8) < (var_1_22)) ? (var_1_8) : (var_1_22))) + (var_1_21 + last_1_var_1_47)))) : 1) : (var_1_47 == ((unsigned short int) ((((var_1_8) < (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))))) ? (var_1_8) : (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))))))) && (var_1_48 == ((signed short int) (last_1_var_1_48 + (var_1_7 + var_1_25))))) && ((var_1_40 > var_1_47) ? (var_1_38 ? (var_1_49 == ((unsigned char) ((((var_1_7) < (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22))))) ? (var_1_7) : (((((var_1_21) < (var_1_22)) ? (var_1_21) : (var_1_22)))))))) : 1) : 1)) && ((var_1_58 != var_1_14) ? ((var_1_34 && var_1_37) ? ((var_1_7 > 100) ? (var_1_50 == ((float) var_1_28)) : (var_1_50 == ((float) (((((var_1_5) < ((var_1_14 - var_1_15))) ? (var_1_5) : ((var_1_14 - var_1_15)))) - (7.25f + var_1_16))))) : 1) : 1)) && ((var_1_39 && (var_1_4 < var_1_28)) ? ((var_1_24 > (- var_1_40)) ? (var_1_39 ? (var_1_51 == ((double) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : (var_1_51 == ((double) (var_1_11 + ((var_1_52 + var_1_53) + ((((var_1_28) < (3.6)) ? (var_1_28) : (3.6)))))))) : 1) : 1)) && ((var_1_34 && var_1_37) ? (var_1_54 == ((signed long int) ((((((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))) < ((((((var_1_22 - var_1_36)) < (var_1_21)) ? ((var_1_22 - var_1_36)) : (var_1_21))))) ? (((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))) : ((((((var_1_22 - var_1_36)) < (var_1_21)) ? ((var_1_22 - var_1_36)) : (var_1_21)))))))) : (var_1_54 == ((signed long int) var_1_21)))) && (((var_1_58 / ((((7.1) < (var_1_13)) ? (7.1) : (var_1_13)))) < var_1_12) ? ((var_1_47 != ((((var_1_21) > (var_1_18)) ? (var_1_21) : (var_1_18)))) ? (var_1_55 == ((signed char) (var_1_25 + var_1_22))) : (var_1_55 == ((signed char) ((((var_1_24) > (((((var_1_25) > (-2)) ? (var_1_25) : (-2))))) ? (var_1_24) : (((((var_1_25) > (-2)) ? (var_1_25) : (-2))))))))) : (var_1_55 == ((signed char) (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) + var_1_25))))) && (var_1_37 ? (var_1_56 == ((signed long int) var_1_7)) : 1)) && ((var_1_14 <= (var_1_5 + var_1_15)) ? (var_1_57 == ((signed long int) ((((var_1_7) < (var_1_20)) ? (var_1_7) : (var_1_20))))) : (var_1_57 == ((signed long int) var_1_23)))) && ((var_1_16 == var_1_29) ? (var_1_58 == ((double) var_1_32)) : (var_1_58 == ((double) (((((5.630970713391611E18 - var_1_15) - var_1_14) < 0 ) ? -((5.630970713391611E18 - var_1_15) - var_1_14) : ((5.630970713391611E18 - var_1_15) - var_1_14))))))) && (var_1_59 == ((unsigned char) var_1_7))
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
