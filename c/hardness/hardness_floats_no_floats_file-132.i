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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
signed long int var_1_2 = -2;
signed long int var_1_3 = -4;
unsigned long int var_1_4 = 50;
unsigned long int var_1_5 = 16;
signed long int var_1_7 = -2;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
signed long int var_1_10 = 256;
signed long int var_1_11 = 4;
signed long int var_1_12 = 0;
signed long int var_1_13 = 25;
signed long int var_1_14 = 64;
signed long int var_1_15 = 128;
signed long int var_1_16 = 16;
signed long int var_1_17 = 2;
signed long int last_1_var_1_10 = 256;
void initially(void) {
}
void step(void) {
 if (128 <= var_1_2) {
  var_1_1 = 25;
 }
 if (var_1_1 <= var_1_4) {
  var_1_8 = var_1_9;
 }
 if (last_1_var_1_10 <= var_1_7) {
  var_1_10 = (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))) - ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14))));
 }
 if (! var_1_9) {
  if (var_1_8 && var_1_9) {
   var_1_15 = ((((var_1_14) > (((var_1_16 + var_1_17) - var_1_11))) ? (var_1_14) : (((var_1_16 + var_1_17) - var_1_11))));
  }
 } else {
  if (var_1_8) {
   var_1_15 = var_1_16;
  } else {
   var_1_15 = var_1_7;
  }
 }
 if ((var_1_1 / var_1_4) >= (((((var_1_2 % 32u)) < (var_1_5)) ? ((var_1_2 % 32u)) : (var_1_5)))) {
  if (var_1_8) {
   var_1_3 = 64;
  } else {
   var_1_3 = var_1_7;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((((128 <= var_1_2) ? (var_1_1 == ((unsigned short int) 25)) : 1) && (((var_1_1 / var_1_4) >= (((((var_1_2 % 32u)) < (var_1_5)) ? ((var_1_2 % 32u)) : (var_1_5)))) ? (var_1_8 ? (var_1_3 == ((signed long int) 64)) : (var_1_3 == ((signed long int) var_1_7))) : 1)) && ((var_1_1 <= var_1_4) ? (var_1_8 == ((unsigned char) var_1_9)) : 1)) && ((last_1_var_1_10 <= var_1_7) ? (var_1_10 == ((signed long int) (((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12))) - ((((var_1_13) > (var_1_14)) ? (var_1_13) : (var_1_14)))))) : 1)) && ((! var_1_9) ? ((var_1_8 && var_1_9) ? (var_1_15 == ((signed long int) ((((var_1_14) > (((var_1_16 + var_1_17) - var_1_11))) ? (var_1_14) : (((var_1_16 + var_1_17) - var_1_11)))))) : 1) : (var_1_8 ? (var_1_15 == ((signed long int) var_1_16)) : (var_1_15 == ((signed long int) var_1_7))))
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
