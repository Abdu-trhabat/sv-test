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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142Amount10.c", 13, "reach_error"); }
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
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 1;
unsigned long int var_1_5 = 10;
unsigned char var_1_6 = 1;
unsigned long int var_1_7 = 2;
unsigned char var_1_8 = 1;
unsigned long int last_1_var_1_5 = 10;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = last_1_var_1_5;
 if (0 > stepLocal_0) {
  var_1_1 = (var_1_3 - var_1_4);
 }
 if (var_1_6) {
  var_1_5 = ((((((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_7)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_7)))) > (var_1_1)) ? (((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_7)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_7)))) : (var_1_1)));
 } else {
  if (var_1_8) {
   var_1_5 = var_1_7;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 127);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
}
int property(void) {
 return ((0 > last_1_var_1_5) ? (var_1_1 == ((unsigned char) (var_1_3 - var_1_4))) : 1) && (var_1_6 ? (var_1_5 == ((unsigned long int) ((((((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_7)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_7)))) > (var_1_1)) ? (((((((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) < (var_1_7)) ? (((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)))) : (var_1_7)))) : (var_1_1))))) : (var_1_8 ? (var_1_5 == ((unsigned long int) var_1_7)) : 1))
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
