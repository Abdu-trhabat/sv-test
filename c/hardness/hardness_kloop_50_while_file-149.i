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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch14950_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 10;
unsigned char var_1_5 = 50;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 4;
unsigned char var_1_10 = 32;
unsigned short int var_1_11 = 10;
unsigned char var_1_12 = 2;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 17724;
unsigned short int var_1_15 = 32612;
unsigned long int var_1_16 = 8;
unsigned char last_1_var_1_1 = 10;
unsigned short int last_1_var_1_11 = 10;
unsigned char last_1_var_1_12 = 2;
unsigned short int last_1_var_1_13 = 0;
unsigned long int last_1_var_1_16 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = (((var_1_9) > ((last_1_var_1_13 + last_1_var_1_1))) ? (var_1_9) : ((last_1_var_1_13 + last_1_var_1_1)));
 if (((((last_1_var_1_13) < (last_1_var_1_11)) ? (last_1_var_1_13) : (last_1_var_1_11))) > stepLocal_3) {
  var_1_12 = var_1_5;
 } else {
  var_1_12 = var_1_9;
 }
 unsigned char stepLocal_2 = var_1_10;
 unsigned char stepLocal_1 = var_1_7;
 unsigned char stepLocal_0 = var_1_10;
 if (stepLocal_2 > (var_1_5 + last_1_var_1_12)) {
  if (((- last_1_var_1_1) < last_1_var_1_16) && stepLocal_1) {
   if (stepLocal_0 <= last_1_var_1_12) {
    var_1_11 = var_1_10;
   }
  } else {
   var_1_11 = var_1_9;
  }
 } else {
  var_1_11 = var_1_5;
 }
 if (var_1_11 != var_1_15) {
  if (! (last_1_var_1_16 != var_1_12)) {
   var_1_16 = 1000u;
  }
 }
 if (var_1_7) {
  if (var_1_8 && (var_1_16 <= var_1_11)) {
   var_1_6 = (128 - ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10))));
  } else {
   var_1_6 = var_1_10;
  }
 }
 if (var_1_6 > (var_1_11 * var_1_16)) {
  var_1_1 = ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)));
 } else {
  if (var_1_6 < 2) {
   var_1_1 = var_1_5;
  } else {
   if (var_1_6 < var_1_11) {
    var_1_1 = var_1_5;
   } else {
    var_1_1 = 25;
   }
  }
 }
 unsigned char stepLocal_4 = var_1_12;
 if (1 < stepLocal_4) {
  var_1_13 = ((((((var_1_14 + var_1_15) - var_1_6)) > (100)) ? (((var_1_14 + var_1_15) - var_1_6)) : (100)));
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 16384);
 assume_abort_if_not(var_1_15 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 return ((((((var_1_6 > (var_1_11 * var_1_16)) ? (var_1_1 == ((unsigned char) ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))))) : ((var_1_6 < 2) ? (var_1_1 == ((unsigned char) var_1_5)) : ((var_1_6 < var_1_11) ? (var_1_1 == ((unsigned char) var_1_5)) : (var_1_1 == ((unsigned char) 25))))) && (var_1_7 ? ((var_1_8 && (var_1_16 <= var_1_11)) ? (var_1_6 == ((unsigned char) (128 - ((((var_1_9) < (var_1_10)) ? (var_1_9) : (var_1_10)))))) : (var_1_6 == ((unsigned char) var_1_10))) : 1)) && ((var_1_10 > (var_1_5 + last_1_var_1_12)) ? ((((- last_1_var_1_1) < last_1_var_1_16) && var_1_7) ? ((var_1_10 <= last_1_var_1_12) ? (var_1_11 == ((unsigned short int) var_1_10)) : 1) : (var_1_11 == ((unsigned short int) var_1_9))) : (var_1_11 == ((unsigned short int) var_1_5)))) && ((((((last_1_var_1_13) < (last_1_var_1_11)) ? (last_1_var_1_13) : (last_1_var_1_11))) > ((((var_1_9) > ((last_1_var_1_13 + last_1_var_1_1))) ? (var_1_9) : ((last_1_var_1_13 + last_1_var_1_1))))) ? (var_1_12 == ((unsigned char) var_1_5)) : (var_1_12 == ((unsigned char) var_1_9)))) && ((1 < var_1_12) ? (var_1_13 == ((unsigned short int) ((((((var_1_14 + var_1_15) - var_1_6)) > (100)) ? (((var_1_14 + var_1_15) - var_1_6)) : (100))))) : 1)) && ((var_1_11 != var_1_15) ? ((! (last_1_var_1_16 != var_1_12)) ? (var_1_16 == ((unsigned long int) 1000u)) : 1) : 1)
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
