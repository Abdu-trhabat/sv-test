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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 4;
signed char var_1_2 = 32;
signed char var_1_3 = 50;
signed long int var_1_4 = 4;
signed long int var_1_5 = 0;
unsigned short int var_1_6 = 128;
signed long int var_1_7 = 25;
signed long int var_1_8 = -256;
signed long int var_1_9 = 16;
unsigned short int var_1_10 = 18309;
unsigned short int var_1_11 = 5;
signed char var_1_12 = 50;
unsigned short int var_1_13 = 5;
signed char var_1_14 = -32;
signed char var_1_15 = -10;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
void initially(void) {
}
void step(void) {
 var_1_1 = (var_1_2 - var_1_3);
 if (((var_1_3 >> 2) * var_1_1) <= (var_1_2 / 1000000)) {
  var_1_4 = (5 - (var_1_3 + var_1_5));
 } else {
  var_1_4 = var_1_3;
 }
 if ((128 - var_1_7) > var_1_8) {
  if ((((((var_1_8 * var_1_7)) < (var_1_9)) ? ((var_1_8 * var_1_7)) : (var_1_9))) >= -32) {
   var_1_6 = ((var_1_10 - var_1_3) + var_1_11);
  }
 }
 if (var_1_6 <= (var_1_3 / (62672 - var_1_13))) {
  var_1_12 = (((((((((var_1_14 + var_1_15)) < (var_1_3)) ? ((var_1_14 + var_1_15)) : (var_1_3)))) > (var_1_2)) ? ((((((var_1_14 + var_1_15)) < (var_1_3)) ? ((var_1_14 + var_1_15)) : (var_1_3)))) : (var_1_2)));
 }
 var_1_16 = var_1_17;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 126);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 16383);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 32766);
 assume_abort_if_not(var_1_13 != 32767);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_1 == ((signed char) (var_1_2 - var_1_3))) && ((((var_1_3 >> 2) * var_1_1) <= (var_1_2 / 1000000)) ? (var_1_4 == ((signed long int) (5 - (var_1_3 + var_1_5)))) : (var_1_4 == ((signed long int) var_1_3)))) && (((128 - var_1_7) > var_1_8) ? (((((((var_1_8 * var_1_7)) < (var_1_9)) ? ((var_1_8 * var_1_7)) : (var_1_9))) >= -32) ? (var_1_6 == ((unsigned short int) ((var_1_10 - var_1_3) + var_1_11))) : 1) : 1)) && ((var_1_6 <= (var_1_3 / (62672 - var_1_13))) ? (var_1_12 == ((signed char) (((((((((var_1_14 + var_1_15)) < (var_1_3)) ? ((var_1_14 + var_1_15)) : (var_1_3)))) > (var_1_2)) ? ((((((var_1_14 + var_1_15)) < (var_1_3)) ? ((var_1_14 + var_1_15)) : (var_1_3)))) : (var_1_2))))) : 1)) && (var_1_16 == ((unsigned char) var_1_17))
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
