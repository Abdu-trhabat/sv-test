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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(double, double, signed char, signed long int);
unsigned char functionized1(void);
unsigned long int functionized2(signed char, unsigned char);
signed long int functionized3(unsigned char);
void functionized4(double, double, unsigned char, unsigned char, unsigned long int);
unsigned char isInitial = 0;
unsigned char var_1_1 = 128;
unsigned long int var_1_2 = 32;
unsigned long int var_1_3 = 128;
double var_1_4 = 32.3;
double var_1_5 = 0.25;
double var_1_6 = 500.6;
unsigned char var_1_7 = 2;
signed char var_1_8 = -10;
signed char var_1_9 = 5;
signed char var_1_10 = 4;
signed char var_1_11 = 100;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned long int var_1_15 = 1114432789;
unsigned long int var_1_16 = 2;
double var_1_17 = 256.8;
double var_1_18 = 1.25;
unsigned long int var_1_19 = 16;
unsigned char var_1_21 = 1;
double var_1_22 = -0.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
void functionized0(double functionized0_localFunctionVar0, double functionized0_localFunctionVar1, signed char functionized0_localFunctionVar2, signed long int localFunctionVar3) {
 if (! (functionized0_localFunctionVar0 > functionized0_localFunctionVar1)) {
  var_1_8 = (((((var_1_9) < (functionized0_localFunctionVar2)) ? (var_1_9) : (functionized0_localFunctionVar2))) - var_1_11);
 } else {
  var_1_8 = localFunctionVar3;
 }
}
unsigned char functionized1(void) {
 return (var_1_13 && var_1_14);
}
unsigned long int functionized2(signed char functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1) {
 return (((((var_1_1) > ((functionized2_localFunctionVar0 + functionized2_localFunctionVar1))) ? (var_1_1) : ((functionized2_localFunctionVar0 + functionized2_localFunctionVar1)))) + (var_1_15 - var_1_16));
}
signed long int functionized3(unsigned char functionized3_localFunctionVar0) {
 return (~ functionized3_localFunctionVar0);
}
void functionized4(double functionized4_localFunctionVar0, double functionized4_localFunctionVar1, unsigned char functionized4_localFunctionVar2, unsigned char functionized4_localFunctionVar3, unsigned long int functionized4_localFunctionVar4) {
 if ((functionized4_localFunctionVar1 / ((((5.5) > (functionized4_localFunctionVar0)) ? (5.5) : (functionized4_localFunctionVar0)))) > 10.5) {
  if (functionized4_localFunctionVar2) {
   if (var_1_2 < functionized4_localFunctionVar4) {
    var_1_21 = (! var_1_23);
   } else {
    var_1_21 = functionized4_localFunctionVar3;
   }
  } else {
   var_1_21 = var_1_23;
  }
 } else {
  var_1_21 = var_1_23;
 }
}
void initially(void) {
}
void step(void) {
 if (32u >= var_1_2) {
  if (var_1_2 <= var_1_3) {
   if ((var_1_4 - var_1_5) >= var_1_6) {
    var_1_1 = var_1_7;
   }
  }
 } else {
  var_1_1 = var_1_7;
 }
 functionized0(var_1_6, var_1_5, var_1_10, -4);
 if (functionized1()) {
  var_1_12 = var_1_11;
 } else {
  if (var_1_13) {
   var_1_12 = (functionized2(var_1_11, var_1_7));
  }
 }
 if (((((functionized3(var_1_1)) < (8)) ? (functionized3(var_1_1)) : (8))) > var_1_11) {
  var_1_17 = var_1_18;
 }
 if (var_1_14 || (((((var_1_4) > (var_1_6)) ? (var_1_4) : (var_1_6))) > var_1_18)) {
  if (var_1_18 > ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) {
   var_1_19 = var_1_16;
  } else {
   var_1_19 = var_1_11;
  }
 } else {
  var_1_19 = var_1_16;
 }
 functionized4(var_1_22, var_1_18, var_1_13, var_1_24, var_1_3);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 1073741823);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1073741823);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 assume_abort_if_not(var_1_22 != 0.0F);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((32u >= var_1_2) ? ((var_1_2 <= var_1_3) ? (((var_1_4 - var_1_5) >= var_1_6) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((! (var_1_6 > var_1_5)) ? (var_1_8 == ((signed char) (((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))) - var_1_11))) : (var_1_8 == ((signed char) -4)))) && ((var_1_13 && var_1_14) ? (var_1_12 == ((unsigned long int) var_1_11)) : (var_1_13 ? (var_1_12 == ((unsigned long int) (((((var_1_1) > ((var_1_11 + var_1_7))) ? (var_1_1) : ((var_1_11 + var_1_7)))) + (var_1_15 - var_1_16)))) : 1))) && (((((((~ var_1_1)) < (8)) ? ((~ var_1_1)) : (8))) > var_1_11) ? (var_1_17 == ((double) var_1_18)) : 1)) && ((var_1_14 || (((((var_1_4) > (var_1_6)) ? (var_1_4) : (var_1_6))) > var_1_18)) ? ((var_1_18 > ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) ? (var_1_19 == ((unsigned long int) var_1_16)) : (var_1_19 == ((unsigned long int) var_1_11))) : (var_1_19 == ((unsigned long int) var_1_16)))) && (((var_1_18 / ((((5.5) > (var_1_22)) ? (5.5) : (var_1_22)))) > 10.5) ? (var_1_13 ? ((var_1_2 < var_1_3) ? (var_1_21 == ((unsigned char) (! var_1_23))) : (var_1_21 == ((unsigned char) var_1_24))) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_23)))
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
