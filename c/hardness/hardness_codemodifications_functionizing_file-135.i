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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned char, signed long int, signed long int, signed long int);
unsigned long int functionized1(unsigned long int);
signed long int functionized2(void);
unsigned char functionized3(double, double);
double functionized4(double, double);
void functionized5(unsigned char, unsigned char);
unsigned char isInitial = 0;
double var_1_1 = 24.1;
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 4;
double var_1_6 = 0.75;
signed long int var_1_7 = -5;
unsigned char var_1_8 = 0;
signed long int var_1_9 = 32;
signed long int var_1_10 = 64;
signed long int var_1_11 = 200;
signed short int var_1_12 = 64;
signed short int var_1_13 = -64;
signed short int var_1_14 = 4;
signed short int var_1_15 = -10;
unsigned char var_1_16 = 0;
signed short int var_1_17 = -1;
signed short int var_1_18 = 256;
signed short int var_1_19 = 10;
double var_1_20 = 0.375;
double var_1_21 = 7.8;
double var_1_22 = 5.8;
unsigned char var_1_23 = 1;
signed long int var_1_24 = -128;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned long int var_1_28 = 2;
void functionized0(unsigned char functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1, signed long int functionized0_localFunctionVar2, signed long int functionized0_localFunctionVar3) {
 if (functionized0_localFunctionVar0) {
  var_1_7 = (((((((((functionized0_localFunctionVar3 - functionized0_localFunctionVar2)) > (functionized0_localFunctionVar1)) ? ((functionized0_localFunctionVar3 - functionized0_localFunctionVar2)) : (functionized0_localFunctionVar1)))) > (((((10) < 0 ) ? -(10) : (10))))) ? ((((((functionized0_localFunctionVar3 - functionized0_localFunctionVar2)) > (functionized0_localFunctionVar1)) ? ((functionized0_localFunctionVar3 - functionized0_localFunctionVar2)) : (functionized0_localFunctionVar1)))) : (((((10) < 0 ) ? -(10) : (10))))));
 } else {
  var_1_7 = functionized0_localFunctionVar1;
 }
}
unsigned long int functionized1(unsigned long int functionized1_localFunctionVar0) {
 return (functionized1_localFunctionVar0 | (var_1_2 + var_1_10));
}
signed long int functionized2(void) {
 return (4 - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))));
}
unsigned char functionized3(double functionized3_localFunctionVar0, double functionized3_localFunctionVar1) {
 return ((- (functionized3_localFunctionVar0 * functionized3_localFunctionVar1)) < var_1_21);
}
double functionized4(double functionized4_localFunctionVar0, double functionized4_localFunctionVar1) {
 return ((((functionized4_localFunctionVar0) < (functionized4_localFunctionVar1)) ? (functionized4_localFunctionVar0) : (functionized4_localFunctionVar1)));
}
void functionized5(unsigned char functionized5_localFunctionVar0, unsigned char functionized5_localFunctionVar1) {
 if (var_1_5 > var_1_18) {
  var_1_23 = (! (functionized5_localFunctionVar1 && functionized5_localFunctionVar0));
 } else {
  var_1_23 = functionized5_localFunctionVar0;
 }
}
void initially(void) {
}
void step(void) {
 if (var_1_2 > ((var_1_3 * var_1_4) * var_1_5)) {
  var_1_1 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 }
 functionized0(var_1_8, var_1_11, var_1_10, var_1_9);
 if (functionized1(var_1_4) >= var_1_3) {
  if (var_1_8) {
   var_1_12 = var_1_13;
  }
 }
 if (var_1_8) {
  var_1_14 = functionized2();
 } else {
  if (var_1_16) {
   var_1_14 = (((((var_1_17 - var_1_18)) > (var_1_19)) ? ((var_1_17 - var_1_18)) : (var_1_19)));
  } else {
   var_1_14 = var_1_18;
  }
 }
 if (functionized3(var_1_6, var_1_1)) {
  var_1_20 = (functionized4(var_1_6, var_1_22));
 }
 if (var_1_7 < (var_1_19 / var_1_24)) {
  functionized5(var_1_26, var_1_25);
 } else {
  var_1_23 = var_1_27;
 }
 if (4u >= var_1_4) {
  if (var_1_23 && var_1_16) {
   var_1_28 = ((((var_1_18) > (var_1_10)) ? (var_1_18) : (var_1_10)));
  } else {
   var_1_28 = var_1_18;
  }
 } else {
  var_1_28 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483647);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32766);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32767);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 assume_abort_if_not(var_1_24 != 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_2 > ((var_1_3 * var_1_4) * var_1_5)) ? (var_1_1 == ((double) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : 1) && (var_1_8 ? (var_1_7 == ((signed long int) (((((((((var_1_9 - var_1_10)) > (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11)))) > (((((10) < 0 ) ? -(10) : (10))))) ? ((((((var_1_9 - var_1_10)) > (var_1_11)) ? ((var_1_9 - var_1_10)) : (var_1_11)))) : (((((10) < 0 ) ? -(10) : (10)))))))) : (var_1_7 == ((signed long int) var_1_11)))) && (((var_1_4 | (var_1_2 + var_1_10)) >= var_1_3) ? (var_1_8 ? (var_1_12 == ((signed short int) var_1_13)) : 1) : 1)) && (var_1_8 ? (var_1_14 == ((signed short int) (4 - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) : (var_1_16 ? (var_1_14 == ((signed short int) (((((var_1_17 - var_1_18)) > (var_1_19)) ? ((var_1_17 - var_1_18)) : (var_1_19))))) : (var_1_14 == ((signed short int) var_1_18))))) && (((- (var_1_6 * var_1_1)) < var_1_21) ? (var_1_20 == ((double) ((((var_1_6) < (var_1_22)) ? (var_1_6) : (var_1_22))))) : 1)) && ((var_1_7 < (var_1_19 / var_1_24)) ? ((var_1_5 > var_1_18) ? (var_1_23 == ((unsigned char) (! (var_1_25 && var_1_26)))) : (var_1_23 == ((unsigned char) var_1_26))) : (var_1_23 == ((unsigned char) var_1_27)))) && ((4u >= var_1_4) ? ((var_1_23 && var_1_16) ? (var_1_28 == ((unsigned long int) ((((var_1_18) > (var_1_10)) ? (var_1_18) : (var_1_10))))) : (var_1_28 == ((unsigned long int) var_1_18))) : (var_1_28 == ((unsigned long int) var_1_10)))
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
