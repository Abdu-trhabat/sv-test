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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 100000000000.925;
unsigned long int var_1_2 = 0;
unsigned long int var_1_3 = 2;
float var_1_4 = 100000000.6;
float var_1_5 = 99.8;
float var_1_6 = 50.25;
signed char var_1_7 = 1;
signed char var_1_8 = 10;
double var_1_9 = 100000000.5;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = 10u >> (var_1_2 + 5u);
 if (stepLocal_0 == var_1_3) {
  var_1_1 = (var_1_4 + ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6))));
 }
 var_1_7 = var_1_2;
 var_1_8 = var_1_2;
 var_1_9 = var_1_5;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 16);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((10u >> (var_1_2 + 5u)) == var_1_3) ? (var_1_1 == ((float) (var_1_4 + ((((var_1_5) < (var_1_6)) ? (var_1_5) : (var_1_6)))))) : 1) && (var_1_7 == ((signed char) var_1_2))) && (var_1_8 == ((signed char) var_1_2))) && (var_1_9 == ((double) var_1_5))
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
