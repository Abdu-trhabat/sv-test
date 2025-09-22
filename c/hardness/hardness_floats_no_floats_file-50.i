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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed long int var_1_2 = 256;
signed long int var_1_3 = 2;
signed long int var_1_4 = 4;
signed long int var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
signed long int var_1_10 = -256;
signed long int var_1_11 = 64;
signed long int var_1_12 = 1;
signed long int var_1_13 = 16;
signed long int var_1_14 = 2;
signed long int var_1_16 = 4;
signed long int var_1_17 = 5;
signed long int var_1_18 = 0;
signed long int var_1_19 = -4;
void initially(void) {
}
void step(void) {
 if ((((((var_1_2 + var_1_3)) < ((var_1_4 / -256))) ? ((var_1_2 + var_1_3)) : ((var_1_4 / -256)))) != var_1_5) {
  var_1_1 = (var_1_6 && var_1_7);
 } else {
  var_1_1 = (var_1_8 && var_1_9);
 }
 if (var_1_2 == ((var_1_11 + var_1_12) - ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) {
  if (var_1_3 == (- var_1_4)) {
   if (var_1_1) {
    var_1_10 = var_1_12;
   }
  }
 } else {
  var_1_10 = var_1_11;
 }
 if (var_1_10 > (- var_1_12)) {
  var_1_16 = (((((var_1_17 + var_1_18)) > (var_1_11)) ? ((var_1_17 + var_1_18)) : (var_1_11)));
 } else {
  if (var_1_17 != (var_1_10 / var_1_19)) {
   var_1_16 = -50;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
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
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -2147483648);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
 assume_abort_if_not(var_1_19 != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((var_1_2 + var_1_3)) < ((var_1_4 / -256))) ? ((var_1_2 + var_1_3)) : ((var_1_4 / -256)))) != var_1_5) ? (var_1_1 == ((unsigned char) (var_1_6 && var_1_7))) : (var_1_1 == ((unsigned char) (var_1_8 && var_1_9)))) && ((var_1_2 == ((var_1_11 + var_1_12) - ((((var_1_13) < (var_1_14)) ? (var_1_13) : (var_1_14))))) ? ((var_1_3 == (- var_1_4)) ? (var_1_1 ? (var_1_10 == ((signed long int) var_1_12)) : 1) : 1) : (var_1_10 == ((signed long int) var_1_11)))) && ((var_1_10 > (- var_1_12)) ? (var_1_16 == ((signed long int) (((((var_1_17 + var_1_18)) > (var_1_11)) ? ((var_1_17 + var_1_18)) : (var_1_11))))) : ((var_1_17 != (var_1_10 / var_1_19)) ? (var_1_16 == ((signed long int) -50)) : 1))
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
