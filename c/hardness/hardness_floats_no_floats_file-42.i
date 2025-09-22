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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
signed short int var_1_2 = -8;
signed short int var_1_3 = -200;
signed long int var_1_4 = 64;
signed long int var_1_5 = 256;
signed long int var_1_6 = 10;
signed long int var_1_7 = 100;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 4;
signed long int var_1_10 = 50;
signed long int var_1_11 = 25;
signed long int var_1_12 = 0;
signed long int var_1_13 = 5;
signed long int var_1_14 = 8;
signed char var_1_15 = -1;
signed char var_1_16 = -64;
void initially(void) {
}
void step(void) {
 if (var_1_2 > var_1_3) {
  var_1_1 = (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) - 10);
 } else {
  var_1_1 = (((((var_1_5 - var_1_6)) > ((var_1_4 - var_1_7))) ? ((var_1_5 - var_1_6)) : ((var_1_4 - var_1_7))));
 }
 var_1_8 = (var_1_9 + 100);
 var_1_10 = ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)));
 signed long int stepLocal_2 = var_1_7;
 unsigned char stepLocal_1 = var_1_7 > var_1_9;
 signed long int stepLocal_0 = ~ -1;
 if (stepLocal_2 > var_1_6) {
  if ((var_1_10 > -2) || stepLocal_1) {
   if (var_1_1 == stepLocal_0) {
    var_1_13 = (var_1_14 - ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (1)) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (1))));
   } else {
    var_1_13 = var_1_12;
   }
  } else {
   var_1_13 = var_1_12;
  }
 } else {
  var_1_13 = var_1_12;
 }
 var_1_15 = var_1_16;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_2 > var_1_3) ? (var_1_1 == ((signed long int) (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) - 10))) : (var_1_1 == ((signed long int) (((((var_1_5 - var_1_6)) > ((var_1_4 - var_1_7))) ? ((var_1_5 - var_1_6)) : ((var_1_4 - var_1_7))))))) && (var_1_8 == ((unsigned char) (var_1_9 + 100)))) && (var_1_10 == ((signed long int) ((((var_1_11) > (var_1_12)) ? (var_1_11) : (var_1_12)))))) && ((var_1_7 > var_1_6) ? (((var_1_10 > -2) || (var_1_7 > var_1_9)) ? ((var_1_1 == (~ -1)) ? (var_1_13 == ((signed long int) (var_1_14 - ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < (1)) ? (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (1)))))) : (var_1_13 == ((signed long int) var_1_12))) : (var_1_13 == ((signed long int) var_1_12))) : (var_1_13 == ((signed long int) var_1_12)))) && (var_1_15 == ((signed char) var_1_16))
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
