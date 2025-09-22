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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12025_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 256.5;
signed long int var_1_2 = 64;
unsigned char var_1_3 = 1;
double var_1_4 = 99999999999.6;
signed short int var_1_5 = -4;
signed short int var_1_6 = -2;
signed short int var_1_7 = -8;
signed short int var_1_9 = 10;
signed long int var_1_10 = -4;
unsigned char var_1_11 = 0;
signed short int last_1_var_1_9 = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = var_1_2;
 signed long int stepLocal_1 = var_1_2;
 if (var_1_3) {
  var_1_5 = ((((((((var_1_6 + -5) < 0 ) ? -(var_1_6 + -5) : (var_1_6 + -5)))) > (var_1_7)) ? (((((var_1_6 + -5) < 0 ) ? -(var_1_6 + -5) : (var_1_6 + -5)))) : (var_1_7)));
 } else {
  if ((var_1_7 * last_1_var_1_9) > stepLocal_1) {
   if (stepLocal_2 > var_1_7) {
    var_1_5 = var_1_6;
   }
  } else {
   var_1_5 = var_1_6;
  }
 }
 signed long int stepLocal_4 = var_1_5 + var_1_7;
 unsigned char stepLocal_3 = var_1_11;
 if (stepLocal_4 >= (var_1_6 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) {
  if (var_1_3 || stepLocal_3) {
   var_1_9 = var_1_6;
  } else {
   var_1_9 = var_1_7;
  }
 }
 signed long int stepLocal_0 = 10;
 if (stepLocal_0 > var_1_2) {
  if (var_1_3) {
   var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32767);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483647);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
}
int property(void) {
 return (((10 > var_1_2) ? (var_1_3 ? (var_1_1 == ((double) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : 1) : 1) && (var_1_3 ? (var_1_5 == ((signed short int) ((((((((var_1_6 + -5) < 0 ) ? -(var_1_6 + -5) : (var_1_6 + -5)))) > (var_1_7)) ? (((((var_1_6 + -5) < 0 ) ? -(var_1_6 + -5) : (var_1_6 + -5)))) : (var_1_7))))) : (((var_1_7 * last_1_var_1_9) > var_1_2) ? ((var_1_2 > var_1_7) ? (var_1_5 == ((signed short int) var_1_6)) : 1) : (var_1_5 == ((signed short int) var_1_6))))) && (((var_1_5 + var_1_7) >= (var_1_6 + ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))) ? ((var_1_3 || var_1_11) ? (var_1_9 == ((signed short int) var_1_6)) : (var_1_9 == ((signed short int) var_1_7))) : 1)
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
