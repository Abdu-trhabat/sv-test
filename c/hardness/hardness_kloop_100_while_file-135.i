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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 256;
unsigned long int var_1_5 = 10;
signed long int var_1_7 = 100;
unsigned char var_1_8 = 4;
signed long int var_1_9 = 2;
float var_1_10 = 5.75;
float var_1_11 = 255.25;
float var_1_12 = 100.8;
float var_1_13 = 99.8;
signed long int var_1_14 = -4;
double var_1_15 = 127.2;
unsigned long int var_1_16 = 2;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed long int var_1_22 = 500;
unsigned long int var_1_23 = 200;
signed long int var_1_24 = 8;
unsigned char var_1_25 = 0;
double var_1_26 = 99999.5;
unsigned char var_1_27 = 25;
unsigned char var_1_28 = 8;
unsigned char var_1_29 = 2;
unsigned char var_1_30 = 50;
double var_1_31 = 31.45;
unsigned long int var_1_32 = 5;
signed char var_1_33 = 1;
double var_1_34 = 500.875;
double var_1_35 = 0.5;
unsigned long int var_1_36 = 2;
unsigned long int last_1_var_1_16 = 2;
signed long int last_1_var_1_22 = 500;
signed long int last_1_var_1_24 = 8;
double last_1_var_1_31 = 31.45;
unsigned long int last_1_var_1_32 = 5;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_22 != last_1_var_1_32) {
  var_1_1 = var_1_5;
 } else {
  if ((50.6f + 199.5f) >= last_1_var_1_31) {
   var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
  }
 }
 unsigned char stepLocal_4 = var_1_17;
 unsigned long int stepLocal_3 = last_1_var_1_16;
 if (stepLocal_3 > last_1_var_1_24) {
  if (stepLocal_4 && (var_1_13 >= last_1_var_1_31)) {
   var_1_18 = (var_1_20 || var_1_21);
  }
 }
 if (var_1_18) {
  var_1_31 = ((((var_1_11) < ((var_1_13 + 64.4))) ? (var_1_11) : ((var_1_13 + 64.4))));
 }
 if (((((var_1_31) > ((var_1_31 / var_1_26))) ? (var_1_31) : ((var_1_31 / var_1_26)))) >= (- var_1_11)) {
  var_1_25 = (((((2) < (((((var_1_8) > (var_1_27)) ? (var_1_8) : (var_1_27))))) ? (2) : (((((var_1_8) > (var_1_27)) ? (var_1_8) : (var_1_27)))))) + var_1_28);
 } else {
  var_1_25 = (var_1_28 + ((((var_1_27) > ((var_1_29 + var_1_30))) ? (var_1_27) : ((var_1_29 + var_1_30)))));
 }
 if ((~ var_1_8) < var_1_25) {
  var_1_15 = ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11)));
 }
 var_1_14 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
 var_1_36 = var_1_9;
 if (((var_1_31 > var_1_15) && var_1_18) || var_1_18) {
  var_1_16 = (var_1_9 + var_1_8);
 }
 signed long int stepLocal_2 = var_1_9;
 signed long int stepLocal_1 = var_1_14;
 if (stepLocal_1 <= -10) {
  var_1_10 = var_1_11;
 } else {
  if (var_1_36 > stepLocal_2) {
   if (var_1_18) {
    var_1_10 = ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)));
   }
  } else {
   var_1_10 = (var_1_12 + var_1_13);
  }
 }
 signed long int stepLocal_6 = var_1_14;
 unsigned char stepLocal_5 = var_1_18;
 if (var_1_18) {
  if ((var_1_1 / var_1_23) > stepLocal_6) {
   var_1_22 = ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
  } else {
   if (stepLocal_5 || var_1_21) {
    var_1_22 = 1;
   }
  }
 } else {
  var_1_22 = -5;
 }
 if ((var_1_1 >> var_1_33) != var_1_9) {
  if ((((((var_1_12 * var_1_31)) > ((var_1_34 - var_1_35))) ? ((var_1_12 * var_1_31)) : ((var_1_34 - var_1_35)))) >= var_1_10) {
   if (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) > var_1_8) {
    var_1_32 = (((((var_1_28 + ((((var_1_27) > (var_1_33)) ? (var_1_27) : (var_1_33))))) < (var_1_14)) ? ((var_1_28 + ((((var_1_27) > (var_1_33)) ? (var_1_27) : (var_1_33))))) : (var_1_14)));
   } else {
    var_1_32 = var_1_28;
   }
  }
 } else {
  var_1_32 = var_1_27;
 }
 signed long int stepLocal_7 = var_1_8 - var_1_9;
 if (var_1_18) {
  if (var_1_22 != stepLocal_7) {
   var_1_24 = (var_1_8 - var_1_9);
  } else {
   var_1_24 = last_1_var_1_24;
  }
 } else {
  var_1_24 = var_1_8;
 }
 signed long int stepLocal_0 = 128 - var_1_8;
 if (stepLocal_0 == var_1_16) {
  var_1_7 = ((1176345877 - var_1_8) - var_1_9);
 } else {
  var_1_7 = (var_1_8 - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 4294967295);
 assume_abort_if_not(var_1_23 != 0);
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 assume_abort_if_not(var_1_26 != 0.0F);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 64);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 63);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 31);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_24 = var_1_24;
 last_1_var_1_31 = var_1_31;
 last_1_var_1_32 = var_1_32;
}
int property(void) {
 return (((((((((((((last_1_var_1_22 != last_1_var_1_32) ? (var_1_1 == ((unsigned long int) var_1_5)) : (((50.6f + 199.5f) >= last_1_var_1_31) ? (var_1_1 == ((unsigned long int) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : 1)) && (((128 - var_1_8) == var_1_16) ? (var_1_7 == ((signed long int) ((1176345877 - var_1_8) - var_1_9))) : (var_1_7 == ((signed long int) (var_1_8 - ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))))) && ((var_1_14 <= -10) ? (var_1_10 == ((float) var_1_11)) : ((var_1_36 > var_1_9) ? (var_1_18 ? (var_1_10 == ((float) ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) : 1) : (var_1_10 == ((float) (var_1_12 + var_1_13)))))) && (var_1_14 == ((signed long int) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) && (((~ var_1_8) < var_1_25) ? (var_1_15 == ((double) ((((var_1_13) > (var_1_11)) ? (var_1_13) : (var_1_11))))) : 1)) && ((((var_1_31 > var_1_15) && var_1_18) || var_1_18) ? (var_1_16 == ((unsigned long int) (var_1_9 + var_1_8))) : 1)) && ((last_1_var_1_16 > last_1_var_1_24) ? ((var_1_17 && (var_1_13 >= last_1_var_1_31)) ? (var_1_18 == ((unsigned char) (var_1_20 || var_1_21))) : 1) : 1)) && (var_1_18 ? (((var_1_1 / var_1_23) > var_1_14) ? (var_1_22 == ((signed long int) ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) : ((var_1_18 || var_1_21) ? (var_1_22 == ((signed long int) 1)) : 1)) : (var_1_22 == ((signed long int) -5)))) && (var_1_18 ? ((var_1_22 != (var_1_8 - var_1_9)) ? (var_1_24 == ((signed long int) (var_1_8 - var_1_9))) : (var_1_24 == ((signed long int) last_1_var_1_24))) : (var_1_24 == ((signed long int) var_1_8)))) && ((((((var_1_31) > ((var_1_31 / var_1_26))) ? (var_1_31) : ((var_1_31 / var_1_26)))) >= (- var_1_11)) ? (var_1_25 == ((unsigned char) (((((2) < (((((var_1_8) > (var_1_27)) ? (var_1_8) : (var_1_27))))) ? (2) : (((((var_1_8) > (var_1_27)) ? (var_1_8) : (var_1_27)))))) + var_1_28))) : (var_1_25 == ((unsigned char) (var_1_28 + ((((var_1_27) > ((var_1_29 + var_1_30))) ? (var_1_27) : ((var_1_29 + var_1_30))))))))) && (var_1_18 ? (var_1_31 == ((double) ((((var_1_11) < ((var_1_13 + 64.4))) ? (var_1_11) : ((var_1_13 + 64.4)))))) : 1)) && (((var_1_1 >> var_1_33) != var_1_9) ? (((((((var_1_12 * var_1_31)) > ((var_1_34 - var_1_35))) ? ((var_1_12 * var_1_31)) : ((var_1_34 - var_1_35)))) >= var_1_10) ? ((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) > var_1_8) ? (var_1_32 == ((unsigned long int) (((((var_1_28 + ((((var_1_27) > (var_1_33)) ? (var_1_27) : (var_1_33))))) < (var_1_14)) ? ((var_1_28 + ((((var_1_27) > (var_1_33)) ? (var_1_27) : (var_1_33))))) : (var_1_14))))) : (var_1_32 == ((unsigned long int) var_1_28))) : 1) : (var_1_32 == ((unsigned long int) var_1_27)))) && (var_1_36 == ((unsigned long int) var_1_9))
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
