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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13625_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned long int var_1_4 = 10;
unsigned long int var_1_5 = 10;
unsigned long int var_1_6 = 1970850814;
unsigned long int var_1_7 = 1817774521;
unsigned long int var_1_8 = 4250842589;
unsigned char var_1_9 = 0;
signed long int var_1_10 = 32;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 32;
signed long int var_1_13 = 10000000;
float var_1_14 = 8.875;
signed char var_1_15 = -32;
signed char var_1_16 = -25;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_4 <= var_1_5;
 if (var_1_2) {
  if (var_1_3) {
   var_1_1 = (var_1_4 + var_1_5);
  } else {
   var_1_1 = ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_5);
  }
 } else {
  if (stepLocal_0 && var_1_9) {
   var_1_1 = var_1_6;
  }
 }
 if ((((((var_1_11 - var_1_12)) > (var_1_6)) ? ((var_1_11 - var_1_12)) : (var_1_6))) <= ((((var_1_8) < (((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))))) ? (var_1_8) : (((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))))))) {
  if (var_1_12 <= var_1_1) {
   var_1_10 = var_1_12;
  }
 } else {
  var_1_10 = var_1_12;
 }
 var_1_13 = var_1_12;
 var_1_14 = 10.5f;
 var_1_15 = var_1_16;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 1073741823);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 1073741824);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 2147483647);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 127);
 assume_abort_if_not(var_1_11 <= 255);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 ? (var_1_3 ? (var_1_1 == ((unsigned long int) (var_1_4 + var_1_5))) : (var_1_1 == ((unsigned long int) ((((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))) - var_1_5)))) : (((var_1_4 <= var_1_5) && var_1_9) ? (var_1_1 == ((unsigned long int) var_1_6)) : 1)) && (((((((var_1_11 - var_1_12)) > (var_1_6)) ? ((var_1_11 - var_1_12)) : (var_1_6))) <= ((((var_1_8) < (((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))))) ? (var_1_8) : (((((var_1_1) > (var_1_5)) ? (var_1_1) : (var_1_5))))))) ? ((var_1_12 <= var_1_1) ? (var_1_10 == ((signed long int) var_1_12)) : 1) : (var_1_10 == ((signed long int) var_1_12)))) && (var_1_13 == ((signed long int) var_1_12))) && (var_1_14 == ((float) 10.5f))) && (var_1_15 == ((signed char) var_1_16))
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
