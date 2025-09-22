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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.19999999999999996;
unsigned long int var_1_2 = 1000;
unsigned long int var_1_3 = 8;
unsigned long int var_1_4 = 25;
unsigned short int var_1_5 = 8;
float var_1_6 = 5.525;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_2 = var_1_2;
 unsigned long int stepLocal_1 = (((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2));
 unsigned long int stepLocal_0 = var_1_4 + 8u;
 if (stepLocal_2 > (var_1_3 / var_1_4)) {
  if (var_1_5 < stepLocal_1) {
   if (var_1_3 >= stepLocal_0) {
    var_1_1 = var_1_6;
   } else {
    var_1_1 = 2.6f;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (var_1_2 > (var_1_3 / var_1_4)) ? ((var_1_5 < ((((var_1_3) < (var_1_2)) ? (var_1_3) : (var_1_2)))) ? ((var_1_3 >= (var_1_4 + 8u)) ? (var_1_1 == ((float) var_1_6)) : (var_1_1 == ((float) 2.6f))) : 1) : 1
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
