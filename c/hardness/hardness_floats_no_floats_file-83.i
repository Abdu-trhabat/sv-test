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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned char var_1_2 = 0;
unsigned short int var_1_3 = 25;
unsigned char var_1_4 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 128;
signed long int var_1_7 = 2;
signed long int var_1_8 = -2;
signed long int var_1_9 = 0;
signed long int var_1_10 = -50;
signed long int var_1_11 = -256;
signed long int var_1_12 = 256;
signed long int var_1_13 = 64;
signed long int var_1_14 = 10;
signed long int var_1_15 = 10;
signed long int var_1_16 = 200;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_3 / var_1_4;
 if (var_1_2) {
  var_1_1 = (((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) < 0 ) ? -((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) : ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))));
 } else {
  if (stepLocal_0 >= (((((var_1_5 * var_1_6)) < ((~ var_1_7))) ? ((var_1_5 * var_1_6)) : ((~ var_1_7))))) {
   var_1_1 = var_1_4;
  } else {
   var_1_1 = var_1_3;
  }
 }
 if ((var_1_9 - 8) != (- (var_1_10 + var_1_11))) {
  var_1_8 = ((((var_1_12) < (((var_1_13 - var_1_14) + var_1_15))) ? (var_1_12) : (((var_1_13 - var_1_14) + var_1_15))));
 } else {
  var_1_8 = var_1_13;
 }
 signed long int stepLocal_2 = var_1_3 - var_1_7;
 signed long int stepLocal_1 = var_1_7;
 if ((var_1_4 + var_1_5) > stepLocal_2) {
  var_1_16 = ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)));
 } else {
  if (var_1_5 >= stepLocal_1) {
   var_1_16 = var_1_12;
  } else {
   var_1_16 = var_1_13;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((var_1_2 ? (var_1_1 == ((unsigned short int) (((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) < 0 ) ? -((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) : ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))) : (((var_1_3 / var_1_4) >= (((((var_1_5 * var_1_6)) < ((~ var_1_7))) ? ((var_1_5 * var_1_6)) : ((~ var_1_7))))) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_1 == ((unsigned short int) var_1_3)))) && (((var_1_9 - 8) != (- (var_1_10 + var_1_11))) ? (var_1_8 == ((signed long int) ((((var_1_12) < (((var_1_13 - var_1_14) + var_1_15))) ? (var_1_12) : (((var_1_13 - var_1_14) + var_1_15)))))) : (var_1_8 == ((signed long int) var_1_13)))) && (((var_1_4 + var_1_5) > (var_1_3 - var_1_7)) ? (var_1_16 == ((signed long int) ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : ((var_1_5 >= var_1_7) ? (var_1_16 == ((signed long int) var_1_12)) : (var_1_16 == ((signed long int) var_1_13))))
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
