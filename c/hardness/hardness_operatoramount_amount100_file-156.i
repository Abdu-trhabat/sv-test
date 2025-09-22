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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 5;
float var_1_2 = 255.25;
float var_1_3 = 9.75;
float var_1_4 = 0.8;
float var_1_5 = 10.5;
float var_1_6 = 127.8;
float var_1_7 = 1.25;
float var_1_8 = 8.4;
signed char var_1_9 = 5;
signed short int var_1_10 = 5;
signed short int var_1_12 = -100;
signed char var_1_13 = 10;
signed char var_1_14 = 16;
signed char var_1_15 = 64;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 256;
signed long int var_1_20 = 128;
unsigned char var_1_21 = 200;
unsigned long int var_1_22 = 5;
unsigned long int var_1_23 = 4277889160;
unsigned long int var_1_24 = 8;
unsigned long int var_1_25 = 16;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 1;
signed char var_1_28 = 5;
float var_1_29 = 999999999.6;
float var_1_30 = 64.9;
signed long int var_1_31 = 32;
signed char var_1_32 = -128;
signed char var_1_33 = -25;
signed short int last_1_var_1_10 = 5;
unsigned long int last_1_var_1_19 = 256;
signed char last_1_var_1_32 = -128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = last_1_var_1_10 * last_1_var_1_32;
 signed long int stepLocal_3 = last_1_var_1_32;
 if ((var_1_14 - var_1_15) == stepLocal_3) {
  if (4 == stepLocal_4) {
   var_1_29 = 127.4f;
  } else {
   var_1_29 = ((((var_1_30 + 100.5f) < 0 ) ? -(var_1_30 + 100.5f) : (var_1_30 + 100.5f)));
  }
 }
 if (var_1_29 < var_1_4) {
  var_1_26 = var_1_18;
 } else {
  var_1_26 = ((! var_1_27) || var_1_18);
 }
 if ((var_1_2 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) >= (var_1_5 * var_1_6)) {
  if (var_1_4 > (var_1_7 - var_1_8)) {
   var_1_1 = var_1_9;
  } else {
   var_1_1 = -2;
  }
 } else {
  var_1_1 = var_1_9;
 }
 signed long int stepLocal_1 = var_1_13 - (var_1_15 - 32);
 signed char stepLocal_0 = var_1_9;
 if (stepLocal_0 > (var_1_13 - var_1_14)) {
  if (stepLocal_1 < var_1_9) {
   var_1_12 = var_1_13;
  }
 } else {
  var_1_12 = var_1_15;
 }
 if ((((((last_1_var_1_19 & var_1_15)) < ((var_1_13 * var_1_9))) ? ((last_1_var_1_19 & var_1_15)) : ((var_1_13 * var_1_9)))) == (var_1_14 - var_1_20)) {
  if ((var_1_21 - var_1_15) != var_1_14) {
   var_1_19 = 16u;
  }
 } else {
  var_1_19 = var_1_14;
 }
 unsigned long int stepLocal_2 = var_1_19;
 if (var_1_26) {
  if (var_1_26) {
   var_1_22 = (var_1_23 - var_1_20);
  }
 } else {
  if (stepLocal_2 >= var_1_9) {
   var_1_22 = var_1_15;
  }
 }
 var_1_24 = 100u;
 if (var_1_26) {
  var_1_28 = var_1_9;
 }
 if (var_1_26) {
  if (var_1_4 > var_1_29) {
   var_1_10 = var_1_9;
  }
 }
 if ((var_1_29 + (var_1_7 - var_1_8)) > 15.6f) {
  if (var_1_24 <= var_1_23) {
   var_1_25 = var_1_15;
  } else {
   var_1_25 = var_1_23;
  }
 } else {
  var_1_25 = var_1_15;
 }
 if ((var_1_8 - ((((128.75f) < 0 ) ? -(128.75f) : (128.75f)))) <= (((((var_1_29 * var_1_4)) < (var_1_29)) ? ((var_1_29 * var_1_4)) : (var_1_29)))) {
  var_1_32 = var_1_33;
 } else {
  if (var_1_25 <= var_1_20) {
   var_1_32 = var_1_9;
  } else {
   var_1_32 = var_1_33;
  }
 }
 if (var_1_19 > ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) {
  if (! (var_1_29 <= var_1_4)) {
   var_1_16 = var_1_17;
  } else {
   var_1_16 = var_1_18;
  }
 } else {
  var_1_16 = var_1_18;
 }
 if (! (var_1_29 == var_1_7)) {
  if (var_1_20 > var_1_19) {
   if ((var_1_32 / var_1_15) >= var_1_19) {
    var_1_31 = var_1_15;
   }
  } else {
   var_1_31 = (((((var_1_15) < (var_1_13)) ? (var_1_15) : (var_1_13))) - var_1_21);
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 127);
 assume_abort_if_not(var_1_21 <= 255);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_19 = var_1_19;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return ((((((((((((((var_1_2 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) >= (var_1_5 * var_1_6)) ? ((var_1_4 > (var_1_7 - var_1_8)) ? (var_1_1 == ((signed char) var_1_9)) : (var_1_1 == ((signed char) -2))) : (var_1_1 == ((signed char) var_1_9))) && (var_1_26 ? ((var_1_4 > var_1_29) ? (var_1_10 == ((signed short int) var_1_9)) : 1) : 1)) && ((var_1_9 > (var_1_13 - var_1_14)) ? (((var_1_13 - (var_1_15 - 32)) < var_1_9) ? (var_1_12 == ((signed short int) var_1_13)) : 1) : (var_1_12 == ((signed short int) var_1_15)))) && ((var_1_19 > ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))) ? ((! (var_1_29 <= var_1_4)) ? (var_1_16 == ((unsigned char) var_1_17)) : (var_1_16 == ((unsigned char) var_1_18))) : (var_1_16 == ((unsigned char) var_1_18)))) && (((((((last_1_var_1_19 & var_1_15)) < ((var_1_13 * var_1_9))) ? ((last_1_var_1_19 & var_1_15)) : ((var_1_13 * var_1_9)))) == (var_1_14 - var_1_20)) ? (((var_1_21 - var_1_15) != var_1_14) ? (var_1_19 == ((unsigned long int) 16u)) : 1) : (var_1_19 == ((unsigned long int) var_1_14)))) && (var_1_26 ? (var_1_26 ? (var_1_22 == ((unsigned long int) (var_1_23 - var_1_20))) : 1) : ((var_1_19 >= var_1_9) ? (var_1_22 == ((unsigned long int) var_1_15)) : 1))) && (var_1_24 == ((unsigned long int) 100u))) && (((var_1_29 + (var_1_7 - var_1_8)) > 15.6f) ? ((var_1_24 <= var_1_23) ? (var_1_25 == ((unsigned long int) var_1_15)) : (var_1_25 == ((unsigned long int) var_1_23))) : (var_1_25 == ((unsigned long int) var_1_15)))) && ((var_1_29 < var_1_4) ? (var_1_26 == ((unsigned char) var_1_18)) : (var_1_26 == ((unsigned char) ((! var_1_27) || var_1_18))))) && (var_1_26 ? (var_1_28 == ((signed char) var_1_9)) : 1)) && (((var_1_14 - var_1_15) == last_1_var_1_32) ? ((4 == (last_1_var_1_10 * last_1_var_1_32)) ? (var_1_29 == ((float) 127.4f)) : (var_1_29 == ((float) ((((var_1_30 + 100.5f) < 0 ) ? -(var_1_30 + 100.5f) : (var_1_30 + 100.5f)))))) : 1)) && ((! (var_1_29 == var_1_7)) ? ((var_1_20 > var_1_19) ? (((var_1_32 / var_1_15) >= var_1_19) ? (var_1_31 == ((signed long int) var_1_15)) : 1) : (var_1_31 == ((signed long int) (((((var_1_15) < (var_1_13)) ? (var_1_15) : (var_1_13))) - var_1_21)))) : 1)) && (((var_1_8 - ((((128.75f) < 0 ) ? -(128.75f) : (128.75f)))) <= (((((var_1_29 * var_1_4)) < (var_1_29)) ? ((var_1_29 * var_1_4)) : (var_1_29)))) ? (var_1_32 == ((signed char) var_1_33)) : ((var_1_25 <= var_1_20) ? (var_1_32 == ((signed char) var_1_9)) : (var_1_32 == ((signed char) var_1_33))))
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
