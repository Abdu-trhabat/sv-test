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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned long int var_1_2 = 16;
unsigned long int var_1_3 = 4;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 64;
signed long int var_1_9 = -1;
signed long int var_1_10 = 32;
signed long int var_1_11 = 128;
double var_1_12 = 2.8;
double var_1_13 = 64.5;
double var_1_14 = 199.15;
double var_1_15 = 25.2;
double var_1_16 = 0.0;
double var_1_17 = 3.5;
double var_1_18 = 0.5;
signed short int var_1_19 = 500;
signed short int var_1_20 = 1;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= (8u * var_1_3)) {
  var_1_1 = (! (var_1_4 || (var_1_5 || var_1_6)));
 } else {
  var_1_1 = var_1_7;
 }
 signed long int stepLocal_1 = var_1_10;
 unsigned long int stepLocal_0 = 1u;
 if (((var_1_3 * var_1_2) * (var_1_9 - var_1_10)) >= stepLocal_0) {
  if (var_1_3 <= stepLocal_1) {
   var_1_8 = var_1_11;
  } else {
   var_1_8 = 8;
  }
 } else {
  var_1_8 = var_1_11;
 }
 if ((~ ((((var_1_3) < (var_1_8)) ? (var_1_3) : (var_1_8)))) <= (var_1_10 % 1u)) {
  var_1_12 = (var_1_13 + (var_1_14 + var_1_15));
 } else {
  var_1_12 = ((var_1_16 - var_1_17) - var_1_18);
 }
 var_1_19 = var_1_20;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483647);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 4611686.018427383000e+12F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -32767);
 assume_abort_if_not(var_1_20 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= (8u * var_1_3)) ? (var_1_1 == ((unsigned char) (! (var_1_4 || (var_1_5 || var_1_6))))) : (var_1_1 == ((unsigned char) var_1_7))) && ((((var_1_3 * var_1_2) * (var_1_9 - var_1_10)) >= 1u) ? ((var_1_3 <= var_1_10) ? (var_1_8 == ((signed long int) var_1_11)) : (var_1_8 == ((signed long int) 8))) : (var_1_8 == ((signed long int) var_1_11)))) && (((~ ((((var_1_3) < (var_1_8)) ? (var_1_3) : (var_1_8)))) <= (var_1_10 % 1u)) ? (var_1_12 == ((double) (var_1_13 + (var_1_14 + var_1_15)))) : (var_1_12 == ((double) ((var_1_16 - var_1_17) - var_1_18))))) && (var_1_19 == ((signed short int) var_1_20))
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
