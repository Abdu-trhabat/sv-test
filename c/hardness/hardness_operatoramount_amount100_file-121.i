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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
double var_1_2 = 99.5;
double var_1_3 = 128.625;
double var_1_4 = 0.6;
double var_1_5 = 15.7;
double var_1_6 = 16.5;
double var_1_7 = 24.5;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 2899782462;
unsigned long int var_1_10 = 32;
unsigned long int var_1_11 = 8;
unsigned long int var_1_12 = 16;
signed char var_1_13 = 2;
signed char var_1_14 = 0;
float var_1_15 = 32.45;
float var_1_16 = 4.8;
float var_1_17 = 32.9;
signed short int var_1_18 = 16;
signed char var_1_19 = 4;
signed char var_1_20 = 25;
signed long int var_1_21 = -8;
signed long int var_1_22 = 16;
signed long int var_1_23 = 128;
signed long int var_1_24 = -32;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 128;
double var_1_27 = 200.6;
unsigned short int var_1_28 = 32;
unsigned long int var_1_29 = 100;
float var_1_31 = 500.7;
float var_1_32 = 99999999.8;
float var_1_33 = 0.8;
float var_1_34 = 127.1;
float var_1_35 = 9999999999999.2;
float var_1_36 = 7.25;
unsigned char var_1_37 = 128;
unsigned long int last_1_var_1_1 = 5;
unsigned long int last_1_var_1_12 = 16;
signed long int last_1_var_1_24 = -32;
unsigned long int last_1_var_1_29 = 100;
float last_1_var_1_31 = 500.7;
void initially(void) {
}
void step(void) {
 if (((var_1_11 & last_1_var_1_12) * (last_1_var_1_29 & last_1_var_1_24)) < last_1_var_1_1) {
  if ((((((last_1_var_1_31) > (var_1_2)) ? (last_1_var_1_31) : (var_1_2))) / var_1_4) <= (var_1_27 * (var_1_3 / var_1_6))) {
   if (var_1_8) {
    var_1_29 = (var_1_28 + var_1_23);
   } else {
    var_1_29 = (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + last_1_var_1_24);
   }
  } else {
   var_1_29 = ((((last_1_var_1_24) < (var_1_23)) ? (last_1_var_1_24) : (var_1_23)));
  }
 } else {
  var_1_29 = var_1_10;
 }
 unsigned char stepLocal_0 = var_1_8;
 if (stepLocal_0 || var_1_25) {
  var_1_24 = ((((var_1_29) > (var_1_20)) ? (var_1_29) : (var_1_20)));
 }
 unsigned long int stepLocal_3 = var_1_29 + (var_1_37 - 100);
 unsigned long int stepLocal_2 = 0u;
 unsigned long int stepLocal_1 = var_1_29 & var_1_9;
 if (var_1_29 > stepLocal_2) {
  if (stepLocal_1 < var_1_23) {
   var_1_31 = (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) - var_1_32);
  } else {
   var_1_31 = ((((((255.375f) > (var_1_33)) ? (255.375f) : (var_1_33))) - var_1_34) + (var_1_35 - var_1_36));
  }
 } else {
  if (stepLocal_3 > -64) {
   var_1_31 = var_1_34;
  }
 }
 if ((var_1_2 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (var_1_5 / ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) {
  if (var_1_8) {
   var_1_1 = (var_1_9 - ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))));
  } else {
   var_1_1 = ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11)));
  }
 } else {
  var_1_1 = var_1_9;
 }
 if ((var_1_11 - 64) < var_1_9) {
  if (var_1_11 >= var_1_9) {
   var_1_12 = ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)));
  }
 }
 if (var_1_6 > var_1_2) {
  var_1_13 = var_1_14;
 }
 var_1_15 = (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_17);
 if (((((var_1_2) > ((var_1_17 + var_1_5))) ? (var_1_2) : ((var_1_17 + var_1_5)))) == var_1_16) {
  var_1_18 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 }
 if (((((var_1_6) > (var_1_16)) ? (var_1_6) : (var_1_16))) > 99.35) {
  var_1_19 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
 } else {
  if (var_1_8) {
   var_1_19 = var_1_20;
  } else {
   var_1_19 = var_1_14;
  }
 }
 if (var_1_6 > var_1_16) {
  var_1_21 = (((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) > (var_1_22)) ? (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) : (var_1_22))) - var_1_23);
 } else {
  var_1_21 = (var_1_20 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))));
 }
 if (((1.6 + var_1_6) * 16.25) <= ((- var_1_4) + var_1_27)) {
  if (-1 > var_1_20) {
   var_1_26 = var_1_28;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 assume_abort_if_not(var_1_7 != 0.0F);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -126);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_22 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_22 >= -1);
 assume_abort_if_not(var_1_22 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 2147483646);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 127);
 assume_abort_if_not(var_1_37 <= 255);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_29 = var_1_29;
 last_1_var_1_31 = var_1_31;
}
int property(void) {
 return ((((((((((((var_1_2 / ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) <= (var_1_5 / ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) ? (var_1_8 ? (var_1_1 == ((unsigned long int) (var_1_9 - ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))))) : (var_1_1 == ((unsigned long int) ((((var_1_9) < (var_1_11)) ? (var_1_9) : (var_1_11)))))) : (var_1_1 == ((unsigned long int) var_1_9))) && (((var_1_11 - 64) < var_1_9) ? ((var_1_11 >= var_1_9) ? (var_1_12 == ((unsigned long int) ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) : 1) : 1)) && ((var_1_6 > var_1_2) ? (var_1_13 == ((signed char) var_1_14)) : 1)) && (var_1_15 == ((float) (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_17)))) && ((((((var_1_2) > ((var_1_17 + var_1_5))) ? (var_1_2) : ((var_1_17 + var_1_5)))) == var_1_16) ? (var_1_18 == ((signed short int) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : 1)) && ((((((var_1_6) > (var_1_16)) ? (var_1_6) : (var_1_16))) > 99.35) ? (var_1_19 == ((signed char) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : (var_1_8 ? (var_1_19 == ((signed char) var_1_20)) : (var_1_19 == ((signed char) var_1_14))))) && ((var_1_6 > var_1_16) ? (var_1_21 == ((signed long int) (((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) > (var_1_22)) ? (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) : (var_1_22))) - var_1_23))) : (var_1_21 == ((signed long int) (var_1_20 + ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))))))) && ((var_1_8 || var_1_25) ? (var_1_24 == ((signed long int) ((((var_1_29) > (var_1_20)) ? (var_1_29) : (var_1_20))))) : 1)) && ((((1.6 + var_1_6) * 16.25) <= ((- var_1_4) + var_1_27)) ? ((-1 > var_1_20) ? (var_1_26 == ((unsigned short int) var_1_28)) : 1) : 1)) && ((((var_1_11 & last_1_var_1_12) * (last_1_var_1_29 & last_1_var_1_24)) < last_1_var_1_1) ? (((((((last_1_var_1_31) > (var_1_2)) ? (last_1_var_1_31) : (var_1_2))) / var_1_4) <= (var_1_27 * (var_1_3 / var_1_6))) ? (var_1_8 ? (var_1_29 == ((unsigned long int) (var_1_28 + var_1_23))) : (var_1_29 == ((unsigned long int) (((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) + last_1_var_1_24)))) : (var_1_29 == ((unsigned long int) ((((last_1_var_1_24) < (var_1_23)) ? (last_1_var_1_24) : (var_1_23)))))) : (var_1_29 == ((unsigned long int) var_1_10)))) && ((var_1_29 > 0u) ? (((var_1_29 & var_1_9) < var_1_23) ? (var_1_31 == ((float) (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) - var_1_32))) : (var_1_31 == ((float) ((((((255.375f) > (var_1_33)) ? (255.375f) : (var_1_33))) - var_1_34) + (var_1_35 - var_1_36))))) : (((var_1_29 + (var_1_37 - 100)) > -64) ? (var_1_31 == ((float) var_1_34)) : 1))
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
