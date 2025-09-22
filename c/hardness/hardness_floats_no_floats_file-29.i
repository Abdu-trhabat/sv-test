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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29no_floats.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 1;
signed short int var_1_3 = 256;
signed long int var_1_5 = 100;
signed long int var_1_6 = -1;
signed char var_1_7 = 1;
signed char var_1_8 = 1;
signed char var_1_9 = 8;
signed char var_1_10 = 100;
signed char var_1_11 = 100;
unsigned char var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 10;
unsigned char var_1_16 = 32;
signed long int var_1_17 = -32;
signed long int var_1_18 = -64;
signed long int var_1_19 = 32;
void initially(void) {
}
void step(void) {
 var_1_7 = var_1_8;
 if (var_1_2 && (! var_1_13)) {
  var_1_12 = (2 + ((var_1_14 + var_1_15) + var_1_16));
 } else {
  var_1_12 = var_1_11;
 }
 unsigned char stepLocal_0 = var_1_15;
 if (var_1_12 >= stepLocal_0) {
  var_1_17 = ((((var_1_18) > ((-256 + var_1_19))) ? (var_1_18) : ((-256 + var_1_19))));
 }
 if (var_1_2) {
  if (var_1_3 < -50) {
   if ((var_1_3 + var_1_7) > var_1_5) {
    var_1_1 = var_1_6;
   } else {
    var_1_1 = -16;
   }
  } else {
   var_1_1 = var_1_6;
  }
 }
 if (! (var_1_6 == var_1_17)) {
  var_1_9 = var_1_8;
 } else {
  var_1_9 = (((((var_1_10 - var_1_11)) > (var_1_8)) ? ((var_1_10 - var_1_11)) : (var_1_8)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -2147483648);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 ? ((var_1_3 < -50) ? (((var_1_3 + var_1_7) > var_1_5) ? (var_1_1 == ((signed long int) var_1_6)) : (var_1_1 == ((signed long int) -16))) : (var_1_1 == ((signed long int) var_1_6))) : 1) && (var_1_7 == ((signed char) var_1_8))) && ((! (var_1_6 == var_1_17)) ? (var_1_9 == ((signed char) var_1_8)) : (var_1_9 == ((signed char) (((((var_1_10 - var_1_11)) > (var_1_8)) ? ((var_1_10 - var_1_11)) : (var_1_8))))))) && ((var_1_2 && (! var_1_13)) ? (var_1_12 == ((unsigned char) (2 + ((var_1_14 + var_1_15) + var_1_16)))) : (var_1_12 == ((unsigned char) var_1_11)))) && ((var_1_12 >= var_1_15) ? (var_1_17 == ((signed long int) ((((var_1_18) > ((-256 + var_1_19))) ? (var_1_18) : ((-256 + var_1_19)))))) : 1)
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
