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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch325_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -64;
signed long int var_1_7 = -5;
signed long int var_1_8 = 500;
signed long int var_1_9 = -5;
signed long int var_1_10 = -100;
unsigned char var_1_11 = 1;
double var_1_12 = 127.5;
double var_1_13 = 7.25;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
void initially(void) {
}
void step(void) {
 var_1_12 = var_1_13;
 var_1_14 = var_1_15;
 if (! var_1_14) {
  var_1_6 = (var_1_7 + var_1_8);
 } else {
  var_1_6 = ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_10) + var_1_7);
 }
 signed long int stepLocal_2 = var_1_7;
 signed long int stepLocal_1 = var_1_9;
 if (var_1_8 <= stepLocal_2) {
  if (var_1_10 >= stepLocal_1) {
   var_1_11 = (! var_1_5);
  } else {
   var_1_11 = (var_1_14 || (! var_1_5));
  }
 }
 unsigned char stepLocal_0 = var_1_14;
 if (! var_1_11) {
  if (var_1_11 && stepLocal_0) {
   var_1_1 = (var_1_4 || var_1_5);
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -1073741823);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -1073741823);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -536870912);
 assume_abort_if_not(var_1_9 <= 536870912);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -536870911);
 assume_abort_if_not(var_1_10 <= 536870911);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((! var_1_11) ? ((var_1_11 && var_1_14) ? (var_1_1 == ((unsigned char) (var_1_4 || var_1_5))) : 1) : 1) && ((! var_1_14) ? (var_1_6 == ((signed long int) (var_1_7 + var_1_8))) : (var_1_6 == ((signed long int) ((((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) + var_1_10) + var_1_7))))) && ((var_1_8 <= var_1_7) ? ((var_1_10 >= var_1_9) ? (var_1_11 == ((unsigned char) (! var_1_5))) : (var_1_11 == ((unsigned char) (var_1_14 || (! var_1_5))))) : 1)) && (var_1_12 == ((double) var_1_13))) && (var_1_14 == ((unsigned char) var_1_15))
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
