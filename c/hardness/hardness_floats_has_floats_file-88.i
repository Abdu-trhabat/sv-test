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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -8;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
signed char var_1_7 = -1;
signed long int var_1_8 = -1000000000;
float var_1_9 = 32.0;
float var_1_10 = 50.0;
float var_1_11 = -2.0;
signed long int var_1_12 = 1000000000;
signed long int var_1_13 = 1000000000;
signed long int var_1_14 = 16;
signed long int var_1_15 = 32;
signed short int var_1_16 = -16;
signed short int var_1_17 = 500;
signed short int var_1_18 = 25629;
signed long int last_1_var_1_8 = -1000000000;
signed short int last_1_var_1_16 = -16;
void initially(void) {
}
void step(void) {
 if (((last_1_var_1_16 | last_1_var_1_8) > last_1_var_1_8) && var_1_5) {
  if (var_1_5 && var_1_6) {
   var_1_1 = var_1_7;
  } else {
   var_1_1 = -25;
  }
 } else {
  var_1_1 = var_1_7;
 }
 signed long int stepLocal_0 = 0;
 if (var_1_13 != stepLocal_0) {
  var_1_16 = (var_1_17 - (var_1_18 - 2));
 } else {
  if (var_1_11 <= (-128.0f + (- var_1_10))) {
   var_1_16 = var_1_1;
  }
 }
 if (-1.0f < ((var_1_9 + var_1_10) / ((((-8.0f) > (var_1_11)) ? (-8.0f) : (var_1_11))))) {
  var_1_8 = (((1000000000 + var_1_12) - (var_1_13 - var_1_14)) - var_1_15);
 } else {
  var_1_8 = (var_1_13 - var_1_15);
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 536870911);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 536870911);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 536870911);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 16383);
 assume_abort_if_not(var_1_18 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return (((((last_1_var_1_16 | last_1_var_1_8) > last_1_var_1_8) && var_1_5) ? ((var_1_5 && var_1_6) ? (var_1_1 == ((signed char) var_1_7)) : (var_1_1 == ((signed char) -25))) : (var_1_1 == ((signed char) var_1_7))) && ((-1.0f < ((var_1_9 + var_1_10) / ((((-8.0f) > (var_1_11)) ? (-8.0f) : (var_1_11))))) ? (var_1_8 == ((signed long int) (((1000000000 + var_1_12) - (var_1_13 - var_1_14)) - var_1_15))) : (var_1_8 == ((signed long int) (var_1_13 - var_1_15))))) && ((var_1_13 != 0) ? (var_1_16 == ((signed short int) (var_1_17 - (var_1_18 - 2)))) : ((var_1_11 <= (-128.0f + (- var_1_10))) ? (var_1_16 == ((signed short int) var_1_1)) : 1))
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
