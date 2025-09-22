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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
signed long int functionized0(signed char, signed char);
unsigned char functionized1(signed long int);
signed long int functionized2(signed short int);
void functionized3(signed long int, signed char, double, signed char, signed short int, float);
unsigned char functionized4(void);
double functionized5(void);
double functionized6(double);
unsigned char functionized7(unsigned char);
unsigned char isInitial = 0;
double var_1_1 = 5.5;
signed char var_1_2 = 25;
signed short int var_1_3 = 4;
signed long int var_1_4 = -16;
signed long int var_1_5 = -64;
double var_1_6 = 16.25;
double var_1_7 = 1.8;
unsigned char var_1_8 = 1;
signed char var_1_9 = -5;
signed char var_1_10 = 16;
signed char var_1_11 = 64;
unsigned long int var_1_12 = 1;
signed long int var_1_13 = 10;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 4;
float var_1_16 = 1.4;
double var_1_17 = 4.4;
double var_1_18 = 100.4;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 1;
float var_1_21 = 3.5;
signed long int var_1_22 = 16;
signed long int functionized0(signed char functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1) {
 return ((((var_1_3) > (((((functionized0_localFunctionVar1) > (functionized0_localFunctionVar0)) ? (functionized0_localFunctionVar1) : (functionized0_localFunctionVar0))))) ? (var_1_3) : (((((functionized0_localFunctionVar1) > (functionized0_localFunctionVar0)) ? (functionized0_localFunctionVar1) : (functionized0_localFunctionVar0))))));
}
unsigned char functionized1(signed long int functionized1_localFunctionVar0) {
 return (! (functionized1_localFunctionVar0 >= var_1_4));
}
signed long int functionized2(signed short int functionized2_localFunctionVar0) {
 return ((((functionized2_localFunctionVar0) < 0 ) ? -(functionized2_localFunctionVar0) : (functionized2_localFunctionVar0)));
}
void functionized3(signed long int functionized3_localFunctionVar0, signed char functionized3_localFunctionVar1, double functionized3_localFunctionVar2, signed char functionized3_localFunctionVar3, signed short int functionized3_localFunctionVar4, float localFunctionVar5) {
 if (((((((((functionized3_localFunctionVar0) < (16)) ? (functionized3_localFunctionVar0) : (16)))) > (functionized3_localFunctionVar4)) ? (((((functionized3_localFunctionVar0) < (16)) ? (functionized3_localFunctionVar0) : (16)))) : (functionized3_localFunctionVar4))) != (((((var_1_2 - var_1_15)) < (functionized3_localFunctionVar1)) ? ((var_1_2 - var_1_15)) : (functionized3_localFunctionVar1)))) {
  if (localFunctionVar5 >= functionized3_localFunctionVar2) {
   var_1_13 = functionized3_localFunctionVar3;
  }
 } else {
  var_1_13 = functionized3_localFunctionVar4;
 }
}
unsigned char functionized4(void) {
 return (4 > var_1_15);
}
double functionized5(void) {
 return (var_1_6 / 8.75f);
}
double functionized6(double functionized6_localFunctionVar0) {
 return (var_1_17 - functionized6_localFunctionVar0);
}
unsigned char functionized7(unsigned char functionized7_localFunctionVar0) {
 return (functionized7_localFunctionVar0 && var_1_8);
}
void initially(void) {
}
void step(void) {
 if ((var_1_2 >> var_1_3) == (var_1_4 / var_1_5)) {
  if ((var_1_2 * var_1_5) > ((var_1_3 & 0) * var_1_4)) {
   var_1_1 = ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7)));
  } else {
   if (var_1_8) {
    var_1_1 = var_1_7;
   } else {
    var_1_1 = var_1_6;
   }
  }
 }
 if (var_1_8) {
  var_1_9 = (functionized0(var_1_11, var_1_10));
 } else {
  var_1_9 = var_1_11;
 }
 if (functionized1(var_1_5)) {
  var_1_12 = functionized2(var_1_3);
 }
 functionized3(var_1_5, var_1_10, var_1_1, var_1_9, var_1_3, 9999.5f);
 if (functionized4()) {
  if ((functionized5() * (var_1_7 * var_1_1)) < functionized6(var_1_18)) {
   if (functionized7(var_1_14)) {
    var_1_16 = var_1_7;
   } else {
    var_1_16 = var_1_6;
   }
  }
 } else {
  var_1_16 = var_1_7;
 }
 var_1_19 = var_1_20;
 var_1_21 = var_1_7;
 var_1_22 = var_1_9;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 6);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 >> var_1_3) == (var_1_4 / var_1_5)) ? (((var_1_2 * var_1_5) > ((var_1_3 & 0) * var_1_4)) ? (var_1_1 == ((double) ((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))))) : (var_1_8 ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) var_1_6)))) : 1) && (var_1_8 ? (var_1_9 == ((signed char) ((((var_1_3) > (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) ? (var_1_3) : (((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)))))))) : (var_1_9 == ((signed char) var_1_11)))) && ((! (var_1_5 >= var_1_4)) ? (var_1_12 == ((unsigned long int) ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))) : 1)) && ((((((((((var_1_5) < (16)) ? (var_1_5) : (16)))) > (var_1_3)) ? (((((var_1_5) < (16)) ? (var_1_5) : (16)))) : (var_1_3))) != (((((var_1_2 - var_1_15)) < (var_1_10)) ? ((var_1_2 - var_1_15)) : (var_1_10)))) ? ((9999.5f >= var_1_1) ? (var_1_13 == ((signed long int) var_1_9)) : 1) : (var_1_13 == ((signed long int) var_1_3)))) && ((4 > var_1_15) ? ((((var_1_6 / 8.75f) * (var_1_7 * var_1_1)) < (var_1_17 - var_1_18)) ? ((var_1_14 && var_1_8) ? (var_1_16 == ((float) var_1_7)) : (var_1_16 == ((float) var_1_6))) : 1) : (var_1_16 == ((float) var_1_7)))) && (var_1_19 == ((unsigned char) var_1_20))) && (var_1_21 == ((float) var_1_7))) && (var_1_22 == ((signed long int) var_1_9))
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
