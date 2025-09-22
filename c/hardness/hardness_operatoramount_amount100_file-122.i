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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 127.35;
float var_1_2 = 4.22;
float var_1_3 = 100000000000000.8;
double var_1_4 = 255.2;
double var_1_5 = 4.2;
double var_1_6 = 32.5;
double var_1_7 = 0.0;
double var_1_8 = 3.125;
unsigned short int var_1_9 = 256;
signed short int var_1_10 = 1;
signed short int var_1_13 = -8;
double var_1_14 = 49.5;
float var_1_15 = 31.65;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
signed char var_1_19 = -64;
signed char var_1_20 = 16;
signed char var_1_21 = 0;
signed short int var_1_22 = -16;
float var_1_23 = 1.85;
unsigned short int var_1_24 = 5;
float var_1_26 = 16.5;
float var_1_27 = 32.375;
float var_1_28 = 25.8;
signed long int var_1_29 = 10;
unsigned char var_1_30 = 10;
unsigned char var_1_31 = 64;
unsigned char var_1_32 = 64;
unsigned long int var_1_33 = 4;
unsigned char var_1_34 = 1;
unsigned long int var_1_35 = 1540638185;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 10;
signed short int var_1_38 = -16;
unsigned char var_1_39 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 1;
signed short int last_1_var_1_10 = 1;
double last_1_var_1_14 = 49.5;
float last_1_var_1_23 = 1.85;
unsigned long int last_1_var_1_33 = 4;
unsigned char last_1_var_1_39 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_5 = last_1_var_1_10;
 unsigned char stepLocal_4 = last_1_var_1_39;
 if (stepLocal_4 && (var_1_6 < last_1_var_1_14)) {
  if (var_1_26 <= last_1_var_1_23) {
   var_1_33 = ((var_1_35 - (var_1_31 + last_1_var_1_33)) + var_1_24);
  } else {
   if (stepLocal_5 >= var_1_24) {
    var_1_33 = (var_1_35 + 16u);
   } else {
    var_1_33 = var_1_31;
   }
  }
 } else {
  var_1_33 = var_1_35;
 }
 if (var_1_2 <= var_1_3) {
  var_1_1 = ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5)));
 } else {
  var_1_1 = (var_1_6 - ((2.5684615569228887E18 + var_1_7) - var_1_8));
 }
 if (var_1_4 != (- (var_1_6 / var_1_7))) {
  var_1_9 = 100;
 }
 unsigned char stepLocal_1 = var_1_18;
 if (var_1_17 || stepLocal_1) {
  var_1_16 = ((((((((var_1_19) < ((var_1_20 + var_1_21))) ? (var_1_19) : ((var_1_20 + var_1_21))))) > (10)) ? (((((var_1_19) < ((var_1_20 + var_1_21))) ? (var_1_19) : ((var_1_20 + var_1_21))))) : (10)));
 } else {
  var_1_16 = var_1_20;
 }
 var_1_22 = ((((128) < (var_1_19)) ? (128) : (var_1_19)));
 unsigned short int stepLocal_3 = var_1_9;
 if (var_1_20 <= stepLocal_3) {
  var_1_29 = (var_1_9 + var_1_13);
 }
 if (var_1_18 && var_1_17) {
  var_1_30 = (var_1_31 + var_1_32);
 } else {
  var_1_30 = var_1_32;
 }
 var_1_36 = (var_1_31 + (64 - (var_1_37 + 2)));
 unsigned long int stepLocal_2 = (var_1_9 - var_1_33) + var_1_16;
 if (((((10) > ((var_1_33 / var_1_24))) ? (10) : ((var_1_33 / var_1_24)))) != stepLocal_2) {
  if ((- 0.4) > var_1_1) {
   var_1_23 = ((var_1_26 + var_1_27) + ((var_1_7 - var_1_28) - 1.0000000000000008E15f));
  }
 } else {
  var_1_23 = (((((var_1_8) < (3.5f)) ? (var_1_8) : (3.5f))) - var_1_6);
 }
 unsigned long int stepLocal_0 = var_1_33;
 if (stepLocal_0 == (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_29)) {
  var_1_10 = ((((var_1_13 + -128) < 0 ) ? -(var_1_13 + -128) : (var_1_13 + -128)));
 } else {
  var_1_10 = var_1_13;
 }
 if ((var_1_8 - var_1_15) == var_1_23) {
  var_1_14 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_14 = var_1_5;
 }
 signed long int stepLocal_7 = var_1_31 * var_1_30;
 unsigned long int stepLocal_6 = var_1_33;
 if (var_1_34) {
  if (var_1_13 >= stepLocal_6) {
   if (stepLocal_7 > var_1_29) {
    var_1_39 = var_1_41;
   } else {
    var_1_39 = var_1_42;
   }
  }
 }
 if (var_1_14 < ((((var_1_8) < (var_1_14)) ? (var_1_8) : (var_1_14)))) {
  var_1_38 = var_1_21;
 } else {
  if (var_1_39) {
   var_1_38 = (((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) > (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) ? (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) : (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) + (var_1_31 - var_1_36));
  } else {
   var_1_38 = ((((var_1_36) < (var_1_20)) ? (var_1_36) : (var_1_20)));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 2305843.009213691400e+12F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -16383);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -63);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 65535);
 assume_abort_if_not(var_1_24 != 0);
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= -230584.3009213691400e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 1073741823);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 32);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_33 = var_1_33;
 last_1_var_1_39 = var_1_39;
}
int property(void) {
 return (((((((((((((var_1_2 <= var_1_3) ? (var_1_1 == ((double) ((((var_1_4) > (var_1_5)) ? (var_1_4) : (var_1_5))))) : (var_1_1 == ((double) (var_1_6 - ((2.5684615569228887E18 + var_1_7) - var_1_8))))) && ((var_1_4 != (- (var_1_6 / var_1_7))) ? (var_1_9 == ((unsigned short int) 100)) : 1)) && ((var_1_33 == (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_29)) ? (var_1_10 == ((signed short int) ((((var_1_13 + -128) < 0 ) ? -(var_1_13 + -128) : (var_1_13 + -128))))) : (var_1_10 == ((signed short int) var_1_13)))) && (((var_1_8 - var_1_15) == var_1_23) ? (var_1_14 == ((double) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_14 == ((double) var_1_5)))) && ((var_1_17 || var_1_18) ? (var_1_16 == ((signed char) ((((((((var_1_19) < ((var_1_20 + var_1_21))) ? (var_1_19) : ((var_1_20 + var_1_21))))) > (10)) ? (((((var_1_19) < ((var_1_20 + var_1_21))) ? (var_1_19) : ((var_1_20 + var_1_21))))) : (10))))) : (var_1_16 == ((signed char) var_1_20)))) && (var_1_22 == ((signed short int) ((((128) < (var_1_19)) ? (128) : (var_1_19)))))) && ((((((10) > ((var_1_33 / var_1_24))) ? (10) : ((var_1_33 / var_1_24)))) != ((var_1_9 - var_1_33) + var_1_16)) ? (((- 0.4) > var_1_1) ? (var_1_23 == ((float) ((var_1_26 + var_1_27) + ((var_1_7 - var_1_28) - 1.0000000000000008E15f)))) : 1) : (var_1_23 == ((float) (((((var_1_8) < (3.5f)) ? (var_1_8) : (3.5f))) - var_1_6))))) && ((var_1_20 <= var_1_9) ? (var_1_29 == ((signed long int) (var_1_9 + var_1_13))) : 1)) && ((var_1_18 && var_1_17) ? (var_1_30 == ((unsigned char) (var_1_31 + var_1_32))) : (var_1_30 == ((unsigned char) var_1_32)))) && ((last_1_var_1_39 && (var_1_6 < last_1_var_1_14)) ? ((var_1_26 <= last_1_var_1_23) ? (var_1_33 == ((unsigned long int) ((var_1_35 - (var_1_31 + last_1_var_1_33)) + var_1_24))) : ((last_1_var_1_10 >= var_1_24) ? (var_1_33 == ((unsigned long int) (var_1_35 + 16u))) : (var_1_33 == ((unsigned long int) var_1_31)))) : (var_1_33 == ((unsigned long int) var_1_35)))) && (var_1_36 == ((unsigned char) (var_1_31 + (64 - (var_1_37 + 2)))))) && ((var_1_14 < ((((var_1_8) < (var_1_14)) ? (var_1_8) : (var_1_14)))) ? (var_1_38 == ((signed short int) var_1_21)) : (var_1_39 ? (var_1_38 == ((signed short int) (((((((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) > (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))) ? (((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))) : (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) + (var_1_31 - var_1_36)))) : (var_1_38 == ((signed short int) ((((var_1_36) < (var_1_20)) ? (var_1_36) : (var_1_20)))))))) && (var_1_34 ? ((var_1_13 >= var_1_33) ? (((var_1_31 * var_1_30) > var_1_29) ? (var_1_39 == ((unsigned char) var_1_41)) : (var_1_39 == ((unsigned char) var_1_42))) : 1) : 1)
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
