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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(unsigned char, unsigned char);
signed long int functionized1(signed char);
signed long int functionized2(signed char);
signed long int functionized3(unsigned char);
signed long int functionized4(signed char);
void functionized5(unsigned char, unsigned short int, signed char, signed char);
unsigned char isInitial = 0;
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
signed long int var_1_6 = 2;
signed char var_1_7 = 10;
signed long int var_1_8 = -25;
signed char var_1_9 = -16;
signed char var_1_10 = -2;
signed char var_1_11 = 2;
signed char var_1_12 = 10;
signed char var_1_13 = 4;
signed char var_1_14 = -10;
double var_1_15 = 32.25;
double var_1_16 = 64.7;
double var_1_17 = 9.42;
double var_1_18 = 0.0;
unsigned short int var_1_19 = 8;
signed long int var_1_20 = 256;
unsigned short int var_1_21 = 8;
unsigned short int var_1_22 = 27400;
double var_1_23 = 499.5;
double var_1_24 = 50.5;
unsigned char var_1_25 = 8;
void functionized0(unsigned char functionized0_localFunctionVar0, unsigned char functionized0_localFunctionVar1) {
 if (var_1_2 && var_1_3) {
  var_1_1 = (functionized0_localFunctionVar1 - functionized0_localFunctionVar0);
 } else {
  var_1_1 = functionized0_localFunctionVar1;
 }
}
signed long int functionized1(signed char functionized1_localFunctionVar0) {
 return ((((functionized1_localFunctionVar0) < 0 ) ? -(functionized1_localFunctionVar0) : (functionized1_localFunctionVar0)));
}
signed long int functionized2(signed char functionized2_localFunctionVar0) {
 return (functionized2_localFunctionVar0 + var_1_10);
}
signed long int functionized3(unsigned char functionized3_localFunctionVar0) {
 return ((((functionized3_localFunctionVar0) < 0 ) ? -(functionized3_localFunctionVar0) : (functionized3_localFunctionVar0)));
}
signed long int functionized4(signed char functionized4_localFunctionVar0) {
 return (functionized4_localFunctionVar0 ^ var_1_6);
}
void functionized5(unsigned char functionized5_localFunctionVar0, unsigned short int functionized5_localFunctionVar1, signed char functionized5_localFunctionVar2, signed char functionized5_localFunctionVar3) {
 if (functionized5_localFunctionVar3 == var_1_1) {
  var_1_21 = (((((functionized5_localFunctionVar0) > (var_1_1)) ? (functionized5_localFunctionVar0) : (var_1_1))) + (functionized5_localFunctionVar1 - functionized5_localFunctionVar2));
 } else {
  var_1_21 = var_1_1;
 }
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_5, var_1_4);
 var_1_6 = (var_1_5 + var_1_4);
 if ((var_1_4 / var_1_8) != var_1_1) {
  var_1_7 = (((((functionized1(var_1_9) + var_1_10)) < (var_1_11)) ? ((functionized1(var_1_9) + var_1_10)) : (var_1_11)));
 } else {
  var_1_7 = (var_1_12 - var_1_13);
 }
 if ((var_1_15 * ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)))) >= var_1_18) {
  if (var_1_8 < ((var_1_5 << var_1_11) + (var_1_4 + var_1_1))) {
   var_1_14 = var_1_12;
  } else {
   var_1_14 = functionized2(var_1_9);
  }
 }
 if ((var_1_12 % functionized3(var_1_4)) != -10) {
  var_1_19 = ((((4) < (var_1_1)) ? (4) : (var_1_1)));
 } else {
  var_1_19 = var_1_13;
 }
 if (functionized4(var_1_7) >= var_1_13) {
  var_1_20 = ((((-5) > (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (-5) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))));
 }
 functionized5(var_1_5, var_1_22, var_1_13, var_1_12);
 var_1_23 = var_1_24;
 var_1_25 = 64;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -63);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -63);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 16383);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) var_1_4))) && (var_1_6 == ((signed long int) (var_1_5 + var_1_4)))) && (((var_1_4 / var_1_8) != var_1_1) ? (var_1_7 == ((signed char) (((((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_10)) < (var_1_11)) ? ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_10)) : (var_1_11))))) : (var_1_7 == ((signed char) (var_1_12 - var_1_13))))) && (((var_1_15 * ((((var_1_16) > (var_1_17)) ? (var_1_16) : (var_1_17)))) >= var_1_18) ? ((var_1_8 < ((var_1_5 << var_1_11) + (var_1_4 + var_1_1))) ? (var_1_14 == ((signed char) var_1_12)) : (var_1_14 == ((signed char) (var_1_9 + var_1_10)))) : 1)) && (((var_1_12 % ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) != -10) ? (var_1_19 == ((unsigned short int) ((((4) < (var_1_1)) ? (4) : (var_1_1))))) : (var_1_19 == ((unsigned short int) var_1_13)))) && (((var_1_7 ^ var_1_6) >= var_1_13) ? (var_1_20 == ((signed long int) ((((-5) > (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) ? (-5) : (((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))))) : 1)) && ((var_1_12 == var_1_1) ? (var_1_21 == ((unsigned short int) (((((var_1_5) > (var_1_1)) ? (var_1_5) : (var_1_1))) + (var_1_22 - var_1_13)))) : (var_1_21 == ((unsigned short int) var_1_1)))) && (var_1_23 == ((double) var_1_24))) && (var_1_25 == ((unsigned char) 64))
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
