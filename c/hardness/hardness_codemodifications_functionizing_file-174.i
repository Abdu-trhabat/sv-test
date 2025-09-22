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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned char);
signed long int functionized1(unsigned char, unsigned char, signed short int);
signed long int functionized2(void);
unsigned char functionized3(void);
double functionized4(double);
double functionized5(double);
void functionized6(unsigned char, unsigned char);
void functionized7(double, double);
unsigned char isInitial = 0;
unsigned char var_1_1 = 4;
signed short int var_1_2 = -100;
signed short int var_1_3 = -8;
signed short int var_1_4 = 50;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 16;
double var_1_14 = 0.5;
unsigned char var_1_15 = 1;
double var_1_16 = 500.75;
double var_1_17 = 1.8;
double var_1_18 = 0.0;
double var_1_19 = 64.8;
unsigned long int var_1_20 = 200;
float var_1_21 = 256.5;
float var_1_22 = 2.875;
unsigned short int var_1_23 = 128;
void functionized0(unsigned char functionized0_localFunctionVar0) {
 if (functionized0_localFunctionVar0) {
  var_1_7 = var_1_5;
 }
}
signed long int functionized1(unsigned char functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, signed short int functionized1_localFunctionVar2) {
 return (functionized1_localFunctionVar2 & ((((functionized1_localFunctionVar0) < (functionized1_localFunctionVar1)) ? (functionized1_localFunctionVar0) : (functionized1_localFunctionVar1))));
}
signed long int functionized2(void) {
 return (var_1_12 + var_1_13);
}
unsigned char functionized3(void) {
 return (var_1_15 || var_1_8);
}
double functionized4(double functionized4_localFunctionVar0) {
 return ((((functionized4_localFunctionVar0) > (var_1_17)) ? (functionized4_localFunctionVar0) : (var_1_17)));
}
double functionized5(double functionized5_localFunctionVar0) {
 return (var_1_18 - functionized5_localFunctionVar0);
}
void functionized6(unsigned char functionized6_localFunctionVar0, unsigned char functionized6_localFunctionVar1) {
 if (var_1_13 < (- var_1_2)) {
  if (var_1_7 == (functionized6_localFunctionVar1 - var_1_13)) {
   var_1_20 = var_1_11;
  } else {
   var_1_20 = var_1_1;
  }
 } else {
  var_1_20 = functionized6_localFunctionVar0;
 }
}
void functionized7(double functionized7_localFunctionVar0, double functionized7_localFunctionVar1) {
 var_1_22 = (functionized7_localFunctionVar0 - functionized7_localFunctionVar1);
}
void initially(void) {
}
void step(void) {
 if (var_1_2 < (var_1_3 / var_1_4)) {
  var_1_1 = (var_1_5 + var_1_6);
 }
 if (var_1_8) {
  functionized0(var_1_9);
 } else {
  if (var_1_3 == (functionized1(var_1_6, var_1_5, var_1_2))) {
   var_1_7 = ((var_1_10 - var_1_11) - functionized2());
  } else {
   var_1_7 = var_1_11;
  }
 }
 if ((var_1_11 / var_1_10) == var_1_6) {
  if (functionized3()) {
   var_1_14 = (((((functionized4(var_1_16)) < (functionized5(var_1_19))) ? (functionized4(var_1_16)) : (functionized5(var_1_19)))) - 49.6);
  }
 } else {
  var_1_14 = (256.5 - var_1_19);
 }
 functionized6(var_1_6, var_1_10);
 if (var_1_6 >= (var_1_4 % var_1_10)) {
  if (var_1_15) {
   var_1_21 = var_1_17;
  }
 }
 functionized7(var_1_16, var_1_19);
 if (var_1_16 < (var_1_18 + var_1_21)) {
  var_1_23 = (54981 - var_1_12);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 190);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 < (var_1_3 / var_1_4)) ? (var_1_1 == ((unsigned char) (var_1_5 + var_1_6))) : 1) && (var_1_8 ? (var_1_9 ? (var_1_7 == ((unsigned char) var_1_5)) : 1) : ((var_1_3 == (var_1_2 & ((((var_1_6) < (var_1_5)) ? (var_1_6) : (var_1_5))))) ? (var_1_7 == ((unsigned char) ((var_1_10 - var_1_11) - (var_1_12 + var_1_13)))) : (var_1_7 == ((unsigned char) var_1_11))))) && (((var_1_11 / var_1_10) == var_1_6) ? ((var_1_15 || var_1_8) ? (var_1_14 == ((double) (((((((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)))) < ((var_1_18 - var_1_19))) ? (((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)))) : ((var_1_18 - var_1_19)))) - 49.6))) : 1) : (var_1_14 == ((double) (256.5 - var_1_19))))) && ((var_1_13 < (- var_1_2)) ? ((var_1_7 == (var_1_10 - var_1_13)) ? (var_1_20 == ((unsigned long int) var_1_11)) : (var_1_20 == ((unsigned long int) var_1_1))) : (var_1_20 == ((unsigned long int) var_1_6)))) && ((var_1_6 >= (var_1_4 % var_1_10)) ? (var_1_15 ? (var_1_21 == ((float) var_1_17)) : 1) : 1)) && (var_1_22 == ((float) (var_1_16 - var_1_19)))) && ((var_1_16 < (var_1_18 + var_1_21)) ? (var_1_23 == ((unsigned short int) (54981 - var_1_12))) : 1)
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
