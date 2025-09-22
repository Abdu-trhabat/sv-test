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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(signed long int, signed long int);
unsigned long int functionized1(void);
signed long int functionized2(signed long int);
unsigned char functionized3(unsigned char, float, float);
void functionized4(unsigned long int);
signed long int functionized5(signed long int);
signed long int functionized6(signed char);
void functionized7(signed char, unsigned short int, signed char);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
signed long int var_1_2 = 4;
signed long int var_1_3 = 10;
signed long int var_1_4 = -64;
signed long int var_1_5 = -2;
unsigned long int var_1_6 = 256;
unsigned long int var_1_7 = 4;
unsigned long int var_1_8 = 128;
signed char var_1_9 = 10;
unsigned char var_1_10 = 0;
signed char var_1_11 = -1;
unsigned short int var_1_12 = 10000;
float var_1_13 = 5.4;
float var_1_14 = 1.4;
float var_1_15 = 128.9;
float var_1_16 = 199.75;
unsigned long int var_1_17 = 16;
unsigned short int var_1_18 = 32;
unsigned short int var_1_19 = 32;
double var_1_20 = 1.5;
double var_1_22 = 127.75;
signed char var_1_23 = 8;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -16;
signed char var_1_27 = 16;
signed long int var_1_28 = 10;
unsigned char functionized0(signed long int functionized0_localFunctionVar0, signed long int functionized0_localFunctionVar1) {
 return (((var_1_2 + functionized0_localFunctionVar1) / var_1_4) == functionized0_localFunctionVar0);
}
unsigned long int functionized1(void) {
 return ((((var_1_6) > (var_1_2)) ? (var_1_6) : (var_1_2)));
}
signed long int functionized2(signed long int localFunctionVar0) {
 return (localFunctionVar0 + var_1_11);
}
unsigned char functionized3(unsigned char functionized3_localFunctionVar0, float functionized3_localFunctionVar1, float functionized3_localFunctionVar2) {
 return (((var_1_13 - functionized3_localFunctionVar2) != ((((functionized3_localFunctionVar1) < (var_1_16)) ? (functionized3_localFunctionVar1) : (var_1_16)))) || functionized3_localFunctionVar0);
}
void functionized4(unsigned long int functionized4_localFunctionVar0) {
 if (((((functionized4_localFunctionVar0) < (var_1_19)) ? (functionized4_localFunctionVar0) : (var_1_19))) < var_1_2) {
  var_1_20 = var_1_22;
 }
}
signed long int functionized5(signed long int localFunctionVar0) {
 return ((((localFunctionVar0) > (var_1_11)) ? (localFunctionVar0) : (var_1_11)));
}
signed long int functionized6(signed char functionized6_localFunctionVar0) {
 return ((((var_1_26) > (functionized6_localFunctionVar0)) ? (var_1_26) : (functionized6_localFunctionVar0)));
}
void functionized7(signed char functionized7_localFunctionVar0, unsigned short int functionized7_localFunctionVar1, signed char functionized7_localFunctionVar2) {
 if (var_1_25 && (functionized7_localFunctionVar0 < functionized7_localFunctionVar2)) {
  var_1_28 = (functionized7_localFunctionVar1 - var_1_18);
 } else {
  var_1_28 = functionized7_localFunctionVar0;
 }
}
void initially(void) {
}
void step(void) {
 if (functionized0(var_1_5, var_1_3)) {
  var_1_1 = (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) + var_1_8);
 }
 if (! var_1_10) {
  if (functionized1() >= var_1_1) {
   var_1_9 = functionized2(-16);
  } else {
   var_1_9 = var_1_11;
  }
 } else {
  var_1_9 = var_1_11;
 }
 if (functionized3(var_1_10, var_1_15, var_1_14)) {
  if (var_1_1 >= var_1_17) {
   var_1_12 = (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + 32);
  } else {
   var_1_12 = var_1_19;
  }
 }
 functionized4(var_1_1);
 if (var_1_10) {
  if (var_1_24 && var_1_25) {
   var_1_23 = (functionized5(0) + functionized6(var_1_27));
  } else {
   var_1_23 = var_1_11;
  }
 } else {
  var_1_23 = var_1_26;
 }
 if (((((var_1_17) < (var_1_6)) ? (var_1_17) : (var_1_6))) > (var_1_7 | var_1_19)) {
  functionized7(var_1_11, var_1_19, var_1_23);
 } else {
  var_1_28 = var_1_12;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -63);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -63);
 assume_abort_if_not(var_1_27 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 + var_1_3) / var_1_4) == var_1_5) ? (var_1_1 == ((unsigned long int) (((((var_1_6) < (var_1_7)) ? (var_1_6) : (var_1_7))) + var_1_8))) : 1) && ((! var_1_10) ? ((((((var_1_6) > (var_1_2)) ? (var_1_6) : (var_1_2))) >= var_1_1) ? (var_1_9 == ((signed char) (-16 + var_1_11))) : (var_1_9 == ((signed char) var_1_11))) : (var_1_9 == ((signed char) var_1_11)))) && ((((var_1_13 - var_1_14) != ((((var_1_15) < (var_1_16)) ? (var_1_15) : (var_1_16)))) || var_1_10) ? ((var_1_1 >= var_1_17) ? (var_1_12 == ((unsigned short int) (((((var_1_18) < (var_1_19)) ? (var_1_18) : (var_1_19))) + 32))) : (var_1_12 == ((unsigned short int) var_1_19))) : 1)) && ((((((var_1_1) < (var_1_19)) ? (var_1_1) : (var_1_19))) < var_1_2) ? (var_1_20 == ((double) var_1_22)) : 1)) && (var_1_10 ? ((var_1_24 && var_1_25) ? (var_1_23 == ((signed char) (((((0) > (var_1_11)) ? (0) : (var_1_11))) + ((((var_1_26) > (var_1_27)) ? (var_1_26) : (var_1_27)))))) : (var_1_23 == ((signed char) var_1_11))) : (var_1_23 == ((signed char) var_1_26)))) && ((((((var_1_17) < (var_1_6)) ? (var_1_17) : (var_1_6))) > (var_1_7 | var_1_19)) ? ((var_1_25 && (var_1_11 < var_1_23)) ? (var_1_28 == ((signed long int) (var_1_19 - var_1_18))) : (var_1_28 == ((signed long int) var_1_11))) : (var_1_28 == ((signed long int) var_1_12)))
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
