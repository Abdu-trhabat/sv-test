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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2025_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.6;
unsigned char var_1_2 = 0;
float var_1_3 = 0.0;
float var_1_4 = 2.95;
float var_1_5 = 8.5;
float var_1_6 = 999999999999.4;
double var_1_7 = 10.2;
double var_1_8 = 32.7;
double var_1_9 = 32.75;
double last_1_var_1_8 = 32.7;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_1 = ((var_1_3 - var_1_4) - var_1_5);
 } else {
  var_1_1 = (var_1_4 + var_1_6);
 }
 if (var_1_2) {
  var_1_7 = ((((((var_1_3 - 255.719)) < (var_1_5)) ? ((var_1_3 - 255.719)) : (var_1_5))) - 2.3);
 }
 if (var_1_2) {
  if (var_1_7 >= ((((last_1_var_1_8) > (var_1_6)) ? (last_1_var_1_8) : (var_1_6)))) {
   var_1_8 = (var_1_5 - var_1_3);
  } else {
   var_1_8 = var_1_4;
  }
 } else {
  if (var_1_7 <= var_1_5) {
   var_1_8 = var_1_6;
  }
 }
 if (var_1_4 != (var_1_3 - var_1_5)) {
  var_1_9 = var_1_6;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 4611686.018427383000e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return (((var_1_2 ? (var_1_1 == ((float) ((var_1_3 - var_1_4) - var_1_5))) : (var_1_1 == ((float) (var_1_4 + var_1_6)))) && (var_1_2 ? (var_1_7 == ((double) ((((((var_1_3 - 255.719)) < (var_1_5)) ? ((var_1_3 - 255.719)) : (var_1_5))) - 2.3))) : 1)) && (var_1_2 ? ((var_1_7 >= ((((last_1_var_1_8) > (var_1_6)) ? (last_1_var_1_8) : (var_1_6)))) ? (var_1_8 == ((double) (var_1_5 - var_1_3))) : (var_1_8 == ((double) var_1_4))) : ((var_1_7 <= var_1_5) ? (var_1_8 == ((double) var_1_6)) : 1))) && ((var_1_4 != (var_1_3 - var_1_5)) ? (var_1_9 == ((double) var_1_6)) : 1)
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
