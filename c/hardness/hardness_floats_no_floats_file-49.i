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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch49no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
signed long int var_1_2 = 2;
signed long int var_1_3 = -8;
signed long int var_1_4 = 4;
unsigned short int var_1_5 = 25;
unsigned short int var_1_6 = 5;
signed char var_1_7 = -4;
signed short int var_1_8 = -5;
unsigned char var_1_9 = 1;
unsigned short int var_1_10 = 50;
unsigned char var_1_11 = 50;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 8;
void initially(void) {
}
void step(void) {
 if (var_1_2 >= var_1_3) {
  if (var_1_2 < ((- var_1_3) * var_1_4)) {
   var_1_1 = (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + 16);
  } else {
   var_1_1 = var_1_6;
  }
 } else {
  var_1_1 = var_1_5;
 }
 if (var_1_9) {
  var_1_10 = var_1_5;
 }
 unsigned char stepLocal_2 = var_1_9;
 if (stepLocal_2 || var_1_12) {
  var_1_11 = ((var_1_13 - var_1_14) + var_1_15);
 }
 signed short int stepLocal_1 = var_1_8;
 unsigned short int stepLocal_0 = var_1_5;
 if (var_1_2 > var_1_4) {
  if (stepLocal_0 > (((((5) < (var_1_10)) ? (5) : (var_1_10))) >> ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) {
   if (var_1_9) {
    if (stepLocal_1 >= var_1_5) {
     var_1_7 = var_1_8;
    }
   } else {
    var_1_7 = var_1_8;
   }
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
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -30);
 assume_abort_if_not(var_1_8 <= -1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 63);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((var_1_2 >= var_1_3) ? ((var_1_2 < ((- var_1_3) * var_1_4)) ? (var_1_1 == ((unsigned short int) (((((var_1_5) > (var_1_6)) ? (var_1_5) : (var_1_6))) + 16))) : (var_1_1 == ((unsigned short int) var_1_6))) : (var_1_1 == ((unsigned short int) var_1_5))) && ((var_1_2 > var_1_4) ? ((var_1_5 > (((((5) < (var_1_10)) ? (5) : (var_1_10))) >> ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))) ? (var_1_9 ? ((var_1_8 >= var_1_5) ? (var_1_7 == ((signed char) var_1_8)) : 1) : (var_1_7 == ((signed char) var_1_8))) : 1) : 1)) && (var_1_9 ? (var_1_10 == ((unsigned short int) var_1_5)) : 1)) && ((var_1_9 || var_1_12) ? (var_1_11 == ((unsigned char) ((var_1_13 - var_1_14) + var_1_15))) : 1)
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
