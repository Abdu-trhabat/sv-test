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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int var_1_5 = 16;
unsigned short int var_1_6 = 0;
unsigned short int var_1_7 = 10000;
unsigned short int var_1_8 = 20453;
unsigned short int var_1_9 = 500;
signed short int var_1_10 = -5;
signed short int var_1_11 = 16;
unsigned char var_1_12 = 5;
unsigned short int var_1_13 = 63501;
unsigned char var_1_14 = 1;
double var_1_15 = 1.5;
float var_1_16 = 0.8;
float var_1_17 = 128.5;
double var_1_18 = 256.6;
unsigned char var_1_19 = 1;
signed short int var_1_20 = -8;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
float var_1_23 = -0.2;
float var_1_24 = 10.5;
float var_1_25 = 500.5;
float var_1_26 = 9.9;
float var_1_27 = 4.5;
unsigned long int var_1_28 = 100;
unsigned long int var_1_29 = 4145116600;
signed short int var_1_30 = -16;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 32;
unsigned char var_1_33 = 2;
unsigned char var_1_34 = 128;
unsigned long int var_1_35 = 5;
float var_1_36 = 2.7;
float var_1_37 = 31.25;
float var_1_38 = 16.5;
double var_1_39 = 128.6;
double var_1_41 = 2.5;
double var_1_42 = 24.2;
unsigned long int last_1_var_1_35 = 5;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_1 = var_1_5;
 if (stepLocal_1 >= 4) {
  if (! ((var_1_13 - last_1_var_1_35) <= 64)) {
   var_1_12 = var_1_14;
  } else {
   var_1_12 = 50;
  }
 }
 if (var_1_19) {
  if (var_1_21 || var_1_22) {
   var_1_20 = ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)));
  } else {
   if (var_1_21) {
    var_1_20 = var_1_7;
   }
  }
 }
 var_1_10 = (var_1_11 - var_1_6);
 if (! var_1_19) {
  var_1_36 = (var_1_26 + var_1_27);
 } else {
  var_1_36 = ((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38)));
 }
 if (((var_1_8 - var_1_7) - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) != var_1_5) {
  if (var_1_36 != (var_1_16 - var_1_17)) {
   var_1_15 = (1.0000000000002E12 - var_1_18);
  } else {
   if (var_1_19) {
    var_1_15 = var_1_18;
   }
  }
 }
 unsigned long int stepLocal_5 = 8u;
 if (var_1_18 == var_1_15) {
  if (stepLocal_5 <= var_1_7) {
   var_1_39 = (var_1_27 + (var_1_41 + var_1_42));
  } else {
   var_1_39 = var_1_38;
  }
 } else {
  var_1_39 = var_1_26;
 }
 if (var_1_19 || var_1_21) {
  if (var_1_39 == (499.12f - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) {
   var_1_23 = ((((((((var_1_18) < (var_1_24)) ? (var_1_18) : (var_1_24)))) > ((((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) + var_1_27))) ? (((((var_1_18) < (var_1_24)) ? (var_1_18) : (var_1_24)))) : ((((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) + var_1_27))));
  } else {
   var_1_23 = var_1_26;
  }
 }
 signed short int stepLocal_0 = var_1_10;
 if (stepLocal_0 <= 32) {
  if (var_1_23 < var_1_15) {
   var_1_1 = (var_1_10 + var_1_5);
  }
 } else {
  var_1_1 = ((var_1_6 + (var_1_7 - var_1_10)) + (var_1_8 - var_1_9));
 }
 unsigned short int stepLocal_4 = var_1_9;
 if ((var_1_39 * var_1_26) < var_1_27) {
  if (var_1_21) {
   if (var_1_19) {
    if (var_1_20 < stepLocal_4) {
     var_1_35 = var_1_5;
    } else {
     var_1_35 = var_1_14;
    }
   }
  } else {
   var_1_35 = var_1_1;
  }
 } else {
  var_1_35 = var_1_8;
 }
 unsigned long int stepLocal_3 = var_1_35;
 if (stepLocal_3 < var_1_9) {
  if (var_1_22) {
   var_1_31 = (var_1_32 + ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))));
  } else {
   var_1_31 = (var_1_34 - var_1_32);
  }
 } else {
  var_1_31 = 8;
 }
 if (var_1_31 > var_1_9) {
  var_1_28 = (((var_1_29 - var_1_6) - (10u + var_1_5)) - var_1_13);
 }
 signed short int stepLocal_2 = var_1_20;
 if (var_1_28 < stepLocal_2) {
  var_1_30 = (var_1_14 + (var_1_7 - ((((var_1_1) > (var_1_9)) ? (var_1_1) : (var_1_9)))));
 } else {
  var_1_30 = ((((var_1_14) > (var_1_6)) ? (var_1_14) : (var_1_6)));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8191);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 32767);
 assume_abort_if_not(var_1_13 <= 65535);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 3758096382);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 127);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_35 = var_1_35;
}
int property(void) {
 return ((((((((((((var_1_10 <= 32) ? ((var_1_23 < var_1_15) ? (var_1_1 == ((unsigned short int) (var_1_10 + var_1_5))) : 1) : (var_1_1 == ((unsigned short int) ((var_1_6 + (var_1_7 - var_1_10)) + (var_1_8 - var_1_9))))) && (var_1_10 == ((signed short int) (var_1_11 - var_1_6)))) && ((var_1_5 >= 4) ? ((! ((var_1_13 - last_1_var_1_35) <= 64)) ? (var_1_12 == ((unsigned char) var_1_14)) : (var_1_12 == ((unsigned char) 50))) : 1)) && ((((var_1_8 - var_1_7) - ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) != var_1_5) ? ((var_1_36 != (var_1_16 - var_1_17)) ? (var_1_15 == ((double) (1.0000000000002E12 - var_1_18))) : (var_1_19 ? (var_1_15 == ((double) var_1_18)) : 1)) : 1)) && (var_1_19 ? ((var_1_21 || var_1_22) ? (var_1_20 == ((signed short int) ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))))) : (var_1_21 ? (var_1_20 == ((signed short int) var_1_7)) : 1)) : 1)) && ((var_1_19 || var_1_21) ? ((var_1_39 == (499.12f - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))))) ? (var_1_23 == ((float) ((((((((var_1_18) < (var_1_24)) ? (var_1_18) : (var_1_24)))) > ((((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) + var_1_27))) ? (((((var_1_18) < (var_1_24)) ? (var_1_18) : (var_1_24)))) : ((((((var_1_25) > (var_1_26)) ? (var_1_25) : (var_1_26))) + var_1_27)))))) : (var_1_23 == ((float) var_1_26))) : 1)) && ((var_1_31 > var_1_9) ? (var_1_28 == ((unsigned long int) (((var_1_29 - var_1_6) - (10u + var_1_5)) - var_1_13))) : 1)) && ((var_1_28 < var_1_20) ? (var_1_30 == ((signed short int) (var_1_14 + (var_1_7 - ((((var_1_1) > (var_1_9)) ? (var_1_1) : (var_1_9))))))) : (var_1_30 == ((signed short int) ((((var_1_14) > (var_1_6)) ? (var_1_14) : (var_1_6))))))) && ((var_1_35 < var_1_9) ? (var_1_22 ? (var_1_31 == ((unsigned char) (var_1_32 + ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) : (var_1_31 == ((unsigned char) (var_1_34 - var_1_32)))) : (var_1_31 == ((unsigned char) 8)))) && (((var_1_39 * var_1_26) < var_1_27) ? (var_1_21 ? (var_1_19 ? ((var_1_20 < var_1_9) ? (var_1_35 == ((unsigned long int) var_1_5)) : (var_1_35 == ((unsigned long int) var_1_14))) : 1) : (var_1_35 == ((unsigned long int) var_1_1))) : (var_1_35 == ((unsigned long int) var_1_8)))) && ((! var_1_19) ? (var_1_36 == ((float) (var_1_26 + var_1_27))) : (var_1_36 == ((float) ((((var_1_37) < (var_1_38)) ? (var_1_37) : (var_1_38))))))) && ((var_1_18 == var_1_15) ? ((8u <= var_1_7) ? (var_1_39 == ((double) (var_1_27 + (var_1_41 + var_1_42)))) : (var_1_39 == ((double) var_1_38))) : (var_1_39 == ((double) var_1_26)))
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
