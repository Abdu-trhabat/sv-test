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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch78normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -200;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
unsigned long int var_1_4 = 4;
unsigned long int var_1_5 = 0;
signed long int var_1_6 = 128;
signed long int var_1_7 = 10;
signed long int var_1_8 = 1000000;
float var_1_9 = 100.55;
float var_1_10 = 4.75;
float var_1_11 = 128.75;
double var_1_12 = 128.5;
double var_1_13 = 0.0;
double var_1_14 = 127.875;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 16;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_3;
 unsigned char stepLocal_0 = var_1_2;
 if (var_1_2 && stepLocal_1) {
  if (stepLocal_0 && (var_1_4 > var_1_5)) {
   var_1_1 = (var_1_6 - var_1_7);
  } else {
   var_1_1 = ((var_1_8 + 5) - var_1_7);
  }
 }
 if (var_1_2) {
  var_1_9 = (var_1_10 - var_1_11);
 } else {
  if (var_1_4 < var_1_5) {
   var_1_9 = ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10)));
  } else {
   var_1_9 = var_1_10;
  }
 }
 unsigned long int stepLocal_2 = (((8u) < 0 ) ? -(8u) : (8u));
 if (var_1_4 <= stepLocal_2) {
  var_1_12 = (var_1_10 - 99.5);
 } else {
  var_1_12 = ((var_1_13 - var_1_14) - var_1_11);
 }
 if (0.8f > (- var_1_10)) {
  var_1_15 = var_1_16;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 4611686.018427383000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 && var_1_3) ? ((var_1_2 && (var_1_4 > var_1_5)) ? (var_1_1 == ((signed long int) (var_1_6 - var_1_7))) : (var_1_1 == ((signed long int) ((var_1_8 + 5) - var_1_7)))) : 1) && (var_1_2 ? (var_1_9 == ((float) (var_1_10 - var_1_11))) : ((var_1_4 < var_1_5) ? (var_1_9 == ((float) ((((var_1_11) > (var_1_10)) ? (var_1_11) : (var_1_10))))) : (var_1_9 == ((float) var_1_10))))) && ((var_1_4 <= ((((8u) < 0 ) ? -(8u) : (8u)))) ? (var_1_12 == ((double) (var_1_10 - 99.5))) : (var_1_12 == ((double) ((var_1_13 - var_1_14) - var_1_11))))) && ((0.8f > (- var_1_10)) ? (var_1_15 == ((unsigned char) var_1_16)) : 1)
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
