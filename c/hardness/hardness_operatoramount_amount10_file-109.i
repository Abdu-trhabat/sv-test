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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 7.5;
signed short int var_1_2 = 64;
signed short int var_1_3 = 128;
signed short int var_1_4 = 64;
double var_1_5 = 10.75;
double var_1_6 = 4.25;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = var_1_3 % ((((-64) < (var_1_4)) ? (-64) : (var_1_4)));
 if (var_1_2 < stepLocal_0) {
  if (var_1_3 <= stepLocal_1) {
   var_1_1 = ((((31.4) > (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (31.4) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))));
  } else {
   var_1_1 = var_1_5;
  }
 } else {
  var_1_1 = var_1_5;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (var_1_2 < (var_1_3 % ((((-64) < (var_1_4)) ? (-64) : (var_1_4))))) ? ((var_1_3 <= var_1_4) ? (var_1_1 == ((double) ((((31.4) > (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))))) ? (31.4) : (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6)))))))) : (var_1_1 == ((double) var_1_5))) : (var_1_1 == ((double) var_1_5))
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
