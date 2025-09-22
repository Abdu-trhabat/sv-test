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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch49100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 16;
signed char var_1_3 = -5;
double var_1_5 = 2.65;
double var_1_6 = 100.375;
double var_1_7 = 5.7;
double var_1_8 = 0.1;
double var_1_9 = 9999.4;
double var_1_10 = 63.375;
signed char var_1_11 = 1;
double var_1_12 = 3.875;
unsigned long int var_1_13 = 2;
double var_1_14 = 1.375;
unsigned long int var_1_15 = 50;
float var_1_16 = 32.4;
double var_1_17 = 255.25;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 50;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
double var_1_25 = -0.8;
unsigned short int var_1_26 = 16;
signed short int var_1_28 = -32;
signed short int var_1_29 = 5;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
void initially(void) {
}
void step(void) {
 if ((var_1_6 * (var_1_8 * var_1_7)) > (((((var_1_9) > (var_1_12)) ? (var_1_9) : (var_1_12))) - var_1_14)) {
  var_1_13 = (128u + var_1_15);
 } else {
  var_1_13 = var_1_15;
 }
 unsigned long int stepLocal_0 = -32 * (var_1_13 / var_1_3);
 if (stepLocal_0 >= var_1_13) {
  var_1_1 = ((((var_1_3 + var_1_13) < 0 ) ? -(var_1_3 + var_1_13) : (var_1_3 + var_1_13)));
 }
 signed long int stepLocal_1 = 32;
 if (var_1_1 >= stepLocal_1) {
  var_1_5 = (var_1_6 - ((var_1_7 + var_1_8) + var_1_9));
 } else {
  var_1_5 = 0.8;
 }
 if (var_1_3 != (var_1_1 / ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) {
  var_1_10 = (var_1_9 - ((((((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) < (var_1_7)) ? (((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) : (var_1_7))));
 } else {
  var_1_10 = ((((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8)));
 }
 if (var_1_10 >= var_1_9) {
  if (var_1_9 < var_1_14) {
   var_1_16 = var_1_8;
  }
 }
 unsigned long int stepLocal_2 = var_1_15 % (var_1_20 + var_1_21);
 if (stepLocal_2 <= (~ ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))) {
  var_1_19 = (((! var_1_22) || var_1_23) || var_1_24);
 } else {
  var_1_19 = (! var_1_22);
 }
 unsigned long int stepLocal_5 = var_1_13;
 unsigned char stepLocal_4 = var_1_20;
 signed char stepLocal_3 = var_1_11;
 if (stepLocal_5 >= var_1_20) {
  if (stepLocal_3 > var_1_13) {
   if ((((((10) > (var_1_3)) ? (10) : (var_1_3))) + var_1_13) >= stepLocal_4) {
    if (! var_1_19) {
     var_1_25 = (var_1_9 - var_1_8);
    }
   } else {
    var_1_25 = var_1_9;
   }
  } else {
   var_1_25 = var_1_8;
  }
 }
 unsigned char stepLocal_6 = var_1_24;
 if (var_1_19 || stepLocal_6) {
  if (var_1_19) {
   var_1_26 = ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)));
  } else {
   if (var_1_12 == var_1_5) {
    if (var_1_23) {
     var_1_26 = var_1_20;
    }
   }
  }
 } else {
  var_1_26 = var_1_20;
 }
 signed long int stepLocal_7 = var_1_21 - ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)));
 if ((- 1000) <= stepLocal_7) {
  var_1_28 = (var_1_29 + var_1_1);
 } else {
  var_1_28 = -5;
 }
 signed long int stepLocal_8 = (0 ^ var_1_28) + var_1_29;
 if (stepLocal_8 < var_1_11) {
  var_1_30 = (var_1_22 && (var_1_19 || var_1_31));
 } else {
  var_1_30 = var_1_22;
 }
 if ((var_1_25 != var_1_12) && var_1_30) {
  if (var_1_12 >= (var_1_9 * var_1_7)) {
   if (var_1_11 >= var_1_13) {
    var_1_17 = var_1_12;
   } else {
    var_1_17 = var_1_7;
   }
  } else {
   var_1_17 = var_1_6;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 127);
 assume_abort_if_not(var_1_11 != 0);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 128);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -16383);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((((-32 * (var_1_13 / var_1_3)) >= var_1_13) ? (var_1_1 == ((signed long int) ((((var_1_3 + var_1_13) < 0 ) ? -(var_1_3 + var_1_13) : (var_1_3 + var_1_13))))) : 1) && ((var_1_1 >= 32) ? (var_1_5 == ((double) (var_1_6 - ((var_1_7 + var_1_8) + var_1_9)))) : (var_1_5 == ((double) 0.8)))) && ((var_1_3 != (var_1_1 / ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11))))) ? (var_1_10 == ((double) (var_1_9 - ((((((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) < (var_1_7)) ? (((((var_1_6) < (var_1_12)) ? (var_1_6) : (var_1_12)))) : (var_1_7)))))) : (var_1_10 == ((double) ((((var_1_6) > (var_1_8)) ? (var_1_6) : (var_1_8))))))) && (((var_1_6 * (var_1_8 * var_1_7)) > (((((var_1_9) > (var_1_12)) ? (var_1_9) : (var_1_12))) - var_1_14)) ? (var_1_13 == ((unsigned long int) (128u + var_1_15))) : (var_1_13 == ((unsigned long int) var_1_15)))) && ((var_1_10 >= var_1_9) ? ((var_1_9 < var_1_14) ? (var_1_16 == ((float) var_1_8)) : 1) : 1)) && (((var_1_25 != var_1_12) && var_1_30) ? ((var_1_12 >= (var_1_9 * var_1_7)) ? ((var_1_11 >= var_1_13) ? (var_1_17 == ((double) var_1_12)) : (var_1_17 == ((double) var_1_7))) : (var_1_17 == ((double) var_1_6))) : 1)) && (((var_1_15 % (var_1_20 + var_1_21)) <= (~ ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))) ? (var_1_19 == ((unsigned char) (((! var_1_22) || var_1_23) || var_1_24))) : (var_1_19 == ((unsigned char) (! var_1_22))))) && ((var_1_13 >= var_1_20) ? ((var_1_11 > var_1_13) ? (((((((10) > (var_1_3)) ? (10) : (var_1_3))) + var_1_13) >= var_1_20) ? ((! var_1_19) ? (var_1_25 == ((double) (var_1_9 - var_1_8))) : 1) : (var_1_25 == ((double) var_1_9))) : (var_1_25 == ((double) var_1_8))) : 1)) && ((var_1_19 || var_1_24) ? (var_1_19 ? (var_1_26 == ((unsigned short int) ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20))))) : ((var_1_12 == var_1_5) ? (var_1_23 ? (var_1_26 == ((unsigned short int) var_1_20)) : 1) : 1)) : (var_1_26 == ((unsigned short int) var_1_20)))) && (((- 1000) <= (var_1_21 - ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))))) ? (var_1_28 == ((signed short int) (var_1_29 + var_1_1))) : (var_1_28 == ((signed short int) -5)))) && ((((0 ^ var_1_28) + var_1_29) < var_1_11) ? (var_1_30 == ((unsigned char) (var_1_22 && (var_1_19 || var_1_31)))) : (var_1_30 == ((unsigned char) var_1_22)))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
