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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = -32.0;
double var_1_2 = 256.0;
signed char var_1_3 = -1;
signed char var_1_5 = 32;
signed char var_1_6 = 5;
signed char var_1_7 = -25;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned long int var_1_14 = 1;
unsigned char var_1_15 = 4;
unsigned long int var_1_16 = 2436998870;
signed long int var_1_17 = -128;
signed char var_1_18 = -128;
signed char var_1_19 = 100;
unsigned char last_1_var_1_8 = 0;
void initially(void) {
}
void step(void) {
 var_1_1 = (256.0 - var_1_2);
 if (var_1_1 < (var_1_2 + var_1_1)) {
  var_1_3 = (((((var_1_5 - var_1_6)) < (var_1_7)) ? ((var_1_5 - var_1_6)) : (var_1_7)));
 }
 signed char stepLocal_2 = var_1_3;
 if ((var_1_6 % var_1_15) != stepLocal_2) {
  var_1_14 = ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)));
 } else {
  var_1_14 = (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_15);
 }
 var_1_17 = var_1_7;
 var_1_18 = var_1_6;
 var_1_19 = var_1_6;
 unsigned long int stepLocal_1 = var_1_14;
 unsigned char stepLocal_0 = var_1_9;
 if (stepLocal_0 || last_1_var_1_8) {
  if (last_1_var_1_8) {
   var_1_8 = (! var_1_11);
  } else {
   var_1_8 = (var_1_11 || var_1_12);
  }
 } else {
  if (stepLocal_1 >= -64) {
   var_1_8 = var_1_11;
  } else {
   var_1_8 = var_1_13;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 255);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 2147483647);
 assume_abort_if_not(var_1_16 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return ((((((var_1_1 == ((double) (256.0 - var_1_2))) && ((var_1_1 < (var_1_2 + var_1_1)) ? (var_1_3 == ((signed char) (((((var_1_5 - var_1_6)) < (var_1_7)) ? ((var_1_5 - var_1_6)) : (var_1_7))))) : 1)) && ((var_1_9 || last_1_var_1_8) ? (last_1_var_1_8 ? (var_1_8 == ((unsigned char) (! var_1_11))) : (var_1_8 == ((unsigned char) (var_1_11 || var_1_12)))) : ((var_1_14 >= -64) ? (var_1_8 == ((unsigned char) var_1_11)) : (var_1_8 == ((unsigned char) var_1_13))))) && (((var_1_6 % var_1_15) != var_1_3) ? (var_1_14 == ((unsigned long int) ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))) : (var_1_14 == ((unsigned long int) (((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16))) - var_1_15))))) && (var_1_17 == ((signed long int) var_1_7))) && (var_1_18 == ((signed char) var_1_6))) && (var_1_19 == ((signed char) var_1_6))
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
