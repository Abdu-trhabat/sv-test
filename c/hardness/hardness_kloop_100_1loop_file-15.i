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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 32;
unsigned char var_1_4 = 4;
double var_1_5 = 128.5;
signed long int var_1_6 = 64;
signed long int var_1_7 = 4;
double var_1_8 = 1.875;
double var_1_9 = 0.1;
double var_1_10 = 32.6;
double var_1_11 = 0.6;
signed long int var_1_12 = -128;
signed long int var_1_13 = -64;
signed long int var_1_14 = 16;
signed short int var_1_15 = 1;
unsigned char var_1_16 = 0;
signed long int var_1_18 = 2;
signed char var_1_19 = 32;
signed char var_1_20 = 50;
signed short int var_1_21 = 16;
unsigned char var_1_22 = 0;
signed long int var_1_23 = 25;
unsigned short int var_1_24 = 50906;
unsigned short int var_1_25 = 21992;
float var_1_26 = 3.25;
float var_1_27 = 10.2;
float var_1_28 = 16.5;
float var_1_29 = 0.0;
float var_1_30 = 99.8;
signed char var_1_31 = 2;
float var_1_33 = 4.2;
void initially(void) {
}
void step(void) {
 var_1_22 = 0;
 var_1_33 = var_1_10;
 if (var_1_22) {
  var_1_1 = ((var_1_3 + var_1_4) + 8);
 }
 unsigned char stepLocal_1 = var_1_4 <= (- var_1_6);
 if (var_1_22 || stepLocal_1) {
  var_1_14 = ((((((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) > (var_1_13)) ? (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_13)));
 } else {
  var_1_14 = 5;
 }
 if (var_1_2 || var_1_16) {
  if ((var_1_14 * (var_1_14 % var_1_7)) < (var_1_6 / var_1_18)) {
   var_1_15 = 10;
  } else {
   var_1_15 = var_1_4;
  }
 } else {
  var_1_15 = 2;
 }
 signed long int stepLocal_4 = (((var_1_15) > (var_1_7)) ? (var_1_15) : (var_1_7));
 if ((var_1_24 - (var_1_25 - var_1_3)) <= stepLocal_4) {
  if (var_1_22) {
   var_1_23 = (var_1_24 - var_1_25);
  } else {
   var_1_23 = 50;
  }
 } else {
  var_1_23 = var_1_15;
 }
 signed long int stepLocal_7 = var_1_23;
 signed long int stepLocal_6 = var_1_14;
 signed long int stepLocal_5 = var_1_23;
 if (var_1_13 < stepLocal_6) {
  if (-1 >= stepLocal_7) {
   if (stepLocal_5 <= (0 & var_1_25)) {
    var_1_26 = (var_1_9 - (var_1_27 + var_1_28));
   }
  } else {
   var_1_26 = (((((var_1_9) > ((var_1_29 - var_1_28))) ? (var_1_9) : ((var_1_29 - var_1_28)))) - var_1_27);
  }
 }
 signed long int stepLocal_0 = (var_1_15 * var_1_4) % var_1_7;
 if (var_1_22) {
  if (((var_1_3 / 1) / var_1_6) == stepLocal_0) {
   var_1_5 = (((((var_1_8 - var_1_9)) > (var_1_10)) ? ((var_1_8 - var_1_9)) : (var_1_10)));
  } else {
   var_1_5 = var_1_11;
  }
 } else {
  var_1_5 = var_1_10;
 }
 var_1_12 = ((((((var_1_23) < (var_1_3)) ? (var_1_23) : (var_1_3))) + var_1_4) + ((((var_1_13) < (100)) ? (var_1_13) : (100))));
 if (var_1_9 > (var_1_5 * var_1_8)) {
  var_1_19 = var_1_4;
 } else {
  var_1_19 = (var_1_4 + var_1_20);
 }
 signed long int stepLocal_3 = var_1_18;
 unsigned char stepLocal_2 = (5 | var_1_3) < (var_1_4 << var_1_18);
 if (stepLocal_2 && (var_1_12 < var_1_14)) {
  var_1_21 = var_1_3;
 } else {
  if (stepLocal_3 > var_1_12) {
   var_1_21 = var_1_20;
  } else {
   var_1_21 = var_1_4;
  }
 }
 if ((var_1_21 ^ var_1_23) <= var_1_12) {
  if (var_1_16 && var_1_2) {
   if (var_1_22) {
    var_1_30 = ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)));
   }
  } else {
   if (((var_1_3 + var_1_4) - var_1_31) <= var_1_23) {
    if (var_1_20 < var_1_19) {
     var_1_30 = (var_1_9 - var_1_27);
    } else {
     var_1_30 = ((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)));
    }
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 64);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -1073741823);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -2147483648);
 assume_abort_if_not(var_1_18 <= 2147483647);
 assume_abort_if_not(var_1_18 != 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 32767);
 assume_abort_if_not(var_1_24 <= 65535);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 16383);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 4611686.018427383000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((var_1_22 ? (var_1_1 == ((unsigned char) ((var_1_3 + var_1_4) + 8))) : 1) && (var_1_22 ? ((((var_1_3 / 1) / var_1_6) == ((var_1_15 * var_1_4) % var_1_7)) ? (var_1_5 == ((double) (((((var_1_8 - var_1_9)) > (var_1_10)) ? ((var_1_8 - var_1_9)) : (var_1_10))))) : (var_1_5 == ((double) var_1_11))) : (var_1_5 == ((double) var_1_10)))) && (var_1_12 == ((signed long int) ((((((var_1_23) < (var_1_3)) ? (var_1_23) : (var_1_3))) + var_1_4) + ((((var_1_13) < (100)) ? (var_1_13) : (100))))))) && ((var_1_22 || (var_1_4 <= (- var_1_6))) ? (var_1_14 == ((signed long int) ((((((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) > (var_1_13)) ? (((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_13))))) : (var_1_14 == ((signed long int) 5)))) && ((var_1_2 || var_1_16) ? (((var_1_14 * (var_1_14 % var_1_7)) < (var_1_6 / var_1_18)) ? (var_1_15 == ((signed short int) 10)) : (var_1_15 == ((signed short int) var_1_4))) : (var_1_15 == ((signed short int) 2)))) && ((var_1_9 > (var_1_5 * var_1_8)) ? (var_1_19 == ((signed char) var_1_4)) : (var_1_19 == ((signed char) (var_1_4 + var_1_20))))) && ((((5 | var_1_3) < (var_1_4 << var_1_18)) && (var_1_12 < var_1_14)) ? (var_1_21 == ((signed short int) var_1_3)) : ((var_1_18 > var_1_12) ? (var_1_21 == ((signed short int) var_1_20)) : (var_1_21 == ((signed short int) var_1_4))))) && (var_1_22 == ((unsigned char) 0))) && (((var_1_24 - (var_1_25 - var_1_3)) <= ((((var_1_15) > (var_1_7)) ? (var_1_15) : (var_1_7)))) ? (var_1_22 ? (var_1_23 == ((signed long int) (var_1_24 - var_1_25))) : (var_1_23 == ((signed long int) 50))) : (var_1_23 == ((signed long int) var_1_15)))) && ((var_1_13 < var_1_14) ? ((-1 >= var_1_23) ? ((var_1_23 <= (0 & var_1_25)) ? (var_1_26 == ((float) (var_1_9 - (var_1_27 + var_1_28)))) : 1) : (var_1_26 == ((float) (((((var_1_9) > ((var_1_29 - var_1_28))) ? (var_1_9) : ((var_1_29 - var_1_28)))) - var_1_27)))) : 1)) && (((var_1_21 ^ var_1_23) <= var_1_12) ? ((var_1_16 && var_1_2) ? (var_1_22 ? (var_1_30 == ((float) ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))) : 1) : ((((var_1_3 + var_1_4) - var_1_31) <= var_1_23) ? ((var_1_20 < var_1_19) ? (var_1_30 == ((float) (var_1_9 - var_1_27))) : (var_1_30 == ((float) ((((var_1_10) > (var_1_8)) ? (var_1_10) : (var_1_8)))))) : 1)) : 1)) && (var_1_33 == ((float) var_1_10))
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
