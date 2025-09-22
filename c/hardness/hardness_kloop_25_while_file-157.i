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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15725_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 200;
signed long int var_1_2 = 1;
signed long int var_1_3 = 8;
signed long int var_1_5 = -16;
unsigned char var_1_6 = 0;
signed long int var_1_7 = 8;
signed long int var_1_8 = -500;
signed long int var_1_9 = -10;
signed long int var_1_10 = 16;
signed long int var_1_11 = 0;
signed long int var_1_12 = 1;
unsigned long int var_1_13 = 4;
signed long int var_1_14 = -64;
signed long int last_1_var_1_10 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = ((((var_1_2 - var_1_3)) > (last_1_var_1_10)) ? ((var_1_2 - var_1_3)) : (last_1_var_1_10));
 signed long int stepLocal_0 = var_1_3;
 if (128 <= stepLocal_1) {
  if (stepLocal_0 <= (var_1_2 / var_1_5)) {
   if (var_1_6) {
    var_1_1 = ((((var_1_7) > (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))));
   } else {
    var_1_1 = var_1_8;
   }
  } else {
   var_1_1 = var_1_8;
  }
 } else {
  var_1_1 = var_1_7;
 }
 if (var_1_6) {
  if (var_1_1 <= ((var_1_9 * var_1_3) / ((((var_1_5) > (var_1_14)) ? (var_1_5) : (var_1_14))))) {
   var_1_13 = var_1_12;
  } else {
   var_1_13 = 16u;
  }
 } else {
  var_1_13 = var_1_12;
 }
 signed long int stepLocal_2 = var_1_7;
 if (stepLocal_2 > var_1_13) {
  var_1_10 = (var_1_11 - var_1_12);
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483647);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483647);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483646);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483648);
 assume_abort_if_not(var_1_14 <= 2147483647);
 assume_abort_if_not(var_1_14 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((128 <= (((((var_1_2 - var_1_3)) > (last_1_var_1_10)) ? ((var_1_2 - var_1_3)) : (last_1_var_1_10)))) ? ((var_1_3 <= (var_1_2 / var_1_5)) ? (var_1_6 ? (var_1_1 == ((signed long int) ((((var_1_7) > (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9))))) ? (var_1_7) : (((((var_1_8) < (var_1_9)) ? (var_1_8) : (var_1_9)))))))) : (var_1_1 == ((signed long int) var_1_8))) : (var_1_1 == ((signed long int) var_1_8))) : (var_1_1 == ((signed long int) var_1_7))) && ((var_1_7 > var_1_13) ? (var_1_10 == ((signed long int) (var_1_11 - var_1_12))) : 1)) && (var_1_6 ? ((var_1_1 <= ((var_1_9 * var_1_3) / ((((var_1_5) > (var_1_14)) ? (var_1_5) : (var_1_14))))) ? (var_1_13 == ((unsigned long int) var_1_12)) : (var_1_13 == ((unsigned long int) 16u))) : (var_1_13 == ((unsigned long int) var_1_12)))
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
