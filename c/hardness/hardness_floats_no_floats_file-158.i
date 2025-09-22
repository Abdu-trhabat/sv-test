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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 64;
unsigned char var_1_3 = 50;
signed long int var_1_4 = -128;
signed long int var_1_5 = 1;
signed long int var_1_6 = -256;
unsigned char var_1_7 = 1;
signed long int var_1_8 = 10;
signed long int var_1_9 = 256;
unsigned short int var_1_10 = 16;
unsigned long int var_1_11 = 64;
unsigned short int var_1_12 = 60982;
signed long int last_1_var_1_5 = 1;
void initially(void) {
}
void step(void) {
 if (last_1_var_1_5 >= (-100000 / -1)) {
  var_1_1 = var_1_3;
 } else {
  if ((var_1_3 + 100) > var_1_4) {
   var_1_1 = 32;
  }
 }
 if ((var_1_6 % var_1_11) != (var_1_4 * var_1_1)) {
  if ((((((var_1_12) > (47941)) ? (var_1_12) : (47941))) - var_1_3) < var_1_1) {
   var_1_10 = ((((var_1_3) > ((4 + var_1_1))) ? (var_1_3) : ((4 + var_1_1))));
  } else {
   var_1_10 = var_1_3;
  }
 } else {
  var_1_10 = var_1_3;
 }
 unsigned char stepLocal_1 = var_1_7;
 signed long int stepLocal_0 = ((((4) < 0 ) ? -(4) : (4))) % var_1_6;
 if (var_1_4 <= stepLocal_0) {
  if (stepLocal_1 && (var_1_6 > var_1_10)) {
   var_1_5 = var_1_8;
  } else {
   var_1_5 = var_1_9;
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967295);
 assume_abort_if_not(var_1_11 != 0);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 32767);
 assume_abort_if_not(var_1_12 <= 65535);
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
}
int property(void) {
 return (((last_1_var_1_5 >= (-100000 / -1)) ? (var_1_1 == ((unsigned char) var_1_3)) : (((var_1_3 + 100) > var_1_4) ? (var_1_1 == ((unsigned char) 32)) : 1)) && ((var_1_4 <= (((((4) < 0 ) ? -(4) : (4))) % var_1_6)) ? ((var_1_7 && (var_1_6 > var_1_10)) ? (var_1_5 == ((signed long int) var_1_8)) : (var_1_5 == ((signed long int) var_1_9))) : 1)) && (((var_1_6 % var_1_11) != (var_1_4 * var_1_1)) ? (((((((var_1_12) > (47941)) ? (var_1_12) : (47941))) - var_1_3) < var_1_1) ? (var_1_10 == ((unsigned short int) ((((var_1_3) > ((4 + var_1_1))) ? (var_1_3) : ((4 + var_1_1)))))) : (var_1_10 == ((unsigned short int) var_1_3))) : (var_1_10 == ((unsigned short int) var_1_3)))
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
