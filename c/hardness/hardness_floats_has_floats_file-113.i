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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch113has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 2;
unsigned long int var_1_2 = 5;
unsigned long int var_1_3 = 32;
unsigned short int var_1_4 = 1;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
float var_1_7 = 10.0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
float var_1_10 = 4.0;
signed char var_1_11 = 4;
signed char var_1_12 = 10;
signed char var_1_13 = -10;
signed char var_1_14 = 10;
signed char var_1_15 = -32;
float var_1_16 = -32.0;
float var_1_18 = 0.0;
float var_1_19 = 0.0;
unsigned long int var_1_20 = 1;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = var_1_2;
 if (stepLocal_0 >= var_1_3) {
  var_1_1 = ((((128) < (var_1_4)) ? (128) : (var_1_4)));
 } else {
  var_1_1 = (((((var_1_5 + var_1_6)) < (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)));
 }
 unsigned char stepLocal_1 = var_1_8;
 if (stepLocal_1 || var_1_9) {
  var_1_7 = (-5.0f + var_1_10);
 }
 if ((var_1_12 * var_1_1) > var_1_15) {
  var_1_16 = (var_1_18 - var_1_19);
 } else {
  if ((var_1_4 / (3705801857u - var_1_20)) < var_1_5) {
   var_1_16 = var_1_10;
  } else {
   var_1_16 = var_1_19;
  }
 }
 if (var_1_8) {
  if ((-128.0f + var_1_16) >= var_1_10) {
   var_1_11 = ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)));
  }
 } else {
  var_1_11 = (((((var_1_13 + var_1_14)) < ((var_1_15 + 2))) ? ((var_1_13 + var_1_14)) : ((var_1_15 + 2))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -126);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -63);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 2147483646);
 assume_abort_if_not(var_1_20 != 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= var_1_3) ? (var_1_1 == ((unsigned short int) ((((128) < (var_1_4)) ? (128) : (var_1_4))))) : (var_1_1 == ((unsigned short int) (((((var_1_5 + var_1_6)) < (var_1_4)) ? ((var_1_5 + var_1_6)) : (var_1_4)))))) && ((var_1_8 || var_1_9) ? (var_1_7 == ((float) (-5.0f + var_1_10))) : 1)) && (var_1_8 ? (((-128.0f + var_1_16) >= var_1_10) ? (var_1_11 == ((signed char) ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))) : 1) : (var_1_11 == ((signed char) (((((var_1_13 + var_1_14)) < ((var_1_15 + 2))) ? ((var_1_13 + var_1_14)) : ((var_1_15 + 2)))))))) && (((var_1_12 * var_1_1) > var_1_15) ? (var_1_16 == ((float) (var_1_18 - var_1_19))) : (((var_1_4 / (3705801857u - var_1_20)) < var_1_5) ? (var_1_16 == ((float) var_1_10)) : (var_1_16 == ((float) var_1_19))))
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
