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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 0;
signed long int var_1_3 = 2;
signed long int var_1_4 = 500;
signed long int var_1_5 = 500;
signed long int var_1_6 = 256;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned long int var_1_10 = 256;
unsigned long int var_1_11 = 2427433644;
signed long int var_1_12 = 100000;
signed long int var_1_13 = -50;
signed long int var_1_14 = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = var_1_3;
 if (var_1_8) {
  if (stepLocal_2 < var_1_4) {
   var_1_7 = (! (! (! var_1_9)));
  }
 } else {
  var_1_7 = (! (! 0));
 }
 var_1_12 = 128;
 var_1_13 = var_1_14;
 signed long int stepLocal_1 = var_1_3;
 signed long int stepLocal_0 = var_1_12;
 if (stepLocal_0 > (var_1_3 - var_1_4)) {
  if (var_1_12 >= stepLocal_1) {
   var_1_1 = (var_1_5 - var_1_6);
  } else {
   var_1_1 = var_1_6;
  }
 }
 signed long int stepLocal_3 = 256;
 if (! var_1_7) {
  if (! var_1_7) {
   var_1_10 = (var_1_11 - 16u);
  }
 } else {
  if (stepLocal_3 <= (var_1_4 + var_1_12)) {
   var_1_10 = var_1_4;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483647);
 assume_abort_if_not(var_1_14 <= 2147483646);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_12 > (var_1_3 - var_1_4)) ? ((var_1_12 >= var_1_3) ? (var_1_1 == ((signed long int) (var_1_5 - var_1_6))) : (var_1_1 == ((signed long int) var_1_6))) : 1) && (var_1_8 ? ((var_1_3 < var_1_4) ? (var_1_7 == ((unsigned char) (! (! (! var_1_9))))) : 1) : (var_1_7 == ((unsigned char) (! (! 0)))))) && ((! var_1_7) ? ((! var_1_7) ? (var_1_10 == ((unsigned long int) (var_1_11 - 16u))) : 1) : ((256 <= (var_1_4 + var_1_12)) ? (var_1_10 == ((unsigned long int) var_1_4)) : 1))) && (var_1_12 == ((signed long int) 128))) && (var_1_13 == ((signed long int) var_1_14))
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
