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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17825_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned short int var_1_9 = 8;
unsigned long int var_1_10 = 1;
unsigned long int var_1_12 = 32;
double var_1_13 = 1.978;
double var_1_14 = 0.5;
double var_1_15 = 8.7;
signed long int var_1_16 = -5;
unsigned short int last_1_var_1_9 = 8;
signed long int last_1_var_1_16 = -5;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = 256u;
 unsigned long int stepLocal_0 = var_1_10;
 if (stepLocal_1 <= (((((last_1_var_1_16 * var_1_10)) > (last_1_var_1_9)) ? ((last_1_var_1_16 * var_1_10)) : (last_1_var_1_9)))) {
  if (last_1_var_1_16 < stepLocal_0) {
   var_1_9 = last_1_var_1_16;
  } else {
   var_1_9 = last_1_var_1_9;
  }
 }
 var_1_16 = var_1_9;
 if (((((3.625) < 0 ) ? -(3.625) : (3.625))) > (((((var_1_13 / var_1_14)) > (var_1_15)) ? ((var_1_13 / var_1_14)) : (var_1_15)))) {
  var_1_12 = var_1_16;
 }
 if (! var_1_2) {
  if (! var_1_2) {
   var_1_1 = (((var_1_16 + var_1_12) > (var_1_16 * var_1_12)) || var_1_7);
  } else {
   var_1_1 = var_1_8;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967295);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 assume_abort_if_not(var_1_14 != 0.0F);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return ((((! var_1_2) ? ((! var_1_2) ? (var_1_1 == ((unsigned char) (((var_1_16 + var_1_12) > (var_1_16 * var_1_12)) || var_1_7))) : (var_1_1 == ((unsigned char) var_1_8))) : 1) && ((256u <= (((((last_1_var_1_16 * var_1_10)) > (last_1_var_1_9)) ? ((last_1_var_1_16 * var_1_10)) : (last_1_var_1_9)))) ? ((last_1_var_1_16 < var_1_10) ? (var_1_9 == ((unsigned short int) last_1_var_1_16)) : (var_1_9 == ((unsigned short int) last_1_var_1_9))) : 1)) && ((((((3.625) < 0 ) ? -(3.625) : (3.625))) > (((((var_1_13 / var_1_14)) > (var_1_15)) ? ((var_1_13 / var_1_14)) : (var_1_15)))) ? (var_1_12 == ((unsigned long int) var_1_16)) : 1)) && (var_1_16 == ((signed long int) var_1_9))
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
