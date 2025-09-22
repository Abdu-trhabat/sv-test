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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch34Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 16.6;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
double var_1_4 = 10.6;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
double var_1_9 = 255.5;
double var_1_10 = 4.7;
unsigned char var_1_11 = 0;
signed short int var_1_12 = 32;
signed short int var_1_13 = 0;
unsigned short int var_1_14 = 5;
unsigned short int var_1_15 = 2;
signed long int var_1_16 = -50;
unsigned char var_1_17 = 0;
void initially(void) {
}
void step(void) {
 var_1_12 = ((((128) > (var_1_13)) ? (128) : (var_1_13)));
 var_1_14 = var_1_15;
 var_1_16 = var_1_13;
 var_1_17 = var_1_11;
 if (var_1_3 || (256 >= (var_1_16 + 4))) {
  var_1_5 = ((var_1_2 || var_1_3) || var_1_7);
 } else {
  var_1_5 = (! (! 0));
 }
 if (var_1_5) {
  if (var_1_17) {
   var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 }
 if (var_1_5) {
  if (var_1_4 != (var_1_1 * (var_1_9 * var_1_10))) {
   var_1_8 = var_1_11;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((var_1_5 ? (var_1_17 ? (var_1_1 == ((double) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : 1) : 1) && ((var_1_3 || (256 >= (var_1_16 + 4))) ? (var_1_5 == ((unsigned char) ((var_1_2 || var_1_3) || var_1_7))) : (var_1_5 == ((unsigned char) (! (! 0)))))) && (var_1_5 ? ((var_1_4 != (var_1_1 * (var_1_9 * var_1_10))) ? (var_1_8 == ((unsigned char) var_1_11)) : 1) : 1)) && (var_1_12 == ((signed short int) ((((128) > (var_1_13)) ? (128) : (var_1_13)))))) && (var_1_14 == ((unsigned short int) var_1_15))) && (var_1_16 == ((signed long int) var_1_13))) && (var_1_17 == ((unsigned char) var_1_11))
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
