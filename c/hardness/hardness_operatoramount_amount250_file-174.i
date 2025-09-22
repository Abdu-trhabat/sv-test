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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
signed short int var_1_4 = -128;
unsigned char var_1_5 = 5;
unsigned char var_1_6 = 200;
unsigned char var_1_7 = 64;
signed short int var_1_9 = 19646;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
double var_1_13 = 49.3;
double var_1_14 = 15.5;
double var_1_15 = 199.5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 16;
unsigned short int var_1_26 = 49860;
unsigned short int var_1_27 = 47528;
unsigned char var_1_28 = 0;
double var_1_30 = 4.5;
double var_1_31 = 2.6;
double var_1_32 = 31.9;
double var_1_33 = 63.75;
double var_1_34 = 99.8;
double var_1_35 = 99.9;
double var_1_36 = 32.75;
unsigned char var_1_37 = 64;
unsigned char var_1_38 = 32;
float var_1_39 = -0.8;
unsigned char var_1_40 = 2;
unsigned char var_1_41 = 32;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 4;
float var_1_44 = 128.625;
float var_1_45 = 0.7;
float var_1_46 = 256.5;
float var_1_47 = 8.5;
unsigned long int var_1_48 = 10;
unsigned long int var_1_49 = 4257998358;
signed short int var_1_50 = 32;
signed long int var_1_51 = -256;
unsigned short int var_1_52 = 4;
unsigned char var_1_53 = 1;
signed char var_1_54 = -100;
unsigned char var_1_55 = 0;
float var_1_56 = 64.5;
float var_1_57 = 0.0;
signed short int var_1_58 = 5;
unsigned long int var_1_59 = 5;
unsigned long int var_1_60 = 3866474180;
signed short int var_1_61 = 10;
signed short int var_1_62 = 30579;
unsigned short int var_1_63 = 1;
signed long int last_1_var_1_1 = -1;
unsigned char last_1_var_1_12 = 0;
unsigned short int last_1_var_1_25 = 16;
double last_1_var_1_32 = 31.9;
unsigned char last_1_var_1_37 = 64;
signed short int last_1_var_1_50 = 32;
signed long int last_1_var_1_51 = -256;
unsigned char last_1_var_1_55 = 0;
unsigned long int last_1_var_1_59 = 5;
signed short int last_1_var_1_61 = 10;
unsigned short int last_1_var_1_63 = 1;
void initially(void) {
}
void step(void) {
 if ((var_1_9 * (var_1_16 + var_1_17)) < (var_1_27 - 25)) {
  var_1_32 = (var_1_33 + var_1_34);
 } else {
  if (last_1_var_1_55 || (! var_1_21)) {
   var_1_32 = ((((var_1_35) > (var_1_33)) ? (var_1_35) : (var_1_33)));
  } else {
   var_1_32 = ((256.5 - var_1_36) + var_1_33);
  }
 }
 var_1_48 = ((((((var_1_49 - last_1_var_1_51) - var_1_17)) < ((last_1_var_1_37 + var_1_6))) ? (((var_1_49 - last_1_var_1_51) - var_1_17)) : ((last_1_var_1_37 + var_1_6))));
 if (((last_1_var_1_1 * last_1_var_1_63) == var_1_26) || last_1_var_1_55) {
  if (var_1_35 <= last_1_var_1_32) {
   if (last_1_var_1_12) {
    var_1_50 = ((((last_1_var_1_63) < (last_1_var_1_59)) ? (last_1_var_1_63) : (last_1_var_1_59)));
   }
  }
 } else {
  var_1_50 = (last_1_var_1_63 + last_1_var_1_25);
 }
 if ((var_1_9 & 500) > var_1_26) {
  if (var_1_9 == (last_1_var_1_50 % ((((var_1_16) < (var_1_6)) ? (var_1_16) : (var_1_6))))) {
   var_1_37 = var_1_18;
  } else {
   if (last_1_var_1_25 > var_1_27) {
    var_1_37 = (var_1_7 + var_1_17);
   }
  }
 } else {
  var_1_37 = var_1_7;
 }
 signed long int stepLocal_6 = 4;
 if (var_1_37 < stepLocal_6) {
  var_1_10 = var_1_11;
 }
 if ((var_1_13 - ((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_32 + (var_1_30 - var_1_31))) {
  if ((var_1_5 * var_1_27) > var_1_48) {
   var_1_28 = ((var_1_15 != ((((var_1_14) > (var_1_32)) ? (var_1_14) : (var_1_32)))) || var_1_11);
  } else {
   var_1_28 = (! (! var_1_11));
  }
 }
 signed long int stepLocal_14 = - var_1_41;
 signed long int stepLocal_13 = (((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1));
 if (last_1_var_1_51 != stepLocal_13) {
  if (stepLocal_14 == (-100 * var_1_26)) {
   var_1_59 = (var_1_49 - var_1_5);
  } else {
   var_1_59 = (((var_1_60 - last_1_var_1_37) - last_1_var_1_61) - last_1_var_1_50);
  }
 } else {
  var_1_59 = var_1_43;
 }
 if (var_1_21) {
  var_1_25 = (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))) - var_1_6);
 } else {
  var_1_25 = (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) + var_1_6);
 }
 if (((((var_1_30) < (var_1_36)) ? (var_1_30) : (var_1_36))) <= (1.2 * var_1_34)) {
  var_1_38 = ((((var_1_7) > (var_1_17)) ? (var_1_7) : (var_1_17)));
 }
 if (var_1_21) {
  var_1_40 = ((var_1_17 + var_1_41) + (var_1_42 - var_1_43));
 }
 signed long int stepLocal_9 = var_1_16 / ((((var_1_7) > (var_1_26)) ? (var_1_7) : (var_1_26)));
 unsigned char stepLocal_8 = var_1_16;
 if (var_1_30 <= var_1_36) {
  if (stepLocal_9 <= (var_1_40 * ((((var_1_37) < (var_1_43)) ? (var_1_37) : (var_1_43))))) {
   if (var_1_19) {
    var_1_44 = var_1_36;
   }
  } else {
   if (stepLocal_8 >= (~ 0)) {
    var_1_44 = (var_1_36 - var_1_45);
   } else {
    var_1_44 = (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + (var_1_46 + var_1_47));
   }
  }
 }
 if (var_1_11) {
  var_1_53 = ((var_1_10 || var_1_19) && (var_1_20 && var_1_21));
 } else {
  var_1_53 = (! ((! var_1_20) || var_1_24));
 }
 unsigned char stepLocal_11 = var_1_10;
 if ((var_1_36 <= var_1_45) && stepLocal_11) {
  var_1_56 = ((((var_1_34) > (((((var_1_46) > (var_1_33)) ? (var_1_46) : (var_1_33))))) ? (var_1_34) : (((((var_1_46) > (var_1_33)) ? (var_1_46) : (var_1_33))))));
 } else {
  var_1_56 = (((var_1_57 - 1.5f) - var_1_36) - var_1_45);
 }
 unsigned char stepLocal_12 = var_1_43;
 if (stepLocal_12 > 16) {
  var_1_58 = var_1_52;
 } else {
  var_1_58 = (((((var_1_5 + var_1_7)) < (64)) ? ((var_1_5 + var_1_7)) : (64)));
 }
 var_1_63 = var_1_42;
 if (var_1_32 > (- (var_1_31 * var_1_14))) {
  var_1_55 = ((2 < var_1_59) || (var_1_20 && var_1_11));
 } else {
  var_1_55 = (var_1_19 && var_1_20);
 }
 if (var_1_7 < var_1_48) {
  if ((var_1_58 / var_1_16) > (var_1_41 >> var_1_52)) {
   var_1_51 = (((((var_1_5) > (var_1_16)) ? (var_1_5) : (var_1_16))) - var_1_7);
  } else {
   var_1_51 = (var_1_42 + -32);
  }
 } else {
  var_1_51 = (((var_1_59 - var_1_17) + (var_1_26 - var_1_43)) + var_1_52);
 }
 signed long int stepLocal_2 = (((-16) < 0 ) ? -(-16) : (-16));
 signed short int stepLocal_1 = var_1_50;
 signed long int stepLocal_0 = var_1_63 + var_1_50;
 if (stepLocal_0 != -8) {
  if (stepLocal_1 > var_1_63) {
   var_1_1 = var_1_50;
  } else {
   var_1_1 = (var_1_50 - ((((10) > (var_1_63)) ? (10) : (var_1_63))));
  }
 } else {
  if (stepLocal_2 > var_1_63) {
   var_1_1 = (var_1_63 - var_1_50);
  }
 }
 signed long int stepLocal_7 = (var_1_16 - var_1_17) - ((((var_1_7) > (var_1_18)) ? (var_1_7) : (var_1_18)));
 if ((var_1_13 - var_1_14) >= (var_1_15 - 4.6)) {
  if (var_1_40 <= stepLocal_7) {
   var_1_12 = (((var_1_11 && var_1_19) && (var_1_10 || var_1_20)) && (var_1_28 || var_1_21));
  } else {
   var_1_12 = ((var_1_40 > var_1_5) || (var_1_20 || var_1_21));
  }
 } else {
  if (var_1_15 != var_1_13) {
   var_1_12 = (var_1_11 && (var_1_22 || (var_1_10 && var_1_24)));
  } else {
   var_1_12 = (var_1_22 && (! var_1_21));
  }
 }
 unsigned long int stepLocal_15 = var_1_59 + (50 + var_1_42);
 if (stepLocal_15 > (64u << last_1_var_1_61)) {
  var_1_61 = (var_1_5 - ((var_1_62 - var_1_25) - var_1_40));
 }
 unsigned long int stepLocal_5 = var_1_48;
 unsigned long int stepLocal_4 = (- var_1_59) / (var_1_6 - var_1_7);
 unsigned long int stepLocal_3 = (var_1_59 + 5) / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 if (stepLocal_3 <= var_1_25) {
  if (var_1_25 > stepLocal_5) {
   var_1_4 = ((((var_1_59) > (-4)) ? (var_1_59) : (-4)));
  }
 } else {
  if (var_1_5 > stepLocal_4) {
   if (! var_1_53) {
    var_1_4 = ((var_1_9 - var_1_5) - var_1_6);
   }
  } else {
   var_1_4 = var_1_5;
  }
 }
 if (var_1_55) {
  var_1_39 = ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35)));
 }
 signed long int stepLocal_10 = (var_1_41 - var_1_7) | var_1_63;
 if (stepLocal_10 < var_1_43) {
  var_1_54 = (var_1_52 + ((((var_1_41) < (4)) ? (var_1_41) : (4))));
 } else {
  var_1_54 = ((((var_1_17) > ((var_1_41 - var_1_7))) ? (var_1_17) : ((var_1_41 - var_1_7))));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 255);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 127);
 assume_abort_if_not(var_1_6 <= 255);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 126);
 assume_abort_if_not(var_1_7 != 127);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 16382);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 191);
 assume_abort_if_not(var_1_16 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 64);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 32767);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 32767);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 63);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 63);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -230584.3009213691400e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_47 >= -230584.3009213691400e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691400e+12F && var_1_47 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_49 >= 3221225470);
 assume_abort_if_not(var_1_49 <= 4294967294);
 var_1_52 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 7);
 var_1_57 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_57 >= 6917529.027641074000e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
 var_1_60 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_60 >= 3758096382);
 assume_abort_if_not(var_1_60 <= 4294967294);
 var_1_62 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_62 >= 24574);
 assume_abort_if_not(var_1_62 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_25 = var_1_25;
 last_1_var_1_32 = var_1_32;
 last_1_var_1_37 = var_1_37;
 last_1_var_1_50 = var_1_50;
 last_1_var_1_51 = var_1_51;
 last_1_var_1_55 = var_1_55;
 last_1_var_1_59 = var_1_59;
 last_1_var_1_61 = var_1_61;
 last_1_var_1_63 = var_1_63;
}
int property(void) {
 return ((((((((((((((((((((((((var_1_63 + var_1_50) != -8) ? ((var_1_50 > var_1_63) ? (var_1_1 == ((signed long int) var_1_50)) : (var_1_1 == ((signed long int) (var_1_50 - ((((10) > (var_1_63)) ? (10) : (var_1_63))))))) : ((((((-16) < 0 ) ? -(-16) : (-16))) > var_1_63) ? (var_1_1 == ((signed long int) (var_1_63 - var_1_50))) : 1)) && ((((var_1_59 + 5) / ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))) <= var_1_25) ? ((var_1_25 > var_1_48) ? (var_1_4 == ((signed short int) ((((var_1_59) > (-4)) ? (var_1_59) : (-4))))) : 1) : ((var_1_5 > ((- var_1_59) / (var_1_6 - var_1_7))) ? ((! var_1_53) ? (var_1_4 == ((signed short int) ((var_1_9 - var_1_5) - var_1_6))) : 1) : (var_1_4 == ((signed short int) var_1_5))))) && ((var_1_37 < 4) ? (var_1_10 == ((unsigned char) var_1_11)) : 1)) && (((var_1_13 - var_1_14) >= (var_1_15 - 4.6)) ? ((var_1_40 <= ((var_1_16 - var_1_17) - ((((var_1_7) > (var_1_18)) ? (var_1_7) : (var_1_18))))) ? (var_1_12 == ((unsigned char) (((var_1_11 && var_1_19) && (var_1_10 || var_1_20)) && (var_1_28 || var_1_21)))) : (var_1_12 == ((unsigned char) ((var_1_40 > var_1_5) || (var_1_20 || var_1_21))))) : ((var_1_15 != var_1_13) ? (var_1_12 == ((unsigned char) (var_1_11 && (var_1_22 || (var_1_10 && var_1_24))))) : (var_1_12 == ((unsigned char) (var_1_22 && (! var_1_21))))))) && (var_1_21 ? (var_1_25 == ((unsigned short int) (((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27))) - var_1_6))) : (var_1_25 == ((unsigned short int) (((((var_1_16) < (var_1_17)) ? (var_1_16) : (var_1_17))) + var_1_6))))) && (((var_1_13 - ((((var_1_15) < (var_1_14)) ? (var_1_15) : (var_1_14)))) > (var_1_32 + (var_1_30 - var_1_31))) ? (((var_1_5 * var_1_27) > var_1_48) ? (var_1_28 == ((unsigned char) ((var_1_15 != ((((var_1_14) > (var_1_32)) ? (var_1_14) : (var_1_32)))) || var_1_11))) : (var_1_28 == ((unsigned char) (! (! var_1_11))))) : 1)) && (((var_1_9 * (var_1_16 + var_1_17)) < (var_1_27 - 25)) ? (var_1_32 == ((double) (var_1_33 + var_1_34))) : ((last_1_var_1_55 || (! var_1_21)) ? (var_1_32 == ((double) ((((var_1_35) > (var_1_33)) ? (var_1_35) : (var_1_33))))) : (var_1_32 == ((double) ((256.5 - var_1_36) + var_1_33)))))) && (((var_1_9 & 500) > var_1_26) ? ((var_1_9 == (last_1_var_1_50 % ((((var_1_16) < (var_1_6)) ? (var_1_16) : (var_1_6))))) ? (var_1_37 == ((unsigned char) var_1_18)) : ((last_1_var_1_25 > var_1_27) ? (var_1_37 == ((unsigned char) (var_1_7 + var_1_17))) : 1)) : (var_1_37 == ((unsigned char) var_1_7)))) && ((((((var_1_30) < (var_1_36)) ? (var_1_30) : (var_1_36))) <= (1.2 * var_1_34)) ? (var_1_38 == ((unsigned char) ((((var_1_7) > (var_1_17)) ? (var_1_7) : (var_1_17))))) : 1)) && (var_1_55 ? (var_1_39 == ((float) ((((var_1_34) < (var_1_35)) ? (var_1_34) : (var_1_35))))) : 1)) && (var_1_21 ? (var_1_40 == ((unsigned char) ((var_1_17 + var_1_41) + (var_1_42 - var_1_43)))) : 1)) && ((var_1_30 <= var_1_36) ? (((var_1_16 / ((((var_1_7) > (var_1_26)) ? (var_1_7) : (var_1_26)))) <= (var_1_40 * ((((var_1_37) < (var_1_43)) ? (var_1_37) : (var_1_43))))) ? (var_1_19 ? (var_1_44 == ((float) var_1_36)) : 1) : ((var_1_16 >= (~ 0)) ? (var_1_44 == ((float) (var_1_36 - var_1_45))) : (var_1_44 == ((float) (((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) + (var_1_46 + var_1_47)))))) : 1)) && (var_1_48 == ((unsigned long int) ((((((var_1_49 - last_1_var_1_51) - var_1_17)) < ((last_1_var_1_37 + var_1_6))) ? (((var_1_49 - last_1_var_1_51) - var_1_17)) : ((last_1_var_1_37 + var_1_6))))))) && ((((last_1_var_1_1 * last_1_var_1_63) == var_1_26) || last_1_var_1_55) ? ((var_1_35 <= last_1_var_1_32) ? (last_1_var_1_12 ? (var_1_50 == ((signed short int) ((((last_1_var_1_63) < (last_1_var_1_59)) ? (last_1_var_1_63) : (last_1_var_1_59))))) : 1) : 1) : (var_1_50 == ((signed short int) (last_1_var_1_63 + last_1_var_1_25))))) && ((var_1_7 < var_1_48) ? (((var_1_58 / var_1_16) > (var_1_41 >> var_1_52)) ? (var_1_51 == ((signed long int) (((((var_1_5) > (var_1_16)) ? (var_1_5) : (var_1_16))) - var_1_7))) : (var_1_51 == ((signed long int) (var_1_42 + -32)))) : (var_1_51 == ((signed long int) (((var_1_59 - var_1_17) + (var_1_26 - var_1_43)) + var_1_52))))) && (var_1_11 ? (var_1_53 == ((unsigned char) ((var_1_10 || var_1_19) && (var_1_20 && var_1_21)))) : (var_1_53 == ((unsigned char) (! ((! var_1_20) || var_1_24)))))) && ((((var_1_41 - var_1_7) | var_1_63) < var_1_43) ? (var_1_54 == ((signed char) (var_1_52 + ((((var_1_41) < (4)) ? (var_1_41) : (4)))))) : (var_1_54 == ((signed char) ((((var_1_17) > ((var_1_41 - var_1_7))) ? (var_1_17) : ((var_1_41 - var_1_7)))))))) && ((var_1_32 > (- (var_1_31 * var_1_14))) ? (var_1_55 == ((unsigned char) ((2 < var_1_59) || (var_1_20 && var_1_11)))) : (var_1_55 == ((unsigned char) (var_1_19 && var_1_20))))) && (((var_1_36 <= var_1_45) && var_1_10) ? (var_1_56 == ((float) ((((var_1_34) > (((((var_1_46) > (var_1_33)) ? (var_1_46) : (var_1_33))))) ? (var_1_34) : (((((var_1_46) > (var_1_33)) ? (var_1_46) : (var_1_33)))))))) : (var_1_56 == ((float) (((var_1_57 - 1.5f) - var_1_36) - var_1_45))))) && ((var_1_43 > 16) ? (var_1_58 == ((signed short int) var_1_52)) : (var_1_58 == ((signed short int) (((((var_1_5 + var_1_7)) < (64)) ? ((var_1_5 + var_1_7)) : (64))))))) && ((last_1_var_1_51 != ((((last_1_var_1_1) < 0 ) ? -(last_1_var_1_1) : (last_1_var_1_1)))) ? (((- var_1_41) == (-100 * var_1_26)) ? (var_1_59 == ((unsigned long int) (var_1_49 - var_1_5))) : (var_1_59 == ((unsigned long int) (((var_1_60 - last_1_var_1_37) - last_1_var_1_61) - last_1_var_1_50)))) : (var_1_59 == ((unsigned long int) var_1_43)))) && (((var_1_59 + (50 + var_1_42)) > (64u << last_1_var_1_61)) ? (var_1_61 == ((signed short int) (var_1_5 - ((var_1_62 - var_1_25) - var_1_40)))) : 1)) && (var_1_63 == ((unsigned short int) var_1_42))
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
