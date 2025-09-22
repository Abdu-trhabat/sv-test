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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Amount10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -50;
signed long int var_1_2 = 25;
signed long int var_1_3 = 256;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 100000;
signed long int var_1_6 = 1000;
signed long int var_1_7 = 0;
unsigned short int var_1_8 = 50;
unsigned char var_1_9 = 0;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 + var_1_3);
 signed long int stepLocal_1 = var_1_2;
 signed long int stepLocal_0 = var_1_3;
 if (stepLocal_1 <= ((var_1_5 + var_1_6) - var_1_7)) {
  if ((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) / var_1_8) <= stepLocal_0) {
   var_1_4 = var_1_9;
  } else {
   var_1_4 = 0;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1073741823);
 assume_abort_if_not(var_1_2 <= 1073741823);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1073741823);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741824);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65535);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (var_1_1 == ((signed long int) (var_1_2 + var_1_3))) && ((var_1_2 <= ((var_1_5 + var_1_6) - var_1_7)) ? (((((((var_1_6) > (var_1_5)) ? (var_1_6) : (var_1_5))) / var_1_8) <= var_1_3) ? (var_1_4 == ((unsigned char) var_1_9)) : (var_1_4 == ((unsigned char) 0))) : 1)
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
