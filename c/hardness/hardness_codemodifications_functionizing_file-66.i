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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66functionizing.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
void functionized0(signed char, double);
signed long int functionized1(signed long int);
signed long int functionized2(unsigned short int);
void functionized3(signed char, unsigned short int, signed char);
void functionized4(float, unsigned short int, signed char, float, signed char, float);
unsigned char functionized5(double, float, float);
unsigned char isInitial = 0;
signed char var_1_1 = 50;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = 10;
double var_1_5 = 16.5;
signed char var_1_6 = 64;
signed char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 43463;
unsigned short int var_1_10 = 52427;
float var_1_11 = 256.8;
float var_1_12 = 199.8;
signed short int var_1_13 = 32;
signed short int var_1_14 = -50;
float var_1_15 = 4.5;
double var_1_16 = 0.7;
void functionized0(signed char functionized0_localFunctionVar0, double localFunctionVar1) {
 if (var_1_4 >= (var_1_6 - functionized0_localFunctionVar0)) {
  if (var_1_2) {
   var_1_5 = localFunctionVar1;
  }
 }
}
signed long int functionized1(signed long int localFunctionVar0) {
 return (localFunctionVar0 * var_1_6);
}
signed long int functionized2(unsigned short int functionized2_localFunctionVar0) {
 return (functionized2_localFunctionVar0 * 16);
}
void functionized3(signed char functionized3_localFunctionVar0, unsigned short int functionized3_localFunctionVar1, signed char functionized3_localFunctionVar2) {
 if (var_1_9 < (- functionized3_localFunctionVar1)) {
  var_1_13 = (functionized3_localFunctionVar2 + (functionized3_localFunctionVar0 + var_1_7));
 } else {
  var_1_13 = (functionized3_localFunctionVar0 - var_1_7);
 }
}
void functionized4(float functionized4_localFunctionVar0, unsigned short int functionized4_localFunctionVar1, signed char functionized4_localFunctionVar2, float functionized4_localFunctionVar3, signed char functionized4_localFunctionVar4, float localFunctionVar5) {
 if (((((var_1_3) > (functionized4_localFunctionVar4)) ? (var_1_3) : (functionized4_localFunctionVar4))) > (var_1_13 / functionized4_localFunctionVar1)) {
  if ((((((functionized4_localFunctionVar0 + functionized4_localFunctionVar3)) > (1.0000000000002E12f)) ? ((functionized4_localFunctionVar0 + functionized4_localFunctionVar3)) : (1.0000000000002E12f))) <= (var_1_5 / ((((localFunctionVar5) < (var_1_15)) ? (localFunctionVar5) : (var_1_15))))) {
   var_1_14 = var_1_3;
  } else {
   var_1_14 = functionized4_localFunctionVar2;
  }
 } else {
  var_1_14 = var_1_3;
 }
}
unsigned char functionized5(double functionized5_localFunctionVar0, float functionized5_localFunctionVar1, float functionized5_localFunctionVar2) {
 return (functionized5_localFunctionVar2 != ((((var_1_12) < ((functionized5_localFunctionVar0 * functionized5_localFunctionVar1))) ? (var_1_12) : ((functionized5_localFunctionVar0 * functionized5_localFunctionVar1)))));
}
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = (var_1_3 + var_1_4);
 }
 functionized0(var_1_7, 8.25);
 if (-25 == (var_1_3 * functionized1(-5))) {
  var_1_8 = ((((var_1_9 - var_1_7) < 0 ) ? -(var_1_9 - var_1_7) : (var_1_9 - var_1_7)));
 } else {
  var_1_8 = ((((var_1_9) > ((var_1_10 - var_1_7))) ? (var_1_9) : ((var_1_10 - var_1_7))));
 }
 if (! var_1_2) {
  if (functionized2(var_1_8) >= var_1_3) {
   var_1_11 = var_1_12;
  }
 }
 functionized3(var_1_6, var_1_10, var_1_3);
 functionized4(var_1_11, var_1_10, var_1_7, var_1_12, var_1_4, 127.5f);
 if (functionized5(var_1_5, var_1_11, var_1_15)) {
  var_1_16 = var_1_12;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 ? (var_1_1 == ((signed char) (var_1_3 + var_1_4))) : 1) && ((var_1_4 >= (var_1_6 - var_1_7)) ? (var_1_2 ? (var_1_5 == ((double) 8.25)) : 1) : 1)) && ((-25 == (var_1_3 * (-5 * var_1_6))) ? (var_1_8 == ((unsigned short int) ((((var_1_9 - var_1_7) < 0 ) ? -(var_1_9 - var_1_7) : (var_1_9 - var_1_7))))) : (var_1_8 == ((unsigned short int) ((((var_1_9) > ((var_1_10 - var_1_7))) ? (var_1_9) : ((var_1_10 - var_1_7)))))))) && ((! var_1_2) ? (((var_1_8 * 16) >= var_1_3) ? (var_1_11 == ((float) var_1_12)) : 1) : 1)) && ((var_1_9 < (- var_1_10)) ? (var_1_13 == ((signed short int) (var_1_3 + (var_1_6 + var_1_7)))) : (var_1_13 == ((signed short int) (var_1_6 - var_1_7))))) && ((((((var_1_3) > (var_1_4)) ? (var_1_3) : (var_1_4))) > (var_1_13 / var_1_10)) ? (((((((var_1_11 + var_1_12)) > (1.0000000000002E12f)) ? ((var_1_11 + var_1_12)) : (1.0000000000002E12f))) <= (var_1_5 / ((((127.5f) < (var_1_15)) ? (127.5f) : (var_1_15))))) ? (var_1_14 == ((signed short int) var_1_3)) : (var_1_14 == ((signed short int) var_1_7))) : (var_1_14 == ((signed short int) var_1_3)))) && ((var_1_15 != ((((var_1_12) < ((var_1_5 * var_1_11))) ? (var_1_12) : ((var_1_5 * var_1_11))))) ? (var_1_16 == ((double) var_1_12)) : 1)
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
