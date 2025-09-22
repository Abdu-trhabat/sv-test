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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2725_while.c", 13, "reach_error"); }
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
signed long int var_1_3 = 5;
signed long int var_1_4 = 0;
signed long int var_1_5 = 64;
signed long int var_1_6 = 25;
signed long int var_1_7 = 1223692151;
signed long int var_1_8 = 1524007455;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 16;
signed long int var_1_13 = -128;
unsigned char var_1_14 = 8;
signed long int last_1_var_1_1 = 0;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = 32;
 if (stepLocal_0 >= last_1_var_1_1) {
  var_1_1 = (var_1_3 + (((((var_1_4 - var_1_5)) > (var_1_6)) ? ((var_1_4 - var_1_5)) : (var_1_6))));
 } else {
  var_1_1 = ((var_1_7 - var_1_5) - (var_1_8 - var_1_4));
 }
 signed long int stepLocal_1 = var_1_3;
 if (stepLocal_1 < var_1_5) {
  var_1_9 = (var_1_10 - 1);
 } else {
  var_1_9 = ((var_1_11 + 64) - var_1_12);
 }
 signed long int stepLocal_3 = var_1_3 + 4;
 signed long int stepLocal_2 = var_1_1;
 if (stepLocal_3 < var_1_1) {
  if (((var_1_8 * 128) / var_1_14) != stepLocal_2) {
   var_1_13 = -100000;
  } else {
   var_1_13 = var_1_12;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1073741823);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1073741823);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 1073741822);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 1073741823);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 127);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 63);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 255);
 assume_abort_if_not(var_1_14 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return (((32 >= last_1_var_1_1) ? (var_1_1 == ((signed long int) (var_1_3 + (((((var_1_4 - var_1_5)) > (var_1_6)) ? ((var_1_4 - var_1_5)) : (var_1_6)))))) : (var_1_1 == ((signed long int) ((var_1_7 - var_1_5) - (var_1_8 - var_1_4))))) && ((var_1_3 < var_1_5) ? (var_1_9 == ((unsigned char) (var_1_10 - 1))) : (var_1_9 == ((unsigned char) ((var_1_11 + 64) - var_1_12))))) && (((var_1_3 + 4) < var_1_1) ? ((((var_1_8 * 128) / var_1_14) != var_1_1) ? (var_1_13 == ((signed long int) -100000)) : (var_1_13 == ((signed long int) var_1_12))) : 1)
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
