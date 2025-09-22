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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 10;
signed long int var_1_4 = -256;
unsigned long int var_1_5 = 32;
unsigned long int var_1_6 = 3965951818;
unsigned long int var_1_7 = 50;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed char var_1_13 = -10;
signed char var_1_14 = -100;
signed char var_1_15 = 64;
unsigned long int var_1_16 = 32;
unsigned long int var_1_17 = 10000000;
signed long int var_1_18 = 50;
signed long int var_1_19 = 0;
signed long int var_1_20 = 4;
unsigned char var_1_21 = 0;
signed long int last_1_var_1_1 = 10;
void initially(void) {
}
void step(void) {
 var_1_5 = (var_1_6 - var_1_7);
 if (var_1_12) {
  var_1_13 = ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15)));
 }
 var_1_16 = (var_1_7 + ((((256u) < (var_1_17)) ? (256u) : (var_1_17))));
 unsigned long int stepLocal_0 = var_1_6;
 if (var_1_17 != stepLocal_0) {
  var_1_18 = (var_1_19 + var_1_20);
 }
 var_1_21 = var_1_12;
 if ((last_1_var_1_1 / 1) != var_1_18) {
  if (last_1_var_1_1 == var_1_18) {
   var_1_1 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
  }
 }
 if (var_1_21) {
  var_1_8 = var_1_10;
 } else {
  if (256 >= var_1_7) {
   var_1_8 = (var_1_10 || var_1_11);
  } else {
   var_1_8 = ((var_1_1 <= (var_1_1 * var_1_4)) && var_1_12);
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 2147483647);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= -2147483648);
 assume_abort_if_not(var_1_20 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 return ((((((((last_1_var_1_1 / 1) != var_1_18) ? ((last_1_var_1_1 == var_1_18) ? (var_1_1 == ((signed long int) ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : 1) : 1) && (var_1_5 == ((unsigned long int) (var_1_6 - var_1_7)))) && (var_1_21 ? (var_1_8 == ((unsigned char) var_1_10)) : ((256 >= var_1_7) ? (var_1_8 == ((unsigned char) (var_1_10 || var_1_11))) : (var_1_8 == ((unsigned char) ((var_1_1 <= (var_1_1 * var_1_4)) && var_1_12)))))) && (var_1_12 ? (var_1_13 == ((signed char) ((((var_1_14) < (var_1_15)) ? (var_1_14) : (var_1_15))))) : 1)) && (var_1_16 == ((unsigned long int) (var_1_7 + ((((256u) < (var_1_17)) ? (256u) : (var_1_17))))))) && ((var_1_17 != var_1_6) ? (var_1_18 == ((signed long int) (var_1_19 + var_1_20))) : 1)) && (var_1_21 == ((unsigned char) var_1_12))
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
