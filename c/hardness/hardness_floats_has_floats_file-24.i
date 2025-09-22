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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
unsigned char var_1_2 = 0;
signed long int var_1_5 = -64;
signed long int var_1_6 = 100;
signed char var_1_7 = -1;
signed char var_1_8 = 32;
signed long int var_1_9 = -50;
signed char var_1_10 = -8;
double var_1_11 = -10.0;
signed char var_1_12 = 0;
signed char var_1_13 = 0;
double var_1_14 = 64.0;
double var_1_15 = 256.0;
signed char var_1_16 = 4;
signed char var_1_17 = 0;
signed char var_1_18 = 4;
double last_1_var_1_11 = -10.0;
void initially(void) {
}
void step(void) {
 if (var_1_2 || (16.0f < last_1_var_1_11)) {
  if (last_1_var_1_11 >= (- last_1_var_1_11)) {
   if (((var_1_5 ^ var_1_6) + (var_1_7 * var_1_8)) <= var_1_9) {
    var_1_1 = var_1_10;
   }
  }
 } else {
  var_1_1 = 8;
 }
 signed long int stepLocal_2 = var_1_9;
 if (var_1_12 == stepLocal_2) {
  var_1_16 = (var_1_17 - var_1_18);
 } else {
  var_1_16 = ((((var_1_17) < (var_1_10)) ? (var_1_17) : (var_1_10)));
 }
 signed char stepLocal_1 = var_1_16;
 signed char stepLocal_0 = var_1_10;
 if (stepLocal_1 == (var_1_12 - var_1_13)) {
  if (var_1_2) {
   if (var_1_1 < stepLocal_0) {
    var_1_11 = (var_1_14 - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))));
   } else {
    var_1_11 = var_1_15;
   }
  }
 } else {
  var_1_11 = var_1_15;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483647);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -128);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 return (((var_1_2 || (16.0f < last_1_var_1_11)) ? ((last_1_var_1_11 >= (- last_1_var_1_11)) ? ((((var_1_5 ^ var_1_6) + (var_1_7 * var_1_8)) <= var_1_9) ? (var_1_1 == ((signed char) var_1_10)) : 1) : 1) : (var_1_1 == ((signed char) 8))) && ((var_1_16 == (var_1_12 - var_1_13)) ? (var_1_2 ? ((var_1_1 < var_1_10) ? (var_1_11 == ((double) (var_1_14 - ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) : (var_1_11 == ((double) var_1_15))) : 1) : (var_1_11 == ((double) var_1_15)))) && ((var_1_12 == var_1_9) ? (var_1_16 == ((signed char) (var_1_17 - var_1_18))) : (var_1_16 == ((signed char) ((((var_1_17) < (var_1_10)) ? (var_1_17) : (var_1_10))))))
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
