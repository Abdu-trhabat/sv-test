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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 10000;
signed long int var_1_2 = 256;
signed long int var_1_3 = 64;
signed long int var_1_4 = 10000000;
signed long int var_1_5 = 1;
signed short int var_1_6 = 0;
signed short int var_1_7 = 4;
unsigned char var_1_8 = 10;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 2;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 128;
unsigned long int var_1_14 = 2;
signed short int last_1_var_1_1 = 10000;
unsigned long int last_1_var_1_14 = 2;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_5 = var_1_10;
 signed long int stepLocal_4 = 200;
 signed long int stepLocal_3 = var_1_3;
 if (last_1_var_1_1 == stepLocal_5) {
  if (stepLocal_3 <= (last_1_var_1_14 / 500)) {
   if (var_1_6 <= stepLocal_4) {
    var_1_13 = (((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) < 0 ) ? -((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) : ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))));
   }
  } else {
   var_1_13 = var_1_12;
  }
 }
 var_1_14 = var_1_13;
 signed long int stepLocal_0 = var_1_2 - var_1_3;
 if (stepLocal_0 >= (var_1_4 - var_1_5)) {
  var_1_1 = ((((var_1_6 - var_1_7) < 0 ) ? -(var_1_6 - var_1_7) : (var_1_6 - var_1_7)));
 }
 unsigned long int stepLocal_2 = ~ var_1_14;
 signed long int stepLocal_1 = var_1_4 + (var_1_6 - var_1_10);
 if (var_1_9) {
  if (var_1_7 > stepLocal_1) {
   if (var_1_5 < stepLocal_2) {
    var_1_8 = var_1_12;
   } else {
    var_1_8 = 10;
   }
  } else {
   var_1_8 = 1;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_14 = var_1_14;
}
int property(void) {
 return (((((var_1_2 - var_1_3) >= (var_1_4 - var_1_5)) ? (var_1_1 == ((signed short int) ((((var_1_6 - var_1_7) < 0 ) ? -(var_1_6 - var_1_7) : (var_1_6 - var_1_7))))) : 1) && (var_1_9 ? ((var_1_7 > (var_1_4 + (var_1_6 - var_1_10))) ? ((var_1_5 < (~ var_1_14)) ? (var_1_8 == ((unsigned char) var_1_12)) : (var_1_8 == ((unsigned char) 10))) : (var_1_8 == ((unsigned char) 1))) : 1)) && ((last_1_var_1_1 == var_1_10) ? ((var_1_3 <= (last_1_var_1_14 / 500)) ? ((var_1_6 <= 200) ? (var_1_13 == ((unsigned char) (((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) < 0 ) ? -((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) : ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))) : 1) : (var_1_13 == ((unsigned char) var_1_12))) : 1)) && (var_1_14 == ((unsigned long int) var_1_13))
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
