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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 128;
unsigned char var_1_2 = 4;
unsigned char var_1_3 = 10;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 10;
unsigned long int var_1_7 = 8;
unsigned long int var_1_8 = 2;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_2;
 unsigned char stepLocal_0 = var_1_3;
 if (stepLocal_1 > (var_1_5 - (4 + var_1_6))) {
  var_1_1 = (((((var_1_7 + var_1_2)) < (var_1_6)) ? ((var_1_7 + var_1_2)) : (var_1_6)));
 } else {
  if (var_1_7 > stepLocal_0) {
   var_1_1 = var_1_8;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 127);
 assume_abort_if_not(var_1_5 <= 255);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (var_1_2 > (var_1_5 - (4 + var_1_6))) ? (var_1_1 == ((unsigned long int) (((((var_1_7 + var_1_2)) < (var_1_6)) ? ((var_1_7 + var_1_2)) : (var_1_6))))) : ((var_1_7 > var_1_3) ? (var_1_1 == ((unsigned long int) var_1_8)) : 1)
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
