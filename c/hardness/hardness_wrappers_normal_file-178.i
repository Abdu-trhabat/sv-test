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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 0;
signed long int var_1_5 = -1;
signed long int var_1_6 = 2;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned short int var_1_9 = 8;
unsigned long int var_1_10 = 1;
unsigned short int var_1_12 = 24832;
unsigned short int var_1_13 = 24891;
signed short int var_1_14 = 256;
signed short int var_1_15 = 128;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 64;
signed short int var_1_19 = 256;
signed short int var_1_20 = -25;
unsigned char var_1_21 = 25;
void initially(void) {
}
void step(void) {
 var_1_16 = (var_1_17 + var_1_18);
 var_1_19 = var_1_17;
 var_1_20 = var_1_18;
 var_1_21 = var_1_17;
 unsigned long int stepLocal_1 = var_1_10;
 unsigned long int stepLocal_0 = ((((var_1_5 * var_1_10)) > (var_1_20)) ? ((var_1_5 * var_1_10)) : (var_1_20));
 if (256u <= stepLocal_0) {
  if (var_1_19 < stepLocal_1) {
   var_1_9 = ((var_1_12 + var_1_13) - var_1_20);
  } else {
   var_1_9 = var_1_12;
  }
 }
 if (var_1_8) {
  var_1_14 = var_1_21;
 } else {
  var_1_14 = ((((var_1_16) < ((var_1_21 - var_1_15))) ? (var_1_16) : ((var_1_21 - var_1_15))));
 }
 if (! var_1_2) {
  if (! var_1_2) {
   var_1_1 = (((var_1_21 + var_1_9) > (var_1_5 * var_1_6)) || var_1_7);
  } else {
   var_1_1 = var_1_8;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16383);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16384);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((! var_1_2) ? ((! var_1_2) ? (var_1_1 == ((unsigned char) (((var_1_21 + var_1_9) > (var_1_5 * var_1_6)) || var_1_7))) : (var_1_1 == ((unsigned char) var_1_8))) : 1) && ((256u <= (((((var_1_5 * var_1_10)) > (var_1_20)) ? ((var_1_5 * var_1_10)) : (var_1_20)))) ? ((var_1_19 < var_1_10) ? (var_1_9 == ((unsigned short int) ((var_1_12 + var_1_13) - var_1_20))) : (var_1_9 == ((unsigned short int) var_1_12))) : 1)) && (var_1_8 ? (var_1_14 == ((signed short int) var_1_21)) : (var_1_14 == ((signed short int) ((((var_1_16) < ((var_1_21 - var_1_15))) ? (var_1_16) : ((var_1_21 - var_1_15)))))))) && (var_1_16 == ((unsigned char) (var_1_17 + var_1_18)))) && (var_1_19 == ((signed short int) var_1_17))) && (var_1_20 == ((signed short int) var_1_18))) && (var_1_21 == ((unsigned char) var_1_17))
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
