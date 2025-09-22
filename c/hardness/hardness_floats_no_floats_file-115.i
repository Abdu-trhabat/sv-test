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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 4;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 0;
signed long int var_1_4 = 1000000;
signed long int var_1_5 = -4;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 5;
unsigned long int var_1_10 = 100;
unsigned char var_1_11 = 10;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 10;
void initially(void) {
}
void step(void) {
 if (var_1_2) {
  var_1_7 = (! var_1_8);
 }
 if (! var_1_7) {
  var_1_9 = (2327469510u - var_1_10);
 }
 unsigned long int stepLocal_3 = var_1_9;
 unsigned char stepLocal_2 = ! (var_1_3 < var_1_5);
 unsigned long int stepLocal_1 = (((8) > (var_1_9)) ? (8) : (var_1_9));
 if (stepLocal_2 || var_1_7) {
  if (var_1_7) {
   var_1_11 = ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13)));
  }
 } else {
  if (stepLocal_1 >= var_1_13) {
   if (stepLocal_3 < 25) {
    var_1_11 = var_1_13;
   } else {
    var_1_11 = var_1_12;
   }
  } else {
   var_1_11 = var_1_13;
  }
 }
 unsigned char stepLocal_0 = var_1_7;
 if (var_1_7) {
  var_1_1 = (var_1_3 + (10 - var_1_4));
 } else {
  if ((var_1_4 <= (var_1_3 / var_1_5)) || stepLocal_0) {
   var_1_1 = var_1_3;
  } else {
   var_1_1 = 50;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_7 ? (var_1_1 == ((signed long int) (var_1_3 + (10 - var_1_4)))) : (((var_1_4 <= (var_1_3 / var_1_5)) || var_1_7) ? (var_1_1 == ((signed long int) var_1_3)) : (var_1_1 == ((signed long int) 50)))) && (var_1_2 ? (var_1_7 == ((unsigned char) (! var_1_8))) : 1)) && ((! var_1_7) ? (var_1_9 == ((unsigned long int) (2327469510u - var_1_10))) : 1)) && (((! (var_1_3 < var_1_5)) || var_1_7) ? (var_1_7 ? (var_1_11 == ((unsigned char) ((((var_1_12) > (var_1_13)) ? (var_1_12) : (var_1_13))))) : 1) : ((((((8) > (var_1_9)) ? (8) : (var_1_9))) >= var_1_13) ? ((var_1_9 < 25) ? (var_1_11 == ((unsigned char) var_1_13)) : (var_1_11 == ((unsigned char) var_1_12))) : (var_1_11 == ((unsigned char) var_1_13))))
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
