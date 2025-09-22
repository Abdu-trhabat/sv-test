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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12625_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 8;
signed char var_1_3 = -16;
signed char var_1_6 = 8;
signed char var_1_7 = 32;
signed char var_1_8 = -8;
signed char var_1_9 = 32;
unsigned long int var_1_10 = 50;
signed long int var_1_11 = 100000;
signed long int var_1_12 = 1125065735;
signed long int var_1_13 = 16;
unsigned short int var_1_14 = 5;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
signed char last_1_var_1_9 = 32;
unsigned long int last_1_var_1_10 = 50;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = last_1_var_1_10;
 unsigned long int stepLocal_0 = last_1_var_1_10;
 if (((last_1_var_1_9 / var_1_3) + last_1_var_1_10) != stepLocal_0) {
  if (last_1_var_1_9 <= stepLocal_1) {
   var_1_1 = (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8)));
  }
 } else {
  var_1_1 = ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)));
 }
 signed long int stepLocal_2 = - (16 << var_1_1);
 if (stepLocal_2 > var_1_3) {
  var_1_9 = var_1_6;
 }
 signed long int stepLocal_4 = (var_1_12 - var_1_13) >> var_1_14;
 unsigned char stepLocal_3 = var_1_15;
 if ((var_1_1 + (var_1_8 % var_1_3)) >= stepLocal_4) {
  if (stepLocal_3 && var_1_16) {
   var_1_10 = var_1_14;
  } else {
   var_1_10 = var_1_12;
  }
 } else {
  var_1_10 = var_1_11;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 1073741823);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 30);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_10 = var_1_10;
}
int property(void) {
 return (((((last_1_var_1_9 / var_1_3) + last_1_var_1_10) != last_1_var_1_10) ? ((last_1_var_1_9 <= last_1_var_1_10) ? (var_1_1 == ((signed char) (((((var_1_6 + var_1_7)) < (var_1_8)) ? ((var_1_6 + var_1_7)) : (var_1_8))))) : 1) : (var_1_1 == ((signed char) ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) && (((- (16 << var_1_1)) > var_1_3) ? (var_1_9 == ((signed char) var_1_6)) : 1)) && (((var_1_1 + (var_1_8 % var_1_3)) >= ((var_1_12 - var_1_13) >> var_1_14)) ? ((var_1_15 && var_1_16) ? (var_1_10 == ((unsigned long int) var_1_14)) : (var_1_10 == ((unsigned long int) var_1_12))) : (var_1_10 == ((unsigned long int) var_1_11)))
;
}
int main(void) {
 isInitial = 1;
 initially();
 int k_loop;
 for (k_loop = 0; k_loop < 1; k_loop++) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
