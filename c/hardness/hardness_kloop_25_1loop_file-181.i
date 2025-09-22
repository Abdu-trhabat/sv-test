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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch18125_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 127.25;
unsigned short int var_1_2 = 0;
double var_1_5 = 255.1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
double var_1_10 = 0.0;
double var_1_11 = 24.6;
unsigned char var_1_12 = 1;
double var_1_13 = 0.25;
double var_1_14 = 10.75;
void initially(void) {
}
void step(void) {
 if (var_1_5 > (8.5 - (var_1_10 - var_1_11))) {
  var_1_9 = var_1_12;
 }
 if (var_1_10 != (var_1_5 / var_1_14)) {
  if (var_1_9) {
   var_1_13 = var_1_5;
  }
 }
 if (var_1_9) {
  var_1_6 = ((var_1_9 && var_1_7) || var_1_8);
 } else {
  var_1_6 = (((-1 <= var_1_2) && var_1_7) || var_1_8);
 }
 if (((var_1_2 > 25) && var_1_6) && var_1_9) {
  if (var_1_6) {
   var_1_1 = (var_1_5 + 100.5);
  }
 } else {
  var_1_1 = var_1_5;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 4611686.018427388000e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427388000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 assume_abort_if_not(var_1_14 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_2 > 25) && var_1_6) && var_1_9) ? (var_1_6 ? (var_1_1 == ((double) (var_1_5 + 100.5))) : 1) : (var_1_1 == ((double) var_1_5))) && (var_1_9 ? (var_1_6 == ((unsigned char) ((var_1_9 && var_1_7) || var_1_8))) : (var_1_6 == ((unsigned char) (((-1 <= var_1_2) && var_1_7) || var_1_8))))) && ((var_1_5 > (8.5 - (var_1_10 - var_1_11))) ? (var_1_9 == ((unsigned char) var_1_12)) : 1)) && ((var_1_10 != (var_1_5 / var_1_14)) ? (var_1_9 ? (var_1_13 == ((double) var_1_5)) : 1) : 1)
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
