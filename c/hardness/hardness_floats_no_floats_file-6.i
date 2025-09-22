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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 0;
unsigned short int var_1_4 = 32;
unsigned short int var_1_6 = 10;
signed char var_1_7 = 2;
signed long int var_1_8 = 1;
signed long int var_1_9 = 2;
unsigned long int var_1_10 = 32;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
signed long int var_1_15 = -8;
signed long int var_1_16 = -16;
void initially(void) {
}
void step(void) {
 var_1_15 = var_1_16;
 if ((- var_1_15) != var_1_15) {
  var_1_10 = (1000000u + 32u);
 }
 unsigned char stepLocal_2 = var_1_14;
 if (stepLocal_2 && (var_1_15 <= 10)) {
  var_1_13 = (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + var_1_7);
 }
 unsigned short int stepLocal_1 = var_1_13;
 unsigned long int stepLocal_0 = var_1_10;
 if ((((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13))) / var_1_4) > stepLocal_0) {
  if (var_1_10 == stepLocal_1) {
   var_1_1 = 1000000000u;
  } else {
   var_1_1 = 128u;
  }
 }
 if ((var_1_7 >> (var_1_8 + var_1_9)) >= (((((var_1_1 + var_1_10)) > (var_1_13)) ? ((var_1_1 + var_1_10)) : (var_1_13)))) {
  var_1_6 = var_1_8;
 } else {
  if (var_1_4 < 64) {
   var_1_6 = var_1_7;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 assume_abort_if_not(var_1_4 != 0);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 3);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 3);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((((var_1_10) > (var_1_13)) ? (var_1_10) : (var_1_13))) / var_1_4) > var_1_10) ? ((var_1_10 == var_1_13) ? (var_1_1 == ((unsigned long int) 1000000000u)) : (var_1_1 == ((unsigned long int) 128u))) : 1) && (((var_1_7 >> (var_1_8 + var_1_9)) >= (((((var_1_1 + var_1_10)) > (var_1_13)) ? ((var_1_1 + var_1_10)) : (var_1_13)))) ? (var_1_6 == ((unsigned short int) var_1_8)) : ((var_1_4 < 64) ? (var_1_6 == ((unsigned short int) var_1_7)) : 1))) && (((- var_1_15) != var_1_15) ? (var_1_10 == ((unsigned long int) (1000000u + 32u))) : 1)) && ((var_1_14 && (var_1_15 <= 10)) ? (var_1_13 == ((unsigned short int) (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))) + var_1_7))) : 1)) && (var_1_15 == ((signed long int) var_1_16))
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
