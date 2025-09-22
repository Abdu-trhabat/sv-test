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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 8;
signed char var_1_3 = -16;
signed long int var_1_5 = 8;
signed char var_1_6 = 8;
signed char var_1_7 = 32;
signed char var_1_8 = -8;
float var_1_9 = 128.0;
float var_1_10 = -8.0;
float var_1_11 = 1000.0;
float var_1_12 = -10000.0;
signed short int var_1_13 = -128;
signed short int var_1_14 = 10;
signed long int var_1_15 = 50;
signed char last_1_var_1_1 = 8;
signed short int last_1_var_1_13 = -128;
void initially(void) {
}
void step(void) {
 var_1_15 = var_1_14;
 signed char stepLocal_4 = var_1_7;
 signed long int stepLocal_3 = 10;
 if (var_1_3 >= stepLocal_3) {
  if (((var_1_15 * var_1_3) * (last_1_var_1_13 + var_1_15)) > stepLocal_4) {
   var_1_13 = last_1_var_1_13;
  } else {
   var_1_13 = (((((5) > (128)) ? (5) : (128))) - var_1_14);
  }
 }
 signed short int stepLocal_1 = var_1_13;
 signed long int stepLocal_0 = var_1_5;
 if (((var_1_13 / var_1_3) + last_1_var_1_1) != stepLocal_0) {
  if (stepLocal_1 <= last_1_var_1_1) {
   var_1_1 = (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8)));
  }
 } else {
  var_1_1 = var_1_8;
 }
 signed long int stepLocal_2 = var_1_15;
 if (((((var_1_15) < ((var_1_13 / var_1_3))) ? (var_1_15) : ((var_1_13 / var_1_3)))) > stepLocal_2) {
  var_1_9 = (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12);
 } else {
  var_1_9 = var_1_10;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_13 = var_1_13;
}
int property(void) {
 return ((((((var_1_13 / var_1_3) + last_1_var_1_1) != var_1_5) ? ((var_1_13 <= last_1_var_1_1) ? (var_1_1 == ((signed char) (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))))) : 1) : (var_1_1 == ((signed char) var_1_8))) && ((((((var_1_15) < ((var_1_13 / var_1_3))) ? (var_1_15) : ((var_1_13 / var_1_3)))) > var_1_15) ? (var_1_9 == ((float) (((((var_1_10) < (var_1_11)) ? (var_1_10) : (var_1_11))) + var_1_12))) : (var_1_9 == ((float) var_1_10)))) && ((var_1_3 >= 10) ? ((((var_1_15 * var_1_3) * (last_1_var_1_13 + var_1_15)) > var_1_7) ? (var_1_13 == ((signed short int) last_1_var_1_13)) : (var_1_13 == ((signed short int) (((((5) > (128)) ? (5) : (128))) - var_1_14)))) : 1)) && (var_1_15 == ((signed long int) var_1_14))
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
