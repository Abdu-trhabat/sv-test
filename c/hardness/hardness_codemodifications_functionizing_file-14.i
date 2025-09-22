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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(signed long int, signed long int);
void functionized1(float, float, unsigned char);
void functionized2(void);
void functionized3(float, unsigned char, float, unsigned char, unsigned char);
signed long int functionized4(void);
float functionized5(float, float);
unsigned char isInitial = 0;
signed long int var_1_1 = -10;
signed long int var_1_2 = -256;
signed long int var_1_3 = 100;
unsigned char var_1_4 = 0;
float var_1_5 = 100.5;
float var_1_6 = 256.25;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 16;
signed short int var_1_12 = -32;
unsigned long int var_1_13 = 100000000;
unsigned long int var_1_14 = 25;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 10;
signed long int var_1_19 = 1;
unsigned char var_1_20 = 5;
float var_1_21 = 25.5;
signed char var_1_22 = -16;
signed long int var_1_23 = -5;
float var_1_24 = 1.125;
float var_1_25 = 15.25;
signed long int var_1_26 = 5;
signed long int var_1_27 = -32;
unsigned char var_1_28 = 16;
void functionized0(signed long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1) {
 var_1_1 = (functionized0_localFunctionVar0 + functionized0_localFunctionVar1);
}
void functionized1(float functionized1_localFunctionVar0, float functionized1_localFunctionVar1, unsigned char functionized1_localFunctionVar2) {
 if ((functionized1_localFunctionVar1 + 9.999999999999994E14f) < (- functionized1_localFunctionVar0)) {
  var_1_4 = (var_1_7 && var_1_8);
 } else {
  if (var_1_7) {
   var_1_4 = ((var_1_8 || functionized1_localFunctionVar2) && var_1_10);
  }
 }
}
void functionized2(void) {
 if ((var_1_3 / var_1_12) <= var_1_1) {
  var_1_11 = ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)));
 }
}
void functionized3(float functionized3_localFunctionVar0, unsigned char functionized3_localFunctionVar1, float functionized3_localFunctionVar2, unsigned char functionized3_localFunctionVar3, unsigned char functionized3_localFunctionVar4) {
 if (((((functionized3_localFunctionVar2) < (-0.5)) ? (functionized3_localFunctionVar2) : (-0.5))) > (10.9 * functionized3_localFunctionVar0)) {
  if (functionized3_localFunctionVar3) {
   var_1_15 = ((((((((functionized3_localFunctionVar1) < 0 ) ? -(functionized3_localFunctionVar1) : (functionized3_localFunctionVar1)))) < (functionized3_localFunctionVar4)) ? (((((functionized3_localFunctionVar1) < 0 ) ? -(functionized3_localFunctionVar1) : (functionized3_localFunctionVar1)))) : (functionized3_localFunctionVar4)));
  } else {
   var_1_15 = functionized3_localFunctionVar4;
  }
 }
}
signed long int functionized4(void) {
 return ((~ var_1_15) * var_1_22);
}
float functionized5(float functionized5_localFunctionVar0, float functionized5_localFunctionVar1) {
 return ((((functionized5_localFunctionVar0) > (functionized5_localFunctionVar1)) ? (functionized5_localFunctionVar0) : (functionized5_localFunctionVar1)));
}
void initially(void) {
}
void step(void) {
 functionized0(var_1_2, var_1_3);
 functionized1(var_1_6, var_1_5, var_1_9);
 functionized2();
 functionized3(var_1_6, var_1_17, var_1_5, var_1_16, var_1_18);
 if ((var_1_13 % var_1_20) != var_1_1) {
  if (var_1_18 == var_1_17) {
   if (var_1_16) {
    var_1_19 = var_1_18;
   } else {
    var_1_19 = var_1_15;
   }
  }
 }
 if (functionized4() >= (var_1_3 % var_1_23)) {
  var_1_21 = (functionized5(var_1_24, var_1_25));
 }
 if (var_1_9 || ((var_1_19 + var_1_27) <= 4)) {
  var_1_26 = (var_1_15 - var_1_20);
 } else {
  var_1_26 = (var_1_20 - var_1_17);
 }
 var_1_28 = var_1_17;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1073741823);
 assume_abort_if_not(var_1_2 <= 1073741823);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1073741823);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32768);
 assume_abort_if_not(var_1_12 <= 32767);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 255);
 assume_abort_if_not(var_1_20 != 0);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -128);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= -2147483648);
 assume_abort_if_not(var_1_23 <= 2147483647);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((var_1_1 == ((signed long int) (var_1_2 + var_1_3))) && (((var_1_5 + 9.999999999999994E14f) < (- var_1_6)) ? (var_1_4 == ((unsigned char) (var_1_7 && var_1_8))) : (var_1_7 ? (var_1_4 == ((unsigned char) ((var_1_8 || var_1_9) && var_1_10))) : 1))) && (((var_1_3 / var_1_12) <= var_1_1) ? (var_1_11 == ((unsigned long int) ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))))) : 1)) && ((((((var_1_5) < (-0.5)) ? (var_1_5) : (-0.5))) > (10.9 * var_1_6)) ? (var_1_16 ? (var_1_15 == ((unsigned char) ((((((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) < (var_1_18)) ? (((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) : (var_1_18))))) : (var_1_15 == ((unsigned char) var_1_18))) : 1)) && (((var_1_13 % var_1_20) != var_1_1) ? ((var_1_18 == var_1_17) ? (var_1_16 ? (var_1_19 == ((signed long int) var_1_18)) : (var_1_19 == ((signed long int) var_1_15))) : 1) : 1)) && ((((~ var_1_15) * var_1_22) >= (var_1_3 % var_1_23)) ? (var_1_21 == ((float) ((((var_1_24) > (var_1_25)) ? (var_1_24) : (var_1_25))))) : 1)) && ((var_1_9 || ((var_1_19 + var_1_27) <= 4)) ? (var_1_26 == ((signed long int) (var_1_15 - var_1_20))) : (var_1_26 == ((signed long int) (var_1_20 - var_1_17))))) && (var_1_28 == ((unsigned char) var_1_17))
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
