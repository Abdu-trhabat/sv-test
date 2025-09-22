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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 8;
signed long int var_1_2 = -4;
signed long int var_1_3 = 2;
signed long int var_1_4 = 16;
signed long int var_1_5 = -16;
signed long int var_1_6 = 8;
signed long int var_1_7 = 128;
signed long int var_1_8 = 16;
signed short int var_1_9 = 2;
signed short int var_1_10 = 10;
unsigned char var_1_11 = 0;
signed short int var_1_12 = 128;
signed short int var_1_13 = 256;
signed short int var_1_14 = -10;
signed long int var_1_15 = 16;
signed char var_1_16 = -16;
signed char var_1_17 = 32;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 0;
signed short int var_1_23 = 10;
signed short int var_1_24 = 32;
void initially(void) {
}
void step(void) {
 if (-32 >= ((var_1_2 / var_1_3) ^ var_1_4)) {
  if (((var_1_4 * var_1_3) + (var_1_2 + var_1_5)) >= (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) - var_1_8)) {
   if ((- var_1_2) > (-10 * var_1_5)) {
    var_1_1 = var_1_9;
   } else {
    var_1_1 = -16;
   }
  } else {
   var_1_1 = var_1_9;
  }
 } else {
  var_1_1 = var_1_9;
 }
 if (var_1_1 <= var_1_3) {
  if (var_1_11) {
   var_1_10 = (var_1_12 - var_1_13);
  }
 }
 if ((~ var_1_7) != (var_1_4 ^ var_1_3)) {
  var_1_14 = var_1_9;
 }
 var_1_15 = ((((var_1_14) > (((((var_1_12) < ((var_1_13 - 1))) ? (var_1_12) : ((var_1_13 - 1)))))) ? (var_1_14) : (((((var_1_12) < ((var_1_13 - 1))) ? (var_1_12) : ((var_1_13 - 1)))))));
 var_1_16 = var_1_17;
 if (var_1_10 == (var_1_15 ^ var_1_4)) {
  var_1_18 = ((! (var_1_19 || var_1_20)) && var_1_21);
 }
 if (var_1_18) {
  var_1_22 = (var_1_12 - (var_1_23 + (8 + var_1_24)));
 } else {
  if (var_1_11) {
   var_1_22 = ((var_1_23 + 4) - var_1_24);
  } else {
   var_1_22 = var_1_23;
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
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 8191);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((-32 >= ((var_1_2 / var_1_3) ^ var_1_4)) ? ((((var_1_4 * var_1_3) + (var_1_2 + var_1_5)) >= (((((var_1_6) > (var_1_7)) ? (var_1_6) : (var_1_7))) - var_1_8)) ? (((- var_1_2) > (-10 * var_1_5)) ? (var_1_1 == ((signed short int) var_1_9)) : (var_1_1 == ((signed short int) -16))) : (var_1_1 == ((signed short int) var_1_9))) : (var_1_1 == ((signed short int) var_1_9))) && ((var_1_1 <= var_1_3) ? (var_1_11 ? (var_1_10 == ((signed short int) (var_1_12 - var_1_13))) : 1) : 1)) && (((~ var_1_7) != (var_1_4 ^ var_1_3)) ? (var_1_14 == ((signed short int) var_1_9)) : 1)) && (var_1_15 == ((signed long int) ((((var_1_14) > (((((var_1_12) < ((var_1_13 - 1))) ? (var_1_12) : ((var_1_13 - 1)))))) ? (var_1_14) : (((((var_1_12) < ((var_1_13 - 1))) ? (var_1_12) : ((var_1_13 - 1)))))))))) && (var_1_16 == ((signed char) var_1_17))) && ((var_1_10 == (var_1_15 ^ var_1_4)) ? (var_1_18 == ((unsigned char) ((! (var_1_19 || var_1_20)) && var_1_21))) : 1)) && (var_1_18 ? (var_1_22 == ((signed short int) (var_1_12 - (var_1_23 + (8 + var_1_24))))) : (var_1_11 ? (var_1_22 == ((signed short int) ((var_1_23 + 4) - var_1_24))) : (var_1_22 == ((signed short int) var_1_23))))
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
