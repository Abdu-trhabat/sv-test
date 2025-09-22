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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -8;
unsigned char var_1_2 = 1;
signed char var_1_5 = 32;
signed char var_1_6 = 32;
signed char var_1_7 = 0;
unsigned char var_1_8 = 64;
unsigned long int var_1_9 = 5;
signed long int var_1_10 = -32;
void initially(void) {
}
void step(void) {
 var_1_8 = var_1_6;
 var_1_9 = var_1_6;
 var_1_10 = var_1_6;
 if (var_1_2 || (var_1_9 > var_1_10)) {
  var_1_1 = ((((var_1_5) > ((16 - (var_1_6 + var_1_7)))) ? (var_1_5) : ((16 - (var_1_6 + var_1_7)))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 || (var_1_9 > var_1_10)) ? (var_1_1 == ((signed char) ((((var_1_5) > ((16 - (var_1_6 + var_1_7)))) ? (var_1_5) : ((16 - (var_1_6 + var_1_7))))))) : 1) && (var_1_8 == ((unsigned char) var_1_6))) && (var_1_9 == ((unsigned long int) var_1_6))) && (var_1_10 == ((signed long int) var_1_6))
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
