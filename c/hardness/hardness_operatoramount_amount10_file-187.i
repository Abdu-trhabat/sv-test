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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 2.325;
signed char var_1_2 = -8;
signed char var_1_3 = 8;
signed long int var_1_4 = -1;
double var_1_5 = 16.75;
double var_1_6 = 16.8;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = (((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3));
 signed long int stepLocal_0 = var_1_4;
 if (stepLocal_1 < var_1_4) {
  var_1_1 = (var_1_5 - 15.5);
 } else {
  if (var_1_3 <= stepLocal_0) {
   var_1_1 = (var_1_6 + 127.25);
  }
 }
 var_1_7 = var_1_8;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2) < (var_1_3)) ? (var_1_2) : (var_1_3))) < var_1_4) ? (var_1_1 == ((double) (var_1_5 - 15.5))) : ((var_1_3 <= var_1_4) ? (var_1_1 == ((double) (var_1_6 + 127.25))) : 1)) && (var_1_7 == ((unsigned char) var_1_8))
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
