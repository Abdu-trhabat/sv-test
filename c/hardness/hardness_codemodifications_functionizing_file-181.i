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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
signed long int functionized0(signed long int, signed long int, signed long int);
unsigned char functionized1(signed short int);
void functionized2(unsigned char);
signed long int functionized3(unsigned short int);
signed long int functionized4(void);
unsigned char functionized5(signed long int);
void functionized6(signed char);
void functionized7(float, float, float);
unsigned char isInitial = 0;
signed long int var_1_1 = -16;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 5;
signed long int var_1_4 = 5;
signed long int var_1_5 = -256;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = 10;
signed short int var_1_9 = 100;
signed short int var_1_10 = 256;
signed short int var_1_11 = 100;
signed char var_1_12 = -32;
signed char var_1_13 = 8;
unsigned short int var_1_14 = 32;
unsigned char var_1_15 = 0;
signed long int var_1_16 = -64;
signed long int var_1_17 = 4;
float var_1_18 = 1.6;
float var_1_19 = 128.5;
float var_1_20 = 0.19999999999999996;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -1;
float var_1_24 = 4.3;
float var_1_25 = 0.0;
float var_1_26 = 0.0;
float var_1_27 = 128.625;
float var_1_28 = 0.5;
signed long int functionized0(signed long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1, signed long int localFunctionVar2) {
 return (functionized0_localFunctionVar1 - (functionized0_localFunctionVar0 + localFunctionVar2));
}
unsigned char functionized1(signed short int functionized1_localFunctionVar0) {
 return ((var_1_9 - ((((var_1_10) < (functionized1_localFunctionVar0)) ? (var_1_10) : (functionized1_localFunctionVar0)))) >= var_1_5);
}
void functionized2(unsigned char functionized2_localFunctionVar0) {
 if (functionized2_localFunctionVar0) {
  var_1_14 = ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11)));
 }
}
signed long int functionized3(unsigned short int functionized3_localFunctionVar0) {
 return (functionized3_localFunctionVar0 >> 10);
}
signed long int functionized4(void) {
 return ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)));
}
unsigned char functionized5(signed long int functionized5_localFunctionVar0) {
 return (((var_1_9 / functionized5_localFunctionVar0) % var_1_17) <= (var_1_4 - var_1_14));
}
void functionized6(signed char functionized6_localFunctionVar0) {
 if (! (! (var_1_15 || var_1_7))) {
  if (((((var_1_17) < (var_1_1)) ? (var_1_17) : (var_1_1))) <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) {
   var_1_22 = var_1_8;
  } else {
   var_1_22 = var_1_11;
  }
 } else {
  var_1_22 = functionized6_localFunctionVar0;
 }
}
void functionized7(float functionized7_localFunctionVar0, float functionized7_localFunctionVar1, float functionized7_localFunctionVar2) {
 var_1_24 = (((functionized7_localFunctionVar2 + functionized7_localFunctionVar1) - functionized7_localFunctionVar0) - var_1_28);
}
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = (functionized0(var_1_4, var_1_3, 5));
 } else {
  if (var_1_4 > (var_1_3 * var_1_5)) {
   var_1_1 = var_1_3;
  }
 }
 var_1_6 = var_1_7;
 if (functionized1(var_1_11)) {
  var_1_8 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
 }
 functionized2(var_1_2);
 if (functionized3(var_1_14) < (var_1_1 / functionized4())) {
  if (functionized5(var_1_16)) {
   if ((var_1_18 / var_1_19) != var_1_20) {
    var_1_15 = var_1_21;
   } else {
    var_1_15 = var_1_7;
   }
  } else {
   var_1_15 = var_1_21;
  }
 } else {
  var_1_15 = var_1_21;
 }
 functionized6(var_1_13);
 functionized7(var_1_27, var_1_26, var_1_25);
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483647);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 assume_abort_if_not(var_1_19 != 0.0F);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 2305843.009213691400e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 2305843.009213691400e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 ? (var_1_1 == ((signed long int) (var_1_3 - (var_1_4 + 5)))) : ((var_1_4 > (var_1_3 * var_1_5)) ? (var_1_1 == ((signed long int) var_1_3)) : 1)) && (var_1_6 == ((unsigned char) var_1_7))) && (((var_1_9 - ((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11)))) >= var_1_5) ? (var_1_8 == ((signed char) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : 1)) && (var_1_2 ? (var_1_14 == ((unsigned short int) ((((var_1_10) > (var_1_11)) ? (var_1_10) : (var_1_11))))) : 1)) && (((var_1_14 >> 10) < (var_1_1 / ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))))) ? ((((var_1_9 / var_1_16) % var_1_17) <= (var_1_4 - var_1_14)) ? (((var_1_18 / var_1_19) != var_1_20) ? (var_1_15 == ((unsigned char) var_1_21)) : (var_1_15 == ((unsigned char) var_1_7))) : (var_1_15 == ((unsigned char) var_1_21))) : (var_1_15 == ((unsigned char) var_1_21)))) && ((! (! (var_1_15 || var_1_7))) ? ((((((var_1_17) < (var_1_1)) ? (var_1_17) : (var_1_1))) <= ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))) ? (var_1_22 == ((signed long int) var_1_8)) : (var_1_22 == ((signed long int) var_1_11))) : (var_1_22 == ((signed long int) var_1_13)))) && (var_1_24 == ((float) (((var_1_25 + var_1_26) - var_1_27) - var_1_28)))
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
