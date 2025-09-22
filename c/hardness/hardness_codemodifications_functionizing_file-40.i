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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char functionized0(signed long int, signed char);
void functionized1(signed long int, unsigned char, signed short int);
void functionized2(double, unsigned char, unsigned char, signed long int);
void functionized3(unsigned short int, signed long int);
void functionized4(unsigned char, unsigned char);
void functionized5(float);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
signed char var_1_2 = 2;
signed char var_1_3 = -100;
signed short int var_1_4 = -200;
signed long int var_1_5 = -2;
unsigned short int var_1_6 = 32;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 5;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 16;
double var_1_13 = 4.8;
double var_1_14 = 8.4;
unsigned char var_1_15 = 50;
unsigned short int var_1_16 = 1;
float var_1_17 = 25.4;
signed long int var_1_19 = 2;
float var_1_20 = 1.6;
unsigned short int var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned short int var_1_23 = 16;
float var_1_24 = 128.5;
double var_1_25 = -0.5;
signed long int var_1_26 = 4;
unsigned char functionized0(signed long int functionized0_localFunctionVar0, signed char functionized0_localFunctionVar1) {
 return (((var_1_3 * functionized0_localFunctionVar1) / var_1_4) <= functionized0_localFunctionVar0);
}
void functionized1(signed long int functionized1_localFunctionVar0, unsigned char functionized1_localFunctionVar1, signed short int functionized1_localFunctionVar2) {
 if ((functionized1_localFunctionVar0 != functionized1_localFunctionVar2) || functionized1_localFunctionVar1) {
  var_1_9 = var_1_11;
 }
}
void functionized2(double functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, unsigned char functionized2_localFunctionVar2, signed long int localFunctionVar3) {
 if ((functionized2_localFunctionVar1 && var_1_11) && (localFunctionVar3 > var_1_8)) {
  if ((- functionized2_localFunctionVar0) < var_1_14) {
   if (var_1_10) {
    var_1_12 = 5;
   }
  }
 } else {
  var_1_12 = functionized2_localFunctionVar2;
 }
}
void functionized3(unsigned short int functionized3_localFunctionVar0, signed long int localFunctionVar1) {
 var_1_16 = (((((((((localFunctionVar1) > (var_1_7)) ? (localFunctionVar1) : (var_1_7))) + functionized3_localFunctionVar0)) < (var_1_15)) ? ((((((localFunctionVar1) > (var_1_7)) ? (localFunctionVar1) : (var_1_7))) + functionized3_localFunctionVar0)) : (var_1_15)));
}
void functionized4(unsigned char functionized4_localFunctionVar0, unsigned char functionized4_localFunctionVar1) {
 if ((var_1_10 && var_1_11) && functionized4_localFunctionVar0) {
  var_1_21 = (var_1_12 + (functionized4_localFunctionVar1 + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23)))));
 } else {
  var_1_21 = ((23370 - functionized4_localFunctionVar1) + var_1_23);
 }
}
void functionized5(float functionized5_localFunctionVar0) {
 if (! (-4 < var_1_22)) {
  var_1_24 = functionized5_localFunctionVar0;
 } else {
  if (-4 > var_1_12) {
   var_1_24 = 10.6f;
  }
 }
}
void initially(void) {
}
void step(void) {
 if (functionized0(var_1_5, var_1_2)) {
  var_1_1 = var_1_6;
 } else {
  var_1_1 = (var_1_7 + var_1_8);
 }
 functionized1(var_1_5, var_1_10, var_1_4);
 functionized2(var_1_13, var_1_9, var_1_15, 50);
 functionized3(var_1_8, 256);
 if ((var_1_1 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (var_1_8 - var_1_19)) {
  var_1_17 = var_1_20;
 }
 functionized4(var_1_9, var_1_15);
 functionized5(var_1_20);
 var_1_25 = var_1_20;
 var_1_26 = var_1_6;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((var_1_3 * var_1_2) / var_1_4) <= var_1_5) ? (var_1_1 == ((unsigned short int) var_1_6)) : (var_1_1 == ((unsigned short int) (var_1_7 + var_1_8)))) && (((var_1_5 != var_1_4) || var_1_10) ? (var_1_9 == ((unsigned char) var_1_11)) : 1)) && (((var_1_9 && var_1_11) && (50 > var_1_8)) ? (((- var_1_13) < var_1_14) ? (var_1_10 ? (var_1_12 == ((unsigned char) 5)) : 1) : 1) : (var_1_12 == ((unsigned char) var_1_15)))) && (var_1_16 == ((unsigned short int) (((((((((256) > (var_1_7)) ? (256) : (var_1_7))) + var_1_8)) < (var_1_15)) ? ((((((256) > (var_1_7)) ? (256) : (var_1_7))) + var_1_8)) : (var_1_15)))))) && (((var_1_1 - ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (var_1_8 - var_1_19)) ? (var_1_17 == ((float) var_1_20)) : 1)) && (((var_1_10 && var_1_11) && var_1_9) ? (var_1_21 == ((unsigned short int) (var_1_12 + (var_1_15 + ((((var_1_22) > (var_1_23)) ? (var_1_22) : (var_1_23))))))) : (var_1_21 == ((unsigned short int) ((23370 - var_1_15) + var_1_23))))) && ((! (-4 < var_1_22)) ? (var_1_24 == ((float) var_1_20)) : ((-4 > var_1_12) ? (var_1_24 == ((float) 10.6f)) : 1))) && (var_1_25 == ((double) var_1_20))) && (var_1_26 == ((signed long int) var_1_6))
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
