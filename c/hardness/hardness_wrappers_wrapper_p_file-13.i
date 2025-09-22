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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 25;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 8;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 256;
unsigned short int* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 16;
signed char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 10;
signed char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 16;
signed char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 4;
unsigned short int* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 50;
unsigned short int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 1;
signed long int* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 4.375;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 7.65;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 100.75;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 32.4;
float* var_1_15_Pointer = &(var_1_15);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer))) {
  (*(var_1_1_Pointer)) = (((((*(var_1_3_Pointer))) > ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer)))));
 }
 if (((*(var_1_1_Pointer)) == (*(var_1_4_Pointer))) || (*(var_1_2_Pointer))) {
  (*(var_1_5_Pointer)) = ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer)));
 } else {
  if ((*(var_1_2_Pointer)) || (*(var_1_8_Pointer))) {
   (*(var_1_5_Pointer)) = (*(var_1_6_Pointer));
  }
 }
 signed char stepLocal_0 = (*(var_1_7_Pointer));
 if ((*(var_1_4_Pointer)) < stepLocal_0) {
  (*(var_1_9_Pointer)) = (*(var_1_3_Pointer));
 } else {
  (*(var_1_9_Pointer)) = ((*(var_1_7_Pointer)) + (*(var_1_10_Pointer)));
 }
 unsigned short int stepLocal_1 = (*(var_1_10_Pointer));
 if ((*(var_1_3_Pointer)) > stepLocal_1) {
  if (((*(var_1_12_Pointer)) * (- (*(var_1_13_Pointer)))) < (- (*(var_1_14_Pointer)))) {
   (*(var_1_11_Pointer)) = (*(var_1_4_Pointer));
  }
 } else {
  if ((*(var_1_12_Pointer)) < ((*(var_1_13_Pointer)) / (*(var_1_15_Pointer)))) {
   if ((*(var_1_15_Pointer)) > (*(var_1_14_Pointer))) {
    (*(var_1_11_Pointer)) = (*(var_1_4_Pointer));
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65534);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (((((*(var_1_3_Pointer))) > ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer))))))) : 1) && ((((*(var_1_1_Pointer)) == (*(var_1_4_Pointer))) || (*(var_1_2_Pointer))) ? ((*(var_1_5_Pointer)) == ((signed char) ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))))) : (((*(var_1_2_Pointer)) || (*(var_1_8_Pointer))) ? ((*(var_1_5_Pointer)) == ((signed char) (*(var_1_6_Pointer)))) : 1))) && (((*(var_1_4_Pointer)) < (*(var_1_7_Pointer))) ? ((*(var_1_9_Pointer)) == ((unsigned short int) (*(var_1_3_Pointer)))) : ((*(var_1_9_Pointer)) == ((unsigned short int) ((*(var_1_7_Pointer)) + (*(var_1_10_Pointer))))))) && (((*(var_1_3_Pointer)) > (*(var_1_10_Pointer))) ? ((((*(var_1_12_Pointer)) * (- (*(var_1_13_Pointer)))) < (- (*(var_1_14_Pointer)))) ? ((*(var_1_11_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))) : 1) : (((*(var_1_12_Pointer)) < ((*(var_1_13_Pointer)) / (*(var_1_15_Pointer)))) ? (((*(var_1_15_Pointer)) > (*(var_1_14_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))) : 1) : 1))
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
