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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9925_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 255.5;
unsigned char var_1_2 = 16;
signed long int var_1_3 = 4;
float var_1_4 = 1000000000000000.6;
float var_1_5 = 500.5;
float var_1_6 = 99999999999.5;
double var_1_7 = 9.6;
double var_1_8 = -0.2;
double var_1_9 = 25.2;
signed short int var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned long int var_1_13 = 128;
unsigned long int var_1_14 = 32;
signed long int var_1_15 = -64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((8) < 0 ) ? -(8) : (8));
 if ((((((200) < (128)) ? (200) : (128))) - var_1_2) > stepLocal_0) {
  var_1_1 = (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) - var_1_6);
 } else {
  var_1_1 = var_1_6;
 }
 if (var_1_5 >= (var_1_4 + var_1_6)) {
  var_1_7 = ((((var_1_8 + var_1_9) < 0 ) ? -(var_1_8 + var_1_9) : (var_1_8 + var_1_9)));
 }
 if (((var_1_2 + var_1_3) + var_1_13) >= var_1_14) {
  var_1_10 = var_1_2;
 }
 if (((var_1_6 - var_1_4) + var_1_7) >= var_1_5) {
  if (var_1_11) {
   var_1_15 = 100;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 4294967295);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((200) < (128)) ? (200) : (128))) - var_1_2) > ((((8) < 0 ) ? -(8) : (8)))) ? (var_1_1 == ((float) (((((var_1_4) < (var_1_5)) ? (var_1_4) : (var_1_5))) - var_1_6))) : (var_1_1 == ((float) var_1_6))) && ((var_1_5 >= (var_1_4 + var_1_6)) ? (var_1_7 == ((double) ((((var_1_8 + var_1_9) < 0 ) ? -(var_1_8 + var_1_9) : (var_1_8 + var_1_9))))) : 1)) && ((((var_1_2 + var_1_3) + var_1_13) >= var_1_14) ? (var_1_10 == ((signed short int) var_1_2)) : 1)) && ((((var_1_6 - var_1_4) + var_1_7) >= var_1_5) ? (var_1_11 ? (var_1_15 == ((signed long int) 100)) : 1) : 1)
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
