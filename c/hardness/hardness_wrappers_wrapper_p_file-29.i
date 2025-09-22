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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 2.5;
float* var_1_1_Pointer = &(var_1_1);
float var_1_3 = 9.3;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 3.4;
float* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 32;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 10;
unsigned short int* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 64;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 16;
unsigned short int* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 1;
unsigned short int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 8;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 5;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 8;
unsigned char* var_1_14_Pointer = &(var_1_14);
void initially(void) {
}
void step(void) {
 (*(var_1_12_Pointer)) = (*(var_1_13_Pointer));
 (*(var_1_14_Pointer)) = (*(var_1_11_Pointer));
 if ((*(var_1_12_Pointer))) {
  (*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
 } else {
  if (! ((*(var_1_3_Pointer)) < (*(var_1_4_Pointer)))) {
   (*(var_1_1_Pointer)) = (((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer)))));
  }
 }
 if (((*(var_1_1_Pointer)) + 8.125) > ((*(var_1_1_Pointer)) * (*(var_1_3_Pointer)))) {
  (*(var_1_5_Pointer)) = ((((((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) > ((*(var_1_8_Pointer)))) ? (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) : ((*(var_1_8_Pointer)))));
 } else {
  (*(var_1_5_Pointer)) = (*(var_1_8_Pointer));
 }
 unsigned short int stepLocal_0 = (*(var_1_6_Pointer));
 if ((((((*(var_1_3_Pointer))) < ((*(var_1_1_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_1_Pointer))))) == (*(var_1_1_Pointer))) {
  if (stepLocal_0 > (5 * (*(var_1_8_Pointer)))) {
   if ((*(var_1_1_Pointer)) < ((*(var_1_1_Pointer)) * 256.5f)) {
    (*(var_1_9_Pointer)) = (*(var_1_6_Pointer));
   }
  }
 }
 if ((*(var_1_1_Pointer)) < (*(var_1_3_Pointer))) {
  (*(var_1_10_Pointer)) = (*(var_1_11_Pointer));
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_12_Pointer)) ? ((*(var_1_1_Pointer)) == ((float) (*(var_1_3_Pointer)))) : ((! ((*(var_1_3_Pointer)) < (*(var_1_4_Pointer)))) ? ((*(var_1_1_Pointer)) == ((float) (((((*(var_1_3_Pointer))) < 0 ) ? -((*(var_1_3_Pointer))) : ((*(var_1_3_Pointer))))))) : 1)) && ((((*(var_1_1_Pointer)) + 8.125) > ((*(var_1_1_Pointer)) * (*(var_1_3_Pointer)))) ? ((*(var_1_5_Pointer)) == ((unsigned short int) ((((((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) > ((*(var_1_8_Pointer)))) ? (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) : ((*(var_1_8_Pointer))))))) : ((*(var_1_5_Pointer)) == ((unsigned short int) (*(var_1_8_Pointer)))))) && (((((((*(var_1_3_Pointer))) < ((*(var_1_1_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_1_Pointer))))) == (*(var_1_1_Pointer))) ? (((*(var_1_6_Pointer)) > (5 * (*(var_1_8_Pointer)))) ? (((*(var_1_1_Pointer)) < ((*(var_1_1_Pointer)) * 256.5f)) ? ((*(var_1_9_Pointer)) == ((unsigned short int) (*(var_1_6_Pointer)))) : 1) : 1) : 1)) && (((*(var_1_1_Pointer)) < (*(var_1_3_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_11_Pointer)))) : 1)) && ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_13_Pointer))))) && ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_11_Pointer))))
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
