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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19625_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 8;
unsigned short int var_1_3 = 256;
unsigned short int var_1_4 = 19354;
unsigned short int var_1_5 = 16876;
unsigned short int var_1_6 = 2;
unsigned short int var_1_7 = 256;
unsigned short int var_1_8 = 39271;
unsigned short int var_1_9 = 128;
unsigned char var_1_10 = 0;
signed char var_1_11 = 16;
signed char var_1_12 = 0;
unsigned char var_1_13 = 1;
void initially(void) {
}
void step(void) {
 var_1_7 = ((((var_1_3) < ((((((var_1_5 + var_1_4)) > ((var_1_8 - var_1_9))) ? ((var_1_5 + var_1_4)) : ((var_1_8 - var_1_9)))))) ? (var_1_3) : ((((((var_1_5 + var_1_4)) > ((var_1_8 - var_1_9))) ? ((var_1_5 + var_1_4)) : ((var_1_8 - var_1_9)))))));
 if ((var_1_9 * (var_1_11 - var_1_12)) == 64) {
  var_1_10 = (! var_1_13);
 }
 if (var_1_10) {
  var_1_1 = ((((var_1_3) > (100)) ? (var_1_3) : (100)));
 } else {
  var_1_1 = ((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) - 32) + 10);
 }
 unsigned short int stepLocal_1 = var_1_7;
 unsigned short int stepLocal_0 = var_1_3;
 if (stepLocal_1 <= var_1_3) {
  if (var_1_7 >= stepLocal_0) {
   var_1_6 = ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4)));
  }
 } else {
  var_1_6 = var_1_3;
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 16383);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 16383);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((var_1_10 ? (var_1_1 == ((unsigned short int) ((((var_1_3) > (100)) ? (var_1_3) : (100))))) : (var_1_1 == ((unsigned short int) ((((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) - 32) + 10)))) && ((var_1_7 <= var_1_3) ? ((var_1_7 >= var_1_3) ? (var_1_6 == ((unsigned short int) ((((var_1_3) < (var_1_4)) ? (var_1_3) : (var_1_4))))) : 1) : (var_1_6 == ((unsigned short int) var_1_3)))) && (var_1_7 == ((unsigned short int) ((((var_1_3) < ((((((var_1_5 + var_1_4)) > ((var_1_8 - var_1_9))) ? ((var_1_5 + var_1_4)) : ((var_1_8 - var_1_9)))))) ? (var_1_3) : ((((((var_1_5 + var_1_4)) > ((var_1_8 - var_1_9))) ? ((var_1_5 + var_1_4)) : ((var_1_8 - var_1_9)))))))))) && (((var_1_9 * (var_1_11 - var_1_12)) == 64) ? (var_1_10 == ((unsigned char) (! var_1_13))) : 1)
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
