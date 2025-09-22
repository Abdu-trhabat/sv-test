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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 8;
unsigned char var_1_2 = 0;
unsigned long int var_1_3 = 1;
signed long int var_1_4 = 128;
signed long int var_1_5 = 2;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 128;
signed long int var_1_8 = -4;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 5;
signed long int var_1_11 = -32;
unsigned short int var_1_12 = 5;
signed long int var_1_13 = 32;
signed long int var_1_14 = 128;
unsigned short int last_1_var_1_12 = 5;
void initially(void) {
}
void step(void) {
 if (var_1_4 < var_1_5) {
  if (var_1_6) {
   var_1_3 = last_1_var_1_12;
  } else {
   var_1_3 = (10u + var_1_2);
  }
 } else {
  var_1_3 = (last_1_var_1_12 + var_1_2);
 }
 var_1_12 = var_1_3;
 var_1_1 = (((((((1) < (var_1_2)) ? (1) : (var_1_2))) < 0 ) ? -((((1) < (var_1_2)) ? (1) : (var_1_2))) : ((((1) < (var_1_2)) ? (1) : (var_1_2)))));
 signed long int stepLocal_0 = 40932 - var_1_12;
 if (stepLocal_0 != var_1_3) {
  var_1_7 = ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)));
 } else {
  var_1_7 = ((((var_1_2) < (var_1_12)) ? (var_1_2) : (var_1_12)));
 }
 unsigned char stepLocal_1 = var_1_6;
 if (stepLocal_1 && var_1_9) {
  var_1_8 = ((((var_1_3 - var_1_7) < 0 ) ? -(var_1_3 - var_1_7) : (var_1_3 - var_1_7)));
 } else {
  if (var_1_6) {
   var_1_8 = (var_1_7 + var_1_2);
  }
 }
 var_1_10 = var_1_2;
 var_1_11 = var_1_7;
 var_1_13 = var_1_14;
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 254);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483648);
 assume_abort_if_not(var_1_14 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 return (((((((var_1_1 == ((unsigned char) (((((((1) < (var_1_2)) ? (1) : (var_1_2))) < 0 ) ? -((((1) < (var_1_2)) ? (1) : (var_1_2))) : ((((1) < (var_1_2)) ? (1) : (var_1_2))))))) && ((var_1_4 < var_1_5) ? (var_1_6 ? (var_1_3 == ((unsigned long int) last_1_var_1_12)) : (var_1_3 == ((unsigned long int) (10u + var_1_2)))) : (var_1_3 == ((unsigned long int) (last_1_var_1_12 + var_1_2))))) && (((40932 - var_1_12) != var_1_3) ? (var_1_7 == ((unsigned short int) ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2))))) : (var_1_7 == ((unsigned short int) ((((var_1_2) < (var_1_12)) ? (var_1_2) : (var_1_12))))))) && ((var_1_6 && var_1_9) ? (var_1_8 == ((signed long int) ((((var_1_3 - var_1_7) < 0 ) ? -(var_1_3 - var_1_7) : (var_1_3 - var_1_7))))) : (var_1_6 ? (var_1_8 == ((signed long int) (var_1_7 + var_1_2))) : 1))) && (var_1_10 == ((unsigned char) var_1_2))) && (var_1_11 == ((signed long int) var_1_7))) && (var_1_12 == ((unsigned short int) var_1_3))) && (var_1_13 == ((signed long int) var_1_14))
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
