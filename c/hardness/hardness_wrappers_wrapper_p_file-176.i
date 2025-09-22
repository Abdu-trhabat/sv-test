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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 64;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 1192640562;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 2;
signed long int* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 255.6;
double* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = -1;
signed long int* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 64.25;
double* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = -256;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = -32;
signed long int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 50;
unsigned long int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 5;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
void initially(void) {
}
void step(void) {
 (*(var_1_1_Pointer)) = ((10000000 + 5) - ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))));
 if (! ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer)))) {
  (*(var_1_7_Pointer)) = (((((*(var_1_2_Pointer))) < ((((((*(var_1_3_Pointer))) < (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer))))))) ? ((*(var_1_3_Pointer))) : (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer)))))))))) ? ((*(var_1_2_Pointer))) : ((((((*(var_1_3_Pointer))) < (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer))))))) ? ((*(var_1_3_Pointer))) : (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer)))))))))));
 }
 unsigned long int stepLocal_2 = ((((*(var_1_10_Pointer))) > ((*(var_1_1_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_1_Pointer))));
 if (stepLocal_2 >= (*(var_1_5_Pointer))) {
  (*(var_1_9_Pointer)) = (16 + (*(var_1_11_Pointer)));
 }
 if (((*(var_1_2_Pointer)) * (*(var_1_1_Pointer))) <= (*(var_1_7_Pointer))) {
  (*(var_1_12_Pointer)) = (*(var_1_13_Pointer));
 }
 signed long int stepLocal_1 = (*(var_1_7_Pointer)) * ((*(var_1_2_Pointer)) * (*(var_1_3_Pointer)));
 signed long int stepLocal_0 = (*(var_1_2_Pointer));
 if (stepLocal_0 > (*(var_1_3_Pointer))) {
  if (stepLocal_1 > (-1 / (*(var_1_5_Pointer)))) {
   (*(var_1_4_Pointer)) = (*(var_1_6_Pointer));
  } else {
   (*(var_1_4_Pointer)) = 63.75;
  }
 } else {
  (*(var_1_4_Pointer)) = 10.2;
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= 1073741823);
 assume_abort_if_not(var_1_2 <= 2147483646);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1073741823);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967295);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_1_Pointer)) == ((signed long int) ((10000000 + 5) - ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)))))) && (((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) ? ((((*(var_1_7_Pointer)) * ((*(var_1_2_Pointer)) * (*(var_1_3_Pointer)))) > (-1 / (*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer)) == ((double) (*(var_1_6_Pointer)))) : ((*(var_1_4_Pointer)) == ((double) 63.75))) : ((*(var_1_4_Pointer)) == ((double) 10.2)))) && ((! ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer)))) ? ((*(var_1_7_Pointer)) == ((signed long int) (((((*(var_1_2_Pointer))) < ((((((*(var_1_3_Pointer))) < (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer))))))) ? ((*(var_1_3_Pointer))) : (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer)))))))))) ? ((*(var_1_2_Pointer))) : ((((((*(var_1_3_Pointer))) < (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer))))))) ? ((*(var_1_3_Pointer))) : (((((-128) > ((*(var_1_8_Pointer)))) ? (-128) : ((*(var_1_8_Pointer))))))))))))) : 1)) && (((((((*(var_1_10_Pointer))) > ((*(var_1_1_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_1_Pointer))))) >= (*(var_1_5_Pointer))) ? ((*(var_1_9_Pointer)) == ((unsigned char) (16 + (*(var_1_11_Pointer))))) : 1)) && ((((*(var_1_2_Pointer)) * (*(var_1_1_Pointer))) <= (*(var_1_7_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_13_Pointer)))) : 1)
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
