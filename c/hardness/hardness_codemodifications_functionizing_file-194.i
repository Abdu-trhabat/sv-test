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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(signed long int);
void functionized1(signed char, signed long int);
void functionized2(float, unsigned char, double, unsigned long int, unsigned long int);
float functionized3(float);
void functionized4(signed long int, signed char, signed long int, float, signed char);
void functionized5(unsigned short int);
unsigned char isInitial = 0;
float var_1_1 = 255.75;
double var_1_2 = 1.12;
double var_1_3 = 4.5;
double var_1_4 = 9.5;
float var_1_5 = 127.6;
float var_1_6 = 63.2;
signed char var_1_7 = -8;
signed short int var_1_8 = 5;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 16;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
float var_1_16 = 15.6;
unsigned long int var_1_17 = 0;
signed long int var_1_18 = -64;
unsigned long int var_1_19 = 1000;
signed long int var_1_20 = 16;
signed long int var_1_21 = 128;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 4;
unsigned short int var_1_24 = 128;
double var_1_25 = 10000000000000.875;
void functionized0(signed long int localFunctionVar0) {
 var_1_7 = ((((localFunctionVar0) < 0 ) ? -(localFunctionVar0) : (localFunctionVar0)));
}
void functionized1(signed char functionized1_localFunctionVar0, signed long int localFunctionVar1) {
 if (functionized1_localFunctionVar0 <= ((((localFunctionVar1) < (var_1_9)) ? (localFunctionVar1) : (var_1_9)))) {
  var_1_8 = (var_1_9 + 10);
 } else {
  var_1_8 = functionized1_localFunctionVar0;
 }
}
void functionized2(float functionized2_localFunctionVar0, unsigned char functionized2_localFunctionVar1, double functionized2_localFunctionVar2, unsigned long int localFunctionVar3, unsigned long int localFunctionVar4) {
 if (localFunctionVar3 > (var_1_11 / localFunctionVar4)) {
  if (functionized2_localFunctionVar2 > functionized2_localFunctionVar0) {
   var_1_10 = (var_1_12 || (var_1_13 && var_1_14));
  }
 } else {
  var_1_10 = functionized2_localFunctionVar1;
 }
}
float functionized3(float functionized3_localFunctionVar0) {
 return ((((functionized3_localFunctionVar0) < 0 ) ? -(functionized3_localFunctionVar0) : (functionized3_localFunctionVar0)));
}
void functionized4(signed long int functionized4_localFunctionVar0, signed char functionized4_localFunctionVar1, signed long int functionized4_localFunctionVar2, float functionized4_localFunctionVar3, signed char functionized4_localFunctionVar4) {
 if (var_1_4 < var_1_2) {
  if (-0.5f < var_1_16) {
   if (functionized4_localFunctionVar3 == var_1_2) {
    if (var_1_11 < var_1_19) {
     var_1_18 = (((((var_1_8 + functionized4_localFunctionVar1)) < (functionized4_localFunctionVar4)) ? ((var_1_8 + functionized4_localFunctionVar1)) : (functionized4_localFunctionVar4)));
    } else {
     var_1_18 = (functionized4_localFunctionVar0 - functionized4_localFunctionVar2);
    }
   }
  } else {
   var_1_18 = functionized4_localFunctionVar1;
  }
 }
}
void functionized5(unsigned short int functionized5_localFunctionVar0) {
 var_1_22 = functionized5_localFunctionVar0;
}
void initially(void) {
}
void step(void) {
 if (var_1_2 < 32.8) {
  if (var_1_2 == (var_1_3 * (- var_1_4))) {
   var_1_1 = var_1_5;
  } else {
   var_1_1 = (var_1_6 + 8.6f);
  }
 }
 functionized0(-64);
 functionized1(var_1_7, 4);
 functionized2(var_1_5, var_1_15, var_1_3, 128u, 64u);
 if ((~ var_1_11) >= var_1_17) {
  if (var_1_8 != var_1_11) {
   var_1_16 = functionized3(var_1_5);
  }
 }
 functionized4(var_1_20, var_1_7, var_1_21, var_1_1, var_1_9);
 functionized5(var_1_23);
 var_1_24 = 10;
 var_1_25 = var_1_6;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -128);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 4294967295);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967295);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= -1);
 assume_abort_if_not(var_1_20 <= 2147483646);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((var_1_2 < 32.8) ? ((var_1_2 == (var_1_3 * (- var_1_4))) ? (var_1_1 == ((float) var_1_5)) : (var_1_1 == ((float) (var_1_6 + 8.6f)))) : 1) && (var_1_7 == ((signed char) ((((-64) < 0 ) ? -(-64) : (-64)))))) && ((var_1_7 <= ((((4) < (var_1_9)) ? (4) : (var_1_9)))) ? (var_1_8 == ((signed short int) (var_1_9 + 10))) : (var_1_8 == ((signed short int) var_1_7)))) && ((128u > (var_1_11 / 64u)) ? ((var_1_3 > var_1_5) ? (var_1_10 == ((unsigned char) (var_1_12 || (var_1_13 && var_1_14)))) : 1) : (var_1_10 == ((unsigned char) var_1_15)))) && (((~ var_1_11) >= var_1_17) ? ((var_1_8 != var_1_11) ? (var_1_16 == ((float) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : 1) : 1)) && ((var_1_4 < var_1_2) ? ((-0.5f < var_1_16) ? ((var_1_1 == var_1_2) ? ((var_1_11 < var_1_19) ? (var_1_18 == ((signed long int) (((((var_1_8 + var_1_7)) < (var_1_9)) ? ((var_1_8 + var_1_7)) : (var_1_9))))) : (var_1_18 == ((signed long int) (var_1_20 - var_1_21)))) : 1) : (var_1_18 == ((signed long int) var_1_7))) : 1)) && (var_1_22 == ((unsigned short int) var_1_23))) && (var_1_24 == ((unsigned short int) 10))) && (var_1_25 == ((double) var_1_6))
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
