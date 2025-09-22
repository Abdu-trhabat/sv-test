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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 0.6;
double var_1_5 = 7.375;
double var_1_6 = 3.6;
signed long int var_1_7 = 1;
unsigned char var_1_8 = 1;
signed long int var_1_9 = 16;
double var_1_10 = 0.0;
double var_1_11 = 64.5;
signed char var_1_12 = -1;
signed char var_1_13 = 5;
signed char var_1_14 = 10;
signed char var_1_15 = 2;
signed char var_1_16 = 4;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
float var_1_19 = 199.25;
signed short int var_1_20 = -1;
signed long int var_1_21 = -10;
signed short int var_1_23 = -256;
signed short int var_1_24 = -50;
signed char var_1_25 = 16;
signed char var_1_26 = -16;
signed char var_1_27 = -25;
signed char var_1_28 = 25;
signed char last_1_var_1_27 = -25;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_4 = var_1_8;
 if (stepLocal_4 || (((((-32) > (1)) ? (-32) : (1))) >= var_1_15)) {
  var_1_17 = var_1_18;
 }
 signed long int stepLocal_5 = var_1_9 / ((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20)));
 if (stepLocal_5 > (var_1_7 / var_1_21)) {
  if (var_1_17) {
   var_1_19 = var_1_11;
  }
 } else {
  var_1_19 = var_1_5;
 }
 if (var_1_17) {
  var_1_24 = (var_1_15 + ((((-16) > (var_1_13)) ? (-16) : (var_1_13))));
 }
 signed long int stepLocal_7 = var_1_13 * var_1_24;
 signed char stepLocal_6 = var_1_16;
 if (stepLocal_6 >= (var_1_14 - var_1_15)) {
  var_1_25 = (var_1_15 - var_1_14);
 } else {
  if (var_1_14 < stepLocal_7) {
   var_1_25 = var_1_15;
  }
 }
 signed long int stepLocal_9 = (((var_1_21) > (var_1_14)) ? (var_1_21) : (var_1_14));
 signed long int stepLocal_8 = (var_1_24 + var_1_15) % ((((var_1_21) > (var_1_20)) ? (var_1_21) : (var_1_20)));
 if (stepLocal_9 < last_1_var_1_27) {
  var_1_27 = (var_1_13 - (var_1_15 + (8 + var_1_28)));
 } else {
  if (stepLocal_8 == (2 | var_1_14)) {
   var_1_27 = var_1_28;
  } else {
   var_1_27 = 0;
  }
 }
 signed long int stepLocal_1 = var_1_9;
 unsigned char stepLocal_0 = 10 <= var_1_7;
 if (stepLocal_0 && var_1_17) {
  if (var_1_7 <= stepLocal_1) {
   var_1_6 = ((((((var_1_10 - 3.54) - var_1_11)) > (var_1_5)) ? (((var_1_10 - 3.54) - var_1_11)) : (var_1_5)));
  }
 } else {
  if (! var_1_17) {
   var_1_6 = var_1_5;
  } else {
   var_1_6 = var_1_10;
  }
 }
 if (((var_1_25 + var_1_9) / var_1_15) >= ((var_1_16 / var_1_20) | var_1_14)) {
  var_1_23 = var_1_14;
 } else {
  var_1_23 = var_1_15;
 }
 if (var_1_16 < var_1_27) {
  if (((((var_1_13) < (var_1_7)) ? (var_1_13) : (var_1_7))) <= var_1_20) {
   var_1_26 = (var_1_13 - var_1_15);
  } else {
   var_1_26 = var_1_16;
  }
 } else {
  var_1_26 = var_1_14;
 }
 if ((- var_1_19) >= var_1_19) {
  if (var_1_19 < ((var_1_19 * var_1_6) * 0.5f)) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = 8.75;
  }
 }
 signed long int stepLocal_3 = (((var_1_14) > (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_14) : (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))));
 signed long int stepLocal_2 = (64 >> var_1_15) * var_1_9;
 if (var_1_17) {
  if (var_1_6 > var_1_1) {
   var_1_12 = (var_1_13 - var_1_14);
  } else {
   var_1_12 = var_1_14;
  }
 } else {
  if (stepLocal_3 >= var_1_13) {
   if (stepLocal_2 < var_1_14) {
    var_1_12 = ((((var_1_13) < (var_1_15)) ? (var_1_13) : (var_1_15)));
   } else {
    var_1_12 = (var_1_15 + var_1_16);
   }
  } else {
   var_1_12 = ((((var_1_13) < (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))) ? (var_1_13) : (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))));
  }
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 4611686.018427383000e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 30);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -32768);
 assume_abort_if_not(var_1_20 <= 32767);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -2147483648);
 assume_abort_if_not(var_1_21 <= 2147483647);
 assume_abort_if_not(var_1_21 != 0);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_27 = var_1_27;
}
int property(void) {
 return (((((((((((- var_1_19) >= var_1_19) ? ((var_1_19 < ((var_1_19 * var_1_6) * 0.5f)) ? (var_1_1 == ((double) var_1_5)) : (var_1_1 == ((double) 8.75))) : 1) && (((10 <= var_1_7) && var_1_17) ? ((var_1_7 <= var_1_9) ? (var_1_6 == ((double) ((((((var_1_10 - 3.54) - var_1_11)) > (var_1_5)) ? (((var_1_10 - 3.54) - var_1_11)) : (var_1_5))))) : 1) : ((! var_1_17) ? (var_1_6 == ((double) var_1_5)) : (var_1_6 == ((double) var_1_10))))) && (var_1_17 ? ((var_1_6 > var_1_1) ? (var_1_12 == ((signed char) (var_1_13 - var_1_14))) : (var_1_12 == ((signed char) var_1_14))) : ((((((var_1_14) > (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) ? (var_1_14) : (((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))))) >= var_1_13) ? ((((64 >> var_1_15) * var_1_9) < var_1_14) ? (var_1_12 == ((signed char) ((((var_1_13) < (var_1_15)) ? (var_1_13) : (var_1_15))))) : (var_1_12 == ((signed char) (var_1_15 + var_1_16)))) : (var_1_12 == ((signed char) ((((var_1_13) < (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))) ? (var_1_13) : (((((var_1_16) < (var_1_14)) ? (var_1_16) : (var_1_14))))))))))) && ((var_1_8 || (((((-32) > (1)) ? (-32) : (1))) >= var_1_15)) ? (var_1_17 == ((unsigned char) var_1_18)) : 1)) && (((var_1_9 / ((((var_1_15) < (var_1_20)) ? (var_1_15) : (var_1_20)))) > (var_1_7 / var_1_21)) ? (var_1_17 ? (var_1_19 == ((float) var_1_11)) : 1) : (var_1_19 == ((float) var_1_5)))) && ((((var_1_25 + var_1_9) / var_1_15) >= ((var_1_16 / var_1_20) | var_1_14)) ? (var_1_23 == ((signed short int) var_1_14)) : (var_1_23 == ((signed short int) var_1_15)))) && (var_1_17 ? (var_1_24 == ((signed short int) (var_1_15 + ((((-16) > (var_1_13)) ? (-16) : (var_1_13)))))) : 1)) && ((var_1_16 >= (var_1_14 - var_1_15)) ? (var_1_25 == ((signed char) (var_1_15 - var_1_14))) : ((var_1_14 < (var_1_13 * var_1_24)) ? (var_1_25 == ((signed char) var_1_15)) : 1))) && ((var_1_16 < var_1_27) ? ((((((var_1_13) < (var_1_7)) ? (var_1_13) : (var_1_7))) <= var_1_20) ? (var_1_26 == ((signed char) (var_1_13 - var_1_15))) : (var_1_26 == ((signed char) var_1_16))) : (var_1_26 == ((signed char) var_1_14)))) && ((((((var_1_21) > (var_1_14)) ? (var_1_21) : (var_1_14))) < last_1_var_1_27) ? (var_1_27 == ((signed char) (var_1_13 - (var_1_15 + (8 + var_1_28))))) : ((((var_1_24 + var_1_15) % ((((var_1_21) > (var_1_20)) ? (var_1_21) : (var_1_20)))) == (2 | var_1_14)) ? (var_1_27 == ((signed char) var_1_28)) : (var_1_27 == ((signed char) 0))))
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
