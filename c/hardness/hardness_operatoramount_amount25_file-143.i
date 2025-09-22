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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -8;
unsigned char var_1_4 = 1;
signed short int var_1_5 = 100;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 4;
unsigned char var_1_9 = 64;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_3 = var_1_13;
 if (var_1_4) {
  if (var_1_7 && stepLocal_3) {
   var_1_12 = ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)));
  }
 }
 unsigned long int stepLocal_0 = var_1_12;
 if ((- var_1_12) <= stepLocal_0) {
  if (! var_1_4) {
   var_1_1 = ((((1 - var_1_5) < 0 ) ? -(1 - var_1_5) : (1 - var_1_5)));
  }
 } else {
  var_1_1 = var_1_5;
 }
 unsigned long int stepLocal_2 = var_1_12;
 unsigned char stepLocal_1 = ! var_1_7;
 if (var_1_4 && stepLocal_1) {
  var_1_6 = var_1_8;
 } else {
  if (var_1_1 != stepLocal_2) {
   var_1_6 = ((((var_1_8) < (((var_1_9 - var_1_10) + var_1_11))) ? (var_1_8) : (((var_1_9 - var_1_10) + var_1_11))));
  } else {
   var_1_6 = var_1_11;
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 63);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((- var_1_12) <= var_1_12) ? ((! var_1_4) ? (var_1_1 == ((signed short int) ((((1 - var_1_5) < 0 ) ? -(1 - var_1_5) : (1 - var_1_5))))) : 1) : (var_1_1 == ((signed short int) var_1_5))) && ((var_1_4 && (! var_1_7)) ? (var_1_6 == ((unsigned char) var_1_8)) : ((var_1_1 != var_1_12) ? (var_1_6 == ((unsigned char) ((((var_1_8) < (((var_1_9 - var_1_10) + var_1_11))) ? (var_1_8) : (((var_1_9 - var_1_10) + var_1_11)))))) : (var_1_6 == ((unsigned char) var_1_11))))) && (var_1_4 ? ((var_1_7 && var_1_13) ? (var_1_12 == ((unsigned long int) ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))))) : 1) : 1)
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
