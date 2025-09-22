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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3225_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int var_1_3 = 128;
unsigned short int var_1_4 = 4;
unsigned short int var_1_5 = 0;
signed short int var_1_6 = 0;
unsigned char var_1_7 = 1;
signed short int var_1_8 = -2;
signed short int var_1_9 = 500;
unsigned long int var_1_10 = 10;
unsigned char var_1_11 = 2;
unsigned char var_1_12 = 64;
unsigned long int var_1_13 = 4;
signed long int var_1_14 = 50;
unsigned char var_1_15 = 5;
void initially(void) {
}
void step(void) {
 if (var_1_7) {
  var_1_6 = (var_1_8 + var_1_9);
 }
 var_1_14 = ((((((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) < (var_1_6)) ? (((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) : (var_1_6)));
 var_1_15 = var_1_11;
 if (var_1_6 >= -50) {
  var_1_1 = (((((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) > (var_1_5)) ? ((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_5)));
 }
 if ((var_1_1 / (var_1_11 + var_1_12)) != ((var_1_4 >> var_1_13) ^ (~ var_1_8))) {
  if (var_1_9 > var_1_13) {
   var_1_10 = var_1_5;
  } else {
   var_1_10 = var_1_13;
  }
 } else {
  var_1_10 = var_1_1;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 128);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 15);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((var_1_6 >= -50) ? (var_1_1 == ((unsigned short int) (((((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) > (var_1_5)) ? ((var_1_3 + ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))))) : (var_1_5))))) : 1) && (var_1_7 ? (var_1_6 == ((signed short int) (var_1_8 + var_1_9))) : 1)) && (((var_1_1 / (var_1_11 + var_1_12)) != ((var_1_4 >> var_1_13) ^ (~ var_1_8))) ? ((var_1_9 > var_1_13) ? (var_1_10 == ((unsigned long int) var_1_5)) : (var_1_10 == ((unsigned long int) var_1_13))) : (var_1_10 == ((unsigned long int) var_1_1)))) && (var_1_14 == ((signed long int) ((((((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) < (var_1_6)) ? (((((var_1_11) > (var_1_6)) ? (var_1_11) : (var_1_6)))) : (var_1_6)))))) && (var_1_15 == ((unsigned char) var_1_11))
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
